#pragma once

 

// Package: Fang_expedition_DetailItemList

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.ExecuteUbergraph_Fang_expedition_DetailItemList
// 0x0058 (0x0058 - 0x0000)
struct Fang_expedition_DetailItemList_C_ExecuteUbergraph_Fang_expedition_DetailItemList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFang_expedition_DetailItemListItem_C*> K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
	TArray<class UFang_expedition_DetailItemListPagePoint_C*> K2Node_MakeArray_Array_1;                          // 0x0020(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E26[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Index;                          // 0x0040(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E27[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UFang_expedition_DetailItemListPagePoint_C* CallFunc_Array_Get_Item;                           // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_DetailItemList_C_ExecuteUbergraph_Fang_expedition_DetailItemList) == 0x000008, "Wrong alignment on Fang_expedition_DetailItemList_C_ExecuteUbergraph_Fang_expedition_DetailItemList");
static_assert(sizeof(Fang_expedition_DetailItemList_C_ExecuteUbergraph_Fang_expedition_DetailItemList) == 0x000058, "Wrong size on Fang_expedition_DetailItemList_C_ExecuteUbergraph_Fang_expedition_DetailItemList");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ExecuteUbergraph_Fang_expedition_DetailItemList, EntryPoint) == 0x000000, "Member 'Fang_expedition_DetailItemList_C_ExecuteUbergraph_Fang_expedition_DetailItemList::EntryPoint' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ExecuteUbergraph_Fang_expedition_DetailItemList, Temp_int_Array_Index_Variable) == 0x000004, "Member 'Fang_expedition_DetailItemList_C_ExecuteUbergraph_Fang_expedition_DetailItemList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ExecuteUbergraph_Fang_expedition_DetailItemList, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'Fang_expedition_DetailItemList_C_ExecuteUbergraph_Fang_expedition_DetailItemList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ExecuteUbergraph_Fang_expedition_DetailItemList, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'Fang_expedition_DetailItemList_C_ExecuteUbergraph_Fang_expedition_DetailItemList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ExecuteUbergraph_Fang_expedition_DetailItemList, K2Node_MakeArray_Array) == 0x000010, "Member 'Fang_expedition_DetailItemList_C_ExecuteUbergraph_Fang_expedition_DetailItemList::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ExecuteUbergraph_Fang_expedition_DetailItemList, K2Node_MakeArray_Array_1) == 0x000020, "Member 'Fang_expedition_DetailItemList_C_ExecuteUbergraph_Fang_expedition_DetailItemList::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ExecuteUbergraph_Fang_expedition_DetailItemList, CallFunc_Greater_IntInt_ReturnValue) == 0x000030, "Member 'Fang_expedition_DetailItemList_C_ExecuteUbergraph_Fang_expedition_DetailItemList::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ExecuteUbergraph_Fang_expedition_DetailItemList, CallFunc_Add_IntInt_ReturnValue_1) == 0x000034, "Member 'Fang_expedition_DetailItemList_C_ExecuteUbergraph_Fang_expedition_DetailItemList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ExecuteUbergraph_Fang_expedition_DetailItemList, CallFunc_Subtract_IntInt_ReturnValue) == 0x000038, "Member 'Fang_expedition_DetailItemList_C_ExecuteUbergraph_Fang_expedition_DetailItemList::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ExecuteUbergraph_Fang_expedition_DetailItemList, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x00003C, "Member 'Fang_expedition_DetailItemList_C_ExecuteUbergraph_Fang_expedition_DetailItemList::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ExecuteUbergraph_Fang_expedition_DetailItemList, K2Node_CustomEvent_Index) == 0x000040, "Member 'Fang_expedition_DetailItemList_C_ExecuteUbergraph_Fang_expedition_DetailItemList::K2Node_CustomEvent_Index' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ExecuteUbergraph_Fang_expedition_DetailItemList, CallFunc_Less_IntInt_ReturnValue) == 0x000044, "Member 'Fang_expedition_DetailItemList_C_ExecuteUbergraph_Fang_expedition_DetailItemList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ExecuteUbergraph_Fang_expedition_DetailItemList, CallFunc_Array_Get_Item) == 0x000048, "Member 'Fang_expedition_DetailItemList_C_ExecuteUbergraph_Fang_expedition_DetailItemList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ExecuteUbergraph_Fang_expedition_DetailItemList, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'Fang_expedition_DetailItemList_C_ExecuteUbergraph_Fang_expedition_DetailItemList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ExecuteUbergraph_Fang_expedition_DetailItemList, CallFunc_Less_IntInt_ReturnValue_1) == 0x000054, "Member 'Fang_expedition_DetailItemList_C_ExecuteUbergraph_Fang_expedition_DetailItemList::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.CB_OnPageButtonClick
// 0x0004 (0x0004 - 0x0000)
struct Fang_expedition_DetailItemList_C_CB_OnPageButtonClick final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DetailItemList_C_CB_OnPageButtonClick) == 0x000004, "Wrong alignment on Fang_expedition_DetailItemList_C_CB_OnPageButtonClick");
static_assert(sizeof(Fang_expedition_DetailItemList_C_CB_OnPageButtonClick) == 0x000004, "Wrong size on Fang_expedition_DetailItemList_C_CB_OnPageButtonClick");
static_assert(offsetof(Fang_expedition_DetailItemList_C_CB_OnPageButtonClick, Param_Index) == 0x000000, "Member 'Fang_expedition_DetailItemList_C_CB_OnPageButtonClick::Param_Index' has a wrong offset!");

// Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.SetRewardData
// 0x0020 (0x0020 - 0x0000)
struct Fang_expedition_DetailItemList_C_SetRewardData final
{
public:
	TArray<struct FSBMasterReward>                RewardList;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DetailItemList_C_SetRewardData) == 0x000008, "Wrong alignment on Fang_expedition_DetailItemList_C_SetRewardData");
static_assert(sizeof(Fang_expedition_DetailItemList_C_SetRewardData) == 0x000020, "Wrong size on Fang_expedition_DetailItemList_C_SetRewardData");
static_assert(offsetof(Fang_expedition_DetailItemList_C_SetRewardData, RewardList) == 0x000000, "Member 'Fang_expedition_DetailItemList_C_SetRewardData::RewardList' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_SetRewardData, CallFunc_Array_LastIndex_ReturnValue) == 0x000010, "Member 'Fang_expedition_DetailItemList_C_SetRewardData::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_SetRewardData, CallFunc_Divide_IntInt_ReturnValue) == 0x000014, "Member 'Fang_expedition_DetailItemList_C_SetRewardData::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_SetRewardData, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'Fang_expedition_DetailItemList_C_SetRewardData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.ChangePage
// 0x0028 (0x0028 - 0x0000)
struct Fang_expedition_DetailItemList_C_ChangePage final
{
public:
	int32                                         Page;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E28[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFang_expedition_DetailItemListPagePoint_C* Button;                                            // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFang_expedition_DetailItemListItem_C*  Icon;                                              // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LoopEnd;                                           // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RewardBaseIndex;                                   // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_DetailItemList_C_ChangePage) == 0x000008, "Wrong alignment on Fang_expedition_DetailItemList_C_ChangePage");
static_assert(sizeof(Fang_expedition_DetailItemList_C_ChangePage) == 0x000028, "Wrong size on Fang_expedition_DetailItemList_C_ChangePage");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage, Page) == 0x000000, "Member 'Fang_expedition_DetailItemList_C_ChangePage::Page' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage, Button) == 0x000008, "Member 'Fang_expedition_DetailItemList_C_ChangePage::Button' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage, Icon) == 0x000010, "Member 'Fang_expedition_DetailItemList_C_ChangePage::Icon' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage, LoopEnd) == 0x000018, "Member 'Fang_expedition_DetailItemList_C_ChangePage::LoopEnd' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage, RewardBaseIndex) == 0x00001C, "Member 'Fang_expedition_DetailItemList_C_ChangePage::RewardBaseIndex' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage, CallFunc_Subtract_IntInt_ReturnValue) == 0x000020, "Member 'Fang_expedition_DetailItemList_C_ChangePage::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage, CallFunc_Less_IntInt_ReturnValue) == 0x000024, "Member 'Fang_expedition_DetailItemList_C_ChangePage::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage, CallFunc_Greater_IntInt_ReturnValue) == 0x000025, "Member 'Fang_expedition_DetailItemList_C_ChangePage::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.ChangePage_FixedItem
// 0x0080 (0x0080 - 0x0000)
struct Fang_expedition_DetailItemList_C_ChangePage_FixedItem final
{
public:
	int32                                         Page;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E29[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFang_expedition_DetailItemListItem_C*  Widget;                                            // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LoopEnd;                                           // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SetCount;                                          // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RewardIndex;                                       // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E2A[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E2B[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFang_expedition_DetailItemListPagePoint_C* CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E2C[0x2];                                     // 0x0046(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UFang_expedition_DetailItemListPagePoint_C* CallFunc_Array_Get_Item_1;                         // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFang_expedition_DetailItemListItem_C*  CallFunc_Array_Get_Item_2;                         // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue_1;         // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue_2;         // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E2D[0x1];                                     // 0x005B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E2E[0x6];                                     // 0x0062(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFang_expedition_DetailItemListItem_C*  CallFunc_Array_Get_Item_3;                         // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue_3;         // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_DetailItemList_C_ChangePage_FixedItem) == 0x000008, "Wrong alignment on Fang_expedition_DetailItemList_C_ChangePage_FixedItem");
static_assert(sizeof(Fang_expedition_DetailItemList_C_ChangePage_FixedItem) == 0x000080, "Wrong size on Fang_expedition_DetailItemList_C_ChangePage_FixedItem");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_FixedItem, Page) == 0x000000, "Member 'Fang_expedition_DetailItemList_C_ChangePage_FixedItem::Page' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_FixedItem, Widget) == 0x000008, "Member 'Fang_expedition_DetailItemList_C_ChangePage_FixedItem::Widget' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_FixedItem, LoopEnd) == 0x000010, "Member 'Fang_expedition_DetailItemList_C_ChangePage_FixedItem::LoopEnd' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_FixedItem, SetCount) == 0x000014, "Member 'Fang_expedition_DetailItemList_C_ChangePage_FixedItem::SetCount' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_FixedItem, RewardIndex) == 0x000018, "Member 'Fang_expedition_DetailItemList_C_ChangePage_FixedItem::RewardIndex' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_FixedItem, Temp_int_Variable) == 0x00001C, "Member 'Fang_expedition_DetailItemList_C_ChangePage_FixedItem::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_FixedItem, CallFunc_Percent_IntInt_ReturnValue) == 0x000020, "Member 'Fang_expedition_DetailItemList_C_ChangePage_FixedItem::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_FixedItem, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'Fang_expedition_DetailItemList_C_ChangePage_FixedItem::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_FixedItem, Temp_bool_Variable) == 0x000028, "Member 'Fang_expedition_DetailItemList_C_ChangePage_FixedItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_FixedItem, CallFunc_Not_PreBool_ReturnValue) == 0x000029, "Member 'Fang_expedition_DetailItemList_C_ChangePage_FixedItem::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_FixedItem, Temp_int_Variable_1) == 0x00002C, "Member 'Fang_expedition_DetailItemList_C_ChangePage_FixedItem::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_FixedItem, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000030, "Member 'Fang_expedition_DetailItemList_C_ChangePage_FixedItem::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_FixedItem, CallFunc_Add_IntInt_ReturnValue_1) == 0x000034, "Member 'Fang_expedition_DetailItemList_C_ChangePage_FixedItem::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_FixedItem, CallFunc_Array_Get_Item) == 0x000038, "Member 'Fang_expedition_DetailItemList_C_ChangePage_FixedItem::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_FixedItem, CallFunc_Divide_IntInt_ReturnValue) == 0x000040, "Member 'Fang_expedition_DetailItemList_C_ChangePage_FixedItem::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_FixedItem, CallFunc_IsValid_ReturnValue) == 0x000044, "Member 'Fang_expedition_DetailItemList_C_ChangePage_FixedItem::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_FixedItem, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000045, "Member 'Fang_expedition_DetailItemList_C_ChangePage_FixedItem::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_FixedItem, CallFunc_Array_Get_Item_1) == 0x000048, "Member 'Fang_expedition_DetailItemList_C_ChangePage_FixedItem::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_FixedItem, CallFunc_Array_Get_Item_2) == 0x000050, "Member 'Fang_expedition_DetailItemList_C_ChangePage_FixedItem::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_FixedItem, CallFunc_IsValid_ReturnValue_1) == 0x000058, "Member 'Fang_expedition_DetailItemList_C_ChangePage_FixedItem::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_FixedItem, CallFunc_Array_IsValidIndex_ReturnValue_1) == 0x000059, "Member 'Fang_expedition_DetailItemList_C_ChangePage_FixedItem::CallFunc_Array_IsValidIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_FixedItem, CallFunc_Array_IsValidIndex_ReturnValue_2) == 0x00005A, "Member 'Fang_expedition_DetailItemList_C_ChangePage_FixedItem::CallFunc_Array_IsValidIndex_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_FixedItem, CallFunc_Add_IntInt_ReturnValue_2) == 0x00005C, "Member 'Fang_expedition_DetailItemList_C_ChangePage_FixedItem::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_FixedItem, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000060, "Member 'Fang_expedition_DetailItemList_C_ChangePage_FixedItem::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_FixedItem, CallFunc_BooleanAND_ReturnValue) == 0x000061, "Member 'Fang_expedition_DetailItemList_C_ChangePage_FixedItem::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_FixedItem, CallFunc_Array_Get_Item_3) == 0x000068, "Member 'Fang_expedition_DetailItemList_C_ChangePage_FixedItem::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_FixedItem, CallFunc_Add_IntInt_ReturnValue_3) == 0x000070, "Member 'Fang_expedition_DetailItemList_C_ChangePage_FixedItem::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_FixedItem, CallFunc_Multiply_IntInt_ReturnValue) == 0x000074, "Member 'Fang_expedition_DetailItemList_C_ChangePage_FixedItem::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_FixedItem, CallFunc_Array_IsValidIndex_ReturnValue_3) == 0x000078, "Member 'Fang_expedition_DetailItemList_C_ChangePage_FixedItem::CallFunc_Array_IsValidIndex_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_FixedItem, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000079, "Member 'Fang_expedition_DetailItemList_C_ChangePage_FixedItem::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

// Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.UpdatePageButtonVisibility
// 0x00B8 (0x00B8 - 0x0000)
struct Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility final
{
public:
	class UFang_expedition_DetailItemListPagePoint_C* NewWidget;                                         // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                WorkWidget;                                        // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LoopEnd;                                           // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x001C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E2F[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UFang_expedition_DetailItemListPagePoint_C* CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E30[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x003C(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     K2Node_DynamicCast_AsHorizontal_Box_Slot;          // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E31[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFang_expedition_DetailItemListPagePoint_C* CallFunc_Create_ReturnValue;                       // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E32[0x3];                                     // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E33[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFang_expedition_DetailItemListPagePoint_C* CallFunc_Array_Get_Item_1;                         // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E34[0x3];                                     // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E35[0x3];                                     // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_3;            // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility) == 0x000008, "Wrong alignment on Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility");
static_assert(sizeof(Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility) == 0x0000B8, "Wrong size on Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility");
static_assert(offsetof(Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility, NewWidget) == 0x000000, "Member 'Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility::NewWidget' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility, WorkWidget) == 0x000008, "Member 'Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility::WorkWidget' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility, LoopEnd) == 0x000010, "Member 'Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility::LoopEnd' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility, Temp_int_Variable) == 0x000014, "Member 'Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility, K2Node_MakeStruct_Margin) == 0x00001C, "Member 'Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00002C, "Member 'Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility, CallFunc_Array_Get_Item) == 0x000030, "Member 'Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility, K2Node_CreateDelegate_OutputDelegate) == 0x00003C, "Member 'Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility, CallFunc_Array_Length_ReturnValue) == 0x00004C, "Member 'Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility, CallFunc_AddChild_ReturnValue) == 0x000050, "Member 'Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility, K2Node_DynamicCast_AsHorizontal_Box_Slot) == 0x000058, "Member 'Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility::K2Node_DynamicCast_AsHorizontal_Box_Slot' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility, CallFunc_Create_ReturnValue) == 0x000068, "Member 'Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility, CallFunc_Array_Add_ReturnValue) == 0x000070, "Member 'Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility, CallFunc_Array_Length_ReturnValue_1) == 0x000074, "Member 'Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility, CallFunc_Subtract_IntInt_ReturnValue) == 0x000078, "Member 'Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility, CallFunc_Array_Length_ReturnValue_2) == 0x00007C, "Member 'Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000080, "Member 'Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility, CallFunc_Greater_IntInt_ReturnValue) == 0x000084, "Member 'Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility, Temp_int_Variable_1) == 0x000088, "Member 'Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility, CallFunc_Array_Get_Item_1) == 0x000090, "Member 'Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000098, "Member 'Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility, CallFunc_Add_IntInt_ReturnValue_1) == 0x00009C, "Member 'Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility, CallFunc_GetChildrenCount_ReturnValue) == 0x0000A0, "Member 'Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility, CallFunc_Subtract_IntInt_ReturnValue_2) == 0x0000A4, "Member 'Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility::CallFunc_Subtract_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility, Temp_int_Variable_2) == 0x0000A8, "Member 'Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility, CallFunc_LessEqual_IntInt_ReturnValue_2) == 0x0000AC, "Member 'Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility::CallFunc_LessEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000B0, "Member 'Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility, CallFunc_Subtract_IntInt_ReturnValue_3) == 0x0000B4, "Member 'Fang_expedition_DetailItemList_C_UpdatePageButtonVisibility::CallFunc_Subtract_IntInt_ReturnValue_3' has a wrong offset!");

// Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.SetRandomRewardData
// 0x0020 (0x0020 - 0x0000)
struct Fang_expedition_DetailItemList_C_SetRandomRewardData final
{
public:
	TArray<struct FSBFang_expeditionRandomRewardData> RandomReward;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DetailItemList_C_SetRandomRewardData) == 0x000008, "Wrong alignment on Fang_expedition_DetailItemList_C_SetRandomRewardData");
static_assert(sizeof(Fang_expedition_DetailItemList_C_SetRandomRewardData) == 0x000020, "Wrong size on Fang_expedition_DetailItemList_C_SetRandomRewardData");
static_assert(offsetof(Fang_expedition_DetailItemList_C_SetRandomRewardData, RandomReward) == 0x000000, "Member 'Fang_expedition_DetailItemList_C_SetRandomRewardData::RandomReward' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_SetRandomRewardData, CallFunc_Array_LastIndex_ReturnValue) == 0x000010, "Member 'Fang_expedition_DetailItemList_C_SetRandomRewardData::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_SetRandomRewardData, CallFunc_Divide_IntInt_ReturnValue) == 0x000014, "Member 'Fang_expedition_DetailItemList_C_SetRandomRewardData::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_SetRandomRewardData, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'Fang_expedition_DetailItemList_C_SetRandomRewardData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.ChangePage_RandomItem
// 0x0088 (0x0088 - 0x0000)
struct Fang_expedition_DetailItemList_C_ChangePage_RandomItem final
{
public:
	int32                                         Page;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E36[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFang_expedition_DetailItemListItem_C*  Icon;                                              // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LoopEnd;                                           // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RewardIndex;                                       // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E37[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E38[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFang_expedition_DetailItemListPagePoint_C* CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFang_expedition_DetailItemListItem_C*  CallFunc_Array_Get_Item_1;                         // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E39[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E3A[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E3B[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFang_expedition_DetailItemListItem_C*  CallFunc_Array_Get_Item_2;                         // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Min_ReturnValue;                          // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_DetailItemList_C_ChangePage_RandomItem) == 0x000008, "Wrong alignment on Fang_expedition_DetailItemList_C_ChangePage_RandomItem");
static_assert(sizeof(Fang_expedition_DetailItemList_C_ChangePage_RandomItem) == 0x000088, "Wrong size on Fang_expedition_DetailItemList_C_ChangePage_RandomItem");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_RandomItem, Page) == 0x000000, "Member 'Fang_expedition_DetailItemList_C_ChangePage_RandomItem::Page' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_RandomItem, Icon) == 0x000008, "Member 'Fang_expedition_DetailItemList_C_ChangePage_RandomItem::Icon' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_RandomItem, LoopEnd) == 0x000010, "Member 'Fang_expedition_DetailItemList_C_ChangePage_RandomItem::LoopEnd' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_RandomItem, RewardIndex) == 0x000014, "Member 'Fang_expedition_DetailItemList_C_ChangePage_RandomItem::RewardIndex' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_RandomItem, Temp_int_Array_Index_Variable) == 0x000018, "Member 'Fang_expedition_DetailItemList_C_ChangePage_RandomItem::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_RandomItem, Temp_int_Variable) == 0x00001C, "Member 'Fang_expedition_DetailItemList_C_ChangePage_RandomItem::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_RandomItem, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000020, "Member 'Fang_expedition_DetailItemList_C_ChangePage_RandomItem::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_RandomItem, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'Fang_expedition_DetailItemList_C_ChangePage_RandomItem::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_RandomItem, Temp_int_Variable_1) == 0x000028, "Member 'Fang_expedition_DetailItemList_C_ChangePage_RandomItem::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_RandomItem, CallFunc_Add_IntInt_ReturnValue_1) == 0x00002C, "Member 'Fang_expedition_DetailItemList_C_ChangePage_RandomItem::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_RandomItem, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000030, "Member 'Fang_expedition_DetailItemList_C_ChangePage_RandomItem::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_RandomItem, CallFunc_Divide_IntInt_ReturnValue) == 0x000034, "Member 'Fang_expedition_DetailItemList_C_ChangePage_RandomItem::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_RandomItem, CallFunc_Array_Get_Item) == 0x000038, "Member 'Fang_expedition_DetailItemList_C_ChangePage_RandomItem::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_RandomItem, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'Fang_expedition_DetailItemList_C_ChangePage_RandomItem::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_RandomItem, Temp_int_Loop_Counter_Variable) == 0x000044, "Member 'Fang_expedition_DetailItemList_C_ChangePage_RandomItem::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_RandomItem, CallFunc_Array_Get_Item_1) == 0x000048, "Member 'Fang_expedition_DetailItemList_C_ChangePage_RandomItem::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_RandomItem, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'Fang_expedition_DetailItemList_C_ChangePage_RandomItem::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_RandomItem, CallFunc_Add_IntInt_ReturnValue_2) == 0x000054, "Member 'Fang_expedition_DetailItemList_C_ChangePage_RandomItem::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_RandomItem, CallFunc_Add_IntInt_ReturnValue_3) == 0x000058, "Member 'Fang_expedition_DetailItemList_C_ChangePage_RandomItem::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_RandomItem, CallFunc_Array_LastIndex_ReturnValue) == 0x00005C, "Member 'Fang_expedition_DetailItemList_C_ChangePage_RandomItem::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_RandomItem, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000060, "Member 'Fang_expedition_DetailItemList_C_ChangePage_RandomItem::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_RandomItem, CallFunc_Add_IntInt_ReturnValue_4) == 0x000064, "Member 'Fang_expedition_DetailItemList_C_ChangePage_RandomItem::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_RandomItem, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000068, "Member 'Fang_expedition_DetailItemList_C_ChangePage_RandomItem::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_RandomItem, CallFunc_Array_Get_Item_2) == 0x000070, "Member 'Fang_expedition_DetailItemList_C_ChangePage_RandomItem::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_RandomItem, CallFunc_Subtract_IntInt_ReturnValue) == 0x000078, "Member 'Fang_expedition_DetailItemList_C_ChangePage_RandomItem::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_RandomItem, CallFunc_Min_ReturnValue) == 0x00007C, "Member 'Fang_expedition_DetailItemList_C_ChangePage_RandomItem::CallFunc_Min_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_RandomItem, CallFunc_Multiply_IntInt_ReturnValue) == 0x000080, "Member 'Fang_expedition_DetailItemList_C_ChangePage_RandomItem::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ChangePage_RandomItem, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000084, "Member 'Fang_expedition_DetailItemList_C_ChangePage_RandomItem::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

// Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.SetupPageButton
// 0x0038 (0x0038 - 0x0000)
struct Fang_expedition_DetailItemList_C_SetupPageButton final
{
public:
	class UFang_expedition_DetailItemListPagePoint_C* Target;                                            // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LoopEnd;                                           // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E3C[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UFang_expedition_DetailItemListPagePoint_C* CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DetailItemList_C_SetupPageButton) == 0x000008, "Wrong alignment on Fang_expedition_DetailItemList_C_SetupPageButton");
static_assert(sizeof(Fang_expedition_DetailItemList_C_SetupPageButton) == 0x000038, "Wrong size on Fang_expedition_DetailItemList_C_SetupPageButton");
static_assert(offsetof(Fang_expedition_DetailItemList_C_SetupPageButton, Target) == 0x000000, "Member 'Fang_expedition_DetailItemList_C_SetupPageButton::Target' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_SetupPageButton, LoopEnd) == 0x000008, "Member 'Fang_expedition_DetailItemList_C_SetupPageButton::LoopEnd' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_SetupPageButton, Temp_int_Variable) == 0x00000C, "Member 'Fang_expedition_DetailItemList_C_SetupPageButton::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_SetupPageButton, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'Fang_expedition_DetailItemList_C_SetupPageButton::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_SetupPageButton, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'Fang_expedition_DetailItemList_C_SetupPageButton::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_SetupPageButton, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000024, "Member 'Fang_expedition_DetailItemList_C_SetupPageButton::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_SetupPageButton, CallFunc_Array_Get_Item) == 0x000028, "Member 'Fang_expedition_DetailItemList_C_SetupPageButton::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_SetupPageButton, CallFunc_Array_LastIndex_ReturnValue) == 0x000030, "Member 'Fang_expedition_DetailItemList_C_SetupPageButton::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");

// Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.AddRandomRewardData
// 0x0020 (0x0020 - 0x0000)
struct Fang_expedition_DetailItemList_C_AddRandomRewardData final
{
public:
	TArray<struct FSBFang_expeditionRandomRewardData> RandomReward;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DetailItemList_C_AddRandomRewardData) == 0x000008, "Wrong alignment on Fang_expedition_DetailItemList_C_AddRandomRewardData");
static_assert(sizeof(Fang_expedition_DetailItemList_C_AddRandomRewardData) == 0x000020, "Wrong size on Fang_expedition_DetailItemList_C_AddRandomRewardData");
static_assert(offsetof(Fang_expedition_DetailItemList_C_AddRandomRewardData, RandomReward) == 0x000000, "Member 'Fang_expedition_DetailItemList_C_AddRandomRewardData::RandomReward' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_AddRandomRewardData, CallFunc_Array_LastIndex_ReturnValue) == 0x000010, "Member 'Fang_expedition_DetailItemList_C_AddRandomRewardData::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_AddRandomRewardData, CallFunc_Divide_IntInt_ReturnValue) == 0x000014, "Member 'Fang_expedition_DetailItemList_C_AddRandomRewardData::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_AddRandomRewardData, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'Fang_expedition_DetailItemList_C_AddRandomRewardData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.SetupRandomRewardPage
// 0x0010 (0x0010 - 0x0000)
struct Fang_expedition_DetailItemList_C_SetupRandomRewardPage final
{
public:
	int32                                         Page;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DetailItemList_C_SetupRandomRewardPage) == 0x000004, "Wrong alignment on Fang_expedition_DetailItemList_C_SetupRandomRewardPage");
static_assert(sizeof(Fang_expedition_DetailItemList_C_SetupRandomRewardPage) == 0x000010, "Wrong size on Fang_expedition_DetailItemList_C_SetupRandomRewardPage");
static_assert(offsetof(Fang_expedition_DetailItemList_C_SetupRandomRewardPage, Page) == 0x000000, "Member 'Fang_expedition_DetailItemList_C_SetupRandomRewardPage::Page' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_SetupRandomRewardPage, CallFunc_Array_LastIndex_ReturnValue) == 0x000004, "Member 'Fang_expedition_DetailItemList_C_SetupRandomRewardPage::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_SetupRandomRewardPage, CallFunc_Divide_IntInt_ReturnValue) == 0x000008, "Member 'Fang_expedition_DetailItemList_C_SetupRandomRewardPage::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_SetupRandomRewardPage, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'Fang_expedition_DetailItemList_C_SetupRandomRewardPage::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C.ResetRewardData
// 0x0020 (0x0020 - 0x0000)
struct Fang_expedition_DetailItemList_C_ResetRewardData final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E3D[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFang_expedition_DetailItemListItem_C*  CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_DetailItemList_C_ResetRewardData) == 0x000008, "Wrong alignment on Fang_expedition_DetailItemList_C_ResetRewardData");
static_assert(sizeof(Fang_expedition_DetailItemList_C_ResetRewardData) == 0x000020, "Wrong size on Fang_expedition_DetailItemList_C_ResetRewardData");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ResetRewardData, Temp_int_Array_Index_Variable) == 0x000000, "Member 'Fang_expedition_DetailItemList_C_ResetRewardData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ResetRewardData, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'Fang_expedition_DetailItemList_C_ResetRewardData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ResetRewardData, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'Fang_expedition_DetailItemList_C_ResetRewardData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ResetRewardData, CallFunc_Array_Get_Item) == 0x000010, "Member 'Fang_expedition_DetailItemList_C_ResetRewardData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ResetRewardData, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'Fang_expedition_DetailItemList_C_ResetRewardData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailItemList_C_ResetRewardData, CallFunc_Less_IntInt_ReturnValue) == 0x00001C, "Member 'Fang_expedition_DetailItemList_C_ResetRewardData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

