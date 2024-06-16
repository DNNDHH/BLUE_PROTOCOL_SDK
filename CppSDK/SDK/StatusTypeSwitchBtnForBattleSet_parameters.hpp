#pragma once

 

// Package: StatusTypeSwitchBtnForBattleSet

#include "Basic.hpp"

#include "E_BattleSetInfoType_structs.hpp"


namespace SDK::Params
{

// Function StatusTypeSwitchBtnForBattleSet.StatusTypeSwitchBtnForBattleSet_C.OnSwitchBtnPressed__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct StatusTypeSwitchBtnForBattleSet_C_OnSwitchBtnPressed__DelegateSignature final
{
public:
	int32                                         InPressedSwitchBtnId;                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StatusTypeSwitchBtnForBattleSet_C_OnSwitchBtnPressed__DelegateSignature) == 0x000004, "Wrong alignment on StatusTypeSwitchBtnForBattleSet_C_OnSwitchBtnPressed__DelegateSignature");
static_assert(sizeof(StatusTypeSwitchBtnForBattleSet_C_OnSwitchBtnPressed__DelegateSignature) == 0x000004, "Wrong size on StatusTypeSwitchBtnForBattleSet_C_OnSwitchBtnPressed__DelegateSignature");
static_assert(offsetof(StatusTypeSwitchBtnForBattleSet_C_OnSwitchBtnPressed__DelegateSignature, InPressedSwitchBtnId) == 0x000000, "Member 'StatusTypeSwitchBtnForBattleSet_C_OnSwitchBtnPressed__DelegateSignature::InPressedSwitchBtnId' has a wrong offset!");

// Function StatusTypeSwitchBtnForBattleSet.StatusTypeSwitchBtnForBattleSet_C.ExecuteUbergraph_StatusTypeSwitchBtnForBattleSet
// 0x0008 (0x0008 - 0x0000)
struct StatusTypeSwitchBtnForBattleSet_C_ExecuteUbergraph_StatusTypeSwitchBtnForBattleSet final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StatusTypeSwitchBtnForBattleSet_C_ExecuteUbergraph_StatusTypeSwitchBtnForBattleSet) == 0x000004, "Wrong alignment on StatusTypeSwitchBtnForBattleSet_C_ExecuteUbergraph_StatusTypeSwitchBtnForBattleSet");
static_assert(sizeof(StatusTypeSwitchBtnForBattleSet_C_ExecuteUbergraph_StatusTypeSwitchBtnForBattleSet) == 0x000008, "Wrong size on StatusTypeSwitchBtnForBattleSet_C_ExecuteUbergraph_StatusTypeSwitchBtnForBattleSet");
static_assert(offsetof(StatusTypeSwitchBtnForBattleSet_C_ExecuteUbergraph_StatusTypeSwitchBtnForBattleSet, EntryPoint) == 0x000000, "Member 'StatusTypeSwitchBtnForBattleSet_C_ExecuteUbergraph_StatusTypeSwitchBtnForBattleSet::EntryPoint' has a wrong offset!");
static_assert(offsetof(StatusTypeSwitchBtnForBattleSet_C_ExecuteUbergraph_StatusTypeSwitchBtnForBattleSet, K2Node_Event_IsDesignTime) == 0x000004, "Member 'StatusTypeSwitchBtnForBattleSet_C_ExecuteUbergraph_StatusTypeSwitchBtnForBattleSet::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function StatusTypeSwitchBtnForBattleSet.StatusTypeSwitchBtnForBattleSet_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct StatusTypeSwitchBtnForBattleSet_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StatusTypeSwitchBtnForBattleSet_C_PreConstruct) == 0x000001, "Wrong alignment on StatusTypeSwitchBtnForBattleSet_C_PreConstruct");
static_assert(sizeof(StatusTypeSwitchBtnForBattleSet_C_PreConstruct) == 0x000001, "Wrong size on StatusTypeSwitchBtnForBattleSet_C_PreConstruct");
static_assert(offsetof(StatusTypeSwitchBtnForBattleSet_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'StatusTypeSwitchBtnForBattleSet_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function StatusTypeSwitchBtnForBattleSet.StatusTypeSwitchBtnForBattleSet_C.SetInfoType
// 0x000C (0x000C - 0x0000)
struct StatusTypeSwitchBtnForBattleSet_C_SetInfoType final
{
public:
	E_BattleSetInfoType                           InInfoType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8455[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalTextId;                                       // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StatusTypeSwitchBtnForBattleSet_C_SetInfoType) == 0x000004, "Wrong alignment on StatusTypeSwitchBtnForBattleSet_C_SetInfoType");
static_assert(sizeof(StatusTypeSwitchBtnForBattleSet_C_SetInfoType) == 0x00000C, "Wrong size on StatusTypeSwitchBtnForBattleSet_C_SetInfoType");
static_assert(offsetof(StatusTypeSwitchBtnForBattleSet_C_SetInfoType, InInfoType) == 0x000000, "Member 'StatusTypeSwitchBtnForBattleSet_C_SetInfoType::InInfoType' has a wrong offset!");
static_assert(offsetof(StatusTypeSwitchBtnForBattleSet_C_SetInfoType, LocalTextId) == 0x000004, "Member 'StatusTypeSwitchBtnForBattleSet_C_SetInfoType::LocalTextId' has a wrong offset!");
static_assert(offsetof(StatusTypeSwitchBtnForBattleSet_C_SetInfoType, K2Node_SwitchEnum_CmpSuccess) == 0x000008, "Member 'StatusTypeSwitchBtnForBattleSet_C_SetInfoType::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(StatusTypeSwitchBtnForBattleSet_C_SetInfoType, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'StatusTypeSwitchBtnForBattleSet_C_SetInfoType::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function StatusTypeSwitchBtnForBattleSet.StatusTypeSwitchBtnForBattleSet_C.SetSelectedSwitchBtn
// 0x000C (0x000C - 0x0000)
struct StatusTypeSwitchBtnForBattleSet_C_SetSelectedSwitchBtn final
{
public:
	int32                                         InSelectedSwitchBtnId;                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StatusTypeSwitchBtnForBattleSet_C_SetSelectedSwitchBtn) == 0x000004, "Wrong alignment on StatusTypeSwitchBtnForBattleSet_C_SetSelectedSwitchBtn");
static_assert(sizeof(StatusTypeSwitchBtnForBattleSet_C_SetSelectedSwitchBtn) == 0x00000C, "Wrong size on StatusTypeSwitchBtnForBattleSet_C_SetSelectedSwitchBtn");
static_assert(offsetof(StatusTypeSwitchBtnForBattleSet_C_SetSelectedSwitchBtn, InSelectedSwitchBtnId) == 0x000000, "Member 'StatusTypeSwitchBtnForBattleSet_C_SetSelectedSwitchBtn::InSelectedSwitchBtnId' has a wrong offset!");
static_assert(offsetof(StatusTypeSwitchBtnForBattleSet_C_SetSelectedSwitchBtn, K2Node_SwitchInteger_CmpSuccess) == 0x000004, "Member 'StatusTypeSwitchBtnForBattleSet_C_SetSelectedSwitchBtn::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(StatusTypeSwitchBtnForBattleSet_C_SetSelectedSwitchBtn, CallFunc_IsValid_ReturnValue) == 0x000005, "Member 'StatusTypeSwitchBtnForBattleSet_C_SetSelectedSwitchBtn::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(StatusTypeSwitchBtnForBattleSet_C_SetSelectedSwitchBtn, CallFunc_IsValid_ReturnValue_1) == 0x000006, "Member 'StatusTypeSwitchBtnForBattleSet_C_SetSelectedSwitchBtn::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StatusTypeSwitchBtnForBattleSet_C_SetSelectedSwitchBtn, CallFunc_IsValid_ReturnValue_2) == 0x000007, "Member 'StatusTypeSwitchBtnForBattleSet_C_SetSelectedSwitchBtn::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StatusTypeSwitchBtnForBattleSet_C_SetSelectedSwitchBtn, CallFunc_IsValid_ReturnValue_3) == 0x000008, "Member 'StatusTypeSwitchBtnForBattleSet_C_SetSelectedSwitchBtn::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

}

