#pragma once

 

// Package: PassiveImagineInfoUnitForBattleSet

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.OnImagineIconBtnClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct PassiveImagineInfoUnitForBattleSet_C_OnImagineIconBtnClicked__DelegateSignature final
{
public:
	ESBPlayerPassiveImagineSlotType               InPassiveImagineSlotType;                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4288[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InPassiveImagineItemId;                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PassiveImagineInfoUnitForBattleSet_C_OnImagineIconBtnClicked__DelegateSignature) == 0x000004, "Wrong alignment on PassiveImagineInfoUnitForBattleSet_C_OnImagineIconBtnClicked__DelegateSignature");
static_assert(sizeof(PassiveImagineInfoUnitForBattleSet_C_OnImagineIconBtnClicked__DelegateSignature) == 0x000008, "Wrong size on PassiveImagineInfoUnitForBattleSet_C_OnImagineIconBtnClicked__DelegateSignature");
static_assert(offsetof(PassiveImagineInfoUnitForBattleSet_C_OnImagineIconBtnClicked__DelegateSignature, InPassiveImagineSlotType) == 0x000000, "Member 'PassiveImagineInfoUnitForBattleSet_C_OnImagineIconBtnClicked__DelegateSignature::InPassiveImagineSlotType' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoUnitForBattleSet_C_OnImagineIconBtnClicked__DelegateSignature, InPassiveImagineItemId) == 0x000004, "Member 'PassiveImagineInfoUnitForBattleSet_C_OnImagineIconBtnClicked__DelegateSignature::InPassiveImagineItemId' has a wrong offset!");

// Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.ExecuteUbergraph_PassiveImagineInfoUnitForBattleSet
// 0x0010 (0x0010 - 0x0000)
struct PassiveImagineInfoUnitForBattleSet_C_ExecuteUbergraph_PassiveImagineInfoUnitForBattleSet final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBPlayerPassiveImagineSlotType               K2Node_ComponentBoundEvent_InPassiveImagineSlotType; // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4289[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_ComponentBoundEvent_InPassiveImagineItemId; // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PassiveImagineInfoUnitForBattleSet_C_ExecuteUbergraph_PassiveImagineInfoUnitForBattleSet) == 0x000004, "Wrong alignment on PassiveImagineInfoUnitForBattleSet_C_ExecuteUbergraph_PassiveImagineInfoUnitForBattleSet");
static_assert(sizeof(PassiveImagineInfoUnitForBattleSet_C_ExecuteUbergraph_PassiveImagineInfoUnitForBattleSet) == 0x000010, "Wrong size on PassiveImagineInfoUnitForBattleSet_C_ExecuteUbergraph_PassiveImagineInfoUnitForBattleSet");
static_assert(offsetof(PassiveImagineInfoUnitForBattleSet_C_ExecuteUbergraph_PassiveImagineInfoUnitForBattleSet, EntryPoint) == 0x000000, "Member 'PassiveImagineInfoUnitForBattleSet_C_ExecuteUbergraph_PassiveImagineInfoUnitForBattleSet::EntryPoint' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoUnitForBattleSet_C_ExecuteUbergraph_PassiveImagineInfoUnitForBattleSet, K2Node_ComponentBoundEvent_InPassiveImagineSlotType) == 0x000004, "Member 'PassiveImagineInfoUnitForBattleSet_C_ExecuteUbergraph_PassiveImagineInfoUnitForBattleSet::K2Node_ComponentBoundEvent_InPassiveImagineSlotType' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoUnitForBattleSet_C_ExecuteUbergraph_PassiveImagineInfoUnitForBattleSet, K2Node_ComponentBoundEvent_InPassiveImagineItemId) == 0x000008, "Member 'PassiveImagineInfoUnitForBattleSet_C_ExecuteUbergraph_PassiveImagineInfoUnitForBattleSet::K2Node_ComponentBoundEvent_InPassiveImagineItemId' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoUnitForBattleSet_C_ExecuteUbergraph_PassiveImagineInfoUnitForBattleSet, K2Node_Event_IsDesignTime) == 0x00000C, "Member 'PassiveImagineInfoUnitForBattleSet_C_ExecuteUbergraph_PassiveImagineInfoUnitForBattleSet::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.BndEvt__PassiveImagineInfoUnitForBattleSet_PassiveImagineIconBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct PassiveImagineInfoUnitForBattleSet_C_BndEvt__PassiveImagineInfoUnitForBattleSet_PassiveImagineIconBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature final
{
public:
	ESBPlayerPassiveImagineSlotType               InPassiveImagineSlotType;                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_428A[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InPassiveImagineItemId;                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PassiveImagineInfoUnitForBattleSet_C_BndEvt__PassiveImagineInfoUnitForBattleSet_PassiveImagineIconBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature) == 0x000004, "Wrong alignment on PassiveImagineInfoUnitForBattleSet_C_BndEvt__PassiveImagineInfoUnitForBattleSet_PassiveImagineIconBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
static_assert(sizeof(PassiveImagineInfoUnitForBattleSet_C_BndEvt__PassiveImagineInfoUnitForBattleSet_PassiveImagineIconBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature) == 0x000008, "Wrong size on PassiveImagineInfoUnitForBattleSet_C_BndEvt__PassiveImagineInfoUnitForBattleSet_PassiveImagineIconBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
static_assert(offsetof(PassiveImagineInfoUnitForBattleSet_C_BndEvt__PassiveImagineInfoUnitForBattleSet_PassiveImagineIconBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature, InPassiveImagineSlotType) == 0x000000, "Member 'PassiveImagineInfoUnitForBattleSet_C_BndEvt__PassiveImagineInfoUnitForBattleSet_PassiveImagineIconBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature::InPassiveImagineSlotType' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoUnitForBattleSet_C_BndEvt__PassiveImagineInfoUnitForBattleSet_PassiveImagineIconBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature, InPassiveImagineItemId) == 0x000004, "Member 'PassiveImagineInfoUnitForBattleSet_C_BndEvt__PassiveImagineInfoUnitForBattleSet_PassiveImagineIconBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature::InPassiveImagineItemId' has a wrong offset!");

// Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct PassiveImagineInfoUnitForBattleSet_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PassiveImagineInfoUnitForBattleSet_C_PreConstruct) == 0x000001, "Wrong alignment on PassiveImagineInfoUnitForBattleSet_C_PreConstruct");
static_assert(sizeof(PassiveImagineInfoUnitForBattleSet_C_PreConstruct) == 0x000001, "Wrong size on PassiveImagineInfoUnitForBattleSet_C_PreConstruct");
static_assert(offsetof(PassiveImagineInfoUnitForBattleSet_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'PassiveImagineInfoUnitForBattleSet_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.SetImagineSlotType
// 0x0048 (0x0048 - 0x0000)
struct PassiveImagineInfoUnitForBattleSet_C_SetImagineSlotType final
{
public:
	ESBPlayerPassiveImagineSlotType               InImagineSlotType;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_428B[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x000C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0010(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x0014(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBPlayerPassiveImagineSlotType               Temp_byte_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_428C[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x001C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
};
static_assert(alignof(PassiveImagineInfoUnitForBattleSet_C_SetImagineSlotType) == 0x000008, "Wrong alignment on PassiveImagineInfoUnitForBattleSet_C_SetImagineSlotType");
static_assert(sizeof(PassiveImagineInfoUnitForBattleSet_C_SetImagineSlotType) == 0x000048, "Wrong size on PassiveImagineInfoUnitForBattleSet_C_SetImagineSlotType");
static_assert(offsetof(PassiveImagineInfoUnitForBattleSet_C_SetImagineSlotType, InImagineSlotType) == 0x000000, "Member 'PassiveImagineInfoUnitForBattleSet_C_SetImagineSlotType::InImagineSlotType' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoUnitForBattleSet_C_SetImagineSlotType, Temp_int_Variable) == 0x000004, "Member 'PassiveImagineInfoUnitForBattleSet_C_SetImagineSlotType::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoUnitForBattleSet_C_SetImagineSlotType, Temp_int_Variable_1) == 0x000008, "Member 'PassiveImagineInfoUnitForBattleSet_C_SetImagineSlotType::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoUnitForBattleSet_C_SetImagineSlotType, Temp_int_Variable_2) == 0x00000C, "Member 'PassiveImagineInfoUnitForBattleSet_C_SetImagineSlotType::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoUnitForBattleSet_C_SetImagineSlotType, Temp_int_Variable_3) == 0x000010, "Member 'PassiveImagineInfoUnitForBattleSet_C_SetImagineSlotType::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoUnitForBattleSet_C_SetImagineSlotType, Temp_int_Variable_4) == 0x000014, "Member 'PassiveImagineInfoUnitForBattleSet_C_SetImagineSlotType::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoUnitForBattleSet_C_SetImagineSlotType, Temp_byte_Variable) == 0x000018, "Member 'PassiveImagineInfoUnitForBattleSet_C_SetImagineSlotType::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoUnitForBattleSet_C_SetImagineSlotType, K2Node_Select_Default) == 0x00001C, "Member 'PassiveImagineInfoUnitForBattleSet_C_SetImagineSlotType::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoUnitForBattleSet_C_SetImagineSlotType, CallFunc_GetTextFromAsset_ReturnValue) == 0x000020, "Member 'PassiveImagineInfoUnitForBattleSet_C_SetImagineSlotType::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoUnitForBattleSet_C_SetImagineSlotType, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'PassiveImagineInfoUnitForBattleSet_C_SetImagineSlotType::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.GetImagineSlotType
// 0x0001 (0x0001 - 0x0000)
struct PassiveImagineInfoUnitForBattleSet_C_GetImagineSlotType final
{
public:
	ESBPlayerPassiveImagineSlotType               OutImagineSlotType;                                // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PassiveImagineInfoUnitForBattleSet_C_GetImagineSlotType) == 0x000001, "Wrong alignment on PassiveImagineInfoUnitForBattleSet_C_GetImagineSlotType");
static_assert(sizeof(PassiveImagineInfoUnitForBattleSet_C_GetImagineSlotType) == 0x000001, "Wrong size on PassiveImagineInfoUnitForBattleSet_C_GetImagineSlotType");
static_assert(offsetof(PassiveImagineInfoUnitForBattleSet_C_GetImagineSlotType, OutImagineSlotType) == 0x000000, "Member 'PassiveImagineInfoUnitForBattleSet_C_GetImagineSlotType::OutImagineSlotType' has a wrong offset!");

// Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.SetPassiveImagineByOwnItemInfo
// 0x0120 (0x0120 - 0x0000)
struct PassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineByOwnItemInfo final
{
public:
	struct FOwnItemInfo                           InOwnItemInfo;                                     // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	ESBClassType                                  InClassType;                                       // 0x0118(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineByOwnItemInfo) == 0x000008, "Wrong alignment on PassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineByOwnItemInfo");
static_assert(sizeof(PassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineByOwnItemInfo) == 0x000120, "Wrong size on PassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineByOwnItemInfo");
static_assert(offsetof(PassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineByOwnItemInfo, InOwnItemInfo) == 0x000000, "Member 'PassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineByOwnItemInfo::InOwnItemInfo' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineByOwnItemInfo, InClassType) == 0x000118, "Member 'PassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineByOwnItemInfo::InClassType' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineByOwnItemInfo, CallFunc_IsValid_ReturnValue) == 0x000119, "Member 'PassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineByOwnItemInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.SetPassiveImagineIconEmpty
// 0x0002 (0x0002 - 0x0000)
struct PassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineIconEmpty final
{
public:
	bool                                          InIsEmpty;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineIconEmpty) == 0x000001, "Wrong alignment on PassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineIconEmpty");
static_assert(sizeof(PassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineIconEmpty) == 0x000002, "Wrong size on PassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineIconEmpty");
static_assert(offsetof(PassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineIconEmpty, InIsEmpty) == 0x000000, "Member 'PassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineIconEmpty::InIsEmpty' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineIconEmpty, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'PassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineIconEmpty::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.SetPassiveImagineIconAlertVisibility
// 0x0002 (0x0002 - 0x0000)
struct PassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineIconAlertVisibility final
{
public:
	bool                                          InIsAlertVisible;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineIconAlertVisibility) == 0x000001, "Wrong alignment on PassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineIconAlertVisibility");
static_assert(sizeof(PassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineIconAlertVisibility) == 0x000002, "Wrong size on PassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineIconAlertVisibility");
static_assert(offsetof(PassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineIconAlertVisibility, InIsAlertVisible) == 0x000000, "Member 'PassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineIconAlertVisibility::InIsAlertVisible' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineIconAlertVisibility, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'PassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineIconAlertVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.SetButtonOff
// 0x0001 (0x0001 - 0x0000)
struct PassiveImagineInfoUnitForBattleSet_C_SetButtonOff final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PassiveImagineInfoUnitForBattleSet_C_SetButtonOff) == 0x000001, "Wrong alignment on PassiveImagineInfoUnitForBattleSet_C_SetButtonOff");
static_assert(sizeof(PassiveImagineInfoUnitForBattleSet_C_SetButtonOff) == 0x000001, "Wrong size on PassiveImagineInfoUnitForBattleSet_C_SetButtonOff");
static_assert(offsetof(PassiveImagineInfoUnitForBattleSet_C_SetButtonOff, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'PassiveImagineInfoUnitForBattleSet_C_SetButtonOff::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.ForcePassiveImagineIconLevelSyncOff
// 0x0002 (0x0002 - 0x0000)
struct PassiveImagineInfoUnitForBattleSet_C_ForcePassiveImagineIconLevelSyncOff final
{
public:
	bool                                          bInForceLevelSyncOff;                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PassiveImagineInfoUnitForBattleSet_C_ForcePassiveImagineIconLevelSyncOff) == 0x000001, "Wrong alignment on PassiveImagineInfoUnitForBattleSet_C_ForcePassiveImagineIconLevelSyncOff");
static_assert(sizeof(PassiveImagineInfoUnitForBattleSet_C_ForcePassiveImagineIconLevelSyncOff) == 0x000002, "Wrong size on PassiveImagineInfoUnitForBattleSet_C_ForcePassiveImagineIconLevelSyncOff");
static_assert(offsetof(PassiveImagineInfoUnitForBattleSet_C_ForcePassiveImagineIconLevelSyncOff, bInForceLevelSyncOff) == 0x000000, "Member 'PassiveImagineInfoUnitForBattleSet_C_ForcePassiveImagineIconLevelSyncOff::bInForceLevelSyncOff' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoUnitForBattleSet_C_ForcePassiveImagineIconLevelSyncOff, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'PassiveImagineInfoUnitForBattleSet_C_ForcePassiveImagineIconLevelSyncOff::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.SetDhcBattleTopMenuMode
// 0x0002 (0x0002 - 0x0000)
struct PassiveImagineInfoUnitForBattleSet_C_SetDhcBattleTopMenuMode final
{
public:
	bool                                          InIsDhcBattleTopMenuMode;                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PassiveImagineInfoUnitForBattleSet_C_SetDhcBattleTopMenuMode) == 0x000001, "Wrong alignment on PassiveImagineInfoUnitForBattleSet_C_SetDhcBattleTopMenuMode");
static_assert(sizeof(PassiveImagineInfoUnitForBattleSet_C_SetDhcBattleTopMenuMode) == 0x000002, "Wrong size on PassiveImagineInfoUnitForBattleSet_C_SetDhcBattleTopMenuMode");
static_assert(offsetof(PassiveImagineInfoUnitForBattleSet_C_SetDhcBattleTopMenuMode, InIsDhcBattleTopMenuMode) == 0x000000, "Member 'PassiveImagineInfoUnitForBattleSet_C_SetDhcBattleTopMenuMode::InIsDhcBattleTopMenuMode' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoUnitForBattleSet_C_SetDhcBattleTopMenuMode, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'PassiveImagineInfoUnitForBattleSet_C_SetDhcBattleTopMenuMode::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.SetPassiveImagineForDhcBattle
// 0x0140 (0x0140 - 0x0000)
struct PassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineForDhcBattle final
{
public:
	struct FSBDhcBattlePlayerEquipImagineInfo     InImagineInfo;                                     // 0x0000(0x001C)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	uint8                                         Pad_428D[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           InOwnItemInfo;                                     // 0x0020(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	ESBClassType                                  InClassType;                                       // 0x0138(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineForDhcBattle) == 0x000008, "Wrong alignment on PassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineForDhcBattle");
static_assert(sizeof(PassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineForDhcBattle) == 0x000140, "Wrong size on PassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineForDhcBattle");
static_assert(offsetof(PassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineForDhcBattle, InImagineInfo) == 0x000000, "Member 'PassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineForDhcBattle::InImagineInfo' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineForDhcBattle, InOwnItemInfo) == 0x000020, "Member 'PassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineForDhcBattle::InOwnItemInfo' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineForDhcBattle, InClassType) == 0x000138, "Member 'PassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineForDhcBattle::InClassType' has a wrong offset!");
static_assert(offsetof(PassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineForDhcBattle, CallFunc_IsValid_ReturnValue) == 0x000139, "Member 'PassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineForDhcBattle::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

