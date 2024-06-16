#pragma once

 

// Package: WBP_ScbClassItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_ScbClassItem.WBP_ScbClassItem_C.ExecuteUbergraph_WBP_ScbClassItem
// 0x0100 (0x0100 - 0x0000)
struct WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item;                           // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item_1;                         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBScbClassData                        K2Node_CustomEvent_Data_1;                         // 0x0024(0x0024)(NoDestructor)
	TArray<int32>                                 K2Node_MakeArray_Array;                            // 0x0048(0x0010)(ReferenceParm)
	TArray<class UWBP_ScbValueItem_C*>            K2Node_MakeArray_Array_1;                          // 0x0058(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7051[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ScbValueItem_C*                    CallFunc_Array_Get_Item_2;                         // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7052[0x2];                                     // 0x0082(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBScbClassConditionsData              K2Node_CustomEvent_Data;                           // 0x0084(0x0024)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<int32>                                 K2Node_MakeArray_Array_2;                          // 0x00A8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x00B8(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x00D0(0x0018)()
	int32                                         K2Node_Select_Default;                             // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_ScbValueItem_C*                    CallFunc_Array_Get_Item_3;                         // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem) == 0x000008, "Wrong alignment on WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem");
static_assert(sizeof(WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem) == 0x000100, "Wrong size on WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem");
static_assert(offsetof(WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem, EntryPoint) == 0x000000, "Member 'WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem, Temp_int_Variable) == 0x000004, "Member 'WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem, Temp_int_Array_Index_Variable) == 0x000008, "Member 'WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem, Temp_int_Variable_1) == 0x00000C, "Member 'WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem, CallFunc_Array_Get_Item) == 0x000010, "Member 'WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem, Temp_int_Array_Index_Variable_1) == 0x00001C, "Member 'WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem, CallFunc_Array_Get_Item_1) == 0x000020, "Member 'WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem, K2Node_CustomEvent_Data_1) == 0x000024, "Member 'WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem::K2Node_CustomEvent_Data_1' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem, K2Node_MakeArray_Array) == 0x000048, "Member 'WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem, K2Node_MakeArray_Array_1) == 0x000058, "Member 'WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem, Temp_int_Loop_Counter_Variable_1) == 0x000068, "Member 'WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem, CallFunc_Array_Get_Item_2) == 0x000070, "Member 'WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem, CallFunc_Add_IntInt_ReturnValue_1) == 0x000078, "Member 'WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem, CallFunc_Array_Length_ReturnValue) == 0x00007C, "Member 'WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem, Temp_bool_Variable) == 0x000080, "Member 'WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem, CallFunc_Less_IntInt_ReturnValue) == 0x000081, "Member 'WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem, K2Node_CustomEvent_Data) == 0x000084, "Member 'WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem::K2Node_CustomEvent_Data' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem, K2Node_MakeArray_Array_2) == 0x0000A8, "Member 'WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem, CallFunc_Conv_IntToText_ReturnValue) == 0x0000B8, "Member 'WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0000D0, "Member 'WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem, K2Node_Select_Default) == 0x0000E8, "Member 'WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem, CallFunc_Array_Length_ReturnValue_1) == 0x0000EC, "Member 'WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem, CallFunc_Array_Get_Item_3) == 0x0000F0, "Member 'WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000F8, "Member 'WBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function WBP_ScbClassItem.WBP_ScbClassItem_C.SetConditionData
// 0x0024 (0x0024 - 0x0000)
struct WBP_ScbClassItem_C_SetConditionData final
{
public:
	struct FSBScbClassConditionsData              Data;                                              // 0x0000(0x0024)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ScbClassItem_C_SetConditionData) == 0x000004, "Wrong alignment on WBP_ScbClassItem_C_SetConditionData");
static_assert(sizeof(WBP_ScbClassItem_C_SetConditionData) == 0x000024, "Wrong size on WBP_ScbClassItem_C_SetConditionData");
static_assert(offsetof(WBP_ScbClassItem_C_SetConditionData, Data) == 0x000000, "Member 'WBP_ScbClassItem_C_SetConditionData::Data' has a wrong offset!");

// Function WBP_ScbClassItem.WBP_ScbClassItem_C.SetRankData
// 0x0024 (0x0024 - 0x0000)
struct WBP_ScbClassItem_C_SetRankData final
{
public:
	struct FSBScbClassData                        Data;                                              // 0x0000(0x0024)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(WBP_ScbClassItem_C_SetRankData) == 0x000004, "Wrong alignment on WBP_ScbClassItem_C_SetRankData");
static_assert(sizeof(WBP_ScbClassItem_C_SetRankData) == 0x000024, "Wrong size on WBP_ScbClassItem_C_SetRankData");
static_assert(offsetof(WBP_ScbClassItem_C_SetRankData, Data) == 0x000000, "Member 'WBP_ScbClassItem_C_SetRankData::Data' has a wrong offset!");

// Function WBP_ScbClassItem.WBP_ScbClassItem_C.ShowRankStar
// 0x0078 (0x0078 - 0x0000)
struct WBP_ScbClassItem_C_ShowRankStar final
{
public:
	int32                                         MaxRank;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Rank;                                              // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_ScbStar_C*>                 WBP_StarList;                                      // 0x0008(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x002F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7053[0x6];                                     // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ScbStar_C*                         CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0046(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7054[0x1];                                     // 0x0047(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7055[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_ScbStar_C*>                 K2Node_MakeArray_Array;                            // 0x0050(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7056[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_ScbStar_C*>                 K2Node_MakeArray_Array_1;                          // 0x0068(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(WBP_ScbClassItem_C_ShowRankStar) == 0x000008, "Wrong alignment on WBP_ScbClassItem_C_ShowRankStar");
static_assert(sizeof(WBP_ScbClassItem_C_ShowRankStar) == 0x000078, "Wrong size on WBP_ScbClassItem_C_ShowRankStar");
static_assert(offsetof(WBP_ScbClassItem_C_ShowRankStar, MaxRank) == 0x000000, "Member 'WBP_ScbClassItem_C_ShowRankStar::MaxRank' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ShowRankStar, Rank) == 0x000004, "Member 'WBP_ScbClassItem_C_ShowRankStar::Rank' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ShowRankStar, WBP_StarList) == 0x000008, "Member 'WBP_ScbClassItem_C_ShowRankStar::WBP_StarList' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ShowRankStar, CallFunc_MakeLiteralByte_ReturnValue) == 0x000018, "Member 'WBP_ScbClassItem_C_ShowRankStar::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ShowRankStar, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000019, "Member 'WBP_ScbClassItem_C_ShowRankStar::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ShowRankStar, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x00001A, "Member 'WBP_ScbClassItem_C_ShowRankStar::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ShowRankStar, Temp_bool_Variable) == 0x00001B, "Member 'WBP_ScbClassItem_C_ShowRankStar::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ShowRankStar, Temp_int_Variable) == 0x00001C, "Member 'WBP_ScbClassItem_C_ShowRankStar::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ShowRankStar, Temp_int_Variable_1) == 0x000020, "Member 'WBP_ScbClassItem_C_ShowRankStar::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ShowRankStar, K2Node_Select_Default) == 0x000024, "Member 'WBP_ScbClassItem_C_ShowRankStar::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ShowRankStar, Temp_int_Array_Index_Variable) == 0x000028, "Member 'WBP_ScbClassItem_C_ShowRankStar::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ShowRankStar, Temp_bool_Variable_1) == 0x00002C, "Member 'WBP_ScbClassItem_C_ShowRankStar::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ShowRankStar, CallFunc_Less_IntInt_ReturnValue) == 0x00002D, "Member 'WBP_ScbClassItem_C_ShowRankStar::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ShowRankStar, CallFunc_Less_IntInt_ReturnValue_1) == 0x00002E, "Member 'WBP_ScbClassItem_C_ShowRankStar::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ShowRankStar, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00002F, "Member 'WBP_ScbClassItem_C_ShowRankStar::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ShowRankStar, Temp_bool_Variable_2) == 0x000030, "Member 'WBP_ScbClassItem_C_ShowRankStar::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ShowRankStar, K2Node_Select_Default_1) == 0x000031, "Member 'WBP_ScbClassItem_C_ShowRankStar::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ShowRankStar, CallFunc_Array_Get_Item) == 0x000038, "Member 'WBP_ScbClassItem_C_ShowRankStar::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ShowRankStar, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'WBP_ScbClassItem_C_ShowRankStar::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ShowRankStar, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000044, "Member 'WBP_ScbClassItem_C_ShowRankStar::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ShowRankStar, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000045, "Member 'WBP_ScbClassItem_C_ShowRankStar::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ShowRankStar, K2Node_Select_Default_2) == 0x000046, "Member 'WBP_ScbClassItem_C_ShowRankStar::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ShowRankStar, Temp_int_Loop_Counter_Variable) == 0x000048, "Member 'WBP_ScbClassItem_C_ShowRankStar::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ShowRankStar, K2Node_MakeArray_Array) == 0x000050, "Member 'WBP_ScbClassItem_C_ShowRankStar::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ShowRankStar, CallFunc_Less_IntInt_ReturnValue_2) == 0x000060, "Member 'WBP_ScbClassItem_C_ShowRankStar::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ShowRankStar, CallFunc_Add_IntInt_ReturnValue) == 0x000064, "Member 'WBP_ScbClassItem_C_ShowRankStar::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_ShowRankStar, K2Node_MakeArray_Array_1) == 0x000068, "Member 'WBP_ScbClassItem_C_ShowRankStar::K2Node_MakeArray_Array_1' has a wrong offset!");

// Function WBP_ScbClassItem.WBP_ScbClassItem_C.SetClassType
// 0x0001 (0x0001 - 0x0000)
struct WBP_ScbClassItem_C_SetClassType final
{
public:
	ESBClassType                                  InClassType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ScbClassItem_C_SetClassType) == 0x000001, "Wrong alignment on WBP_ScbClassItem_C_SetClassType");
static_assert(sizeof(WBP_ScbClassItem_C_SetClassType) == 0x000001, "Wrong size on WBP_ScbClassItem_C_SetClassType");
static_assert(offsetof(WBP_ScbClassItem_C_SetClassType, InClassType) == 0x000000, "Member 'WBP_ScbClassItem_C_SetClassType::InClassType' has a wrong offset!");

// Function WBP_ScbClassItem.WBP_ScbClassItem_C.SetClassName
// 0x0030 (0x0030 - 0x0000)
struct WBP_ScbClassItem_C_SetClassName final
{
public:
	ESBClassType                                  InClassType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7057[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetClassNameText_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
};
static_assert(alignof(WBP_ScbClassItem_C_SetClassName) == 0x000008, "Wrong alignment on WBP_ScbClassItem_C_SetClassName");
static_assert(sizeof(WBP_ScbClassItem_C_SetClassName) == 0x000030, "Wrong size on WBP_ScbClassItem_C_SetClassName");
static_assert(offsetof(WBP_ScbClassItem_C_SetClassName, InClassType) == 0x000000, "Member 'WBP_ScbClassItem_C_SetClassName::InClassType' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_SetClassName, CallFunc_GetClassNameText_ReturnValue) == 0x000008, "Member 'WBP_ScbClassItem_C_SetClassName::CallFunc_GetClassNameText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ScbClassItem_C_SetClassName, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'WBP_ScbClassItem_C_SetClassName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

