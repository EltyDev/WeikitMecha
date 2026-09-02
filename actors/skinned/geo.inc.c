#include "src/game/envfx_snow.h"

const GeoLayout skinned_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, skinned_skinned_mesh_layer_1_with_revert),
		GEO_DISPLAY_LIST(LAYER_ALPHA, skinned_skinned_mesh_layer_4_with_revert),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
