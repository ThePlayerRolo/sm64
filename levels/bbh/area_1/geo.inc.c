#include "src/game/envfx_snow.h"

const GeoLayout bbh_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SWITCH_CASE(3, geo_switch_area),
		GEO_OPEN_NODE(),
			GEO_BRANCH(1, bbh_dl_Room2_geo),
			GEO_BRANCH(1, bbh_dl_Room3_geo),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, bbh_dl_Plane_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 1811, 767, 1, bbh_dl_Room2Mesh_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -1630, 767, 1, bbh_dl_Room2Mesh_002_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout bbh_dl_Room2_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, 1950, 0, 0),
		GEO_OPEN_NODE(),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -1950, 0, 0, bbh_dl_Room2Mesh_mesh_layer_1),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bbh_dl_Room2Mesh_mesh_layer_5),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout bbh_dl_Room3_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, -1830, 0, 0),
		GEO_OPEN_NODE(),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 1830, 0, 0, bbh_dl_Room3Mesh_mesh_layer_1),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout bbh_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND(BACKGROUND_HAUNTED, geo_skybox_main),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, bbh_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
