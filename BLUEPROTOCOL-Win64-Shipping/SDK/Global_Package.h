#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#define PROCESS_EVENTS_INDEX 0x44
#define CREATE_DEFAULT_OBJECT_INDEX 0x00
#define POST_RENDER_INDEX 0x3B || 0x65 || 0x89 || 0x8A
#define GET_BONE_MATRIX_OFFSET 0x00
#define GET_VIEW_POINT_INDEX 0x00
#define GET_PLAYER_VIEW_POINT_OFFSET 0x00

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#include "Global_Structs.h"
#include "Global_Classes.h"
#include "Global_Params.h"

