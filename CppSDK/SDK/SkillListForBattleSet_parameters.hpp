#pragma once

 

// Package: SkillListForBattleSet

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "E_BattleSetInfoType_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function SkillListForBattleSet.SkillListForBattleSet_C.OnInfoItemSelected__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct SkillListForBattleSet_C_OnInfoItemSelected__DelegateSignature final
{
public:
	class USkillInfoItemForBattleSet_C*           InSelectedInfoItem;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillListForBattleSet_C_OnInfoItemSelected__DelegateSignature) == 0x000008, "Wrong alignment on SkillListForBattleSet_C_OnInfoItemSelected__DelegateSignature");
static_assert(sizeof(SkillListForBattleSet_C_OnInfoItemSelected__DelegateSignature) == 0x000008, "Wrong size on SkillListForBattleSet_C_OnInfoItemSelected__DelegateSignature");
static_assert(offsetof(SkillListForBattleSet_C_OnInfoItemSelected__DelegateSignature, InSelectedInfoItem) == 0x000000, "Member 'SkillListForBattleSet_C_OnInfoItemSelected__DelegateSignature::InSelectedInfoItem' has a wrong offset!");

// Function SkillListForBattleSet.SkillListForBattleSet_C.OnSkillChangeBtnPressed__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct SkillListForBattleSet_C_OnSkillChangeBtnPressed__DelegateSignature final
{
public:
	E_BattleSetInfoType                           InInfoType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_505B[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InSkillId;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillListForBattleSet_C_OnSkillChangeBtnPressed__DelegateSignature) == 0x000004, "Wrong alignment on SkillListForBattleSet_C_OnSkillChangeBtnPressed__DelegateSignature");
static_assert(sizeof(SkillListForBattleSet_C_OnSkillChangeBtnPressed__DelegateSignature) == 0x000008, "Wrong size on SkillListForBattleSet_C_OnSkillChangeBtnPressed__DelegateSignature");
static_assert(offsetof(SkillListForBattleSet_C_OnSkillChangeBtnPressed__DelegateSignature, InInfoType) == 0x000000, "Member 'SkillListForBattleSet_C_OnSkillChangeBtnPressed__DelegateSignature::InInfoType' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_OnSkillChangeBtnPressed__DelegateSignature, InSkillId) == 0x000004, "Member 'SkillListForBattleSet_C_OnSkillChangeBtnPressed__DelegateSignature::InSkillId' has a wrong offset!");

// Function SkillListForBattleSet.SkillListForBattleSet_C.ExecuteUbergraph_SkillListForBattleSet
// 0x0080 (0x0080 - 0x0000)
struct SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBPlayerArtsType                             Temp_byte_Variable;                                // 0x0004(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_505C[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_505D[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_505E[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USkillInfoItemForBattleSet_C*           K2Node_DynamicCast_AsSkill_Info_Item_for_Battle_Set; // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_505F[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5060[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USkillInfoItemForBattleSet_C*           K2Node_CustomEvent_InInfoItem;                     // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class USkillInfoItemForBattleSet_C* InInfoItem)> K2Node_CreateDelegate_OutputDelegate;              // 0x0050(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5061[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSkillId_OutSkillId;                    // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetEquipedActiveArtsAbility_OutIsActiveAbilityEquiped; // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBSkillAbilityType                           CallFunc_GetEquipedActiveArtsAbility_OutEquipedActiveAbilityType; // 0x006B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetEquipedActiveArtsAbility_OutEquipedActiveAbilitySkillId; // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetEquipedArtsId_ReturnValue;             // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBPlayerArtsType                             Temp_byte_Variable_1;                              // 0x007A(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBPlayerArtsType                             K2Node_Select_Default_1;                           // 0x007B(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetEquipedArtsId_ReturnValue_1;           // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet) == 0x000008, "Wrong alignment on SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet");
static_assert(sizeof(SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet) == 0x000080, "Wrong size on SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet");
static_assert(offsetof(SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet, EntryPoint) == 0x000000, "Member 'SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet::EntryPoint' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet, Temp_byte_Variable) == 0x000004, "Member 'SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet, Temp_int_Variable) == 0x000008, "Member 'SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet, Temp_int_Variable_1) == 0x00000C, "Member 'SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet, CallFunc_GetChildAt_ReturnValue) == 0x000018, "Member 'SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet, CallFunc_IsValid_ReturnValue_1) == 0x000020, "Member 'SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet, K2Node_DynamicCast_AsSkill_Info_Item_for_Battle_Set) == 0x000028, "Member 'SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet::K2Node_DynamicCast_AsSkill_Info_Item_for_Battle_Set' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet, CallFunc_GetChildrenCount_ReturnValue) == 0x000038, "Member 'SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet, CallFunc_Subtract_IntInt_ReturnValue) == 0x00003C, "Member 'SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000040, "Member 'SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet, K2Node_CustomEvent_InInfoItem) == 0x000048, "Member 'SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet::K2Node_CustomEvent_InInfoItem' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet, K2Node_CreateDelegate_OutputDelegate) == 0x000050, "Member 'SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet, K2Node_SwitchEnum_CmpSuccess) == 0x000060, "Member 'SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet, CallFunc_GetSkillId_OutSkillId) == 0x000064, "Member 'SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet::CallFunc_GetSkillId_OutSkillId' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet, Temp_bool_Variable) == 0x000068, "Member 'SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000069, "Member 'SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet, CallFunc_GetEquipedActiveArtsAbility_OutIsActiveAbilityEquiped) == 0x00006A, "Member 'SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet::CallFunc_GetEquipedActiveArtsAbility_OutIsActiveAbilityEquiped' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet, CallFunc_GetEquipedActiveArtsAbility_OutEquipedActiveAbilityType) == 0x00006B, "Member 'SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet::CallFunc_GetEquipedActiveArtsAbility_OutEquipedActiveAbilityType' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet, CallFunc_GetEquipedActiveArtsAbility_OutEquipedActiveAbilitySkillId) == 0x00006C, "Member 'SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet::CallFunc_GetEquipedActiveArtsAbility_OutEquipedActiveAbilitySkillId' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet, CallFunc_GetEquipedArtsId_ReturnValue) == 0x000070, "Member 'SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet::CallFunc_GetEquipedArtsId_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet, K2Node_Select_Default) == 0x000074, "Member 'SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet, CallFunc_IsValid_ReturnValue_2) == 0x000078, "Member 'SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x000079, "Member 'SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet, Temp_byte_Variable_1) == 0x00007A, "Member 'SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet, K2Node_Select_Default_1) == 0x00007B, "Member 'SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet, CallFunc_GetEquipedArtsId_ReturnValue_1) == 0x00007C, "Member 'SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet::CallFunc_GetEquipedArtsId_ReturnValue_1' has a wrong offset!");

// Function SkillListForBattleSet.SkillListForBattleSet_C.OnSkillInfoItemPressed
// 0x0008 (0x0008 - 0x0000)
struct SkillListForBattleSet_C_OnSkillInfoItemPressed final
{
public:
	class USkillInfoItemForBattleSet_C*           InInfoItem;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillListForBattleSet_C_OnSkillInfoItemPressed) == 0x000008, "Wrong alignment on SkillListForBattleSet_C_OnSkillInfoItemPressed");
static_assert(sizeof(SkillListForBattleSet_C_OnSkillInfoItemPressed) == 0x000008, "Wrong size on SkillListForBattleSet_C_OnSkillInfoItemPressed");
static_assert(offsetof(SkillListForBattleSet_C_OnSkillInfoItemPressed, InInfoItem) == 0x000000, "Member 'SkillListForBattleSet_C_OnSkillInfoItemPressed::InInfoItem' has a wrong offset!");

// Function SkillListForBattleSet.SkillListForBattleSet_C.InitList
// 0x0790 (0x0790 - 0x0000)
struct SkillListForBattleSet_C_InitList final
{
public:
	E_BattleSetInfoType                           InBattleSetInfoType;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  InSkillClassType;                                  // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5062[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InSkillSlotId;                                     // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InClassAbilityTypeId;                              // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalListItemCnt;                                  // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalIsClassAbility;                               // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5063[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LocalClassName;                                    // 0x0018(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   LocalHeadingTextB;                                 // 0x0028(0x0018)(Edit, BlueprintVisible)
	class FText                                   LocalNoSkillMsgText;                               // 0x0040(0x0018)(Edit, BlueprintVisible)
	class FText                                   LocalSkillTypeText;                                // 0x0058(0x0018)(Edit, BlueprintVisible)
	int32                                         LocalLoopId;                                       // 0x0070(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5064[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USkillInfoItemForBattleSet_C*           LocalInfoItem;                                     // 0x0078(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalColumn;                                       // 0x0080(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalRow;                                          // 0x0084(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalColumnNumMax;                                 // 0x0088(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalListCapacity;                                 // 0x008C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0093(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5065[0x3];                                     // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBPlayerArtsType                             Temp_byte_Variable_2;                              // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5066[0x3];                                     // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBPlayerArtsType                             Temp_byte_Variable_3;                              // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5067[0x3];                                     // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USkillInfoItemForBattleSet_C*           CallFunc_Create_ReturnValue;                       // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5068[0x3];                                     // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_3;                               // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5069[0x3];                                     // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_5;                               // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_6;                               // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_7;                               // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_506A[0x3];                                     // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_8;                               // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_9;                               // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	E_BattleSetInfoType                           Temp_byte_Variable_4;                              // 0x00E5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_506B[0x2];                                     // 0x00E6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerPassiveSkillData              CallFunc_Array_Get_Item;                           // 0x00E8(0x00B8)()
	struct FSBPlayerSkillData                     CallFunc_Array_Get_Item_1;                         // 0x01A0(0x0180)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0320(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0324(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0328(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x032C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_506C[0x3];                                     // 0x032D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_10;                              // 0x0330(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_506D[0x4];                                     // 0x0334(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBPlayerPassiveSkillData>      CallFunc_GetClassAbilityDatas_OutDataArray;        // 0x0338(0x0010)(ReferenceParm)
	TArray<struct FSBPlayerSkillData>             CallFunc_GetTacticalSkillDatas_OutDataArray;       // 0x0348(0x0010)(ReferenceParm)
	TDelegate<void(class USkillInfoItemForBattleSet_C* InInfoItem)> K2Node_CreateDelegate_OutputDelegate;              // 0x0358(0x0010)(ZeroConstructor, NoDestructor)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0368(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0380(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x03C0(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x03D8(0x0010)(ReferenceParm)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x03E8(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0428(0x0010)(ReferenceParm)
	class FString                                 CallFunc_GetClassNameText_ReturnValue;             // 0x0438(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_11;                              // 0x0448(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_506E[0x4];                                     // 0x044C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0450(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0460(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_506F[0x7];                                     // 0x0461(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0468(0x0018)()
	int32                                         Temp_int_Variable_12;                              // 0x0480(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5070[0x4];                                     // 0x0484(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0488(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0498(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x04A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x04B8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x04D0(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x04E8(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0500(0x0018)()
	ESBPlayerArtsType                             Temp_byte_Variable_5;                              // 0x0518(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5071[0x3];                                     // 0x0519(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_1;                           // 0x051C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0520(0x0040)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_3;           // 0x0560(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_2;                          // 0x0570(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x0580(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_4;           // 0x0598(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x05A8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x05C0(0x0040)(HasGetValueTypeHash)
	class FText                                   Temp_text_Variable;                                // 0x0600(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_3;                          // 0x0618(0x0010)(ReferenceParm)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_5;           // 0x0628(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_6;           // 0x0638(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_7;          // 0x0648(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_8;          // 0x0660(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_2;                     // 0x0678(0x0018)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0690(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0691(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5072[0x2];                                     // 0x0692(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_13;                              // 0x0694(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0698(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBPlayerArtsType                             Temp_byte_Variable_6;                              // 0x0699(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5073[0x6];                                     // 0x069A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_7;           // 0x06A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_9;          // 0x06B0(0x0018)()
	class FText                                   K2Node_Select_Default_3;                           // 0x06C8(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_3;                     // 0x06E0(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x06F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0708(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_10;         // 0x0718(0x0018)()
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0730(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5074[0x7];                                     // 0x0731(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable_1;                              // 0x0738(0x0018)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0750(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0751(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0752(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBPlayerArtsType                             Temp_byte_Variable_7;                              // 0x0753(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0754(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5075[0x3];                                     // 0x0755(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default_4;                           // 0x0758(0x0018)()
	ESBPlayerArtsType                             K2Node_Select_Default_5;                           // 0x0770(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0771(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5076[0x2];                                     // 0x0772(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0774(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0778(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_6;                           // 0x077C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_7;                           // 0x0780(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0784(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGridSlot*                              CallFunc_AddChildToGrid_ReturnValue;               // 0x0788(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillListForBattleSet_C_InitList) == 0x000008, "Wrong alignment on SkillListForBattleSet_C_InitList");
static_assert(sizeof(SkillListForBattleSet_C_InitList) == 0x000790, "Wrong size on SkillListForBattleSet_C_InitList");
static_assert(offsetof(SkillListForBattleSet_C_InitList, InBattleSetInfoType) == 0x000000, "Member 'SkillListForBattleSet_C_InitList::InBattleSetInfoType' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, InSkillClassType) == 0x000001, "Member 'SkillListForBattleSet_C_InitList::InSkillClassType' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, InSkillSlotId) == 0x000004, "Member 'SkillListForBattleSet_C_InitList::InSkillSlotId' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, InClassAbilityTypeId) == 0x000008, "Member 'SkillListForBattleSet_C_InitList::InClassAbilityTypeId' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, LocalListItemCnt) == 0x00000C, "Member 'SkillListForBattleSet_C_InitList::LocalListItemCnt' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, LocalIsClassAbility) == 0x000010, "Member 'SkillListForBattleSet_C_InitList::LocalIsClassAbility' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, LocalClassName) == 0x000018, "Member 'SkillListForBattleSet_C_InitList::LocalClassName' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, LocalHeadingTextB) == 0x000028, "Member 'SkillListForBattleSet_C_InitList::LocalHeadingTextB' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, LocalNoSkillMsgText) == 0x000040, "Member 'SkillListForBattleSet_C_InitList::LocalNoSkillMsgText' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, LocalSkillTypeText) == 0x000058, "Member 'SkillListForBattleSet_C_InitList::LocalSkillTypeText' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, LocalLoopId) == 0x000070, "Member 'SkillListForBattleSet_C_InitList::LocalLoopId' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, LocalInfoItem) == 0x000078, "Member 'SkillListForBattleSet_C_InitList::LocalInfoItem' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, LocalColumn) == 0x000080, "Member 'SkillListForBattleSet_C_InitList::LocalColumn' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, LocalRow) == 0x000084, "Member 'SkillListForBattleSet_C_InitList::LocalRow' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, LocalColumnNumMax) == 0x000088, "Member 'SkillListForBattleSet_C_InitList::LocalColumnNumMax' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, LocalListCapacity) == 0x00008C, "Member 'SkillListForBattleSet_C_InitList::LocalListCapacity' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, Temp_bool_Variable) == 0x000090, "Member 'SkillListForBattleSet_C_InitList::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, Temp_byte_Variable) == 0x000091, "Member 'SkillListForBattleSet_C_InitList::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, Temp_byte_Variable_1) == 0x000092, "Member 'SkillListForBattleSet_C_InitList::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, Temp_bool_Variable_1) == 0x000093, "Member 'SkillListForBattleSet_C_InitList::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, Temp_int_Variable) == 0x000094, "Member 'SkillListForBattleSet_C_InitList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, Temp_bool_Variable_2) == 0x000098, "Member 'SkillListForBattleSet_C_InitList::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, Temp_int_Variable_1) == 0x00009C, "Member 'SkillListForBattleSet_C_InitList::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, Temp_int_Variable_2) == 0x0000A0, "Member 'SkillListForBattleSet_C_InitList::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, Temp_byte_Variable_2) == 0x0000A4, "Member 'SkillListForBattleSet_C_InitList::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_Add_IntInt_ReturnValue) == 0x0000A8, "Member 'SkillListForBattleSet_C_InitList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, Temp_byte_Variable_3) == 0x0000AC, "Member 'SkillListForBattleSet_C_InitList::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_Create_ReturnValue) == 0x0000B0, "Member 'SkillListForBattleSet_C_InitList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, Temp_bool_Variable_3) == 0x0000B8, "Member 'SkillListForBattleSet_C_InitList::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, Temp_int_Variable_3) == 0x0000BC, "Member 'SkillListForBattleSet_C_InitList::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, Temp_int_Variable_4) == 0x0000C0, "Member 'SkillListForBattleSet_C_InitList::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000C4, "Member 'SkillListForBattleSet_C_InitList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, Temp_int_Variable_5) == 0x0000C8, "Member 'SkillListForBattleSet_C_InitList::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, Temp_int_Variable_6) == 0x0000CC, "Member 'SkillListForBattleSet_C_InitList::Temp_int_Variable_6' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, Temp_int_Variable_7) == 0x0000D0, "Member 'SkillListForBattleSet_C_InitList::Temp_int_Variable_7' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x0000D4, "Member 'SkillListForBattleSet_C_InitList::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000D8, "Member 'SkillListForBattleSet_C_InitList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, Temp_int_Variable_8) == 0x0000DC, "Member 'SkillListForBattleSet_C_InitList::Temp_int_Variable_8' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, Temp_int_Variable_9) == 0x0000E0, "Member 'SkillListForBattleSet_C_InitList::Temp_int_Variable_9' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000E4, "Member 'SkillListForBattleSet_C_InitList::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, Temp_byte_Variable_4) == 0x0000E5, "Member 'SkillListForBattleSet_C_InitList::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_Array_Get_Item) == 0x0000E8, "Member 'SkillListForBattleSet_C_InitList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_Array_Get_Item_1) == 0x0001A0, "Member 'SkillListForBattleSet_C_InitList::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_Array_Length_ReturnValue) == 0x000320, "Member 'SkillListForBattleSet_C_InitList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, K2Node_Select_Default) == 0x000324, "Member 'SkillListForBattleSet_C_InitList::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_Array_Length_ReturnValue_1) == 0x000328, "Member 'SkillListForBattleSet_C_InitList::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_Greater_IntInt_ReturnValue) == 0x00032C, "Member 'SkillListForBattleSet_C_InitList::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, Temp_int_Variable_10) == 0x000330, "Member 'SkillListForBattleSet_C_InitList::Temp_int_Variable_10' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_GetClassAbilityDatas_OutDataArray) == 0x000338, "Member 'SkillListForBattleSet_C_InitList::CallFunc_GetClassAbilityDatas_OutDataArray' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_GetTacticalSkillDatas_OutDataArray) == 0x000348, "Member 'SkillListForBattleSet_C_InitList::CallFunc_GetTacticalSkillDatas_OutDataArray' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, K2Node_CreateDelegate_OutputDelegate) == 0x000358, "Member 'SkillListForBattleSet_C_InitList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_Conv_StringToText_ReturnValue) == 0x000368, "Member 'SkillListForBattleSet_C_InitList::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, K2Node_MakeStruct_FormatArgumentData) == 0x000380, "Member 'SkillListForBattleSet_C_InitList::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0003C0, "Member 'SkillListForBattleSet_C_InitList::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, K2Node_MakeArray_Array) == 0x0003D8, "Member 'SkillListForBattleSet_C_InitList::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, K2Node_MakeStruct_FormatArgumentData_1) == 0x0003E8, "Member 'SkillListForBattleSet_C_InitList::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, K2Node_MakeArray_Array_1) == 0x000428, "Member 'SkillListForBattleSet_C_InitList::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_GetClassNameText_ReturnValue) == 0x000438, "Member 'SkillListForBattleSet_C_InitList::CallFunc_GetClassNameText_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, Temp_int_Variable_11) == 0x000448, "Member 'SkillListForBattleSet_C_InitList::Temp_int_Variable_11' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_GetTextFromAsset_ReturnValue) == 0x000450, "Member 'SkillListForBattleSet_C_InitList::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_IsValid_ReturnValue) == 0x000460, "Member 'SkillListForBattleSet_C_InitList::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000468, "Member 'SkillListForBattleSet_C_InitList::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, Temp_int_Variable_12) == 0x000480, "Member 'SkillListForBattleSet_C_InitList::Temp_int_Variable_12' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_Conv_TextToString_ReturnValue) == 0x000488, "Member 'SkillListForBattleSet_C_InitList::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000498, "Member 'SkillListForBattleSet_C_InitList::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x0004A8, "Member 'SkillListForBattleSet_C_InitList::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_Conv_StringToText_ReturnValue_3) == 0x0004B8, "Member 'SkillListForBattleSet_C_InitList::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_Conv_StringToText_ReturnValue_4) == 0x0004D0, "Member 'SkillListForBattleSet_C_InitList::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_Format_ReturnValue) == 0x0004E8, "Member 'SkillListForBattleSet_C_InitList::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_Format_ReturnValue_1) == 0x000500, "Member 'SkillListForBattleSet_C_InitList::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, Temp_byte_Variable_5) == 0x000518, "Member 'SkillListForBattleSet_C_InitList::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, K2Node_Select_Default_1) == 0x00051C, "Member 'SkillListForBattleSet_C_InitList::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, K2Node_MakeStruct_FormatArgumentData_2) == 0x000520, "Member 'SkillListForBattleSet_C_InitList::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_GetTextFromAsset_ReturnValue_3) == 0x000560, "Member 'SkillListForBattleSet_C_InitList::CallFunc_GetTextFromAsset_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, K2Node_MakeArray_Array_2) == 0x000570, "Member 'SkillListForBattleSet_C_InitList::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_Conv_StringToText_ReturnValue_5) == 0x000580, "Member 'SkillListForBattleSet_C_InitList::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_GetTextFromAsset_ReturnValue_4) == 0x000598, "Member 'SkillListForBattleSet_C_InitList::CallFunc_GetTextFromAsset_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_Conv_StringToText_ReturnValue_6) == 0x0005A8, "Member 'SkillListForBattleSet_C_InitList::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, K2Node_MakeStruct_FormatArgumentData_3) == 0x0005C0, "Member 'SkillListForBattleSet_C_InitList::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, Temp_text_Variable) == 0x000600, "Member 'SkillListForBattleSet_C_InitList::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, K2Node_MakeArray_Array_3) == 0x000618, "Member 'SkillListForBattleSet_C_InitList::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_GetTextFromAsset_ReturnValue_5) == 0x000628, "Member 'SkillListForBattleSet_C_InitList::CallFunc_GetTextFromAsset_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_GetTextFromAsset_ReturnValue_6) == 0x000638, "Member 'SkillListForBattleSet_C_InitList::CallFunc_GetTextFromAsset_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_Conv_StringToText_ReturnValue_7) == 0x000648, "Member 'SkillListForBattleSet_C_InitList::CallFunc_Conv_StringToText_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_Conv_StringToText_ReturnValue_8) == 0x000660, "Member 'SkillListForBattleSet_C_InitList::CallFunc_Conv_StringToText_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_Format_ReturnValue_2) == 0x000678, "Member 'SkillListForBattleSet_C_InitList::CallFunc_Format_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000690, "Member 'SkillListForBattleSet_C_InitList::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, K2Node_Select_Default_2) == 0x000691, "Member 'SkillListForBattleSet_C_InitList::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, Temp_int_Variable_13) == 0x000694, "Member 'SkillListForBattleSet_C_InitList::Temp_int_Variable_13' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_IsValid_ReturnValue_1) == 0x000698, "Member 'SkillListForBattleSet_C_InitList::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, Temp_byte_Variable_6) == 0x000699, "Member 'SkillListForBattleSet_C_InitList::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_GetTextFromAsset_ReturnValue_7) == 0x0006A0, "Member 'SkillListForBattleSet_C_InitList::CallFunc_GetTextFromAsset_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_Conv_StringToText_ReturnValue_9) == 0x0006B0, "Member 'SkillListForBattleSet_C_InitList::CallFunc_Conv_StringToText_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, K2Node_Select_Default_3) == 0x0006C8, "Member 'SkillListForBattleSet_C_InitList::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_Format_ReturnValue_3) == 0x0006E0, "Member 'SkillListForBattleSet_C_InitList::CallFunc_Format_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_Conv_TextToString_ReturnValue_1) == 0x0006F8, "Member 'SkillListForBattleSet_C_InitList::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_Concat_StrStr_ReturnValue) == 0x000708, "Member 'SkillListForBattleSet_C_InitList::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_Conv_StringToText_ReturnValue_10) == 0x000718, "Member 'SkillListForBattleSet_C_InitList::CallFunc_Conv_StringToText_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000730, "Member 'SkillListForBattleSet_C_InitList::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, Temp_text_Variable_1) == 0x000738, "Member 'SkillListForBattleSet_C_InitList::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, K2Node_SwitchEnum_CmpSuccess) == 0x000750, "Member 'SkillListForBattleSet_C_InitList::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, K2Node_SwitchEnum_CmpSuccess_1) == 0x000751, "Member 'SkillListForBattleSet_C_InitList::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_IsValid_ReturnValue_2) == 0x000752, "Member 'SkillListForBattleSet_C_InitList::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, Temp_byte_Variable_7) == 0x000753, "Member 'SkillListForBattleSet_C_InitList::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000754, "Member 'SkillListForBattleSet_C_InitList::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, K2Node_Select_Default_4) == 0x000758, "Member 'SkillListForBattleSet_C_InitList::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, K2Node_Select_Default_5) == 0x000770, "Member 'SkillListForBattleSet_C_InitList::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000771, "Member 'SkillListForBattleSet_C_InitList::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_Percent_IntInt_ReturnValue) == 0x000774, "Member 'SkillListForBattleSet_C_InitList::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_Divide_IntInt_ReturnValue) == 0x000778, "Member 'SkillListForBattleSet_C_InitList::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, K2Node_Select_Default_6) == 0x00077C, "Member 'SkillListForBattleSet_C_InitList::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, K2Node_Select_Default_7) == 0x000780, "Member 'SkillListForBattleSet_C_InitList::K2Node_Select_Default_7' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_Subtract_IntInt_ReturnValue) == 0x000784, "Member 'SkillListForBattleSet_C_InitList::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_InitList, CallFunc_AddChildToGrid_ReturnValue) == 0x000788, "Member 'SkillListForBattleSet_C_InitList::CallFunc_AddChildToGrid_ReturnValue' has a wrong offset!");

// Function SkillListForBattleSet.SkillListForBattleSet_C.UpdateList
// 0x0330 (0x0330 - 0x0000)
struct SkillListForBattleSet_C_UpdateList final
{
public:
	struct FSBSkillDataMasterData                 LocalSkillMasterData;                              // 0x0000(0x0058)(Edit, BlueprintVisible)
	class UWidget*                                LocalChild;                                        // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalIsClassAbility;                               // 0x0060(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5077[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalLoopId;                                       // 0x0064(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalListCapacity;                                 // 0x0068(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_BattleSetInfoType                           Temp_byte_Variable;                                // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5078[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_3;                               // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBPlayerPassiveSkillData>      CallFunc_GetClassAbilityDatas_OutDataArray;        // 0x0088(0x0010)(ReferenceParm)
	TArray<struct FSBPlayerSkillData>             CallFunc_GetTacticalSkillDatas_OutDataArray;       // 0x0098(0x0010)(ReferenceParm)
	int32                                         Temp_int_Variable_6;                               // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5079[0x2];                                     // 0x00AE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_507A[0x4];                                     // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_507B[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerPassiveSkillData              CallFunc_Array_Get_Item;                           // 0x00C8(0x00B8)()
	int32                                         Temp_int_Variable_7;                               // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_507C[0x4];                                     // 0x0184(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerSkillData                     CallFunc_Array_Get_Item_1;                         // 0x0188(0x0180)()
	int32                                         K2Node_Select_Default;                             // 0x0308(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x030C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0310(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0314(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_507D[0x3];                                     // 0x0315(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USkillInfoItemForBattleSet_C*           K2Node_DynamicCast_AsSkill_Info_Item_for_Battle_Set; // 0x0318(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0320(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_507E[0x3];                                     // 0x0321(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0324(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0328(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillListForBattleSet_C_UpdateList) == 0x000008, "Wrong alignment on SkillListForBattleSet_C_UpdateList");
static_assert(sizeof(SkillListForBattleSet_C_UpdateList) == 0x000330, "Wrong size on SkillListForBattleSet_C_UpdateList");
static_assert(offsetof(SkillListForBattleSet_C_UpdateList, LocalSkillMasterData) == 0x000000, "Member 'SkillListForBattleSet_C_UpdateList::LocalSkillMasterData' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_UpdateList, LocalChild) == 0x000058, "Member 'SkillListForBattleSet_C_UpdateList::LocalChild' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_UpdateList, LocalIsClassAbility) == 0x000060, "Member 'SkillListForBattleSet_C_UpdateList::LocalIsClassAbility' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_UpdateList, LocalLoopId) == 0x000064, "Member 'SkillListForBattleSet_C_UpdateList::LocalLoopId' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_UpdateList, LocalListCapacity) == 0x000068, "Member 'SkillListForBattleSet_C_UpdateList::LocalListCapacity' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_UpdateList, Temp_int_Variable) == 0x00006C, "Member 'SkillListForBattleSet_C_UpdateList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_UpdateList, Temp_int_Variable_1) == 0x000070, "Member 'SkillListForBattleSet_C_UpdateList::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_UpdateList, Temp_int_Variable_2) == 0x000074, "Member 'SkillListForBattleSet_C_UpdateList::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_UpdateList, Temp_byte_Variable) == 0x000078, "Member 'SkillListForBattleSet_C_UpdateList::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_UpdateList, Temp_int_Variable_3) == 0x00007C, "Member 'SkillListForBattleSet_C_UpdateList::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_UpdateList, Temp_int_Variable_4) == 0x000080, "Member 'SkillListForBattleSet_C_UpdateList::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_UpdateList, Temp_int_Variable_5) == 0x000084, "Member 'SkillListForBattleSet_C_UpdateList::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_UpdateList, CallFunc_GetClassAbilityDatas_OutDataArray) == 0x000088, "Member 'SkillListForBattleSet_C_UpdateList::CallFunc_GetClassAbilityDatas_OutDataArray' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_UpdateList, CallFunc_GetTacticalSkillDatas_OutDataArray) == 0x000098, "Member 'SkillListForBattleSet_C_UpdateList::CallFunc_GetTacticalSkillDatas_OutDataArray' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_UpdateList, Temp_int_Variable_6) == 0x0000A8, "Member 'SkillListForBattleSet_C_UpdateList::Temp_int_Variable_6' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_UpdateList, CallFunc_IsValid_ReturnValue) == 0x0000AC, "Member 'SkillListForBattleSet_C_UpdateList::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_UpdateList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000AD, "Member 'SkillListForBattleSet_C_UpdateList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_UpdateList, CallFunc_Add_IntInt_ReturnValue) == 0x0000B0, "Member 'SkillListForBattleSet_C_UpdateList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_UpdateList, CallFunc_GetChildAt_ReturnValue) == 0x0000B8, "Member 'SkillListForBattleSet_C_UpdateList::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_UpdateList, CallFunc_IsValid_ReturnValue_1) == 0x0000C0, "Member 'SkillListForBattleSet_C_UpdateList::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_UpdateList, CallFunc_Array_Get_Item) == 0x0000C8, "Member 'SkillListForBattleSet_C_UpdateList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_UpdateList, Temp_int_Variable_7) == 0x000180, "Member 'SkillListForBattleSet_C_UpdateList::Temp_int_Variable_7' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_UpdateList, CallFunc_Array_Get_Item_1) == 0x000188, "Member 'SkillListForBattleSet_C_UpdateList::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_UpdateList, K2Node_Select_Default) == 0x000308, "Member 'SkillListForBattleSet_C_UpdateList::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_UpdateList, CallFunc_Array_Length_ReturnValue) == 0x00030C, "Member 'SkillListForBattleSet_C_UpdateList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_UpdateList, CallFunc_Array_Length_ReturnValue_1) == 0x000310, "Member 'SkillListForBattleSet_C_UpdateList::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_UpdateList, CallFunc_Greater_IntInt_ReturnValue) == 0x000314, "Member 'SkillListForBattleSet_C_UpdateList::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_UpdateList, K2Node_DynamicCast_AsSkill_Info_Item_for_Battle_Set) == 0x000318, "Member 'SkillListForBattleSet_C_UpdateList::K2Node_DynamicCast_AsSkill_Info_Item_for_Battle_Set' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_UpdateList, K2Node_DynamicCast_bSuccess) == 0x000320, "Member 'SkillListForBattleSet_C_UpdateList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_UpdateList, CallFunc_Subtract_IntInt_ReturnValue) == 0x000324, "Member 'SkillListForBattleSet_C_UpdateList::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_UpdateList, K2Node_SwitchEnum_CmpSuccess) == 0x000328, "Member 'SkillListForBattleSet_C_UpdateList::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function SkillListForBattleSet.SkillListForBattleSet_C.PlayListInAnimForward
// 0x0010 (0x0010 - 0x0000)
struct SkillListForBattleSet_C_PlayListInAnimForward final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillListForBattleSet_C_PlayListInAnimForward) == 0x000008, "Wrong alignment on SkillListForBattleSet_C_PlayListInAnimForward");
static_assert(sizeof(SkillListForBattleSet_C_PlayListInAnimForward) == 0x000010, "Wrong size on SkillListForBattleSet_C_PlayListInAnimForward");
static_assert(offsetof(SkillListForBattleSet_C_PlayListInAnimForward, CallFunc_PlayAnimationForward_ReturnValue) == 0x000000, "Member 'SkillListForBattleSet_C_PlayListInAnimForward::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_PlayListInAnimForward, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'SkillListForBattleSet_C_PlayListInAnimForward::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function SkillListForBattleSet.SkillListForBattleSet_C.PlayListInAnimReverse
// 0x0010 (0x0010 - 0x0000)
struct SkillListForBattleSet_C_PlayListInAnimReverse final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillListForBattleSet_C_PlayListInAnimReverse) == 0x000008, "Wrong alignment on SkillListForBattleSet_C_PlayListInAnimReverse");
static_assert(sizeof(SkillListForBattleSet_C_PlayListInAnimReverse) == 0x000010, "Wrong size on SkillListForBattleSet_C_PlayListInAnimReverse");
static_assert(offsetof(SkillListForBattleSet_C_PlayListInAnimReverse, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000000, "Member 'SkillListForBattleSet_C_PlayListInAnimReverse::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_PlayListInAnimReverse, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'SkillListForBattleSet_C_PlayListInAnimReverse::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function SkillListForBattleSet.SkillListForBattleSet_C.HideInfoItemAll
// 0x0020 (0x0020 - 0x0000)
struct SkillListForBattleSet_C_HideInfoItemAll final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_507F[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillListForBattleSet_C_HideInfoItemAll) == 0x000008, "Wrong alignment on SkillListForBattleSet_C_HideInfoItemAll");
static_assert(sizeof(SkillListForBattleSet_C_HideInfoItemAll) == 0x000020, "Wrong size on SkillListForBattleSet_C_HideInfoItemAll");
static_assert(offsetof(SkillListForBattleSet_C_HideInfoItemAll, Temp_int_Variable) == 0x000000, "Member 'SkillListForBattleSet_C_HideInfoItemAll::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_HideInfoItemAll, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'SkillListForBattleSet_C_HideInfoItemAll::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_HideInfoItemAll, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'SkillListForBattleSet_C_HideInfoItemAll::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_HideInfoItemAll, CallFunc_GetChildrenCount_ReturnValue) == 0x000010, "Member 'SkillListForBattleSet_C_HideInfoItemAll::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_HideInfoItemAll, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'SkillListForBattleSet_C_HideInfoItemAll::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_HideInfoItemAll, CallFunc_Subtract_IntInt_ReturnValue) == 0x000018, "Member 'SkillListForBattleSet_C_HideInfoItemAll::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_HideInfoItemAll, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00001C, "Member 'SkillListForBattleSet_C_HideInfoItemAll::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_HideInfoItemAll, CallFunc_IsValid_ReturnValue_1) == 0x00001D, "Member 'SkillListForBattleSet_C_HideInfoItemAll::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function SkillListForBattleSet.SkillListForBattleSet_C.ResetSelectedInfoItemAll
// 0x0030 (0x0030 - 0x0000)
struct SkillListForBattleSet_C_ResetSelectedInfoItemAll final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5080[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5081[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USkillInfoItemForBattleSet_C*           K2Node_DynamicCast_AsSkill_Info_Item_for_Battle_Set; // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillListForBattleSet_C_ResetSelectedInfoItemAll) == 0x000008, "Wrong alignment on SkillListForBattleSet_C_ResetSelectedInfoItemAll");
static_assert(sizeof(SkillListForBattleSet_C_ResetSelectedInfoItemAll) == 0x000030, "Wrong size on SkillListForBattleSet_C_ResetSelectedInfoItemAll");
static_assert(offsetof(SkillListForBattleSet_C_ResetSelectedInfoItemAll, Temp_int_Variable) == 0x000000, "Member 'SkillListForBattleSet_C_ResetSelectedInfoItemAll::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_ResetSelectedInfoItemAll, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'SkillListForBattleSet_C_ResetSelectedInfoItemAll::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_ResetSelectedInfoItemAll, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'SkillListForBattleSet_C_ResetSelectedInfoItemAll::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_ResetSelectedInfoItemAll, CallFunc_GetChildrenCount_ReturnValue) == 0x000010, "Member 'SkillListForBattleSet_C_ResetSelectedInfoItemAll::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_ResetSelectedInfoItemAll, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'SkillListForBattleSet_C_ResetSelectedInfoItemAll::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_ResetSelectedInfoItemAll, CallFunc_Subtract_IntInt_ReturnValue) == 0x000018, "Member 'SkillListForBattleSet_C_ResetSelectedInfoItemAll::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_ResetSelectedInfoItemAll, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00001C, "Member 'SkillListForBattleSet_C_ResetSelectedInfoItemAll::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_ResetSelectedInfoItemAll, K2Node_DynamicCast_AsSkill_Info_Item_for_Battle_Set) == 0x000020, "Member 'SkillListForBattleSet_C_ResetSelectedInfoItemAll::K2Node_DynamicCast_AsSkill_Info_Item_for_Battle_Set' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_ResetSelectedInfoItemAll, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'SkillListForBattleSet_C_ResetSelectedInfoItemAll::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_ResetSelectedInfoItemAll, CallFunc_IsValid_ReturnValue_1) == 0x000029, "Member 'SkillListForBattleSet_C_ResetSelectedInfoItemAll::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function SkillListForBattleSet.SkillListForBattleSet_C.SetIsEquipChangeBtnEnabled
// 0x0002 (0x0002 - 0x0000)
struct SkillListForBattleSet_C_SetIsEquipChangeBtnEnabled final
{
public:
	bool                                          InIsEnabled;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillListForBattleSet_C_SetIsEquipChangeBtnEnabled) == 0x000001, "Wrong alignment on SkillListForBattleSet_C_SetIsEquipChangeBtnEnabled");
static_assert(sizeof(SkillListForBattleSet_C_SetIsEquipChangeBtnEnabled) == 0x000002, "Wrong size on SkillListForBattleSet_C_SetIsEquipChangeBtnEnabled");
static_assert(offsetof(SkillListForBattleSet_C_SetIsEquipChangeBtnEnabled, InIsEnabled) == 0x000000, "Member 'SkillListForBattleSet_C_SetIsEquipChangeBtnEnabled::InIsEnabled' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_SetIsEquipChangeBtnEnabled, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'SkillListForBattleSet_C_SetIsEquipChangeBtnEnabled::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function SkillListForBattleSet.SkillListForBattleSet_C.SetListVisibility
// 0x0002 (0x0002 - 0x0000)
struct SkillListForBattleSet_C_SetListVisibility final
{
public:
	ESlateVisibility                              InVisibility;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillListForBattleSet_C_SetListVisibility) == 0x000001, "Wrong alignment on SkillListForBattleSet_C_SetListVisibility");
static_assert(sizeof(SkillListForBattleSet_C_SetListVisibility) == 0x000002, "Wrong size on SkillListForBattleSet_C_SetListVisibility");
static_assert(offsetof(SkillListForBattleSet_C_SetListVisibility, InVisibility) == 0x000000, "Member 'SkillListForBattleSet_C_SetListVisibility::InVisibility' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_SetListVisibility, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'SkillListForBattleSet_C_SetListVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function SkillListForBattleSet.SkillListForBattleSet_C.SetInfoType
// 0x0001 (0x0001 - 0x0000)
struct SkillListForBattleSet_C_SetInfoType final
{
public:
	E_BattleSetInfoType                           InInfoType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillListForBattleSet_C_SetInfoType) == 0x000001, "Wrong alignment on SkillListForBattleSet_C_SetInfoType");
static_assert(sizeof(SkillListForBattleSet_C_SetInfoType) == 0x000001, "Wrong size on SkillListForBattleSet_C_SetInfoType");
static_assert(offsetof(SkillListForBattleSet_C_SetInfoType, InInfoType) == 0x000000, "Member 'SkillListForBattleSet_C_SetInfoType::InInfoType' has a wrong offset!");

// Function SkillListForBattleSet.SkillListForBattleSet_C.SwitchEquipmentIconListBody
// 0x0014 (0x0014 - 0x0000)
struct SkillListForBattleSet_C_SwitchEquipmentIconListBody final
{
public:
	bool                                          InIsEquipmentIconListBodyEmpty;                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5082[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5083[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillListForBattleSet_C_SwitchEquipmentIconListBody) == 0x000004, "Wrong alignment on SkillListForBattleSet_C_SwitchEquipmentIconListBody");
static_assert(sizeof(SkillListForBattleSet_C_SwitchEquipmentIconListBody) == 0x000014, "Wrong size on SkillListForBattleSet_C_SwitchEquipmentIconListBody");
static_assert(offsetof(SkillListForBattleSet_C_SwitchEquipmentIconListBody, InIsEquipmentIconListBodyEmpty) == 0x000000, "Member 'SkillListForBattleSet_C_SwitchEquipmentIconListBody::InIsEquipmentIconListBodyEmpty' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_SwitchEquipmentIconListBody, Temp_int_Variable) == 0x000004, "Member 'SkillListForBattleSet_C_SwitchEquipmentIconListBody::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_SwitchEquipmentIconListBody, Temp_int_Variable_1) == 0x000008, "Member 'SkillListForBattleSet_C_SwitchEquipmentIconListBody::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_SwitchEquipmentIconListBody, Temp_bool_Variable) == 0x00000C, "Member 'SkillListForBattleSet_C_SwitchEquipmentIconListBody::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_SwitchEquipmentIconListBody, CallFunc_IsValid_ReturnValue) == 0x00000D, "Member 'SkillListForBattleSet_C_SwitchEquipmentIconListBody::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_SwitchEquipmentIconListBody, K2Node_Select_Default) == 0x000010, "Member 'SkillListForBattleSet_C_SwitchEquipmentIconListBody::K2Node_Select_Default' has a wrong offset!");

// Function SkillListForBattleSet.SkillListForBattleSet_C.SetSkillListItemSelectedBySkillId
// 0x0050 (0x0050 - 0x0000)
struct SkillListForBattleSet_C_SetSkillListItemSelectedBySkillId final
{
public:
	int32                                         InSkillId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5084[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USkillInfoItemForBattleSet_C*           LocalInfoItem;                                     // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5085[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSkillId_OutSkillId;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5086[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5087[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USkillInfoItemForBattleSet_C*           K2Node_DynamicCast_AsSkill_Info_Item_for_Battle_Set; // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5088[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillListForBattleSet_C_SetSkillListItemSelectedBySkillId) == 0x000008, "Wrong alignment on SkillListForBattleSet_C_SetSkillListItemSelectedBySkillId");
static_assert(sizeof(SkillListForBattleSet_C_SetSkillListItemSelectedBySkillId) == 0x000050, "Wrong size on SkillListForBattleSet_C_SetSkillListItemSelectedBySkillId");
static_assert(offsetof(SkillListForBattleSet_C_SetSkillListItemSelectedBySkillId, InSkillId) == 0x000000, "Member 'SkillListForBattleSet_C_SetSkillListItemSelectedBySkillId::InSkillId' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_SetSkillListItemSelectedBySkillId, LocalInfoItem) == 0x000008, "Member 'SkillListForBattleSet_C_SetSkillListItemSelectedBySkillId::LocalInfoItem' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_SetSkillListItemSelectedBySkillId, CallFunc_Greater_IntInt_ReturnValue) == 0x000010, "Member 'SkillListForBattleSet_C_SetSkillListItemSelectedBySkillId::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_SetSkillListItemSelectedBySkillId, Temp_int_Variable) == 0x000014, "Member 'SkillListForBattleSet_C_SetSkillListItemSelectedBySkillId::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_SetSkillListItemSelectedBySkillId, CallFunc_GetSkillId_OutSkillId) == 0x000018, "Member 'SkillListForBattleSet_C_SetSkillListItemSelectedBySkillId::CallFunc_GetSkillId_OutSkillId' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_SetSkillListItemSelectedBySkillId, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'SkillListForBattleSet_C_SetSkillListItemSelectedBySkillId::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_SetSkillListItemSelectedBySkillId, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000020, "Member 'SkillListForBattleSet_C_SetSkillListItemSelectedBySkillId::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_SetSkillListItemSelectedBySkillId, CallFunc_IsValid_ReturnValue) == 0x000021, "Member 'SkillListForBattleSet_C_SetSkillListItemSelectedBySkillId::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_SetSkillListItemSelectedBySkillId, CallFunc_GetChildAt_ReturnValue) == 0x000028, "Member 'SkillListForBattleSet_C_SetSkillListItemSelectedBySkillId::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_SetSkillListItemSelectedBySkillId, CallFunc_IsValid_ReturnValue_1) == 0x000030, "Member 'SkillListForBattleSet_C_SetSkillListItemSelectedBySkillId::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_SetSkillListItemSelectedBySkillId, K2Node_DynamicCast_AsSkill_Info_Item_for_Battle_Set) == 0x000038, "Member 'SkillListForBattleSet_C_SetSkillListItemSelectedBySkillId::K2Node_DynamicCast_AsSkill_Info_Item_for_Battle_Set' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_SetSkillListItemSelectedBySkillId, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'SkillListForBattleSet_C_SetSkillListItemSelectedBySkillId::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_SetSkillListItemSelectedBySkillId, CallFunc_GetChildrenCount_ReturnValue) == 0x000044, "Member 'SkillListForBattleSet_C_SetSkillListItemSelectedBySkillId::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_SetSkillListItemSelectedBySkillId, CallFunc_Subtract_IntInt_ReturnValue) == 0x000048, "Member 'SkillListForBattleSet_C_SetSkillListItemSelectedBySkillId::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_SetSkillListItemSelectedBySkillId, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00004C, "Member 'SkillListForBattleSet_C_SetSkillListItemSelectedBySkillId::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function SkillListForBattleSet.SkillListForBattleSet_C.SetTacticalSkillSlotType
// 0x0001 (0x0001 - 0x0000)
struct SkillListForBattleSet_C_SetTacticalSkillSlotType final
{
public:
	ESBPlayerActiveArtsSlotType                   InSlotType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillListForBattleSet_C_SetTacticalSkillSlotType) == 0x000001, "Wrong alignment on SkillListForBattleSet_C_SetTacticalSkillSlotType");
static_assert(sizeof(SkillListForBattleSet_C_SetTacticalSkillSlotType) == 0x000001, "Wrong size on SkillListForBattleSet_C_SetTacticalSkillSlotType");
static_assert(offsetof(SkillListForBattleSet_C_SetTacticalSkillSlotType, InSlotType) == 0x000000, "Member 'SkillListForBattleSet_C_SetTacticalSkillSlotType::InSlotType' has a wrong offset!");

// Function SkillListForBattleSet.SkillListForBattleSet_C.GetTacticalSkillDatas
// 0x0430 (0x0430 - 0x0000)
struct SkillListForBattleSet_C_GetTacticalSkillDatas final
{
public:
	ESBClassType                                  InClassType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5089[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBPlayerSkillData>             OutDataArray;                                      // 0x0008(0x0010)(Parm, OutParm)
	int32                                         LocalSkillLevel;                                   // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalSkillId;                                      // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMasterDataManager*                   LocalMasterDataManager;                            // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBPlayerSkillData                     LocalDataTable;                                    // 0x0028(0x0180)(Edit, BlueprintVisible)
	TArray<class FName>                           LocalRowNames;                                     // 0x01A8(0x0010)(Edit, BlueprintVisible)
	class UDataTable*                             LocalSkillDataTable;                               // 0x01B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBPlayerSkillData>             LocalMasterySkillDataArray;                        // 0x01C0(0x0010)(Edit, BlueprintVisible)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x01D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetClassLevel_ReturnValue;                // 0x01D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x01DC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_508A[0x4];                                     // 0x01E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x01E8(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetSkillMasteryParam_IsExists;            // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_508B[0x3];                                     // 0x01F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillMasteryParam                   CallFunc_GetSkillMasteryParam_ReturnValue;         // 0x01FC(0x0008)(NoDestructor)
	bool                                          CallFunc_FindSkillDataDataBySkillId_IsExists;      // 0x0204(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_508C[0x3];                                     // 0x0205(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 CallFunc_FindSkillDataDataBySkillId_ReturnValue;   // 0x0208(0x0058)()
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0261(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0262(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0263(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x0264(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0265(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0266(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0267(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_508D[0x7];                                     // 0x0269(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_508E[0x3];                                     // 0x0279(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x027C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBPlayerSkillData                     CallFunc_GetDataTableRowFromName_OutRow;           // 0x0280(0x0180)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0400(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_508F[0x3];                                     // 0x0401(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCurrentSkillLevel_ReturnValue;         // 0x0404(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0408(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5090[0x4];                                     // 0x040C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x0410(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0418(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5091[0x7];                                     // 0x0419(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDataTable*                             CallFunc_GetSkillDataTable_ReturnValue;            // 0x0420(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0428(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0429(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5092[0x2];                                     // 0x042A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x042C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillListForBattleSet_C_GetTacticalSkillDatas) == 0x000008, "Wrong alignment on SkillListForBattleSet_C_GetTacticalSkillDatas");
static_assert(sizeof(SkillListForBattleSet_C_GetTacticalSkillDatas) == 0x000430, "Wrong size on SkillListForBattleSet_C_GetTacticalSkillDatas");
static_assert(offsetof(SkillListForBattleSet_C_GetTacticalSkillDatas, InClassType) == 0x000000, "Member 'SkillListForBattleSet_C_GetTacticalSkillDatas::InClassType' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetTacticalSkillDatas, OutDataArray) == 0x000008, "Member 'SkillListForBattleSet_C_GetTacticalSkillDatas::OutDataArray' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetTacticalSkillDatas, LocalSkillLevel) == 0x000018, "Member 'SkillListForBattleSet_C_GetTacticalSkillDatas::LocalSkillLevel' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetTacticalSkillDatas, LocalSkillId) == 0x00001C, "Member 'SkillListForBattleSet_C_GetTacticalSkillDatas::LocalSkillId' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetTacticalSkillDatas, LocalMasterDataManager) == 0x000020, "Member 'SkillListForBattleSet_C_GetTacticalSkillDatas::LocalMasterDataManager' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetTacticalSkillDatas, LocalDataTable) == 0x000028, "Member 'SkillListForBattleSet_C_GetTacticalSkillDatas::LocalDataTable' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetTacticalSkillDatas, LocalRowNames) == 0x0001A8, "Member 'SkillListForBattleSet_C_GetTacticalSkillDatas::LocalRowNames' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetTacticalSkillDatas, LocalSkillDataTable) == 0x0001B8, "Member 'SkillListForBattleSet_C_GetTacticalSkillDatas::LocalSkillDataTable' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetTacticalSkillDatas, LocalMasterySkillDataArray) == 0x0001C0, "Member 'SkillListForBattleSet_C_GetTacticalSkillDatas::LocalMasterySkillDataArray' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetTacticalSkillDatas, CallFunc_Array_Length_ReturnValue) == 0x0001D0, "Member 'SkillListForBattleSet_C_GetTacticalSkillDatas::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetTacticalSkillDatas, Temp_int_Array_Index_Variable) == 0x0001D4, "Member 'SkillListForBattleSet_C_GetTacticalSkillDatas::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetTacticalSkillDatas, CallFunc_GetClassLevel_ReturnValue) == 0x0001D8, "Member 'SkillListForBattleSet_C_GetTacticalSkillDatas::CallFunc_GetClassLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetTacticalSkillDatas, CallFunc_Array_Get_Item) == 0x0001DC, "Member 'SkillListForBattleSet_C_GetTacticalSkillDatas::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetTacticalSkillDatas, CallFunc_GetDataTableRowNames_OutRowNames) == 0x0001E8, "Member 'SkillListForBattleSet_C_GetTacticalSkillDatas::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetTacticalSkillDatas, CallFunc_GetSkillMasteryParam_IsExists) == 0x0001F8, "Member 'SkillListForBattleSet_C_GetTacticalSkillDatas::CallFunc_GetSkillMasteryParam_IsExists' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetTacticalSkillDatas, CallFunc_GetSkillMasteryParam_ReturnValue) == 0x0001FC, "Member 'SkillListForBattleSet_C_GetTacticalSkillDatas::CallFunc_GetSkillMasteryParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetTacticalSkillDatas, CallFunc_FindSkillDataDataBySkillId_IsExists) == 0x000204, "Member 'SkillListForBattleSet_C_GetTacticalSkillDatas::CallFunc_FindSkillDataDataBySkillId_IsExists' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetTacticalSkillDatas, CallFunc_FindSkillDataDataBySkillId_ReturnValue) == 0x000208, "Member 'SkillListForBattleSet_C_GetTacticalSkillDatas::CallFunc_FindSkillDataDataBySkillId_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetTacticalSkillDatas, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000260, "Member 'SkillListForBattleSet_C_GetTacticalSkillDatas::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetTacticalSkillDatas, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000261, "Member 'SkillListForBattleSet_C_GetTacticalSkillDatas::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetTacticalSkillDatas, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000262, "Member 'SkillListForBattleSet_C_GetTacticalSkillDatas::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetTacticalSkillDatas, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000263, "Member 'SkillListForBattleSet_C_GetTacticalSkillDatas::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetTacticalSkillDatas, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000264, "Member 'SkillListForBattleSet_C_GetTacticalSkillDatas::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetTacticalSkillDatas, CallFunc_BooleanAND_ReturnValue) == 0x000265, "Member 'SkillListForBattleSet_C_GetTacticalSkillDatas::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetTacticalSkillDatas, CallFunc_BooleanOR_ReturnValue) == 0x000266, "Member 'SkillListForBattleSet_C_GetTacticalSkillDatas::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetTacticalSkillDatas, CallFunc_BooleanOR_ReturnValue_1) == 0x000267, "Member 'SkillListForBattleSet_C_GetTacticalSkillDatas::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetTacticalSkillDatas, CallFunc_GetMasterDataManager_IsValid) == 0x000268, "Member 'SkillListForBattleSet_C_GetTacticalSkillDatas::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetTacticalSkillDatas, CallFunc_GetMasterDataManager_ReturnValue) == 0x000270, "Member 'SkillListForBattleSet_C_GetTacticalSkillDatas::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetTacticalSkillDatas, CallFunc_BooleanOR_ReturnValue_2) == 0x000278, "Member 'SkillListForBattleSet_C_GetTacticalSkillDatas::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetTacticalSkillDatas, CallFunc_Array_Add_ReturnValue) == 0x00027C, "Member 'SkillListForBattleSet_C_GetTacticalSkillDatas::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetTacticalSkillDatas, CallFunc_GetDataTableRowFromName_OutRow) == 0x000280, "Member 'SkillListForBattleSet_C_GetTacticalSkillDatas::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetTacticalSkillDatas, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000400, "Member 'SkillListForBattleSet_C_GetTacticalSkillDatas::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetTacticalSkillDatas, CallFunc_GetCurrentSkillLevel_ReturnValue) == 0x000404, "Member 'SkillListForBattleSet_C_GetTacticalSkillDatas::CallFunc_GetCurrentSkillLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetTacticalSkillDatas, Temp_int_Loop_Counter_Variable) == 0x000408, "Member 'SkillListForBattleSet_C_GetTacticalSkillDatas::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetTacticalSkillDatas, CallFunc_GetPlayerManager_ReturnValue) == 0x000410, "Member 'SkillListForBattleSet_C_GetTacticalSkillDatas::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetTacticalSkillDatas, CallFunc_IsValid_ReturnValue) == 0x000418, "Member 'SkillListForBattleSet_C_GetTacticalSkillDatas::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetTacticalSkillDatas, CallFunc_GetSkillDataTable_ReturnValue) == 0x000420, "Member 'SkillListForBattleSet_C_GetTacticalSkillDatas::CallFunc_GetSkillDataTable_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetTacticalSkillDatas, CallFunc_IsValid_ReturnValue_1) == 0x000428, "Member 'SkillListForBattleSet_C_GetTacticalSkillDatas::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetTacticalSkillDatas, CallFunc_Less_IntInt_ReturnValue) == 0x000429, "Member 'SkillListForBattleSet_C_GetTacticalSkillDatas::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetTacticalSkillDatas, CallFunc_Add_IntInt_ReturnValue) == 0x00042C, "Member 'SkillListForBattleSet_C_GetTacticalSkillDatas::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function SkillListForBattleSet.SkillListForBattleSet_C.GetClassAbilityDatas
// 0x0470 (0x0470 - 0x0000)
struct SkillListForBattleSet_C_GetClassAbilityDatas final
{
public:
	ESBClassType                                  InClassType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBPlayerArtsType                             InArtsType;                                        // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5093[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBPlayerPassiveSkillData>      OutDataArray;                                      // 0x0008(0x0010)(Parm, OutParm)
	ESBClassType                                  LocalOtherClassType;                               // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5094[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerManager*                       LocalPlayerManager;                                // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  LocalClassType;                                    // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5095[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalSkillLevel;                                   // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSkillAbilityType                           LocalAbilityType;                                  // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5096[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalSkillId;                                      // 0x0034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBPlayerArtsType                             LocalArtsType;                                     // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5097[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerPassiveSkillData              LocalDataTable;                                    // 0x0040(0x00B8)(Edit, BlueprintVisible)
	TArray<class FName>                           LocalRowNames;                                     // 0x00F8(0x0010)(Edit, BlueprintVisible)
	class UDataTable*                             LocalAbilityDataTable;                             // 0x0108(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMasterDataManager*                   LocalMasterDataManager;                            // 0x0110(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBPlayerPassiveSkillData>      LocalMasteryAbilityDataArray;                      // 0x0118(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Variable;                                 // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5098[0x3];                                     // 0x0131(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x013A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x013B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5099[0x3];                                     // 0x0141(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCurrentSkillLevel_ReturnValue;         // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_509A[0x2];                                     // 0x014A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0150(0x0010)(ReferenceParm)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_509B[0x3];                                     // 0x0161(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_509C[0x3];                                     // 0x0171(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetClassLevelFromClassType_ReturnValue;   // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x018C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_509D[0x3];                                     // 0x018D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEnableConditionSkill_Enable;            // 0x0194(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetSkillMasteryParam_IsExists;            // 0x0195(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_509E[0x2];                                     // 0x0196(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillMasteryParam                   CallFunc_GetSkillMasteryParam_ReturnValue;         // 0x0198(0x0008)(NoDestructor)
	bool                                          CallFunc_FindSkillDataDataBySkillId_IsExists;      // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_509F[0x7];                                     // 0x01A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 CallFunc_FindSkillDataDataBySkillId_ReturnValue;   // 0x01A8(0x0058)()
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0201(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0202(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x0203(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0204(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0205(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0206(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x0207(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames_1;       // 0x0208(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item_1;                         // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0220(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0224(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50A0[0x3];                                     // 0x0225(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerPassiveSkillData              CallFunc_GetDataTableRowFromName_OutRow;           // 0x0228(0x00B8)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x02E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50A1[0x7];                                     // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDataTable*                             CallFunc_GetPassiveSkillDataTable_ReturnValue;     // 0x02E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x02F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50A2[0x7];                                     // 0x02F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x02F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_MakeLiteralBool_ReturnValue;              // 0x0300(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0301(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50A3[0x2];                                     // 0x0302(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0304(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0308(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50A4[0x3];                                     // 0x0309(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x030C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0310(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50A5[0x7];                                     // 0x0311(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDataTable*                             CallFunc_GetPassiveSkillDataTable_ReturnValue_1;   // 0x0318(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0320(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0321(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50A6[0x2];                                     // 0x0322(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetClassLevel_ReturnValue;                // 0x0324(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0328(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEnableConditionSkill_Enable_1;          // 0x032C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetSkillMasteryParam_IsExists_1;          // 0x032D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50A7[0x2];                                     // 0x032E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillMasteryParam                   CallFunc_GetSkillMasteryParam_ReturnValue_1;       // 0x0330(0x0008)(NoDestructor)
	int32                                         CallFunc_GetCurrentSkillLevel_ReturnValue_1;       // 0x0338(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x033C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindSkillDataDataBySkillId_IsExists_1;    // 0x033D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50A8[0x2];                                     // 0x033E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 CallFunc_FindSkillDataDataBySkillId_ReturnValue_1; // 0x0340(0x0058)()
	bool                                          CallFunc_BooleanAND_ReturnValue_4;                 // 0x0398(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x0399(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_5;                 // 0x039A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x039B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x039C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x039D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50A9[0x2];                                     // 0x039E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x03A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_6;                 // 0x03A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_7;                 // 0x03A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50AA[0x6];                                     // 0x03AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerPassiveSkillData              CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x03B0(0x00B8)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x0468(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillListForBattleSet_C_GetClassAbilityDatas) == 0x000008, "Wrong alignment on SkillListForBattleSet_C_GetClassAbilityDatas");
static_assert(sizeof(SkillListForBattleSet_C_GetClassAbilityDatas) == 0x000470, "Wrong size on SkillListForBattleSet_C_GetClassAbilityDatas");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, InClassType) == 0x000000, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::InClassType' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, InArtsType) == 0x000001, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::InArtsType' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, OutDataArray) == 0x000008, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::OutDataArray' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, LocalOtherClassType) == 0x000018, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::LocalOtherClassType' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, LocalPlayerManager) == 0x000020, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::LocalPlayerManager' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, LocalClassType) == 0x000028, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::LocalClassType' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, LocalSkillLevel) == 0x00002C, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::LocalSkillLevel' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, LocalAbilityType) == 0x000030, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::LocalAbilityType' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, LocalSkillId) == 0x000034, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::LocalSkillId' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, LocalArtsType) == 0x000038, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::LocalArtsType' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, LocalDataTable) == 0x000040, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::LocalDataTable' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, LocalRowNames) == 0x0000F8, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::LocalRowNames' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, LocalAbilityDataTable) == 0x000108, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::LocalAbilityDataTable' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, LocalMasterDataManager) == 0x000110, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::LocalMasterDataManager' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, LocalMasteryAbilityDataArray) == 0x000118, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::LocalMasteryAbilityDataArray' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, Temp_int_Variable) == 0x000128, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, Temp_int_Variable_1) == 0x00012C, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_Conv_IntToByte_ReturnValue) == 0x000130, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_Add_IntInt_ReturnValue) == 0x000134, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_GetValidValue_ReturnValue) == 0x000138, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000139, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x00013A, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, K2Node_SwitchEnum_CmpSuccess) == 0x00013B, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_Conv_ByteToInt_ReturnValue) == 0x00013C, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000140, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_GetCurrentSkillLevel_ReturnValue) == 0x000144, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_GetCurrentSkillLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000148, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_BooleanOR_ReturnValue) == 0x000149, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_Array_Length_ReturnValue) == 0x00014C, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000150, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000160, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, Temp_int_Loop_Counter_Variable) == 0x000164, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_Add_IntInt_ReturnValue_1) == 0x000168, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, Temp_int_Loop_Counter_Variable_1) == 0x00016C, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_Less_IntInt_ReturnValue) == 0x000170, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_Add_IntInt_ReturnValue_2) == 0x000174, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, Temp_int_Array_Index_Variable) == 0x000178, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, Temp_int_Array_Index_Variable_1) == 0x00017C, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_Array_Get_Item) == 0x000180, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_GetClassLevelFromClassType_ReturnValue) == 0x000188, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_GetClassLevelFromClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00018C, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_Array_Add_ReturnValue) == 0x000190, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_IsEnableConditionSkill_Enable) == 0x000194, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_IsEnableConditionSkill_Enable' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_GetSkillMasteryParam_IsExists) == 0x000195, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_GetSkillMasteryParam_IsExists' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_GetSkillMasteryParam_ReturnValue) == 0x000198, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_GetSkillMasteryParam_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_FindSkillDataDataBySkillId_IsExists) == 0x0001A0, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_FindSkillDataDataBySkillId_IsExists' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_FindSkillDataDataBySkillId_ReturnValue) == 0x0001A8, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_FindSkillDataDataBySkillId_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000200, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000201, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000202, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000203, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_BooleanAND_ReturnValue) == 0x000204, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_BooleanAND_ReturnValue_1) == 0x000205, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_BooleanAND_ReturnValue_2) == 0x000206, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_BooleanAND_ReturnValue_3) == 0x000207, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_GetDataTableRowNames_OutRowNames_1) == 0x000208, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_GetDataTableRowNames_OutRowNames_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_Array_Get_Item_1) == 0x000218, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_Array_Length_ReturnValue_1) == 0x000220, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_Less_IntInt_ReturnValue_1) == 0x000224, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_GetDataTableRowFromName_OutRow) == 0x000228, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0002E0, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_GetPassiveSkillDataTable_ReturnValue) == 0x0002E8, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_GetPassiveSkillDataTable_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_IsValid_ReturnValue) == 0x0002F0, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_GetPlayerManager_ReturnValue) == 0x0002F8, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_MakeLiteralBool_ReturnValue) == 0x000300, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_MakeLiteralBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_IsValid_ReturnValue_1) == 0x000301, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_MakeLiteralInt_ReturnValue) == 0x000304, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_Less_IntInt_ReturnValue_2) == 0x000308, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_Array_Length_ReturnValue_2) == 0x00030C, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_Greater_IntInt_ReturnValue) == 0x000310, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_GetPassiveSkillDataTable_ReturnValue_1) == 0x000318, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_GetPassiveSkillDataTable_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_IsValid_ReturnValue_2) == 0x000320, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, K2Node_SwitchEnum_CmpSuccess_1) == 0x000321, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_GetClassLevel_ReturnValue) == 0x000324, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_GetClassLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_Array_Add_ReturnValue_1) == 0x000328, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_IsEnableConditionSkill_Enable_1) == 0x00032C, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_IsEnableConditionSkill_Enable_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_GetSkillMasteryParam_IsExists_1) == 0x00032D, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_GetSkillMasteryParam_IsExists_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_GetSkillMasteryParam_ReturnValue_1) == 0x000330, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_GetSkillMasteryParam_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_GetCurrentSkillLevel_ReturnValue_1) == 0x000338, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_GetCurrentSkillLevel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x00033C, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_FindSkillDataDataBySkillId_IsExists_1) == 0x00033D, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_FindSkillDataDataBySkillId_IsExists_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_FindSkillDataDataBySkillId_ReturnValue_1) == 0x000340, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_FindSkillDataDataBySkillId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_BooleanAND_ReturnValue_4) == 0x000398, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_BooleanAND_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x000399, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_BooleanAND_ReturnValue_5) == 0x00039A, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_BooleanAND_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x00039B, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x00039C, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_GetMasterDataManager_IsValid) == 0x00039D, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_GetMasterDataManager_ReturnValue) == 0x0003A0, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_BooleanAND_ReturnValue_6) == 0x0003A8, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_BooleanAND_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_BooleanAND_ReturnValue_7) == 0x0003A9, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_BooleanAND_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_GetDataTableRowFromName_OutRow_1) == 0x0003B0, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_GetDataTableRowFromName_OutRow_1' has a wrong offset!");
static_assert(offsetof(SkillListForBattleSet_C_GetClassAbilityDatas, CallFunc_GetDataTableRowFromName_ReturnValue_1) == 0x000468, "Member 'SkillListForBattleSet_C_GetClassAbilityDatas::CallFunc_GetDataTableRowFromName_ReturnValue_1' has a wrong offset!");

}

