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

#include "make_const_nonconst.h"
#include "levels/welkit_city/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_welkit_city_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _welkit_city_segment_7SegmentRomStart, _welkit_city_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group8_yay0SegmentRomStart, _group8_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group8_geoSegmentRomStart, _group8_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group15_yay0SegmentRomStart, _group15_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group15_geoSegmentRomStart, _group15_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_9), 
	JUMP_LINK(script_func_global_16), 
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, welkit_city_area_1),
		WARP_NODE(0x01, LEVEL_GYM, 0x01, 0x02, WARP_NO_CHECKPOINT),
		WARP_NODE(0x02, LEVEL_GYM, 0x01, 0x01, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BUTTERFLY, -700, 0, -900, 0, 0, 0, 0x00000000, bhvButterfly),
		OBJECT(MODEL_SL_SNOW_TREE, -700, 0, -500, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR, 1200, 0, -1600, 0, 0, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_BBH_HAUNTED_DOOR, 1200, 0, -1200, 0, 0, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_CASTLE_METAL_DOOR, 1200, 0, -800, 0, 0, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_CASTLE_WOODEN_DOOR, 1200, 0, -400, 0, 0, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_CHECKERBOARD_PLATFORM, 1861, 200, 1200, 0, 90, 0, (28 << 16), bhvCheckerboardElevatorGroup),
		OBJECT(MODEL_YELLOW_COIN, 2198, 0, 2000, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_RED_COIN, 2204, 0, 1600, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_WOODEN_SIGNPOST, -1511, 0, -902, 0, 0, 0, 0x00000000, bhvMessagePanel),
		OBJECT(MODEL_TOAD, -1111, 0, -902, 0, 0, 0, 0x00000000, bhvToadMessage),
		TERRAIN(welkit_city_area_1_collision),
		MACRO_OBJECTS(welkit_city_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_SNOW),
		TERRAIN_TYPE(TERRAIN_SNOW),
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