#pragma once

 

// Package: P021HUD

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function P021HUD.P021HUD_C.ExecuteUbergraph_P021HUD
// 0x00F8 (0x00F8 - 0x0000)
struct P021HUD_C_ExecuteUbergraph_P021HUD final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72A7[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72A8[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue;             // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_1;           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender_2;                       // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_2;                        // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventParamPerformerVoltageGauge*     K2Node_DynamicCast_AsSBEvent_Param_Performer_Voltage_Gauge; // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72A9[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_2;           // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_3;           // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_4;           // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_5;           // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender_1;                       // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_1;                        // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventParamPerformerVoltageGauge*     K2Node_DynamicCast_AsSBEvent_Param_Performer_Voltage_Gauge_1; // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72AA[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Sender;                         // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param;                          // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventParamPerformerVoltageGauge*     K2Node_DynamicCast_AsSBEvent_Param_Performer_Voltage_Gauge_2; // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBUIType                                     K2Node_CustomEvent_InUIType;                       // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInVisibility;                  // 0x00CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bInInstantly;                   // 0x00CB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72AB[0x3];                                     // 0x00CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x00D0(0x0010)(ZeroConstructor, NoDestructor)
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue;         // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue_1;       // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(P021HUD_C_ExecuteUbergraph_P021HUD) == 0x000008, "Wrong alignment on P021HUD_C_ExecuteUbergraph_P021HUD");
static_assert(sizeof(P021HUD_C_ExecuteUbergraph_P021HUD) == 0x0000F8, "Wrong size on P021HUD_C_ExecuteUbergraph_P021HUD");
static_assert(offsetof(P021HUD_C_ExecuteUbergraph_P021HUD, EntryPoint) == 0x000000, "Member 'P021HUD_C_ExecuteUbergraph_P021HUD::EntryPoint' has a wrong offset!");
static_assert(offsetof(P021HUD_C_ExecuteUbergraph_P021HUD, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'P021HUD_C_ExecuteUbergraph_P021HUD::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(P021HUD_C_ExecuteUbergraph_P021HUD, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'P021HUD_C_ExecuteUbergraph_P021HUD::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(P021HUD_C_ExecuteUbergraph_P021HUD, CallFunc_MakeLiteralByte_ReturnValue) == 0x000024, "Member 'P021HUD_C_ExecuteUbergraph_P021HUD::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(P021HUD_C_ExecuteUbergraph_P021HUD, K2Node_CreateDelegate_OutputDelegate_2) == 0x000028, "Member 'P021HUD_C_ExecuteUbergraph_P021HUD::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(P021HUD_C_ExecuteUbergraph_P021HUD, Temp_bool_Variable) == 0x000038, "Member 'P021HUD_C_ExecuteUbergraph_P021HUD::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(P021HUD_C_ExecuteUbergraph_P021HUD, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000039, "Member 'P021HUD_C_ExecuteUbergraph_P021HUD::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P021HUD_C_ExecuteUbergraph_P021HUD, CallFunc_GetEventExecutor_ReturnValue) == 0x000040, "Member 'P021HUD_C_ExecuteUbergraph_P021HUD::CallFunc_GetEventExecutor_ReturnValue' has a wrong offset!");
static_assert(offsetof(P021HUD_C_ExecuteUbergraph_P021HUD, CallFunc_GetEventExecutor_ReturnValue_1) == 0x000048, "Member 'P021HUD_C_ExecuteUbergraph_P021HUD::CallFunc_GetEventExecutor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P021HUD_C_ExecuteUbergraph_P021HUD, K2Node_CustomEvent_Sender_2) == 0x000050, "Member 'P021HUD_C_ExecuteUbergraph_P021HUD::K2Node_CustomEvent_Sender_2' has a wrong offset!");
static_assert(offsetof(P021HUD_C_ExecuteUbergraph_P021HUD, K2Node_CustomEvent_Param_2) == 0x000058, "Member 'P021HUD_C_ExecuteUbergraph_P021HUD::K2Node_CustomEvent_Param_2' has a wrong offset!");
static_assert(offsetof(P021HUD_C_ExecuteUbergraph_P021HUD, K2Node_DynamicCast_AsSBEvent_Param_Performer_Voltage_Gauge) == 0x000060, "Member 'P021HUD_C_ExecuteUbergraph_P021HUD::K2Node_DynamicCast_AsSBEvent_Param_Performer_Voltage_Gauge' has a wrong offset!");
static_assert(offsetof(P021HUD_C_ExecuteUbergraph_P021HUD, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'P021HUD_C_ExecuteUbergraph_P021HUD::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(P021HUD_C_ExecuteUbergraph_P021HUD, CallFunc_GetEventExecutor_ReturnValue_2) == 0x000070, "Member 'P021HUD_C_ExecuteUbergraph_P021HUD::CallFunc_GetEventExecutor_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(P021HUD_C_ExecuteUbergraph_P021HUD, CallFunc_GetEventExecutor_ReturnValue_3) == 0x000078, "Member 'P021HUD_C_ExecuteUbergraph_P021HUD::CallFunc_GetEventExecutor_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(P021HUD_C_ExecuteUbergraph_P021HUD, CallFunc_GetEventExecutor_ReturnValue_4) == 0x000080, "Member 'P021HUD_C_ExecuteUbergraph_P021HUD::CallFunc_GetEventExecutor_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(P021HUD_C_ExecuteUbergraph_P021HUD, CallFunc_GetEventExecutor_ReturnValue_5) == 0x000088, "Member 'P021HUD_C_ExecuteUbergraph_P021HUD::CallFunc_GetEventExecutor_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(P021HUD_C_ExecuteUbergraph_P021HUD, K2Node_CustomEvent_Sender_1) == 0x000090, "Member 'P021HUD_C_ExecuteUbergraph_P021HUD::K2Node_CustomEvent_Sender_1' has a wrong offset!");
static_assert(offsetof(P021HUD_C_ExecuteUbergraph_P021HUD, K2Node_CustomEvent_Param_1) == 0x000098, "Member 'P021HUD_C_ExecuteUbergraph_P021HUD::K2Node_CustomEvent_Param_1' has a wrong offset!");
static_assert(offsetof(P021HUD_C_ExecuteUbergraph_P021HUD, K2Node_DynamicCast_AsSBEvent_Param_Performer_Voltage_Gauge_1) == 0x0000A0, "Member 'P021HUD_C_ExecuteUbergraph_P021HUD::K2Node_DynamicCast_AsSBEvent_Param_Performer_Voltage_Gauge_1' has a wrong offset!");
static_assert(offsetof(P021HUD_C_ExecuteUbergraph_P021HUD, K2Node_DynamicCast_bSuccess_1) == 0x0000A8, "Member 'P021HUD_C_ExecuteUbergraph_P021HUD::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(P021HUD_C_ExecuteUbergraph_P021HUD, K2Node_CustomEvent_Sender) == 0x0000B0, "Member 'P021HUD_C_ExecuteUbergraph_P021HUD::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(P021HUD_C_ExecuteUbergraph_P021HUD, K2Node_CustomEvent_Param) == 0x0000B8, "Member 'P021HUD_C_ExecuteUbergraph_P021HUD::K2Node_CustomEvent_Param' has a wrong offset!");
static_assert(offsetof(P021HUD_C_ExecuteUbergraph_P021HUD, K2Node_DynamicCast_AsSBEvent_Param_Performer_Voltage_Gauge_2) == 0x0000C0, "Member 'P021HUD_C_ExecuteUbergraph_P021HUD::K2Node_DynamicCast_AsSBEvent_Param_Performer_Voltage_Gauge_2' has a wrong offset!");
static_assert(offsetof(P021HUD_C_ExecuteUbergraph_P021HUD, K2Node_DynamicCast_bSuccess_2) == 0x0000C8, "Member 'P021HUD_C_ExecuteUbergraph_P021HUD::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(P021HUD_C_ExecuteUbergraph_P021HUD, K2Node_CustomEvent_InUIType) == 0x0000C9, "Member 'P021HUD_C_ExecuteUbergraph_P021HUD::K2Node_CustomEvent_InUIType' has a wrong offset!");
static_assert(offsetof(P021HUD_C_ExecuteUbergraph_P021HUD, K2Node_CustomEvent_bInVisibility) == 0x0000CA, "Member 'P021HUD_C_ExecuteUbergraph_P021HUD::K2Node_CustomEvent_bInVisibility' has a wrong offset!");
static_assert(offsetof(P021HUD_C_ExecuteUbergraph_P021HUD, K2Node_CustomEvent_bInInstantly) == 0x0000CB, "Member 'P021HUD_C_ExecuteUbergraph_P021HUD::K2Node_CustomEvent_bInInstantly' has a wrong offset!");
static_assert(offsetof(P021HUD_C_ExecuteUbergraph_P021HUD, K2Node_Select_Default) == 0x0000CC, "Member 'P021HUD_C_ExecuteUbergraph_P021HUD::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(P021HUD_C_ExecuteUbergraph_P021HUD, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000D0, "Member 'P021HUD_C_ExecuteUbergraph_P021HUD::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(P021HUD_C_ExecuteUbergraph_P021HUD, CallFunc_GetUIVisibleSettings_ReturnValue) == 0x0000E0, "Member 'P021HUD_C_ExecuteUbergraph_P021HUD::CallFunc_GetUIVisibleSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(P021HUD_C_ExecuteUbergraph_P021HUD, CallFunc_GetUIVisibleSettings_ReturnValue_1) == 0x0000E8, "Member 'P021HUD_C_ExecuteUbergraph_P021HUD::CallFunc_GetUIVisibleSettings_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P021HUD_C_ExecuteUbergraph_P021HUD, CallFunc_IsValid_ReturnValue) == 0x0000F0, "Member 'P021HUD_C_ExecuteUbergraph_P021HUD::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(P021HUD_C_ExecuteUbergraph_P021HUD, CallFunc_IsValid_ReturnValue_1) == 0x0000F1, "Member 'P021HUD_C_ExecuteUbergraph_P021HUD::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function P021HUD.P021HUD_C.OnChangeUIVisibleSetting
// 0x0003 (0x0003 - 0x0000)
struct P021HUD_C_OnChangeUIVisibleSetting final
{
public:
	ESBUIType                                     InUIType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInVisibility;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInInstantly;                                      // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(P021HUD_C_OnChangeUIVisibleSetting) == 0x000001, "Wrong alignment on P021HUD_C_OnChangeUIVisibleSetting");
static_assert(sizeof(P021HUD_C_OnChangeUIVisibleSetting) == 0x000003, "Wrong size on P021HUD_C_OnChangeUIVisibleSetting");
static_assert(offsetof(P021HUD_C_OnChangeUIVisibleSetting, InUIType) == 0x000000, "Member 'P021HUD_C_OnChangeUIVisibleSetting::InUIType' has a wrong offset!");
static_assert(offsetof(P021HUD_C_OnChangeUIVisibleSetting, bInVisibility) == 0x000001, "Member 'P021HUD_C_OnChangeUIVisibleSetting::bInVisibility' has a wrong offset!");
static_assert(offsetof(P021HUD_C_OnChangeUIVisibleSetting, bInInstantly) == 0x000002, "Member 'P021HUD_C_OnChangeUIVisibleSetting::bInInstantly' has a wrong offset!");

// Function P021HUD.P021HUD_C.CustomEvent_1
// 0x0010 (0x0010 - 0x0000)
struct P021HUD_C_CustomEvent_1 final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P021HUD_C_CustomEvent_1) == 0x000008, "Wrong alignment on P021HUD_C_CustomEvent_1");
static_assert(sizeof(P021HUD_C_CustomEvent_1) == 0x000010, "Wrong size on P021HUD_C_CustomEvent_1");
static_assert(offsetof(P021HUD_C_CustomEvent_1, Sender) == 0x000000, "Member 'P021HUD_C_CustomEvent_1::Sender' has a wrong offset!");
static_assert(offsetof(P021HUD_C_CustomEvent_1, Param) == 0x000008, "Member 'P021HUD_C_CustomEvent_1::Param' has a wrong offset!");

// Function P021HUD.P021HUD_C.CustomEvent
// 0x0010 (0x0010 - 0x0000)
struct P021HUD_C_CustomEvent final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P021HUD_C_CustomEvent) == 0x000008, "Wrong alignment on P021HUD_C_CustomEvent");
static_assert(sizeof(P021HUD_C_CustomEvent) == 0x000010, "Wrong size on P021HUD_C_CustomEvent");
static_assert(offsetof(P021HUD_C_CustomEvent, Sender) == 0x000000, "Member 'P021HUD_C_CustomEvent::Sender' has a wrong offset!");
static_assert(offsetof(P021HUD_C_CustomEvent, Param) == 0x000008, "Member 'P021HUD_C_CustomEvent::Param' has a wrong offset!");

// Function P021HUD.P021HUD_C.CustomEvent_0
// 0x0010 (0x0010 - 0x0000)
struct P021HUD_C_CustomEvent_0 final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P021HUD_C_CustomEvent_0) == 0x000008, "Wrong alignment on P021HUD_C_CustomEvent_0");
static_assert(sizeof(P021HUD_C_CustomEvent_0) == 0x000010, "Wrong size on P021HUD_C_CustomEvent_0");
static_assert(offsetof(P021HUD_C_CustomEvent_0, Sender) == 0x000000, "Member 'P021HUD_C_CustomEvent_0::Sender' has a wrong offset!");
static_assert(offsetof(P021HUD_C_CustomEvent_0, Param) == 0x000008, "Member 'P021HUD_C_CustomEvent_0::Param' has a wrong offset!");

// Function P021HUD.P021HUD_C.PlayAnim
// 0x0020 (0x0020 - 0x0000)
struct P021HUD_C_PlayAnim final
{
public:
	const class UWidgetAnimation*                 InAnimation;                                       // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumLoopsToPlay;                                    // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          PlayMode;                                          // 0x000C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72AC[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(P021HUD_C_PlayAnim) == 0x000008, "Wrong alignment on P021HUD_C_PlayAnim");
static_assert(sizeof(P021HUD_C_PlayAnim) == 0x000020, "Wrong size on P021HUD_C_PlayAnim");
static_assert(offsetof(P021HUD_C_PlayAnim, InAnimation) == 0x000000, "Member 'P021HUD_C_PlayAnim::InAnimation' has a wrong offset!");
static_assert(offsetof(P021HUD_C_PlayAnim, NumLoopsToPlay) == 0x000008, "Member 'P021HUD_C_PlayAnim::NumLoopsToPlay' has a wrong offset!");
static_assert(offsetof(P021HUD_C_PlayAnim, PlayMode) == 0x00000C, "Member 'P021HUD_C_PlayAnim::PlayMode' has a wrong offset!");
static_assert(offsetof(P021HUD_C_PlayAnim, CallFunc_IsAnimationPlaying_ReturnValue) == 0x00000D, "Member 'P021HUD_C_PlayAnim::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(P021HUD_C_PlayAnim, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'P021HUD_C_PlayAnim::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(P021HUD_C_PlayAnim, CallFunc_Not_PreBool_ReturnValue) == 0x000018, "Member 'P021HUD_C_PlayAnim::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function P021HUD.P021HUD_C.StopAnim
// 0x0010 (0x0010 - 0x0000)
struct P021HUD_C_StopAnim final
{
public:
	const class UWidgetAnimation*                 InAnimation;                                       // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(P021HUD_C_StopAnim) == 0x000008, "Wrong alignment on P021HUD_C_StopAnim");
static_assert(sizeof(P021HUD_C_StopAnim) == 0x000010, "Wrong size on P021HUD_C_StopAnim");
static_assert(offsetof(P021HUD_C_StopAnim, InAnimation) == 0x000000, "Member 'P021HUD_C_StopAnim::InAnimation' has a wrong offset!");
static_assert(offsetof(P021HUD_C_StopAnim, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000008, "Member 'P021HUD_C_StopAnim::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

// Function P021HUD.P021HUD_C.PlayAnimForwardInOut
// 0x0008 (0x0008 - 0x0000)
struct P021HUD_C_PlayAnimForwardInOut final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P021HUD_C_PlayAnimForwardInOut) == 0x000008, "Wrong alignment on P021HUD_C_PlayAnimForwardInOut");
static_assert(sizeof(P021HUD_C_PlayAnimForwardInOut) == 0x000008, "Wrong size on P021HUD_C_PlayAnimForwardInOut");
static_assert(offsetof(P021HUD_C_PlayAnimForwardInOut, CallFunc_PlayAnimationForward_ReturnValue) == 0x000000, "Member 'P021HUD_C_PlayAnimForwardInOut::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function P021HUD.P021HUD_C.PlayAnimReverseInOut
// 0x0008 (0x0008 - 0x0000)
struct P021HUD_C_PlayAnimReverseInOut final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P021HUD_C_PlayAnimReverseInOut) == 0x000008, "Wrong alignment on P021HUD_C_PlayAnimReverseInOut");
static_assert(sizeof(P021HUD_C_PlayAnimReverseInOut) == 0x000008, "Wrong size on P021HUD_C_PlayAnimReverseInOut");
static_assert(offsetof(P021HUD_C_PlayAnimReverseInOut, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000000, "Member 'P021HUD_C_PlayAnimReverseInOut::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");

// Function P021HUD.P021HUD_C.PlayAnimBG
// 0x0008 (0x0008 - 0x0000)
struct P021HUD_C_PlayAnimBG final
{
public:
	int32                                         InBGIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(P021HUD_C_PlayAnimBG) == 0x000004, "Wrong alignment on P021HUD_C_PlayAnimBG");
static_assert(sizeof(P021HUD_C_PlayAnimBG) == 0x000008, "Wrong size on P021HUD_C_PlayAnimBG");
static_assert(offsetof(P021HUD_C_PlayAnimBG, InBGIndex) == 0x000000, "Member 'P021HUD_C_PlayAnimBG::InBGIndex' has a wrong offset!");
static_assert(offsetof(P021HUD_C_PlayAnimBG, K2Node_SwitchInteger_CmpSuccess) == 0x000004, "Member 'P021HUD_C_PlayAnimBG::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

// Function P021HUD.P021HUD_C.PlayAnimForwardNoise
// 0x0010 (0x0010 - 0x0000)
struct P021HUD_C_PlayAnimForwardNoise final
{
public:
	class UP021_Noise_C*                          K2Node_DynamicCast_AsP021_Noise;                   // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(P021HUD_C_PlayAnimForwardNoise) == 0x000008, "Wrong alignment on P021HUD_C_PlayAnimForwardNoise");
static_assert(sizeof(P021HUD_C_PlayAnimForwardNoise) == 0x000010, "Wrong size on P021HUD_C_PlayAnimForwardNoise");
static_assert(offsetof(P021HUD_C_PlayAnimForwardNoise, K2Node_DynamicCast_AsP021_Noise) == 0x000000, "Member 'P021HUD_C_PlayAnimForwardNoise::K2Node_DynamicCast_AsP021_Noise' has a wrong offset!");
static_assert(offsetof(P021HUD_C_PlayAnimForwardNoise, K2Node_DynamicCast_bSuccess) == 0x000008, "Member 'P021HUD_C_PlayAnimForwardNoise::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function P021HUD.P021HUD_C.PlayAnimReverseNoise
// 0x0010 (0x0010 - 0x0000)
struct P021HUD_C_PlayAnimReverseNoise final
{
public:
	class UP021_Noise_C*                          K2Node_DynamicCast_AsP021_Noise;                   // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(P021HUD_C_PlayAnimReverseNoise) == 0x000008, "Wrong alignment on P021HUD_C_PlayAnimReverseNoise");
static_assert(sizeof(P021HUD_C_PlayAnimReverseNoise) == 0x000010, "Wrong size on P021HUD_C_PlayAnimReverseNoise");
static_assert(offsetof(P021HUD_C_PlayAnimReverseNoise, K2Node_DynamicCast_AsP021_Noise) == 0x000000, "Member 'P021HUD_C_PlayAnimReverseNoise::K2Node_DynamicCast_AsP021_Noise' has a wrong offset!");
static_assert(offsetof(P021HUD_C_PlayAnimReverseNoise, K2Node_DynamicCast_bSuccess) == 0x000008, "Member 'P021HUD_C_PlayAnimReverseNoise::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

