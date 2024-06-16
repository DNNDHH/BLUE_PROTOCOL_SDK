#pragma once

 

// Package: P006HUD

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function P006HUD.P006HUD_C.ExecuteUbergraph_P006HUD
// 0x0038 (0x0038 - 0x0000)
struct P006HUD_C_ExecuteUbergraph_P006HUD final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBUIType                                     K2Node_CustomEvent_InUIType;                       // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInVisibility;                  // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bInInstantly;                   // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_40D8[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)> K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40D9[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue_1;       // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(P006HUD_C_ExecuteUbergraph_P006HUD) == 0x000008, "Wrong alignment on P006HUD_C_ExecuteUbergraph_P006HUD");
static_assert(sizeof(P006HUD_C_ExecuteUbergraph_P006HUD) == 0x000038, "Wrong size on P006HUD_C_ExecuteUbergraph_P006HUD");
static_assert(offsetof(P006HUD_C_ExecuteUbergraph_P006HUD, EntryPoint) == 0x000000, "Member 'P006HUD_C_ExecuteUbergraph_P006HUD::EntryPoint' has a wrong offset!");
static_assert(offsetof(P006HUD_C_ExecuteUbergraph_P006HUD, CallFunc_MakeLiteralByte_ReturnValue) == 0x000004, "Member 'P006HUD_C_ExecuteUbergraph_P006HUD::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(P006HUD_C_ExecuteUbergraph_P006HUD, Temp_bool_Variable) == 0x000005, "Member 'P006HUD_C_ExecuteUbergraph_P006HUD::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(P006HUD_C_ExecuteUbergraph_P006HUD, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000006, "Member 'P006HUD_C_ExecuteUbergraph_P006HUD::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P006HUD_C_ExecuteUbergraph_P006HUD, K2Node_CustomEvent_InUIType) == 0x000007, "Member 'P006HUD_C_ExecuteUbergraph_P006HUD::K2Node_CustomEvent_InUIType' has a wrong offset!");
static_assert(offsetof(P006HUD_C_ExecuteUbergraph_P006HUD, K2Node_CustomEvent_bInVisibility) == 0x000008, "Member 'P006HUD_C_ExecuteUbergraph_P006HUD::K2Node_CustomEvent_bInVisibility' has a wrong offset!");
static_assert(offsetof(P006HUD_C_ExecuteUbergraph_P006HUD, K2Node_CustomEvent_bInInstantly) == 0x000009, "Member 'P006HUD_C_ExecuteUbergraph_P006HUD::K2Node_CustomEvent_bInInstantly' has a wrong offset!");
static_assert(offsetof(P006HUD_C_ExecuteUbergraph_P006HUD, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'P006HUD_C_ExecuteUbergraph_P006HUD::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(P006HUD_C_ExecuteUbergraph_P006HUD, K2Node_Select_Default) == 0x00001C, "Member 'P006HUD_C_ExecuteUbergraph_P006HUD::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(P006HUD_C_ExecuteUbergraph_P006HUD, CallFunc_GetUIVisibleSettings_ReturnValue) == 0x000020, "Member 'P006HUD_C_ExecuteUbergraph_P006HUD::CallFunc_GetUIVisibleSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(P006HUD_C_ExecuteUbergraph_P006HUD, CallFunc_GetUIVisibleSettings_ReturnValue_1) == 0x000028, "Member 'P006HUD_C_ExecuteUbergraph_P006HUD::CallFunc_GetUIVisibleSettings_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P006HUD_C_ExecuteUbergraph_P006HUD, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'P006HUD_C_ExecuteUbergraph_P006HUD::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(P006HUD_C_ExecuteUbergraph_P006HUD, CallFunc_IsValid_ReturnValue_1) == 0x000031, "Member 'P006HUD_C_ExecuteUbergraph_P006HUD::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function P006HUD.P006HUD_C.OnChangeUIVisibleSetting
// 0x0003 (0x0003 - 0x0000)
struct P006HUD_C_OnChangeUIVisibleSetting final
{
public:
	ESBUIType                                     InUIType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInVisibility;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInInstantly;                                      // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(P006HUD_C_OnChangeUIVisibleSetting) == 0x000001, "Wrong alignment on P006HUD_C_OnChangeUIVisibleSetting");
static_assert(sizeof(P006HUD_C_OnChangeUIVisibleSetting) == 0x000003, "Wrong size on P006HUD_C_OnChangeUIVisibleSetting");
static_assert(offsetof(P006HUD_C_OnChangeUIVisibleSetting, InUIType) == 0x000000, "Member 'P006HUD_C_OnChangeUIVisibleSetting::InUIType' has a wrong offset!");
static_assert(offsetof(P006HUD_C_OnChangeUIVisibleSetting, bInVisibility) == 0x000001, "Member 'P006HUD_C_OnChangeUIVisibleSetting::bInVisibility' has a wrong offset!");
static_assert(offsetof(P006HUD_C_OnChangeUIVisibleSetting, bInInstantly) == 0x000002, "Member 'P006HUD_C_OnChangeUIVisibleSetting::bInInstantly' has a wrong offset!");

// Function P006HUD.P006HUD_C.OnUpdateGauge
// 0x0060 (0x0060 - 0x0000)
struct P006HUD_C_OnUpdateGauge final
{
public:
	struct FVector2D                              NewSize;                                           // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_40DA[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerSkillActionComponent*          CallFunc_GetSkillActionComponent_ReturnValue;      // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_40DB[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetRegularBuffArrowGaugeAmount_ReturnValue; // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRegularBuffArrowMaxGaugeAmount_ReturnValue; // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRegularBuffArrowChargeLevel_ReturnValue; // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40DC[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0038(0x0018)()
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0054(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanBattleCurrentMapLevel_ReturnValue;     // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(P006HUD_C_OnUpdateGauge) == 0x000008, "Wrong alignment on P006HUD_C_OnUpdateGauge");
static_assert(sizeof(P006HUD_C_OnUpdateGauge) == 0x000060, "Wrong size on P006HUD_C_OnUpdateGauge");
static_assert(offsetof(P006HUD_C_OnUpdateGauge, NewSize) == 0x000000, "Member 'P006HUD_C_OnUpdateGauge::NewSize' has a wrong offset!");
static_assert(offsetof(P006HUD_C_OnUpdateGauge, CallFunc_BreakVector2D_X) == 0x000008, "Member 'P006HUD_C_OnUpdateGauge::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(P006HUD_C_OnUpdateGauge, CallFunc_BreakVector2D_Y) == 0x00000C, "Member 'P006HUD_C_OnUpdateGauge::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(P006HUD_C_OnUpdateGauge, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'P006HUD_C_OnUpdateGauge::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(P006HUD_C_OnUpdateGauge, CallFunc_GetSkillActionComponent_ReturnValue) == 0x000018, "Member 'P006HUD_C_OnUpdateGauge::CallFunc_GetSkillActionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(P006HUD_C_OnUpdateGauge, CallFunc_IsValid_ReturnValue_1) == 0x000020, "Member 'P006HUD_C_OnUpdateGauge::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P006HUD_C_OnUpdateGauge, CallFunc_GetRegularBuffArrowGaugeAmount_ReturnValue) == 0x000024, "Member 'P006HUD_C_OnUpdateGauge::CallFunc_GetRegularBuffArrowGaugeAmount_ReturnValue' has a wrong offset!");
static_assert(offsetof(P006HUD_C_OnUpdateGauge, CallFunc_GetRegularBuffArrowMaxGaugeAmount_ReturnValue) == 0x000028, "Member 'P006HUD_C_OnUpdateGauge::CallFunc_GetRegularBuffArrowMaxGaugeAmount_ReturnValue' has a wrong offset!");
static_assert(offsetof(P006HUD_C_OnUpdateGauge, CallFunc_GetRegularBuffArrowChargeLevel_ReturnValue) == 0x00002C, "Member 'P006HUD_C_OnUpdateGauge::CallFunc_GetRegularBuffArrowChargeLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(P006HUD_C_OnUpdateGauge, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000030, "Member 'P006HUD_C_OnUpdateGauge::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(P006HUD_C_OnUpdateGauge, CallFunc_Conv_IntToText_ReturnValue) == 0x000038, "Member 'P006HUD_C_OnUpdateGauge::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(P006HUD_C_OnUpdateGauge, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000050, "Member 'P006HUD_C_OnUpdateGauge::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(P006HUD_C_OnUpdateGauge, CallFunc_MakeVector2D_ReturnValue) == 0x000054, "Member 'P006HUD_C_OnUpdateGauge::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(P006HUD_C_OnUpdateGauge, CallFunc_CanBattleCurrentMapLevel_ReturnValue) == 0x00005C, "Member 'P006HUD_C_OnUpdateGauge::CallFunc_CanBattleCurrentMapLevel_ReturnValue' has a wrong offset!");

// Function P006HUD.P006HUD_C.PlayAnimForwardInOut
// 0x0008 (0x0008 - 0x0000)
struct P006HUD_C_PlayAnimForwardInOut final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P006HUD_C_PlayAnimForwardInOut) == 0x000008, "Wrong alignment on P006HUD_C_PlayAnimForwardInOut");
static_assert(sizeof(P006HUD_C_PlayAnimForwardInOut) == 0x000008, "Wrong size on P006HUD_C_PlayAnimForwardInOut");
static_assert(offsetof(P006HUD_C_PlayAnimForwardInOut, CallFunc_PlayAnimationForward_ReturnValue) == 0x000000, "Member 'P006HUD_C_PlayAnimForwardInOut::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function P006HUD.P006HUD_C.PlayAnimReverseInOut
// 0x0008 (0x0008 - 0x0000)
struct P006HUD_C_PlayAnimReverseInOut final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P006HUD_C_PlayAnimReverseInOut) == 0x000008, "Wrong alignment on P006HUD_C_PlayAnimReverseInOut");
static_assert(sizeof(P006HUD_C_PlayAnimReverseInOut) == 0x000008, "Wrong size on P006HUD_C_PlayAnimReverseInOut");
static_assert(offsetof(P006HUD_C_PlayAnimReverseInOut, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000000, "Member 'P006HUD_C_PlayAnimReverseInOut::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");

// Function P006HUD.P006HUD_C.OnInitialize
// 0x0010 (0x0010 - 0x0000)
struct P006HUD_C_OnInitialize final
{
public:
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P006HUD_C_OnInitialize) == 0x000008, "Wrong alignment on P006HUD_C_OnInitialize");
static_assert(sizeof(P006HUD_C_OnInitialize) == 0x000010, "Wrong size on P006HUD_C_OnInitialize");
static_assert(offsetof(P006HUD_C_OnInitialize, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000000, "Member 'P006HUD_C_OnInitialize::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(P006HUD_C_OnInitialize, CallFunc_GetSize_ReturnValue) == 0x000008, "Member 'P006HUD_C_OnInitialize::CallFunc_GetSize_ReturnValue' has a wrong offset!");

// Function P006HUD.P006HUD_C.OnTick
// 0x0020 (0x0020 - 0x0000)
struct P006HUD_C_OnTick final
{
public:
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_40DD[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(P006HUD_C_OnTick) == 0x000008, "Wrong alignment on P006HUD_C_OnTick");
static_assert(sizeof(P006HUD_C_OnTick) == 0x000020, "Wrong size on P006HUD_C_OnTick");
static_assert(offsetof(P006HUD_C_OnTick, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000000, "Member 'P006HUD_C_OnTick::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(P006HUD_C_OnTick, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'P006HUD_C_OnTick::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(P006HUD_C_OnTick, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000010, "Member 'P006HUD_C_OnTick::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(P006HUD_C_OnTick, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'P006HUD_C_OnTick::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(P006HUD_C_OnTick, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000019, "Member 'P006HUD_C_OnTick::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function P006HUD.P006HUD_C.OnSetEditMode
// 0x0010 (0x0010 - 0x0000)
struct P006HUD_C_OnSetEditMode final
{
public:
	bool                                          InIsEdit;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_40DE[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P006HUD_C_OnSetEditMode) == 0x000004, "Wrong alignment on P006HUD_C_OnSetEditMode");
static_assert(sizeof(P006HUD_C_OnSetEditMode) == 0x000010, "Wrong size on P006HUD_C_OnSetEditMode");
static_assert(offsetof(P006HUD_C_OnSetEditMode, InIsEdit) == 0x000000, "Member 'P006HUD_C_OnSetEditMode::InIsEdit' has a wrong offset!");
static_assert(offsetof(P006HUD_C_OnSetEditMode, Temp_bool_Variable) == 0x000001, "Member 'P006HUD_C_OnSetEditMode::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(P006HUD_C_OnSetEditMode, Temp_int_Variable) == 0x000004, "Member 'P006HUD_C_OnSetEditMode::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(P006HUD_C_OnSetEditMode, Temp_int_Variable_1) == 0x000008, "Member 'P006HUD_C_OnSetEditMode::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(P006HUD_C_OnSetEditMode, K2Node_Select_Default) == 0x00000C, "Member 'P006HUD_C_OnSetEditMode::K2Node_Select_Default' has a wrong offset!");

}

