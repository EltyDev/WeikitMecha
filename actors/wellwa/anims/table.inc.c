#include "table_enum.h"
const struct Animation *const wellwa_anims[] = {
	[WELLWA_ANIM_WELLWA_IDLE_WORRIED] = &wellwa_anim_wellwa_idle_worried,
	[WELLWA_ANIM_WELLWA_IDLE_WORRIED_TO_TALKING] = &wellwa_anim_wellwa_idle_worried_to_talking,
	[WELLWA_ANIM_WELLWA_TALKING] = &wellwa_anim_wellwa_talking,
	[WELLWA_ANIM_WELLWA_TALKING_TO_GIVING_KEY] = &wellwa_anim_wellwa_talking_to_giving_key,
	[WELLWA_ANIM_WELLWA_GIVING_KEY] = &wellwa_anim_wellwa_giving_key,
	[WELLWA_ANIM_WELLWA_GIVING_KEY_IDLE] = &wellwa_anim_wellwa_giving_key_idle,
	[WELLWA_ANIM_WELLWA_GIVING_KEY_IDLE_TO_IDLE_WORRIED] = &wellwa_anim_wellwa_giving_key_idle_to_idle_worried,
};
