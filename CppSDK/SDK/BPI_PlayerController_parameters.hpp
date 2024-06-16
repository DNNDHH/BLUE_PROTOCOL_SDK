#pragma once

 

// Package: BPI_PlayerController

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPI_PlayerController.BPI_PlayerController_C.SetDebugMenu
// 0x0008 (0x0008 - 0x0000)
struct BPI_PlayerController_C_SetDebugMenu final
{
public:
	class UDebugMenu_C*                           DebugMenu;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_PlayerController_C_SetDebugMenu) == 0x000008, "Wrong alignment on BPI_PlayerController_C_SetDebugMenu");
static_assert(sizeof(BPI_PlayerController_C_SetDebugMenu) == 0x000008, "Wrong size on BPI_PlayerController_C_SetDebugMenu");
static_assert(offsetof(BPI_PlayerController_C_SetDebugMenu, DebugMenu) == 0x000000, "Member 'BPI_PlayerController_C_SetDebugMenu::DebugMenu' has a wrong offset!");

}

