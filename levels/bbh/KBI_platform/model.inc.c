Lights1 KBI_platform_Checkerboard_Platform_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x49, 0x49, 0x49);

Lights1 KBI_platform_Stone_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x49, 0x49, 0x49);

Lights1 KBI_platform_Vines_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x49, 0x49, 0x49);

Gfx KBI_platform_King_Boo_Illusion_Checkerboard_Platform_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 KBI_platform_King_Boo_Illusion_Checkerboard_Platform_rgba16[] = {
	#include "levels/bbh/King_Boo_Illusion_Checkerboard_Platform.rgba16.inc.c"
};

Gfx KBI_platform_bob_textures_03000_rgba16_i8_aligner[] = {gsSPEndDisplayList()};
u8 KBI_platform_bob_textures_03000_rgba16_i8[] = {
	#include "levels/bbh/bob_textures.03000.rgba16.i8.inc.c"
};

Gfx KBI_platform_KBI_VINES__rgba16_aligner[] = {gsSPEndDisplayList()};
u8 KBI_platform_KBI_VINES__rgba16[] = {
	#include "levels/bbh/KBI_VINES_.rgba16.inc.c"
};

Vtx KBI_platform_000_displaylist_mesh_layer_1_vtx_0[50] = {
	{{ {-255, -25, 154}, 0, {481, 51}, {129, 0, 0, 255} }},
	{{ {-255, 26, -153}, 0, {366, 14}, {130, 19, 0, 255} }},
	{{ {-255, -25, -153}, 0, {366, 51}, {129, 0, 0, 255} }},
	{{ {-255, 26, -92}, 0, {389, 14}, {129, 11, 0, 255} }},
	{{ {-255, 26, 62}, 0, {447, 14}, {130, 19, 0, 255} }},
	{{ {-255, 26, 154}, 0, {481, 14}, {135, 38, 0, 255} }},
	{{ {-255, -25, -153}, 0, {961, 176}, {0, 0, 129, 255} }},
	{{ {-255, 26, -153}, 0, {961, 171}, {0, 12, 130, 255} }},
	{{ {-158, 26, -153}, 0, {955, 171}, {0, 6, 129, 255} }},
	{{ {172, 26, -153}, 0, {935, 171}, {0, 15, 130, 255} }},
	{{ {256, 26, -153}, 0, {930, 171}, {0, 31, 133, 255} }},
	{{ {-185, -25, -153}, 0, {953, 176}, {0, 0, 129, 255} }},
	{{ {182, -25, -153}, 0, {946, 176}, {0, 0, 129, 255} }},
	{{ {256, -25, -153}, 0, {930, 176}, {0, 0, 129, 255} }},
	{{ {-163, -25, 154}, 0, {-1411, -306}, {0, 129, 0, 255} }},
	{{ {-255, -25, 154}, 0, {-2192, -306}, {0, 129, 0, 255} }},
	{{ {-255, -25, -153}, 0, {-2192, 2314}, {0, 129, 0, 255} }},
	{{ {170, -25, 154}, 0, {1433, -306}, {0, 129, 0, 255} }},
	{{ {256, -25, 154}, 0, {2169, -306}, {0, 129, 0, 255} }},
	{{ {-185, -25, -153}, 0, {-1594, 2314}, {0, 129, 0, 255} }},
	{{ {182, -25, -153}, 0, {1540, 2314}, {0, 129, 0, 255} }},
	{{ {256, -25, -153}, 0, {2169, 2314}, {0, 129, 0, 255} }},
	{{ {256, -25, -153}, 0, {934, 563}, {127, 0, 0, 255} }},
	{{ {256, 26, -153}, 0, {934, 530}, {120, 42, 0, 255} }},
	{{ {256, 26, -82}, 0, {910, 530}, {125, 20, 0, 255} }},
	{{ {256, 26, 56}, 0, {864, 530}, {127, 9, 0, 255} }},
	{{ {256, 26, 154}, 0, {830, 530}, {126, 19, 0, 255} }},
	{{ {256, -25, 154}, 0, {830, 563}, {127, 0, 0, 255} }},
	{{ {256, -25, 154}, 0, {815, 119}, {0, 0, 127, 255} }},
	{{ {256, 26, 154}, 0, {815, 92}, {0, 31, 123, 255} }},
	{{ {194, 26, 154}, 0, {798, 92}, {0, 17, 126, 255} }},
	{{ {-140, 26, 154}, 0, {705, 92}, {0, 13, 126, 255} }},
	{{ {-255, 26, 154}, 0, {673, 92}, {0, 27, 124, 255} }},
	{{ {170, -25, 154}, 0, {779, 119}, {0, 0, 127, 255} }},
	{{ {-163, -25, 154}, 0, {744, 119}, {0, 0, 127, 255} }},
	{{ {-255, -25, 154}, 0, {673, 119}, {0, 0, 127, 255} }},
	{{ {-255, 26, -92}, 0, {-2192, 222}, {0, 127, 0, 255} }},
	{{ {-255, 26, 62}, 0, {-2192, 1535}, {0, 127, 0, 255} }},
	{{ {-189, 26, 115}, 0, {-1632, 1986}, {0, 127, 0, 255} }},
	{{ {172, 26, -153}, 0, {1448, -298}, {0, 127, 0, 255} }},
	{{ {207, 26, -123}, 0, {1749, -46}, {0, 127, 0, 255} }},
	{{ {-140, 26, 154}, 0, {-1215, 2322}, {0, 127, 0, 255} }},
	{{ {256, 26, 56}, 0, {2169, 1485}, {0, 127, 0, 255} }},
	{{ {194, 26, 154}, 0, {1640, 2322}, {0, 127, 0, 255} }},
	{{ {256, 26, 56}, 0, {2169, 1485}, {0, 127, 0, 255} }},
	{{ {256, 26, -82}, 0, {2169, 305}, {0, 127, 0, 255} }},
	{{ {207, 26, -123}, 0, {1749, -46}, {0, 127, 0, 255} }},
	{{ {172, 26, -153}, 0, {1448, -298}, {0, 127, 0, 255} }},
	{{ {-158, 26, -153}, 0, {-1366, -298}, {0, 127, 0, 255} }},
	{{ {-255, 26, -92}, 0, {-2192, 222}, {0, 127, 0, 255} }},
};

Gfx KBI_platform_000_displaylist_mesh_layer_1_tri_0[] = {
	gsSPVertex(KBI_platform_000_displaylist_mesh_layer_1_vtx_0 + 0, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 1, 0, 0),
	gsSP1Triangle(0, 4, 3, 0),
	gsSP1Triangle(0, 5, 4, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(6, 8, 9, 0),
	gsSP1Triangle(9, 10, 6, 0),
	gsSP1Triangle(11, 6, 10, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSP1Triangle(10, 13, 12, 0),
	gsSPVertex(KBI_platform_000_displaylist_mesh_layer_1_vtx_0 + 14, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 0, 2, 0),
	gsSP1Triangle(2, 4, 3, 0),
	gsSP1Triangle(4, 2, 5, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(6, 7, 4, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(11, 12, 8, 0),
	gsSP1Triangle(8, 12, 13, 0),
	gsSPVertex(KBI_platform_000_displaylist_mesh_layer_1_vtx_0 + 28, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(3, 4, 0, 0),
	gsSP1Triangle(5, 0, 4, 0),
	gsSP1Triangle(4, 6, 5, 0),
	gsSP1Triangle(4, 7, 6, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(11, 8, 10, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSP1Triangle(12, 10, 13, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(13, 15, 14, 0),
	gsSPVertex(KBI_platform_000_displaylist_mesh_layer_1_vtx_0 + 44, 6, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSPEndDisplayList(),
};

Vtx KBI_platform_000_displaylist_mesh_layer_1_vtx_1[38] = {
	{{ {-158, 26, -153}, 0, {-4644, 1185}, {0, 6, 129, 255} }},
	{{ {-255, 26, -153}, 0, {-7477, 1185}, {0, 12, 130, 255} }},
	{{ {-223, 122, -133}, 0, {-6532, -1700}, {0, 26, 132, 255} }},
	{{ {-255, 26, -153}, 0, {-4783, 868}, {130, 19, 0, 255} }},
	{{ {-255, 26, -92}, 0, {-3095, 303}, {129, 11, 0, 255} }},
	{{ {-223, 122, -133}, 0, {-3276, 3502}, {136, 40, 0, 255} }},
	{{ {256, 26, -153}, 0, {6380, 6627}, {0, 31, 133, 255} }},
	{{ {172, 26, -153}, 0, {3996, 6238}, {0, 15, 130, 255} }},
	{{ {223, 55, -128}, 0, {5727, 6041}, {0, 83, 160, 255} }},
	{{ {256, 26, -82}, 0, {6818, 4684}, {125, 20, 0, 255} }},
	{{ {256, 26, -153}, 0, {6380, 6627}, {120, 42, 0, 255} }},
	{{ {223, 55, -128}, 0, {5727, 6041}, {84, 96, 0, 255} }},
	{{ {194, 26, 154}, 0, {5105, -3530}, {0, 17, 126, 255} }},
	{{ {256, 26, 154}, 0, {6903, -3668}, {0, 31, 123, 255} }},
	{{ {235, 78, 121}, 0, {6284, -2284}, {0, 67, 108, 255} }},
	{{ {256, 26, 154}, 0, {-3450, -2558}, {126, 19, 0, 255} }},
	{{ {256, 26, 56}, 0, {-781, -1500}, {127, 9, 0, 255} }},
	{{ {235, 78, 121}, 0, {-3164, -680}, {118, 47, 0, 255} }},
	{{ {-255, 26, 62}, 0, {-1640, -3493}, {130, 19, 0, 255} }},
	{{ {-255, 26, 154}, 0, {364, -5299}, {135, 38, 0, 255} }},
	{{ {-210, 76, 121}, 0, {967, -3193}, {162, 85, 0, 255} }},
	{{ {-255, 26, 154}, 0, {-7477, -835}, {0, 27, 124, 255} }},
	{{ {-140, 26, 154}, 0, {-4126, -835}, {0, 13, 126, 255} }},
	{{ {-210, 76, 121}, 0, {-6159, 915}, {0, 70, 106, 255} }},
	{{ {256, 26, 56}, 0, {-575, 4956}, {154, 40, 192, 255} }},
	{{ {194, 26, 154}, 0, {2275, 3110}, {154, 40, 192, 255} }},
	{{ {235, 78, 121}, 0, {1929, 5251}, {154, 40, 192, 255} }},
	{{ {-255, 26, -92}, 0, {-4985, 2602}, {67, 22, 106, 255} }},
	{{ {-158, 26, -153}, 0, {-1644, 2772}, {67, 22, 106, 255} }},
	{{ {-223, 122, -133}, 0, {-3702, 5538}, {67, 22, 106, 255} }},
	{{ {-189, 26, 115}, 0, {-875, 4452}, {75, 43, 163, 255} }},
	{{ {-255, 26, 62}, 0, {621, 6409}, {75, 43, 163, 255} }},
	{{ {-210, 76, 121}, 0, {-1897, 5672}, {75, 43, 163, 255} }},
	{{ {-140, 26, 154}, 0, {-1992, 2991}, {75, 43, 163, 255} }},
	{{ {207, 26, -123}, 0, {5176, 5588}, {182, 53, 88, 255} }},
	{{ {256, 26, -82}, 0, {6818, 4684}, {182, 53, 88, 255} }},
	{{ {223, 55, -128}, 0, {5727, 6041}, {182, 53, 88, 255} }},
	{{ {172, 26, -153}, 0, {3996, 6238}, {182, 53, 88, 255} }},
};

Gfx KBI_platform_000_displaylist_mesh_layer_1_tri_1[] = {
	gsSPVertex(KBI_platform_000_displaylist_mesh_layer_1_vtx_1 + 0, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(KBI_platform_000_displaylist_mesh_layer_1_vtx_1 + 15, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(KBI_platform_000_displaylist_mesh_layer_1_vtx_1 + 30, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(7, 4, 6, 0),
	gsSPEndDisplayList(),
};

Vtx KBI_platform_000_displaylist_mesh_layer_4_vtx_0[16] = {
	{{ {-255, -25, -153}, 0, {1163, -166}, {0, 0, 129, 255} }},
	{{ {-185, -25, -153}, 0, {-167, -166}, {0, 0, 129, 255} }},
	{{ {-185, -298, -153}, 0, {-167, 1158}, {0, 0, 129, 255} }},
	{{ {-255, -298, -153}, 0, {1163, 1158}, {0, 0, 129, 255} }},
	{{ {256, -25, -153}, 0, {1005, -16}, {0, 0, 127, 255} }},
	{{ {182, -25, -153}, 0, {-16, -16}, {0, 0, 127, 255} }},
	{{ {182, -154, -153}, 0, {-16, 1008}, {0, 0, 127, 255} }},
	{{ {256, -154, -153}, 0, {1005, 1008}, {0, 0, 127, 255} }},
	{{ {170, -25, 154}, 0, {997, -11}, {0, 0, 129, 255} }},
	{{ {256, -25, 154}, 0, {-24, -11}, {0, 0, 129, 255} }},
	{{ {256, -93, 154}, 0, {-24, 492}, {0, 0, 129, 255} }},
	{{ {170, -93, 154}, 0, {997, 492}, {0, 0, 129, 255} }},
	{{ {-163, -25, 154}, 0, {1011, -16}, {0, 0, 127, 255} }},
	{{ {-255, -25, 154}, 0, {-16, -16}, {0, 0, 127, 255} }},
	{{ {-255, -158, 154}, 0, {-16, 1008}, {0, 0, 127, 255} }},
	{{ {-163, -158, 154}, 0, {1011, 1008}, {0, 0, 127, 255} }},
};

Gfx KBI_platform_000_displaylist_mesh_layer_4_tri_0[] = {
	gsSPVertex(KBI_platform_000_displaylist_mesh_layer_4_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPEndDisplayList(),
};


Gfx mat_KBI_platform_Checkerboard_Platform[] = {
	gsSPSetLights1(KBI_platform_Checkerboard_Platform_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, KBI_platform_King_Boo_Illusion_Checkerboard_Platform_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_KBI_platform_Checkerboard_Platform[] = {
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx mat_KBI_platform_Stone[] = {
	gsSPSetLights1(KBI_platform_Stone_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 1, KBI_platform_bob_textures_03000_rgba16_i8),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_KBI_platform_Stone[] = {
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx mat_KBI_platform_Vines[] = {
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPSetLights1(KBI_platform_Vines_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, KBI_platform_KBI_VINES__rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_KBI_platform_Vines[] = {
	gsSPSetGeometryMode(G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx KBI_platform_000_displaylist_mesh_layer_1[] = {
	gsSPDisplayList(mat_KBI_platform_Checkerboard_Platform),
	gsSPDisplayList(KBI_platform_000_displaylist_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_KBI_platform_Checkerboard_Platform),
	gsSPDisplayList(mat_KBI_platform_Stone),
	gsSPDisplayList(KBI_platform_000_displaylist_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_KBI_platform_Stone),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx KBI_platform_000_displaylist_mesh_layer_4[] = {
	gsSPDisplayList(mat_KBI_platform_Vines),
	gsSPDisplayList(KBI_platform_000_displaylist_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_KBI_platform_Vines),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

