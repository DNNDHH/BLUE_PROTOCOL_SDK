#pragma once

 

// Package: NpcBalloonWindow

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function NpcBalloonWindow.NpcBalloonWindow_C.ExecuteUbergraph_NpcBalloonWindow
// 0x0100 (0x0100 - 0x0000)
struct NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B9C[0x1];                                     // 0x000B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x000C(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetViewportScale_ReturnValue;             // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetBasePosition_ReturnValue;              // 0x0054(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckDistanceLimit_Result;                // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B9D[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_ProjectWorldToScreen_ScreenPosition;      // 0x0064(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ProjectWorldToScreen_ReturnValue;         // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B9E[0x3];                                     // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_Divide_Vector2DFloat_ReturnValue;         // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_CustomEvent_Message;                        // 0x0078(0x0018)(ConstParm)
	class ACharacter*                             K2Node_CustomEvent_AttachCharacter;                // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_AttachTransformName;            // 0x0098(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_AutoCloseTime;                  // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_AdjustPosition_ReturnValue;               // 0x00A4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_AdjustPosition_Result;                    // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B9F[0x3];                                     // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x00B0(0x0008)(NoDestructor, HasGetValueTypeHash)
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x00B8(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BA0[0x2];                                     // 0x00D2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)> K2Node_CreateDelegate_OutputDelegate;              // 0x00D4(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_5BA1[0x4];                                     // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue;         // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBUIType                                     K2Node_CustomEvent_InUIType;                       // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInVisibility;                  // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bInInstantly;                   // 0x00F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00F3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIVisibleSetting_ReturnValue;          // 0x00F5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BA2[0x2];                                     // 0x00F6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue_1;       // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow) == 0x000008, "Wrong alignment on NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow");
static_assert(sizeof(NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow) == 0x000100, "Wrong size on NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow");
static_assert(offsetof(NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow, EntryPoint) == 0x000000, "Member 'NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow::EntryPoint' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow, CallFunc_PlaySE_ReturnValue) == 0x000004, "Member 'NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow, Temp_bool_Variable) == 0x000008, "Member 'NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow, Temp_byte_Variable) == 0x000009, "Member 'NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow, Temp_byte_Variable_1) == 0x00000A, "Member 'NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow, K2Node_Event_MyGeometry) == 0x00000C, "Member 'NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow, K2Node_Event_InDeltaTime) == 0x000044, "Member 'NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow, CallFunc_GetPlayerController_ReturnValue) == 0x000048, "Member 'NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow, CallFunc_GetViewportScale_ReturnValue) == 0x000050, "Member 'NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow::CallFunc_GetViewportScale_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow, CallFunc_GetBasePosition_ReturnValue) == 0x000054, "Member 'NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow::CallFunc_GetBasePosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow, CallFunc_CheckDistanceLimit_Result) == 0x000060, "Member 'NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow::CallFunc_CheckDistanceLimit_Result' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow, CallFunc_ProjectWorldToScreen_ScreenPosition) == 0x000064, "Member 'NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow::CallFunc_ProjectWorldToScreen_ScreenPosition' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow, CallFunc_ProjectWorldToScreen_ReturnValue) == 0x00006C, "Member 'NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow::CallFunc_ProjectWorldToScreen_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow, CallFunc_Divide_Vector2DFloat_ReturnValue) == 0x000070, "Member 'NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow::CallFunc_Divide_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow, K2Node_CustomEvent_Message) == 0x000078, "Member 'NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow::K2Node_CustomEvent_Message' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow, K2Node_CustomEvent_AttachCharacter) == 0x000090, "Member 'NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow::K2Node_CustomEvent_AttachCharacter' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow, K2Node_CustomEvent_AttachTransformName) == 0x000098, "Member 'NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow::K2Node_CustomEvent_AttachTransformName' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow, K2Node_CustomEvent_AutoCloseTime) == 0x0000A0, "Member 'NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow::K2Node_CustomEvent_AutoCloseTime' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow, CallFunc_AdjustPosition_ReturnValue) == 0x0000A4, "Member 'NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow::CallFunc_AdjustPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow, CallFunc_AdjustPosition_Result) == 0x0000AC, "Member 'NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow::CallFunc_AdjustPosition_Result' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow, CallFunc_K2_SetTimer_ReturnValue) == 0x0000B0, "Member 'NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow, K2Node_Event_Animation) == 0x0000B8, "Member 'NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow, CallFunc_PlayAnimation_ReturnValue) == 0x0000C0, "Member 'NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow, CallFunc_PlayAnimation_ReturnValue_1) == 0x0000C8, "Member 'NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0000D0, "Member 'NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow, CallFunc_IsAnimationPlaying_ReturnValue) == 0x0000D1, "Member 'NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow, K2Node_CreateDelegate_OutputDelegate) == 0x0000D4, "Member 'NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow, CallFunc_GetUIVisibleSettings_ReturnValue) == 0x0000E8, "Member 'NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow::CallFunc_GetUIVisibleSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow, K2Node_CustomEvent_InUIType) == 0x0000F0, "Member 'NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow::K2Node_CustomEvent_InUIType' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow, K2Node_CustomEvent_bInVisibility) == 0x0000F1, "Member 'NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow::K2Node_CustomEvent_bInVisibility' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow, K2Node_CustomEvent_bInInstantly) == 0x0000F2, "Member 'NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow::K2Node_CustomEvent_bInInstantly' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000F3, "Member 'NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow, K2Node_Select_Default) == 0x0000F4, "Member 'NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow, CallFunc_GetUIVisibleSetting_ReturnValue) == 0x0000F5, "Member 'NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow::CallFunc_GetUIVisibleSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow, CallFunc_GetUIVisibleSettings_ReturnValue_1) == 0x0000F8, "Member 'NpcBalloonWindow_C_ExecuteUbergraph_NpcBalloonWindow::CallFunc_GetUIVisibleSettings_ReturnValue_1' has a wrong offset!");

// Function NpcBalloonWindow.NpcBalloonWindow_C.UIVisibleSettingChangeDelegate_Event_0
// 0x0003 (0x0003 - 0x0000)
struct NpcBalloonWindow_C_UIVisibleSettingChangeDelegate_Event_0 final
{
public:
	ESBUIType                                     InUIType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInVisibility;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInInstantly;                                      // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NpcBalloonWindow_C_UIVisibleSettingChangeDelegate_Event_0) == 0x000001, "Wrong alignment on NpcBalloonWindow_C_UIVisibleSettingChangeDelegate_Event_0");
static_assert(sizeof(NpcBalloonWindow_C_UIVisibleSettingChangeDelegate_Event_0) == 0x000003, "Wrong size on NpcBalloonWindow_C_UIVisibleSettingChangeDelegate_Event_0");
static_assert(offsetof(NpcBalloonWindow_C_UIVisibleSettingChangeDelegate_Event_0, InUIType) == 0x000000, "Member 'NpcBalloonWindow_C_UIVisibleSettingChangeDelegate_Event_0::InUIType' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_UIVisibleSettingChangeDelegate_Event_0, bInVisibility) == 0x000001, "Member 'NpcBalloonWindow_C_UIVisibleSettingChangeDelegate_Event_0::bInVisibility' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_UIVisibleSettingChangeDelegate_Event_0, bInInstantly) == 0x000002, "Member 'NpcBalloonWindow_C_UIVisibleSettingChangeDelegate_Event_0::bInInstantly' has a wrong offset!");

// Function NpcBalloonWindow.NpcBalloonWindow_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct NpcBalloonWindow_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NpcBalloonWindow_C_OnAnimationFinished) == 0x000008, "Wrong alignment on NpcBalloonWindow_C_OnAnimationFinished");
static_assert(sizeof(NpcBalloonWindow_C_OnAnimationFinished) == 0x000008, "Wrong size on NpcBalloonWindow_C_OnAnimationFinished");
static_assert(offsetof(NpcBalloonWindow_C_OnAnimationFinished, Animation) == 0x000000, "Member 'NpcBalloonWindow_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function NpcBalloonWindow.NpcBalloonWindow_C.Show
// 0x0030 (0x0030 - 0x0000)
struct NpcBalloonWindow_C_Show final
{
public:
	class FText                                   Message;                                           // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class ACharacter*                             Param_AttachCharacter;                             // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Param_AttachTransformName;                         // 0x0020(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AutoCloseTime;                                     // 0x0028(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NpcBalloonWindow_C_Show) == 0x000008, "Wrong alignment on NpcBalloonWindow_C_Show");
static_assert(sizeof(NpcBalloonWindow_C_Show) == 0x000030, "Wrong size on NpcBalloonWindow_C_Show");
static_assert(offsetof(NpcBalloonWindow_C_Show, Message) == 0x000000, "Member 'NpcBalloonWindow_C_Show::Message' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_Show, Param_AttachCharacter) == 0x000018, "Member 'NpcBalloonWindow_C_Show::Param_AttachCharacter' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_Show, Param_AttachTransformName) == 0x000020, "Member 'NpcBalloonWindow_C_Show::Param_AttachTransformName' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_Show, AutoCloseTime) == 0x000028, "Member 'NpcBalloonWindow_C_Show::AutoCloseTime' has a wrong offset!");

// Function NpcBalloonWindow.NpcBalloonWindow_C.Tick
// 0x003C (0x003C - 0x0000)
struct NpcBalloonWindow_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NpcBalloonWindow_C_Tick) == 0x000004, "Wrong alignment on NpcBalloonWindow_C_Tick");
static_assert(sizeof(NpcBalloonWindow_C_Tick) == 0x00003C, "Wrong size on NpcBalloonWindow_C_Tick");
static_assert(offsetof(NpcBalloonWindow_C_Tick, MyGeometry) == 0x000000, "Member 'NpcBalloonWindow_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_Tick, InDeltaTime) == 0x000038, "Member 'NpcBalloonWindow_C_Tick::InDeltaTime' has a wrong offset!");

// Function NpcBalloonWindow.NpcBalloonWindow_C.AdjustPosition
// 0x009C (0x009C - 0x0000)
struct NpcBalloonWindow_C_AdjustPosition final
{
public:
	struct FVector2D                              Position;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BA3[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              TmpPosition;                                       // 0x0014(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Subtract_Vector2DVector2D_ReturnValue;    // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_1;                        // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_1;                        // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Round_ReturnValue;                        // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BA4[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BA5[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Round_ReturnValue_1;                      // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BA6[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_2;                        // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_2;                        // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetDesiredSize_ReturnValue;               // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetViewportScale_ReturnValue;             // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetViewportSize_ReturnValue;              // 0x006C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Divide_Vector2DFloat_ReturnValue;         // 0x0074(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Subtract_Vector2DVector2D_ReturnValue_1;  // 0x007C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_3;                        // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_3;                        // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue_1;                     // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x0094(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NpcBalloonWindow_C_AdjustPosition) == 0x000004, "Wrong alignment on NpcBalloonWindow_C_AdjustPosition");
static_assert(sizeof(NpcBalloonWindow_C_AdjustPosition) == 0x00009C, "Wrong size on NpcBalloonWindow_C_AdjustPosition");
static_assert(offsetof(NpcBalloonWindow_C_AdjustPosition, Position) == 0x000000, "Member 'NpcBalloonWindow_C_AdjustPosition::Position' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_AdjustPosition, ReturnValue) == 0x000008, "Member 'NpcBalloonWindow_C_AdjustPosition::ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_AdjustPosition, Result) == 0x000010, "Member 'NpcBalloonWindow_C_AdjustPosition::Result' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_AdjustPosition, TmpPosition) == 0x000014, "Member 'NpcBalloonWindow_C_AdjustPosition::TmpPosition' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_AdjustPosition, CallFunc_Subtract_Vector2DVector2D_ReturnValue) == 0x00001C, "Member 'NpcBalloonWindow_C_AdjustPosition::CallFunc_Subtract_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_AdjustPosition, CallFunc_BreakVector2D_X) == 0x000024, "Member 'NpcBalloonWindow_C_AdjustPosition::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_AdjustPosition, CallFunc_BreakVector2D_Y) == 0x000028, "Member 'NpcBalloonWindow_C_AdjustPosition::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_AdjustPosition, CallFunc_BreakVector2D_X_1) == 0x00002C, "Member 'NpcBalloonWindow_C_AdjustPosition::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_AdjustPosition, CallFunc_BreakVector2D_Y_1) == 0x000030, "Member 'NpcBalloonWindow_C_AdjustPosition::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_AdjustPosition, CallFunc_Round_ReturnValue) == 0x000034, "Member 'NpcBalloonWindow_C_AdjustPosition::CallFunc_Round_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_AdjustPosition, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000038, "Member 'NpcBalloonWindow_C_AdjustPosition::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_AdjustPosition, CallFunc_Conv_IntToFloat_ReturnValue) == 0x00003C, "Member 'NpcBalloonWindow_C_AdjustPosition::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_AdjustPosition, CallFunc_GreaterEqual_FloatFloat_ReturnValue_1) == 0x000040, "Member 'NpcBalloonWindow_C_AdjustPosition::CallFunc_GreaterEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_AdjustPosition, CallFunc_Round_ReturnValue_1) == 0x000044, "Member 'NpcBalloonWindow_C_AdjustPosition::CallFunc_Round_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_AdjustPosition, CallFunc_BooleanAND_ReturnValue) == 0x000048, "Member 'NpcBalloonWindow_C_AdjustPosition::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_AdjustPosition, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x00004C, "Member 'NpcBalloonWindow_C_AdjustPosition::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_AdjustPosition, CallFunc_MakeVector2D_ReturnValue) == 0x000050, "Member 'NpcBalloonWindow_C_AdjustPosition::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_AdjustPosition, CallFunc_BreakVector2D_X_2) == 0x000058, "Member 'NpcBalloonWindow_C_AdjustPosition::CallFunc_BreakVector2D_X_2' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_AdjustPosition, CallFunc_BreakVector2D_Y_2) == 0x00005C, "Member 'NpcBalloonWindow_C_AdjustPosition::CallFunc_BreakVector2D_Y_2' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_AdjustPosition, CallFunc_GetDesiredSize_ReturnValue) == 0x000060, "Member 'NpcBalloonWindow_C_AdjustPosition::CallFunc_GetDesiredSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_AdjustPosition, CallFunc_GetViewportScale_ReturnValue) == 0x000068, "Member 'NpcBalloonWindow_C_AdjustPosition::CallFunc_GetViewportScale_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_AdjustPosition, CallFunc_GetViewportSize_ReturnValue) == 0x00006C, "Member 'NpcBalloonWindow_C_AdjustPosition::CallFunc_GetViewportSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_AdjustPosition, CallFunc_Divide_Vector2DFloat_ReturnValue) == 0x000074, "Member 'NpcBalloonWindow_C_AdjustPosition::CallFunc_Divide_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_AdjustPosition, CallFunc_Subtract_Vector2DVector2D_ReturnValue_1) == 0x00007C, "Member 'NpcBalloonWindow_C_AdjustPosition::CallFunc_Subtract_Vector2DVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_AdjustPosition, CallFunc_BreakVector2D_X_3) == 0x000084, "Member 'NpcBalloonWindow_C_AdjustPosition::CallFunc_BreakVector2D_X_3' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_AdjustPosition, CallFunc_BreakVector2D_Y_3) == 0x000088, "Member 'NpcBalloonWindow_C_AdjustPosition::CallFunc_BreakVector2D_Y_3' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_AdjustPosition, CallFunc_FClamp_ReturnValue) == 0x00008C, "Member 'NpcBalloonWindow_C_AdjustPosition::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_AdjustPosition, CallFunc_FClamp_ReturnValue_1) == 0x000090, "Member 'NpcBalloonWindow_C_AdjustPosition::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_AdjustPosition, CallFunc_MakeVector2D_ReturnValue_1) == 0x000094, "Member 'NpcBalloonWindow_C_AdjustPosition::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");

// Function NpcBalloonWindow.NpcBalloonWindow_C.GetBasePosition
// 0x0080 (0x0080 - 0x0000)
struct NpcBalloonWindow_C_GetBasePosition final
{
public:
	struct FVector                                ReturnValue;                                       // 0x0000(0x000C)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BA7[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5BA8[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetSocketTransform_ReturnValue;           // 0x0020(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0050(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x005C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0068(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NpcBalloonWindow_C_GetBasePosition) == 0x000010, "Wrong alignment on NpcBalloonWindow_C_GetBasePosition");
static_assert(sizeof(NpcBalloonWindow_C_GetBasePosition) == 0x000080, "Wrong size on NpcBalloonWindow_C_GetBasePosition");
static_assert(offsetof(NpcBalloonWindow_C_GetBasePosition, ReturnValue) == 0x000000, "Member 'NpcBalloonWindow_C_GetBasePosition::ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_GetBasePosition, CallFunc_IsValid_ReturnValue) == 0x00000C, "Member 'NpcBalloonWindow_C_GetBasePosition::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_GetBasePosition, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000010, "Member 'NpcBalloonWindow_C_GetBasePosition::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_GetBasePosition, CallFunc_GetSocketTransform_ReturnValue) == 0x000020, "Member 'NpcBalloonWindow_C_GetBasePosition::CallFunc_GetSocketTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_GetBasePosition, CallFunc_BreakTransform_Location) == 0x000050, "Member 'NpcBalloonWindow_C_GetBasePosition::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_GetBasePosition, CallFunc_BreakTransform_Rotation) == 0x00005C, "Member 'NpcBalloonWindow_C_GetBasePosition::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_GetBasePosition, CallFunc_BreakTransform_Scale) == 0x000068, "Member 'NpcBalloonWindow_C_GetBasePosition::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_GetBasePosition, CallFunc_IsValid_ReturnValue_1) == 0x000074, "Member 'NpcBalloonWindow_C_GetBasePosition::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function NpcBalloonWindow.NpcBalloonWindow_C.CheckDistanceLimit
// 0x0058 (0x0058 - 0x0000)
struct NpcBalloonWindow_C_CheckDistanceLimit final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BA9[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BAA[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0014(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetBasePosition_ReturnValue;              // 0x0020(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x002C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0044(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize2D_ReturnValue;                      // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NpcBalloonWindow_C_CheckDistanceLimit) == 0x000008, "Wrong alignment on NpcBalloonWindow_C_CheckDistanceLimit");
static_assert(sizeof(NpcBalloonWindow_C_CheckDistanceLimit) == 0x000058, "Wrong size on NpcBalloonWindow_C_CheckDistanceLimit");
static_assert(offsetof(NpcBalloonWindow_C_CheckDistanceLimit, Result) == 0x000000, "Member 'NpcBalloonWindow_C_CheckDistanceLimit::Result' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_CheckDistanceLimit, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000008, "Member 'NpcBalloonWindow_C_CheckDistanceLimit::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_CheckDistanceLimit, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'NpcBalloonWindow_C_CheckDistanceLimit::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_CheckDistanceLimit, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000014, "Member 'NpcBalloonWindow_C_CheckDistanceLimit::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_CheckDistanceLimit, CallFunc_GetBasePosition_ReturnValue) == 0x000020, "Member 'NpcBalloonWindow_C_CheckDistanceLimit::CallFunc_GetBasePosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_CheckDistanceLimit, CallFunc_Subtract_VectorVector_ReturnValue) == 0x00002C, "Member 'NpcBalloonWindow_C_CheckDistanceLimit::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_CheckDistanceLimit, CallFunc_BreakVector_X) == 0x000038, "Member 'NpcBalloonWindow_C_CheckDistanceLimit::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_CheckDistanceLimit, CallFunc_BreakVector_Y) == 0x00003C, "Member 'NpcBalloonWindow_C_CheckDistanceLimit::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_CheckDistanceLimit, CallFunc_BreakVector_Z) == 0x000040, "Member 'NpcBalloonWindow_C_CheckDistanceLimit::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_CheckDistanceLimit, CallFunc_MakeVector2D_ReturnValue) == 0x000044, "Member 'NpcBalloonWindow_C_CheckDistanceLimit::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_CheckDistanceLimit, CallFunc_VSize2D_ReturnValue) == 0x00004C, "Member 'NpcBalloonWindow_C_CheckDistanceLimit::CallFunc_VSize2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(NpcBalloonWindow_C_CheckDistanceLimit, CallFunc_Less_FloatFloat_ReturnValue) == 0x000050, "Member 'NpcBalloonWindow_C_CheckDistanceLimit::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");

}

