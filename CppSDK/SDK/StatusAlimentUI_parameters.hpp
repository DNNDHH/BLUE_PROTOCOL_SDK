#pragma once

 

// Package: StatusAlimentUI

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function StatusAlimentUI.StatusAlimentUI_C.ExecuteUbergraph_StatusAlimentUI
// 0x0090 (0x0090 - 0x0000)
struct StatusAlimentUI_C_ExecuteUbergraph_StatusAlimentUI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBStatusUIRequestInfo                 K2Node_Event_InRequestInfo;                        // 0x0040(0x0028)(ConstParm)
	struct FVector2D                              CallFunc_CalcBaseLocation_Location;                // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CalcBaseLocation_bResult;                 // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E50[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0078(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetEndTime_ReturnValue;                   // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StatusAlimentUI_C_ExecuteUbergraph_StatusAlimentUI) == 0x000008, "Wrong alignment on StatusAlimentUI_C_ExecuteUbergraph_StatusAlimentUI");
static_assert(sizeof(StatusAlimentUI_C_ExecuteUbergraph_StatusAlimentUI) == 0x000090, "Wrong size on StatusAlimentUI_C_ExecuteUbergraph_StatusAlimentUI");
static_assert(offsetof(StatusAlimentUI_C_ExecuteUbergraph_StatusAlimentUI, EntryPoint) == 0x000000, "Member 'StatusAlimentUI_C_ExecuteUbergraph_StatusAlimentUI::EntryPoint' has a wrong offset!");
static_assert(offsetof(StatusAlimentUI_C_ExecuteUbergraph_StatusAlimentUI, K2Node_Event_MyGeometry) == 0x000004, "Member 'StatusAlimentUI_C_ExecuteUbergraph_StatusAlimentUI::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(StatusAlimentUI_C_ExecuteUbergraph_StatusAlimentUI, K2Node_Event_InDeltaTime) == 0x00003C, "Member 'StatusAlimentUI_C_ExecuteUbergraph_StatusAlimentUI::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(StatusAlimentUI_C_ExecuteUbergraph_StatusAlimentUI, K2Node_Event_InRequestInfo) == 0x000040, "Member 'StatusAlimentUI_C_ExecuteUbergraph_StatusAlimentUI::K2Node_Event_InRequestInfo' has a wrong offset!");
static_assert(offsetof(StatusAlimentUI_C_ExecuteUbergraph_StatusAlimentUI, CallFunc_CalcBaseLocation_Location) == 0x000068, "Member 'StatusAlimentUI_C_ExecuteUbergraph_StatusAlimentUI::CallFunc_CalcBaseLocation_Location' has a wrong offset!");
static_assert(offsetof(StatusAlimentUI_C_ExecuteUbergraph_StatusAlimentUI, CallFunc_CalcBaseLocation_bResult) == 0x000070, "Member 'StatusAlimentUI_C_ExecuteUbergraph_StatusAlimentUI::CallFunc_CalcBaseLocation_bResult' has a wrong offset!");
static_assert(offsetof(StatusAlimentUI_C_ExecuteUbergraph_StatusAlimentUI, K2Node_Event_Animation) == 0x000078, "Member 'StatusAlimentUI_C_ExecuteUbergraph_StatusAlimentUI::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(StatusAlimentUI_C_ExecuteUbergraph_StatusAlimentUI, CallFunc_GetEndTime_ReturnValue) == 0x000080, "Member 'StatusAlimentUI_C_ExecuteUbergraph_StatusAlimentUI::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(StatusAlimentUI_C_ExecuteUbergraph_StatusAlimentUI, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000084, "Member 'StatusAlimentUI_C_ExecuteUbergraph_StatusAlimentUI::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(StatusAlimentUI_C_ExecuteUbergraph_StatusAlimentUI, CallFunc_PlayAnimation_ReturnValue) == 0x000088, "Member 'StatusAlimentUI_C_ExecuteUbergraph_StatusAlimentUI::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function StatusAlimentUI.StatusAlimentUI_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct StatusAlimentUI_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StatusAlimentUI_C_OnAnimationFinished) == 0x000008, "Wrong alignment on StatusAlimentUI_C_OnAnimationFinished");
static_assert(sizeof(StatusAlimentUI_C_OnAnimationFinished) == 0x000008, "Wrong size on StatusAlimentUI_C_OnAnimationFinished");
static_assert(offsetof(StatusAlimentUI_C_OnAnimationFinished, Animation) == 0x000000, "Member 'StatusAlimentUI_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function StatusAlimentUI.StatusAlimentUI_C.Show
// 0x0028 (0x0028 - 0x0000)
struct StatusAlimentUI_C_Show final
{
public:
	struct FSBStatusUIRequestInfo                 InRequestInfo;                                     // 0x0000(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(StatusAlimentUI_C_Show) == 0x000008, "Wrong alignment on StatusAlimentUI_C_Show");
static_assert(sizeof(StatusAlimentUI_C_Show) == 0x000028, "Wrong size on StatusAlimentUI_C_Show");
static_assert(offsetof(StatusAlimentUI_C_Show, InRequestInfo) == 0x000000, "Member 'StatusAlimentUI_C_Show::InRequestInfo' has a wrong offset!");

// Function StatusAlimentUI.StatusAlimentUI_C.Tick
// 0x003C (0x003C - 0x0000)
struct StatusAlimentUI_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StatusAlimentUI_C_Tick) == 0x000004, "Wrong alignment on StatusAlimentUI_C_Tick");
static_assert(sizeof(StatusAlimentUI_C_Tick) == 0x00003C, "Wrong size on StatusAlimentUI_C_Tick");
static_assert(offsetof(StatusAlimentUI_C_Tick, MyGeometry) == 0x000000, "Member 'StatusAlimentUI_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(StatusAlimentUI_C_Tick, InDeltaTime) == 0x000038, "Member 'StatusAlimentUI_C_Tick::InDeltaTime' has a wrong offset!");

// Function StatusAlimentUI.StatusAlimentUI_C.SetText
// 0x0020 (0x0020 - 0x0000)
struct StatusAlimentUI_C_SetText final
{
public:
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0000(0x0018)()
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StatusAlimentUI_C_SetText) == 0x000008, "Wrong alignment on StatusAlimentUI_C_SetText");
static_assert(sizeof(StatusAlimentUI_C_SetText) == 0x000020, "Wrong size on StatusAlimentUI_C_SetText");
static_assert(offsetof(StatusAlimentUI_C_SetText, CallFunc_Conv_StringToText_ReturnValue) == 0x000000, "Member 'StatusAlimentUI_C_SetText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(StatusAlimentUI_C_SetText, CallFunc_NotEqual_FloatFloat_ReturnValue) == 0x000018, "Member 'StatusAlimentUI_C_SetText::CallFunc_NotEqual_FloatFloat_ReturnValue' has a wrong offset!");

// Function StatusAlimentUI.StatusAlimentUI_C.UpdateLocation
// 0x0028 (0x0028 - 0x0000)
struct StatusAlimentUI_C_UpdateLocation final
{
public:
	float                                         InDeltaTime;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_CalcBaseLocation_Location;                // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CalcBaseLocation_bResult;                 // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E51[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_Multiply_Vector2DFloat_ReturnValue;       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Add_Vector2DVector2D_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Add_Vector2DVector2D_ReturnValue_1;       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StatusAlimentUI_C_UpdateLocation) == 0x000004, "Wrong alignment on StatusAlimentUI_C_UpdateLocation");
static_assert(sizeof(StatusAlimentUI_C_UpdateLocation) == 0x000028, "Wrong size on StatusAlimentUI_C_UpdateLocation");
static_assert(offsetof(StatusAlimentUI_C_UpdateLocation, InDeltaTime) == 0x000000, "Member 'StatusAlimentUI_C_UpdateLocation::InDeltaTime' has a wrong offset!");
static_assert(offsetof(StatusAlimentUI_C_UpdateLocation, CallFunc_CalcBaseLocation_Location) == 0x000004, "Member 'StatusAlimentUI_C_UpdateLocation::CallFunc_CalcBaseLocation_Location' has a wrong offset!");
static_assert(offsetof(StatusAlimentUI_C_UpdateLocation, CallFunc_CalcBaseLocation_bResult) == 0x00000C, "Member 'StatusAlimentUI_C_UpdateLocation::CallFunc_CalcBaseLocation_bResult' has a wrong offset!");
static_assert(offsetof(StatusAlimentUI_C_UpdateLocation, CallFunc_Multiply_Vector2DFloat_ReturnValue) == 0x000010, "Member 'StatusAlimentUI_C_UpdateLocation::CallFunc_Multiply_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(StatusAlimentUI_C_UpdateLocation, CallFunc_Add_Vector2DVector2D_ReturnValue) == 0x000018, "Member 'StatusAlimentUI_C_UpdateLocation::CallFunc_Add_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(StatusAlimentUI_C_UpdateLocation, CallFunc_Add_Vector2DVector2D_ReturnValue_1) == 0x000020, "Member 'StatusAlimentUI_C_UpdateLocation::CallFunc_Add_Vector2DVector2D_ReturnValue_1' has a wrong offset!");

// Function StatusAlimentUI.StatusAlimentUI_C.CalcBaseLocation
// 0x0048 (0x0048 - 0x0000)
struct StatusAlimentUI_C_CalcBaseLocation final
{
public:
	struct FVector2D                              Location;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bResult;                                           // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E52[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              ScreenPosition;                                    // 0x000C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInsideScreen_bInside;                   // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E53[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetViewportScale_ReturnValue;             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E54[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Divide_Vector2DFloat_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_ProjectWorldToScreen_OutScreenPosition;   // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_ProjectWorldToScreen_OutDepth;            // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_ProjectWorldToScreen_OutRHW;              // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ProjectWorldToScreen_ReturnValue;         // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StatusAlimentUI_C_CalcBaseLocation) == 0x000008, "Wrong alignment on StatusAlimentUI_C_CalcBaseLocation");
static_assert(sizeof(StatusAlimentUI_C_CalcBaseLocation) == 0x000048, "Wrong size on StatusAlimentUI_C_CalcBaseLocation");
static_assert(offsetof(StatusAlimentUI_C_CalcBaseLocation, Location) == 0x000000, "Member 'StatusAlimentUI_C_CalcBaseLocation::Location' has a wrong offset!");
static_assert(offsetof(StatusAlimentUI_C_CalcBaseLocation, bResult) == 0x000008, "Member 'StatusAlimentUI_C_CalcBaseLocation::bResult' has a wrong offset!");
static_assert(offsetof(StatusAlimentUI_C_CalcBaseLocation, ScreenPosition) == 0x00000C, "Member 'StatusAlimentUI_C_CalcBaseLocation::ScreenPosition' has a wrong offset!");
static_assert(offsetof(StatusAlimentUI_C_CalcBaseLocation, CallFunc_IsInsideScreen_bInside) == 0x000014, "Member 'StatusAlimentUI_C_CalcBaseLocation::CallFunc_IsInsideScreen_bInside' has a wrong offset!");
static_assert(offsetof(StatusAlimentUI_C_CalcBaseLocation, CallFunc_GetViewportScale_ReturnValue) == 0x000018, "Member 'StatusAlimentUI_C_CalcBaseLocation::CallFunc_GetViewportScale_ReturnValue' has a wrong offset!");
static_assert(offsetof(StatusAlimentUI_C_CalcBaseLocation, CallFunc_GetPlayerController_ReturnValue) == 0x000020, "Member 'StatusAlimentUI_C_CalcBaseLocation::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(StatusAlimentUI_C_CalcBaseLocation, CallFunc_Divide_Vector2DFloat_ReturnValue) == 0x000028, "Member 'StatusAlimentUI_C_CalcBaseLocation::CallFunc_Divide_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(StatusAlimentUI_C_CalcBaseLocation, CallFunc_ProjectWorldToScreen_OutScreenPosition) == 0x000030, "Member 'StatusAlimentUI_C_CalcBaseLocation::CallFunc_ProjectWorldToScreen_OutScreenPosition' has a wrong offset!");
static_assert(offsetof(StatusAlimentUI_C_CalcBaseLocation, CallFunc_ProjectWorldToScreen_OutDepth) == 0x000038, "Member 'StatusAlimentUI_C_CalcBaseLocation::CallFunc_ProjectWorldToScreen_OutDepth' has a wrong offset!");
static_assert(offsetof(StatusAlimentUI_C_CalcBaseLocation, CallFunc_ProjectWorldToScreen_OutRHW) == 0x00003C, "Member 'StatusAlimentUI_C_CalcBaseLocation::CallFunc_ProjectWorldToScreen_OutRHW' has a wrong offset!");
static_assert(offsetof(StatusAlimentUI_C_CalcBaseLocation, CallFunc_ProjectWorldToScreen_ReturnValue) == 0x000040, "Member 'StatusAlimentUI_C_CalcBaseLocation::CallFunc_ProjectWorldToScreen_ReturnValue' has a wrong offset!");

// Function StatusAlimentUI.StatusAlimentUI_C.IsInsideScreen
// 0x0058 (0x0058 - 0x0000)
struct StatusAlimentUI_C_IsInsideScreen final
{
public:
	struct FVector2D                              InCheckPosition;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInside;                                           // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E55[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DummyWidgetSize;                                   // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_1;                        // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_1;                        // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E56[0x2];                                     // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetViewportSize_ReturnValue;              // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_2;                        // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_2;                        // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetViewportSize_ReturnValue_1;            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E57[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector2D_X_3;                        // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_3;                        // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E58[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue_1;            // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0056(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StatusAlimentUI_C_IsInsideScreen) == 0x000004, "Wrong alignment on StatusAlimentUI_C_IsInsideScreen");
static_assert(sizeof(StatusAlimentUI_C_IsInsideScreen) == 0x000058, "Wrong size on StatusAlimentUI_C_IsInsideScreen");
static_assert(offsetof(StatusAlimentUI_C_IsInsideScreen, InCheckPosition) == 0x000000, "Member 'StatusAlimentUI_C_IsInsideScreen::InCheckPosition' has a wrong offset!");
static_assert(offsetof(StatusAlimentUI_C_IsInsideScreen, bInside) == 0x000008, "Member 'StatusAlimentUI_C_IsInsideScreen::bInside' has a wrong offset!");
static_assert(offsetof(StatusAlimentUI_C_IsInsideScreen, DummyWidgetSize) == 0x00000C, "Member 'StatusAlimentUI_C_IsInsideScreen::DummyWidgetSize' has a wrong offset!");
static_assert(offsetof(StatusAlimentUI_C_IsInsideScreen, CallFunc_BreakVector2D_X) == 0x000010, "Member 'StatusAlimentUI_C_IsInsideScreen::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(StatusAlimentUI_C_IsInsideScreen, CallFunc_BreakVector2D_Y) == 0x000014, "Member 'StatusAlimentUI_C_IsInsideScreen::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(StatusAlimentUI_C_IsInsideScreen, CallFunc_BreakVector2D_X_1) == 0x000018, "Member 'StatusAlimentUI_C_IsInsideScreen::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(StatusAlimentUI_C_IsInsideScreen, CallFunc_BreakVector2D_Y_1) == 0x00001C, "Member 'StatusAlimentUI_C_IsInsideScreen::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(StatusAlimentUI_C_IsInsideScreen, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000020, "Member 'StatusAlimentUI_C_IsInsideScreen::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(StatusAlimentUI_C_IsInsideScreen, CallFunc_GreaterEqual_FloatFloat_ReturnValue_1) == 0x000021, "Member 'StatusAlimentUI_C_IsInsideScreen::CallFunc_GreaterEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StatusAlimentUI_C_IsInsideScreen, CallFunc_GetViewportSize_ReturnValue) == 0x000024, "Member 'StatusAlimentUI_C_IsInsideScreen::CallFunc_GetViewportSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(StatusAlimentUI_C_IsInsideScreen, CallFunc_BreakVector2D_X_2) == 0x00002C, "Member 'StatusAlimentUI_C_IsInsideScreen::CallFunc_BreakVector2D_X_2' has a wrong offset!");
static_assert(offsetof(StatusAlimentUI_C_IsInsideScreen, CallFunc_BreakVector2D_Y_2) == 0x000030, "Member 'StatusAlimentUI_C_IsInsideScreen::CallFunc_BreakVector2D_Y_2' has a wrong offset!");
static_assert(offsetof(StatusAlimentUI_C_IsInsideScreen, CallFunc_Add_FloatFloat_ReturnValue) == 0x000034, "Member 'StatusAlimentUI_C_IsInsideScreen::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(StatusAlimentUI_C_IsInsideScreen, CallFunc_GetViewportSize_ReturnValue_1) == 0x000038, "Member 'StatusAlimentUI_C_IsInsideScreen::CallFunc_GetViewportSize_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StatusAlimentUI_C_IsInsideScreen, CallFunc_Less_FloatFloat_ReturnValue) == 0x000040, "Member 'StatusAlimentUI_C_IsInsideScreen::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(StatusAlimentUI_C_IsInsideScreen, CallFunc_BreakVector2D_X_3) == 0x000044, "Member 'StatusAlimentUI_C_IsInsideScreen::CallFunc_BreakVector2D_X_3' has a wrong offset!");
static_assert(offsetof(StatusAlimentUI_C_IsInsideScreen, CallFunc_BreakVector2D_Y_3) == 0x000048, "Member 'StatusAlimentUI_C_IsInsideScreen::CallFunc_BreakVector2D_Y_3' has a wrong offset!");
static_assert(offsetof(StatusAlimentUI_C_IsInsideScreen, CallFunc_BooleanAND_ReturnValue) == 0x00004C, "Member 'StatusAlimentUI_C_IsInsideScreen::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(StatusAlimentUI_C_IsInsideScreen, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x000050, "Member 'StatusAlimentUI_C_IsInsideScreen::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StatusAlimentUI_C_IsInsideScreen, CallFunc_Less_FloatFloat_ReturnValue_1) == 0x000054, "Member 'StatusAlimentUI_C_IsInsideScreen::CallFunc_Less_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StatusAlimentUI_C_IsInsideScreen, CallFunc_BooleanAND_ReturnValue_1) == 0x000055, "Member 'StatusAlimentUI_C_IsInsideScreen::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StatusAlimentUI_C_IsInsideScreen, CallFunc_BooleanAND_ReturnValue_2) == 0x000056, "Member 'StatusAlimentUI_C_IsInsideScreen::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");

}

