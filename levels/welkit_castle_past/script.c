#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"
#include "make_const_nonconst.h"
#include "levels/welkit_castle_past/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_welkit_castle_past_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _welkit_castle_past_segment_7SegmentRomStart, _welkit_castle_past_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_SSL_PALM_TREE, palm_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_SL_SNOW_TREE, snow_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_0_STARS, castle_door_1_star_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_HAUNTED_DOOR, haunted_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_METAL_DOOR, metal_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_0_STARS, castle_door_0_star_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_KEY_DOOR, key_door_geo), 
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, welkit_castle_past_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -1500, 0, -500, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_SSL_PALM_TREE, -1100, 0, -500, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_SL_SNOW_TREE, -700, 0, -500, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_CASTLE_DOOR_0_STARS, 1200, 0, -1600, 0, 0, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_BBH_HAUNTED_DOOR, 1200, 0, -1200, 0, 0, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_CASTLE_KEY_DOOR, -1689, 539, 3630, 0, 90, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_CASTLE_KEY_DOOR, -1689, 539, 3480, 0, -90, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_CASTLE_METAL_DOOR, 1200, 0, -800, 0, 0, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_CASTLE_WOODEN_DOOR, 1200, 0, -400, 0, 0, 0, 0x00000000, bhvDoor),
		TERRAIN(welkit_castle_past_area_1_collision),
		MACRO_OBJECTS(welkit_castle_past_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_INSIDE_CASTLE),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	FREE_LEVEL_POOL(),
	MARIO_POS(1, 0, 0, 0, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};