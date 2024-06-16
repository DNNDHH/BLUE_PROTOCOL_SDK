#pragma once

 

// Package: WeaponSynthePart_WindowAbilityChange

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WeaponSynthePart_WindowAbilityChange.WeaponSynthePart_WindowAbilityChange_C.ExecuteUbergraph_WeaponSynthePart_WindowAbilityChange
// 0x0004 (0x0004 - 0x0000)
struct WeaponSynthePart_WindowAbilityChange_C_ExecuteUbergraph_WeaponSynthePart_WindowAbilityChange final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_WindowAbilityChange_C_ExecuteUbergraph_WeaponSynthePart_WindowAbilityChange) == 0x000004, "Wrong alignment on WeaponSynthePart_WindowAbilityChange_C_ExecuteUbergraph_WeaponSynthePart_WindowAbilityChange");
static_assert(sizeof(WeaponSynthePart_WindowAbilityChange_C_ExecuteUbergraph_WeaponSynthePart_WindowAbilityChange) == 0x000004, "Wrong size on WeaponSynthePart_WindowAbilityChange_C_ExecuteUbergraph_WeaponSynthePart_WindowAbilityChange");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_ExecuteUbergraph_WeaponSynthePart_WindowAbilityChange, EntryPoint) == 0x000000, "Member 'WeaponSynthePart_WindowAbilityChange_C_ExecuteUbergraph_WeaponSynthePart_WindowAbilityChange::EntryPoint' has a wrong offset!");

// Function WeaponSynthePart_WindowAbilityChange.WeaponSynthePart_WindowAbilityChange_C.Setup
// 0x0014 (0x0014 - 0x0000)
struct WeaponSynthePart_WindowAbilityChange_C_Setup final
{
public:
	int32                                         InAbilityEffectId;                                 // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   AbilityDBRowName1;                                 // 0x0004(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   AbilityDBRowName2;                                 // 0x000C(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_WindowAbilityChange_C_Setup) == 0x000004, "Wrong alignment on WeaponSynthePart_WindowAbilityChange_C_Setup");
static_assert(sizeof(WeaponSynthePart_WindowAbilityChange_C_Setup) == 0x000014, "Wrong size on WeaponSynthePart_WindowAbilityChange_C_Setup");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_Setup, InAbilityEffectId) == 0x000000, "Member 'WeaponSynthePart_WindowAbilityChange_C_Setup::InAbilityEffectId' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_Setup, AbilityDBRowName1) == 0x000004, "Member 'WeaponSynthePart_WindowAbilityChange_C_Setup::AbilityDBRowName1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_Setup, AbilityDBRowName2) == 0x00000C, "Member 'WeaponSynthePart_WindowAbilityChange_C_Setup::AbilityDBRowName2' has a wrong offset!");

// Function WeaponSynthePart_WindowAbilityChange.WeaponSynthePart_WindowAbilityChange_C.SetupValue
// 0x0034 (0x0034 - 0x0000)
struct WeaponSynthePart_WindowAbilityChange_C_SetupValue final
{
public:
	int32                                         RarityMax;                                         // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RarityMin;                                         // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Value2Max;                                         // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Value2Min;                                         // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Value1Max;                                         // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Value1Min;                                         // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSameAbilityEffectValueAbilityEffectID_Result; // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6908[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetAbilityEffectValue_Perk1ValueMin;      // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAbilityEffectValue_Perk1ValueMax;      // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAbilityEffectValue_Perk2ValueMin;      // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAbilityEffectValue_Perk2ValueMax;      // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAbilityEffectValue_RarityMin;          // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAbilityEffectValue_RarityMax;          // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_WindowAbilityChange_C_SetupValue) == 0x000004, "Wrong alignment on WeaponSynthePart_WindowAbilityChange_C_SetupValue");
static_assert(sizeof(WeaponSynthePart_WindowAbilityChange_C_SetupValue) == 0x000034, "Wrong size on WeaponSynthePart_WindowAbilityChange_C_SetupValue");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetupValue, RarityMax) == 0x000000, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetupValue::RarityMax' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetupValue, RarityMin) == 0x000004, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetupValue::RarityMin' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetupValue, Value2Max) == 0x000008, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetupValue::Value2Max' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetupValue, Value2Min) == 0x00000C, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetupValue::Value2Min' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetupValue, Value1Max) == 0x000010, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetupValue::Value1Max' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetupValue, Value1Min) == 0x000014, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetupValue::Value1Min' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetupValue, CallFunc_IsSameAbilityEffectValueAbilityEffectID_Result) == 0x000018, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetupValue::CallFunc_IsSameAbilityEffectValueAbilityEffectID_Result' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetupValue, CallFunc_GetAbilityEffectValue_Perk1ValueMin) == 0x00001C, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetupValue::CallFunc_GetAbilityEffectValue_Perk1ValueMin' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetupValue, CallFunc_GetAbilityEffectValue_Perk1ValueMax) == 0x000020, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetupValue::CallFunc_GetAbilityEffectValue_Perk1ValueMax' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetupValue, CallFunc_GetAbilityEffectValue_Perk2ValueMin) == 0x000024, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetupValue::CallFunc_GetAbilityEffectValue_Perk2ValueMin' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetupValue, CallFunc_GetAbilityEffectValue_Perk2ValueMax) == 0x000028, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetupValue::CallFunc_GetAbilityEffectValue_Perk2ValueMax' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetupValue, CallFunc_GetAbilityEffectValue_RarityMin) == 0x00002C, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetupValue::CallFunc_GetAbilityEffectValue_RarityMin' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetupValue, CallFunc_GetAbilityEffectValue_RarityMax) == 0x000030, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetupValue::CallFunc_GetAbilityEffectValue_RarityMax' has a wrong offset!");

// Function WeaponSynthePart_WindowAbilityChange.WeaponSynthePart_WindowAbilityChange_C.SetVisibleTitle
// 0x0005 (0x0005 - 0x0000)
struct WeaponSynthePart_WindowAbilityChange_C_SetVisibleTitle final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_WindowAbilityChange_C_SetVisibleTitle) == 0x000001, "Wrong alignment on WeaponSynthePart_WindowAbilityChange_C_SetVisibleTitle");
static_assert(sizeof(WeaponSynthePart_WindowAbilityChange_C_SetVisibleTitle) == 0x000005, "Wrong size on WeaponSynthePart_WindowAbilityChange_C_SetVisibleTitle");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetVisibleTitle, Param_IsVisible) == 0x000000, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetVisibleTitle::Param_IsVisible' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetVisibleTitle, Temp_bool_Variable) == 0x000001, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetVisibleTitle::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetVisibleTitle, Temp_byte_Variable) == 0x000002, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetVisibleTitle::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetVisibleTitle, Temp_byte_Variable_1) == 0x000003, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetVisibleTitle::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetVisibleTitle, K2Node_Select_Default) == 0x000004, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetVisibleTitle::K2Node_Select_Default' has a wrong offset!");

// Function WeaponSynthePart_WindowAbilityChange.WeaponSynthePart_WindowAbilityChange_C.SetVisibleValue
// 0x0005 (0x0005 - 0x0000)
struct WeaponSynthePart_WindowAbilityChange_C_SetVisibleValue final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_WindowAbilityChange_C_SetVisibleValue) == 0x000001, "Wrong alignment on WeaponSynthePart_WindowAbilityChange_C_SetVisibleValue");
static_assert(sizeof(WeaponSynthePart_WindowAbilityChange_C_SetVisibleValue) == 0x000005, "Wrong size on WeaponSynthePart_WindowAbilityChange_C_SetVisibleValue");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetVisibleValue, Param_IsVisible) == 0x000000, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetVisibleValue::Param_IsVisible' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetVisibleValue, Temp_bool_Variable) == 0x000001, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetVisibleValue::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetVisibleValue, Temp_byte_Variable) == 0x000002, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetVisibleValue::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetVisibleValue, Temp_byte_Variable_1) == 0x000003, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetVisibleValue::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetVisibleValue, K2Node_Select_Default) == 0x000004, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetVisibleValue::K2Node_Select_Default' has a wrong offset!");

// Function WeaponSynthePart_WindowAbilityChange.WeaponSynthePart_WindowAbilityChange_C.SetVisibleValue1
// 0x0005 (0x0005 - 0x0000)
struct WeaponSynthePart_WindowAbilityChange_C_SetVisibleValue1 final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_WindowAbilityChange_C_SetVisibleValue1) == 0x000001, "Wrong alignment on WeaponSynthePart_WindowAbilityChange_C_SetVisibleValue1");
static_assert(sizeof(WeaponSynthePart_WindowAbilityChange_C_SetVisibleValue1) == 0x000005, "Wrong size on WeaponSynthePart_WindowAbilityChange_C_SetVisibleValue1");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetVisibleValue1, Param_IsVisible) == 0x000000, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetVisibleValue1::Param_IsVisible' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetVisibleValue1, Temp_bool_Variable) == 0x000001, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetVisibleValue1::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetVisibleValue1, Temp_byte_Variable) == 0x000002, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetVisibleValue1::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetVisibleValue1, Temp_byte_Variable_1) == 0x000003, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetVisibleValue1::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetVisibleValue1, K2Node_Select_Default) == 0x000004, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetVisibleValue1::K2Node_Select_Default' has a wrong offset!");

// Function WeaponSynthePart_WindowAbilityChange.WeaponSynthePart_WindowAbilityChange_C.SetVisibleValue2
// 0x0005 (0x0005 - 0x0000)
struct WeaponSynthePart_WindowAbilityChange_C_SetVisibleValue2 final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_WindowAbilityChange_C_SetVisibleValue2) == 0x000001, "Wrong alignment on WeaponSynthePart_WindowAbilityChange_C_SetVisibleValue2");
static_assert(sizeof(WeaponSynthePart_WindowAbilityChange_C_SetVisibleValue2) == 0x000005, "Wrong size on WeaponSynthePart_WindowAbilityChange_C_SetVisibleValue2");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetVisibleValue2, Param_IsVisible) == 0x000000, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetVisibleValue2::Param_IsVisible' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetVisibleValue2, Temp_bool_Variable) == 0x000001, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetVisibleValue2::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetVisibleValue2, Temp_byte_Variable) == 0x000002, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetVisibleValue2::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetVisibleValue2, Temp_byte_Variable_1) == 0x000003, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetVisibleValue2::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetVisibleValue2, K2Node_Select_Default) == 0x000004, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetVisibleValue2::K2Node_Select_Default' has a wrong offset!");

// Function WeaponSynthePart_WindowAbilityChange.WeaponSynthePart_WindowAbilityChange_C.SetTitleText
// 0x0010 (0x0010 - 0x0000)
struct WeaponSynthePart_WindowAbilityChange_C_SetTitleText final
{
public:
	bool                                          IsProtect;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6909[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_WindowAbilityChange_C_SetTitleText) == 0x000004, "Wrong alignment on WeaponSynthePart_WindowAbilityChange_C_SetTitleText");
static_assert(sizeof(WeaponSynthePart_WindowAbilityChange_C_SetTitleText) == 0x000010, "Wrong size on WeaponSynthePart_WindowAbilityChange_C_SetTitleText");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetTitleText, IsProtect) == 0x000000, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetTitleText::IsProtect' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetTitleText, Temp_bool_Variable) == 0x000001, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetTitleText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetTitleText, Temp_int_Variable) == 0x000004, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetTitleText::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetTitleText, Temp_int_Variable_1) == 0x000008, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetTitleText::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetTitleText, K2Node_Select_Default) == 0x00000C, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetTitleText::K2Node_Select_Default' has a wrong offset!");

// Function WeaponSynthePart_WindowAbilityChange.WeaponSynthePart_WindowAbilityChange_C.SetTitleRarity
// 0x0008 (0x0008 - 0x0000)
struct WeaponSynthePart_WindowAbilityChange_C_SetTitleRarity final
{
public:
	int32                                         RarityMin;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RarityMax;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_WindowAbilityChange_C_SetTitleRarity) == 0x000004, "Wrong alignment on WeaponSynthePart_WindowAbilityChange_C_SetTitleRarity");
static_assert(sizeof(WeaponSynthePart_WindowAbilityChange_C_SetTitleRarity) == 0x000008, "Wrong size on WeaponSynthePart_WindowAbilityChange_C_SetTitleRarity");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetTitleRarity, RarityMin) == 0x000000, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetTitleRarity::RarityMin' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetTitleRarity, RarityMax) == 0x000004, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetTitleRarity::RarityMax' has a wrong offset!");

// Function WeaponSynthePart_WindowAbilityChange.WeaponSynthePart_WindowAbilityChange_C.SetValue1
// 0x0098 (0x0098 - 0x0000)
struct WeaponSynthePart_WindowAbilityChange_C_SetValue1 final
{
public:
	int32                                         ValueMin;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ValueMax;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TempValueMax;                                      // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TempValueMin;                                      // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSameAbilityEffectValueMinMax_Result;    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_690A[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_ConvertAbilityEffectValueText_ReturnValue; // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	bool                                          CallFunc_IsInvalidAbilityEffectValueMinMax_Result; // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_690B[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_ConvertAbilityEffectValueText_ReturnValue_1; // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0058(0x0018)()
	class FString                                 CallFunc_ConvertAbilityEffectValueText_ReturnValue_2; // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0080(0x0018)()
};
static_assert(alignof(WeaponSynthePart_WindowAbilityChange_C_SetValue1) == 0x000008, "Wrong alignment on WeaponSynthePart_WindowAbilityChange_C_SetValue1");
static_assert(sizeof(WeaponSynthePart_WindowAbilityChange_C_SetValue1) == 0x000098, "Wrong size on WeaponSynthePart_WindowAbilityChange_C_SetValue1");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetValue1, ValueMin) == 0x000000, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetValue1::ValueMin' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetValue1, ValueMax) == 0x000004, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetValue1::ValueMax' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetValue1, TempValueMax) == 0x000008, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetValue1::TempValueMax' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetValue1, TempValueMin) == 0x00000C, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetValue1::TempValueMin' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetValue1, CallFunc_IsSameAbilityEffectValueMinMax_Result) == 0x000010, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetValue1::CallFunc_IsSameAbilityEffectValueMinMax_Result' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetValue1, CallFunc_ConvertAbilityEffectValueText_ReturnValue) == 0x000018, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetValue1::CallFunc_ConvertAbilityEffectValueText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetValue1, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetValue1::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetValue1, CallFunc_IsInvalidAbilityEffectValueMinMax_Result) == 0x000040, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetValue1::CallFunc_IsInvalidAbilityEffectValueMinMax_Result' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetValue1, CallFunc_ConvertAbilityEffectValueText_ReturnValue_1) == 0x000048, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetValue1::CallFunc_ConvertAbilityEffectValueText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetValue1, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000058, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetValue1::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetValue1, CallFunc_ConvertAbilityEffectValueText_ReturnValue_2) == 0x000070, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetValue1::CallFunc_ConvertAbilityEffectValueText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetValue1, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000080, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetValue1::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");

// Function WeaponSynthePart_WindowAbilityChange.WeaponSynthePart_WindowAbilityChange_C.SetValue2
// 0x0098 (0x0098 - 0x0000)
struct WeaponSynthePart_WindowAbilityChange_C_SetValue2 final
{
public:
	int32                                         ValueMin;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ValueMax;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TempValueMax;                                      // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TempValueMin;                                      // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSameAbilityEffectValueMinMax_Result;    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_690C[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_ConvertAbilityEffectValueText_ReturnValue; // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	class FString                                 CallFunc_ConvertAbilityEffectValueText_ReturnValue_1; // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0050(0x0018)()
	class FString                                 CallFunc_ConvertAbilityEffectValueText_ReturnValue_2; // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0078(0x0018)()
	bool                                          CallFunc_IsInvalidAbilityEffectValueMinMax_Result; // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponSynthePart_WindowAbilityChange_C_SetValue2) == 0x000008, "Wrong alignment on WeaponSynthePart_WindowAbilityChange_C_SetValue2");
static_assert(sizeof(WeaponSynthePart_WindowAbilityChange_C_SetValue2) == 0x000098, "Wrong size on WeaponSynthePart_WindowAbilityChange_C_SetValue2");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetValue2, ValueMin) == 0x000000, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetValue2::ValueMin' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetValue2, ValueMax) == 0x000004, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetValue2::ValueMax' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetValue2, TempValueMax) == 0x000008, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetValue2::TempValueMax' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetValue2, TempValueMin) == 0x00000C, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetValue2::TempValueMin' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetValue2, CallFunc_IsSameAbilityEffectValueMinMax_Result) == 0x000010, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetValue2::CallFunc_IsSameAbilityEffectValueMinMax_Result' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetValue2, CallFunc_ConvertAbilityEffectValueText_ReturnValue) == 0x000018, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetValue2::CallFunc_ConvertAbilityEffectValueText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetValue2, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetValue2::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetValue2, CallFunc_ConvertAbilityEffectValueText_ReturnValue_1) == 0x000040, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetValue2::CallFunc_ConvertAbilityEffectValueText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetValue2, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000050, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetValue2::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetValue2, CallFunc_ConvertAbilityEffectValueText_ReturnValue_2) == 0x000068, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetValue2::CallFunc_ConvertAbilityEffectValueText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetValue2, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000078, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetValue2::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_SetValue2, CallFunc_IsInvalidAbilityEffectValueMinMax_Result) == 0x000090, "Member 'WeaponSynthePart_WindowAbilityChange_C_SetValue2::CallFunc_IsInvalidAbilityEffectValueMinMax_Result' has a wrong offset!");

// Function WeaponSynthePart_WindowAbilityChange.WeaponSynthePart_WindowAbilityChange_C.PlayAnimArrow
// 0x0008 (0x0008 - 0x0000)
struct WeaponSynthePart_WindowAbilityChange_C_PlayAnimArrow final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_WindowAbilityChange_C_PlayAnimArrow) == 0x000008, "Wrong alignment on WeaponSynthePart_WindowAbilityChange_C_PlayAnimArrow");
static_assert(sizeof(WeaponSynthePart_WindowAbilityChange_C_PlayAnimArrow) == 0x000008, "Wrong size on WeaponSynthePart_WindowAbilityChange_C_PlayAnimArrow");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_PlayAnimArrow, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'WeaponSynthePart_WindowAbilityChange_C_PlayAnimArrow::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function WeaponSynthePart_WindowAbilityChange.WeaponSynthePart_WindowAbilityChange_C.ConvertValueToString
// 0x00A8 (0x00A8 - 0x0000)
struct WeaponSynthePart_WindowAbilityChange_C_ConvertValueToString final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         UIAttribute;                                       // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 OutStr;                                            // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	ESBAbilityUIAttribute                         TempUIAttr;                                        // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_690D[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TempStr;                                           // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         TempValue;                                         // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_690E[0x2];                                     // 0x003E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Abs_Int_ReturnValue;                      // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_690F[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSynthePart_WindowAbilityChange_C_ConvertValueToString) == 0x000008, "Wrong alignment on WeaponSynthePart_WindowAbilityChange_C_ConvertValueToString");
static_assert(sizeof(WeaponSynthePart_WindowAbilityChange_C_ConvertValueToString) == 0x0000A8, "Wrong size on WeaponSynthePart_WindowAbilityChange_C_ConvertValueToString");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_ConvertValueToString, Value) == 0x000000, "Member 'WeaponSynthePart_WindowAbilityChange_C_ConvertValueToString::Value' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_ConvertValueToString, UIAttribute) == 0x000004, "Member 'WeaponSynthePart_WindowAbilityChange_C_ConvertValueToString::UIAttribute' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_ConvertValueToString, OutStr) == 0x000008, "Member 'WeaponSynthePart_WindowAbilityChange_C_ConvertValueToString::OutStr' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_ConvertValueToString, TempUIAttr) == 0x000018, "Member 'WeaponSynthePart_WindowAbilityChange_C_ConvertValueToString::TempUIAttr' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_ConvertValueToString, TempStr) == 0x000020, "Member 'WeaponSynthePart_WindowAbilityChange_C_ConvertValueToString::TempStr' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_ConvertValueToString, TempValue) == 0x000030, "Member 'WeaponSynthePart_WindowAbilityChange_C_ConvertValueToString::TempValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_ConvertValueToString, CallFunc_Subtract_IntInt_ReturnValue) == 0x000034, "Member 'WeaponSynthePart_WindowAbilityChange_C_ConvertValueToString::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_ConvertValueToString, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000038, "Member 'WeaponSynthePart_WindowAbilityChange_C_ConvertValueToString::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_ConvertValueToString, CallFunc_Conv_IntToByte_ReturnValue) == 0x000039, "Member 'WeaponSynthePart_WindowAbilityChange_C_ConvertValueToString::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_ConvertValueToString, CallFunc_GetValidValue_ReturnValue) == 0x00003A, "Member 'WeaponSynthePart_WindowAbilityChange_C_ConvertValueToString::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_ConvertValueToString, CallFunc_Less_IntInt_ReturnValue) == 0x00003B, "Member 'WeaponSynthePart_WindowAbilityChange_C_ConvertValueToString::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_ConvertValueToString, CallFunc_Less_IntInt_ReturnValue_1) == 0x00003C, "Member 'WeaponSynthePart_WindowAbilityChange_C_ConvertValueToString::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_ConvertValueToString, CallFunc_Less_IntInt_ReturnValue_2) == 0x00003D, "Member 'WeaponSynthePart_WindowAbilityChange_C_ConvertValueToString::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_ConvertValueToString, CallFunc_Abs_Int_ReturnValue) == 0x000040, "Member 'WeaponSynthePart_WindowAbilityChange_C_ConvertValueToString::CallFunc_Abs_Int_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_ConvertValueToString, CallFunc_Conv_IntToString_ReturnValue) == 0x000048, "Member 'WeaponSynthePart_WindowAbilityChange_C_ConvertValueToString::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_ConvertValueToString, CallFunc_Concat_StrStr_ReturnValue) == 0x000058, "Member 'WeaponSynthePart_WindowAbilityChange_C_ConvertValueToString::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_ConvertValueToString, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000068, "Member 'WeaponSynthePart_WindowAbilityChange_C_ConvertValueToString::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_ConvertValueToString, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000078, "Member 'WeaponSynthePart_WindowAbilityChange_C_ConvertValueToString::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_ConvertValueToString, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000088, "Member 'WeaponSynthePart_WindowAbilityChange_C_ConvertValueToString::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WeaponSynthePart_WindowAbilityChange_C_ConvertValueToString, CallFunc_Concat_StrStr_ReturnValue_4) == 0x000098, "Member 'WeaponSynthePart_WindowAbilityChange_C_ConvertValueToString::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");

}

