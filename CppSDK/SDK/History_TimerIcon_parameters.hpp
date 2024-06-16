#pragma once

 

// Package: History_TimerIcon

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function History_TimerIcon.History_TimerIcon_C.ExecuteUbergraph_History_TimerIcon
// 0x0148 (0x0148 - 0x0000)
struct History_TimerIcon_C_ExecuteUbergraph_History_TimerIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;                         // 0x0008(0x0070)(ConstParm)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0078(0x0038)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x00B0(0x0070)(ConstParm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5588[0x2];                                     // 0x0122(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetUIPosition_ReturnValue;                // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonIconToolTipContent_DateTime_C*   CallFunc_Create_ReturnValue;                       // 0x0130(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_AbsoluteToViewport_PixelPosition;         // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_AbsoluteToViewport_ViewportPosition;      // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(History_TimerIcon_C_ExecuteUbergraph_History_TimerIcon) == 0x000008, "Wrong alignment on History_TimerIcon_C_ExecuteUbergraph_History_TimerIcon");
static_assert(sizeof(History_TimerIcon_C_ExecuteUbergraph_History_TimerIcon) == 0x000148, "Wrong size on History_TimerIcon_C_ExecuteUbergraph_History_TimerIcon");
static_assert(offsetof(History_TimerIcon_C_ExecuteUbergraph_History_TimerIcon, EntryPoint) == 0x000000, "Member 'History_TimerIcon_C_ExecuteUbergraph_History_TimerIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(History_TimerIcon_C_ExecuteUbergraph_History_TimerIcon, CallFunc_PlaySE_ReturnValue) == 0x000004, "Member 'History_TimerIcon_C_ExecuteUbergraph_History_TimerIcon::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(History_TimerIcon_C_ExecuteUbergraph_History_TimerIcon, K2Node_Event_MouseEvent_1) == 0x000008, "Member 'History_TimerIcon_C_ExecuteUbergraph_History_TimerIcon::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(History_TimerIcon_C_ExecuteUbergraph_History_TimerIcon, K2Node_Event_MyGeometry) == 0x000078, "Member 'History_TimerIcon_C_ExecuteUbergraph_History_TimerIcon::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(History_TimerIcon_C_ExecuteUbergraph_History_TimerIcon, K2Node_Event_MouseEvent) == 0x0000B0, "Member 'History_TimerIcon_C_ExecuteUbergraph_History_TimerIcon::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(History_TimerIcon_C_ExecuteUbergraph_History_TimerIcon, CallFunc_IsValid_ReturnValue) == 0x000120, "Member 'History_TimerIcon_C_ExecuteUbergraph_History_TimerIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(History_TimerIcon_C_ExecuteUbergraph_History_TimerIcon, CallFunc_IsValid_ReturnValue_1) == 0x000121, "Member 'History_TimerIcon_C_ExecuteUbergraph_History_TimerIcon::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(History_TimerIcon_C_ExecuteUbergraph_History_TimerIcon, CallFunc_PlaySE_ReturnValue_1) == 0x000124, "Member 'History_TimerIcon_C_ExecuteUbergraph_History_TimerIcon::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(History_TimerIcon_C_ExecuteUbergraph_History_TimerIcon, CallFunc_GetUIPosition_ReturnValue) == 0x000128, "Member 'History_TimerIcon_C_ExecuteUbergraph_History_TimerIcon::CallFunc_GetUIPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(History_TimerIcon_C_ExecuteUbergraph_History_TimerIcon, CallFunc_Create_ReturnValue) == 0x000130, "Member 'History_TimerIcon_C_ExecuteUbergraph_History_TimerIcon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(History_TimerIcon_C_ExecuteUbergraph_History_TimerIcon, CallFunc_AbsoluteToViewport_PixelPosition) == 0x000138, "Member 'History_TimerIcon_C_ExecuteUbergraph_History_TimerIcon::CallFunc_AbsoluteToViewport_PixelPosition' has a wrong offset!");
static_assert(offsetof(History_TimerIcon_C_ExecuteUbergraph_History_TimerIcon, CallFunc_AbsoluteToViewport_ViewportPosition) == 0x000140, "Member 'History_TimerIcon_C_ExecuteUbergraph_History_TimerIcon::CallFunc_AbsoluteToViewport_ViewportPosition' has a wrong offset!");

// Function History_TimerIcon.History_TimerIcon_C.OnMouseEnter
// 0x00A8 (0x00A8 - 0x0000)
struct History_TimerIcon_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(History_TimerIcon_C_OnMouseEnter) == 0x000008, "Wrong alignment on History_TimerIcon_C_OnMouseEnter");
static_assert(sizeof(History_TimerIcon_C_OnMouseEnter) == 0x0000A8, "Wrong size on History_TimerIcon_C_OnMouseEnter");
static_assert(offsetof(History_TimerIcon_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'History_TimerIcon_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(History_TimerIcon_C_OnMouseEnter, MouseEvent) == 0x000038, "Member 'History_TimerIcon_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function History_TimerIcon.History_TimerIcon_C.OnMouseLeave
// 0x0070 (0x0070 - 0x0000)
struct History_TimerIcon_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(History_TimerIcon_C_OnMouseLeave) == 0x000008, "Wrong alignment on History_TimerIcon_C_OnMouseLeave");
static_assert(sizeof(History_TimerIcon_C_OnMouseLeave) == 0x000070, "Wrong size on History_TimerIcon_C_OnMouseLeave");
static_assert(offsetof(History_TimerIcon_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'History_TimerIcon_C_OnMouseLeave::MouseEvent' has a wrong offset!");

// Function History_TimerIcon.History_TimerIcon_C.SetDateTime
// 0x0008 (0x0008 - 0x0000)
struct History_TimerIcon_C_SetDateTime final
{
public:
	struct FDateTime                              Param_Time;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(History_TimerIcon_C_SetDateTime) == 0x000008, "Wrong alignment on History_TimerIcon_C_SetDateTime");
static_assert(sizeof(History_TimerIcon_C_SetDateTime) == 0x000008, "Wrong size on History_TimerIcon_C_SetDateTime");
static_assert(offsetof(History_TimerIcon_C_SetDateTime, Param_Time) == 0x000000, "Member 'History_TimerIcon_C_SetDateTime::Param_Time' has a wrong offset!");

}

