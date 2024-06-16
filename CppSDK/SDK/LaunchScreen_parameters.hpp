#pragma once

 

// Package: LaunchScreen

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function LaunchScreen.LaunchScreen_C.UpdateAspectRate
// 0x0038 (0x0038 - 0x0000)
struct LaunchScreen_C_UpdateAspectRate final
{
public:
	struct FVector2D                              CallFunc_GetViewPortCalcOffset_Position;           // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                              CallFunc_GetViewportSize_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_Vector2DVector2D_ReturnValue;    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LaunchScreen_C_UpdateAspectRate) == 0x000008, "Wrong alignment on LaunchScreen_C_UpdateAspectRate");
static_assert(sizeof(LaunchScreen_C_UpdateAspectRate) == 0x000038, "Wrong size on LaunchScreen_C_UpdateAspectRate");
static_assert(offsetof(LaunchScreen_C_UpdateAspectRate, CallFunc_GetViewPortCalcOffset_Position) == 0x000000, "Member 'LaunchScreen_C_UpdateAspectRate::CallFunc_GetViewPortCalcOffset_Position' has a wrong offset!");
static_assert(offsetof(LaunchScreen_C_UpdateAspectRate, CallFunc_BreakVector2D_X) == 0x000008, "Member 'LaunchScreen_C_UpdateAspectRate::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(LaunchScreen_C_UpdateAspectRate, CallFunc_BreakVector2D_Y) == 0x00000C, "Member 'LaunchScreen_C_UpdateAspectRate::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(LaunchScreen_C_UpdateAspectRate, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000010, "Member 'LaunchScreen_C_UpdateAspectRate::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(LaunchScreen_C_UpdateAspectRate, K2Node_MakeStruct_Margin) == 0x000018, "Member 'LaunchScreen_C_UpdateAspectRate::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(LaunchScreen_C_UpdateAspectRate, CallFunc_GetViewportSize_ReturnValue) == 0x000028, "Member 'LaunchScreen_C_UpdateAspectRate::CallFunc_GetViewportSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(LaunchScreen_C_UpdateAspectRate, CallFunc_NotEqual_Vector2DVector2D_ReturnValue) == 0x000030, "Member 'LaunchScreen_C_UpdateAspectRate::CallFunc_NotEqual_Vector2DVector2D_ReturnValue' has a wrong offset!");

}

