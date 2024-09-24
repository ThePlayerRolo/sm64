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
#include "levels/bbh/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_bbh_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd), 
	LOAD_MIO0(0x0A, _bbh_skybox_mio0SegmentRomStart, _bbh_skybox_mio0SegmentRomEnd), 
	LOAD_MIO0_TEXTURE(0x09, _spooky_mio0SegmentRomStart, _spooky_mio0SegmentRomEnd), 
	LOAD_MIO0(0x05, _group9_mio0SegmentRomStart, _group9_mio0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group9_geoSegmentRomStart, _group9_geoSegmentRomEnd), 
	LOAD_MIO0(0x06, _group17_mio0SegmentRomStart, _group17_mio0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd), 
	LOAD_MIO0(0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, BPARAM4(0x01), bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_10), 
	JUMP_LINK(script_func_global_18), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_HAUNTED_DOOR, haunted_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_STAIRCASE_STEP, geo_bbh_0005B0), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_TILTING_FLOOR_PLATFORM, geo_bbh_0005C8), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM, geo_bbh_0005E0), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM_PART, geo_bbh_0005F8), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_MOVING_BOOKSHELF, geo_bbh_000610), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_MESH_ELEVATOR, geo_bbh_000628), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_MERRY_GO_ROUND, geo_bbh_000640), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_WOODEN_TOMB, geo_bbh_000658), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_RIPPLES, BBHRipples_geo), 
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, bbh_area_1),
		WARP_NODE(0x0A, LEVEL_CASTLE, 0x01, 0x03, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x01, 0x32, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE, 0x01, 0x64, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0C, LEVEL_BBH, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0D, LEVEL_VCUTM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BOO_CUSTOM, -2738, 80, -1391, 0, 90, 0, 0x00000000, bhvGhostHuntBoo),
		OBJECT(MODEL_BOO_CUSTOM, -2677, 80, 1208, 0, 90, 0, 0x00000000, bhvGhostHuntBoo),
		OBJECT(MODEL_BOO_CUSTOM, 2555, 80, -1391, 0, 90, 0, 0x00000000, bhvGhostHuntBoo),
		OBJECT(MODEL_BOO_CUSTOM, 2821, 80, 1208, 0, 90, 0, 0x00000000, bhvGhostHuntBoo),
		OBJECT(MODEL_BOO_CUSTOM, 195, 80, 1208, 0, 90, 0, 0x00000000, bhvGhostHuntBoo),
		OBJECT(MODEL_BOOKEND, -3350, 569, -2157, 0, 90, 0, 0x00000000, bhvFlyingBookend),
		OBJECT(MODEL_BOOKEND, -3350, 569, 154, 0, 90, 0, 0x00000000, bhvFlyingBookend),
		OBJECT(MODEL_BOOKEND, -3350, 569, -1563, 0, 90, 0, 0x00000000, bhvFlyingBookend),
		OBJECT(MODEL_BOOKEND, -3350, 569, 748, 0, 90, 0, 0x00000000, bhvFlyingBookend),
		OBJECT(MODEL_BOOKEND, -3350, 569, 2100, 0, 90, 0, 0x00000000, bhvFlyingBookend),
		OBJECT(MODEL_BOOKEND, -3350, 569, 2695, 0, 90, 0, 0x00000000, bhvFlyingBookend),
		OBJECT(MODEL_BBH_HAUNTED_DOOR, 1779, 5, 42, 0, -90, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_BBH_HAUNTED_DOOR, -1662, 5, 42, 0, -90, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_KING_BOO, 196, 80, 1515, 0, 90, 0, 0x00000000, bhvGhostHuntBigBoo),
		MARIO_POS(0x01, 0, 60, 80, 0),
		OBJECT(MODEL_MR_I, -2446, 80, -2804, 0, 90, 0, 0x00000000, bhvMrI),
		OBJECT(MODEL_MR_I, -137, 80, -2804, 0, 0, 0, 0x00000000, bhvMrI),
		OBJECT(MODEL_MR_I, 3255, 1735, 3626, 0, 90, 0, 0x00000000, bhvMrI),
		OBJECT(MODEL_MR_I, 2146, 1735, 3626, 0, 90, 0, 0x00000000, bhvMrI),
		OBJECT(MODEL_MAD_PIANO, 3148, 80, -3311, 0, -90, 0, 0x00000000, bhvMadPiano),
		OBJECT(MODEL_MAD_PIANO, 3588, 80, -3311, 0, -90, 0, 0x00000000, bhvMadPiano),
		OBJECT(MODEL_MAD_PIANO, 2735, 80, -3311, 0, -90, 0, 0x00000000, bhvMadPiano),
		OBJECT(MODEL_MAD_PIANO, 2047, 80, -3311, 0, -90, 0, 0x00000000, bhvMadPiano),
		OBJECT(MODEL_RED_COIN, 2634, 80, -3655, 0, 90, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -3537, 992, -1762, 0, 90, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -3570, 1068, 2298, 0, 90, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 2070, 466, 3635, 0, 90, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 3715, 2188, 3626, 0, 90, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_NONE, -3517, 1356, 396, 0, 90, 0, 0x01000000, bhvHiddenRedCoinStar),
		OBJECT(MODEL_EXCLAMATION_BOX, 1434, 408, 3160, 0, 90, 0, 0x00020000, bhvExclamationBox),
		OBJECT_WITH_ACTS(MODEL_BBH_RIPPLES, 193, 409, 3018, 0, 90, 0, 0x00000000, bhvBbhripples, ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT(MODEL_NONE, 60, 80, 0, 0, 0, 0, (0x0A << 16), bhvSpinAirborneWarp),
		OBJECT_WITH_ACTS(MODEL_NONE, -2415, 513, 2362, 0, 90, 0, 0x000C0000, bhvWarp, ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_BBH_RIPPLES, -2415, 513, 2362, 0, 90, 0, 0x00000000, bhvBbhripples, ACT_3 | ACT_4 | ACT_5 | ACT_6),
		OBJECT_WITH_ACTS(MODEL_NONE, 193, 409, 3018, 0, 90, 0, 0x000D0000, bhvWarp, ACT_3 | ACT_4 | ACT_5 | ACT_6),
		TERRAIN(bbh_area_1_collision),
		ROOMS(bbh_area_1_collision_rooms),
		MACRO_OBJECTS(bbh_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x25, SEQ_SMW_GHOST_HOUSE),
		SHOW_DIALOG(0x00, DIALOG_085),
		TERRAIN_TYPE(TERRAIN_SPOOKY),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	AREA(2, bbh_area_2),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x01, 0x32, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE, 0x01, 0x64, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0A, LEVEL_BBH, 0x01, 0x0C, WARP_NO_CHECKPOINT),
		MARIO_POS(0x02, 0, 0, 0, 0),
		OBJECT(MODEL_NONE, -247, 1090, 0, 0, 0, 0, 0x000A0000, bhvAirborneWarp),
		OBJECT_WITH_ACTS(MODEL_KING_BOO, -219, 47, 541, 0, 0, 0, 0x00000000, bhvBalconyBigBoo, ACT_3 | ACT_4 | ACT_5 | ACT_6),
		TERRAIN(bbh_area_2_collision),
		MACRO_OBJECTS(bbh_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x22, SEQ_KING_BOO_REMATCH),
		SHOW_DIALOG(0x00, DIALOG_000),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	FREE_LEVEL_POOL(),
	MARIO_POS(0x02, 0, 0, 0, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};