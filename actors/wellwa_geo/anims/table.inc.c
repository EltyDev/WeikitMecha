#include "table_enum.h"
const struct Animation *const wellwa_geo_anims[] = {
	[WELLWA_GEO_ANIM_WELLWA_IDLE_WORRIED] = &wellwa_geo_anim_wellwa_idle_worried,
	[WELLWA_GEO_ANIM_WELLWA_IDLE_WORRIED_TO_TALKING] = &wellwa_geo_anim_wellwa_idle_worried_to_talking,
	[WELLWA_GEO_ANIM_WELLWA_TALKING] = &wellwa_geo_anim_wellwa_talking,
	[WELLWA_GEO_ANIM_WELLWA_TALKING_TO_GIVING_KEY] = &wellwa_geo_anim_wellwa_talking_to_giving_key,
	[WELLWA_GEO_ANIM_WELLWA_GIVING_KEY] = &wellwa_geo_anim_wellwa_giving_key,
	[WELLWA_GEO_ANIM_WELLWA_GIVING_KEY_IDLE] = &wellwa_geo_anim_wellwa_giving_key_idle,
	[WELLWA_GEO_ANIM_WELLWA_GIVING_KEY_IDLE_TO_IDLE_WORRIED] = &wellwa_geo_anim_wellwa_giving_key_idle_to_idle_worried,
};
