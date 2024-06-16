#pragma once

 

// Package: MouseCursorModeIcon

#include "Basic.hpp"


namespace SDK::Params
{

// Function MouseCursorModeIcon.MouseCursorModeIcon_C.SetSwitch
// 0x0004 (0x0004 - 0x0000)
struct MouseCursorModeIcon_C_SetSwitch final
{
public:
	int32                                         ID;                                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MouseCursorModeIcon_C_SetSwitch) == 0x000004, "Wrong alignment on MouseCursorModeIcon_C_SetSwitch");
static_assert(sizeof(MouseCursorModeIcon_C_SetSwitch) == 0x000004, "Wrong size on MouseCursorModeIcon_C_SetSwitch");
static_assert(offsetof(MouseCursorModeIcon_C_SetSwitch, ID) == 0x000000, "Member 'MouseCursorModeIcon_C_SetSwitch::ID' has a wrong offset!");

}

