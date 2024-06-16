#pragma once

 

// Package: BPI_ChatHudResizableWidgetParent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BPI_ChatHudResizableWidgetParent.BPI_ChatHudResizableWidgetParent_C.SetWindowSize
// 0x0008 (0x0008 - 0x0000)
struct BPI_ChatHudResizableWidgetParent_C_SetWindowSize final
{
public:
	struct FVector2D                              InSize;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_ChatHudResizableWidgetParent_C_SetWindowSize) == 0x000004, "Wrong alignment on BPI_ChatHudResizableWidgetParent_C_SetWindowSize");
static_assert(sizeof(BPI_ChatHudResizableWidgetParent_C_SetWindowSize) == 0x000008, "Wrong size on BPI_ChatHudResizableWidgetParent_C_SetWindowSize");
static_assert(offsetof(BPI_ChatHudResizableWidgetParent_C_SetWindowSize, InSize) == 0x000000, "Member 'BPI_ChatHudResizableWidgetParent_C_SetWindowSize::InSize' has a wrong offset!");

}

