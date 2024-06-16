#pragma once

 

// Package: BP_WeaponCustomBlueprintFunctionLibrary

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function BP_WeaponCustomBlueprintFunctionLibrary.BP_WeaponCustomBlueprintFunctionLibrary_C.IsInvalidAbilityEffectValue
// 0x0018 (0x0018 - 0x0000)
struct BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValue final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6933[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValue) == 0x000008, "Wrong alignment on BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValue");
static_assert(sizeof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValue) == 0x000018, "Wrong size on BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValue");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValue, Value) == 0x000000, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValue::Value' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValue, __WorldContext) == 0x000008, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValue::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValue, Result) == 0x000010, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValue::Result' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValue, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000011, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValue::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BP_WeaponCustomBlueprintFunctionLibrary.BP_WeaponCustomBlueprintFunctionLibrary_C.IsInvalidAbilityEffectValueMinMax
// 0x0018 (0x0018 - 0x0000)
struct BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueMinMax final
{
public:
	int32                                         ValueMin;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ValueMax;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInvalidAbilityEffectValue_Result;       // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInvalidAbilityEffectValue_Result_1;     // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueMinMax) == 0x000008, "Wrong alignment on BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueMinMax");
static_assert(sizeof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueMinMax) == 0x000018, "Wrong size on BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueMinMax");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueMinMax, ValueMin) == 0x000000, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueMinMax::ValueMin' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueMinMax, ValueMax) == 0x000004, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueMinMax::ValueMax' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueMinMax, __WorldContext) == 0x000008, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueMinMax::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueMinMax, Result) == 0x000010, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueMinMax::Result' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueMinMax, CallFunc_IsInvalidAbilityEffectValue_Result) == 0x000011, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueMinMax::CallFunc_IsInvalidAbilityEffectValue_Result' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueMinMax, CallFunc_IsInvalidAbilityEffectValue_Result_1) == 0x000012, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueMinMax::CallFunc_IsInvalidAbilityEffectValue_Result_1' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueMinMax, CallFunc_BooleanAND_ReturnValue) == 0x000013, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueMinMax::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_WeaponCustomBlueprintFunctionLibrary.BP_WeaponCustomBlueprintFunctionLibrary_C.IsInvalidAbilityEffectValueAbilityEffectID
// 0x0030 (0x0030 - 0x0000)
struct BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueAbilityEffectID final
{
public:
	int32                                         AbilityEffectId;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6934[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6935[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetAbilityEffectValue_Perk1ValueMin;      // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAbilityEffectValue_Perk1ValueMax;      // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAbilityEffectValue_Perk2ValueMin;      // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAbilityEffectValue_Perk2ValueMax;      // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAbilityEffectValue_RarityMin;          // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAbilityEffectValue_RarityMax;          // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInvalidAbilityEffectValueMinMax_Result; // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInvalidAbilityEffectValueMinMax_Result_1; // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueAbilityEffectID) == 0x000008, "Wrong alignment on BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueAbilityEffectID");
static_assert(sizeof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueAbilityEffectID) == 0x000030, "Wrong size on BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueAbilityEffectID");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueAbilityEffectID, AbilityEffectId) == 0x000000, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueAbilityEffectID::AbilityEffectId' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueAbilityEffectID, __WorldContext) == 0x000008, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueAbilityEffectID::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueAbilityEffectID, Result) == 0x000010, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueAbilityEffectID::Result' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueAbilityEffectID, CallFunc_GetAbilityEffectValue_Perk1ValueMin) == 0x000014, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueAbilityEffectID::CallFunc_GetAbilityEffectValue_Perk1ValueMin' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueAbilityEffectID, CallFunc_GetAbilityEffectValue_Perk1ValueMax) == 0x000018, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueAbilityEffectID::CallFunc_GetAbilityEffectValue_Perk1ValueMax' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueAbilityEffectID, CallFunc_GetAbilityEffectValue_Perk2ValueMin) == 0x00001C, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueAbilityEffectID::CallFunc_GetAbilityEffectValue_Perk2ValueMin' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueAbilityEffectID, CallFunc_GetAbilityEffectValue_Perk2ValueMax) == 0x000020, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueAbilityEffectID::CallFunc_GetAbilityEffectValue_Perk2ValueMax' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueAbilityEffectID, CallFunc_GetAbilityEffectValue_RarityMin) == 0x000024, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueAbilityEffectID::CallFunc_GetAbilityEffectValue_RarityMin' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueAbilityEffectID, CallFunc_GetAbilityEffectValue_RarityMax) == 0x000028, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueAbilityEffectID::CallFunc_GetAbilityEffectValue_RarityMax' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueAbilityEffectID, CallFunc_IsInvalidAbilityEffectValueMinMax_Result) == 0x00002C, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueAbilityEffectID::CallFunc_IsInvalidAbilityEffectValueMinMax_Result' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueAbilityEffectID, CallFunc_IsInvalidAbilityEffectValueMinMax_Result_1) == 0x00002D, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueAbilityEffectID::CallFunc_IsInvalidAbilityEffectValueMinMax_Result_1' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueAbilityEffectID, CallFunc_BooleanAND_ReturnValue) == 0x00002E, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_IsInvalidAbilityEffectValueAbilityEffectID::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_WeaponCustomBlueprintFunctionLibrary.BP_WeaponCustomBlueprintFunctionLibrary_C.IsSameAbilityEffectValueMinMax
// 0x0018 (0x0018 - 0x0000)
struct BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueMinMax final
{
public:
	int32                                         ValueMin;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ValueMax;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueMinMax) == 0x000008, "Wrong alignment on BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueMinMax");
static_assert(sizeof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueMinMax) == 0x000018, "Wrong size on BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueMinMax");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueMinMax, ValueMin) == 0x000000, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueMinMax::ValueMin' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueMinMax, ValueMax) == 0x000004, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueMinMax::ValueMax' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueMinMax, __WorldContext) == 0x000008, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueMinMax::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueMinMax, Result) == 0x000010, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueMinMax::Result' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueMinMax, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000011, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueMinMax::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BP_WeaponCustomBlueprintFunctionLibrary.BP_WeaponCustomBlueprintFunctionLibrary_C.IsSameAbilityEffectValueAbilityEffectID
// 0x0040 (0x0040 - 0x0000)
struct BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueAbilityEffectID final
{
public:
	int32                                         AbilityEffectId;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6936[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6937[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Value2Max;                                         // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Value2Min;                                         // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Value1Max;                                         // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Value1Min;                                         // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAbilityEffectValue_Perk1ValueMin;      // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAbilityEffectValue_Perk1ValueMax;      // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAbilityEffectValue_Perk2ValueMin;      // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAbilityEffectValue_Perk2ValueMax;      // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAbilityEffectValue_RarityMin;          // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAbilityEffectValue_RarityMax;          // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSameAbilityEffectValueMinMax_Result;    // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSameAbilityEffectValueMinMax_Result_1;  // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueAbilityEffectID) == 0x000008, "Wrong alignment on BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueAbilityEffectID");
static_assert(sizeof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueAbilityEffectID) == 0x000040, "Wrong size on BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueAbilityEffectID");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueAbilityEffectID, AbilityEffectId) == 0x000000, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueAbilityEffectID::AbilityEffectId' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueAbilityEffectID, __WorldContext) == 0x000008, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueAbilityEffectID::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueAbilityEffectID, Result) == 0x000010, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueAbilityEffectID::Result' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueAbilityEffectID, Value2Max) == 0x000014, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueAbilityEffectID::Value2Max' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueAbilityEffectID, Value2Min) == 0x000018, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueAbilityEffectID::Value2Min' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueAbilityEffectID, Value1Max) == 0x00001C, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueAbilityEffectID::Value1Max' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueAbilityEffectID, Value1Min) == 0x000020, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueAbilityEffectID::Value1Min' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueAbilityEffectID, CallFunc_GetAbilityEffectValue_Perk1ValueMin) == 0x000024, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueAbilityEffectID::CallFunc_GetAbilityEffectValue_Perk1ValueMin' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueAbilityEffectID, CallFunc_GetAbilityEffectValue_Perk1ValueMax) == 0x000028, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueAbilityEffectID::CallFunc_GetAbilityEffectValue_Perk1ValueMax' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueAbilityEffectID, CallFunc_GetAbilityEffectValue_Perk2ValueMin) == 0x00002C, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueAbilityEffectID::CallFunc_GetAbilityEffectValue_Perk2ValueMin' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueAbilityEffectID, CallFunc_GetAbilityEffectValue_Perk2ValueMax) == 0x000030, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueAbilityEffectID::CallFunc_GetAbilityEffectValue_Perk2ValueMax' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueAbilityEffectID, CallFunc_GetAbilityEffectValue_RarityMin) == 0x000034, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueAbilityEffectID::CallFunc_GetAbilityEffectValue_RarityMin' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueAbilityEffectID, CallFunc_GetAbilityEffectValue_RarityMax) == 0x000038, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueAbilityEffectID::CallFunc_GetAbilityEffectValue_RarityMax' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueAbilityEffectID, CallFunc_IsSameAbilityEffectValueMinMax_Result) == 0x00003C, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueAbilityEffectID::CallFunc_IsSameAbilityEffectValueMinMax_Result' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueAbilityEffectID, CallFunc_IsSameAbilityEffectValueMinMax_Result_1) == 0x00003D, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueAbilityEffectID::CallFunc_IsSameAbilityEffectValueMinMax_Result_1' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueAbilityEffectID, CallFunc_BooleanAND_ReturnValue) == 0x00003E, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_IsSameAbilityEffectValueAbilityEffectID::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_WeaponCustomBlueprintFunctionLibrary.BP_WeaponCustomBlueprintFunctionLibrary_C.GetAbilityEffectValue
// 0x0060 (0x0060 - 0x0000)
struct BP_WeaponCustomBlueprintFunctionLibrary_C_GetAbilityEffectValue final
{
public:
	int32                                         AbilityEffectId;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6938[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Perk1ValueMin;                                     // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Perk1ValueMax;                                     // 0x0014(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Perk2ValueMin;                                     // 0x0018(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Perk2ValueMax;                                     // 0x001C(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RarityMin;                                         // 0x0020(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RarityMax;                                         // 0x0024(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBSyntheAbilityData                   CallFunc_FindSyntheAbilityPickupMasterDataFromP2P_MinAccuracy; // 0x0028(0x001C)(NoDestructor)
	struct FSBSyntheAbilityData                   CallFunc_FindSyntheAbilityPickupMasterDataFromP2P_MaxAccuracy; // 0x0044(0x001C)(NoDestructor)
};
static_assert(alignof(BP_WeaponCustomBlueprintFunctionLibrary_C_GetAbilityEffectValue) == 0x000008, "Wrong alignment on BP_WeaponCustomBlueprintFunctionLibrary_C_GetAbilityEffectValue");
static_assert(sizeof(BP_WeaponCustomBlueprintFunctionLibrary_C_GetAbilityEffectValue) == 0x000060, "Wrong size on BP_WeaponCustomBlueprintFunctionLibrary_C_GetAbilityEffectValue");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_GetAbilityEffectValue, AbilityEffectId) == 0x000000, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_GetAbilityEffectValue::AbilityEffectId' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_GetAbilityEffectValue, __WorldContext) == 0x000008, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_GetAbilityEffectValue::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_GetAbilityEffectValue, Perk1ValueMin) == 0x000010, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_GetAbilityEffectValue::Perk1ValueMin' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_GetAbilityEffectValue, Perk1ValueMax) == 0x000014, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_GetAbilityEffectValue::Perk1ValueMax' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_GetAbilityEffectValue, Perk2ValueMin) == 0x000018, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_GetAbilityEffectValue::Perk2ValueMin' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_GetAbilityEffectValue, Perk2ValueMax) == 0x00001C, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_GetAbilityEffectValue::Perk2ValueMax' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_GetAbilityEffectValue, RarityMin) == 0x000020, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_GetAbilityEffectValue::RarityMin' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_GetAbilityEffectValue, RarityMax) == 0x000024, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_GetAbilityEffectValue::RarityMax' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_GetAbilityEffectValue, CallFunc_FindSyntheAbilityPickupMasterDataFromP2P_MinAccuracy) == 0x000028, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_GetAbilityEffectValue::CallFunc_FindSyntheAbilityPickupMasterDataFromP2P_MinAccuracy' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_GetAbilityEffectValue, CallFunc_FindSyntheAbilityPickupMasterDataFromP2P_MaxAccuracy) == 0x000044, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_GetAbilityEffectValue::CallFunc_FindSyntheAbilityPickupMasterDataFromP2P_MaxAccuracy' has a wrong offset!");

// Function BP_WeaponCustomBlueprintFunctionLibrary.BP_WeaponCustomBlueprintFunctionLibrary_C.GetAbilityEffectID
// 0x0068 (0x0068 - 0x0000)
struct BP_WeaponCustomBlueprintFunctionLibrary_C_GetAbilityEffectID final
{
public:
	int32                                         ItemId;                                            // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6939[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AbilityEffectId;                                   // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_693A[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindMasterFusionItem_Exists;           // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_693B[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterFusionItem                    CallFunc_BP_FindMasterFusionItem_ReturnValue;      // 0x0024(0x0018)(NoDestructor)
	bool                                          CallFunc_BP_FindSyntheAbilityPickupMasterData_IsExists; // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_693C[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSyntheAbilityPickUp                 CallFunc_BP_FindSyntheAbilityPickupMasterData_ReturnValue; // 0x0040(0x0028)()
};
static_assert(alignof(BP_WeaponCustomBlueprintFunctionLibrary_C_GetAbilityEffectID) == 0x000008, "Wrong alignment on BP_WeaponCustomBlueprintFunctionLibrary_C_GetAbilityEffectID");
static_assert(sizeof(BP_WeaponCustomBlueprintFunctionLibrary_C_GetAbilityEffectID) == 0x000068, "Wrong size on BP_WeaponCustomBlueprintFunctionLibrary_C_GetAbilityEffectID");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_GetAbilityEffectID, ItemId) == 0x000000, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_GetAbilityEffectID::ItemId' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_GetAbilityEffectID, __WorldContext) == 0x000008, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_GetAbilityEffectID::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_GetAbilityEffectID, AbilityEffectId) == 0x000010, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_GetAbilityEffectID::AbilityEffectId' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_GetAbilityEffectID, CallFunc_GetMasterDataManager_IsValid) == 0x000014, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_GetAbilityEffectID::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_GetAbilityEffectID, CallFunc_GetMasterDataManager_ReturnValue) == 0x000018, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_GetAbilityEffectID::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_GetAbilityEffectID, CallFunc_BP_FindMasterFusionItem_Exists) == 0x000020, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_GetAbilityEffectID::CallFunc_BP_FindMasterFusionItem_Exists' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_GetAbilityEffectID, CallFunc_BP_FindMasterFusionItem_ReturnValue) == 0x000024, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_GetAbilityEffectID::CallFunc_BP_FindMasterFusionItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_GetAbilityEffectID, CallFunc_BP_FindSyntheAbilityPickupMasterData_IsExists) == 0x00003C, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_GetAbilityEffectID::CallFunc_BP_FindSyntheAbilityPickupMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(BP_WeaponCustomBlueprintFunctionLibrary_C_GetAbilityEffectID, CallFunc_BP_FindSyntheAbilityPickupMasterData_ReturnValue) == 0x000040, "Member 'BP_WeaponCustomBlueprintFunctionLibrary_C_GetAbilityEffectID::CallFunc_BP_FindSyntheAbilityPickupMasterData_ReturnValue' has a wrong offset!");

}

