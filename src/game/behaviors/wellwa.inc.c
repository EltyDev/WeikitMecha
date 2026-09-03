enum WellwaActions {
    WELLWA_ACT_IDLE,
    WELLWA_ACT_TALKING,
    WELLWA_ACT_GIVING_KEY,
    WELLWA_ACT_GIVING_KEY_IDLE
};

int wellwa_can_give_key() {
     s32 stars = save_file_get_total_star_count(gCurrSaveFileNum - 1, COURSE_MIN - 1, COURSE_MAX - 1);
     return stars >= 0;
}

void wellwa_set_animation_transition(s32 fromAnim, s32 toAnim) {
    o->oWellwaFromAnimation = fromAnim;
    o->oWellwaToAnimation = toAnim;
    cur_obj_init_animation(o->oWellwaFromAnimation);
}

void wellwa_set_animation(s32 fromAnim) {
    if (o->oWellwaFromAnimation == fromAnim)
        return;
    wellwa_set_animation_transition(fromAnim, fromAnim);
}

void wellwa_init(void) {
    o->oInteractionSubtype = INT_SUBTYPE_NPC;
    o->oWellwaFromAnimation = WELLWA_ANIM_WELLWA_IDLE_WORRIED;
    o->oWellwaToAnimation = WELLWA_ANIM_WELLWA_IDLE_WORRIED;
}

void wellwa_give_key(void) {
    s16 animIndex = o->oWellwaFromAnimation;
    if (animIndex == WELLWA_ANIM_WELLWA_GIVING_KEY_IDLE && cur_obj_check_if_at_animation_end()) {
        struct Object *key = spawn_object_relative(0, 0, 100, 200, o, MODEL_BOWSER_KEY, bhvBowserKey);
        key->oAngleVelYaw = 0x400;
        o->oAction = WELLWA_ACT_GIVING_KEY_IDLE;
    }
}

void wellwa_act_talking(void) {
    cur_obj_rotate_yaw_toward(o->oAngleToMario, 0x800);
    if (set_mario_npc_dialog(MARIO_DIALOG_LOOK_FRONT) == MARIO_DIALOG_STATUS_SPEAK) {
        o->activeFlags |= ACTIVE_FLAG_INITIATED_TIME_STOP;
        s16 response = cutscene_object_with_dialog(CUTSCENE_DIALOG, o, DIALOG_170);
        if (response != DIALOG_RESPONSE_NONE) {
            set_mario_npc_dialog(MARIO_DIALOG_STOP);
            o->activeFlags &= ~ACTIVE_FLAG_INITIATED_TIME_STOP;
            if (wellwa_can_give_key()) {
                o->oInteractionSubtype = 0;
                o->oAction = WELLWA_ACT_GIVING_KEY;
                wellwa_set_animation_transition(WELLWA_ANIM_WELLWA_GIVING_KEY, WELLWA_ANIM_WELLWA_GIVING_KEY_IDLE);
            } else
                o->oAction = WELLWA_ACT_IDLE;
        }
    }
}

void wellwa_act_idle(void) {
    if (o->oInteractStatus == INT_STATUS_INTERACTED) {
        o->oInteractStatus = INT_STATUS_NONE;
        o->oAction = WELLWA_ACT_TALKING;
        wellwa_set_animation_transition(WELLWA_ANIM_WELLWA_IDLE_WORRIED_TO_TALKING, WELLWA_ANIM_WELLWA_TALKING);
    } else
        wellwa_set_animation(WELLWA_ANIM_WELLWA_IDLE_WORRIED);
}

void wellwa_update_animation(void) {
    if (o->oWellwaFromAnimation != o->oWellwaToAnimation) {
        if (cur_obj_check_if_at_animation_end()) {
            cur_obj_init_animation(o->oWellwaToAnimation);
            o->oWellwaFromAnimation = o->oWellwaToAnimation;
        }
    }
}

void wellwa_update(void) {
    cur_obj_push_mario_away(80.0f);
    switch (o->oAction) {
        case WELLWA_ACT_IDLE:
            wellwa_act_idle();
            break;
        case WELLWA_ACT_TALKING:
            wellwa_act_talking();
            break;
        case WELLWA_ACT_GIVING_KEY:
            wellwa_give_key();
            break;
    }
    wellwa_update_animation();
    o->oInteractStatus = INT_STATUS_NONE;
}
