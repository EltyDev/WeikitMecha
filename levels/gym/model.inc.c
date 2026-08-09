Lights1 gym_dl_f3dlite_material_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x49, 0x49, 0x49);

Vtx gym_dl_platform_mesh_layer_1_vtx_0[24] = {
	{{ {2500, 0, -2000}, 0, {624, 496}, {0, 127, 0, 255} }},
	{{ {-2200, 0, -2000}, 0, {880, 496}, {0, 127, 0, 255} }},
	{{ {-2200, 0, 2700}, 0, {880, 240}, {0, 127, 0, 255} }},
	{{ {2500, 0, 2700}, 0, {624, 240}, {0, 127, 0, 255} }},
	{{ {2500, -200, 2700}, 0, {368, 240}, {0, 0, 127, 255} }},
	{{ {2500, 0, 2700}, 0, {624, 240}, {0, 0, 127, 255} }},
	{{ {-2200, 0, 2700}, 0, {624, -16}, {0, 0, 127, 255} }},
	{{ {-2200, -200, 2700}, 0, {368, -16}, {0, 0, 127, 255} }},
	{{ {-2200, -200, 2700}, 0, {368, 1008}, {129, 0, 0, 255} }},
	{{ {-2200, 0, 2700}, 0, {624, 1008}, {129, 0, 0, 255} }},
	{{ {-2200, 0, -2000}, 0, {624, 752}, {129, 0, 0, 255} }},
	{{ {-2200, -200, -2000}, 0, {368, 752}, {129, 0, 0, 255} }},
	{{ {-2200, -200, -2000}, 0, {112, 496}, {0, 129, 0, 255} }},
	{{ {2500, -200, -2000}, 0, {368, 496}, {0, 129, 0, 255} }},
	{{ {2500, -200, 2700}, 0, {368, 240}, {0, 129, 0, 255} }},
	{{ {-2200, -200, 2700}, 0, {112, 240}, {0, 129, 0, 255} }},
	{{ {2500, -200, -2000}, 0, {368, 496}, {127, 0, 0, 255} }},
	{{ {2500, 0, -2000}, 0, {624, 496}, {127, 0, 0, 255} }},
	{{ {2500, 0, 2700}, 0, {624, 240}, {127, 0, 0, 255} }},
	{{ {2500, -200, 2700}, 0, {368, 240}, {127, 0, 0, 255} }},
	{{ {-2200, -200, -2000}, 0, {368, 752}, {0, 0, 129, 255} }},
	{{ {-2200, 0, -2000}, 0, {624, 752}, {0, 0, 129, 255} }},
	{{ {2500, 0, -2000}, 0, {624, 496}, {0, 0, 129, 255} }},
	{{ {2500, -200, -2000}, 0, {368, 496}, {0, 0, 129, 255} }},
};

Gfx gym_dl_platform_mesh_layer_1_tri_0[] = {
	gsSPVertex(gym_dl_platform_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(gym_dl_platform_mesh_layer_1_vtx_0 + 16, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSPEndDisplayList(),
};

Gfx mat_gym_dl_f3dlite_material[] = {
	gsSPSetGeometryMode(G_LIGHTING | G_ZBUFFER | G_SHADE | G_SHADING_SMOOTH | G_CULL_BACK),
	gsSPSetLights1(gym_dl_f3dlite_material_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsDPSetTextureConvert(G_TC_FILT),
	gsDPSetTextureFilter(G_TF_BILERP),
	gsDPSetTexturePersp(G_TP_PERSP),
	gsDPPipelineMode(G_PM_1PRIMITIVE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx mat_revert_gym_dl_f3dlite_material[] = {
	gsSPClearGeometryMode(G_LIGHTING | G_ZBUFFER | G_SHADE | G_SHADING_SMOOTH | G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsDPSetTextureConvert(G_TC_CONV),
	gsDPSetTextureFilter(G_TF_POINT),
	gsDPSetTexturePersp(G_TP_NONE),
	gsDPPipelineMode(G_PM_NPRIMITIVE),
	gsSPEndDisplayList(),
};

Gfx gym_dl_platform_mesh_layer_1_with_revert[] = {
	gsSPDisplayList(mat_gym_dl_f3dlite_material),
	gsSPDisplayList(gym_dl_platform_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_gym_dl_f3dlite_material),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

