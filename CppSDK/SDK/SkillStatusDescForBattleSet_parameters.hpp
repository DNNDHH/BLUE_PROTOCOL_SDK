#pragma once

 

// Package: SkillStatusDescForBattleSet

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "E_BattleSetInfoType_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.OnTacticalSkillTypeSelected__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct SkillStatusDescForBattleSet_C_OnTacticalSkillTypeSelected__DelegateSignature final
{
public:
	int32                                         InSelectedSkillTypeId;                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InSelectedSkillId;                                 // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillStatusDescForBattleSet_C_OnTacticalSkillTypeSelected__DelegateSignature) == 0x000004, "Wrong alignment on SkillStatusDescForBattleSet_C_OnTacticalSkillTypeSelected__DelegateSignature");
static_assert(sizeof(SkillStatusDescForBattleSet_C_OnTacticalSkillTypeSelected__DelegateSignature) == 0x000008, "Wrong size on SkillStatusDescForBattleSet_C_OnTacticalSkillTypeSelected__DelegateSignature");
static_assert(offsetof(SkillStatusDescForBattleSet_C_OnTacticalSkillTypeSelected__DelegateSignature, InSelectedSkillTypeId) == 0x000000, "Member 'SkillStatusDescForBattleSet_C_OnTacticalSkillTypeSelected__DelegateSignature::InSelectedSkillTypeId' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_OnTacticalSkillTypeSelected__DelegateSignature, InSelectedSkillId) == 0x000004, "Member 'SkillStatusDescForBattleSet_C_OnTacticalSkillTypeSelected__DelegateSignature::InSelectedSkillId' has a wrong offset!");

// Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.ExecuteUbergraph_SkillStatusDescForBattleSet
// 0x0088 (0x0088 - 0x0000)
struct SkillStatusDescForBattleSet_C_ExecuteUbergraph_SkillStatusDescForBattleSet final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_845E[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_ComponentBoundEvent_InSelectedSkillTypeId;  // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_InSelectedSkillId;      // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindSkillDataMaster_bIsValid;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_845F[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 CallFunc_FindSkillDataMaster_SkillDataMaster;      // 0x0018(0x0058)()
	int32                                         CallFunc_GetCurrentSkillLevel_ReturnValue;         // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetTacticalSkillBaseInfo_IsTacticalSkill; // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8460[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetTacticalSkillBaseInfo_OutBaseSkillId;  // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTacticalSkillBaseInfo_OutBaseSkillLevel; // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillStatusDescForBattleSet_C_ExecuteUbergraph_SkillStatusDescForBattleSet) == 0x000008, "Wrong alignment on SkillStatusDescForBattleSet_C_ExecuteUbergraph_SkillStatusDescForBattleSet");
static_assert(sizeof(SkillStatusDescForBattleSet_C_ExecuteUbergraph_SkillStatusDescForBattleSet) == 0x000088, "Wrong size on SkillStatusDescForBattleSet_C_ExecuteUbergraph_SkillStatusDescForBattleSet");
static_assert(offsetof(SkillStatusDescForBattleSet_C_ExecuteUbergraph_SkillStatusDescForBattleSet, EntryPoint) == 0x000000, "Member 'SkillStatusDescForBattleSet_C_ExecuteUbergraph_SkillStatusDescForBattleSet::EntryPoint' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_ExecuteUbergraph_SkillStatusDescForBattleSet, K2Node_Event_IsDesignTime) == 0x000004, "Member 'SkillStatusDescForBattleSet_C_ExecuteUbergraph_SkillStatusDescForBattleSet::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_ExecuteUbergraph_SkillStatusDescForBattleSet, K2Node_ComponentBoundEvent_InSelectedSkillTypeId) == 0x000008, "Member 'SkillStatusDescForBattleSet_C_ExecuteUbergraph_SkillStatusDescForBattleSet::K2Node_ComponentBoundEvent_InSelectedSkillTypeId' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_ExecuteUbergraph_SkillStatusDescForBattleSet, K2Node_ComponentBoundEvent_InSelectedSkillId) == 0x00000C, "Member 'SkillStatusDescForBattleSet_C_ExecuteUbergraph_SkillStatusDescForBattleSet::K2Node_ComponentBoundEvent_InSelectedSkillId' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_ExecuteUbergraph_SkillStatusDescForBattleSet, CallFunc_FindSkillDataMaster_bIsValid) == 0x000010, "Member 'SkillStatusDescForBattleSet_C_ExecuteUbergraph_SkillStatusDescForBattleSet::CallFunc_FindSkillDataMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_ExecuteUbergraph_SkillStatusDescForBattleSet, CallFunc_FindSkillDataMaster_SkillDataMaster) == 0x000018, "Member 'SkillStatusDescForBattleSet_C_ExecuteUbergraph_SkillStatusDescForBattleSet::CallFunc_FindSkillDataMaster_SkillDataMaster' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_ExecuteUbergraph_SkillStatusDescForBattleSet, CallFunc_GetCurrentSkillLevel_ReturnValue) == 0x000070, "Member 'SkillStatusDescForBattleSet_C_ExecuteUbergraph_SkillStatusDescForBattleSet::CallFunc_GetCurrentSkillLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_ExecuteUbergraph_SkillStatusDescForBattleSet, CallFunc_GetTacticalSkillBaseInfo_IsTacticalSkill) == 0x000074, "Member 'SkillStatusDescForBattleSet_C_ExecuteUbergraph_SkillStatusDescForBattleSet::CallFunc_GetTacticalSkillBaseInfo_IsTacticalSkill' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_ExecuteUbergraph_SkillStatusDescForBattleSet, CallFunc_GetTacticalSkillBaseInfo_OutBaseSkillId) == 0x000078, "Member 'SkillStatusDescForBattleSet_C_ExecuteUbergraph_SkillStatusDescForBattleSet::CallFunc_GetTacticalSkillBaseInfo_OutBaseSkillId' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_ExecuteUbergraph_SkillStatusDescForBattleSet, CallFunc_GetTacticalSkillBaseInfo_OutBaseSkillLevel) == 0x00007C, "Member 'SkillStatusDescForBattleSet_C_ExecuteUbergraph_SkillStatusDescForBattleSet::CallFunc_GetTacticalSkillBaseInfo_OutBaseSkillLevel' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_ExecuteUbergraph_SkillStatusDescForBattleSet, CallFunc_IsValid_ReturnValue) == 0x000080, "Member 'SkillStatusDescForBattleSet_C_ExecuteUbergraph_SkillStatusDescForBattleSet::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_ExecuteUbergraph_SkillStatusDescForBattleSet, CallFunc_IsValid_ReturnValue_1) == 0x000081, "Member 'SkillStatusDescForBattleSet_C_ExecuteUbergraph_SkillStatusDescForBattleSet::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_ExecuteUbergraph_SkillStatusDescForBattleSet, CallFunc_IsValid_ReturnValue_2) == 0x000082, "Member 'SkillStatusDescForBattleSet_C_ExecuteUbergraph_SkillStatusDescForBattleSet::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.BndEvt__SkillStatusDescForBattleSet_TacticalSkillInfo_K2Node_ComponentBoundEvent_1_OnSkillTypeRadioBtnSelected__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct SkillStatusDescForBattleSet_C_BndEvt__SkillStatusDescForBattleSet_TacticalSkillInfo_K2Node_ComponentBoundEvent_1_OnSkillTypeRadioBtnSelected__DelegateSignature final
{
public:
	int32                                         InSelectedSkillTypeId;                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InSelectedSkillId;                                 // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillStatusDescForBattleSet_C_BndEvt__SkillStatusDescForBattleSet_TacticalSkillInfo_K2Node_ComponentBoundEvent_1_OnSkillTypeRadioBtnSelected__DelegateSignature) == 0x000004, "Wrong alignment on SkillStatusDescForBattleSet_C_BndEvt__SkillStatusDescForBattleSet_TacticalSkillInfo_K2Node_ComponentBoundEvent_1_OnSkillTypeRadioBtnSelected__DelegateSignature");
static_assert(sizeof(SkillStatusDescForBattleSet_C_BndEvt__SkillStatusDescForBattleSet_TacticalSkillInfo_K2Node_ComponentBoundEvent_1_OnSkillTypeRadioBtnSelected__DelegateSignature) == 0x000008, "Wrong size on SkillStatusDescForBattleSet_C_BndEvt__SkillStatusDescForBattleSet_TacticalSkillInfo_K2Node_ComponentBoundEvent_1_OnSkillTypeRadioBtnSelected__DelegateSignature");
static_assert(offsetof(SkillStatusDescForBattleSet_C_BndEvt__SkillStatusDescForBattleSet_TacticalSkillInfo_K2Node_ComponentBoundEvent_1_OnSkillTypeRadioBtnSelected__DelegateSignature, InSelectedSkillTypeId) == 0x000000, "Member 'SkillStatusDescForBattleSet_C_BndEvt__SkillStatusDescForBattleSet_TacticalSkillInfo_K2Node_ComponentBoundEvent_1_OnSkillTypeRadioBtnSelected__DelegateSignature::InSelectedSkillTypeId' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_BndEvt__SkillStatusDescForBattleSet_TacticalSkillInfo_K2Node_ComponentBoundEvent_1_OnSkillTypeRadioBtnSelected__DelegateSignature, InSelectedSkillId) == 0x000004, "Member 'SkillStatusDescForBattleSet_C_BndEvt__SkillStatusDescForBattleSet_TacticalSkillInfo_K2Node_ComponentBoundEvent_1_OnSkillTypeRadioBtnSelected__DelegateSignature::InSelectedSkillId' has a wrong offset!");

// Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct SkillStatusDescForBattleSet_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillStatusDescForBattleSet_C_PreConstruct) == 0x000001, "Wrong alignment on SkillStatusDescForBattleSet_C_PreConstruct");
static_assert(sizeof(SkillStatusDescForBattleSet_C_PreConstruct) == 0x000001, "Wrong size on SkillStatusDescForBattleSet_C_PreConstruct");
static_assert(offsetof(SkillStatusDescForBattleSet_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'SkillStatusDescForBattleSet_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.SetSKill
// 0x00E0 (0x00E0 - 0x0000)
struct SkillStatusDescForBattleSet_C_SetSKill final
{
public:
	int32                                         InSkillId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalBaseSkillLevel;                               // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalIsSkillTypeSelectable;                        // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8461[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalRawSkillId;                                   // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  LocalClassType;                                    // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8462[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerManager*                       LocalPlayerManager;                                // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckIsSkillTypeSelectable_OutIsSkillTypeSelectable; // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetTacticalSkillBaseInfo_IsTacticalSkill; // 0x002F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_GetTacticalSkillBaseInfo_OutBaseSkillId;  // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTacticalSkillBaseInfo_OutBaseSkillLevel; // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8463[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_4;                               // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8464[0x1];                                     // 0x004B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_5;                               // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckIfTacticalSkillIsEquppedAndItsSkillType_OutIsEquipped; // 0x0053(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_CheckIfTacticalSkillIsEquppedAndItsSkillType_OutSkillType; // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8465[0x2];                                     // 0x005A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_6;                               // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSkillAbilityType                           Temp_byte_Variable;                                // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8466[0x2];                                     // 0x0062(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_1;                           // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCurrentSkillLevel_ReturnValue;         // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindSkillDataMaster_bIsValid;             // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8467[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 CallFunc_FindSkillDataMaster_SkillDataMaster;      // 0x0078(0x0058)()
	ESBClassType                                  CallFunc_GetPlayerClassType_ClassType;             // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8468[0x2];                                     // 0x00D2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_2;                           // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_3;                           // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x00DD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x00DE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x00DF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillStatusDescForBattleSet_C_SetSKill) == 0x000008, "Wrong alignment on SkillStatusDescForBattleSet_C_SetSKill");
static_assert(sizeof(SkillStatusDescForBattleSet_C_SetSKill) == 0x0000E0, "Wrong size on SkillStatusDescForBattleSet_C_SetSKill");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetSKill, InSkillId) == 0x000000, "Member 'SkillStatusDescForBattleSet_C_SetSKill::InSkillId' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetSKill, LocalBaseSkillLevel) == 0x000004, "Member 'SkillStatusDescForBattleSet_C_SetSKill::LocalBaseSkillLevel' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetSKill, LocalIsSkillTypeSelectable) == 0x000008, "Member 'SkillStatusDescForBattleSet_C_SetSKill::LocalIsSkillTypeSelectable' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetSKill, LocalRawSkillId) == 0x00000C, "Member 'SkillStatusDescForBattleSet_C_SetSKill::LocalRawSkillId' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetSKill, LocalClassType) == 0x000010, "Member 'SkillStatusDescForBattleSet_C_SetSKill::LocalClassType' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetSKill, LocalPlayerManager) == 0x000018, "Member 'SkillStatusDescForBattleSet_C_SetSKill::LocalPlayerManager' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetSKill, Temp_int_Variable) == 0x000020, "Member 'SkillStatusDescForBattleSet_C_SetSKill::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetSKill, Temp_int_Variable_1) == 0x000024, "Member 'SkillStatusDescForBattleSet_C_SetSKill::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetSKill, K2Node_SwitchEnum_CmpSuccess) == 0x000028, "Member 'SkillStatusDescForBattleSet_C_SetSKill::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetSKill, Temp_bool_Variable) == 0x000029, "Member 'SkillStatusDescForBattleSet_C_SetSKill::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetSKill, Temp_bool_Variable_1) == 0x00002A, "Member 'SkillStatusDescForBattleSet_C_SetSKill::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetSKill, CallFunc_CheckIsSkillTypeSelectable_OutIsSkillTypeSelectable) == 0x00002B, "Member 'SkillStatusDescForBattleSet_C_SetSKill::CallFunc_CheckIsSkillTypeSelectable_OutIsSkillTypeSelectable' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetSKill, CallFunc_IsValid_ReturnValue) == 0x00002C, "Member 'SkillStatusDescForBattleSet_C_SetSKill::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetSKill, CallFunc_IsValid_ReturnValue_1) == 0x00002D, "Member 'SkillStatusDescForBattleSet_C_SetSKill::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetSKill, CallFunc_IsValid_ReturnValue_2) == 0x00002E, "Member 'SkillStatusDescForBattleSet_C_SetSKill::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetSKill, CallFunc_GetTacticalSkillBaseInfo_IsTacticalSkill) == 0x00002F, "Member 'SkillStatusDescForBattleSet_C_SetSKill::CallFunc_GetTacticalSkillBaseInfo_IsTacticalSkill' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetSKill, CallFunc_GetTacticalSkillBaseInfo_OutBaseSkillId) == 0x000030, "Member 'SkillStatusDescForBattleSet_C_SetSKill::CallFunc_GetTacticalSkillBaseInfo_OutBaseSkillId' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetSKill, CallFunc_GetTacticalSkillBaseInfo_OutBaseSkillLevel) == 0x000034, "Member 'SkillStatusDescForBattleSet_C_SetSKill::CallFunc_GetTacticalSkillBaseInfo_OutBaseSkillLevel' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetSKill, Temp_int_Variable_2) == 0x000038, "Member 'SkillStatusDescForBattleSet_C_SetSKill::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetSKill, Temp_int_Variable_3) == 0x00003C, "Member 'SkillStatusDescForBattleSet_C_SetSKill::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetSKill, CallFunc_Not_PreBool_ReturnValue) == 0x000040, "Member 'SkillStatusDescForBattleSet_C_SetSKill::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetSKill, Temp_int_Variable_4) == 0x000044, "Member 'SkillStatusDescForBattleSet_C_SetSKill::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetSKill, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000048, "Member 'SkillStatusDescForBattleSet_C_SetSKill::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetSKill, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000049, "Member 'SkillStatusDescForBattleSet_C_SetSKill::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetSKill, CallFunc_BooleanAND_ReturnValue) == 0x00004A, "Member 'SkillStatusDescForBattleSet_C_SetSKill::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetSKill, Temp_int_Variable_5) == 0x00004C, "Member 'SkillStatusDescForBattleSet_C_SetSKill::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetSKill, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000050, "Member 'SkillStatusDescForBattleSet_C_SetSKill::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetSKill, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000051, "Member 'SkillStatusDescForBattleSet_C_SetSKill::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetSKill, CallFunc_BooleanAND_ReturnValue_1) == 0x000052, "Member 'SkillStatusDescForBattleSet_C_SetSKill::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetSKill, CallFunc_CheckIfTacticalSkillIsEquppedAndItsSkillType_OutIsEquipped) == 0x000053, "Member 'SkillStatusDescForBattleSet_C_SetSKill::CallFunc_CheckIfTacticalSkillIsEquppedAndItsSkillType_OutIsEquipped' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetSKill, CallFunc_CheckIfTacticalSkillIsEquppedAndItsSkillType_OutSkillType) == 0x000054, "Member 'SkillStatusDescForBattleSet_C_SetSKill::CallFunc_CheckIfTacticalSkillIsEquppedAndItsSkillType_OutSkillType' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetSKill, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000058, "Member 'SkillStatusDescForBattleSet_C_SetSKill::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetSKill, CallFunc_IsValid_ReturnValue_3) == 0x000059, "Member 'SkillStatusDescForBattleSet_C_SetSKill::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetSKill, Temp_int_Variable_6) == 0x00005C, "Member 'SkillStatusDescForBattleSet_C_SetSKill::Temp_int_Variable_6' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetSKill, Temp_byte_Variable) == 0x000060, "Member 'SkillStatusDescForBattleSet_C_SetSKill::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetSKill, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x000061, "Member 'SkillStatusDescForBattleSet_C_SetSKill::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetSKill, K2Node_Select_Default) == 0x000064, "Member 'SkillStatusDescForBattleSet_C_SetSKill::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetSKill, K2Node_Select_Default_1) == 0x000068, "Member 'SkillStatusDescForBattleSet_C_SetSKill::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetSKill, CallFunc_GetCurrentSkillLevel_ReturnValue) == 0x00006C, "Member 'SkillStatusDescForBattleSet_C_SetSKill::CallFunc_GetCurrentSkillLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetSKill, CallFunc_FindSkillDataMaster_bIsValid) == 0x000070, "Member 'SkillStatusDescForBattleSet_C_SetSKill::CallFunc_FindSkillDataMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetSKill, CallFunc_FindSkillDataMaster_SkillDataMaster) == 0x000078, "Member 'SkillStatusDescForBattleSet_C_SetSKill::CallFunc_FindSkillDataMaster_SkillDataMaster' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetSKill, CallFunc_GetPlayerClassType_ClassType) == 0x0000D0, "Member 'SkillStatusDescForBattleSet_C_SetSKill::CallFunc_GetPlayerClassType_ClassType' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetSKill, Temp_bool_Variable_2) == 0x0000D1, "Member 'SkillStatusDescForBattleSet_C_SetSKill::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetSKill, K2Node_Select_Default_2) == 0x0000D4, "Member 'SkillStatusDescForBattleSet_C_SetSKill::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetSKill, K2Node_Select_Default_3) == 0x0000D8, "Member 'SkillStatusDescForBattleSet_C_SetSKill::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetSKill, CallFunc_IsValid_ReturnValue_4) == 0x0000DC, "Member 'SkillStatusDescForBattleSet_C_SetSKill::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetSKill, CallFunc_IsValid_ReturnValue_5) == 0x0000DD, "Member 'SkillStatusDescForBattleSet_C_SetSKill::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetSKill, CallFunc_EqualEqual_ByteByte_ReturnValue_5) == 0x0000DE, "Member 'SkillStatusDescForBattleSet_C_SetSKill::CallFunc_EqualEqual_ByteByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetSKill, CallFunc_IsValid_ReturnValue_6) == 0x0000DF, "Member 'SkillStatusDescForBattleSet_C_SetSKill::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");

// Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.SwitchDescType
// 0x0014 (0x0014 - 0x0000)
struct SkillStatusDescForBattleSet_C_SwitchDescType final
{
public:
	bool                                          InIsDescDefault;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsDescDefault;                                // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8469[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_846A[0x1];                                     // 0x000F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillStatusDescForBattleSet_C_SwitchDescType) == 0x000004, "Wrong alignment on SkillStatusDescForBattleSet_C_SwitchDescType");
static_assert(sizeof(SkillStatusDescForBattleSet_C_SwitchDescType) == 0x000014, "Wrong size on SkillStatusDescForBattleSet_C_SwitchDescType");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SwitchDescType, InIsDescDefault) == 0x000000, "Member 'SkillStatusDescForBattleSet_C_SwitchDescType::InIsDescDefault' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SwitchDescType, LocalIsDescDefault) == 0x000001, "Member 'SkillStatusDescForBattleSet_C_SwitchDescType::LocalIsDescDefault' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SwitchDescType, Temp_int_Variable) == 0x000004, "Member 'SkillStatusDescForBattleSet_C_SwitchDescType::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SwitchDescType, Temp_int_Variable_1) == 0x000008, "Member 'SkillStatusDescForBattleSet_C_SwitchDescType::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SwitchDescType, Temp_bool_Variable) == 0x00000C, "Member 'SkillStatusDescForBattleSet_C_SwitchDescType::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SwitchDescType, CallFunc_IsValid_ReturnValue) == 0x00000D, "Member 'SkillStatusDescForBattleSet_C_SwitchDescType::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SwitchDescType, CallFunc_IsValid_ReturnValue_1) == 0x00000E, "Member 'SkillStatusDescForBattleSet_C_SwitchDescType::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SwitchDescType, K2Node_Select_Default) == 0x000010, "Member 'SkillStatusDescForBattleSet_C_SwitchDescType::K2Node_Select_Default' has a wrong offset!");

// Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.SetInfoType
// 0x0001 (0x0001 - 0x0000)
struct SkillStatusDescForBattleSet_C_SetInfoType final
{
public:
	E_BattleSetInfoType                           InInfoType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillStatusDescForBattleSet_C_SetInfoType) == 0x000001, "Wrong alignment on SkillStatusDescForBattleSet_C_SetInfoType");
static_assert(sizeof(SkillStatusDescForBattleSet_C_SetInfoType) == 0x000001, "Wrong size on SkillStatusDescForBattleSet_C_SetInfoType");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetInfoType, InInfoType) == 0x000000, "Member 'SkillStatusDescForBattleSet_C_SetInfoType::InInfoType' has a wrong offset!");

// Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.SetDefaultDescType
// 0x00E8 (0x00E8 - 0x0000)
struct SkillStatusDescForBattleSet_C_SetDefaultDescType final
{
public:
	E_BattleSetInfoType                           InInfoType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIsSharedAbility;                                 // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBSkillType                                  LocalSkillType;                                    // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_846B[0x1];                                     // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalThingTextId;                                  // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalDescTextId;                                   // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalIsSharedAbility;                              // 0x000C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	E_BattleSetInfoType                           LocalInfoType;                                     // 0x000D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_846C[0x2];                                     // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_846D[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0048(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0060(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0078(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00B8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00C8(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x00E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillStatusDescForBattleSet_C_SetDefaultDescType) == 0x000008, "Wrong alignment on SkillStatusDescForBattleSet_C_SetDefaultDescType");
static_assert(sizeof(SkillStatusDescForBattleSet_C_SetDefaultDescType) == 0x0000E8, "Wrong size on SkillStatusDescForBattleSet_C_SetDefaultDescType");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetDefaultDescType, InInfoType) == 0x000000, "Member 'SkillStatusDescForBattleSet_C_SetDefaultDescType::InInfoType' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetDefaultDescType, InIsSharedAbility) == 0x000001, "Member 'SkillStatusDescForBattleSet_C_SetDefaultDescType::InIsSharedAbility' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetDefaultDescType, LocalSkillType) == 0x000002, "Member 'SkillStatusDescForBattleSet_C_SetDefaultDescType::LocalSkillType' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetDefaultDescType, LocalThingTextId) == 0x000004, "Member 'SkillStatusDescForBattleSet_C_SetDefaultDescType::LocalThingTextId' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetDefaultDescType, LocalDescTextId) == 0x000008, "Member 'SkillStatusDescForBattleSet_C_SetDefaultDescType::LocalDescTextId' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetDefaultDescType, LocalIsSharedAbility) == 0x00000C, "Member 'SkillStatusDescForBattleSet_C_SetDefaultDescType::LocalIsSharedAbility' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetDefaultDescType, LocalInfoType) == 0x00000D, "Member 'SkillStatusDescForBattleSet_C_SetDefaultDescType::LocalInfoType' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetDefaultDescType, Temp_byte_Variable) == 0x00000E, "Member 'SkillStatusDescForBattleSet_C_SetDefaultDescType::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetDefaultDescType, Temp_bool_Variable) == 0x00000F, "Member 'SkillStatusDescForBattleSet_C_SetDefaultDescType::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetDefaultDescType, Temp_int_Variable) == 0x000010, "Member 'SkillStatusDescForBattleSet_C_SetDefaultDescType::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetDefaultDescType, Temp_int_Variable_1) == 0x000014, "Member 'SkillStatusDescForBattleSet_C_SetDefaultDescType::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetDefaultDescType, Temp_bool_Variable_1) == 0x000018, "Member 'SkillStatusDescForBattleSet_C_SetDefaultDescType::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetDefaultDescType, K2Node_SwitchEnum_CmpSuccess) == 0x000019, "Member 'SkillStatusDescForBattleSet_C_SetDefaultDescType::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetDefaultDescType, K2Node_Select_Default) == 0x00001C, "Member 'SkillStatusDescForBattleSet_C_SetDefaultDescType::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetDefaultDescType, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'SkillStatusDescForBattleSet_C_SetDefaultDescType::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetDefaultDescType, CallFunc_GetTextFromAsset_ReturnValue) == 0x000028, "Member 'SkillStatusDescForBattleSet_C_SetDefaultDescType::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetDefaultDescType, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000038, "Member 'SkillStatusDescForBattleSet_C_SetDefaultDescType::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetDefaultDescType, CallFunc_Conv_StringToText_ReturnValue) == 0x000048, "Member 'SkillStatusDescForBattleSet_C_SetDefaultDescType::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetDefaultDescType, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000060, "Member 'SkillStatusDescForBattleSet_C_SetDefaultDescType::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetDefaultDescType, K2Node_MakeStruct_FormatArgumentData) == 0x000078, "Member 'SkillStatusDescForBattleSet_C_SetDefaultDescType::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetDefaultDescType, K2Node_MakeArray_Array) == 0x0000B8, "Member 'SkillStatusDescForBattleSet_C_SetDefaultDescType::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetDefaultDescType, CallFunc_Format_ReturnValue) == 0x0000C8, "Member 'SkillStatusDescForBattleSet_C_SetDefaultDescType::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetDefaultDescType, CallFunc_IsValid_ReturnValue_1) == 0x0000E0, "Member 'SkillStatusDescForBattleSet_C_SetDefaultDescType::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetDefaultDescType, Temp_byte_Variable_1) == 0x0000E1, "Member 'SkillStatusDescForBattleSet_C_SetDefaultDescType::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetDefaultDescType, K2Node_Select_Default_1) == 0x0000E2, "Member 'SkillStatusDescForBattleSet_C_SetDefaultDescType::K2Node_Select_Default_1' has a wrong offset!");

// Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.SetDescBlank
// 0x0008 (0x0008 - 0x0000)
struct SkillStatusDescForBattleSet_C_SetDescBlank final
{
public:
	bool                                          InIsDescBlank;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsDescEmpty;                                  // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillStatusDescForBattleSet_C_SetDescBlank) == 0x000001, "Wrong alignment on SkillStatusDescForBattleSet_C_SetDescBlank");
static_assert(sizeof(SkillStatusDescForBattleSet_C_SetDescBlank) == 0x000008, "Wrong size on SkillStatusDescForBattleSet_C_SetDescBlank");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetDescBlank, InIsDescBlank) == 0x000000, "Member 'SkillStatusDescForBattleSet_C_SetDescBlank::InIsDescBlank' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetDescBlank, LocalIsDescEmpty) == 0x000001, "Member 'SkillStatusDescForBattleSet_C_SetDescBlank::LocalIsDescEmpty' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetDescBlank, Temp_byte_Variable) == 0x000002, "Member 'SkillStatusDescForBattleSet_C_SetDescBlank::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetDescBlank, Temp_byte_Variable_1) == 0x000003, "Member 'SkillStatusDescForBattleSet_C_SetDescBlank::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetDescBlank, Temp_bool_Variable) == 0x000004, "Member 'SkillStatusDescForBattleSet_C_SetDescBlank::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetDescBlank, CallFunc_IsValid_ReturnValue) == 0x000005, "Member 'SkillStatusDescForBattleSet_C_SetDescBlank::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetDescBlank, K2Node_Select_Default) == 0x000006, "Member 'SkillStatusDescForBattleSet_C_SetDescBlank::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetDescBlank, CallFunc_IsValid_ReturnValue_1) == 0x000007, "Member 'SkillStatusDescForBattleSet_C_SetDescBlank::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.SwitchBaseBgType
// 0x0002 (0x0002 - 0x0000)
struct SkillStatusDescForBattleSet_C_SwitchBaseBgType final
{
public:
	bool                                          InIsNormalType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillStatusDescForBattleSet_C_SwitchBaseBgType) == 0x000001, "Wrong alignment on SkillStatusDescForBattleSet_C_SwitchBaseBgType");
static_assert(sizeof(SkillStatusDescForBattleSet_C_SwitchBaseBgType) == 0x000002, "Wrong size on SkillStatusDescForBattleSet_C_SwitchBaseBgType");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SwitchBaseBgType, InIsNormalType) == 0x000000, "Member 'SkillStatusDescForBattleSet_C_SwitchBaseBgType::InIsNormalType' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SwitchBaseBgType, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'SkillStatusDescForBattleSet_C_SwitchBaseBgType::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.SetClassAbilityRemoveBtnVisibility
// 0x0006 (0x0006 - 0x0000)
struct SkillStatusDescForBattleSet_C_SetClassAbilityRemoveBtnVisibility final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillStatusDescForBattleSet_C_SetClassAbilityRemoveBtnVisibility) == 0x000001, "Wrong alignment on SkillStatusDescForBattleSet_C_SetClassAbilityRemoveBtnVisibility");
static_assert(sizeof(SkillStatusDescForBattleSet_C_SetClassAbilityRemoveBtnVisibility) == 0x000006, "Wrong size on SkillStatusDescForBattleSet_C_SetClassAbilityRemoveBtnVisibility");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetClassAbilityRemoveBtnVisibility, InIsVisible) == 0x000000, "Member 'SkillStatusDescForBattleSet_C_SetClassAbilityRemoveBtnVisibility::InIsVisible' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetClassAbilityRemoveBtnVisibility, Temp_byte_Variable) == 0x000001, "Member 'SkillStatusDescForBattleSet_C_SetClassAbilityRemoveBtnVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetClassAbilityRemoveBtnVisibility, Temp_byte_Variable_1) == 0x000002, "Member 'SkillStatusDescForBattleSet_C_SetClassAbilityRemoveBtnVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetClassAbilityRemoveBtnVisibility, Temp_bool_Variable) == 0x000003, "Member 'SkillStatusDescForBattleSet_C_SetClassAbilityRemoveBtnVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetClassAbilityRemoveBtnVisibility, K2Node_Select_Default) == 0x000004, "Member 'SkillStatusDescForBattleSet_C_SetClassAbilityRemoveBtnVisibility::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetClassAbilityRemoveBtnVisibility, CallFunc_IsValid_ReturnValue) == 0x000005, "Member 'SkillStatusDescForBattleSet_C_SetClassAbilityRemoveBtnVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.SwitchStatusType
// 0x0020 (0x0020 - 0x0000)
struct SkillStatusDescForBattleSet_C_SwitchStatusType final
{
public:
	int32                                         InStatusTypeId;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_846E[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_846F[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillStatusDescForBattleSet_C_SwitchStatusType) == 0x000004, "Wrong alignment on SkillStatusDescForBattleSet_C_SwitchStatusType");
static_assert(sizeof(SkillStatusDescForBattleSet_C_SwitchStatusType) == 0x000020, "Wrong size on SkillStatusDescForBattleSet_C_SwitchStatusType");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SwitchStatusType, InStatusTypeId) == 0x000000, "Member 'SkillStatusDescForBattleSet_C_SwitchStatusType::InStatusTypeId' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SwitchStatusType, Temp_int_Variable) == 0x000004, "Member 'SkillStatusDescForBattleSet_C_SwitchStatusType::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SwitchStatusType, Temp_bool_Variable) == 0x000008, "Member 'SkillStatusDescForBattleSet_C_SwitchStatusType::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SwitchStatusType, CallFunc_GetChildrenCount_ReturnValue) == 0x00000C, "Member 'SkillStatusDescForBattleSet_C_SwitchStatusType::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SwitchStatusType, CallFunc_Subtract_IntInt_ReturnValue) == 0x000010, "Member 'SkillStatusDescForBattleSet_C_SwitchStatusType::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SwitchStatusType, CallFunc_Greater_IntInt_ReturnValue) == 0x000014, "Member 'SkillStatusDescForBattleSet_C_SwitchStatusType::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SwitchStatusType, CallFunc_IsValid_ReturnValue) == 0x000015, "Member 'SkillStatusDescForBattleSet_C_SwitchStatusType::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SwitchStatusType, K2Node_Select_Default) == 0x000018, "Member 'SkillStatusDescForBattleSet_C_SwitchStatusType::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SwitchStatusType, CallFunc_Clamp_ReturnValue) == 0x00001C, "Member 'SkillStatusDescForBattleSet_C_SwitchStatusType::CallFunc_Clamp_ReturnValue' has a wrong offset!");

// Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.SetWindowSize
// 0x0038 (0x0038 - 0x0000)
struct SkillStatusDescForBattleSet_C_SetWindowSize final
{
public:
	struct FVector2D                              InWindowSize;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8470[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8471[0x2];                                     // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector2D_X;                          // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8472[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillStatusDescForBattleSet_C_SetWindowSize) == 0x000008, "Wrong alignment on SkillStatusDescForBattleSet_C_SetWindowSize");
static_assert(sizeof(SkillStatusDescForBattleSet_C_SetWindowSize) == 0x000038, "Wrong size on SkillStatusDescForBattleSet_C_SetWindowSize");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetWindowSize, InWindowSize) == 0x000000, "Member 'SkillStatusDescForBattleSet_C_SetWindowSize::InWindowSize' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetWindowSize, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'SkillStatusDescForBattleSet_C_SetWindowSize::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetWindowSize, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000010, "Member 'SkillStatusDescForBattleSet_C_SetWindowSize::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetWindowSize, CallFunc_IsValid_ReturnValue_1) == 0x000018, "Member 'SkillStatusDescForBattleSet_C_SetWindowSize::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetWindowSize, CallFunc_IsValid_ReturnValue_2) == 0x000019, "Member 'SkillStatusDescForBattleSet_C_SetWindowSize::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetWindowSize, CallFunc_BreakVector2D_X) == 0x00001C, "Member 'SkillStatusDescForBattleSet_C_SetWindowSize::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetWindowSize, CallFunc_BreakVector2D_Y) == 0x000020, "Member 'SkillStatusDescForBattleSet_C_SetWindowSize::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetWindowSize, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000028, "Member 'SkillStatusDescForBattleSet_C_SetWindowSize::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetWindowSize, CallFunc_IsValid_ReturnValue_3) == 0x000030, "Member 'SkillStatusDescForBattleSet_C_SetWindowSize::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_SetWindowSize, CallFunc_IsValid_ReturnValue_4) == 0x000031, "Member 'SkillStatusDescForBattleSet_C_SetWindowSize::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");

// Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.CheckIfTacticalSkillIsEquppedAndItsSkillType
// 0x00D8 (0x00D8 - 0x0000)
struct SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType final
{
public:
	int32                                         InSkillId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OutIsEquipped;                                     // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8473[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         OutSkillType;                                      // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalEquipedSkillId;                               // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalTacticalSkillSlotMax;                         // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8474[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   LocalMasterDataManager;                            // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSkillType                                  LocalSkillType;                                    // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8475[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalSkillIdForLoop;                               // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalSkillId;                                      // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8476[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindSkillDataMaster_bIsValid;             // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8477[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 CallFunc_FindSkillDataMaster_SkillDataMaster;      // 0x0040(0x0058)()
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x009D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8478[0x2];                                     // 0x009E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_2;                               // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetEquipedArtsId_ReturnValue;             // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8479[0x3];                                     // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x00C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_847A[0x1];                                     // 0x00C3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x00CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x00CB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x00CD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_6;        // 0x00CE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00CF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType) == 0x000008, "Wrong alignment on SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType");
static_assert(sizeof(SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType) == 0x0000D8, "Wrong size on SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType, InSkillId) == 0x000000, "Member 'SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType::InSkillId' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType, OutIsEquipped) == 0x000004, "Member 'SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType::OutIsEquipped' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType, OutSkillType) == 0x000008, "Member 'SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType::OutSkillType' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType, LocalEquipedSkillId) == 0x00000C, "Member 'SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType::LocalEquipedSkillId' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType, LocalTacticalSkillSlotMax) == 0x000010, "Member 'SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType::LocalTacticalSkillSlotMax' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType, LocalMasterDataManager) == 0x000018, "Member 'SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType::LocalMasterDataManager' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType, LocalSkillType) == 0x000020, "Member 'SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType::LocalSkillType' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType, LocalSkillIdForLoop) == 0x000024, "Member 'SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType::LocalSkillIdForLoop' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType, LocalSkillId) == 0x000028, "Member 'SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType::LocalSkillId' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType, Temp_int_Variable) == 0x00002C, "Member 'SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType, Temp_int_Variable_1) == 0x000030, "Member 'SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType, CallFunc_Greater_IntInt_ReturnValue) == 0x000034, "Member 'SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType, CallFunc_MakeLiteralInt_ReturnValue) == 0x000038, "Member 'SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType, CallFunc_FindSkillDataMaster_bIsValid) == 0x00003C, "Member 'SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType::CallFunc_FindSkillDataMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType, CallFunc_FindSkillDataMaster_SkillDataMaster) == 0x000040, "Member 'SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType::CallFunc_FindSkillDataMaster_SkillDataMaster' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType, CallFunc_Subtract_IntInt_ReturnValue) == 0x000098, "Member 'SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00009C, "Member 'SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00009D, "Member 'SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType, Temp_int_Variable_2) == 0x0000A0, "Member 'SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType, CallFunc_GetEquipedArtsId_ReturnValue) == 0x0000A4, "Member 'SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType::CallFunc_GetEquipedArtsId_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000A8, "Member 'SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType, CallFunc_Add_IntInt_ReturnValue) == 0x0000AC, "Member 'SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000B0, "Member 'SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType, Temp_int_Variable_3) == 0x0000B4, "Member 'SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType, Temp_int_Variable_4) == 0x0000B8, "Member 'SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000BC, "Member 'SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType, CallFunc_Conv_IntToByte_ReturnValue) == 0x0000C0, "Member 'SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType, CallFunc_Less_IntInt_ReturnValue) == 0x0000C1, "Member 'SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x0000C2, "Member 'SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType, CallFunc_Conv_ByteToInt_ReturnValue) == 0x0000C4, "Member 'SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000C8, "Member 'SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0000C9, "Member 'SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x0000CA, "Member 'SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x0000CB, "Member 'SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x0000CC, "Member 'SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType, CallFunc_EqualEqual_ByteByte_ReturnValue_5) == 0x0000CD, "Member 'SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType::CallFunc_EqualEqual_ByteByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType, CallFunc_EqualEqual_ByteByte_ReturnValue_6) == 0x0000CE, "Member 'SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType::CallFunc_EqualEqual_ByteByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType, CallFunc_BooleanOR_ReturnValue) == 0x0000CF, "Member 'SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType, CallFunc_BooleanOR_ReturnValue_1) == 0x0000D0, "Member 'SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType, CallFunc_BooleanOR_ReturnValue_2) == 0x0000D1, "Member 'SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");

// Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.GetTacticalSkillBaseInfo
// 0x0080 (0x0080 - 0x0000)
struct SkillStatusDescForBattleSet_C_GetTacticalSkillBaseInfo final
{
public:
	struct FSBSkillDataMasterData                 InSkillMasterData;                                 // 0x0000(0x0058)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          IsTacticalSkill;                                   // 0x0058(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_847B[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         OutBaseSkillId;                                    // 0x005C(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OutBaseSkillLevel;                                 // 0x0060(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalConditionSkillId;                             // 0x0064(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSkillAbilityType                           LocalAbilityType;                                  // 0x0068(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSkillType                                  LocalSkillType;                                    // 0x0069(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_847C[0x2];                                     // 0x006A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalSkillLevel;                                   // 0x006C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalSkillId;                                      // 0x0070(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCurrentSkillLevel_ReturnValue;         // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCurrentSkillLevel_ReturnValue_1;       // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x007D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillStatusDescForBattleSet_C_GetTacticalSkillBaseInfo) == 0x000008, "Wrong alignment on SkillStatusDescForBattleSet_C_GetTacticalSkillBaseInfo");
static_assert(sizeof(SkillStatusDescForBattleSet_C_GetTacticalSkillBaseInfo) == 0x000080, "Wrong size on SkillStatusDescForBattleSet_C_GetTacticalSkillBaseInfo");
static_assert(offsetof(SkillStatusDescForBattleSet_C_GetTacticalSkillBaseInfo, InSkillMasterData) == 0x000000, "Member 'SkillStatusDescForBattleSet_C_GetTacticalSkillBaseInfo::InSkillMasterData' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_GetTacticalSkillBaseInfo, IsTacticalSkill) == 0x000058, "Member 'SkillStatusDescForBattleSet_C_GetTacticalSkillBaseInfo::IsTacticalSkill' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_GetTacticalSkillBaseInfo, OutBaseSkillId) == 0x00005C, "Member 'SkillStatusDescForBattleSet_C_GetTacticalSkillBaseInfo::OutBaseSkillId' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_GetTacticalSkillBaseInfo, OutBaseSkillLevel) == 0x000060, "Member 'SkillStatusDescForBattleSet_C_GetTacticalSkillBaseInfo::OutBaseSkillLevel' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_GetTacticalSkillBaseInfo, LocalConditionSkillId) == 0x000064, "Member 'SkillStatusDescForBattleSet_C_GetTacticalSkillBaseInfo::LocalConditionSkillId' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_GetTacticalSkillBaseInfo, LocalAbilityType) == 0x000068, "Member 'SkillStatusDescForBattleSet_C_GetTacticalSkillBaseInfo::LocalAbilityType' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_GetTacticalSkillBaseInfo, LocalSkillType) == 0x000069, "Member 'SkillStatusDescForBattleSet_C_GetTacticalSkillBaseInfo::LocalSkillType' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_GetTacticalSkillBaseInfo, LocalSkillLevel) == 0x00006C, "Member 'SkillStatusDescForBattleSet_C_GetTacticalSkillBaseInfo::LocalSkillLevel' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_GetTacticalSkillBaseInfo, LocalSkillId) == 0x000070, "Member 'SkillStatusDescForBattleSet_C_GetTacticalSkillBaseInfo::LocalSkillId' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_GetTacticalSkillBaseInfo, CallFunc_GetCurrentSkillLevel_ReturnValue) == 0x000074, "Member 'SkillStatusDescForBattleSet_C_GetTacticalSkillBaseInfo::CallFunc_GetCurrentSkillLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_GetTacticalSkillBaseInfo, CallFunc_GetCurrentSkillLevel_ReturnValue_1) == 0x000078, "Member 'SkillStatusDescForBattleSet_C_GetTacticalSkillBaseInfo::CallFunc_GetCurrentSkillLevel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_GetTacticalSkillBaseInfo, K2Node_SwitchEnum_CmpSuccess) == 0x00007C, "Member 'SkillStatusDescForBattleSet_C_GetTacticalSkillBaseInfo::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_GetTacticalSkillBaseInfo, K2Node_SwitchEnum_CmpSuccess_1) == 0x00007D, "Member 'SkillStatusDescForBattleSet_C_GetTacticalSkillBaseInfo::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");

// Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.CheckIsSkillTypeSelectable
// 0x03B8 (0x03B8 - 0x0000)
struct SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable final
{
public:
	int32                                         InSkillId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InSkillLevel;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OutIsSkillTypeSelectable;                          // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsSkillTypeSelectable;                        // 0x0009(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_847D[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 LocalAbilityConditionSkillLevel1List;              // 0x0010(0x0010)(Edit, BlueprintVisible)
	struct FSBSkillDataMasterData                 LocalAbilitySkillMasterData;                       // 0x0020(0x0058)(Edit, BlueprintVisible)
	TArray<class FName>                           LocalRowNames;                                     // 0x0078(0x0010)(Edit, BlueprintVisible)
	class UDataTable*                             LocalSkillDataTable;                               // 0x0088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBSkillDataMasterData                 LocalSkillMasterData;                              // 0x0090(0x0058)(Edit, BlueprintVisible)
	int32                                         LocalSkillLevel;                                   // 0x00E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalSkillId;                                      // 0x00EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_847E[0x2];                                     // 0x00FE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0100(0x0010)(ReferenceParm)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_847F[0x2];                                     // 0x0112(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8480[0x3];                                     // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0124(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0135(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0136(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8481[0x1];                                     // 0x0137(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x013D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x013E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x013F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x0141(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0142(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8482[0x5];                                     // 0x0143(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlayerSkillData                     CallFunc_GetDataTableRowFromName_OutRow;           // 0x0148(0x0180)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x02C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x02C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x02CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindSkillDataMaster_bIsValid;             // 0x02CB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8483[0x4];                                     // 0x02CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 CallFunc_FindSkillDataMaster_SkillDataMaster;      // 0x02D0(0x0058)()
	bool                                          CallFunc_FindSkillDataMaster_bIsValid_1;           // 0x0328(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8484[0x7];                                     // 0x0329(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 CallFunc_FindSkillDataMaster_SkillDataMaster_1;    // 0x0330(0x0058)()
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0388(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item_1;                         // 0x038C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0390(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8485[0x7];                                     // 0x0391(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x0398(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x03A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8486[0x7];                                     // 0x03A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDataTable*                             CallFunc_GetSkillDataTable_ReturnValue;            // 0x03A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x03B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable) == 0x000008, "Wrong alignment on SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable");
static_assert(sizeof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable) == 0x0003B8, "Wrong size on SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, InSkillId) == 0x000000, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::InSkillId' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, InSkillLevel) == 0x000004, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::InSkillLevel' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, OutIsSkillTypeSelectable) == 0x000008, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::OutIsSkillTypeSelectable' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, LocalIsSkillTypeSelectable) == 0x000009, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::LocalIsSkillTypeSelectable' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, LocalAbilityConditionSkillLevel1List) == 0x000010, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::LocalAbilityConditionSkillLevel1List' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, LocalAbilitySkillMasterData) == 0x000020, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::LocalAbilitySkillMasterData' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, LocalRowNames) == 0x000078, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::LocalRowNames' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, LocalSkillDataTable) == 0x000088, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::LocalSkillDataTable' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, LocalSkillMasterData) == 0x000090, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::LocalSkillMasterData' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, LocalSkillLevel) == 0x0000E8, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::LocalSkillLevel' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, LocalSkillId) == 0x0000EC, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::LocalSkillId' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, Temp_int_Loop_Counter_Variable) == 0x0000F0, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, CallFunc_Add_IntInt_ReturnValue) == 0x0000F4, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, Temp_int_Array_Index_Variable) == 0x0000F8, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, Temp_bool_True_if_break_was_hit_Variable) == 0x0000FC, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, CallFunc_Not_PreBool_ReturnValue) == 0x0000FD, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000100, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, K2Node_SwitchEnum_CmpSuccess) == 0x000110, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000111, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, CallFunc_Array_Length_ReturnValue) == 0x000114, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, CallFunc_Greater_IntInt_ReturnValue) == 0x000118, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, CallFunc_Array_Length_ReturnValue_1) == 0x00011C, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, CallFunc_Array_Add_ReturnValue) == 0x000120, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, CallFunc_Array_Get_Item) == 0x000124, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, CallFunc_Array_Length_ReturnValue_2) == 0x00012C, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, Temp_int_Loop_Counter_Variable_1) == 0x000130, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, CallFunc_Less_IntInt_ReturnValue) == 0x000134, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, CallFunc_Less_IntInt_ReturnValue_1) == 0x000135, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, CallFunc_BooleanAND_ReturnValue) == 0x000136, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, CallFunc_Add_IntInt_ReturnValue_1) == 0x000138, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00013C, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00013D, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, CallFunc_BooleanAND_ReturnValue_1) == 0x00013E, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x00013F, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000140, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x000141, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, CallFunc_BooleanOR_ReturnValue) == 0x000142, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, CallFunc_GetDataTableRowFromName_OutRow) == 0x000148, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0002C8, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, CallFunc_BooleanOR_ReturnValue_1) == 0x0002C9, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, CallFunc_BooleanOR_ReturnValue_2) == 0x0002CA, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, CallFunc_FindSkillDataMaster_bIsValid) == 0x0002CB, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::CallFunc_FindSkillDataMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, CallFunc_FindSkillDataMaster_SkillDataMaster) == 0x0002D0, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::CallFunc_FindSkillDataMaster_SkillDataMaster' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, CallFunc_FindSkillDataMaster_bIsValid_1) == 0x000328, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::CallFunc_FindSkillDataMaster_bIsValid_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, CallFunc_FindSkillDataMaster_SkillDataMaster_1) == 0x000330, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::CallFunc_FindSkillDataMaster_SkillDataMaster_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, Temp_int_Array_Index_Variable_1) == 0x000388, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, CallFunc_Array_Get_Item_1) == 0x00038C, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000390, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, CallFunc_GetPlayerManager_ReturnValue) == 0x000398, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, CallFunc_IsValid_ReturnValue) == 0x0003A0, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, CallFunc_GetSkillDataTable_ReturnValue) == 0x0003A8, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::CallFunc_GetSkillDataTable_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable, CallFunc_IsValid_ReturnValue_1) == 0x0003B0, "Member 'SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

}

