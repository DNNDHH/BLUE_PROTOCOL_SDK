#pragma once

 

// Package: SkillInfoGaugeMainDefHeal

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.ExecuteUbergraph_SkillInfoGaugeMainDefHeal
// 0x0018 (0x0018 - 0x0000)
struct SkillInfoGaugeMainDefHeal_C_ExecuteUbergraph_SkillInfoGaugeMainDefHeal final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bVisible;                             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoGaugeMainDefHeal_C_ExecuteUbergraph_SkillInfoGaugeMainDefHeal) == 0x000008, "Wrong alignment on SkillInfoGaugeMainDefHeal_C_ExecuteUbergraph_SkillInfoGaugeMainDefHeal");
static_assert(sizeof(SkillInfoGaugeMainDefHeal_C_ExecuteUbergraph_SkillInfoGaugeMainDefHeal) == 0x000018, "Wrong size on SkillInfoGaugeMainDefHeal_C_ExecuteUbergraph_SkillInfoGaugeMainDefHeal");
static_assert(offsetof(SkillInfoGaugeMainDefHeal_C_ExecuteUbergraph_SkillInfoGaugeMainDefHeal, EntryPoint) == 0x000000, "Member 'SkillInfoGaugeMainDefHeal_C_ExecuteUbergraph_SkillInfoGaugeMainDefHeal::EntryPoint' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeMainDefHeal_C_ExecuteUbergraph_SkillInfoGaugeMainDefHeal, CallFunc_MakeLiteralByte_ReturnValue) == 0x000004, "Member 'SkillInfoGaugeMainDefHeal_C_ExecuteUbergraph_SkillInfoGaugeMainDefHeal::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeMainDefHeal_C_ExecuteUbergraph_SkillInfoGaugeMainDefHeal, Temp_bool_Variable) == 0x000005, "Member 'SkillInfoGaugeMainDefHeal_C_ExecuteUbergraph_SkillInfoGaugeMainDefHeal::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeMainDefHeal_C_ExecuteUbergraph_SkillInfoGaugeMainDefHeal, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000006, "Member 'SkillInfoGaugeMainDefHeal_C_ExecuteUbergraph_SkillInfoGaugeMainDefHeal::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeMainDefHeal_C_ExecuteUbergraph_SkillInfoGaugeMainDefHeal, K2Node_Event_IsDesignTime) == 0x000007, "Member 'SkillInfoGaugeMainDefHeal_C_ExecuteUbergraph_SkillInfoGaugeMainDefHeal::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeMainDefHeal_C_ExecuteUbergraph_SkillInfoGaugeMainDefHeal, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'SkillInfoGaugeMainDefHeal_C_ExecuteUbergraph_SkillInfoGaugeMainDefHeal::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeMainDefHeal_C_ExecuteUbergraph_SkillInfoGaugeMainDefHeal, K2Node_Event_bVisible) == 0x000010, "Member 'SkillInfoGaugeMainDefHeal_C_ExecuteUbergraph_SkillInfoGaugeMainDefHeal::K2Node_Event_bVisible' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeMainDefHeal_C_ExecuteUbergraph_SkillInfoGaugeMainDefHeal, K2Node_SwitchEnum_CmpSuccess) == 0x000011, "Member 'SkillInfoGaugeMainDefHeal_C_ExecuteUbergraph_SkillInfoGaugeMainDefHeal::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeMainDefHeal_C_ExecuteUbergraph_SkillInfoGaugeMainDefHeal, K2Node_Select_Default) == 0x000012, "Member 'SkillInfoGaugeMainDefHeal_C_ExecuteUbergraph_SkillInfoGaugeMainDefHeal::K2Node_Select_Default' has a wrong offset!");

// Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.OnIconDisableChange
// 0x0001 (0x0001 - 0x0000)
struct SkillInfoGaugeMainDefHeal_C_OnIconDisableChange final
{
public:
	bool                                          bVisible;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoGaugeMainDefHeal_C_OnIconDisableChange) == 0x000001, "Wrong alignment on SkillInfoGaugeMainDefHeal_C_OnIconDisableChange");
static_assert(sizeof(SkillInfoGaugeMainDefHeal_C_OnIconDisableChange) == 0x000001, "Wrong size on SkillInfoGaugeMainDefHeal_C_OnIconDisableChange");
static_assert(offsetof(SkillInfoGaugeMainDefHeal_C_OnIconDisableChange, bVisible) == 0x000000, "Member 'SkillInfoGaugeMainDefHeal_C_OnIconDisableChange::bVisible' has a wrong offset!");

// Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct SkillInfoGaugeMainDefHeal_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoGaugeMainDefHeal_C_PreConstruct) == 0x000001, "Wrong alignment on SkillInfoGaugeMainDefHeal_C_PreConstruct");
static_assert(sizeof(SkillInfoGaugeMainDefHeal_C_PreConstruct) == 0x000001, "Wrong size on SkillInfoGaugeMainDefHeal_C_PreConstruct");
static_assert(offsetof(SkillInfoGaugeMainDefHeal_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'SkillInfoGaugeMainDefHeal_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.SetGaugeValue
// 0x0030 (0x0030 - 0x0000)
struct SkillInfoGaugeMainDefHeal_C_SetGaugeValue final
{
public:
	float                                         InValue;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InRecastTime;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FCeil_ReturnValue;                        // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81E0[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoGaugeMainDefHeal_C_SetGaugeValue) == 0x000008, "Wrong alignment on SkillInfoGaugeMainDefHeal_C_SetGaugeValue");
static_assert(sizeof(SkillInfoGaugeMainDefHeal_C_SetGaugeValue) == 0x000030, "Wrong size on SkillInfoGaugeMainDefHeal_C_SetGaugeValue");
static_assert(offsetof(SkillInfoGaugeMainDefHeal_C_SetGaugeValue, InValue) == 0x000000, "Member 'SkillInfoGaugeMainDefHeal_C_SetGaugeValue::InValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeMainDefHeal_C_SetGaugeValue, InRecastTime) == 0x000004, "Member 'SkillInfoGaugeMainDefHeal_C_SetGaugeValue::InRecastTime' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeMainDefHeal_C_SetGaugeValue, CallFunc_FCeil_ReturnValue) == 0x000008, "Member 'SkillInfoGaugeMainDefHeal_C_SetGaugeValue::CallFunc_FCeil_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeMainDefHeal_C_SetGaugeValue, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'SkillInfoGaugeMainDefHeal_C_SetGaugeValue::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeMainDefHeal_C_SetGaugeValue, CallFunc_FClamp_ReturnValue) == 0x000028, "Member 'SkillInfoGaugeMainDefHeal_C_SetGaugeValue::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeMainDefHeal_C_SetGaugeValue, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x00002C, "Member 'SkillInfoGaugeMainDefHeal_C_SetGaugeValue::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeMainDefHeal_C_SetGaugeValue, CallFunc_Less_FloatFloat_ReturnValue) == 0x00002D, "Member 'SkillInfoGaugeMainDefHeal_C_SetGaugeValue::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeMainDefHeal_C_SetGaugeValue, CallFunc_BooleanAND_ReturnValue) == 0x00002E, "Member 'SkillInfoGaugeMainDefHeal_C_SetGaugeValue::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.SetText
// 0x0018 (0x0018 - 0x0000)
struct SkillInfoGaugeMainDefHeal_C_SetText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(SkillInfoGaugeMainDefHeal_C_SetText) == 0x000008, "Wrong alignment on SkillInfoGaugeMainDefHeal_C_SetText");
static_assert(sizeof(SkillInfoGaugeMainDefHeal_C_SetText) == 0x000018, "Wrong size on SkillInfoGaugeMainDefHeal_C_SetText");
static_assert(offsetof(SkillInfoGaugeMainDefHeal_C_SetText, InText) == 0x000000, "Member 'SkillInfoGaugeMainDefHeal_C_SetText::InText' has a wrong offset!");

// Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.PlayAnimUse
// 0x0010 (0x0010 - 0x0000)
struct SkillInfoGaugeMainDefHeal_C_PlayAnimUse final
{
public:
	bool                                          bInit;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81E1[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetEndTime_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoGaugeMainDefHeal_C_PlayAnimUse) == 0x000008, "Wrong alignment on SkillInfoGaugeMainDefHeal_C_PlayAnimUse");
static_assert(sizeof(SkillInfoGaugeMainDefHeal_C_PlayAnimUse) == 0x000010, "Wrong size on SkillInfoGaugeMainDefHeal_C_PlayAnimUse");
static_assert(offsetof(SkillInfoGaugeMainDefHeal_C_PlayAnimUse, bInit) == 0x000000, "Member 'SkillInfoGaugeMainDefHeal_C_PlayAnimUse::bInit' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeMainDefHeal_C_PlayAnimUse, CallFunc_GetEndTime_ReturnValue) == 0x000004, "Member 'SkillInfoGaugeMainDefHeal_C_PlayAnimUse::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeMainDefHeal_C_PlayAnimUse, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'SkillInfoGaugeMainDefHeal_C_PlayAnimUse::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.PlayAnimChargeEnd
// 0x0010 (0x0010 - 0x0000)
struct SkillInfoGaugeMainDefHeal_C_PlayAnimChargeEnd final
{
public:
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81E2[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoGaugeMainDefHeal_C_PlayAnimChargeEnd) == 0x000008, "Wrong alignment on SkillInfoGaugeMainDefHeal_C_PlayAnimChargeEnd");
static_assert(sizeof(SkillInfoGaugeMainDefHeal_C_PlayAnimChargeEnd) == 0x000010, "Wrong size on SkillInfoGaugeMainDefHeal_C_PlayAnimChargeEnd");
static_assert(offsetof(SkillInfoGaugeMainDefHeal_C_PlayAnimChargeEnd, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000000, "Member 'SkillInfoGaugeMainDefHeal_C_PlayAnimChargeEnd::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeMainDefHeal_C_PlayAnimChargeEnd, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'SkillInfoGaugeMainDefHeal_C_PlayAnimChargeEnd::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.SetEnabled
// 0x0001 (0x0001 - 0x0000)
struct SkillInfoGaugeMainDefHeal_C_SetEnabled final
{
public:
	bool                                          bEnabled;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoGaugeMainDefHeal_C_SetEnabled) == 0x000001, "Wrong alignment on SkillInfoGaugeMainDefHeal_C_SetEnabled");
static_assert(sizeof(SkillInfoGaugeMainDefHeal_C_SetEnabled) == 0x000001, "Wrong size on SkillInfoGaugeMainDefHeal_C_SetEnabled");
static_assert(offsetof(SkillInfoGaugeMainDefHeal_C_SetEnabled, bEnabled) == 0x000000, "Member 'SkillInfoGaugeMainDefHeal_C_SetEnabled::bEnabled' has a wrong offset!");

// Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.PlayAnimChargeStart
// 0x0010 (0x0010 - 0x0000)
struct SkillInfoGaugeMainDefHeal_C_PlayAnimChargeStart final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoGaugeMainDefHeal_C_PlayAnimChargeStart) == 0x000008, "Wrong alignment on SkillInfoGaugeMainDefHeal_C_PlayAnimChargeStart");
static_assert(sizeof(SkillInfoGaugeMainDefHeal_C_PlayAnimChargeStart) == 0x000010, "Wrong size on SkillInfoGaugeMainDefHeal_C_PlayAnimChargeStart");
static_assert(offsetof(SkillInfoGaugeMainDefHeal_C_PlayAnimChargeStart, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'SkillInfoGaugeMainDefHeal_C_PlayAnimChargeStart::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeMainDefHeal_C_PlayAnimChargeStart, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000008, "Member 'SkillInfoGaugeMainDefHeal_C_PlayAnimChargeStart::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

// Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.SetKeyGuideVisible
// 0x0030 (0x0030 - 0x0000)
struct SkillInfoGaugeMainDefHeal_C_SetKeyGuideVisible final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81E3[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                   CallFunc_GetHUD_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_BattleHUD_C>      K2Node_DynamicCast_AsBPI_Battle_HUD;               // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoGaugeMainDefHeal_C_SetKeyGuideVisible) == 0x000008, "Wrong alignment on SkillInfoGaugeMainDefHeal_C_SetKeyGuideVisible");
static_assert(sizeof(SkillInfoGaugeMainDefHeal_C_SetKeyGuideVisible) == 0x000030, "Wrong size on SkillInfoGaugeMainDefHeal_C_SetKeyGuideVisible");
static_assert(offsetof(SkillInfoGaugeMainDefHeal_C_SetKeyGuideVisible, Param_IsVisible) == 0x000000, "Member 'SkillInfoGaugeMainDefHeal_C_SetKeyGuideVisible::Param_IsVisible' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeMainDefHeal_C_SetKeyGuideVisible, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'SkillInfoGaugeMainDefHeal_C_SetKeyGuideVisible::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeMainDefHeal_C_SetKeyGuideVisible, CallFunc_GetHUD_ReturnValue) == 0x000010, "Member 'SkillInfoGaugeMainDefHeal_C_SetKeyGuideVisible::CallFunc_GetHUD_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeMainDefHeal_C_SetKeyGuideVisible, K2Node_DynamicCast_AsBPI_Battle_HUD) == 0x000018, "Member 'SkillInfoGaugeMainDefHeal_C_SetKeyGuideVisible::K2Node_DynamicCast_AsBPI_Battle_HUD' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeMainDefHeal_C_SetKeyGuideVisible, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'SkillInfoGaugeMainDefHeal_C_SetKeyGuideVisible::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.SetIsEmpty
// 0x0014 (0x0014 - 0x0000)
struct SkillInfoGaugeMainDefHeal_C_SetIsEmpty final
{
public:
	bool                                          InIsEmpty;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81E4[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81E5[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoGaugeMainDefHeal_C_SetIsEmpty) == 0x000004, "Wrong alignment on SkillInfoGaugeMainDefHeal_C_SetIsEmpty");
static_assert(sizeof(SkillInfoGaugeMainDefHeal_C_SetIsEmpty) == 0x000014, "Wrong size on SkillInfoGaugeMainDefHeal_C_SetIsEmpty");
static_assert(offsetof(SkillInfoGaugeMainDefHeal_C_SetIsEmpty, InIsEmpty) == 0x000000, "Member 'SkillInfoGaugeMainDefHeal_C_SetIsEmpty::InIsEmpty' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeMainDefHeal_C_SetIsEmpty, Temp_int_Variable) == 0x000004, "Member 'SkillInfoGaugeMainDefHeal_C_SetIsEmpty::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeMainDefHeal_C_SetIsEmpty, Temp_int_Variable_1) == 0x000008, "Member 'SkillInfoGaugeMainDefHeal_C_SetIsEmpty::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeMainDefHeal_C_SetIsEmpty, Temp_bool_Variable) == 0x00000C, "Member 'SkillInfoGaugeMainDefHeal_C_SetIsEmpty::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeMainDefHeal_C_SetIsEmpty, CallFunc_IsValid_ReturnValue) == 0x00000D, "Member 'SkillInfoGaugeMainDefHeal_C_SetIsEmpty::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeMainDefHeal_C_SetIsEmpty, K2Node_Select_Default) == 0x000010, "Member 'SkillInfoGaugeMainDefHeal_C_SetIsEmpty::K2Node_Select_Default' has a wrong offset!");

// Function SkillInfoGaugeMainDefHeal.SkillInfoGaugeMainDefHeal_C.SetEmptyColor
// 0x0014 (0x0014 - 0x0000)
struct SkillInfoGaugeMainDefHeal_C_SetEmptyColor final
{
public:
	struct FLinearColor                           InColor;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoGaugeMainDefHeal_C_SetEmptyColor) == 0x000004, "Wrong alignment on SkillInfoGaugeMainDefHeal_C_SetEmptyColor");
static_assert(sizeof(SkillInfoGaugeMainDefHeal_C_SetEmptyColor) == 0x000014, "Wrong size on SkillInfoGaugeMainDefHeal_C_SetEmptyColor");
static_assert(offsetof(SkillInfoGaugeMainDefHeal_C_SetEmptyColor, InColor) == 0x000000, "Member 'SkillInfoGaugeMainDefHeal_C_SetEmptyColor::InColor' has a wrong offset!");
static_assert(offsetof(SkillInfoGaugeMainDefHeal_C_SetEmptyColor, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'SkillInfoGaugeMainDefHeal_C_SetEmptyColor::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

