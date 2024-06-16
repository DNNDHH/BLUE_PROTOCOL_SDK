#pragma once

 

// Package: PartyInfoWindow

#include "Basic.hpp"


namespace SDK::Params
{

// Function PartyInfoWindow.PartyInfoWindow_C.SetEditMode
// 0x0001 (0x0001 - 0x0000)
struct PartyInfoWindow_C_SetEditMode final
{
public:
	bool                                          EditMode;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PartyInfoWindow_C_SetEditMode) == 0x000001, "Wrong alignment on PartyInfoWindow_C_SetEditMode");
static_assert(sizeof(PartyInfoWindow_C_SetEditMode) == 0x000001, "Wrong size on PartyInfoWindow_C_SetEditMode");
static_assert(offsetof(PartyInfoWindow_C_SetEditMode, EditMode) == 0x000000, "Member 'PartyInfoWindow_C_SetEditMode::EditMode' has a wrong offset!");

}

