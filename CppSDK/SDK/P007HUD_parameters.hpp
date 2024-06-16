#pragma once

 

// Package: P007HUD

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function P007HUD.P007HUD_C.ExecuteUbergraph_P007HUD
// 0x0040 (0x0040 - 0x0000)
struct P007HUD_C_ExecuteUbergraph_P007HUD final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7312[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7313[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBUIType                                     K2Node_CustomEvent_InUIType;                       // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInVisibility;                  // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bInInstantly;                   // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7314[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue_1;       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P007HUD_C_ExecuteUbergraph_P007HUD) == 0x000008, "Wrong alignment on P007HUD_C_ExecuteUbergraph_P007HUD");
static_assert(sizeof(P007HUD_C_ExecuteUbergraph_P007HUD) == 0x000040, "Wrong size on P007HUD_C_ExecuteUbergraph_P007HUD");
static_assert(offsetof(P007HUD_C_ExecuteUbergraph_P007HUD, EntryPoint) == 0x000000, "Member 'P007HUD_C_ExecuteUbergraph_P007HUD::EntryPoint' has a wrong offset!");
static_assert(offsetof(P007HUD_C_ExecuteUbergraph_P007HUD, CallFunc_MakeLiteralByte_ReturnValue) == 0x000004, "Member 'P007HUD_C_ExecuteUbergraph_P007HUD::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(P007HUD_C_ExecuteUbergraph_P007HUD, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'P007HUD_C_ExecuteUbergraph_P007HUD::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(P007HUD_C_ExecuteUbergraph_P007HUD, Temp_bool_Variable) == 0x000018, "Member 'P007HUD_C_ExecuteUbergraph_P007HUD::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(P007HUD_C_ExecuteUbergraph_P007HUD, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000019, "Member 'P007HUD_C_ExecuteUbergraph_P007HUD::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P007HUD_C_ExecuteUbergraph_P007HUD, CallFunc_GetUIVisibleSettings_ReturnValue) == 0x000020, "Member 'P007HUD_C_ExecuteUbergraph_P007HUD::CallFunc_GetUIVisibleSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(P007HUD_C_ExecuteUbergraph_P007HUD, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'P007HUD_C_ExecuteUbergraph_P007HUD::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(P007HUD_C_ExecuteUbergraph_P007HUD, K2Node_CustomEvent_InUIType) == 0x000029, "Member 'P007HUD_C_ExecuteUbergraph_P007HUD::K2Node_CustomEvent_InUIType' has a wrong offset!");
static_assert(offsetof(P007HUD_C_ExecuteUbergraph_P007HUD, K2Node_CustomEvent_bInVisibility) == 0x00002A, "Member 'P007HUD_C_ExecuteUbergraph_P007HUD::K2Node_CustomEvent_bInVisibility' has a wrong offset!");
static_assert(offsetof(P007HUD_C_ExecuteUbergraph_P007HUD, K2Node_CustomEvent_bInInstantly) == 0x00002B, "Member 'P007HUD_C_ExecuteUbergraph_P007HUD::K2Node_CustomEvent_bInInstantly' has a wrong offset!");
static_assert(offsetof(P007HUD_C_ExecuteUbergraph_P007HUD, CallFunc_GetUIVisibleSettings_ReturnValue_1) == 0x000030, "Member 'P007HUD_C_ExecuteUbergraph_P007HUD::CallFunc_GetUIVisibleSettings_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P007HUD_C_ExecuteUbergraph_P007HUD, CallFunc_IsValid_ReturnValue_1) == 0x000038, "Member 'P007HUD_C_ExecuteUbergraph_P007HUD::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P007HUD_C_ExecuteUbergraph_P007HUD, K2Node_Select_Default) == 0x000039, "Member 'P007HUD_C_ExecuteUbergraph_P007HUD::K2Node_Select_Default' has a wrong offset!");

// Function P007HUD.P007HUD_C.OnChangeUIVisibleSetting
// 0x0003 (0x0003 - 0x0000)
struct P007HUD_C_OnChangeUIVisibleSetting final
{
public:
	ESBUIType                                     InUIType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInVisibility;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInInstantly;                                      // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(P007HUD_C_OnChangeUIVisibleSetting) == 0x000001, "Wrong alignment on P007HUD_C_OnChangeUIVisibleSetting");
static_assert(sizeof(P007HUD_C_OnChangeUIVisibleSetting) == 0x000003, "Wrong size on P007HUD_C_OnChangeUIVisibleSetting");
static_assert(offsetof(P007HUD_C_OnChangeUIVisibleSetting, InUIType) == 0x000000, "Member 'P007HUD_C_OnChangeUIVisibleSetting::InUIType' has a wrong offset!");
static_assert(offsetof(P007HUD_C_OnChangeUIVisibleSetting, bInVisibility) == 0x000001, "Member 'P007HUD_C_OnChangeUIVisibleSetting::bInVisibility' has a wrong offset!");
static_assert(offsetof(P007HUD_C_OnChangeUIVisibleSetting, bInInstantly) == 0x000002, "Member 'P007HUD_C_OnChangeUIVisibleSetting::bInInstantly' has a wrong offset!");

// Function P007HUD.P007HUD_C.OnUpdateGauge
// 0x00E0 (0x00E0 - 0x0000)
struct P007HUD_C_OnUpdateGauge final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue_1;         // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue_2;         // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7315[0x5];                                     // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue_3;         // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ValidClassAbility7_ReturnValue;           // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7316[0x2];                                     // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x001C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x002C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7317[0x1];                                     // 0x003F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector2D_X;                          // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanBattleCurrentMapLevel_ReturnValue;     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7318[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPCBerserkerComponent*                K2Node_DynamicCast_AsSBPCBerserker_Component;      // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7319[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerSkillActionComponent*          CallFunc_GetSkillActionComponent_ReturnValue;      // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetComboGaugeRate_ReturnValue;            // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue_1;         // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue_2;         // 0x006E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x006F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0078(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0090(0x0028)()
	float                                         CallFunc_GetComboDamageUpRate_ReturnValue;         // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_731A[0x4];                                     // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x00C8(0x0018)()
};
static_assert(alignof(P007HUD_C_OnUpdateGauge) == 0x000008, "Wrong alignment on P007HUD_C_OnUpdateGauge");
static_assert(sizeof(P007HUD_C_OnUpdateGauge) == 0x0000E0, "Wrong size on P007HUD_C_OnUpdateGauge");
static_assert(offsetof(P007HUD_C_OnUpdateGauge, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'P007HUD_C_OnUpdateGauge::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(P007HUD_C_OnUpdateGauge, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000008, "Member 'P007HUD_C_OnUpdateGauge::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(P007HUD_C_OnUpdateGauge, CallFunc_IsAnimationPlaying_ReturnValue_1) == 0x000009, "Member 'P007HUD_C_OnUpdateGauge::CallFunc_IsAnimationPlaying_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P007HUD_C_OnUpdateGauge, CallFunc_IsAnimationPlaying_ReturnValue_2) == 0x00000A, "Member 'P007HUD_C_OnUpdateGauge::CallFunc_IsAnimationPlaying_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(P007HUD_C_OnUpdateGauge, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'P007HUD_C_OnUpdateGauge::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P007HUD_C_OnUpdateGauge, CallFunc_IsAnimationPlaying_ReturnValue_3) == 0x000018, "Member 'P007HUD_C_OnUpdateGauge::CallFunc_IsAnimationPlaying_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(P007HUD_C_OnUpdateGauge, CallFunc_ValidClassAbility7_ReturnValue) == 0x000019, "Member 'P007HUD_C_OnUpdateGauge::CallFunc_ValidClassAbility7_ReturnValue' has a wrong offset!");
static_assert(offsetof(P007HUD_C_OnUpdateGauge, Temp_struct_Variable) == 0x00001C, "Member 'P007HUD_C_OnUpdateGauge::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(P007HUD_C_OnUpdateGauge, Temp_struct_Variable_1) == 0x00002C, "Member 'P007HUD_C_OnUpdateGauge::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(P007HUD_C_OnUpdateGauge, CallFunc_Not_PreBool_ReturnValue) == 0x00003C, "Member 'P007HUD_C_OnUpdateGauge::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(P007HUD_C_OnUpdateGauge, Temp_bool_Variable) == 0x00003D, "Member 'P007HUD_C_OnUpdateGauge::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(P007HUD_C_OnUpdateGauge, CallFunc_Greater_FloatFloat_ReturnValue) == 0x00003E, "Member 'P007HUD_C_OnUpdateGauge::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(P007HUD_C_OnUpdateGauge, CallFunc_BreakVector2D_X) == 0x000040, "Member 'P007HUD_C_OnUpdateGauge::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(P007HUD_C_OnUpdateGauge, CallFunc_BreakVector2D_Y) == 0x000044, "Member 'P007HUD_C_OnUpdateGauge::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(P007HUD_C_OnUpdateGauge, CallFunc_CanBattleCurrentMapLevel_ReturnValue) == 0x000048, "Member 'P007HUD_C_OnUpdateGauge::CallFunc_CanBattleCurrentMapLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(P007HUD_C_OnUpdateGauge, K2Node_DynamicCast_AsSBPCBerserker_Component) == 0x000050, "Member 'P007HUD_C_OnUpdateGauge::K2Node_DynamicCast_AsSBPCBerserker_Component' has a wrong offset!");
static_assert(offsetof(P007HUD_C_OnUpdateGauge, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'P007HUD_C_OnUpdateGauge::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(P007HUD_C_OnUpdateGauge, CallFunc_GetSkillActionComponent_ReturnValue) == 0x000060, "Member 'P007HUD_C_OnUpdateGauge::CallFunc_GetSkillActionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(P007HUD_C_OnUpdateGauge, CallFunc_GetComboGaugeRate_ReturnValue) == 0x000068, "Member 'P007HUD_C_OnUpdateGauge::CallFunc_GetComboGaugeRate_ReturnValue' has a wrong offset!");
static_assert(offsetof(P007HUD_C_OnUpdateGauge, CallFunc_IsValid_ReturnValue) == 0x00006C, "Member 'P007HUD_C_OnUpdateGauge::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(P007HUD_C_OnUpdateGauge, CallFunc_Greater_FloatFloat_ReturnValue_1) == 0x00006D, "Member 'P007HUD_C_OnUpdateGauge::CallFunc_Greater_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(P007HUD_C_OnUpdateGauge, CallFunc_Greater_FloatFloat_ReturnValue_2) == 0x00006E, "Member 'P007HUD_C_OnUpdateGauge::CallFunc_Greater_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(P007HUD_C_OnUpdateGauge, CallFunc_EqualEqual_FloatFloat_ReturnValue) == 0x00006F, "Member 'P007HUD_C_OnUpdateGauge::CallFunc_EqualEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(P007HUD_C_OnUpdateGauge, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000070, "Member 'P007HUD_C_OnUpdateGauge::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(P007HUD_C_OnUpdateGauge, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000074, "Member 'P007HUD_C_OnUpdateGauge::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(P007HUD_C_OnUpdateGauge, K2Node_Select_Default) == 0x000078, "Member 'P007HUD_C_OnUpdateGauge::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(P007HUD_C_OnUpdateGauge, CallFunc_MakeVector2D_ReturnValue) == 0x000088, "Member 'P007HUD_C_OnUpdateGauge::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(P007HUD_C_OnUpdateGauge, K2Node_MakeStruct_SlateColor) == 0x000090, "Member 'P007HUD_C_OnUpdateGauge::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(P007HUD_C_OnUpdateGauge, CallFunc_GetComboDamageUpRate_ReturnValue) == 0x0000B8, "Member 'P007HUD_C_OnUpdateGauge::CallFunc_GetComboDamageUpRate_ReturnValue' has a wrong offset!");
static_assert(offsetof(P007HUD_C_OnUpdateGauge, CallFunc_Add_FloatFloat_ReturnValue) == 0x0000BC, "Member 'P007HUD_C_OnUpdateGauge::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(P007HUD_C_OnUpdateGauge, CallFunc_FTrunc_ReturnValue) == 0x0000C0, "Member 'P007HUD_C_OnUpdateGauge::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(P007HUD_C_OnUpdateGauge, CallFunc_Conv_IntToText_ReturnValue) == 0x0000C8, "Member 'P007HUD_C_OnUpdateGauge::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function P007HUD.P007HUD_C.OnInitialize
// 0x0010 (0x0010 - 0x0000)
struct P007HUD_C_OnInitialize final
{
public:
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetSize_ReturnValue;                      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P007HUD_C_OnInitialize) == 0x000008, "Wrong alignment on P007HUD_C_OnInitialize");
static_assert(sizeof(P007HUD_C_OnInitialize) == 0x000010, "Wrong size on P007HUD_C_OnInitialize");
static_assert(offsetof(P007HUD_C_OnInitialize, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000000, "Member 'P007HUD_C_OnInitialize::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(P007HUD_C_OnInitialize, CallFunc_GetSize_ReturnValue) == 0x000008, "Member 'P007HUD_C_OnInitialize::CallFunc_GetSize_ReturnValue' has a wrong offset!");

// Function P007HUD.P007HUD_C.OnTick
// 0x0020 (0x0020 - 0x0000)
struct P007HUD_C_OnTick final
{
public:
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_731B[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(P007HUD_C_OnTick) == 0x000008, "Wrong alignment on P007HUD_C_OnTick");
static_assert(sizeof(P007HUD_C_OnTick) == 0x000020, "Wrong size on P007HUD_C_OnTick");
static_assert(offsetof(P007HUD_C_OnTick, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000000, "Member 'P007HUD_C_OnTick::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(P007HUD_C_OnTick, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'P007HUD_C_OnTick::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(P007HUD_C_OnTick, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000010, "Member 'P007HUD_C_OnTick::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(P007HUD_C_OnTick, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'P007HUD_C_OnTick::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(P007HUD_C_OnTick, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000019, "Member 'P007HUD_C_OnTick::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function P007HUD.P007HUD_C.OnSetEditMode
// 0x0010 (0x0010 - 0x0000)
struct P007HUD_C_OnSetEditMode final
{
public:
	bool                                          InIsEdit;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_731C[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P007HUD_C_OnSetEditMode) == 0x000004, "Wrong alignment on P007HUD_C_OnSetEditMode");
static_assert(sizeof(P007HUD_C_OnSetEditMode) == 0x000010, "Wrong size on P007HUD_C_OnSetEditMode");
static_assert(offsetof(P007HUD_C_OnSetEditMode, InIsEdit) == 0x000000, "Member 'P007HUD_C_OnSetEditMode::InIsEdit' has a wrong offset!");
static_assert(offsetof(P007HUD_C_OnSetEditMode, Temp_bool_Variable) == 0x000001, "Member 'P007HUD_C_OnSetEditMode::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(P007HUD_C_OnSetEditMode, Temp_int_Variable) == 0x000004, "Member 'P007HUD_C_OnSetEditMode::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(P007HUD_C_OnSetEditMode, Temp_int_Variable_1) == 0x000008, "Member 'P007HUD_C_OnSetEditMode::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(P007HUD_C_OnSetEditMode, K2Node_Select_Default) == 0x00000C, "Member 'P007HUD_C_OnSetEditMode::K2Node_Select_Default' has a wrong offset!");

// Function P007HUD.P007HUD_C.PlayAnimForwardInOut
// 0x0008 (0x0008 - 0x0000)
struct P007HUD_C_PlayAnimForwardInOut final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P007HUD_C_PlayAnimForwardInOut) == 0x000008, "Wrong alignment on P007HUD_C_PlayAnimForwardInOut");
static_assert(sizeof(P007HUD_C_PlayAnimForwardInOut) == 0x000008, "Wrong size on P007HUD_C_PlayAnimForwardInOut");
static_assert(offsetof(P007HUD_C_PlayAnimForwardInOut, CallFunc_PlayAnimationForward_ReturnValue) == 0x000000, "Member 'P007HUD_C_PlayAnimForwardInOut::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function P007HUD.P007HUD_C.PlayAnimReverseInOut
// 0x0008 (0x0008 - 0x0000)
struct P007HUD_C_PlayAnimReverseInOut final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(P007HUD_C_PlayAnimReverseInOut) == 0x000008, "Wrong alignment on P007HUD_C_PlayAnimReverseInOut");
static_assert(sizeof(P007HUD_C_PlayAnimReverseInOut) == 0x000008, "Wrong size on P007HUD_C_PlayAnimReverseInOut");
static_assert(offsetof(P007HUD_C_PlayAnimReverseInOut, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000000, "Member 'P007HUD_C_PlayAnimReverseInOut::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");

}

