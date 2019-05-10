#include "data/scripts/dc_disney/config.h"

// Animation to apply.
void dc_disney_get_animation()
{
	int instance;
	int result;

	// Get instance.
	instance = dc_disney_get_instance();

	result = getlocalvar(instance + DC_DISNEY_MEMBER_ANIMATION);

	if (typeof(result) != openborconstant("VT_INTEGER"))
	{
		result = DC_DISNEY_DEFAULT_ANIMATION;
	}

	return result;
}

void dc_disney_set_animation(void value)
{
	int instance;
	
	// Get instance.
	instance = dc_disney_get_instance();

	setlocalvar(instance + DC_DISNEY_MEMBER_ANIMATION, value);
}

