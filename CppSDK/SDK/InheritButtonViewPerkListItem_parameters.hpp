#pragma once

 

// Package: InheritButtonViewPerkListItem

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function InheritButtonViewPerkListItem.InheritButtonViewPerkListItem_C.ExecuteUbergraph_InheritButtonViewPerkListItem
// 0x0004 (0x0004 - 0x0000)
struct InheritButtonViewPerkListItem_C_ExecuteUbergraph_InheritButtonViewPerkListItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InheritButtonViewPerkListItem_C_ExecuteUbergraph_InheritButtonViewPerkListItem) == 0x000004, "Wrong alignment on InheritButtonViewPerkListItem_C_ExecuteUbergraph_InheritButtonViewPerkListItem");
static_assert(sizeof(InheritButtonViewPerkListItem_C_ExecuteUbergraph_InheritButtonViewPerkListItem) == 0x000004, "Wrong size on InheritButtonViewPerkListItem_C_ExecuteUbergraph_InheritButtonViewPerkListItem");
static_assert(offsetof(InheritButtonViewPerkListItem_C_ExecuteUbergraph_InheritButtonViewPerkListItem, EntryPoint) == 0x000000, "Member 'InheritButtonViewPerkListItem_C_ExecuteUbergraph_InheritButtonViewPerkListItem::EntryPoint' has a wrong offset!");

// Function InheritButtonViewPerkListItem.InheritButtonViewPerkListItem_C.Initialize
// 0x0078 (0x0078 - 0x0000)
struct InheritButtonViewPerkListItem_C_Initialize final
{
public:
	struct FSBMasterFusionItem                    FusionItemInfo;                                    // 0x0000(0x0018)(Edit, BlueprintVisible, NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_143C[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                Temp_object_Variable;                              // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetNameText_ReturnValue;                  // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0038(0x0018)()
	class UWidget*                                K2Node_Select_Default;                             // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindFusionItemMaster_IsValid;             // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_143D[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterFusionItem                    CallFunc_FindFusionItemMaster_OutFusionItemMaster; // 0x005C(0x0018)(NoDestructor)
};
static_assert(alignof(InheritButtonViewPerkListItem_C_Initialize) == 0x000008, "Wrong alignment on InheritButtonViewPerkListItem_C_Initialize");
static_assert(sizeof(InheritButtonViewPerkListItem_C_Initialize) == 0x000078, "Wrong size on InheritButtonViewPerkListItem_C_Initialize");
static_assert(offsetof(InheritButtonViewPerkListItem_C_Initialize, FusionItemInfo) == 0x000000, "Member 'InheritButtonViewPerkListItem_C_Initialize::FusionItemInfo' has a wrong offset!");
static_assert(offsetof(InheritButtonViewPerkListItem_C_Initialize, Temp_int_Variable) == 0x000018, "Member 'InheritButtonViewPerkListItem_C_Initialize::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(InheritButtonViewPerkListItem_C_Initialize, Temp_object_Variable) == 0x000020, "Member 'InheritButtonViewPerkListItem_C_Initialize::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(InheritButtonViewPerkListItem_C_Initialize, CallFunc_GetNameText_ReturnValue) == 0x000028, "Member 'InheritButtonViewPerkListItem_C_Initialize::CallFunc_GetNameText_ReturnValue' has a wrong offset!");
static_assert(offsetof(InheritButtonViewPerkListItem_C_Initialize, CallFunc_Conv_StringToText_ReturnValue) == 0x000038, "Member 'InheritButtonViewPerkListItem_C_Initialize::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(InheritButtonViewPerkListItem_C_Initialize, K2Node_Select_Default) == 0x000050, "Member 'InheritButtonViewPerkListItem_C_Initialize::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(InheritButtonViewPerkListItem_C_Initialize, CallFunc_FindFusionItemMaster_IsValid) == 0x000058, "Member 'InheritButtonViewPerkListItem_C_Initialize::CallFunc_FindFusionItemMaster_IsValid' has a wrong offset!");
static_assert(offsetof(InheritButtonViewPerkListItem_C_Initialize, CallFunc_FindFusionItemMaster_OutFusionItemMaster) == 0x00005C, "Member 'InheritButtonViewPerkListItem_C_Initialize::CallFunc_FindFusionItemMaster_OutFusionItemMaster' has a wrong offset!");

// Function InheritButtonViewPerkListItem.InheritButtonViewPerkListItem_C.SetData
// 0x0030 (0x0030 - 0x0000)
struct InheritButtonViewPerkListItem_C_SetData final
{
public:
	struct FSBStackBPerk                          Param_SlotData;                                    // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(InheritButtonViewPerkListItem_C_SetData) == 0x000008, "Wrong alignment on InheritButtonViewPerkListItem_C_SetData");
static_assert(sizeof(InheritButtonViewPerkListItem_C_SetData) == 0x000030, "Wrong size on InheritButtonViewPerkListItem_C_SetData");
static_assert(offsetof(InheritButtonViewPerkListItem_C_SetData, Param_SlotData) == 0x000000, "Member 'InheritButtonViewPerkListItem_C_SetData::Param_SlotData' has a wrong offset!");

// Function InheritButtonViewPerkListItem.InheritButtonViewPerkListItem_C.SetEmpty
// 0x0028 (0x0028 - 0x0000)
struct InheritButtonViewPerkListItem_C_SetEmpty final
{
public:
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
};
static_assert(alignof(InheritButtonViewPerkListItem_C_SetEmpty) == 0x000008, "Wrong alignment on InheritButtonViewPerkListItem_C_SetEmpty");
static_assert(sizeof(InheritButtonViewPerkListItem_C_SetEmpty) == 0x000028, "Wrong size on InheritButtonViewPerkListItem_C_SetEmpty");
static_assert(offsetof(InheritButtonViewPerkListItem_C_SetEmpty, CallFunc_GetTextFromAsset_ReturnValue) == 0x000000, "Member 'InheritButtonViewPerkListItem_C_SetEmpty::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(InheritButtonViewPerkListItem_C_SetEmpty, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'InheritButtonViewPerkListItem_C_SetEmpty::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function InheritButtonViewPerkListItem.InheritButtonViewPerkListItem_C.SetDiffView
// 0x0005 (0x0005 - 0x0000)
struct InheritButtonViewPerkListItem_C_SetDiffView final
{
public:
	bool                                          bShow;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InheritButtonViewPerkListItem_C_SetDiffView) == 0x000001, "Wrong alignment on InheritButtonViewPerkListItem_C_SetDiffView");
static_assert(sizeof(InheritButtonViewPerkListItem_C_SetDiffView) == 0x000005, "Wrong size on InheritButtonViewPerkListItem_C_SetDiffView");
static_assert(offsetof(InheritButtonViewPerkListItem_C_SetDiffView, bShow) == 0x000000, "Member 'InheritButtonViewPerkListItem_C_SetDiffView::bShow' has a wrong offset!");
static_assert(offsetof(InheritButtonViewPerkListItem_C_SetDiffView, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'InheritButtonViewPerkListItem_C_SetDiffView::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(InheritButtonViewPerkListItem_C_SetDiffView, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'InheritButtonViewPerkListItem_C_SetDiffView::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InheritButtonViewPerkListItem_C_SetDiffView, Temp_bool_Variable) == 0x000003, "Member 'InheritButtonViewPerkListItem_C_SetDiffView::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(InheritButtonViewPerkListItem_C_SetDiffView, K2Node_Select_Default) == 0x000004, "Member 'InheritButtonViewPerkListItem_C_SetDiffView::K2Node_Select_Default' has a wrong offset!");

}

