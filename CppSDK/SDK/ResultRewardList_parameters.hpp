#pragma once

 

// Package: ResultRewardList

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "QuestRewardIconInfo_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function ResultRewardList.ResultRewardList_C.ExecuteUbergraph_ResultRewardList
// 0x0004 (0x0004 - 0x0000)
struct ResultRewardList_C_ExecuteUbergraph_ResultRewardList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ResultRewardList_C_ExecuteUbergraph_ResultRewardList) == 0x000004, "Wrong alignment on ResultRewardList_C_ExecuteUbergraph_ResultRewardList");
static_assert(sizeof(ResultRewardList_C_ExecuteUbergraph_ResultRewardList) == 0x000004, "Wrong size on ResultRewardList_C_ExecuteUbergraph_ResultRewardList");
static_assert(offsetof(ResultRewardList_C_ExecuteUbergraph_ResultRewardList, EntryPoint) == 0x000000, "Member 'ResultRewardList_C_ExecuteUbergraph_ResultRewardList::EntryPoint' has a wrong offset!");

// Function ResultRewardList.ResultRewardList_C.SetMoney
// 0x0010 (0x0010 - 0x0000)
struct ResultRewardList_C_SetMoney final
{
public:
	int32                                         InAmount;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetTeamBonusPercentForType_ReturnValue;   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96D2[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetTeamBonusPercentForType_Percent;       // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResultRewardList_C_SetMoney) == 0x000004, "Wrong alignment on ResultRewardList_C_SetMoney");
static_assert(sizeof(ResultRewardList_C_SetMoney) == 0x000010, "Wrong size on ResultRewardList_C_SetMoney");
static_assert(offsetof(ResultRewardList_C_SetMoney, InAmount) == 0x000000, "Member 'ResultRewardList_C_SetMoney::InAmount' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetMoney, CallFunc_GetTeamBonusPercentForType_ReturnValue) == 0x000004, "Member 'ResultRewardList_C_SetMoney::CallFunc_GetTeamBonusPercentForType_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetMoney, CallFunc_GetTeamBonusPercentForType_Percent) == 0x000008, "Member 'ResultRewardList_C_SetMoney::CallFunc_GetTeamBonusPercentForType_Percent' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetMoney, CallFunc_Less_IntInt_ReturnValue) == 0x00000C, "Member 'ResultRewardList_C_SetMoney::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function ResultRewardList.ResultRewardList_C.SetExp
// 0x0010 (0x0010 - 0x0000)
struct ResultRewardList_C_SetExp final
{
public:
	int32                                         InAmount;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetTeamBonusPercentForType_ReturnValue;   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96D3[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetTeamBonusPercentForType_Percent;       // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResultRewardList_C_SetExp) == 0x000004, "Wrong alignment on ResultRewardList_C_SetExp");
static_assert(sizeof(ResultRewardList_C_SetExp) == 0x000010, "Wrong size on ResultRewardList_C_SetExp");
static_assert(offsetof(ResultRewardList_C_SetExp, InAmount) == 0x000000, "Member 'ResultRewardList_C_SetExp::InAmount' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetExp, CallFunc_GetTeamBonusPercentForType_ReturnValue) == 0x000004, "Member 'ResultRewardList_C_SetExp::CallFunc_GetTeamBonusPercentForType_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetExp, CallFunc_GetTeamBonusPercentForType_Percent) == 0x000008, "Member 'ResultRewardList_C_SetExp::CallFunc_GetTeamBonusPercentForType_Percent' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetExp, CallFunc_Less_IntInt_ReturnValue) == 0x00000C, "Member 'ResultRewardList_C_SetExp::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function ResultRewardList.ResultRewardList_C.SetGC
// 0x0010 (0x0010 - 0x0000)
struct ResultRewardList_C_SetGC final
{
public:
	int32                                         InAmount;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ItemId;                                            // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetTeamBonusPercentForItemID_ReturnValue; // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96D4[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetTeamBonusPercentForItemID_Percent;     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ResultRewardList_C_SetGC) == 0x000004, "Wrong alignment on ResultRewardList_C_SetGC");
static_assert(sizeof(ResultRewardList_C_SetGC) == 0x000010, "Wrong size on ResultRewardList_C_SetGC");
static_assert(offsetof(ResultRewardList_C_SetGC, InAmount) == 0x000000, "Member 'ResultRewardList_C_SetGC::InAmount' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetGC, ItemId) == 0x000004, "Member 'ResultRewardList_C_SetGC::ItemId' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetGC, CallFunc_Less_IntInt_ReturnValue) == 0x000008, "Member 'ResultRewardList_C_SetGC::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetGC, CallFunc_GetTeamBonusPercentForItemID_ReturnValue) == 0x000009, "Member 'ResultRewardList_C_SetGC::CallFunc_GetTeamBonusPercentForItemID_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetGC, CallFunc_GetTeamBonusPercentForItemID_Percent) == 0x00000C, "Member 'ResultRewardList_C_SetGC::CallFunc_GetTeamBonusPercentForItemID_Percent' has a wrong offset!");

// Function ResultRewardList.ResultRewardList_C.SetItem
// 0x0190 (0x0190 - 0x0000)
struct ResultRewardList_C_SetItem final
{
public:
	TArray<struct FOwnItemInfo>                   InOwnItems;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_96D5[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FOwnItemInfo>                   CallFunc_GetOwnItemInfo_OwnItemInfo;               // 0x0028(0x0010)(ReferenceParm)
	TArray<struct FOwnItemInfo>                   CallFunc_GetOwnItemInfo_OwnItemInfo_1;             // 0x0038(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_96D6[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_Array_Get_Item;                           // 0x0050(0x0118)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96D7[0x3];                                     // 0x0169(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             CallFunc_ConvertItemTypeToRewardType_RewardItemType; // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetTeamBonusPercentForItemID_ReturnValue; // 0x0172(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96D8[0x1];                                     // 0x0173(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetTeamBonusPercentForItemID_Percent;     // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96D9[0x3];                                     // 0x0181(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBTokenOverLimit                      CallFunc_Array_Get_Item_1;                         // 0x0184(0x0008)(NoDestructor)
};
static_assert(alignof(ResultRewardList_C_SetItem) == 0x000008, "Wrong alignment on ResultRewardList_C_SetItem");
static_assert(sizeof(ResultRewardList_C_SetItem) == 0x000190, "Wrong size on ResultRewardList_C_SetItem");
static_assert(offsetof(ResultRewardList_C_SetItem, InOwnItems) == 0x000000, "Member 'ResultRewardList_C_SetItem::InOwnItems' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetItem, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'ResultRewardList_C_SetItem::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetItem, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'ResultRewardList_C_SetItem::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetItem, Temp_int_Array_Index_Variable) == 0x000018, "Member 'ResultRewardList_C_SetItem::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetItem, Temp_int_Loop_Counter_Variable_1) == 0x00001C, "Member 'ResultRewardList_C_SetItem::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetItem, CallFunc_Add_IntInt_ReturnValue_1) == 0x000020, "Member 'ResultRewardList_C_SetItem::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetItem, CallFunc_GetOwnItemInfo_OwnItemInfo) == 0x000028, "Member 'ResultRewardList_C_SetItem::CallFunc_GetOwnItemInfo_OwnItemInfo' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetItem, CallFunc_GetOwnItemInfo_OwnItemInfo_1) == 0x000038, "Member 'ResultRewardList_C_SetItem::CallFunc_GetOwnItemInfo_OwnItemInfo_1' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetItem, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'ResultRewardList_C_SetItem::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetItem, CallFunc_Array_Get_Item) == 0x000050, "Member 'ResultRewardList_C_SetItem::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetItem, CallFunc_Less_IntInt_ReturnValue) == 0x000168, "Member 'ResultRewardList_C_SetItem::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetItem, CallFunc_Array_Length_ReturnValue_1) == 0x00016C, "Member 'ResultRewardList_C_SetItem::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetItem, CallFunc_ConvertItemTypeToRewardType_RewardItemType) == 0x000170, "Member 'ResultRewardList_C_SetItem::CallFunc_ConvertItemTypeToRewardType_RewardItemType' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetItem, CallFunc_Less_IntInt_ReturnValue_1) == 0x000171, "Member 'ResultRewardList_C_SetItem::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetItem, CallFunc_GetTeamBonusPercentForItemID_ReturnValue) == 0x000172, "Member 'ResultRewardList_C_SetItem::CallFunc_GetTeamBonusPercentForItemID_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetItem, CallFunc_GetTeamBonusPercentForItemID_Percent) == 0x000174, "Member 'ResultRewardList_C_SetItem::CallFunc_GetTeamBonusPercentForItemID_Percent' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetItem, CallFunc_Array_Length_ReturnValue_2) == 0x000178, "Member 'ResultRewardList_C_SetItem::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetItem, Temp_int_Array_Index_Variable_1) == 0x00017C, "Member 'ResultRewardList_C_SetItem::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetItem, CallFunc_Less_IntInt_ReturnValue_2) == 0x000180, "Member 'ResultRewardList_C_SetItem::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetItem, CallFunc_Array_Get_Item_1) == 0x000184, "Member 'ResultRewardList_C_SetItem::CallFunc_Array_Get_Item_1' has a wrong offset!");

// Function ResultRewardList.ResultRewardList_C.SetSkyCoin
// 0x0010 (0x0010 - 0x0000)
struct ResultRewardList_C_SetSkyCoin final
{
public:
	int32                                         InAmount;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetTeamBonusPercentForType_ReturnValue;   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96DA[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetTeamBonusPercentForType_Percent;       // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResultRewardList_C_SetSkyCoin) == 0x000004, "Wrong alignment on ResultRewardList_C_SetSkyCoin");
static_assert(sizeof(ResultRewardList_C_SetSkyCoin) == 0x000010, "Wrong size on ResultRewardList_C_SetSkyCoin");
static_assert(offsetof(ResultRewardList_C_SetSkyCoin, InAmount) == 0x000000, "Member 'ResultRewardList_C_SetSkyCoin::InAmount' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetSkyCoin, CallFunc_GetTeamBonusPercentForType_ReturnValue) == 0x000004, "Member 'ResultRewardList_C_SetSkyCoin::CallFunc_GetTeamBonusPercentForType_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetSkyCoin, CallFunc_GetTeamBonusPercentForType_Percent) == 0x000008, "Member 'ResultRewardList_C_SetSkyCoin::CallFunc_GetTeamBonusPercentForType_Percent' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetSkyCoin, CallFunc_Less_IntInt_ReturnValue) == 0x00000C, "Member 'ResultRewardList_C_SetSkyCoin::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function ResultRewardList.ResultRewardList_C.SetReward
// 0x0078 (0x0078 - 0x0000)
struct ResultRewardList_C_SetReward final
{
public:
	TArray<class FName>                           InReawrdIDList;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FSBMasterReward                        TmpRewardMaster;                                   // 0x0010(0x0014)(Edit, BlueprintVisible, NoDestructor)
	int32                                         TmpTeamBonusPercent;                               // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           TmpRewardIDList;                                   // 0x0028(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsIgnoreReward_ReturnValue;               // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96DB[0x2];                                     // 0x0046(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindRewardMaster_IsValid;                 // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96DC[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterReward                        CallFunc_FindRewardMaster_RewardMaster;            // 0x0058(0x0014)(NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetTeamBonusPercentForRewardID_ReturnValue; // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96DD[0x2];                                     // 0x006E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetTeamBonusPercentForRewardID_Percent;   // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ResultRewardList_C_SetReward) == 0x000008, "Wrong alignment on ResultRewardList_C_SetReward");
static_assert(sizeof(ResultRewardList_C_SetReward) == 0x000078, "Wrong size on ResultRewardList_C_SetReward");
static_assert(offsetof(ResultRewardList_C_SetReward, InReawrdIDList) == 0x000000, "Member 'ResultRewardList_C_SetReward::InReawrdIDList' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetReward, TmpRewardMaster) == 0x000010, "Member 'ResultRewardList_C_SetReward::TmpRewardMaster' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetReward, TmpTeamBonusPercent) == 0x000024, "Member 'ResultRewardList_C_SetReward::TmpTeamBonusPercent' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetReward, TmpRewardIDList) == 0x000028, "Member 'ResultRewardList_C_SetReward::TmpRewardIDList' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetReward, Temp_int_Array_Index_Variable) == 0x000038, "Member 'ResultRewardList_C_SetReward::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetReward, Temp_int_Loop_Counter_Variable) == 0x00003C, "Member 'ResultRewardList_C_SetReward::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetReward, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'ResultRewardList_C_SetReward::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetReward, CallFunc_IsIgnoreReward_ReturnValue) == 0x000044, "Member 'ResultRewardList_C_SetReward::CallFunc_IsIgnoreReward_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetReward, CallFunc_Not_PreBool_ReturnValue) == 0x000045, "Member 'ResultRewardList_C_SetReward::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetReward, CallFunc_Array_Get_Item) == 0x000048, "Member 'ResultRewardList_C_SetReward::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetReward, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'ResultRewardList_C_SetReward::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetReward, CallFunc_FindRewardMaster_IsValid) == 0x000054, "Member 'ResultRewardList_C_SetReward::CallFunc_FindRewardMaster_IsValid' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetReward, CallFunc_FindRewardMaster_RewardMaster) == 0x000058, "Member 'ResultRewardList_C_SetReward::CallFunc_FindRewardMaster_RewardMaster' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetReward, CallFunc_Less_IntInt_ReturnValue) == 0x00006C, "Member 'ResultRewardList_C_SetReward::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetReward, CallFunc_GetTeamBonusPercentForRewardID_ReturnValue) == 0x00006D, "Member 'ResultRewardList_C_SetReward::CallFunc_GetTeamBonusPercentForRewardID_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetReward, CallFunc_GetTeamBonusPercentForRewardID_Percent) == 0x000070, "Member 'ResultRewardList_C_SetReward::CallFunc_GetTeamBonusPercentForRewardID_Percent' has a wrong offset!");

// Function ResultRewardList.ResultRewardList_C.AddInfo
// 0x01D8 (0x01D8 - 0x0000)
struct ResultRewardList_C_AddInfo final
{
public:
	class FString                                 InUniqueId;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         InAmount;                                          // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InId;                                              // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InStorageNumber;                                   // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             InType;                                            // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_96DE[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         IsTeamBonusPercent;                                // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_96DF[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuestRewardIconInfo                   RewardInfo;                                        // 0x0028(0x0028)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0050(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Amount;                                            // 0x0054(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96E0[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96E1[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMargeType_Result;                       // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96E2[0x3];                                     // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96E3[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_5;              // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FQuestRewardIconInfo                   K2Node_MakeStruct_QuestRewardIconInfo;             // 0x0108(0x0028)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_6;              // 0x0130(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FQuestRewardIconInfo                   CallFunc_Array_Get_Item;                           // 0x0140(0x0028)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0172(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96E4[0x1];                                     // 0x0173(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuestRewardIconInfo                   K2Node_MakeStruct_QuestRewardIconInfo_1;           // 0x0178(0x0028)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_96E5[0x4];                                     // 0x01A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuestRewardIconInfo                   CallFunc_Array_Get_Item_1;                         // 0x01A8(0x0028)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResultRewardList_C_AddInfo) == 0x000008, "Wrong alignment on ResultRewardList_C_AddInfo");
static_assert(sizeof(ResultRewardList_C_AddInfo) == 0x0001D8, "Wrong size on ResultRewardList_C_AddInfo");
static_assert(offsetof(ResultRewardList_C_AddInfo, InUniqueId) == 0x000000, "Member 'ResultRewardList_C_AddInfo::InUniqueId' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_AddInfo, InAmount) == 0x000010, "Member 'ResultRewardList_C_AddInfo::InAmount' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_AddInfo, InId) == 0x000014, "Member 'ResultRewardList_C_AddInfo::InId' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_AddInfo, InStorageNumber) == 0x000018, "Member 'ResultRewardList_C_AddInfo::InStorageNumber' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_AddInfo, InType) == 0x00001C, "Member 'ResultRewardList_C_AddInfo::InType' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_AddInfo, IsTeamBonusPercent) == 0x000020, "Member 'ResultRewardList_C_AddInfo::IsTeamBonusPercent' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_AddInfo, RewardInfo) == 0x000028, "Member 'ResultRewardList_C_AddInfo::RewardInfo' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_AddInfo, Param_Index) == 0x000050, "Member 'ResultRewardList_C_AddInfo::Param_Index' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_AddInfo, Amount) == 0x000054, "Member 'ResultRewardList_C_AddInfo::Amount' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_AddInfo, Temp_bool_True_if_break_was_hit_Variable) == 0x000058, "Member 'ResultRewardList_C_AddInfo::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_AddInfo, Temp_int_Array_Index_Variable) == 0x00005C, "Member 'ResultRewardList_C_AddInfo::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_AddInfo, CallFunc_Not_PreBool_ReturnValue) == 0x000060, "Member 'ResultRewardList_C_AddInfo::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_AddInfo, Temp_int_Loop_Counter_Variable) == 0x000064, "Member 'ResultRewardList_C_AddInfo::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_AddInfo, CallFunc_Add_IntInt_ReturnValue) == 0x000068, "Member 'ResultRewardList_C_AddInfo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_AddInfo, CallFunc_IsMargeType_Result) == 0x00006C, "Member 'ResultRewardList_C_AddInfo::CallFunc_IsMargeType_Result' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_AddInfo, CallFunc_Conv_IntToString_ReturnValue) == 0x000070, "Member 'ResultRewardList_C_AddInfo::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_AddInfo, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000080, "Member 'ResultRewardList_C_AddInfo::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_AddInfo, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000090, "Member 'ResultRewardList_C_AddInfo::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_AddInfo, CallFunc_Concat_StrStr_ReturnValue) == 0x0000A0, "Member 'ResultRewardList_C_AddInfo::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_AddInfo, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000B0, "Member 'ResultRewardList_C_AddInfo::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_AddInfo, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000B8, "Member 'ResultRewardList_C_AddInfo::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_AddInfo, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0000C8, "Member 'ResultRewardList_C_AddInfo::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_AddInfo, CallFunc_Concat_StrStr_ReturnValue_3) == 0x0000D8, "Member 'ResultRewardList_C_AddInfo::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_AddInfo, CallFunc_Concat_StrStr_ReturnValue_4) == 0x0000E8, "Member 'ResultRewardList_C_AddInfo::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_AddInfo, CallFunc_Concat_StrStr_ReturnValue_5) == 0x0000F8, "Member 'ResultRewardList_C_AddInfo::CallFunc_Concat_StrStr_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_AddInfo, K2Node_MakeStruct_QuestRewardIconInfo) == 0x000108, "Member 'ResultRewardList_C_AddInfo::K2Node_MakeStruct_QuestRewardIconInfo' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_AddInfo, CallFunc_Concat_StrStr_ReturnValue_6) == 0x000130, "Member 'ResultRewardList_C_AddInfo::CallFunc_Concat_StrStr_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_AddInfo, CallFunc_Array_Get_Item) == 0x000140, "Member 'ResultRewardList_C_AddInfo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_AddInfo, CallFunc_Array_Add_ReturnValue) == 0x000168, "Member 'ResultRewardList_C_AddInfo::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_AddInfo, CallFunc_Array_Length_ReturnValue) == 0x00016C, "Member 'ResultRewardList_C_AddInfo::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_AddInfo, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000170, "Member 'ResultRewardList_C_AddInfo::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_AddInfo, CallFunc_Less_IntInt_ReturnValue) == 0x000171, "Member 'ResultRewardList_C_AddInfo::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_AddInfo, CallFunc_BooleanAND_ReturnValue) == 0x000172, "Member 'ResultRewardList_C_AddInfo::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_AddInfo, CallFunc_Add_IntInt_ReturnValue_1) == 0x000174, "Member 'ResultRewardList_C_AddInfo::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_AddInfo, K2Node_MakeStruct_QuestRewardIconInfo_1) == 0x000178, "Member 'ResultRewardList_C_AddInfo::K2Node_MakeStruct_QuestRewardIconInfo_1' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_AddInfo, CallFunc_Array_Add_ReturnValue_1) == 0x0001A0, "Member 'ResultRewardList_C_AddInfo::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_AddInfo, CallFunc_Array_Get_Item_1) == 0x0001A8, "Member 'ResultRewardList_C_AddInfo::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_AddInfo, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x0001D0, "Member 'ResultRewardList_C_AddInfo::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");

// Function ResultRewardList.ResultRewardList_C.ClearInfo
// 0x0030 (0x0030 - 0x0000)
struct ResultRewardList_C_ClearInfo final
{
public:
	struct FQuestRewardIconInfo                   RewardInfo;                                        // 0x0000(0x0028)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ResultRewardList_C_ClearInfo) == 0x000008, "Wrong alignment on ResultRewardList_C_ClearInfo");
static_assert(sizeof(ResultRewardList_C_ClearInfo) == 0x000030, "Wrong size on ResultRewardList_C_ClearInfo");
static_assert(offsetof(ResultRewardList_C_ClearInfo, RewardInfo) == 0x000000, "Member 'ResultRewardList_C_ClearInfo::RewardInfo' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_ClearInfo, Param_Index) == 0x000028, "Member 'ResultRewardList_C_ClearInfo::Param_Index' has a wrong offset!");

// Function ResultRewardList.ResultRewardList_C.AddIcon
// 0x0198 (0x0198 - 0x0000)
struct ResultRewardList_C_AddIcon final
{
public:
	struct FQuestRewardIconInfo                   IconInfo;                                          // 0x0000(0x0028)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class UQuestRewardIcon_C*                     Icon;                                              // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_isBonus_Result;                           // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindOwnItemInfo_Result;                   // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96E6[0x2];                                     // 0x003E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_FindOwnItemInfo_ItemInfo;                 // 0x0040(0x0118)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0159(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96E7[0x6];                                     // 0x015A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UQuestRewardIcon_C*                     CallFunc_CreateIcon_OutIcon;                       // 0x0160(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuestRewardIconInfo                   CallFunc_Array_Get_Item;                           // 0x0168(0x0028)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0194(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResultRewardList_C_AddIcon) == 0x000008, "Wrong alignment on ResultRewardList_C_AddIcon");
static_assert(sizeof(ResultRewardList_C_AddIcon) == 0x000198, "Wrong size on ResultRewardList_C_AddIcon");
static_assert(offsetof(ResultRewardList_C_AddIcon, IconInfo) == 0x000000, "Member 'ResultRewardList_C_AddIcon::IconInfo' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_AddIcon, Icon) == 0x000028, "Member 'ResultRewardList_C_AddIcon::Icon' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_AddIcon, Temp_int_Array_Index_Variable) == 0x000030, "Member 'ResultRewardList_C_AddIcon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_AddIcon, Temp_int_Loop_Counter_Variable) == 0x000034, "Member 'ResultRewardList_C_AddIcon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_AddIcon, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'ResultRewardList_C_AddIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_AddIcon, CallFunc_isBonus_Result) == 0x00003C, "Member 'ResultRewardList_C_AddIcon::CallFunc_isBonus_Result' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_AddIcon, CallFunc_FindOwnItemInfo_Result) == 0x00003D, "Member 'ResultRewardList_C_AddIcon::CallFunc_FindOwnItemInfo_Result' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_AddIcon, CallFunc_FindOwnItemInfo_ItemInfo) == 0x000040, "Member 'ResultRewardList_C_AddIcon::CallFunc_FindOwnItemInfo_ItemInfo' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_AddIcon, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000158, "Member 'ResultRewardList_C_AddIcon::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_AddIcon, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000159, "Member 'ResultRewardList_C_AddIcon::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_AddIcon, CallFunc_CreateIcon_OutIcon) == 0x000160, "Member 'ResultRewardList_C_AddIcon::CallFunc_CreateIcon_OutIcon' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_AddIcon, CallFunc_Array_Get_Item) == 0x000168, "Member 'ResultRewardList_C_AddIcon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_AddIcon, CallFunc_Array_Length_ReturnValue) == 0x000190, "Member 'ResultRewardList_C_AddIcon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_AddIcon, CallFunc_Less_IntInt_ReturnValue) == 0x000194, "Member 'ResultRewardList_C_AddIcon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function ResultRewardList.ResultRewardList_C.CreateIcon
// 0x0048 (0x0048 - 0x0000)
struct ResultRewardList_C_CreateIcon final
{
public:
	bool                                          bIsClickToShowDetail;                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96E8[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UQuestRewardIcon_C*                     OutIcon;                                           // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQuestRewardIcon_C*                     Icon;                                              // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQuestRewardIcon_C*                     CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGridSlot*                              CallFunc_AddChildToGrid_ReturnValue;               // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ResultRewardList_C_CreateIcon) == 0x000008, "Wrong alignment on ResultRewardList_C_CreateIcon");
static_assert(sizeof(ResultRewardList_C_CreateIcon) == 0x000048, "Wrong size on ResultRewardList_C_CreateIcon");
static_assert(offsetof(ResultRewardList_C_CreateIcon, bIsClickToShowDetail) == 0x000000, "Member 'ResultRewardList_C_CreateIcon::bIsClickToShowDetail' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_CreateIcon, OutIcon) == 0x000008, "Member 'ResultRewardList_C_CreateIcon::OutIcon' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_CreateIcon, Icon) == 0x000010, "Member 'ResultRewardList_C_CreateIcon::Icon' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_CreateIcon, CallFunc_Create_ReturnValue) == 0x000018, "Member 'ResultRewardList_C_CreateIcon::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_CreateIcon, K2Node_MakeStruct_Margin) == 0x000020, "Member 'ResultRewardList_C_CreateIcon::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_CreateIcon, CallFunc_GetChildrenCount_ReturnValue) == 0x000030, "Member 'ResultRewardList_C_CreateIcon::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_CreateIcon, CallFunc_Subtract_IntInt_ReturnValue) == 0x000034, "Member 'ResultRewardList_C_CreateIcon::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_CreateIcon, CallFunc_AddChildToGrid_ReturnValue) == 0x000038, "Member 'ResultRewardList_C_CreateIcon::CallFunc_AddChildToGrid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_CreateIcon, CallFunc_Percent_IntInt_ReturnValue) == 0x000040, "Member 'ResultRewardList_C_CreateIcon::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_CreateIcon, CallFunc_Divide_IntInt_ReturnValue) == 0x000044, "Member 'ResultRewardList_C_CreateIcon::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");

// Function ResultRewardList.ResultRewardList_C.SetSKill
// 0x0050 (0x0050 - 0x0000)
struct ResultRewardList_C_SetSKill final
{
public:
	TArray<struct FSBSkillParam>                  InSkillParam;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FSBSkillParam>                  Skill;                                             // 0x0010(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBSkillParam                          CallFunc_Array_Get_Item;                           // 0x0030(0x0018)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResultRewardList_C_SetSKill) == 0x000008, "Wrong alignment on ResultRewardList_C_SetSKill");
static_assert(sizeof(ResultRewardList_C_SetSKill) == 0x000050, "Wrong size on ResultRewardList_C_SetSKill");
static_assert(offsetof(ResultRewardList_C_SetSKill, InSkillParam) == 0x000000, "Member 'ResultRewardList_C_SetSKill::InSkillParam' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetSKill, Skill) == 0x000010, "Member 'ResultRewardList_C_SetSKill::Skill' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetSKill, Temp_int_Array_Index_Variable) == 0x000020, "Member 'ResultRewardList_C_SetSKill::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetSKill, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'ResultRewardList_C_SetSKill::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetSKill, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'ResultRewardList_C_SetSKill::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetSKill, CallFunc_Array_Length_ReturnValue) == 0x00002C, "Member 'ResultRewardList_C_SetSKill::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetSKill, CallFunc_Array_Get_Item) == 0x000030, "Member 'ResultRewardList_C_SetSKill::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetSKill, CallFunc_Less_IntInt_ReturnValue) == 0x000048, "Member 'ResultRewardList_C_SetSKill::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function ResultRewardList.ResultRewardList_C.DeleteIcon
// 0x0038 (0x0038 - 0x0000)
struct ResultRewardList_C_DeleteIcon final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_96E9[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_96EA[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResultRewardList_C_DeleteIcon) == 0x000008, "Wrong alignment on ResultRewardList_C_DeleteIcon");
static_assert(sizeof(ResultRewardList_C_DeleteIcon) == 0x000038, "Wrong size on ResultRewardList_C_DeleteIcon");
static_assert(offsetof(ResultRewardList_C_DeleteIcon, Temp_int_Array_Index_Variable) == 0x000000, "Member 'ResultRewardList_C_DeleteIcon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_DeleteIcon, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'ResultRewardList_C_DeleteIcon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_DeleteIcon, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'ResultRewardList_C_DeleteIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_DeleteIcon, CallFunc_GetAllChildren_ReturnValue) == 0x000010, "Member 'ResultRewardList_C_DeleteIcon::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_DeleteIcon, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'ResultRewardList_C_DeleteIcon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_DeleteIcon, CallFunc_Array_Get_Item) == 0x000028, "Member 'ResultRewardList_C_DeleteIcon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_DeleteIcon, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'ResultRewardList_C_DeleteIcon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function ResultRewardList.ResultRewardList_C.SetAlertIcon
// 0x0048 (0x0048 - 0x0000)
struct ResultRewardList_C_SetAlertIcon final
{
public:
	bool                                          IsYellow;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Param_IsVisible;                                   // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96EB[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_96EC[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96ED[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UQuestRewardIcon_C*                     K2Node_DynamicCast_AsQuest_Reward_Icon;            // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResultRewardList_C_SetAlertIcon) == 0x000008, "Wrong alignment on ResultRewardList_C_SetAlertIcon");
static_assert(sizeof(ResultRewardList_C_SetAlertIcon) == 0x000048, "Wrong size on ResultRewardList_C_SetAlertIcon");
static_assert(offsetof(ResultRewardList_C_SetAlertIcon, IsYellow) == 0x000000, "Member 'ResultRewardList_C_SetAlertIcon::IsYellow' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetAlertIcon, Param_IsVisible) == 0x000001, "Member 'ResultRewardList_C_SetAlertIcon::Param_IsVisible' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetAlertIcon, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'ResultRewardList_C_SetAlertIcon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetAlertIcon, Temp_int_Array_Index_Variable) == 0x000008, "Member 'ResultRewardList_C_SetAlertIcon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetAlertIcon, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'ResultRewardList_C_SetAlertIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetAlertIcon, CallFunc_GetAllChildren_ReturnValue) == 0x000010, "Member 'ResultRewardList_C_SetAlertIcon::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetAlertIcon, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'ResultRewardList_C_SetAlertIcon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetAlertIcon, CallFunc_Array_Get_Item) == 0x000028, "Member 'ResultRewardList_C_SetAlertIcon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetAlertIcon, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'ResultRewardList_C_SetAlertIcon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetAlertIcon, K2Node_DynamicCast_AsQuest_Reward_Icon) == 0x000038, "Member 'ResultRewardList_C_SetAlertIcon::K2Node_DynamicCast_AsQuest_Reward_Icon' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetAlertIcon, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'ResultRewardList_C_SetAlertIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function ResultRewardList.ResultRewardList_C.SetAmountColorType
// 0x0058 (0x0058 - 0x0000)
struct ResultRewardList_C_SetAmountColorType final
{
public:
	class FString                                 ColorName;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_96EE[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0020(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_96EF[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96F0[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UQuestRewardIcon_C*                     K2Node_DynamicCast_AsQuest_Reward_Icon;            // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResultRewardList_C_SetAmountColorType) == 0x000008, "Wrong alignment on ResultRewardList_C_SetAmountColorType");
static_assert(sizeof(ResultRewardList_C_SetAmountColorType) == 0x000058, "Wrong size on ResultRewardList_C_SetAmountColorType");
static_assert(offsetof(ResultRewardList_C_SetAmountColorType, ColorName) == 0x000000, "Member 'ResultRewardList_C_SetAmountColorType::ColorName' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetAmountColorType, Temp_int_Array_Index_Variable) == 0x000010, "Member 'ResultRewardList_C_SetAmountColorType::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetAmountColorType, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'ResultRewardList_C_SetAmountColorType::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetAmountColorType, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'ResultRewardList_C_SetAmountColorType::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetAmountColorType, CallFunc_GetAllChildren_ReturnValue) == 0x000020, "Member 'ResultRewardList_C_SetAmountColorType::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetAmountColorType, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'ResultRewardList_C_SetAmountColorType::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetAmountColorType, CallFunc_Array_Get_Item) == 0x000038, "Member 'ResultRewardList_C_SetAmountColorType::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetAmountColorType, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'ResultRewardList_C_SetAmountColorType::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetAmountColorType, K2Node_DynamicCast_AsQuest_Reward_Icon) == 0x000048, "Member 'ResultRewardList_C_SetAmountColorType::K2Node_DynamicCast_AsQuest_Reward_Icon' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetAmountColorType, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'ResultRewardList_C_SetAmountColorType::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function ResultRewardList.ResultRewardList_C.SetVisibleIconBG
// 0x0048 (0x0048 - 0x0000)
struct ResultRewardList_C_SetVisibleIconBG final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96F1[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_96F2[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96F3[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UQuestRewardIcon_C*                     K2Node_DynamicCast_AsQuest_Reward_Icon;            // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResultRewardList_C_SetVisibleIconBG) == 0x000008, "Wrong alignment on ResultRewardList_C_SetVisibleIconBG");
static_assert(sizeof(ResultRewardList_C_SetVisibleIconBG) == 0x000048, "Wrong size on ResultRewardList_C_SetVisibleIconBG");
static_assert(offsetof(ResultRewardList_C_SetVisibleIconBG, Param_IsVisible) == 0x000000, "Member 'ResultRewardList_C_SetVisibleIconBG::Param_IsVisible' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetVisibleIconBG, Temp_int_Array_Index_Variable) == 0x000004, "Member 'ResultRewardList_C_SetVisibleIconBG::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetVisibleIconBG, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'ResultRewardList_C_SetVisibleIconBG::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetVisibleIconBG, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'ResultRewardList_C_SetVisibleIconBG::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetVisibleIconBG, CallFunc_GetAllChildren_ReturnValue) == 0x000010, "Member 'ResultRewardList_C_SetVisibleIconBG::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetVisibleIconBG, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'ResultRewardList_C_SetVisibleIconBG::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetVisibleIconBG, CallFunc_Array_Get_Item) == 0x000028, "Member 'ResultRewardList_C_SetVisibleIconBG::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetVisibleIconBG, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'ResultRewardList_C_SetVisibleIconBG::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetVisibleIconBG, K2Node_DynamicCast_AsQuest_Reward_Icon) == 0x000038, "Member 'ResultRewardList_C_SetVisibleIconBG::K2Node_DynamicCast_AsQuest_Reward_Icon' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetVisibleIconBG, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'ResultRewardList_C_SetVisibleIconBG::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function ResultRewardList.ResultRewardList_C.Debug Dump Own Item Info
// 0x01C8 (0x01C8 - 0x0000)
struct ResultRewardList_C_Debug_Dump_Own_Item_Info final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_96F4[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FOwnItemInfo>                   CallFunc_GetOwnItemInfo_OwnItemInfo;               // 0x0040(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_96F5[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_Array_Get_Item;                           // 0x0058(0x0118)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96F6[0x7];                                     // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0178(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0188(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0198(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x01A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x01B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(ResultRewardList_C_Debug_Dump_Own_Item_Info) == 0x000008, "Wrong alignment on ResultRewardList_C_Debug_Dump_Own_Item_Info");
static_assert(sizeof(ResultRewardList_C_Debug_Dump_Own_Item_Info) == 0x0001C8, "Wrong size on ResultRewardList_C_Debug_Dump_Own_Item_Info");
static_assert(offsetof(ResultRewardList_C_Debug_Dump_Own_Item_Info, Temp_int_Array_Index_Variable) == 0x000000, "Member 'ResultRewardList_C_Debug_Dump_Own_Item_Info::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_Debug_Dump_Own_Item_Info, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'ResultRewardList_C_Debug_Dump_Own_Item_Info::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_Debug_Dump_Own_Item_Info, CallFunc_Conv_IntToString_ReturnValue) == 0x000008, "Member 'ResultRewardList_C_Debug_Dump_Own_Item_Info::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_Debug_Dump_Own_Item_Info, CallFunc_Concat_StrStr_ReturnValue) == 0x000018, "Member 'ResultRewardList_C_Debug_Dump_Own_Item_Info::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_Debug_Dump_Own_Item_Info, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'ResultRewardList_C_Debug_Dump_Own_Item_Info::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_Debug_Dump_Own_Item_Info, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000030, "Member 'ResultRewardList_C_Debug_Dump_Own_Item_Info::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_Debug_Dump_Own_Item_Info, CallFunc_GetOwnItemInfo_OwnItemInfo) == 0x000040, "Member 'ResultRewardList_C_Debug_Dump_Own_Item_Info::CallFunc_GetOwnItemInfo_OwnItemInfo' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_Debug_Dump_Own_Item_Info, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'ResultRewardList_C_Debug_Dump_Own_Item_Info::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_Debug_Dump_Own_Item_Info, CallFunc_Array_Get_Item) == 0x000058, "Member 'ResultRewardList_C_Debug_Dump_Own_Item_Info::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_Debug_Dump_Own_Item_Info, CallFunc_Less_IntInt_ReturnValue) == 0x000170, "Member 'ResultRewardList_C_Debug_Dump_Own_Item_Info::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_Debug_Dump_Own_Item_Info, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000178, "Member 'ResultRewardList_C_Debug_Dump_Own_Item_Info::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_Debug_Dump_Own_Item_Info, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000188, "Member 'ResultRewardList_C_Debug_Dump_Own_Item_Info::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_Debug_Dump_Own_Item_Info, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000198, "Member 'ResultRewardList_C_Debug_Dump_Own_Item_Info::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_Debug_Dump_Own_Item_Info, CallFunc_Concat_StrStr_ReturnValue_3) == 0x0001A8, "Member 'ResultRewardList_C_Debug_Dump_Own_Item_Info::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_Debug_Dump_Own_Item_Info, CallFunc_Concat_StrStr_ReturnValue_4) == 0x0001B8, "Member 'ResultRewardList_C_Debug_Dump_Own_Item_Info::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");

// Function ResultRewardList.ResultRewardList_C.Debug Dump Integer Array
// 0x0078 (0x0078 - 0x0000)
struct ResultRewardList_C_Debug_Dump_Integer_Array final
{
public:
	TArray<int32>                                 InArray;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                 TmpString;                                         // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item;                           // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96F7[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(ResultRewardList_C_Debug_Dump_Integer_Array) == 0x000008, "Wrong alignment on ResultRewardList_C_Debug_Dump_Integer_Array");
static_assert(sizeof(ResultRewardList_C_Debug_Dump_Integer_Array) == 0x000078, "Wrong size on ResultRewardList_C_Debug_Dump_Integer_Array");
static_assert(offsetof(ResultRewardList_C_Debug_Dump_Integer_Array, InArray) == 0x000000, "Member 'ResultRewardList_C_Debug_Dump_Integer_Array::InArray' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_Debug_Dump_Integer_Array, TmpString) == 0x000010, "Member 'ResultRewardList_C_Debug_Dump_Integer_Array::TmpString' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_Debug_Dump_Integer_Array, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'ResultRewardList_C_Debug_Dump_Integer_Array::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_Debug_Dump_Integer_Array, Temp_int_Array_Index_Variable) == 0x000024, "Member 'ResultRewardList_C_Debug_Dump_Integer_Array::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_Debug_Dump_Integer_Array, Temp_int_Loop_Counter_Variable) == 0x000028, "Member 'ResultRewardList_C_Debug_Dump_Integer_Array::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_Debug_Dump_Integer_Array, CallFunc_Array_Get_Item) == 0x00002C, "Member 'ResultRewardList_C_Debug_Dump_Integer_Array::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_Debug_Dump_Integer_Array, CallFunc_Conv_IntToString_ReturnValue) == 0x000030, "Member 'ResultRewardList_C_Debug_Dump_Integer_Array::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_Debug_Dump_Integer_Array, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'ResultRewardList_C_Debug_Dump_Integer_Array::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_Debug_Dump_Integer_Array, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'ResultRewardList_C_Debug_Dump_Integer_Array::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_Debug_Dump_Integer_Array, CallFunc_Concat_StrStr_ReturnValue) == 0x000048, "Member 'ResultRewardList_C_Debug_Dump_Integer_Array::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_Debug_Dump_Integer_Array, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000058, "Member 'ResultRewardList_C_Debug_Dump_Integer_Array::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_Debug_Dump_Integer_Array, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000068, "Member 'ResultRewardList_C_Debug_Dump_Integer_Array::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");

// Function ResultRewardList.ResultRewardList_C.Debug Dump Lottery Groups Rewards
// 0x0100 (0x0100 - 0x0000)
struct ResultRewardList_C_Debug_Dump_Lottery_Groups_Rewards final
{
public:
	class FName                                   RewardId;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBMasterRewardLotteryGroupsRewards> Rewards;                                           // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_96F8[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_NameToText_ReturnValue;              // 0x0020(0x0018)()
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_96F9[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0040(0x0040)(HasGetValueTypeHash)
	struct FSBMasterRewardLotteryGroupsRewards    CallFunc_Array_Get_Item;                           // 0x0080(0x0038)(NoDestructor)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00B8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00C8(0x0018)()
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96FA[0x3];                                     // 0x00F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ResultRewardList_C_Debug_Dump_Lottery_Groups_Rewards) == 0x000008, "Wrong alignment on ResultRewardList_C_Debug_Dump_Lottery_Groups_Rewards");
static_assert(sizeof(ResultRewardList_C_Debug_Dump_Lottery_Groups_Rewards) == 0x000100, "Wrong size on ResultRewardList_C_Debug_Dump_Lottery_Groups_Rewards");
static_assert(offsetof(ResultRewardList_C_Debug_Dump_Lottery_Groups_Rewards, RewardId) == 0x000000, "Member 'ResultRewardList_C_Debug_Dump_Lottery_Groups_Rewards::RewardId' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_Debug_Dump_Lottery_Groups_Rewards, Rewards) == 0x000008, "Member 'ResultRewardList_C_Debug_Dump_Lottery_Groups_Rewards::Rewards' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_Debug_Dump_Lottery_Groups_Rewards, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'ResultRewardList_C_Debug_Dump_Lottery_Groups_Rewards::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_Debug_Dump_Lottery_Groups_Rewards, CallFunc_Conv_NameToText_ReturnValue) == 0x000020, "Member 'ResultRewardList_C_Debug_Dump_Lottery_Groups_Rewards::CallFunc_Conv_NameToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_Debug_Dump_Lottery_Groups_Rewards, Temp_int_Array_Index_Variable) == 0x000038, "Member 'ResultRewardList_C_Debug_Dump_Lottery_Groups_Rewards::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_Debug_Dump_Lottery_Groups_Rewards, K2Node_MakeStruct_FormatArgumentData) == 0x000040, "Member 'ResultRewardList_C_Debug_Dump_Lottery_Groups_Rewards::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_Debug_Dump_Lottery_Groups_Rewards, CallFunc_Array_Get_Item) == 0x000080, "Member 'ResultRewardList_C_Debug_Dump_Lottery_Groups_Rewards::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_Debug_Dump_Lottery_Groups_Rewards, K2Node_MakeArray_Array) == 0x0000B8, "Member 'ResultRewardList_C_Debug_Dump_Lottery_Groups_Rewards::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_Debug_Dump_Lottery_Groups_Rewards, CallFunc_Format_ReturnValue) == 0x0000C8, "Member 'ResultRewardList_C_Debug_Dump_Lottery_Groups_Rewards::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_Debug_Dump_Lottery_Groups_Rewards, CallFunc_Conv_IntToString_ReturnValue) == 0x0000E0, "Member 'ResultRewardList_C_Debug_Dump_Lottery_Groups_Rewards::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_Debug_Dump_Lottery_Groups_Rewards, Temp_int_Loop_Counter_Variable) == 0x0000F0, "Member 'ResultRewardList_C_Debug_Dump_Lottery_Groups_Rewards::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_Debug_Dump_Lottery_Groups_Rewards, CallFunc_Less_IntInt_ReturnValue) == 0x0000F4, "Member 'ResultRewardList_C_Debug_Dump_Lottery_Groups_Rewards::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_Debug_Dump_Lottery_Groups_Rewards, CallFunc_Add_IntInt_ReturnValue) == 0x0000F8, "Member 'ResultRewardList_C_Debug_Dump_Lottery_Groups_Rewards::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function ResultRewardList.ResultRewardList_C.SetRoseOrb
// 0x0010 (0x0010 - 0x0000)
struct ResultRewardList_C_SetRoseOrb final
{
public:
	int32                                         InAmount;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetTeamBonusPercentForType_ReturnValue;   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96FB[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetTeamBonusPercentForType_Percent;       // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResultRewardList_C_SetRoseOrb) == 0x000004, "Wrong alignment on ResultRewardList_C_SetRoseOrb");
static_assert(sizeof(ResultRewardList_C_SetRoseOrb) == 0x000010, "Wrong size on ResultRewardList_C_SetRoseOrb");
static_assert(offsetof(ResultRewardList_C_SetRoseOrb, InAmount) == 0x000000, "Member 'ResultRewardList_C_SetRoseOrb::InAmount' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetRoseOrb, CallFunc_GetTeamBonusPercentForType_ReturnValue) == 0x000004, "Member 'ResultRewardList_C_SetRoseOrb::CallFunc_GetTeamBonusPercentForType_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetRoseOrb, CallFunc_GetTeamBonusPercentForType_Percent) == 0x000008, "Member 'ResultRewardList_C_SetRoseOrb::CallFunc_GetTeamBonusPercentForType_Percent' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetRoseOrb, CallFunc_Less_IntInt_ReturnValue) == 0x00000C, "Member 'ResultRewardList_C_SetRoseOrb::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function ResultRewardList.ResultRewardList_C.SetToken
// 0x0014 (0x0014 - 0x0000)
struct ResultRewardList_C_SetToken final
{
public:
	int32                                         InId;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InAmount;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetTeamBonusPercentForItemID_ReturnValue; // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96FC[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetTeamBonusPercentForItemID_Percent;     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResultRewardList_C_SetToken) == 0x000004, "Wrong alignment on ResultRewardList_C_SetToken");
static_assert(sizeof(ResultRewardList_C_SetToken) == 0x000014, "Wrong size on ResultRewardList_C_SetToken");
static_assert(offsetof(ResultRewardList_C_SetToken, InId) == 0x000000, "Member 'ResultRewardList_C_SetToken::InId' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetToken, InAmount) == 0x000004, "Member 'ResultRewardList_C_SetToken::InAmount' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetToken, CallFunc_GetTeamBonusPercentForItemID_ReturnValue) == 0x000008, "Member 'ResultRewardList_C_SetToken::CallFunc_GetTeamBonusPercentForItemID_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetToken, CallFunc_GetTeamBonusPercentForItemID_Percent) == 0x00000C, "Member 'ResultRewardList_C_SetToken::CallFunc_GetTeamBonusPercentForItemID_Percent' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetToken, CallFunc_Less_IntInt_ReturnValue) == 0x000010, "Member 'ResultRewardList_C_SetToken::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function ResultRewardList.ResultRewardList_C.SetTokens
// 0x0038 (0x0038 - 0x0000)
struct ResultRewardList_C_SetTokens final
{
public:
	TArray<struct FSBRewardToken>                 InTokenInfo;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBRewardToken                         CallFunc_Array_Get_Item;                           // 0x001C(0x000C)(NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetTeamBonusPercentForItemID_ReturnValue; // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96FD[0x1];                                     // 0x002B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetTeamBonusPercentForItemID_Percent;     // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ResultRewardList_C_SetTokens) == 0x000008, "Wrong alignment on ResultRewardList_C_SetTokens");
static_assert(sizeof(ResultRewardList_C_SetTokens) == 0x000038, "Wrong size on ResultRewardList_C_SetTokens");
static_assert(offsetof(ResultRewardList_C_SetTokens, InTokenInfo) == 0x000000, "Member 'ResultRewardList_C_SetTokens::InTokenInfo' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetTokens, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'ResultRewardList_C_SetTokens::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetTokens, Temp_int_Array_Index_Variable) == 0x000014, "Member 'ResultRewardList_C_SetTokens::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetTokens, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'ResultRewardList_C_SetTokens::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetTokens, CallFunc_Array_Get_Item) == 0x00001C, "Member 'ResultRewardList_C_SetTokens::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetTokens, CallFunc_Less_IntInt_ReturnValue) == 0x000028, "Member 'ResultRewardList_C_SetTokens::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetTokens, CallFunc_Less_IntInt_ReturnValue_1) == 0x000029, "Member 'ResultRewardList_C_SetTokens::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetTokens, CallFunc_GetTeamBonusPercentForItemID_ReturnValue) == 0x00002A, "Member 'ResultRewardList_C_SetTokens::CallFunc_GetTeamBonusPercentForItemID_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetTokens, CallFunc_GetTeamBonusPercentForItemID_Percent) == 0x00002C, "Member 'ResultRewardList_C_SetTokens::CallFunc_GetTeamBonusPercentForItemID_Percent' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetTokens, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'ResultRewardList_C_SetTokens::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function ResultRewardList.ResultRewardList_C.SetMedal
// 0x0028 (0x0028 - 0x0000)
struct ResultRewardList_C_SetMedal final
{
public:
	TArray<int32>                                 InId;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item;                           // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96FE[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ResultRewardList_C_SetMedal) == 0x000008, "Wrong alignment on ResultRewardList_C_SetMedal");
static_assert(sizeof(ResultRewardList_C_SetMedal) == 0x000028, "Wrong size on ResultRewardList_C_SetMedal");
static_assert(offsetof(ResultRewardList_C_SetMedal, InId) == 0x000000, "Member 'ResultRewardList_C_SetMedal::InId' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetMedal, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'ResultRewardList_C_SetMedal::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetMedal, Temp_int_Array_Index_Variable) == 0x000014, "Member 'ResultRewardList_C_SetMedal::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetMedal, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'ResultRewardList_C_SetMedal::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetMedal, CallFunc_Array_Get_Item) == 0x00001C, "Member 'ResultRewardList_C_SetMedal::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetMedal, CallFunc_Less_IntInt_ReturnValue) == 0x000020, "Member 'ResultRewardList_C_SetMedal::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetMedal, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'ResultRewardList_C_SetMedal::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function ResultRewardList.ResultRewardList_C.SetOverLimit
// 0x0040 (0x0040 - 0x0000)
struct ResultRewardList_C_SetOverLimit final
{
public:
	struct FSBOverLimit                           SBOverLimit;                                       // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBTokenOverLimit                      CallFunc_Array_Get_Item;                           // 0x0024(0x0008)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96FF[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ResultRewardList_C_SetOverLimit) == 0x000008, "Wrong alignment on ResultRewardList_C_SetOverLimit");
static_assert(sizeof(ResultRewardList_C_SetOverLimit) == 0x000040, "Wrong size on ResultRewardList_C_SetOverLimit");
static_assert(offsetof(ResultRewardList_C_SetOverLimit, SBOverLimit) == 0x000000, "Member 'ResultRewardList_C_SetOverLimit::SBOverLimit' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetOverLimit, Temp_int_Array_Index_Variable) == 0x000020, "Member 'ResultRewardList_C_SetOverLimit::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetOverLimit, CallFunc_Array_Get_Item) == 0x000024, "Member 'ResultRewardList_C_SetOverLimit::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetOverLimit, CallFunc_Array_Length_ReturnValue) == 0x00002C, "Member 'ResultRewardList_C_SetOverLimit::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetOverLimit, Temp_int_Loop_Counter_Variable) == 0x000030, "Member 'ResultRewardList_C_SetOverLimit::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetOverLimit, CallFunc_Less_IntInt_ReturnValue) == 0x000034, "Member 'ResultRewardList_C_SetOverLimit::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetOverLimit, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'ResultRewardList_C_SetOverLimit::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function ResultRewardList.ResultRewardList_C.Build
// 0x0028 (0x0028 - 0x0000)
struct ResultRewardList_C_Build final
{
public:
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ResultRewardList_C_Build) == 0x000008, "Wrong alignment on ResultRewardList_C_Build");
static_assert(sizeof(ResultRewardList_C_Build) == 0x000028, "Wrong size on ResultRewardList_C_Build");
static_assert(offsetof(ResultRewardList_C_Build, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000000, "Member 'ResultRewardList_C_Build::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_Build, CallFunc_GetChildrenCount_ReturnValue) == 0x000008, "Member 'ResultRewardList_C_Build::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_Build, CallFunc_Subtract_IntInt_ReturnValue) == 0x00000C, "Member 'ResultRewardList_C_Build::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_Build, CallFunc_Divide_IntInt_ReturnValue) == 0x000010, "Member 'ResultRewardList_C_Build::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_Build, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'ResultRewardList_C_Build::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_Build, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000018, "Member 'ResultRewardList_C_Build::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_Build, CallFunc_MakeVector2D_ReturnValue) == 0x00001C, "Member 'ResultRewardList_C_Build::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

// Function ResultRewardList.ResultRewardList_C.SetOwnItemInfo
// 0x0010 (0x0010 - 0x0000)
struct ResultRewardList_C_SetOwnItemInfo final
{
public:
	TArray<struct FOwnItemInfo>                   Param_OwnItemInfo;                                 // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(ResultRewardList_C_SetOwnItemInfo) == 0x000008, "Wrong alignment on ResultRewardList_C_SetOwnItemInfo");
static_assert(sizeof(ResultRewardList_C_SetOwnItemInfo) == 0x000010, "Wrong size on ResultRewardList_C_SetOwnItemInfo");
static_assert(offsetof(ResultRewardList_C_SetOwnItemInfo, Param_OwnItemInfo) == 0x000000, "Member 'ResultRewardList_C_SetOwnItemInfo::Param_OwnItemInfo' has a wrong offset!");

// Function ResultRewardList.ResultRewardList_C.SetRewardControl
// 0x0014 (0x0014 - 0x0000)
struct ResultRewardList_C_SetRewardControl final
{
public:
	struct FSBMasterRewardControl                 InRewardControl;                                   // 0x0000(0x0014)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(ResultRewardList_C_SetRewardControl) == 0x000004, "Wrong alignment on ResultRewardList_C_SetRewardControl");
static_assert(sizeof(ResultRewardList_C_SetRewardControl) == 0x000014, "Wrong size on ResultRewardList_C_SetRewardControl");
static_assert(offsetof(ResultRewardList_C_SetRewardControl, InRewardControl) == 0x000000, "Member 'ResultRewardList_C_SetRewardControl::InRewardControl' has a wrong offset!");

// Function ResultRewardList.ResultRewardList_C.SetBuffBonus
// 0x0003 (0x0003 - 0x0000)
struct ResultRewardList_C_SetBuffBonus final
{
public:
	bool                                          IsBuffItemBonusLuno_;                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsBuffItemBonusEXP_;                               // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsBuffItemBonusGC_;                                // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResultRewardList_C_SetBuffBonus) == 0x000001, "Wrong alignment on ResultRewardList_C_SetBuffBonus");
static_assert(sizeof(ResultRewardList_C_SetBuffBonus) == 0x000003, "Wrong size on ResultRewardList_C_SetBuffBonus");
static_assert(offsetof(ResultRewardList_C_SetBuffBonus, IsBuffItemBonusLuno_) == 0x000000, "Member 'ResultRewardList_C_SetBuffBonus::IsBuffItemBonusLuno_' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetBuffBonus, IsBuffItemBonusEXP_) == 0x000001, "Member 'ResultRewardList_C_SetBuffBonus::IsBuffItemBonusEXP_' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_SetBuffBonus, IsBuffItemBonusGC_) == 0x000002, "Member 'ResultRewardList_C_SetBuffBonus::IsBuffItemBonusGC_' has a wrong offset!");

// Function ResultRewardList.ResultRewardList_C.SetTeamBonus
// 0x0010 (0x0010 - 0x0000)
struct ResultRewardList_C_SetTeamBonus final
{
public:
	TArray<struct FSBMasterGuildBonus>            InTeamBonus;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(ResultRewardList_C_SetTeamBonus) == 0x000008, "Wrong alignment on ResultRewardList_C_SetTeamBonus");
static_assert(sizeof(ResultRewardList_C_SetTeamBonus) == 0x000010, "Wrong size on ResultRewardList_C_SetTeamBonus");
static_assert(offsetof(ResultRewardList_C_SetTeamBonus, InTeamBonus) == 0x000000, "Member 'ResultRewardList_C_SetTeamBonus::InTeamBonus' has a wrong offset!");

// Function ResultRewardList.ResultRewardList_C.IsMargeType
// 0x0003 (0x0003 - 0x0000)
struct ResultRewardList_C_IsMargeType final
{
public:
	ESBRewardItemType                             Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResultRewardList_C_IsMargeType) == 0x000001, "Wrong alignment on ResultRewardList_C_IsMargeType");
static_assert(sizeof(ResultRewardList_C_IsMargeType) == 0x000003, "Wrong size on ResultRewardList_C_IsMargeType");
static_assert(offsetof(ResultRewardList_C_IsMargeType, Type) == 0x000000, "Member 'ResultRewardList_C_IsMargeType::Type' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsMargeType, Result) == 0x000001, "Member 'ResultRewardList_C_IsMargeType::Result' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsMargeType, K2Node_SwitchEnum_CmpSuccess) == 0x000002, "Member 'ResultRewardList_C_IsMargeType::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function ResultRewardList.ResultRewardList_C.isBonus
// 0x0140 (0x0140 - 0x0000)
struct ResultRewardList_C_IsBonus final
{
public:
	struct FQuestRewardIconInfo                   InInfo;                                            // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0028(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9700[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuestRewardIconInfo                   Info;                                              // 0x0030(0x0028)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsGC_ReturnValue;                         // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x005B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindItemMaster_bIsValid;                  // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9701[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_FindItemMaster_ItemMaster;                // 0x0060(0x00D0)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0132(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsBuffGCBonus_Result;                     // 0x0133(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsBuffEXPBonus_Result;                    // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsBuffLunoBonus_Result;                   // 0x0135(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsRewardControlMaterialAmountAdd_ReturnValue; // 0x0136(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsRewardControlMaterialAmountMulti_ReturnValue; // 0x0137(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsRewardControlEXPMulti_ReturnValue;      // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x013A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsRewardControlLunoMulti_ReturnValue;     // 0x013B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResultRewardList_C_IsBonus) == 0x000008, "Wrong alignment on ResultRewardList_C_IsBonus");
static_assert(sizeof(ResultRewardList_C_IsBonus) == 0x000140, "Wrong size on ResultRewardList_C_IsBonus");
static_assert(offsetof(ResultRewardList_C_IsBonus, InInfo) == 0x000000, "Member 'ResultRewardList_C_IsBonus::InInfo' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsBonus, Result) == 0x000028, "Member 'ResultRewardList_C_IsBonus::Result' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsBonus, Info) == 0x000030, "Member 'ResultRewardList_C_IsBonus::Info' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsBonus, CallFunc_Less_IntInt_ReturnValue) == 0x000058, "Member 'ResultRewardList_C_IsBonus::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsBonus, CallFunc_IsGC_ReturnValue) == 0x000059, "Member 'ResultRewardList_C_IsBonus::CallFunc_IsGC_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsBonus, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00005A, "Member 'ResultRewardList_C_IsBonus::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsBonus, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00005B, "Member 'ResultRewardList_C_IsBonus::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsBonus, CallFunc_FindItemMaster_bIsValid) == 0x00005C, "Member 'ResultRewardList_C_IsBonus::CallFunc_FindItemMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsBonus, CallFunc_FindItemMaster_ItemMaster) == 0x000060, "Member 'ResultRewardList_C_IsBonus::CallFunc_FindItemMaster_ItemMaster' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsBonus, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000130, "Member 'ResultRewardList_C_IsBonus::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsBonus, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000131, "Member 'ResultRewardList_C_IsBonus::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsBonus, CallFunc_BooleanAND_ReturnValue) == 0x000132, "Member 'ResultRewardList_C_IsBonus::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsBonus, CallFunc_IsBuffGCBonus_Result) == 0x000133, "Member 'ResultRewardList_C_IsBonus::CallFunc_IsBuffGCBonus_Result' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsBonus, CallFunc_IsBuffEXPBonus_Result) == 0x000134, "Member 'ResultRewardList_C_IsBonus::CallFunc_IsBuffEXPBonus_Result' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsBonus, CallFunc_IsBuffLunoBonus_Result) == 0x000135, "Member 'ResultRewardList_C_IsBonus::CallFunc_IsBuffLunoBonus_Result' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsBonus, CallFunc_IsRewardControlMaterialAmountAdd_ReturnValue) == 0x000136, "Member 'ResultRewardList_C_IsBonus::CallFunc_IsRewardControlMaterialAmountAdd_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsBonus, CallFunc_IsRewardControlMaterialAmountMulti_ReturnValue) == 0x000137, "Member 'ResultRewardList_C_IsBonus::CallFunc_IsRewardControlMaterialAmountMulti_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsBonus, CallFunc_IsRewardControlEXPMulti_ReturnValue) == 0x000138, "Member 'ResultRewardList_C_IsBonus::CallFunc_IsRewardControlEXPMulti_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsBonus, CallFunc_BooleanOR_ReturnValue) == 0x000139, "Member 'ResultRewardList_C_IsBonus::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsBonus, CallFunc_BooleanOR_ReturnValue_1) == 0x00013A, "Member 'ResultRewardList_C_IsBonus::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsBonus, CallFunc_IsRewardControlLunoMulti_ReturnValue) == 0x00013B, "Member 'ResultRewardList_C_IsBonus::CallFunc_IsRewardControlLunoMulti_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsBonus, CallFunc_BooleanOR_ReturnValue_2) == 0x00013C, "Member 'ResultRewardList_C_IsBonus::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");

// Function ResultRewardList.ResultRewardList_C.GetIconNum
// 0x0008 (0x0008 - 0x0000)
struct ResultRewardList_C_GetIconNum final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ResultRewardList_C_GetIconNum) == 0x000004, "Wrong alignment on ResultRewardList_C_GetIconNum");
static_assert(sizeof(ResultRewardList_C_GetIconNum) == 0x000008, "Wrong size on ResultRewardList_C_GetIconNum");
static_assert(offsetof(ResultRewardList_C_GetIconNum, ReturnValue) == 0x000000, "Member 'ResultRewardList_C_GetIconNum::ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_GetIconNum, CallFunc_GetChildrenCount_ReturnValue) == 0x000004, "Member 'ResultRewardList_C_GetIconNum::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");

// Function ResultRewardList.ResultRewardList_C.GetOwnItemInfo
// 0x0010 (0x0010 - 0x0000)
struct ResultRewardList_C_GetOwnItemInfo final
{
public:
	TArray<struct FOwnItemInfo>                   Param_OwnItemInfo;                                 // 0x0000(0x0010)(Parm, OutParm)
};
static_assert(alignof(ResultRewardList_C_GetOwnItemInfo) == 0x000008, "Wrong alignment on ResultRewardList_C_GetOwnItemInfo");
static_assert(sizeof(ResultRewardList_C_GetOwnItemInfo) == 0x000010, "Wrong size on ResultRewardList_C_GetOwnItemInfo");
static_assert(offsetof(ResultRewardList_C_GetOwnItemInfo, Param_OwnItemInfo) == 0x000000, "Member 'ResultRewardList_C_GetOwnItemInfo::Param_OwnItemInfo' has a wrong offset!");

// Function ResultRewardList.ResultRewardList_C.FindOwnItemInfo
// 0x0390 (0x0390 - 0x0000)
struct ResultRewardList_C_FindOwnItemInfo final
{
public:
	class FString                                 InUniqueId;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9702[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           ItemInfo;                                          // 0x0018(0x0118)(Parm, OutParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9703[0x4];                                     // 0x013C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           K2Node_MakeStruct_OwnItemInfo;                     // 0x0140(0x0118)()
	TArray<struct FOwnItemInfo>                   CallFunc_GetOwnItemInfo_OwnItemInfo;               // 0x0258(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0268(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9704[0x4];                                     // 0x026C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_Array_Get_Item;                           // 0x0270(0x0118)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0388(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0389(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResultRewardList_C_FindOwnItemInfo) == 0x000008, "Wrong alignment on ResultRewardList_C_FindOwnItemInfo");
static_assert(sizeof(ResultRewardList_C_FindOwnItemInfo) == 0x000390, "Wrong size on ResultRewardList_C_FindOwnItemInfo");
static_assert(offsetof(ResultRewardList_C_FindOwnItemInfo, InUniqueId) == 0x000000, "Member 'ResultRewardList_C_FindOwnItemInfo::InUniqueId' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_FindOwnItemInfo, Result) == 0x000010, "Member 'ResultRewardList_C_FindOwnItemInfo::Result' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_FindOwnItemInfo, ItemInfo) == 0x000018, "Member 'ResultRewardList_C_FindOwnItemInfo::ItemInfo' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_FindOwnItemInfo, Temp_int_Array_Index_Variable) == 0x000130, "Member 'ResultRewardList_C_FindOwnItemInfo::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_FindOwnItemInfo, Temp_int_Loop_Counter_Variable) == 0x000134, "Member 'ResultRewardList_C_FindOwnItemInfo::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_FindOwnItemInfo, CallFunc_Add_IntInt_ReturnValue) == 0x000138, "Member 'ResultRewardList_C_FindOwnItemInfo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_FindOwnItemInfo, K2Node_MakeStruct_OwnItemInfo) == 0x000140, "Member 'ResultRewardList_C_FindOwnItemInfo::K2Node_MakeStruct_OwnItemInfo' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_FindOwnItemInfo, CallFunc_GetOwnItemInfo_OwnItemInfo) == 0x000258, "Member 'ResultRewardList_C_FindOwnItemInfo::CallFunc_GetOwnItemInfo_OwnItemInfo' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_FindOwnItemInfo, CallFunc_Array_Length_ReturnValue) == 0x000268, "Member 'ResultRewardList_C_FindOwnItemInfo::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_FindOwnItemInfo, CallFunc_Array_Get_Item) == 0x000270, "Member 'ResultRewardList_C_FindOwnItemInfo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_FindOwnItemInfo, CallFunc_Less_IntInt_ReturnValue) == 0x000388, "Member 'ResultRewardList_C_FindOwnItemInfo::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_FindOwnItemInfo, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000389, "Member 'ResultRewardList_C_FindOwnItemInfo::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");

// Function ResultRewardList.ResultRewardList_C.IsShowDetailWindow
// 0x0048 (0x0048 - 0x0000)
struct ResultRewardList_C_IsShowDetailWindow final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9705[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9706[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9707[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UQuestRewardIcon_C*                     K2Node_DynamicCast_AsQuest_Reward_Icon;            // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_isDetailWindow_Result;                    // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResultRewardList_C_IsShowDetailWindow) == 0x000008, "Wrong alignment on ResultRewardList_C_IsShowDetailWindow");
static_assert(sizeof(ResultRewardList_C_IsShowDetailWindow) == 0x000048, "Wrong size on ResultRewardList_C_IsShowDetailWindow");
static_assert(offsetof(ResultRewardList_C_IsShowDetailWindow, Result) == 0x000000, "Member 'ResultRewardList_C_IsShowDetailWindow::Result' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsShowDetailWindow, Temp_int_Array_Index_Variable) == 0x000004, "Member 'ResultRewardList_C_IsShowDetailWindow::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsShowDetailWindow, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'ResultRewardList_C_IsShowDetailWindow::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsShowDetailWindow, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'ResultRewardList_C_IsShowDetailWindow::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsShowDetailWindow, CallFunc_GetAllChildren_ReturnValue) == 0x000010, "Member 'ResultRewardList_C_IsShowDetailWindow::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsShowDetailWindow, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'ResultRewardList_C_IsShowDetailWindow::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsShowDetailWindow, CallFunc_Array_Get_Item) == 0x000028, "Member 'ResultRewardList_C_IsShowDetailWindow::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsShowDetailWindow, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'ResultRewardList_C_IsShowDetailWindow::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsShowDetailWindow, K2Node_DynamicCast_AsQuest_Reward_Icon) == 0x000038, "Member 'ResultRewardList_C_IsShowDetailWindow::K2Node_DynamicCast_AsQuest_Reward_Icon' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsShowDetailWindow, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'ResultRewardList_C_IsShowDetailWindow::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsShowDetailWindow, CallFunc_isDetailWindow_Result) == 0x000041, "Member 'ResultRewardList_C_IsShowDetailWindow::CallFunc_isDetailWindow_Result' has a wrong offset!");

// Function ResultRewardList.ResultRewardList_C.GetRewardControl
// 0x0014 (0x0014 - 0x0000)
struct ResultRewardList_C_GetRewardControl final
{
public:
	struct FSBMasterRewardControl                 Param_RewardControl;                               // 0x0000(0x0014)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ResultRewardList_C_GetRewardControl) == 0x000004, "Wrong alignment on ResultRewardList_C_GetRewardControl");
static_assert(sizeof(ResultRewardList_C_GetRewardControl) == 0x000014, "Wrong size on ResultRewardList_C_GetRewardControl");
static_assert(offsetof(ResultRewardList_C_GetRewardControl, Param_RewardControl) == 0x000000, "Member 'ResultRewardList_C_GetRewardControl::Param_RewardControl' has a wrong offset!");

// Function ResultRewardList.ResultRewardList_C.IsRewardControlLunoMulti
// 0x001C (0x001C - 0x0000)
struct ResultRewardList_C_IsRewardControlLunoMulti final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9708[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterRewardControl                 CallFunc_GetRewardControl_RewardControl;           // 0x0004(0x0014)(NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResultRewardList_C_IsRewardControlLunoMulti) == 0x000004, "Wrong alignment on ResultRewardList_C_IsRewardControlLunoMulti");
static_assert(sizeof(ResultRewardList_C_IsRewardControlLunoMulti) == 0x00001C, "Wrong size on ResultRewardList_C_IsRewardControlLunoMulti");
static_assert(offsetof(ResultRewardList_C_IsRewardControlLunoMulti, ReturnValue) == 0x000000, "Member 'ResultRewardList_C_IsRewardControlLunoMulti::ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsRewardControlLunoMulti, CallFunc_GetRewardControl_RewardControl) == 0x000004, "Member 'ResultRewardList_C_IsRewardControlLunoMulti::CallFunc_GetRewardControl_RewardControl' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsRewardControlLunoMulti, CallFunc_Less_FloatFloat_ReturnValue) == 0x000018, "Member 'ResultRewardList_C_IsRewardControlLunoMulti::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");

// Function ResultRewardList.ResultRewardList_C.IsRewardControlEXPMulti
// 0x001C (0x001C - 0x0000)
struct ResultRewardList_C_IsRewardControlEXPMulti final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9709[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterRewardControl                 CallFunc_GetRewardControl_RewardControl;           // 0x0004(0x0014)(NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResultRewardList_C_IsRewardControlEXPMulti) == 0x000004, "Wrong alignment on ResultRewardList_C_IsRewardControlEXPMulti");
static_assert(sizeof(ResultRewardList_C_IsRewardControlEXPMulti) == 0x00001C, "Wrong size on ResultRewardList_C_IsRewardControlEXPMulti");
static_assert(offsetof(ResultRewardList_C_IsRewardControlEXPMulti, ReturnValue) == 0x000000, "Member 'ResultRewardList_C_IsRewardControlEXPMulti::ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsRewardControlEXPMulti, CallFunc_GetRewardControl_RewardControl) == 0x000004, "Member 'ResultRewardList_C_IsRewardControlEXPMulti::CallFunc_GetRewardControl_RewardControl' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsRewardControlEXPMulti, CallFunc_Less_FloatFloat_ReturnValue) == 0x000018, "Member 'ResultRewardList_C_IsRewardControlEXPMulti::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");

// Function ResultRewardList.ResultRewardList_C.IsRewardControlMaterialAmountMulti
// 0x001C (0x001C - 0x0000)
struct ResultRewardList_C_IsRewardControlMaterialAmountMulti final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_970A[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterRewardControl                 CallFunc_GetRewardControl_RewardControl;           // 0x0004(0x0014)(NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResultRewardList_C_IsRewardControlMaterialAmountMulti) == 0x000004, "Wrong alignment on ResultRewardList_C_IsRewardControlMaterialAmountMulti");
static_assert(sizeof(ResultRewardList_C_IsRewardControlMaterialAmountMulti) == 0x00001C, "Wrong size on ResultRewardList_C_IsRewardControlMaterialAmountMulti");
static_assert(offsetof(ResultRewardList_C_IsRewardControlMaterialAmountMulti, ReturnValue) == 0x000000, "Member 'ResultRewardList_C_IsRewardControlMaterialAmountMulti::ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsRewardControlMaterialAmountMulti, CallFunc_GetRewardControl_RewardControl) == 0x000004, "Member 'ResultRewardList_C_IsRewardControlMaterialAmountMulti::CallFunc_GetRewardControl_RewardControl' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsRewardControlMaterialAmountMulti, CallFunc_Less_FloatFloat_ReturnValue) == 0x000018, "Member 'ResultRewardList_C_IsRewardControlMaterialAmountMulti::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");

// Function ResultRewardList.ResultRewardList_C.IsRewardControlMaterialAmountAdd
// 0x001C (0x001C - 0x0000)
struct ResultRewardList_C_IsRewardControlMaterialAmountAdd final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_970B[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterRewardControl                 CallFunc_GetRewardControl_RewardControl;           // 0x0004(0x0014)(NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResultRewardList_C_IsRewardControlMaterialAmountAdd) == 0x000004, "Wrong alignment on ResultRewardList_C_IsRewardControlMaterialAmountAdd");
static_assert(sizeof(ResultRewardList_C_IsRewardControlMaterialAmountAdd) == 0x00001C, "Wrong size on ResultRewardList_C_IsRewardControlMaterialAmountAdd");
static_assert(offsetof(ResultRewardList_C_IsRewardControlMaterialAmountAdd, ReturnValue) == 0x000000, "Member 'ResultRewardList_C_IsRewardControlMaterialAmountAdd::ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsRewardControlMaterialAmountAdd, CallFunc_GetRewardControl_RewardControl) == 0x000004, "Member 'ResultRewardList_C_IsRewardControlMaterialAmountAdd::CallFunc_GetRewardControl_RewardControl' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsRewardControlMaterialAmountAdd, CallFunc_Less_IntInt_ReturnValue) == 0x000018, "Member 'ResultRewardList_C_IsRewardControlMaterialAmountAdd::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function ResultRewardList.ResultRewardList_C.IsRewardControlMaterialRate
// 0x001C (0x001C - 0x0000)
struct ResultRewardList_C_IsRewardControlMaterialRate final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_970C[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterRewardControl                 CallFunc_GetRewardControl_RewardControl;           // 0x0004(0x0014)(NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResultRewardList_C_IsRewardControlMaterialRate) == 0x000004, "Wrong alignment on ResultRewardList_C_IsRewardControlMaterialRate");
static_assert(sizeof(ResultRewardList_C_IsRewardControlMaterialRate) == 0x00001C, "Wrong size on ResultRewardList_C_IsRewardControlMaterialRate");
static_assert(offsetof(ResultRewardList_C_IsRewardControlMaterialRate, ReturnValue) == 0x000000, "Member 'ResultRewardList_C_IsRewardControlMaterialRate::ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsRewardControlMaterialRate, CallFunc_GetRewardControl_RewardControl) == 0x000004, "Member 'ResultRewardList_C_IsRewardControlMaterialRate::CallFunc_GetRewardControl_RewardControl' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsRewardControlMaterialRate, CallFunc_Less_FloatFloat_ReturnValue) == 0x000018, "Member 'ResultRewardList_C_IsRewardControlMaterialRate::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");

// Function ResultRewardList.ResultRewardList_C.IsBuffLunoBonus
// 0x0001 (0x0001 - 0x0000)
struct ResultRewardList_C_IsBuffLunoBonus final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResultRewardList_C_IsBuffLunoBonus) == 0x000001, "Wrong alignment on ResultRewardList_C_IsBuffLunoBonus");
static_assert(sizeof(ResultRewardList_C_IsBuffLunoBonus) == 0x000001, "Wrong size on ResultRewardList_C_IsBuffLunoBonus");
static_assert(offsetof(ResultRewardList_C_IsBuffLunoBonus, Result) == 0x000000, "Member 'ResultRewardList_C_IsBuffLunoBonus::Result' has a wrong offset!");

// Function ResultRewardList.ResultRewardList_C.IsBuffEXPBonus
// 0x0001 (0x0001 - 0x0000)
struct ResultRewardList_C_IsBuffEXPBonus final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResultRewardList_C_IsBuffEXPBonus) == 0x000001, "Wrong alignment on ResultRewardList_C_IsBuffEXPBonus");
static_assert(sizeof(ResultRewardList_C_IsBuffEXPBonus) == 0x000001, "Wrong size on ResultRewardList_C_IsBuffEXPBonus");
static_assert(offsetof(ResultRewardList_C_IsBuffEXPBonus, Result) == 0x000000, "Member 'ResultRewardList_C_IsBuffEXPBonus::Result' has a wrong offset!");

// Function ResultRewardList.ResultRewardList_C.IsBuffGCBonus
// 0x0001 (0x0001 - 0x0000)
struct ResultRewardList_C_IsBuffGCBonus final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResultRewardList_C_IsBuffGCBonus) == 0x000001, "Wrong alignment on ResultRewardList_C_IsBuffGCBonus");
static_assert(sizeof(ResultRewardList_C_IsBuffGCBonus) == 0x000001, "Wrong size on ResultRewardList_C_IsBuffGCBonus");
static_assert(offsetof(ResultRewardList_C_IsBuffGCBonus, Result) == 0x000000, "Member 'ResultRewardList_C_IsBuffGCBonus::Result' has a wrong offset!");

// Function ResultRewardList.ResultRewardList_C.GetTeamBonus
// 0x0010 (0x0010 - 0x0000)
struct ResultRewardList_C_GetTeamBonus final
{
public:
	TArray<struct FSBMasterGuildBonus>            Param_TeamBonus;                                   // 0x0000(0x0010)(Parm, OutParm)
};
static_assert(alignof(ResultRewardList_C_GetTeamBonus) == 0x000008, "Wrong alignment on ResultRewardList_C_GetTeamBonus");
static_assert(sizeof(ResultRewardList_C_GetTeamBonus) == 0x000010, "Wrong size on ResultRewardList_C_GetTeamBonus");
static_assert(offsetof(ResultRewardList_C_GetTeamBonus, Param_TeamBonus) == 0x000000, "Member 'ResultRewardList_C_GetTeamBonus::Param_TeamBonus' has a wrong offset!");

// Function ResultRewardList.ResultRewardList_C.GetTeamBonusPercentForType
// 0x0058 (0x0058 - 0x0000)
struct ResultRewardList_C_GetTeamBonusPercentForType final
{
public:
	ESBRewardItemType                             InType;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_970D[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Percent;                                           // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_970E[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBMasterGuildBonus>            CallFunc_GetTeamBonus_TeamBonus;                   // 0x0018(0x0010)(ReferenceParm)
	struct FSBMasterGuildBonus                    CallFunc_Array_Get_Item;                           // 0x0028(0x000C)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindRewardMaster_IsValid;                 // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_970F[0x2];                                     // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterReward                        CallFunc_FindRewardMaster_RewardMaster;            // 0x003C(0x0014)(NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResultRewardList_C_GetTeamBonusPercentForType) == 0x000008, "Wrong alignment on ResultRewardList_C_GetTeamBonusPercentForType");
static_assert(sizeof(ResultRewardList_C_GetTeamBonusPercentForType) == 0x000058, "Wrong size on ResultRewardList_C_GetTeamBonusPercentForType");
static_assert(offsetof(ResultRewardList_C_GetTeamBonusPercentForType, InType) == 0x000000, "Member 'ResultRewardList_C_GetTeamBonusPercentForType::InType' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_GetTeamBonusPercentForType, ReturnValue) == 0x000001, "Member 'ResultRewardList_C_GetTeamBonusPercentForType::ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_GetTeamBonusPercentForType, Percent) == 0x000004, "Member 'ResultRewardList_C_GetTeamBonusPercentForType::Percent' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_GetTeamBonusPercentForType, Temp_int_Array_Index_Variable) == 0x000008, "Member 'ResultRewardList_C_GetTeamBonusPercentForType::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_GetTeamBonusPercentForType, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'ResultRewardList_C_GetTeamBonusPercentForType::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_GetTeamBonusPercentForType, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'ResultRewardList_C_GetTeamBonusPercentForType::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_GetTeamBonusPercentForType, CallFunc_GetTeamBonus_TeamBonus) == 0x000018, "Member 'ResultRewardList_C_GetTeamBonusPercentForType::CallFunc_GetTeamBonus_TeamBonus' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_GetTeamBonusPercentForType, CallFunc_Array_Get_Item) == 0x000028, "Member 'ResultRewardList_C_GetTeamBonusPercentForType::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_GetTeamBonusPercentForType, CallFunc_Array_Length_ReturnValue) == 0x000034, "Member 'ResultRewardList_C_GetTeamBonusPercentForType::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_GetTeamBonusPercentForType, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'ResultRewardList_C_GetTeamBonusPercentForType::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_GetTeamBonusPercentForType, CallFunc_FindRewardMaster_IsValid) == 0x000039, "Member 'ResultRewardList_C_GetTeamBonusPercentForType::CallFunc_FindRewardMaster_IsValid' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_GetTeamBonusPercentForType, CallFunc_FindRewardMaster_RewardMaster) == 0x00003C, "Member 'ResultRewardList_C_GetTeamBonusPercentForType::CallFunc_FindRewardMaster_RewardMaster' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_GetTeamBonusPercentForType, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000050, "Member 'ResultRewardList_C_GetTeamBonusPercentForType::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function ResultRewardList.ResultRewardList_C.GetTeamBonusPercentForItemID
// 0x0058 (0x0058 - 0x0000)
struct ResultRewardList_C_GetTeamBonusPercentForItemID final
{
public:
	int32                                         InItemID;                                          // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9710[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Percent;                                           // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBMasterGuildBonus>            CallFunc_GetTeamBonus_TeamBonus;                   // 0x0018(0x0010)(ReferenceParm)
	struct FSBMasterGuildBonus                    CallFunc_Array_Get_Item;                           // 0x0028(0x000C)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindRewardMaster_IsValid;                 // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9711[0x2];                                     // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterReward                        CallFunc_FindRewardMaster_RewardMaster;            // 0x003C(0x0014)(NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResultRewardList_C_GetTeamBonusPercentForItemID) == 0x000008, "Wrong alignment on ResultRewardList_C_GetTeamBonusPercentForItemID");
static_assert(sizeof(ResultRewardList_C_GetTeamBonusPercentForItemID) == 0x000058, "Wrong size on ResultRewardList_C_GetTeamBonusPercentForItemID");
static_assert(offsetof(ResultRewardList_C_GetTeamBonusPercentForItemID, InItemID) == 0x000000, "Member 'ResultRewardList_C_GetTeamBonusPercentForItemID::InItemID' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_GetTeamBonusPercentForItemID, ReturnValue) == 0x000004, "Member 'ResultRewardList_C_GetTeamBonusPercentForItemID::ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_GetTeamBonusPercentForItemID, Percent) == 0x000008, "Member 'ResultRewardList_C_GetTeamBonusPercentForItemID::Percent' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_GetTeamBonusPercentForItemID, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'ResultRewardList_C_GetTeamBonusPercentForItemID::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_GetTeamBonusPercentForItemID, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'ResultRewardList_C_GetTeamBonusPercentForItemID::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_GetTeamBonusPercentForItemID, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'ResultRewardList_C_GetTeamBonusPercentForItemID::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_GetTeamBonusPercentForItemID, CallFunc_GetTeamBonus_TeamBonus) == 0x000018, "Member 'ResultRewardList_C_GetTeamBonusPercentForItemID::CallFunc_GetTeamBonus_TeamBonus' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_GetTeamBonusPercentForItemID, CallFunc_Array_Get_Item) == 0x000028, "Member 'ResultRewardList_C_GetTeamBonusPercentForItemID::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_GetTeamBonusPercentForItemID, CallFunc_Array_Length_ReturnValue) == 0x000034, "Member 'ResultRewardList_C_GetTeamBonusPercentForItemID::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_GetTeamBonusPercentForItemID, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'ResultRewardList_C_GetTeamBonusPercentForItemID::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_GetTeamBonusPercentForItemID, CallFunc_FindRewardMaster_IsValid) == 0x000039, "Member 'ResultRewardList_C_GetTeamBonusPercentForItemID::CallFunc_FindRewardMaster_IsValid' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_GetTeamBonusPercentForItemID, CallFunc_FindRewardMaster_RewardMaster) == 0x00003C, "Member 'ResultRewardList_C_GetTeamBonusPercentForItemID::CallFunc_FindRewardMaster_RewardMaster' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_GetTeamBonusPercentForItemID, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000050, "Member 'ResultRewardList_C_GetTeamBonusPercentForItemID::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function ResultRewardList.ResultRewardList_C.GetTeamBonusPercentForRewardID
// 0x0048 (0x0048 - 0x0000)
struct ResultRewardList_C_GetTeamBonusPercentForRewardID final
{
public:
	class FName                                   InRewardId;                                        // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9712[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Percent;                                           // 0x000C(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9713[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBMasterGuildBonus>            CallFunc_GetTeamBonus_TeamBonus;                   // 0x0020(0x0010)(ReferenceParm)
	struct FSBMasterGuildBonus                    CallFunc_Array_Get_Item;                           // 0x0030(0x000C)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResultRewardList_C_GetTeamBonusPercentForRewardID) == 0x000008, "Wrong alignment on ResultRewardList_C_GetTeamBonusPercentForRewardID");
static_assert(sizeof(ResultRewardList_C_GetTeamBonusPercentForRewardID) == 0x000048, "Wrong size on ResultRewardList_C_GetTeamBonusPercentForRewardID");
static_assert(offsetof(ResultRewardList_C_GetTeamBonusPercentForRewardID, InRewardId) == 0x000000, "Member 'ResultRewardList_C_GetTeamBonusPercentForRewardID::InRewardId' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_GetTeamBonusPercentForRewardID, ReturnValue) == 0x000008, "Member 'ResultRewardList_C_GetTeamBonusPercentForRewardID::ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_GetTeamBonusPercentForRewardID, Percent) == 0x00000C, "Member 'ResultRewardList_C_GetTeamBonusPercentForRewardID::Percent' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_GetTeamBonusPercentForRewardID, Temp_int_Array_Index_Variable) == 0x000010, "Member 'ResultRewardList_C_GetTeamBonusPercentForRewardID::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_GetTeamBonusPercentForRewardID, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'ResultRewardList_C_GetTeamBonusPercentForRewardID::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_GetTeamBonusPercentForRewardID, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'ResultRewardList_C_GetTeamBonusPercentForRewardID::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_GetTeamBonusPercentForRewardID, CallFunc_GetTeamBonus_TeamBonus) == 0x000020, "Member 'ResultRewardList_C_GetTeamBonusPercentForRewardID::CallFunc_GetTeamBonus_TeamBonus' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_GetTeamBonusPercentForRewardID, CallFunc_Array_Get_Item) == 0x000030, "Member 'ResultRewardList_C_GetTeamBonusPercentForRewardID::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_GetTeamBonusPercentForRewardID, CallFunc_Array_Length_ReturnValue) == 0x00003C, "Member 'ResultRewardList_C_GetTeamBonusPercentForRewardID::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_GetTeamBonusPercentForRewardID, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'ResultRewardList_C_GetTeamBonusPercentForRewardID::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_GetTeamBonusPercentForRewardID, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000041, "Member 'ResultRewardList_C_GetTeamBonusPercentForRewardID::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");

// Function ResultRewardList.ResultRewardList_C.IsGC
// 0x0010 (0x0010 - 0x0000)
struct ResultRewardList_C_IsGC final
{
public:
	ESBRewardItemType                             InType;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9714[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InId;                                              // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResultRewardList_C_IsGC) == 0x000004, "Wrong alignment on ResultRewardList_C_IsGC");
static_assert(sizeof(ResultRewardList_C_IsGC) == 0x000010, "Wrong size on ResultRewardList_C_IsGC");
static_assert(offsetof(ResultRewardList_C_IsGC, InType) == 0x000000, "Member 'ResultRewardList_C_IsGC::InType' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsGC, InId) == 0x000004, "Member 'ResultRewardList_C_IsGC::InId' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsGC, ReturnValue) == 0x000008, "Member 'ResultRewardList_C_IsGC::ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsGC, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000009, "Member 'ResultRewardList_C_IsGC::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsGC, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00000A, "Member 'ResultRewardList_C_IsGC::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsGC, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00000B, "Member 'ResultRewardList_C_IsGC::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsGC, CallFunc_BooleanAND_ReturnValue) == 0x00000C, "Member 'ResultRewardList_C_IsGC::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsGC, CallFunc_BooleanOR_ReturnValue) == 0x00000D, "Member 'ResultRewardList_C_IsGC::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function ResultRewardList.ResultRewardList_C.IsIgnoreReward
// 0x0180 (0x0180 - 0x0000)
struct ResultRewardList_C_IsIgnoreReward final
{
public:
	struct FSBMasterReward                        SBMasterReward;                                    // 0x0000(0x0014)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                          ReturnValue;                                       // 0x0014(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9715[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGC_ReturnValue;                         // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_6;        // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_7;        // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_8;        // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0027(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_9;        // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_4;                  // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_5;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_10;       // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_6;                  // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_11;       // 0x002F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_7;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_8;                  // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9716[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_9;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_10;                 // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9717[0x2];                                     // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_11;                 // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9718[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FOwnItemInfo>                   CallFunc_GetOwnItemInfo_OwnItemInfo;               // 0x0048(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9719[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_Array_Get_Item;                           // 0x0060(0x0118)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0179(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResultRewardList_C_IsIgnoreReward) == 0x000008, "Wrong alignment on ResultRewardList_C_IsIgnoreReward");
static_assert(sizeof(ResultRewardList_C_IsIgnoreReward) == 0x000180, "Wrong size on ResultRewardList_C_IsIgnoreReward");
static_assert(offsetof(ResultRewardList_C_IsIgnoreReward, SBMasterReward) == 0x000000, "Member 'ResultRewardList_C_IsIgnoreReward::SBMasterReward' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsIgnoreReward, ReturnValue) == 0x000014, "Member 'ResultRewardList_C_IsIgnoreReward::ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsIgnoreReward, Temp_int_Array_Index_Variable) == 0x000018, "Member 'ResultRewardList_C_IsIgnoreReward::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsIgnoreReward, CallFunc_IsGC_ReturnValue) == 0x00001C, "Member 'ResultRewardList_C_IsIgnoreReward::CallFunc_IsGC_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsIgnoreReward, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00001D, "Member 'ResultRewardList_C_IsIgnoreReward::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsIgnoreReward, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00001E, "Member 'ResultRewardList_C_IsIgnoreReward::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsIgnoreReward, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x00001F, "Member 'ResultRewardList_C_IsIgnoreReward::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsIgnoreReward, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000020, "Member 'ResultRewardList_C_IsIgnoreReward::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsIgnoreReward, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x000021, "Member 'ResultRewardList_C_IsIgnoreReward::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsIgnoreReward, CallFunc_EqualEqual_ByteByte_ReturnValue_5) == 0x000022, "Member 'ResultRewardList_C_IsIgnoreReward::CallFunc_EqualEqual_ByteByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsIgnoreReward, CallFunc_EqualEqual_ByteByte_ReturnValue_6) == 0x000023, "Member 'ResultRewardList_C_IsIgnoreReward::CallFunc_EqualEqual_ByteByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsIgnoreReward, CallFunc_EqualEqual_ByteByte_ReturnValue_7) == 0x000024, "Member 'ResultRewardList_C_IsIgnoreReward::CallFunc_EqualEqual_ByteByte_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsIgnoreReward, CallFunc_BooleanOR_ReturnValue) == 0x000025, "Member 'ResultRewardList_C_IsIgnoreReward::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsIgnoreReward, CallFunc_EqualEqual_ByteByte_ReturnValue_8) == 0x000026, "Member 'ResultRewardList_C_IsIgnoreReward::CallFunc_EqualEqual_ByteByte_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsIgnoreReward, CallFunc_BooleanOR_ReturnValue_1) == 0x000027, "Member 'ResultRewardList_C_IsIgnoreReward::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsIgnoreReward, CallFunc_EqualEqual_ByteByte_ReturnValue_9) == 0x000028, "Member 'ResultRewardList_C_IsIgnoreReward::CallFunc_EqualEqual_ByteByte_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsIgnoreReward, CallFunc_BooleanOR_ReturnValue_2) == 0x000029, "Member 'ResultRewardList_C_IsIgnoreReward::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsIgnoreReward, CallFunc_BooleanOR_ReturnValue_3) == 0x00002A, "Member 'ResultRewardList_C_IsIgnoreReward::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsIgnoreReward, CallFunc_BooleanOR_ReturnValue_4) == 0x00002B, "Member 'ResultRewardList_C_IsIgnoreReward::CallFunc_BooleanOR_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsIgnoreReward, CallFunc_BooleanOR_ReturnValue_5) == 0x00002C, "Member 'ResultRewardList_C_IsIgnoreReward::CallFunc_BooleanOR_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsIgnoreReward, CallFunc_EqualEqual_ByteByte_ReturnValue_10) == 0x00002D, "Member 'ResultRewardList_C_IsIgnoreReward::CallFunc_EqualEqual_ByteByte_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsIgnoreReward, CallFunc_BooleanOR_ReturnValue_6) == 0x00002E, "Member 'ResultRewardList_C_IsIgnoreReward::CallFunc_BooleanOR_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsIgnoreReward, CallFunc_EqualEqual_ByteByte_ReturnValue_11) == 0x00002F, "Member 'ResultRewardList_C_IsIgnoreReward::CallFunc_EqualEqual_ByteByte_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsIgnoreReward, CallFunc_BooleanOR_ReturnValue_7) == 0x000030, "Member 'ResultRewardList_C_IsIgnoreReward::CallFunc_BooleanOR_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsIgnoreReward, CallFunc_BooleanOR_ReturnValue_8) == 0x000031, "Member 'ResultRewardList_C_IsIgnoreReward::CallFunc_BooleanOR_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsIgnoreReward, Temp_int_Loop_Counter_Variable) == 0x000034, "Member 'ResultRewardList_C_IsIgnoreReward::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsIgnoreReward, CallFunc_BooleanOR_ReturnValue_9) == 0x000038, "Member 'ResultRewardList_C_IsIgnoreReward::CallFunc_BooleanOR_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsIgnoreReward, CallFunc_BooleanOR_ReturnValue_10) == 0x000039, "Member 'ResultRewardList_C_IsIgnoreReward::CallFunc_BooleanOR_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsIgnoreReward, CallFunc_Add_IntInt_ReturnValue) == 0x00003C, "Member 'ResultRewardList_C_IsIgnoreReward::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsIgnoreReward, CallFunc_BooleanOR_ReturnValue_11) == 0x000040, "Member 'ResultRewardList_C_IsIgnoreReward::CallFunc_BooleanOR_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsIgnoreReward, CallFunc_GetOwnItemInfo_OwnItemInfo) == 0x000048, "Member 'ResultRewardList_C_IsIgnoreReward::CallFunc_GetOwnItemInfo_OwnItemInfo' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsIgnoreReward, CallFunc_Array_Length_ReturnValue) == 0x000058, "Member 'ResultRewardList_C_IsIgnoreReward::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsIgnoreReward, CallFunc_Array_Get_Item) == 0x000060, "Member 'ResultRewardList_C_IsIgnoreReward::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsIgnoreReward, CallFunc_Less_IntInt_ReturnValue) == 0x000178, "Member 'ResultRewardList_C_IsIgnoreReward::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_IsIgnoreReward, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000179, "Member 'ResultRewardList_C_IsIgnoreReward::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function ResultRewardList.ResultRewardList_C.ConvertItemTypeToRewardType
// 0x0003 (0x0003 - 0x0000)
struct ResultRewardList_C_ConvertItemTypeToRewardType final
{
public:
	EItemType                                     ItemType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             RewardItemType;                                    // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ResultRewardList_C_ConvertItemTypeToRewardType) == 0x000001, "Wrong alignment on ResultRewardList_C_ConvertItemTypeToRewardType");
static_assert(sizeof(ResultRewardList_C_ConvertItemTypeToRewardType) == 0x000003, "Wrong size on ResultRewardList_C_ConvertItemTypeToRewardType");
static_assert(offsetof(ResultRewardList_C_ConvertItemTypeToRewardType, ItemType) == 0x000000, "Member 'ResultRewardList_C_ConvertItemTypeToRewardType::ItemType' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_ConvertItemTypeToRewardType, RewardItemType) == 0x000001, "Member 'ResultRewardList_C_ConvertItemTypeToRewardType::RewardItemType' has a wrong offset!");
static_assert(offsetof(ResultRewardList_C_ConvertItemTypeToRewardType, K2Node_SwitchEnum_CmpSuccess) == 0x000002, "Member 'ResultRewardList_C_ConvertItemTypeToRewardType::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}

