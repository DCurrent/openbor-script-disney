#include "data/scripts/dc_disney/config.h"

// Primary acting entity.
void dc_disney_get_entity()
{
	int instance;
	void result;

	// Get instance.
	instance = dc_disney_get_instance();

	result = getlocalvar(instance + DC_DISNEY_VAR_KEY_ENT);

	if (typeof(result) != openborconstant("VT_PTR"))
	{
		result = DC_DISNEY_DEFAULT_ENT;
	}

	return result;
}

void dc_disney_set_entity(void value)
{
	int instance;
	void result;

	// Get instance.
	instance = dc_disney_get_instance();

	setlocalvar(instance + DC_DISNEY_VAR_KEY_ENT, value);
}