#pragma once

 

// Package: UMG_MatchingMenu_EntryConditionList

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "EntryConditionType_structs.hpp"


namespace SDK::Params
{

// Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.OnPressedButton__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct UMG_MatchingMenu_EntryConditionList_C_OnPressedButton__DelegateSignature final
{
public:
	EntryConditionType                            EntryConditionType;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_705C[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Value;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Position;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_EntryConditionList_C_OnPressedButton__DelegateSignature) == 0x000004, "Wrong alignment on UMG_MatchingMenu_EntryConditionList_C_OnPressedButton__DelegateSignature");
static_assert(sizeof(UMG_MatchingMenu_EntryConditionList_C_OnPressedButton__DelegateSignature) == 0x000010, "Wrong size on UMG_MatchingMenu_EntryConditionList_C_OnPressedButton__DelegateSignature");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_OnPressedButton__DelegateSignature, EntryConditionType) == 0x000000, "Member 'UMG_MatchingMenu_EntryConditionList_C_OnPressedButton__DelegateSignature::EntryConditionType' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_OnPressedButton__DelegateSignature, Value) == 0x000004, "Member 'UMG_MatchingMenu_EntryConditionList_C_OnPressedButton__DelegateSignature::Value' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_OnPressedButton__DelegateSignature, Position) == 0x000008, "Member 'UMG_MatchingMenu_EntryConditionList_C_OnPressedButton__DelegateSignature::Position' has a wrong offset!");

// Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.OnPressedButtonClass__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_MatchingMenu_EntryConditionList_C_OnPressedButtonClass__DelegateSignature final
{
public:
	struct FVector2D                              Position;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_EntryConditionList_C_OnPressedButtonClass__DelegateSignature) == 0x000004, "Wrong alignment on UMG_MatchingMenu_EntryConditionList_C_OnPressedButtonClass__DelegateSignature");
static_assert(sizeof(UMG_MatchingMenu_EntryConditionList_C_OnPressedButtonClass__DelegateSignature) == 0x000008, "Wrong size on UMG_MatchingMenu_EntryConditionList_C_OnPressedButtonClass__DelegateSignature");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_OnPressedButtonClass__DelegateSignature, Position) == 0x000000, "Member 'UMG_MatchingMenu_EntryConditionList_C_OnPressedButtonClass__DelegateSignature::Position' has a wrong offset!");

// Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.OnPressedButtonQuest__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_MatchingMenu_EntryConditionList_C_OnPressedButtonQuest__DelegateSignature final
{
public:
	struct FVector2D                              Position;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_EntryConditionList_C_OnPressedButtonQuest__DelegateSignature) == 0x000004, "Wrong alignment on UMG_MatchingMenu_EntryConditionList_C_OnPressedButtonQuest__DelegateSignature");
static_assert(sizeof(UMG_MatchingMenu_EntryConditionList_C_OnPressedButtonQuest__DelegateSignature) == 0x000008, "Wrong size on UMG_MatchingMenu_EntryConditionList_C_OnPressedButtonQuest__DelegateSignature");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_OnPressedButtonQuest__DelegateSignature, Position) == 0x000000, "Member 'UMG_MatchingMenu_EntryConditionList_C_OnPressedButtonQuest__DelegateSignature::Position' has a wrong offset!");

// Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.ExecuteUbergraph_UMG_MatchingMenu_EntryConditionList
// 0x0004 (0x0004 - 0x0000)
struct UMG_MatchingMenu_EntryConditionList_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_EntryConditionList_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionList) == 0x000004, "Wrong alignment on UMG_MatchingMenu_EntryConditionList_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionList");
static_assert(sizeof(UMG_MatchingMenu_EntryConditionList_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionList) == 0x000004, "Wrong size on UMG_MatchingMenu_EntryConditionList_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionList");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionList, EntryPoint) == 0x000000, "Member 'UMG_MatchingMenu_EntryConditionList_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionList::EntryPoint' has a wrong offset!");

// Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.AddCondition_BattleScore
// 0x0038 (0x0038 - 0x0000)
struct UMG_MatchingMenu_EntryConditionList_C_AddCondition_BattleScore final
{
public:
	bool                                          Passed;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_705D[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         BattleScore;                                       // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_MatchingMenu_EntryConditionListItem_C* CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_BattleScore) == 0x000008, "Wrong alignment on UMG_MatchingMenu_EntryConditionList_C_AddCondition_BattleScore");
static_assert(sizeof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_BattleScore) == 0x000038, "Wrong size on UMG_MatchingMenu_EntryConditionList_C_AddCondition_BattleScore");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_BattleScore, Passed) == 0x000000, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_BattleScore::Passed' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_BattleScore, BattleScore) == 0x000004, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_BattleScore::BattleScore' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_BattleScore, CallFunc_Create_ReturnValue) == 0x000008, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_BattleScore::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_BattleScore, CallFunc_GetTextFromAsset_ReturnValue) == 0x000010, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_BattleScore::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_BattleScore, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_BattleScore::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.AddCondition_Equipment
// 0x0048 (0x0048 - 0x0000)
struct UMG_MatchingMenu_EntryConditionList_C_AddCondition_Equipment final
{
public:
	bool                                          Passed;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_705E[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         EntryConditionId;                                  // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_MatchingMenu_EntryConditionListItem_C* CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 Value, const struct FVector2D& Position)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
};
static_assert(alignof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_Equipment) == 0x000008, "Wrong alignment on UMG_MatchingMenu_EntryConditionList_C_AddCondition_Equipment");
static_assert(sizeof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_Equipment) == 0x000048, "Wrong size on UMG_MatchingMenu_EntryConditionList_C_AddCondition_Equipment");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_Equipment, Passed) == 0x000000, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_Equipment::Passed' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_Equipment, EntryConditionId) == 0x000004, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_Equipment::EntryConditionId' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_Equipment, CallFunc_Create_ReturnValue) == 0x000008, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_Equipment::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_Equipment, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_Equipment::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_Equipment, CallFunc_GetTextFromAsset_ReturnValue) == 0x000020, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_Equipment::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_Equipment, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_Equipment::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.AddCondition_Common
// 0x0020 (0x0020 - 0x0000)
struct UMG_MatchingMenu_EntryConditionList_C_AddCondition_Common final
{
public:
	class UUMG_MatchingMenu_EntryConditionListItem_C* Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUniformGridSlot*                       CallFunc_AddChildToUniformGrid_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_Common) == 0x000008, "Wrong alignment on UMG_MatchingMenu_EntryConditionList_C_AddCondition_Common");
static_assert(sizeof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_Common) == 0x000020, "Wrong size on UMG_MatchingMenu_EntryConditionList_C_AddCondition_Common");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_Common, Item) == 0x000000, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_Common::Item' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_Common, Temp_int_Variable) == 0x000008, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_Common::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_Common, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_Common::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_Common, CallFunc_Percent_IntInt_ReturnValue) == 0x000010, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_Common::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_Common, CallFunc_Divide_IntInt_ReturnValue) == 0x000014, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_Common::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_Common, CallFunc_AddChildToUniformGrid_ReturnValue) == 0x000018, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_Common::CallFunc_AddChildToUniformGrid_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.OnPressedButton_Equipment
// 0x000C (0x000C - 0x0000)
struct UMG_MatchingMenu_EntryConditionList_C_OnPressedButton_Equipment final
{
public:
	int32                                         EntryConditionId;                                  // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Position;                                          // 0x0004(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_EntryConditionList_C_OnPressedButton_Equipment) == 0x000004, "Wrong alignment on UMG_MatchingMenu_EntryConditionList_C_OnPressedButton_Equipment");
static_assert(sizeof(UMG_MatchingMenu_EntryConditionList_C_OnPressedButton_Equipment) == 0x00000C, "Wrong size on UMG_MatchingMenu_EntryConditionList_C_OnPressedButton_Equipment");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_OnPressedButton_Equipment, EntryConditionId) == 0x000000, "Member 'UMG_MatchingMenu_EntryConditionList_C_OnPressedButton_Equipment::EntryConditionId' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_OnPressedButton_Equipment, Position) == 0x000004, "Member 'UMG_MatchingMenu_EntryConditionList_C_OnPressedButton_Equipment::Position' has a wrong offset!");

// Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.AddCondition_AdventurerRank
// 0x0038 (0x0038 - 0x0000)
struct UMG_MatchingMenu_EntryConditionList_C_AddCondition_AdventurerRank final
{
public:
	bool                                          Passed;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_705F[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         AdventurerRank;                                    // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_MatchingMenu_EntryConditionListItem_C* CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_AdventurerRank) == 0x000008, "Wrong alignment on UMG_MatchingMenu_EntryConditionList_C_AddCondition_AdventurerRank");
static_assert(sizeof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_AdventurerRank) == 0x000038, "Wrong size on UMG_MatchingMenu_EntryConditionList_C_AddCondition_AdventurerRank");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_AdventurerRank, Passed) == 0x000000, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_AdventurerRank::Passed' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_AdventurerRank, AdventurerRank) == 0x000004, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_AdventurerRank::AdventurerRank' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_AdventurerRank, CallFunc_Create_ReturnValue) == 0x000008, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_AdventurerRank::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_AdventurerRank, CallFunc_GetTextFromAsset_ReturnValue) == 0x000010, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_AdventurerRank::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_AdventurerRank, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_AdventurerRank::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.AddCondition_PartyState
// 0x0050 (0x0050 - 0x0000)
struct UMG_MatchingMenu_EntryConditionList_C_AddCondition_PartyState final
{
public:
	bool                                          Passed;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBEntryConditionPartyState                   RequiredPartyState;                                // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBEntryConditionPartyState                   Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7060[0x1];                                     // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x000C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0010(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x0014(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_MatchingMenu_EntryConditionListItem_C* CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0020(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7061[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0038(0x0018)()
};
static_assert(alignof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_PartyState) == 0x000008, "Wrong alignment on UMG_MatchingMenu_EntryConditionList_C_AddCondition_PartyState");
static_assert(sizeof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_PartyState) == 0x000050, "Wrong size on UMG_MatchingMenu_EntryConditionList_C_AddCondition_PartyState");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_PartyState, Passed) == 0x000000, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_PartyState::Passed' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_PartyState, RequiredPartyState) == 0x000001, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_PartyState::RequiredPartyState' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_PartyState, Temp_byte_Variable) == 0x000002, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_PartyState::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_PartyState, Temp_int_Variable) == 0x000004, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_PartyState::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_PartyState, Temp_int_Variable_1) == 0x000008, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_PartyState::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_PartyState, Temp_int_Variable_2) == 0x00000C, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_PartyState::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_PartyState, Temp_int_Variable_3) == 0x000010, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_PartyState::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_PartyState, Temp_int_Variable_4) == 0x000014, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_PartyState::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_PartyState, CallFunc_Create_ReturnValue) == 0x000018, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_PartyState::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_PartyState, K2Node_Select_Default) == 0x000020, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_PartyState::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_PartyState, CallFunc_GetTextFromAsset_ReturnValue) == 0x000028, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_PartyState::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_PartyState, CallFunc_Conv_StringToText_ReturnValue) == 0x000038, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_PartyState::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.SetVisibleUnderline
// 0x0040 (0x0040 - 0x0000)
struct UMG_MatchingMenu_EntryConditionList_C_SetVisibleUnderline final
{
public:
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_MatchingMenu_EntryConditionListItem_C* K2Node_DynamicCast_AsUMG_Matching_Menu_Entry_Condition_List_Item; // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7062[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_1;                 // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_MatchingMenu_EntryConditionListItem_C* K2Node_DynamicCast_AsUMG_Matching_Menu_Entry_Condition_List_Item_1; // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7063[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_MatchingMenu_EntryConditionList_C_SetVisibleUnderline) == 0x000008, "Wrong alignment on UMG_MatchingMenu_EntryConditionList_C_SetVisibleUnderline");
static_assert(sizeof(UMG_MatchingMenu_EntryConditionList_C_SetVisibleUnderline) == 0x000040, "Wrong size on UMG_MatchingMenu_EntryConditionList_C_SetVisibleUnderline");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_SetVisibleUnderline, CallFunc_Subtract_IntInt_ReturnValue) == 0x000000, "Member 'UMG_MatchingMenu_EntryConditionList_C_SetVisibleUnderline::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_SetVisibleUnderline, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000004, "Member 'UMG_MatchingMenu_EntryConditionList_C_SetVisibleUnderline::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_SetVisibleUnderline, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'UMG_MatchingMenu_EntryConditionList_C_SetVisibleUnderline::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_SetVisibleUnderline, K2Node_DynamicCast_AsUMG_Matching_Menu_Entry_Condition_List_Item) == 0x000010, "Member 'UMG_MatchingMenu_EntryConditionList_C_SetVisibleUnderline::K2Node_DynamicCast_AsUMG_Matching_Menu_Entry_Condition_List_Item' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_SetVisibleUnderline, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'UMG_MatchingMenu_EntryConditionList_C_SetVisibleUnderline::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_SetVisibleUnderline, CallFunc_GetChildAt_ReturnValue_1) == 0x000020, "Member 'UMG_MatchingMenu_EntryConditionList_C_SetVisibleUnderline::CallFunc_GetChildAt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_SetVisibleUnderline, K2Node_DynamicCast_AsUMG_Matching_Menu_Entry_Condition_List_Item_1) == 0x000028, "Member 'UMG_MatchingMenu_EntryConditionList_C_SetVisibleUnderline::K2Node_DynamicCast_AsUMG_Matching_Menu_Entry_Condition_List_Item_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_SetVisibleUnderline, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'UMG_MatchingMenu_EntryConditionList_C_SetVisibleUnderline::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_SetVisibleUnderline, CallFunc_Percent_IntInt_ReturnValue) == 0x000034, "Member 'UMG_MatchingMenu_EntryConditionList_C_SetVisibleUnderline::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_SetVisibleUnderline, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000038, "Member 'UMG_MatchingMenu_EntryConditionList_C_SetVisibleUnderline::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_SetVisibleUnderline, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000039, "Member 'UMG_MatchingMenu_EntryConditionList_C_SetVisibleUnderline::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.AddCondition_ClassLevel
// 0x0038 (0x0038 - 0x0000)
struct UMG_MatchingMenu_EntryConditionList_C_AddCondition_ClassLevel final
{
public:
	bool                                          Passed;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7064[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ClassLevel;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_MatchingMenu_EntryConditionListItem_C* CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_ClassLevel) == 0x000008, "Wrong alignment on UMG_MatchingMenu_EntryConditionList_C_AddCondition_ClassLevel");
static_assert(sizeof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_ClassLevel) == 0x000038, "Wrong size on UMG_MatchingMenu_EntryConditionList_C_AddCondition_ClassLevel");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_ClassLevel, Passed) == 0x000000, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_ClassLevel::Passed' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_ClassLevel, ClassLevel) == 0x000004, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_ClassLevel::ClassLevel' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_ClassLevel, CallFunc_Create_ReturnValue) == 0x000008, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_ClassLevel::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_ClassLevel, CallFunc_GetTextFromAsset_ReturnValue) == 0x000010, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_ClassLevel::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_ClassLevel, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_ClassLevel::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.AddCondition_SubClassBonus
// 0x00E8 (0x00E8 - 0x0000)
struct UMG_MatchingMenu_EntryConditionList_C_AddCondition_SubClassBonus final
{
public:
	bool                                          Passed;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7065[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MaxSubClassLv;                                     // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxScbNum;                                         // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7066[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_MatchingMenu_EntryConditionListItem_C* CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0018(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0058(0x0040)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00A8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00B8(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00D0(0x0018)()
};
static_assert(alignof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_SubClassBonus) == 0x000008, "Wrong alignment on UMG_MatchingMenu_EntryConditionList_C_AddCondition_SubClassBonus");
static_assert(sizeof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_SubClassBonus) == 0x0000E8, "Wrong size on UMG_MatchingMenu_EntryConditionList_C_AddCondition_SubClassBonus");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_SubClassBonus, Passed) == 0x000000, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_SubClassBonus::Passed' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_SubClassBonus, MaxSubClassLv) == 0x000004, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_SubClassBonus::MaxSubClassLv' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_SubClassBonus, MaxScbNum) == 0x000008, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_SubClassBonus::MaxScbNum' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_SubClassBonus, CallFunc_Create_ReturnValue) == 0x000010, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_SubClassBonus::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_SubClassBonus, K2Node_MakeStruct_FormatArgumentData) == 0x000018, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_SubClassBonus::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_SubClassBonus, K2Node_MakeStruct_FormatArgumentData_1) == 0x000058, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_SubClassBonus::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_SubClassBonus, CallFunc_GetTextFromAsset_ReturnValue) == 0x000098, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_SubClassBonus::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_SubClassBonus, K2Node_MakeArray_Array) == 0x0000A8, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_SubClassBonus::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_SubClassBonus, CallFunc_Conv_StringToText_ReturnValue) == 0x0000B8, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_SubClassBonus::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_SubClassBonus, CallFunc_Format_ReturnValue) == 0x0000D0, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_SubClassBonus::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.AddCondition_QuestClear
// 0x0048 (0x0048 - 0x0000)
struct UMG_MatchingMenu_EntryConditionList_C_AddCondition_QuestClear final
{
public:
	bool                                          Passed;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7067[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_MatchingMenu_EntryConditionListItem_C* CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 Value, const struct FVector2D& Position)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
};
static_assert(alignof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_QuestClear) == 0x000008, "Wrong alignment on UMG_MatchingMenu_EntryConditionList_C_AddCondition_QuestClear");
static_assert(sizeof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_QuestClear) == 0x000048, "Wrong size on UMG_MatchingMenu_EntryConditionList_C_AddCondition_QuestClear");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_QuestClear, Passed) == 0x000000, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_QuestClear::Passed' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_QuestClear, CallFunc_Create_ReturnValue) == 0x000008, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_QuestClear::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_QuestClear, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_QuestClear::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_QuestClear, CallFunc_GetTextFromAsset_ReturnValue) == 0x000020, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_QuestClear::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_QuestClear, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_QuestClear::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.AddCondition_ClassType
// 0x0048 (0x0048 - 0x0000)
struct UMG_MatchingMenu_EntryConditionList_C_AddCondition_ClassType final
{
public:
	bool                                          Passed;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7068[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_MatchingMenu_EntryConditionListItem_C* CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 Value, const struct FVector2D& Position)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
};
static_assert(alignof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_ClassType) == 0x000008, "Wrong alignment on UMG_MatchingMenu_EntryConditionList_C_AddCondition_ClassType");
static_assert(sizeof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_ClassType) == 0x000048, "Wrong size on UMG_MatchingMenu_EntryConditionList_C_AddCondition_ClassType");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_ClassType, Passed) == 0x000000, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_ClassType::Passed' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_ClassType, CallFunc_Create_ReturnValue) == 0x000008, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_ClassType::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_ClassType, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_ClassType::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_ClassType, CallFunc_GetTextFromAsset_ReturnValue) == 0x000020, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_ClassType::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_AddCondition_ClassType, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'UMG_MatchingMenu_EntryConditionList_C_AddCondition_ClassType::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.OnPressedButton_ClassType
// 0x000C (0x000C - 0x0000)
struct UMG_MatchingMenu_EntryConditionList_C_OnPressedButton_ClassType final
{
public:
	int32                                         EntryConditionId;                                  // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Position;                                          // 0x0004(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_EntryConditionList_C_OnPressedButton_ClassType) == 0x000004, "Wrong alignment on UMG_MatchingMenu_EntryConditionList_C_OnPressedButton_ClassType");
static_assert(sizeof(UMG_MatchingMenu_EntryConditionList_C_OnPressedButton_ClassType) == 0x00000C, "Wrong size on UMG_MatchingMenu_EntryConditionList_C_OnPressedButton_ClassType");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_OnPressedButton_ClassType, EntryConditionId) == 0x000000, "Member 'UMG_MatchingMenu_EntryConditionList_C_OnPressedButton_ClassType::EntryConditionId' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_OnPressedButton_ClassType, Position) == 0x000004, "Member 'UMG_MatchingMenu_EntryConditionList_C_OnPressedButton_ClassType::Position' has a wrong offset!");

// Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.OnPressedButton_QuestClear
// 0x000C (0x000C - 0x0000)
struct UMG_MatchingMenu_EntryConditionList_C_OnPressedButton_QuestClear final
{
public:
	int32                                         EntryConditionId;                                  // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Position;                                          // 0x0004(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_MatchingMenu_EntryConditionList_C_OnPressedButton_QuestClear) == 0x000004, "Wrong alignment on UMG_MatchingMenu_EntryConditionList_C_OnPressedButton_QuestClear");
static_assert(sizeof(UMG_MatchingMenu_EntryConditionList_C_OnPressedButton_QuestClear) == 0x00000C, "Wrong size on UMG_MatchingMenu_EntryConditionList_C_OnPressedButton_QuestClear");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_OnPressedButton_QuestClear, EntryConditionId) == 0x000000, "Member 'UMG_MatchingMenu_EntryConditionList_C_OnPressedButton_QuestClear::EntryConditionId' has a wrong offset!");
static_assert(offsetof(UMG_MatchingMenu_EntryConditionList_C_OnPressedButton_QuestClear, Position) == 0x000004, "Member 'UMG_MatchingMenu_EntryConditionList_C_OnPressedButton_QuestClear::Position' has a wrong offset!");

}

