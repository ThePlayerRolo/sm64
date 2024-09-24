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
#include "levels/castle_inside/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_castle_inside_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _castle_inside_segment_7SegmentRomStart, _castle_inside_segment_7SegmentRomEnd), 
	LOAD_MIO0_TEXTURE(0x09, _inside_mio0SegmentRomStart, _inside_mio0SegmentRomEnd), 
	LOAD_MIO0(0x06, _group15_mio0SegmentRomStart, _group15_mio0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group15_geoSegmentRomStart, _group15_geoSegmentRomEnd), 
	LOAD_MIO0(0xa, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	LOAD_MIO0(0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, BPARAM4(0x01), bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_16), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_BOWSER_TRAP, castle_geo_000F18), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WATER_LEVEL_PILLAR, castle_geo_001940), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_MINUTE_HAND, castle_geo_001530), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_HOUR_HAND, castle_geo_001548), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_PENDULUM, castle_geo_001518), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_METAL_DOOR, metal_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR_UNUSED, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR_UNUSED, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_0_STARS, castle_door_0_star_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_1_STAR, castle_door_1_star_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_3_STARS, castle_door_3_stars_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_KEY_DOOR, key_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_30_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_8_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_50_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_70_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE, bubbly_tree_geo), 
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, castle_inside_area_1),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x01, 0x32, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE, 0x01, 0x64, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0A, LEVEL_CASTLE_GROUNDS, 0x01, 0x02, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0C, LEVEL_PSS, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x32, LEVEL_PSS, 0x01, 0xF0, WARP_NO_CHECKPOINT),
		WARP_NODE(0x64, LEVEL_PSS, 0x01, 0xF1, WARP_NO_CHECKPOINT),
		WARP_NODE(0x1F, LEVEL_PSS, 0x01, 0x0B, WARP_NO_CHECKPOINT),
		WARP_NODE(0x04, LEVEL_CASTLE, 0x02, 0x05, WARP_NO_CHECKPOINT),
		WARP_NODE(0x03, LEVEL_BBH, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_CASTLE_DOOR_0_STARS, 554, 4, -235, 0, 90, 0, 0x000C0000, bhvDoorWarp),
		OBJECT(MODEL_NONE, 0, 694, 0, 0, 0, 0, 0x000A0000, bhvAirborneWarp),
		OBJECT(MODEL_NONE, 0, 694, 0, 0, 0, 0, 0x001F0000, bhvAirborneWarp),
		MARIO_POS(0x01, 0, 0, 694, 0),
		OBJECT(MODEL_POSION_MUSHROOM, -708, 754, 3630, 0, 0, 0, 0x00000000, bhvPosion1Up),
		OBJECT(MODEL_SMOKE, -922, 4554, -3750, 0, -90, 0, DIALOG_127, bhvSmoke),
		OBJECT(MODEL_SMOKE, 1281, 4518, -3472, 0, -90, 0, DIALOG_127, bhvSmoke),
		OBJECT(MODEL_NONE, -5204, 3071, 4356, 0, -90, 0, 0x00030000, bhvWarp),
		OBJECT(MODEL_CASTLE_STAR_DOOR_8_STARS, 67, -1, -1700, 0, -180, 0, 0x08000000, bhvStarDoor),
		OBJECT(MODEL_CASTLE_STAR_DOOR_8_STARS, -89, -1, -1700, 0, 0, 0, 0x08000000, bhvStarDoor),
		OBJECT(MODEL_NONE, -10, -1, -1947, 0, -180, 0, 0x00040000, bhvWarp),
		OBJECT(MODEL_NONE, 0, 692, 0, 0, 90, 0, 0x00320000, bhvAirborneStarCollectWarp),
		OBJECT(MODEL_NONE, 0, 4, 0, 0, 90, 0, 0x00640000, bhvDeathWarp),
		OBJECT(MODEL_TOAD, 354, 4, 330, 0, -95, 0, 0x00000000, bhvToadMessage),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -1042, 0, 2658, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, 1046, 0, 2658, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, 504, 0, 2658, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -448, 0, 2658, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -1498, 0, 3002, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, 1413, 0, 3002, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -1709, 0, 3363, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, 1599, 0, 3257, 0, 0, 0, 0x00000000, bhvTree),
		TERRAIN(castle_inside_area_1_collision),
		MACRO_OBJECTS(castle_inside_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x22, SEQ_MAIN_INSIDE),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	AREA(2, castle_inside_area_2),
		WARP_NODE(0x05, LEVEL_BOB, 0x01, 0x04, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -1564, 1084, 736, 0, 0, 0, 0x00050000, bhvSpinAirborneWarp),
		MARIO_POS(0x02, 0, 959, 318, 255),
		TERRAIN(castle_inside_area_2_collision),
		MACRO_OBJECTS(castle_inside_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	FREE_LEVEL_POOL(),
	MARIO_POS(0x02, 0, 959, 318, 255),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};