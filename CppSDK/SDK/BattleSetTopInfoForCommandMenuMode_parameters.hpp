#pragma once

 

// Package: BattleSetTopInfoForCommandMenuMode

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.OnTopInfoTacticalSkillIconPressed__DelegateSignature
// 0x000C (0x000C - 0x0000)
struct BattleSetTopInfoForCommandMenuMode_C_OnTopInfoTacticalSkillIconPressed__DelegateSignature final
{
public:
	ESkillActionPosition                          InTacticalSkillSAP;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8356[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InSkillId;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InSkillLevel;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleSetTopInfoForCommandMenuMode_C_OnTopInfoTacticalSkillIconPressed__DelegateSignature) == 0x000004, "Wrong alignment on BattleSetTopInfoForCommandMenuMode_C_OnTopInfoTacticalSkillIconPressed__DelegateSignature");
static_assert(sizeof(BattleSetTopInfoForCommandMenuMode_C_OnTopInfoTacticalSkillIconPressed__DelegateSignature) == 0x00000C, "Wrong size on BattleSetTopInfoForCommandMenuMode_C_OnTopInfoTacticalSkillIconPressed__DelegateSignature");
static_assert(offsetof(BattleSetTopInfoForCommandMenuMode_C_OnTopInfoTacticalSkillIconPressed__DelegateSignature, InTacticalSkillSAP) == 0x000000, "Member 'BattleSetTopInfoForCommandMenuMode_C_OnTopInfoTacticalSkillIconPressed__DelegateSignature::InTacticalSkillSAP' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForCommandMenuMode_C_OnTopInfoTacticalSkillIconPressed__DelegateSignature, InSkillId) == 0x000004, "Member 'BattleSetTopInfoForCommandMenuMode_C_OnTopInfoTacticalSkillIconPressed__DelegateSignature::InSkillId' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForCommandMenuMode_C_OnTopInfoTacticalSkillIconPressed__DelegateSignature, InSkillLevel) == 0x000008, "Member 'BattleSetTopInfoForCommandMenuMode_C_OnTopInfoTacticalSkillIconPressed__DelegateSignature::InSkillLevel' has a wrong offset!");

// Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.OnTopInfoBattleImagineIconPressed__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct BattleSetTopInfoForCommandMenuMode_C_OnTopInfoBattleImagineIconPressed__DelegateSignature final
{
public:
	ESkillActionPosition                          InBattleImagineSAP;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8357[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InBattleImagineUniqueId;                           // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleSetTopInfoForCommandMenuMode_C_OnTopInfoBattleImagineIconPressed__DelegateSignature) == 0x000008, "Wrong alignment on BattleSetTopInfoForCommandMenuMode_C_OnTopInfoBattleImagineIconPressed__DelegateSignature");
static_assert(sizeof(BattleSetTopInfoForCommandMenuMode_C_OnTopInfoBattleImagineIconPressed__DelegateSignature) == 0x000018, "Wrong size on BattleSetTopInfoForCommandMenuMode_C_OnTopInfoBattleImagineIconPressed__DelegateSignature");
static_assert(offsetof(BattleSetTopInfoForCommandMenuMode_C_OnTopInfoBattleImagineIconPressed__DelegateSignature, InBattleImagineSAP) == 0x000000, "Member 'BattleSetTopInfoForCommandMenuMode_C_OnTopInfoBattleImagineIconPressed__DelegateSignature::InBattleImagineSAP' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForCommandMenuMode_C_OnTopInfoBattleImagineIconPressed__DelegateSignature, InBattleImagineUniqueId) == 0x000008, "Member 'BattleSetTopInfoForCommandMenuMode_C_OnTopInfoBattleImagineIconPressed__DelegateSignature::InBattleImagineUniqueId' has a wrong offset!");

// Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.OnTopInfoClassAbilityIconPressed__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BattleSetTopInfoForCommandMenuMode_C_OnTopInfoClassAbilityIconPressed__DelegateSignature final
{
public:
	int32                                         InSkillSlotId;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InSkillId;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleSetTopInfoForCommandMenuMode_C_OnTopInfoClassAbilityIconPressed__DelegateSignature) == 0x000004, "Wrong alignment on BattleSetTopInfoForCommandMenuMode_C_OnTopInfoClassAbilityIconPressed__DelegateSignature");
static_assert(sizeof(BattleSetTopInfoForCommandMenuMode_C_OnTopInfoClassAbilityIconPressed__DelegateSignature) == 0x000008, "Wrong size on BattleSetTopInfoForCommandMenuMode_C_OnTopInfoClassAbilityIconPressed__DelegateSignature");
static_assert(offsetof(BattleSetTopInfoForCommandMenuMode_C_OnTopInfoClassAbilityIconPressed__DelegateSignature, InSkillSlotId) == 0x000000, "Member 'BattleSetTopInfoForCommandMenuMode_C_OnTopInfoClassAbilityIconPressed__DelegateSignature::InSkillSlotId' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForCommandMenuMode_C_OnTopInfoClassAbilityIconPressed__DelegateSignature, InSkillId) == 0x000004, "Member 'BattleSetTopInfoForCommandMenuMode_C_OnTopInfoClassAbilityIconPressed__DelegateSignature::InSkillId' has a wrong offset!");

// Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.OnTopInfoInnerImagineIconPressed__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BattleSetTopInfoForCommandMenuMode_C_OnTopInfoInnerImagineIconPressed__DelegateSignature final
{
public:
	ESBPlayerPassiveImagineSlotType               InInnerImagineSlotType;                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8358[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InImagineId;                                       // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleSetTopInfoForCommandMenuMode_C_OnTopInfoInnerImagineIconPressed__DelegateSignature) == 0x000004, "Wrong alignment on BattleSetTopInfoForCommandMenuMode_C_OnTopInfoInnerImagineIconPressed__DelegateSignature");
static_assert(sizeof(BattleSetTopInfoForCommandMenuMode_C_OnTopInfoInnerImagineIconPressed__DelegateSignature) == 0x000008, "Wrong size on BattleSetTopInfoForCommandMenuMode_C_OnTopInfoInnerImagineIconPressed__DelegateSignature");
static_assert(offsetof(BattleSetTopInfoForCommandMenuMode_C_OnTopInfoInnerImagineIconPressed__DelegateSignature, InInnerImagineSlotType) == 0x000000, "Member 'BattleSetTopInfoForCommandMenuMode_C_OnTopInfoInnerImagineIconPressed__DelegateSignature::InInnerImagineSlotType' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForCommandMenuMode_C_OnTopInfoInnerImagineIconPressed__DelegateSignature, InImagineId) == 0x000004, "Member 'BattleSetTopInfoForCommandMenuMode_C_OnTopInfoInnerImagineIconPressed__DelegateSignature::InImagineId' has a wrong offset!");

// Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.ExecuteUbergraph_BattleSetTopInfoForCommandMenuMode
// 0x0038 (0x0038 - 0x0000)
struct BattleSetTopInfoForCommandMenuMode_C_ExecuteUbergraph_BattleSetTopInfoForCommandMenuMode final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBPlayerPassiveImagineSlotType               K2Node_ComponentBoundEvent_InInnerImagineSlotType; // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8359[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_ComponentBoundEvent_InImagineId;            // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillActionPosition                          K2Node_ComponentBoundEvent_InTacticalSkillSAP;     // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_835A[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_ComponentBoundEvent_InSkillId_1;            // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_InSkillLevel;           // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillActionPosition                          K2Node_ComponentBoundEvent_InBattleImagineSAP;     // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_835B[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_InBattleImagineUniqueId; // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_InSkillSlotId;          // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_InSkillId;              // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleSetTopInfoForCommandMenuMode_C_ExecuteUbergraph_BattleSetTopInfoForCommandMenuMode) == 0x000008, "Wrong alignment on BattleSetTopInfoForCommandMenuMode_C_ExecuteUbergraph_BattleSetTopInfoForCommandMenuMode");
static_assert(sizeof(BattleSetTopInfoForCommandMenuMode_C_ExecuteUbergraph_BattleSetTopInfoForCommandMenuMode) == 0x000038, "Wrong size on BattleSetTopInfoForCommandMenuMode_C_ExecuteUbergraph_BattleSetTopInfoForCommandMenuMode");
static_assert(offsetof(BattleSetTopInfoForCommandMenuMode_C_ExecuteUbergraph_BattleSetTopInfoForCommandMenuMode, EntryPoint) == 0x000000, "Member 'BattleSetTopInfoForCommandMenuMode_C_ExecuteUbergraph_BattleSetTopInfoForCommandMenuMode::EntryPoint' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForCommandMenuMode_C_ExecuteUbergraph_BattleSetTopInfoForCommandMenuMode, K2Node_ComponentBoundEvent_InInnerImagineSlotType) == 0x000004, "Member 'BattleSetTopInfoForCommandMenuMode_C_ExecuteUbergraph_BattleSetTopInfoForCommandMenuMode::K2Node_ComponentBoundEvent_InInnerImagineSlotType' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForCommandMenuMode_C_ExecuteUbergraph_BattleSetTopInfoForCommandMenuMode, K2Node_ComponentBoundEvent_InImagineId) == 0x000008, "Member 'BattleSetTopInfoForCommandMenuMode_C_ExecuteUbergraph_BattleSetTopInfoForCommandMenuMode::K2Node_ComponentBoundEvent_InImagineId' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForCommandMenuMode_C_ExecuteUbergraph_BattleSetTopInfoForCommandMenuMode, K2Node_ComponentBoundEvent_InTacticalSkillSAP) == 0x00000C, "Member 'BattleSetTopInfoForCommandMenuMode_C_ExecuteUbergraph_BattleSetTopInfoForCommandMenuMode::K2Node_ComponentBoundEvent_InTacticalSkillSAP' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForCommandMenuMode_C_ExecuteUbergraph_BattleSetTopInfoForCommandMenuMode, K2Node_ComponentBoundEvent_InSkillId_1) == 0x000010, "Member 'BattleSetTopInfoForCommandMenuMode_C_ExecuteUbergraph_BattleSetTopInfoForCommandMenuMode::K2Node_ComponentBoundEvent_InSkillId_1' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForCommandMenuMode_C_ExecuteUbergraph_BattleSetTopInfoForCommandMenuMode, K2Node_ComponentBoundEvent_InSkillLevel) == 0x000014, "Member 'BattleSetTopInfoForCommandMenuMode_C_ExecuteUbergraph_BattleSetTopInfoForCommandMenuMode::K2Node_ComponentBoundEvent_InSkillLevel' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForCommandMenuMode_C_ExecuteUbergraph_BattleSetTopInfoForCommandMenuMode, K2Node_ComponentBoundEvent_InBattleImagineSAP) == 0x000018, "Member 'BattleSetTopInfoForCommandMenuMode_C_ExecuteUbergraph_BattleSetTopInfoForCommandMenuMode::K2Node_ComponentBoundEvent_InBattleImagineSAP' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForCommandMenuMode_C_ExecuteUbergraph_BattleSetTopInfoForCommandMenuMode, K2Node_ComponentBoundEvent_InBattleImagineUniqueId) == 0x000020, "Member 'BattleSetTopInfoForCommandMenuMode_C_ExecuteUbergraph_BattleSetTopInfoForCommandMenuMode::K2Node_ComponentBoundEvent_InBattleImagineUniqueId' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForCommandMenuMode_C_ExecuteUbergraph_BattleSetTopInfoForCommandMenuMode, K2Node_ComponentBoundEvent_InSkillSlotId) == 0x000030, "Member 'BattleSetTopInfoForCommandMenuMode_C_ExecuteUbergraph_BattleSetTopInfoForCommandMenuMode::K2Node_ComponentBoundEvent_InSkillSlotId' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForCommandMenuMode_C_ExecuteUbergraph_BattleSetTopInfoForCommandMenuMode, K2Node_ComponentBoundEvent_InSkillId) == 0x000034, "Member 'BattleSetTopInfoForCommandMenuMode_C_ExecuteUbergraph_BattleSetTopInfoForCommandMenuMode::K2Node_ComponentBoundEvent_InSkillId' has a wrong offset!");

// Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.BndEvt__BattleSetTopInfoBase_InnerImagineInfoForBattleSetTop_K2Node_ComponentBoundEvent_9_OnIconBtnPressed__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BattleSetTopInfoForCommandMenuMode_C_BndEvt__BattleSetTopInfoBase_InnerImagineInfoForBattleSetTop_K2Node_ComponentBoundEvent_9_OnIconBtnPressed__DelegateSignature final
{
public:
	ESBPlayerPassiveImagineSlotType               InInnerImagineSlotType;                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_835C[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InImagineId;                                       // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleSetTopInfoForCommandMenuMode_C_BndEvt__BattleSetTopInfoBase_InnerImagineInfoForBattleSetTop_K2Node_ComponentBoundEvent_9_OnIconBtnPressed__DelegateSignature) == 0x000004, "Wrong alignment on BattleSetTopInfoForCommandMenuMode_C_BndEvt__BattleSetTopInfoBase_InnerImagineInfoForBattleSetTop_K2Node_ComponentBoundEvent_9_OnIconBtnPressed__DelegateSignature");
static_assert(sizeof(BattleSetTopInfoForCommandMenuMode_C_BndEvt__BattleSetTopInfoBase_InnerImagineInfoForBattleSetTop_K2Node_ComponentBoundEvent_9_OnIconBtnPressed__DelegateSignature) == 0x000008, "Wrong size on BattleSetTopInfoForCommandMenuMode_C_BndEvt__BattleSetTopInfoBase_InnerImagineInfoForBattleSetTop_K2Node_ComponentBoundEvent_9_OnIconBtnPressed__DelegateSignature");
static_assert(offsetof(BattleSetTopInfoForCommandMenuMode_C_BndEvt__BattleSetTopInfoBase_InnerImagineInfoForBattleSetTop_K2Node_ComponentBoundEvent_9_OnIconBtnPressed__DelegateSignature, InInnerImagineSlotType) == 0x000000, "Member 'BattleSetTopInfoForCommandMenuMode_C_BndEvt__BattleSetTopInfoBase_InnerImagineInfoForBattleSetTop_K2Node_ComponentBoundEvent_9_OnIconBtnPressed__DelegateSignature::InInnerImagineSlotType' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForCommandMenuMode_C_BndEvt__BattleSetTopInfoBase_InnerImagineInfoForBattleSetTop_K2Node_ComponentBoundEvent_9_OnIconBtnPressed__DelegateSignature, InImagineId) == 0x000004, "Member 'BattleSetTopInfoForCommandMenuMode_C_BndEvt__BattleSetTopInfoBase_InnerImagineInfoForBattleSetTop_K2Node_ComponentBoundEvent_9_OnIconBtnPressed__DelegateSignature::InImagineId' has a wrong offset!");

// Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.BndEvt__BattleSetTopInfoBase_ClassAbilityInfoForBattleSetTop_K2Node_ComponentBoundEvent_8_OnClassAbilityIconClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BattleSetTopInfoForCommandMenuMode_C_BndEvt__BattleSetTopInfoBase_ClassAbilityInfoForBattleSetTop_K2Node_ComponentBoundEvent_8_OnClassAbilityIconClicked__DelegateSignature final
{
public:
	int32                                         InSkillSlotId;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InSkillId;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleSetTopInfoForCommandMenuMode_C_BndEvt__BattleSetTopInfoBase_ClassAbilityInfoForBattleSetTop_K2Node_ComponentBoundEvent_8_OnClassAbilityIconClicked__DelegateSignature) == 0x000004, "Wrong alignment on BattleSetTopInfoForCommandMenuMode_C_BndEvt__BattleSetTopInfoBase_ClassAbilityInfoForBattleSetTop_K2Node_ComponentBoundEvent_8_OnClassAbilityIconClicked__DelegateSignature");
static_assert(sizeof(BattleSetTopInfoForCommandMenuMode_C_BndEvt__BattleSetTopInfoBase_ClassAbilityInfoForBattleSetTop_K2Node_ComponentBoundEvent_8_OnClassAbilityIconClicked__DelegateSignature) == 0x000008, "Wrong size on BattleSetTopInfoForCommandMenuMode_C_BndEvt__BattleSetTopInfoBase_ClassAbilityInfoForBattleSetTop_K2Node_ComponentBoundEvent_8_OnClassAbilityIconClicked__DelegateSignature");
static_assert(offsetof(BattleSetTopInfoForCommandMenuMode_C_BndEvt__BattleSetTopInfoBase_ClassAbilityInfoForBattleSetTop_K2Node_ComponentBoundEvent_8_OnClassAbilityIconClicked__DelegateSignature, InSkillSlotId) == 0x000000, "Member 'BattleSetTopInfoForCommandMenuMode_C_BndEvt__BattleSetTopInfoBase_ClassAbilityInfoForBattleSetTop_K2Node_ComponentBoundEvent_8_OnClassAbilityIconClicked__DelegateSignature::InSkillSlotId' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForCommandMenuMode_C_BndEvt__BattleSetTopInfoBase_ClassAbilityInfoForBattleSetTop_K2Node_ComponentBoundEvent_8_OnClassAbilityIconClicked__DelegateSignature, InSkillId) == 0x000004, "Member 'BattleSetTopInfoForCommandMenuMode_C_BndEvt__BattleSetTopInfoBase_ClassAbilityInfoForBattleSetTop_K2Node_ComponentBoundEvent_8_OnClassAbilityIconClicked__DelegateSignature::InSkillId' has a wrong offset!");

// Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.BndEvt__BattleSetTopInfoBase_SkillInfoForBattleSetTop_K2Node_ComponentBoundEvent_7_OnBattleImagineIconPresssed__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct BattleSetTopInfoForCommandMenuMode_C_BndEvt__BattleSetTopInfoBase_SkillInfoForBattleSetTop_K2Node_ComponentBoundEvent_7_OnBattleImagineIconPresssed__DelegateSignature final
{
public:
	ESkillActionPosition                          InBattleImagineSAP;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_835D[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InBattleImagineUniqueId;                           // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleSetTopInfoForCommandMenuMode_C_BndEvt__BattleSetTopInfoBase_SkillInfoForBattleSetTop_K2Node_ComponentBoundEvent_7_OnBattleImagineIconPresssed__DelegateSignature) == 0x000008, "Wrong alignment on BattleSetTopInfoForCommandMenuMode_C_BndEvt__BattleSetTopInfoBase_SkillInfoForBattleSetTop_K2Node_ComponentBoundEvent_7_OnBattleImagineIconPresssed__DelegateSignature");
static_assert(sizeof(BattleSetTopInfoForCommandMenuMode_C_BndEvt__BattleSetTopInfoBase_SkillInfoForBattleSetTop_K2Node_ComponentBoundEvent_7_OnBattleImagineIconPresssed__DelegateSignature) == 0x000018, "Wrong size on BattleSetTopInfoForCommandMenuMode_C_BndEvt__BattleSetTopInfoBase_SkillInfoForBattleSetTop_K2Node_ComponentBoundEvent_7_OnBattleImagineIconPresssed__DelegateSignature");
static_assert(offsetof(BattleSetTopInfoForCommandMenuMode_C_BndEvt__BattleSetTopInfoBase_SkillInfoForBattleSetTop_K2Node_ComponentBoundEvent_7_OnBattleImagineIconPresssed__DelegateSignature, InBattleImagineSAP) == 0x000000, "Member 'BattleSetTopInfoForCommandMenuMode_C_BndEvt__BattleSetTopInfoBase_SkillInfoForBattleSetTop_K2Node_ComponentBoundEvent_7_OnBattleImagineIconPresssed__DelegateSignature::InBattleImagineSAP' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForCommandMenuMode_C_BndEvt__BattleSetTopInfoBase_SkillInfoForBattleSetTop_K2Node_ComponentBoundEvent_7_OnBattleImagineIconPresssed__DelegateSignature, InBattleImagineUniqueId) == 0x000008, "Member 'BattleSetTopInfoForCommandMenuMode_C_BndEvt__BattleSetTopInfoBase_SkillInfoForBattleSetTop_K2Node_ComponentBoundEvent_7_OnBattleImagineIconPresssed__DelegateSignature::InBattleImagineUniqueId' has a wrong offset!");

// Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.BndEvt__BattleSetTopInfoBase_SkillInfoForBattleSetTop_K2Node_ComponentBoundEvent_6_OnTacticalSkillIconPressed__DelegateSignature
// 0x000C (0x000C - 0x0000)
struct BattleSetTopInfoForCommandMenuMode_C_BndEvt__BattleSetTopInfoBase_SkillInfoForBattleSetTop_K2Node_ComponentBoundEvent_6_OnTacticalSkillIconPressed__DelegateSignature final
{
public:
	ESkillActionPosition                          InTacticalSkillSAP;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_835E[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InSkillId;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InSkillLevel;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleSetTopInfoForCommandMenuMode_C_BndEvt__BattleSetTopInfoBase_SkillInfoForBattleSetTop_K2Node_ComponentBoundEvent_6_OnTacticalSkillIconPressed__DelegateSignature) == 0x000004, "Wrong alignment on BattleSetTopInfoForCommandMenuMode_C_BndEvt__BattleSetTopInfoBase_SkillInfoForBattleSetTop_K2Node_ComponentBoundEvent_6_OnTacticalSkillIconPressed__DelegateSignature");
static_assert(sizeof(BattleSetTopInfoForCommandMenuMode_C_BndEvt__BattleSetTopInfoBase_SkillInfoForBattleSetTop_K2Node_ComponentBoundEvent_6_OnTacticalSkillIconPressed__DelegateSignature) == 0x00000C, "Wrong size on BattleSetTopInfoForCommandMenuMode_C_BndEvt__BattleSetTopInfoBase_SkillInfoForBattleSetTop_K2Node_ComponentBoundEvent_6_OnTacticalSkillIconPressed__DelegateSignature");
static_assert(offsetof(BattleSetTopInfoForCommandMenuMode_C_BndEvt__BattleSetTopInfoBase_SkillInfoForBattleSetTop_K2Node_ComponentBoundEvent_6_OnTacticalSkillIconPressed__DelegateSignature, InTacticalSkillSAP) == 0x000000, "Member 'BattleSetTopInfoForCommandMenuMode_C_BndEvt__BattleSetTopInfoBase_SkillInfoForBattleSetTop_K2Node_ComponentBoundEvent_6_OnTacticalSkillIconPressed__DelegateSignature::InTacticalSkillSAP' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForCommandMenuMode_C_BndEvt__BattleSetTopInfoBase_SkillInfoForBattleSetTop_K2Node_ComponentBoundEvent_6_OnTacticalSkillIconPressed__DelegateSignature, InSkillId) == 0x000004, "Member 'BattleSetTopInfoForCommandMenuMode_C_BndEvt__BattleSetTopInfoBase_SkillInfoForBattleSetTop_K2Node_ComponentBoundEvent_6_OnTacticalSkillIconPressed__DelegateSignature::InSkillId' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForCommandMenuMode_C_BndEvt__BattleSetTopInfoBase_SkillInfoForBattleSetTop_K2Node_ComponentBoundEvent_6_OnTacticalSkillIconPressed__DelegateSignature, InSkillLevel) == 0x000008, "Member 'BattleSetTopInfoForCommandMenuMode_C_BndEvt__BattleSetTopInfoBase_SkillInfoForBattleSetTop_K2Node_ComponentBoundEvent_6_OnTacticalSkillIconPressed__DelegateSignature::InSkillLevel' has a wrong offset!");

// Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.SetupWeaponInfo
// 0x0001 (0x0001 - 0x0000)
struct BattleSetTopInfoForCommandMenuMode_C_SetupWeaponInfo final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleSetTopInfoForCommandMenuMode_C_SetupWeaponInfo) == 0x000001, "Wrong alignment on BattleSetTopInfoForCommandMenuMode_C_SetupWeaponInfo");
static_assert(sizeof(BattleSetTopInfoForCommandMenuMode_C_SetupWeaponInfo) == 0x000001, "Wrong size on BattleSetTopInfoForCommandMenuMode_C_SetupWeaponInfo");
static_assert(offsetof(BattleSetTopInfoForCommandMenuMode_C_SetupWeaponInfo, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BattleSetTopInfoForCommandMenuMode_C_SetupWeaponInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.SetupAllSkillInfo
// 0x0001 (0x0001 - 0x0000)
struct BattleSetTopInfoForCommandMenuMode_C_SetupAllSkillInfo final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleSetTopInfoForCommandMenuMode_C_SetupAllSkillInfo) == 0x000001, "Wrong alignment on BattleSetTopInfoForCommandMenuMode_C_SetupAllSkillInfo");
static_assert(sizeof(BattleSetTopInfoForCommandMenuMode_C_SetupAllSkillInfo) == 0x000001, "Wrong size on BattleSetTopInfoForCommandMenuMode_C_SetupAllSkillInfo");
static_assert(offsetof(BattleSetTopInfoForCommandMenuMode_C_SetupAllSkillInfo, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BattleSetTopInfoForCommandMenuMode_C_SetupAllSkillInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.SetupBattleImagineInfo
// 0x0001 (0x0001 - 0x0000)
struct BattleSetTopInfoForCommandMenuMode_C_SetupBattleImagineInfo final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleSetTopInfoForCommandMenuMode_C_SetupBattleImagineInfo) == 0x000001, "Wrong alignment on BattleSetTopInfoForCommandMenuMode_C_SetupBattleImagineInfo");
static_assert(sizeof(BattleSetTopInfoForCommandMenuMode_C_SetupBattleImagineInfo) == 0x000001, "Wrong size on BattleSetTopInfoForCommandMenuMode_C_SetupBattleImagineInfo");
static_assert(offsetof(BattleSetTopInfoForCommandMenuMode_C_SetupBattleImagineInfo, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BattleSetTopInfoForCommandMenuMode_C_SetupBattleImagineInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.SetupTacticalSkillInfo
// 0x0001 (0x0001 - 0x0000)
struct BattleSetTopInfoForCommandMenuMode_C_SetupTacticalSkillInfo final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleSetTopInfoForCommandMenuMode_C_SetupTacticalSkillInfo) == 0x000001, "Wrong alignment on BattleSetTopInfoForCommandMenuMode_C_SetupTacticalSkillInfo");
static_assert(sizeof(BattleSetTopInfoForCommandMenuMode_C_SetupTacticalSkillInfo) == 0x000001, "Wrong size on BattleSetTopInfoForCommandMenuMode_C_SetupTacticalSkillInfo");
static_assert(offsetof(BattleSetTopInfoForCommandMenuMode_C_SetupTacticalSkillInfo, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BattleSetTopInfoForCommandMenuMode_C_SetupTacticalSkillInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.SetupClassAbilityInfo
// 0x0001 (0x0001 - 0x0000)
struct BattleSetTopInfoForCommandMenuMode_C_SetupClassAbilityInfo final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleSetTopInfoForCommandMenuMode_C_SetupClassAbilityInfo) == 0x000001, "Wrong alignment on BattleSetTopInfoForCommandMenuMode_C_SetupClassAbilityInfo");
static_assert(sizeof(BattleSetTopInfoForCommandMenuMode_C_SetupClassAbilityInfo) == 0x000001, "Wrong size on BattleSetTopInfoForCommandMenuMode_C_SetupClassAbilityInfo");
static_assert(offsetof(BattleSetTopInfoForCommandMenuMode_C_SetupClassAbilityInfo, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BattleSetTopInfoForCommandMenuMode_C_SetupClassAbilityInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.SetupInnerImagineInfo
// 0x0001 (0x0001 - 0x0000)
struct BattleSetTopInfoForCommandMenuMode_C_SetupInnerImagineInfo final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleSetTopInfoForCommandMenuMode_C_SetupInnerImagineInfo) == 0x000001, "Wrong alignment on BattleSetTopInfoForCommandMenuMode_C_SetupInnerImagineInfo");
static_assert(sizeof(BattleSetTopInfoForCommandMenuMode_C_SetupInnerImagineInfo) == 0x000001, "Wrong size on BattleSetTopInfoForCommandMenuMode_C_SetupInnerImagineInfo");
static_assert(offsetof(BattleSetTopInfoForCommandMenuMode_C_SetupInnerImagineInfo, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BattleSetTopInfoForCommandMenuMode_C_SetupInnerImagineInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C.ResetSkillInfoSubPalette
// 0x0002 (0x0002 - 0x0000)
struct BattleSetTopInfoForCommandMenuMode_C_ResetSkillInfoSubPalette final
{
public:
	bool                                          bInIsSubPaletteReleased;                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleSetTopInfoForCommandMenuMode_C_ResetSkillInfoSubPalette) == 0x000001, "Wrong alignment on BattleSetTopInfoForCommandMenuMode_C_ResetSkillInfoSubPalette");
static_assert(sizeof(BattleSetTopInfoForCommandMenuMode_C_ResetSkillInfoSubPalette) == 0x000002, "Wrong size on BattleSetTopInfoForCommandMenuMode_C_ResetSkillInfoSubPalette");
static_assert(offsetof(BattleSetTopInfoForCommandMenuMode_C_ResetSkillInfoSubPalette, bInIsSubPaletteReleased) == 0x000000, "Member 'BattleSetTopInfoForCommandMenuMode_C_ResetSkillInfoSubPalette::bInIsSubPaletteReleased' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoForCommandMenuMode_C_ResetSkillInfoSubPalette, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'BattleSetTopInfoForCommandMenuMode_C_ResetSkillInfoSubPalette::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

