#pragma once

 

// Package: BattleSetTopInfoBase

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.OnTopInfoTacticalSkillIconPressed__DelegateSignature
// 0x000C (0x000C - 0x0000)
struct BattleSetTopInfoBase_C_OnTopInfoTacticalSkillIconPressed__DelegateSignature final
{
public:
	ESkillActionPosition                          InTacticalSkillSAP;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_856C[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InSkillId;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InSkillLevel;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleSetTopInfoBase_C_OnTopInfoTacticalSkillIconPressed__DelegateSignature) == 0x000004, "Wrong alignment on BattleSetTopInfoBase_C_OnTopInfoTacticalSkillIconPressed__DelegateSignature");
static_assert(sizeof(BattleSetTopInfoBase_C_OnTopInfoTacticalSkillIconPressed__DelegateSignature) == 0x00000C, "Wrong size on BattleSetTopInfoBase_C_OnTopInfoTacticalSkillIconPressed__DelegateSignature");
static_assert(offsetof(BattleSetTopInfoBase_C_OnTopInfoTacticalSkillIconPressed__DelegateSignature, InTacticalSkillSAP) == 0x000000, "Member 'BattleSetTopInfoBase_C_OnTopInfoTacticalSkillIconPressed__DelegateSignature::InTacticalSkillSAP' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_OnTopInfoTacticalSkillIconPressed__DelegateSignature, InSkillId) == 0x000004, "Member 'BattleSetTopInfoBase_C_OnTopInfoTacticalSkillIconPressed__DelegateSignature::InSkillId' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_OnTopInfoTacticalSkillIconPressed__DelegateSignature, InSkillLevel) == 0x000008, "Member 'BattleSetTopInfoBase_C_OnTopInfoTacticalSkillIconPressed__DelegateSignature::InSkillLevel' has a wrong offset!");

// Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.OnTopInfoBattleImagineIconPressed__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct BattleSetTopInfoBase_C_OnTopInfoBattleImagineIconPressed__DelegateSignature final
{
public:
	ESkillActionPosition                          InBattleImagineSAP;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_856D[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InBattleImagineUniqueId;                           // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleSetTopInfoBase_C_OnTopInfoBattleImagineIconPressed__DelegateSignature) == 0x000008, "Wrong alignment on BattleSetTopInfoBase_C_OnTopInfoBattleImagineIconPressed__DelegateSignature");
static_assert(sizeof(BattleSetTopInfoBase_C_OnTopInfoBattleImagineIconPressed__DelegateSignature) == 0x000018, "Wrong size on BattleSetTopInfoBase_C_OnTopInfoBattleImagineIconPressed__DelegateSignature");
static_assert(offsetof(BattleSetTopInfoBase_C_OnTopInfoBattleImagineIconPressed__DelegateSignature, InBattleImagineSAP) == 0x000000, "Member 'BattleSetTopInfoBase_C_OnTopInfoBattleImagineIconPressed__DelegateSignature::InBattleImagineSAP' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_OnTopInfoBattleImagineIconPressed__DelegateSignature, InBattleImagineUniqueId) == 0x000008, "Member 'BattleSetTopInfoBase_C_OnTopInfoBattleImagineIconPressed__DelegateSignature::InBattleImagineUniqueId' has a wrong offset!");

// Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.OnTopInfoClassAbilityIconPressed__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BattleSetTopInfoBase_C_OnTopInfoClassAbilityIconPressed__DelegateSignature final
{
public:
	int32                                         InSkillSlotId;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InSkillId;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleSetTopInfoBase_C_OnTopInfoClassAbilityIconPressed__DelegateSignature) == 0x000004, "Wrong alignment on BattleSetTopInfoBase_C_OnTopInfoClassAbilityIconPressed__DelegateSignature");
static_assert(sizeof(BattleSetTopInfoBase_C_OnTopInfoClassAbilityIconPressed__DelegateSignature) == 0x000008, "Wrong size on BattleSetTopInfoBase_C_OnTopInfoClassAbilityIconPressed__DelegateSignature");
static_assert(offsetof(BattleSetTopInfoBase_C_OnTopInfoClassAbilityIconPressed__DelegateSignature, InSkillSlotId) == 0x000000, "Member 'BattleSetTopInfoBase_C_OnTopInfoClassAbilityIconPressed__DelegateSignature::InSkillSlotId' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_OnTopInfoClassAbilityIconPressed__DelegateSignature, InSkillId) == 0x000004, "Member 'BattleSetTopInfoBase_C_OnTopInfoClassAbilityIconPressed__DelegateSignature::InSkillId' has a wrong offset!");

// Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.OnTopInfoInnerImagineIconPressed__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BattleSetTopInfoBase_C_OnTopInfoInnerImagineIconPressed__DelegateSignature final
{
public:
	ESBPlayerPassiveImagineSlotType               InInnerImagineSlotType;                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_856E[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InImagineId;                                       // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleSetTopInfoBase_C_OnTopInfoInnerImagineIconPressed__DelegateSignature) == 0x000004, "Wrong alignment on BattleSetTopInfoBase_C_OnTopInfoInnerImagineIconPressed__DelegateSignature");
static_assert(sizeof(BattleSetTopInfoBase_C_OnTopInfoInnerImagineIconPressed__DelegateSignature) == 0x000008, "Wrong size on BattleSetTopInfoBase_C_OnTopInfoInnerImagineIconPressed__DelegateSignature");
static_assert(offsetof(BattleSetTopInfoBase_C_OnTopInfoInnerImagineIconPressed__DelegateSignature, InInnerImagineSlotType) == 0x000000, "Member 'BattleSetTopInfoBase_C_OnTopInfoInnerImagineIconPressed__DelegateSignature::InInnerImagineSlotType' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_OnTopInfoInnerImagineIconPressed__DelegateSignature, InImagineId) == 0x000004, "Member 'BattleSetTopInfoBase_C_OnTopInfoInnerImagineIconPressed__DelegateSignature::InImagineId' has a wrong offset!");

// Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.ExecuteUbergraph_BattleSetTopInfoBase
// 0x0038 (0x0038 - 0x0000)
struct BattleSetTopInfoBase_C_ExecuteUbergraph_BattleSetTopInfoBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillActionPosition                          K2Node_CustomEvent_InTacticalSkillSAP;             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_856F[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InSkillId_1;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InSkillLevel;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillActionPosition                          K2Node_CustomEvent_InBattleImagineSAP;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8570[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_InBattleImagineUniqueId;        // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InSkillSlotId;                  // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InSkillId;                      // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBPlayerPassiveImagineSlotType               K2Node_CustomEvent_InInnerImagineSlotType;         // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8571[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InImagineId;                    // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleSetTopInfoBase_C_ExecuteUbergraph_BattleSetTopInfoBase) == 0x000008, "Wrong alignment on BattleSetTopInfoBase_C_ExecuteUbergraph_BattleSetTopInfoBase");
static_assert(sizeof(BattleSetTopInfoBase_C_ExecuteUbergraph_BattleSetTopInfoBase) == 0x000038, "Wrong size on BattleSetTopInfoBase_C_ExecuteUbergraph_BattleSetTopInfoBase");
static_assert(offsetof(BattleSetTopInfoBase_C_ExecuteUbergraph_BattleSetTopInfoBase, EntryPoint) == 0x000000, "Member 'BattleSetTopInfoBase_C_ExecuteUbergraph_BattleSetTopInfoBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_ExecuteUbergraph_BattleSetTopInfoBase, K2Node_CustomEvent_InTacticalSkillSAP) == 0x000004, "Member 'BattleSetTopInfoBase_C_ExecuteUbergraph_BattleSetTopInfoBase::K2Node_CustomEvent_InTacticalSkillSAP' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_ExecuteUbergraph_BattleSetTopInfoBase, K2Node_CustomEvent_InSkillId_1) == 0x000008, "Member 'BattleSetTopInfoBase_C_ExecuteUbergraph_BattleSetTopInfoBase::K2Node_CustomEvent_InSkillId_1' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_ExecuteUbergraph_BattleSetTopInfoBase, K2Node_CustomEvent_InSkillLevel) == 0x00000C, "Member 'BattleSetTopInfoBase_C_ExecuteUbergraph_BattleSetTopInfoBase::K2Node_CustomEvent_InSkillLevel' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_ExecuteUbergraph_BattleSetTopInfoBase, K2Node_CustomEvent_InBattleImagineSAP) == 0x000010, "Member 'BattleSetTopInfoBase_C_ExecuteUbergraph_BattleSetTopInfoBase::K2Node_CustomEvent_InBattleImagineSAP' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_ExecuteUbergraph_BattleSetTopInfoBase, K2Node_CustomEvent_InBattleImagineUniqueId) == 0x000018, "Member 'BattleSetTopInfoBase_C_ExecuteUbergraph_BattleSetTopInfoBase::K2Node_CustomEvent_InBattleImagineUniqueId' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_ExecuteUbergraph_BattleSetTopInfoBase, K2Node_CustomEvent_InSkillSlotId) == 0x000028, "Member 'BattleSetTopInfoBase_C_ExecuteUbergraph_BattleSetTopInfoBase::K2Node_CustomEvent_InSkillSlotId' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_ExecuteUbergraph_BattleSetTopInfoBase, K2Node_CustomEvent_InSkillId) == 0x00002C, "Member 'BattleSetTopInfoBase_C_ExecuteUbergraph_BattleSetTopInfoBase::K2Node_CustomEvent_InSkillId' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_ExecuteUbergraph_BattleSetTopInfoBase, K2Node_CustomEvent_InInnerImagineSlotType) == 0x000030, "Member 'BattleSetTopInfoBase_C_ExecuteUbergraph_BattleSetTopInfoBase::K2Node_CustomEvent_InInnerImagineSlotType' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_ExecuteUbergraph_BattleSetTopInfoBase, K2Node_CustomEvent_InImagineId) == 0x000034, "Member 'BattleSetTopInfoBase_C_ExecuteUbergraph_BattleSetTopInfoBase::K2Node_CustomEvent_InImagineId' has a wrong offset!");

// Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.OnInnerImagineIconPressed
// 0x0008 (0x0008 - 0x0000)
struct BattleSetTopInfoBase_C_OnInnerImagineIconPressed final
{
public:
	ESBPlayerPassiveImagineSlotType               InInnerImagineSlotType;                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8572[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InImagineId;                                       // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleSetTopInfoBase_C_OnInnerImagineIconPressed) == 0x000004, "Wrong alignment on BattleSetTopInfoBase_C_OnInnerImagineIconPressed");
static_assert(sizeof(BattleSetTopInfoBase_C_OnInnerImagineIconPressed) == 0x000008, "Wrong size on BattleSetTopInfoBase_C_OnInnerImagineIconPressed");
static_assert(offsetof(BattleSetTopInfoBase_C_OnInnerImagineIconPressed, InInnerImagineSlotType) == 0x000000, "Member 'BattleSetTopInfoBase_C_OnInnerImagineIconPressed::InInnerImagineSlotType' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_OnInnerImagineIconPressed, InImagineId) == 0x000004, "Member 'BattleSetTopInfoBase_C_OnInnerImagineIconPressed::InImagineId' has a wrong offset!");

// Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.OnClassAbilityIconPressed
// 0x0008 (0x0008 - 0x0000)
struct BattleSetTopInfoBase_C_OnClassAbilityIconPressed final
{
public:
	int32                                         InSkillSlotId;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InSkillId;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleSetTopInfoBase_C_OnClassAbilityIconPressed) == 0x000004, "Wrong alignment on BattleSetTopInfoBase_C_OnClassAbilityIconPressed");
static_assert(sizeof(BattleSetTopInfoBase_C_OnClassAbilityIconPressed) == 0x000008, "Wrong size on BattleSetTopInfoBase_C_OnClassAbilityIconPressed");
static_assert(offsetof(BattleSetTopInfoBase_C_OnClassAbilityIconPressed, InSkillSlotId) == 0x000000, "Member 'BattleSetTopInfoBase_C_OnClassAbilityIconPressed::InSkillSlotId' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_OnClassAbilityIconPressed, InSkillId) == 0x000004, "Member 'BattleSetTopInfoBase_C_OnClassAbilityIconPressed::InSkillId' has a wrong offset!");

// Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.OnBattleImagineIconPressed
// 0x0018 (0x0018 - 0x0000)
struct BattleSetTopInfoBase_C_OnBattleImagineIconPressed final
{
public:
	ESkillActionPosition                          InBattleImagineSAP;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8573[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InBattleImagineUniqueId;                           // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleSetTopInfoBase_C_OnBattleImagineIconPressed) == 0x000008, "Wrong alignment on BattleSetTopInfoBase_C_OnBattleImagineIconPressed");
static_assert(sizeof(BattleSetTopInfoBase_C_OnBattleImagineIconPressed) == 0x000018, "Wrong size on BattleSetTopInfoBase_C_OnBattleImagineIconPressed");
static_assert(offsetof(BattleSetTopInfoBase_C_OnBattleImagineIconPressed, InBattleImagineSAP) == 0x000000, "Member 'BattleSetTopInfoBase_C_OnBattleImagineIconPressed::InBattleImagineSAP' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_OnBattleImagineIconPressed, InBattleImagineUniqueId) == 0x000008, "Member 'BattleSetTopInfoBase_C_OnBattleImagineIconPressed::InBattleImagineUniqueId' has a wrong offset!");

// Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.OnTacticalSkillIconPressed
// 0x000C (0x000C - 0x0000)
struct BattleSetTopInfoBase_C_OnTacticalSkillIconPressed final
{
public:
	ESkillActionPosition                          InTacticalSkillSAP;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8574[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InSkillId;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InSkillLevel;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BattleSetTopInfoBase_C_OnTacticalSkillIconPressed) == 0x000004, "Wrong alignment on BattleSetTopInfoBase_C_OnTacticalSkillIconPressed");
static_assert(sizeof(BattleSetTopInfoBase_C_OnTacticalSkillIconPressed) == 0x00000C, "Wrong size on BattleSetTopInfoBase_C_OnTacticalSkillIconPressed");
static_assert(offsetof(BattleSetTopInfoBase_C_OnTacticalSkillIconPressed, InTacticalSkillSAP) == 0x000000, "Member 'BattleSetTopInfoBase_C_OnTacticalSkillIconPressed::InTacticalSkillSAP' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_OnTacticalSkillIconPressed, InSkillId) == 0x000004, "Member 'BattleSetTopInfoBase_C_OnTacticalSkillIconPressed::InSkillId' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_OnTacticalSkillIconPressed, InSkillLevel) == 0x000008, "Member 'BattleSetTopInfoBase_C_OnTacticalSkillIconPressed::InSkillLevel' has a wrong offset!");

// Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.SetupInfo
// 0x00A0 (0x00A0 - 0x0000)
struct BattleSetTopInfoBase_C_SetupInfo final
{
public:
	bool                                          Param_bIsStorageMode;                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8575[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalChildCnt;                                     // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ESkillActionPosition InTacticalSkillSAP, int32 InSkillId, int32 InSkillLevel)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(ESkillActionPosition InBattleImagineSAP, const class FString& InBattleImagineUniqueId)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 InSkillSlotId, int32 InSkillId)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(ESBPlayerPassiveImagineSlotType InInnerImagineSlotType, int32 InImagineId)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_1;                   // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       K2Node_DynamicCast_AsCanvas_Panel_Slot;            // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8576[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       K2Node_DynamicCast_AsCanvas_Panel_Slot_1;          // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8577[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBattleSetTopInfoForCommandMenuMode_C*  CallFunc_Create_ReturnValue;                       // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBattleSetTopInfoForStorageMode_C*      CallFunc_Create_ReturnValue_1;                     // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleSetTopInfoBase_C_SetupInfo) == 0x000008, "Wrong alignment on BattleSetTopInfoBase_C_SetupInfo");
static_assert(sizeof(BattleSetTopInfoBase_C_SetupInfo) == 0x0000A0, "Wrong size on BattleSetTopInfoBase_C_SetupInfo");
static_assert(offsetof(BattleSetTopInfoBase_C_SetupInfo, Param_bIsStorageMode) == 0x000000, "Member 'BattleSetTopInfoBase_C_SetupInfo::Param_bIsStorageMode' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_SetupInfo, LocalChildCnt) == 0x000004, "Member 'BattleSetTopInfoBase_C_SetupInfo::LocalChildCnt' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_SetupInfo, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BattleSetTopInfoBase_C_SetupInfo::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_SetupInfo, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'BattleSetTopInfoBase_C_SetupInfo::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_SetupInfo, K2Node_CreateDelegate_OutputDelegate_2) == 0x000028, "Member 'BattleSetTopInfoBase_C_SetupInfo::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_SetupInfo, K2Node_CreateDelegate_OutputDelegate_3) == 0x000038, "Member 'BattleSetTopInfoBase_C_SetupInfo::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_SetupInfo, K2Node_CreateDelegate_OutputDelegate_4) == 0x000048, "Member 'BattleSetTopInfoBase_C_SetupInfo::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_SetupInfo, CallFunc_AddChild_ReturnValue) == 0x000058, "Member 'BattleSetTopInfoBase_C_SetupInfo::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_SetupInfo, CallFunc_AddChild_ReturnValue_1) == 0x000060, "Member 'BattleSetTopInfoBase_C_SetupInfo::CallFunc_AddChild_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_SetupInfo, K2Node_DynamicCast_AsCanvas_Panel_Slot) == 0x000068, "Member 'BattleSetTopInfoBase_C_SetupInfo::K2Node_DynamicCast_AsCanvas_Panel_Slot' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_SetupInfo, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'BattleSetTopInfoBase_C_SetupInfo::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_SetupInfo, K2Node_DynamicCast_AsCanvas_Panel_Slot_1) == 0x000078, "Member 'BattleSetTopInfoBase_C_SetupInfo::K2Node_DynamicCast_AsCanvas_Panel_Slot_1' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_SetupInfo, K2Node_DynamicCast_bSuccess_1) == 0x000080, "Member 'BattleSetTopInfoBase_C_SetupInfo::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_SetupInfo, CallFunc_Create_ReturnValue) == 0x000088, "Member 'BattleSetTopInfoBase_C_SetupInfo::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_SetupInfo, CallFunc_Create_ReturnValue_1) == 0x000090, "Member 'BattleSetTopInfoBase_C_SetupInfo::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_SetupInfo, CallFunc_IsValid_ReturnValue) == 0x000098, "Member 'BattleSetTopInfoBase_C_SetupInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.SetupWeaponInfo
// 0x0002 (0x0002 - 0x0000)
struct BattleSetTopInfoBase_C_SetupWeaponInfo final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleSetTopInfoBase_C_SetupWeaponInfo) == 0x000001, "Wrong alignment on BattleSetTopInfoBase_C_SetupWeaponInfo");
static_assert(sizeof(BattleSetTopInfoBase_C_SetupWeaponInfo) == 0x000002, "Wrong size on BattleSetTopInfoBase_C_SetupWeaponInfo");
static_assert(offsetof(BattleSetTopInfoBase_C_SetupWeaponInfo, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BattleSetTopInfoBase_C_SetupWeaponInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_SetupWeaponInfo, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'BattleSetTopInfoBase_C_SetupWeaponInfo::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.SetupAllSkillInfo
// 0x0002 (0x0002 - 0x0000)
struct BattleSetTopInfoBase_C_SetupAllSkillInfo final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleSetTopInfoBase_C_SetupAllSkillInfo) == 0x000001, "Wrong alignment on BattleSetTopInfoBase_C_SetupAllSkillInfo");
static_assert(sizeof(BattleSetTopInfoBase_C_SetupAllSkillInfo) == 0x000002, "Wrong size on BattleSetTopInfoBase_C_SetupAllSkillInfo");
static_assert(offsetof(BattleSetTopInfoBase_C_SetupAllSkillInfo, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BattleSetTopInfoBase_C_SetupAllSkillInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_SetupAllSkillInfo, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'BattleSetTopInfoBase_C_SetupAllSkillInfo::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.SetupBattleImagineInfo
// 0x0002 (0x0002 - 0x0000)
struct BattleSetTopInfoBase_C_SetupBattleImagineInfo final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleSetTopInfoBase_C_SetupBattleImagineInfo) == 0x000001, "Wrong alignment on BattleSetTopInfoBase_C_SetupBattleImagineInfo");
static_assert(sizeof(BattleSetTopInfoBase_C_SetupBattleImagineInfo) == 0x000002, "Wrong size on BattleSetTopInfoBase_C_SetupBattleImagineInfo");
static_assert(offsetof(BattleSetTopInfoBase_C_SetupBattleImagineInfo, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BattleSetTopInfoBase_C_SetupBattleImagineInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_SetupBattleImagineInfo, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'BattleSetTopInfoBase_C_SetupBattleImagineInfo::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.SetupTacticalSkillInfo
// 0x0002 (0x0002 - 0x0000)
struct BattleSetTopInfoBase_C_SetupTacticalSkillInfo final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleSetTopInfoBase_C_SetupTacticalSkillInfo) == 0x000001, "Wrong alignment on BattleSetTopInfoBase_C_SetupTacticalSkillInfo");
static_assert(sizeof(BattleSetTopInfoBase_C_SetupTacticalSkillInfo) == 0x000002, "Wrong size on BattleSetTopInfoBase_C_SetupTacticalSkillInfo");
static_assert(offsetof(BattleSetTopInfoBase_C_SetupTacticalSkillInfo, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BattleSetTopInfoBase_C_SetupTacticalSkillInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_SetupTacticalSkillInfo, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'BattleSetTopInfoBase_C_SetupTacticalSkillInfo::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.SetupClassAbilityInfo
// 0x0002 (0x0002 - 0x0000)
struct BattleSetTopInfoBase_C_SetupClassAbilityInfo final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleSetTopInfoBase_C_SetupClassAbilityInfo) == 0x000001, "Wrong alignment on BattleSetTopInfoBase_C_SetupClassAbilityInfo");
static_assert(sizeof(BattleSetTopInfoBase_C_SetupClassAbilityInfo) == 0x000002, "Wrong size on BattleSetTopInfoBase_C_SetupClassAbilityInfo");
static_assert(offsetof(BattleSetTopInfoBase_C_SetupClassAbilityInfo, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BattleSetTopInfoBase_C_SetupClassAbilityInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_SetupClassAbilityInfo, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'BattleSetTopInfoBase_C_SetupClassAbilityInfo::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.SetupInnerImagineInfo
// 0x0002 (0x0002 - 0x0000)
struct BattleSetTopInfoBase_C_SetupInnerImagineInfo final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleSetTopInfoBase_C_SetupInnerImagineInfo) == 0x000001, "Wrong alignment on BattleSetTopInfoBase_C_SetupInnerImagineInfo");
static_assert(sizeof(BattleSetTopInfoBase_C_SetupInnerImagineInfo) == 0x000002, "Wrong size on BattleSetTopInfoBase_C_SetupInnerImagineInfo");
static_assert(offsetof(BattleSetTopInfoBase_C_SetupInnerImagineInfo, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BattleSetTopInfoBase_C_SetupInnerImagineInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_SetupInnerImagineInfo, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'BattleSetTopInfoBase_C_SetupInnerImagineInfo::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.SetupBattleCordeInfo
// 0x0008 (0x0008 - 0x0000)
struct BattleSetTopInfoBase_C_SetupBattleCordeInfo final
{
public:
	int32                                         InCordeId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InSetupByCurrentEquip;                             // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InIsStorageMode;                                   // 0x0005(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleSetTopInfoBase_C_SetupBattleCordeInfo) == 0x000004, "Wrong alignment on BattleSetTopInfoBase_C_SetupBattleCordeInfo");
static_assert(sizeof(BattleSetTopInfoBase_C_SetupBattleCordeInfo) == 0x000008, "Wrong size on BattleSetTopInfoBase_C_SetupBattleCordeInfo");
static_assert(offsetof(BattleSetTopInfoBase_C_SetupBattleCordeInfo, InCordeId) == 0x000000, "Member 'BattleSetTopInfoBase_C_SetupBattleCordeInfo::InCordeId' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_SetupBattleCordeInfo, InSetupByCurrentEquip) == 0x000004, "Member 'BattleSetTopInfoBase_C_SetupBattleCordeInfo::InSetupByCurrentEquip' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_SetupBattleCordeInfo, InIsStorageMode) == 0x000005, "Member 'BattleSetTopInfoBase_C_SetupBattleCordeInfo::InIsStorageMode' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_SetupBattleCordeInfo, CallFunc_IsValid_ReturnValue) == 0x000006, "Member 'BattleSetTopInfoBase_C_SetupBattleCordeInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.GetIsWeaponLost
// 0x0003 (0x0003 - 0x0000)
struct BattleSetTopInfoBase_C_GetIsWeaponLost final
{
public:
	bool                                          OutIsWeaponLost;                                   // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetIsWeaponLost_OutIsWeaponLost;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleSetTopInfoBase_C_GetIsWeaponLost) == 0x000001, "Wrong alignment on BattleSetTopInfoBase_C_GetIsWeaponLost");
static_assert(sizeof(BattleSetTopInfoBase_C_GetIsWeaponLost) == 0x000003, "Wrong size on BattleSetTopInfoBase_C_GetIsWeaponLost");
static_assert(offsetof(BattleSetTopInfoBase_C_GetIsWeaponLost, OutIsWeaponLost) == 0x000000, "Member 'BattleSetTopInfoBase_C_GetIsWeaponLost::OutIsWeaponLost' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_GetIsWeaponLost, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'BattleSetTopInfoBase_C_GetIsWeaponLost::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_GetIsWeaponLost, CallFunc_GetIsWeaponLost_OutIsWeaponLost) == 0x000002, "Member 'BattleSetTopInfoBase_C_GetIsWeaponLost::CallFunc_GetIsWeaponLost_OutIsWeaponLost' has a wrong offset!");

// Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.UnbindChildEvents
// 0x0054 (0x0054 - 0x0000)
struct BattleSetTopInfoBase_C_UnbindChildEvents final
{
public:
	TDelegate<void(int32 InSkillSlotId, int32 InSkillId)> K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(ESkillActionPosition InBattleImagineSAP, const class FString& InBattleImagineUniqueId)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(ESkillActionPosition InTacticalSkillSAP, int32 InSkillId, int32 InSkillLevel)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(ESBPlayerPassiveImagineSlotType InInnerImagineSlotType, int32 InImagineId)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleSetTopInfoBase_C_UnbindChildEvents) == 0x000004, "Wrong alignment on BattleSetTopInfoBase_C_UnbindChildEvents");
static_assert(sizeof(BattleSetTopInfoBase_C_UnbindChildEvents) == 0x000054, "Wrong size on BattleSetTopInfoBase_C_UnbindChildEvents");
static_assert(offsetof(BattleSetTopInfoBase_C_UnbindChildEvents, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'BattleSetTopInfoBase_C_UnbindChildEvents::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_UnbindChildEvents, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'BattleSetTopInfoBase_C_UnbindChildEvents::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_UnbindChildEvents, K2Node_CreateDelegate_OutputDelegate_2) == 0x000020, "Member 'BattleSetTopInfoBase_C_UnbindChildEvents::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_UnbindChildEvents, K2Node_CreateDelegate_OutputDelegate_3) == 0x000030, "Member 'BattleSetTopInfoBase_C_UnbindChildEvents::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_UnbindChildEvents, K2Node_CreateDelegate_OutputDelegate_4) == 0x000040, "Member 'BattleSetTopInfoBase_C_UnbindChildEvents::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_UnbindChildEvents, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'BattleSetTopInfoBase_C_UnbindChildEvents::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.ResetSkillInfoSubPalette
// 0x0002 (0x0002 - 0x0000)
struct BattleSetTopInfoBase_C_ResetSkillInfoSubPalette final
{
public:
	bool                                          bInIsSubPaletteReleased;                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BattleSetTopInfoBase_C_ResetSkillInfoSubPalette) == 0x000001, "Wrong alignment on BattleSetTopInfoBase_C_ResetSkillInfoSubPalette");
static_assert(sizeof(BattleSetTopInfoBase_C_ResetSkillInfoSubPalette) == 0x000002, "Wrong size on BattleSetTopInfoBase_C_ResetSkillInfoSubPalette");
static_assert(offsetof(BattleSetTopInfoBase_C_ResetSkillInfoSubPalette, bInIsSubPaletteReleased) == 0x000000, "Member 'BattleSetTopInfoBase_C_ResetSkillInfoSubPalette::bInIsSubPaletteReleased' has a wrong offset!");
static_assert(offsetof(BattleSetTopInfoBase_C_ResetSkillInfoSubPalette, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'BattleSetTopInfoBase_C_ResetSkillInfoSubPalette::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

