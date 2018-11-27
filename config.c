#include "data/scripts/dc_disney/config.h"

#import "data/scripts/dc_disney/instance.c"

// Entity is the primary entity that performs actions.
void dc_disney_set_entity(void value)
{
	int instance;
	void result;

	// Get instance.
	instance = dc_disney_get_instance();

	setlocalvar(instance + DC_DISNEY_VAR_KEY_ENT, value);
}

void dc_disney_get_entity()
{
	int instance;
	void result;

	// Get instance.
	instance = dc_disney_get_instance();

	result = getlocalvar(instance + DC_DISNEY_VAR_KEY_ENT);

	if (!result)
	{
		result = getlocalvar("self");
	}

	return result;
}