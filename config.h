#ifndef DC_DISNEY_CONFIG
#define DC_DISNEY_CONFIG 1

#define DC_DISNEY_DEFAULT_INSTANCE		0
#define DC_DISNEY_DEFAULT_ENT			getlocalvar("self");

// Variable keys. Used to identify cross function
// variables used throughout library.
#define DC_DISNEY_VAR_KEY_BASE_ID		"dcdis"	// Base name of every var ID. Must be unique vs. all other libraries.
#define DC_DISNEY_VAR_KEY_INSTANCE		DC_DISNEY_VAR_KEY_BASE_ID + 0
#define DC_DISNEY_VAR_KEY_ENT			DC_DISNEY_VAR_KEY_BASE_ID + 1
#define DC_DISNEY_VAR_KEY_THE_END		2			// Should always be last, with a value one higher than previous key ID.

#endif // !DC_DISNEY_CONFIG

