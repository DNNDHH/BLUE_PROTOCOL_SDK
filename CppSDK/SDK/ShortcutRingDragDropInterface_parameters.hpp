#pragma once

 

// Package: ShortcutRingDragDropInterface

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function ShortcutRingDragDropInterface.ShortcutRingDragDropInterface_C.GetShortcutItemInfo
// 0x0050 (0x0050 - 0x0000)
struct ShortcutRingDragDropInterface_C_GetShortcutItemInfo final
{
public:
	struct FShortcutItemInfo                      OutShortcutItemInfo;                               // 0x0000(0x0050)(Parm, OutParm)
};
static_assert(alignof(ShortcutRingDragDropInterface_C_GetShortcutItemInfo) == 0x000008, "Wrong alignment on ShortcutRingDragDropInterface_C_GetShortcutItemInfo");
static_assert(sizeof(ShortcutRingDragDropInterface_C_GetShortcutItemInfo) == 0x000050, "Wrong size on ShortcutRingDragDropInterface_C_GetShortcutItemInfo");
static_assert(offsetof(ShortcutRingDragDropInterface_C_GetShortcutItemInfo, OutShortcutItemInfo) == 0x000000, "Member 'ShortcutRingDragDropInterface_C_GetShortcutItemInfo::OutShortcutItemInfo' has a wrong offset!");

}

