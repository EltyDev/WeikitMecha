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
#include "levels/catamesa/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_catamesa_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _catamesa_segment_7SegmentRomStart, _catamesa_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _ssl_skybox_yay0SegmentRomStart, _ssl_skybox_yay0SegmentRomEnd), 
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

	AREA(1, catamesa_area_1),
		WARP_NODE(0x01, LEVEL_CASTLE_GROUNDS, 0x02, 0x01, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		MARIO_POS(0x01, 0, 0, 0, 0),
		OBJECT(MODEL_SSL_PALM_TREE, -1819, -10, 3750, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR, 854, 0, 1654, 0, 0, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_BBH_HAUNTED_DOOR, 854, 0, 2054, 0, 0, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_CASTLE_METAL_DOOR, 854, 0, 2454, 0, 0, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_CASTLE_WOODEN_DOOR, 854, 0, 2854, 0, 0, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_BOB_SEESAW_PLATFORM, -128, 881, 3879, 0, 0, 0, 0x00000000, bhvSeesawPlatform),
		OBJECT(MODEL_YELLOW_COIN, 1853, 0, 5254, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_CASTLE_GROUNDS_WARP_PIPE, 1689, 1203, 2088, 0, 0, 0, (1 << 16), bhvWarpPipe),
		OBJECT(MODEL_WOODEN_SIGNPOST, -819, 0, 1697, 0, 180, 0, 0x00000000, bhvMessagePanel),
		TERRAIN(catamesa_area_1_collision),
		MACRO_OBJECTS(catamesa_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_HOT),
		TERRAIN_TYPE(TERRAIN_SAND),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	AREA(2, catamesa_area_2),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_CASTLE_GROUNDS, 0x0, 0x0, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 1275, 1258, -813, 0, 90, 0, (1 << 16), bhvWarp),
		OBJECT(MODEL_BITFS_MOVING_SQUARE_PLATFORM, 1537, -4219, 9785, 0, 0, 0, 0x00000000, bhvWdwSquareFloatingPlatform),
		OBJECT(MODEL_BITFS_MOVING_SQUARE_PLATFORM, 6113, -7258, 9979, 0, 0, 0, 0x00000000, bhvWdwSquareFloatingPlatform),
		OBJECT(MODEL_BITFS_MOVING_SQUARE_PLATFORM, -1128, -7258, 7415, 0, 0, 0, 0x00000000, bhvWdwSquareFloatingPlatform),
		OBJECT(MODEL_YELLOW_COIN, 9626, -653, 6933, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 9626, -653, 6806, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 7846, -653, 6933, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 7846, -653, 6806, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 6945, -6990, 6887, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 7190, -6990, 6887, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 5557, -7302, 5982, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 1165, -6293, 10430, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 4959, -7426, 5982, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 1966, -6829, 9774, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 4361, -7551, 5982, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 1684, -6663, 10331, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 3763, -7675, 5982, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 3165, -7799, 5982, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 2776, -7293, 9329, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 3295, -7171, 9882, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 7557, -7171, 10140, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -1776, -3579, 9906, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -1093, -3429, 9655, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -4135, -3549, 7788, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -4830, -3549, 7788, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -7355, -3549, 7788, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -5524, -3549, 7788, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -8050, -3549, 7788, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -8744, -3549, 7788, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -4135, -3549, 4217, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -4830, -3549, 4217, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -5524, -3549, 4217, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -7355, -3549, 4217, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -8050, -3549, 4217, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -8744, -3549, 4217, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -3613, -7221, 5293, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -3613, -6666, 5293, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -3613, -7221, 6712, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -3613, -6666, 6712, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 5681, -3977, 9522, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 5681, -3977, 10228, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 6178, -3760, 9335, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 7760, -3139, 10228, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_RED_COIN, 4733, -7076, 519, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -3639, -3543, 2652, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 1505, -4527, 3938, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -3130, -5616, 6028, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 7767, -3139, 9245, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -3274, -9263, 4071, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -363, -6377, -2114, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -8946, -4677, 6002, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_TRANSPARENT_STAR, 7794, -4684, 9865, 0, 0, 0, 0x00000000, bhvRedCoinStarMarker),
		OBJECT(MODEL_WOODEN_SIGNPOST, 8729, -2877, 6633, 0, 0, 0, 0x00000000, bhvMessagePanel),
		OBJECT(MODEL_WOODEN_SIGNPOST, -6172, -5000, 4744, 0, 90, 0, 0x00000000, bhvMessagePanel),
		OBJECT(MODEL_STAR, -1365, -9009, 3107, 0, 0, 0, 0x00000000, bhvStar),
		OBJECT(MODEL_STAR, 8729, -707, 6862, 0, 0, 0, 0x00000000, bhvStar),
		TERRAIN(catamesa_area_2_collision),
		MACRO_OBJECTS(catamesa_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_UNDERGROUND),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 0, 0, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};