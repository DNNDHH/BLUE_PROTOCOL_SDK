#pragma once

 

// Package: WBP_ItemResultItemGroup

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function WBP_ItemResultItemGroup.WBP_ItemResultItemGroup_C.ExecuteUbergraph_WBP_ItemResultItemGroup
// 0x0004 (0x0004 - 0x0000)
struct WBP_ItemResultItemGroup_C_ExecuteUbergraph_WBP_ItemResultItemGroup final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemResultItemGroup_C_ExecuteUbergraph_WBP_ItemResultItemGroup) == 0x000004, "Wrong alignment on WBP_ItemResultItemGroup_C_ExecuteUbergraph_WBP_ItemResultItemGroup");
static_assert(sizeof(WBP_ItemResultItemGroup_C_ExecuteUbergraph_WBP_ItemResultItemGroup) == 0x000004, "Wrong size on WBP_ItemResultItemGroup_C_ExecuteUbergraph_WBP_ItemResultItemGroup");
static_assert(offsetof(WBP_ItemResultItemGroup_C_ExecuteUbergraph_WBP_ItemResultItemGroup, EntryPoint) == 0x000000, "Member 'WBP_ItemResultItemGroup_C_ExecuteUbergraph_WBP_ItemResultItemGroup::EntryPoint' has a wrong offset!");

// Function WBP_ItemResultItemGroup.WBP_ItemResultItemGroup_C.SetItem
// 0x0058 (0x0058 - 0x0000)
struct WBP_ItemResultItemGroup_C_SetItem final
{
public:
	TArray<struct FSBItemBoxResultItemData>       ItemList;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBItemBoxResultItemData               CallFunc_Array_Get_Item;                           // 0x001C(0x0018)(NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_774D[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_774E[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_ItemBoxIcon_C*                     K2Node_DynamicCast_AsWBP_Item_Box_Icon;            // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ItemResultItemGroup_C_SetItem) == 0x000008, "Wrong alignment on WBP_ItemResultItemGroup_C_SetItem");
static_assert(sizeof(WBP_ItemResultItemGroup_C_SetItem) == 0x000058, "Wrong size on WBP_ItemResultItemGroup_C_SetItem");
static_assert(offsetof(WBP_ItemResultItemGroup_C_SetItem, ItemList) == 0x000000, "Member 'WBP_ItemResultItemGroup_C_SetItem::ItemList' has a wrong offset!");
static_assert(offsetof(WBP_ItemResultItemGroup_C_SetItem, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'WBP_ItemResultItemGroup_C_SetItem::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemResultItemGroup_C_SetItem, Temp_int_Array_Index_Variable) == 0x000014, "Member 'WBP_ItemResultItemGroup_C_SetItem::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemResultItemGroup_C_SetItem, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'WBP_ItemResultItemGroup_C_SetItem::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemResultItemGroup_C_SetItem, CallFunc_Array_Get_Item) == 0x00001C, "Member 'WBP_ItemResultItemGroup_C_SetItem::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_ItemResultItemGroup_C_SetItem, CallFunc_Less_IntInt_ReturnValue) == 0x000034, "Member 'WBP_ItemResultItemGroup_C_SetItem::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemResultItemGroup_C_SetItem, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'WBP_ItemResultItemGroup_C_SetItem::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemResultItemGroup_C_SetItem, CallFunc_GetChildAt_ReturnValue) == 0x000040, "Member 'WBP_ItemResultItemGroup_C_SetItem::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemResultItemGroup_C_SetItem, K2Node_DynamicCast_AsWBP_Item_Box_Icon) == 0x000048, "Member 'WBP_ItemResultItemGroup_C_SetItem::K2Node_DynamicCast_AsWBP_Item_Box_Icon' has a wrong offset!");
static_assert(offsetof(WBP_ItemResultItemGroup_C_SetItem, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'WBP_ItemResultItemGroup_C_SetItem::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

