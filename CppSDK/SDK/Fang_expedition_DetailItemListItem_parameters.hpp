#pragma once

 

// Package: Fang_expedition_DetailItemListItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function Fang_expedition_DetailItemListItem.Fang_expedition_DetailItemListItem_C.SetData
// 0x000C (0x000C - 0x0000)
struct Fang_expedition_DetailItemListItem_C_SetData final
{
public:
	ESBRewardItemType                             RewardType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DE8[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Param_Index;                                       // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Amount;                                            // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DetailItemListItem_C_SetData) == 0x000004, "Wrong alignment on Fang_expedition_DetailItemListItem_C_SetData");
static_assert(sizeof(Fang_expedition_DetailItemListItem_C_SetData) == 0x00000C, "Wrong size on Fang_expedition_DetailItemListItem_C_SetData");
static_assert(offsetof(Fang_expedition_DetailItemListItem_C_SetData, RewardType) == 0x000000, "Member 'Fang_expedition_DetailItemListItem_C_SetData::RewardType' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemListItem_C_SetData, Param_Index) == 0x000004, "Member 'Fang_expedition_DetailItemListItem_C_SetData::Param_Index' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemListItem_C_SetData, Amount) == 0x000008, "Member 'Fang_expedition_DetailItemListItem_C_SetData::Amount' has a wrong offset!");

// Function Fang_expedition_DetailItemListItem.Fang_expedition_DetailItemListItem_C.SetNum
// 0x0020 (0x0020 - 0x0000)
struct Fang_expedition_DetailItemListItem_C_SetNum final
{
public:
	int32                                         Num;                                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DE9[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
};
static_assert(alignof(Fang_expedition_DetailItemListItem_C_SetNum) == 0x000008, "Wrong alignment on Fang_expedition_DetailItemListItem_C_SetNum");
static_assert(sizeof(Fang_expedition_DetailItemListItem_C_SetNum) == 0x000020, "Wrong size on Fang_expedition_DetailItemListItem_C_SetNum");
static_assert(offsetof(Fang_expedition_DetailItemListItem_C_SetNum, Num) == 0x000000, "Member 'Fang_expedition_DetailItemListItem_C_SetNum::Num' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemListItem_C_SetNum, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'Fang_expedition_DetailItemListItem_C_SetNum::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function Fang_expedition_DetailItemListItem.Fang_expedition_DetailItemListItem_C.SetRandomReward
// 0x0080 (0x0080 - 0x0000)
struct Fang_expedition_DetailItemListItem_C_SetRandomReward final
{
public:
	struct FSBFang_expeditionRandomRewardData     Data;                                              // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	int32                                         FangValue;                                         // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LoopEnd;                                           // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UImage*>                         IconArray;                                         // 0x0028(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         Temp_int_Variable;                                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DEA[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UImage*                                 CallFunc_Array_Get_Item;                           // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 CallFunc_Array_Get_Item_1;                         // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DEB[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DEC[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UImage*>                         K2Node_MakeArray_Array;                            // 0x0070(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(Fang_expedition_DetailItemListItem_C_SetRandomReward) == 0x000008, "Wrong alignment on Fang_expedition_DetailItemListItem_C_SetRandomReward");
static_assert(sizeof(Fang_expedition_DetailItemListItem_C_SetRandomReward) == 0x000080, "Wrong size on Fang_expedition_DetailItemListItem_C_SetRandomReward");
static_assert(offsetof(Fang_expedition_DetailItemListItem_C_SetRandomReward, Data) == 0x000000, "Member 'Fang_expedition_DetailItemListItem_C_SetRandomReward::Data' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemListItem_C_SetRandomReward, FangValue) == 0x000020, "Member 'Fang_expedition_DetailItemListItem_C_SetRandomReward::FangValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemListItem_C_SetRandomReward, LoopEnd) == 0x000024, "Member 'Fang_expedition_DetailItemListItem_C_SetRandomReward::LoopEnd' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemListItem_C_SetRandomReward, IconArray) == 0x000028, "Member 'Fang_expedition_DetailItemListItem_C_SetRandomReward::IconArray' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemListItem_C_SetRandomReward, Temp_int_Variable) == 0x000038, "Member 'Fang_expedition_DetailItemListItem_C_SetRandomReward::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemListItem_C_SetRandomReward, CallFunc_Add_IntInt_ReturnValue) == 0x00003C, "Member 'Fang_expedition_DetailItemListItem_C_SetRandomReward::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemListItem_C_SetRandomReward, CallFunc_Add_IntInt_ReturnValue_1) == 0x000040, "Member 'Fang_expedition_DetailItemListItem_C_SetRandomReward::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemListItem_C_SetRandomReward, CallFunc_Subtract_IntInt_ReturnValue) == 0x000044, "Member 'Fang_expedition_DetailItemListItem_C_SetRandomReward::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemListItem_C_SetRandomReward, Temp_int_Variable_1) == 0x000048, "Member 'Fang_expedition_DetailItemListItem_C_SetRandomReward::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemListItem_C_SetRandomReward, CallFunc_Array_Get_Item) == 0x000050, "Member 'Fang_expedition_DetailItemListItem_C_SetRandomReward::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemListItem_C_SetRandomReward, CallFunc_Array_Get_Item_1) == 0x000058, "Member 'Fang_expedition_DetailItemListItem_C_SetRandomReward::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemListItem_C_SetRandomReward, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000060, "Member 'Fang_expedition_DetailItemListItem_C_SetRandomReward::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemListItem_C_SetRandomReward, CallFunc_Add_IntInt_ReturnValue_2) == 0x000064, "Member 'Fang_expedition_DetailItemListItem_C_SetRandomReward::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemListItem_C_SetRandomReward, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000068, "Member 'Fang_expedition_DetailItemListItem_C_SetRandomReward::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemListItem_C_SetRandomReward, K2Node_MakeArray_Array) == 0x000070, "Member 'Fang_expedition_DetailItemListItem_C_SetRandomReward::K2Node_MakeArray_Array' has a wrong offset!");

}

