#pragma once

 

// Package: SpecialViewItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function SpecialViewItem.SpecialViewItem_C.OnSelect__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct SpecialViewItem_C_OnSelect__DelegateSignature final
{
public:
	class USpecialViewItem_C*                     Select;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SpecialViewItem_C_OnSelect__DelegateSignature) == 0x000008, "Wrong alignment on SpecialViewItem_C_OnSelect__DelegateSignature");
static_assert(sizeof(SpecialViewItem_C_OnSelect__DelegateSignature) == 0x000008, "Wrong size on SpecialViewItem_C_OnSelect__DelegateSignature");
static_assert(offsetof(SpecialViewItem_C_OnSelect__DelegateSignature, Select) == 0x000000, "Member 'SpecialViewItem_C_OnSelect__DelegateSignature::Select' has a wrong offset!");

// Function SpecialViewItem.SpecialViewItem_C.ExecuteUbergraph_SpecialViewItem
// 0x0148 (0x0148 - 0x0000)
struct SpecialViewItem_C_ExecuteUbergraph_SpecialViewItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsExpanded;                          // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45EE[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_Event_ListItemObject;                       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USpecialViewItem_C*                     K2Node_DynamicCast_AsSpecial_View_Item;            // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bIsSelected;                          // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45EF[0x2];                                     // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x001C(0x0038)(IsPlainOldData, NoDestructor)
	uint8                                         Pad_45F0[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;                         // 0x0058(0x0070)(ConstParm)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45F1[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x00D0(0x0070)(ConstParm)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SpecialViewItem_C_ExecuteUbergraph_SpecialViewItem) == 0x000008, "Wrong alignment on SpecialViewItem_C_ExecuteUbergraph_SpecialViewItem");
static_assert(sizeof(SpecialViewItem_C_ExecuteUbergraph_SpecialViewItem) == 0x000148, "Wrong size on SpecialViewItem_C_ExecuteUbergraph_SpecialViewItem");
static_assert(offsetof(SpecialViewItem_C_ExecuteUbergraph_SpecialViewItem, EntryPoint) == 0x000000, "Member 'SpecialViewItem_C_ExecuteUbergraph_SpecialViewItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(SpecialViewItem_C_ExecuteUbergraph_SpecialViewItem, Temp_bool_Variable) == 0x000004, "Member 'SpecialViewItem_C_ExecuteUbergraph_SpecialViewItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SpecialViewItem_C_ExecuteUbergraph_SpecialViewItem, CallFunc_MakeLiteralByte_ReturnValue) == 0x000005, "Member 'SpecialViewItem_C_ExecuteUbergraph_SpecialViewItem::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpecialViewItem_C_ExecuteUbergraph_SpecialViewItem, K2Node_Event_bIsExpanded) == 0x000006, "Member 'SpecialViewItem_C_ExecuteUbergraph_SpecialViewItem::K2Node_Event_bIsExpanded' has a wrong offset!");
static_assert(offsetof(SpecialViewItem_C_ExecuteUbergraph_SpecialViewItem, K2Node_Event_ListItemObject) == 0x000008, "Member 'SpecialViewItem_C_ExecuteUbergraph_SpecialViewItem::K2Node_Event_ListItemObject' has a wrong offset!");
static_assert(offsetof(SpecialViewItem_C_ExecuteUbergraph_SpecialViewItem, K2Node_DynamicCast_AsSpecial_View_Item) == 0x000010, "Member 'SpecialViewItem_C_ExecuteUbergraph_SpecialViewItem::K2Node_DynamicCast_AsSpecial_View_Item' has a wrong offset!");
static_assert(offsetof(SpecialViewItem_C_ExecuteUbergraph_SpecialViewItem, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'SpecialViewItem_C_ExecuteUbergraph_SpecialViewItem::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SpecialViewItem_C_ExecuteUbergraph_SpecialViewItem, K2Node_Event_bIsSelected) == 0x000019, "Member 'SpecialViewItem_C_ExecuteUbergraph_SpecialViewItem::K2Node_Event_bIsSelected' has a wrong offset!");
static_assert(offsetof(SpecialViewItem_C_ExecuteUbergraph_SpecialViewItem, K2Node_Event_MyGeometry) == 0x00001C, "Member 'SpecialViewItem_C_ExecuteUbergraph_SpecialViewItem::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(SpecialViewItem_C_ExecuteUbergraph_SpecialViewItem, K2Node_Event_MouseEvent_1) == 0x000058, "Member 'SpecialViewItem_C_ExecuteUbergraph_SpecialViewItem::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(SpecialViewItem_C_ExecuteUbergraph_SpecialViewItem, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0000C8, "Member 'SpecialViewItem_C_ExecuteUbergraph_SpecialViewItem::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SpecialViewItem_C_ExecuteUbergraph_SpecialViewItem, K2Node_Event_MouseEvent) == 0x0000D0, "Member 'SpecialViewItem_C_ExecuteUbergraph_SpecialViewItem::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(SpecialViewItem_C_ExecuteUbergraph_SpecialViewItem, K2Node_Select_Default) == 0x000140, "Member 'SpecialViewItem_C_ExecuteUbergraph_SpecialViewItem::K2Node_Select_Default' has a wrong offset!");

// Function SpecialViewItem.SpecialViewItem_C.OnMouseLeave
// 0x0070 (0x0070 - 0x0000)
struct SpecialViewItem_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(SpecialViewItem_C_OnMouseLeave) == 0x000008, "Wrong alignment on SpecialViewItem_C_OnMouseLeave");
static_assert(sizeof(SpecialViewItem_C_OnMouseLeave) == 0x000070, "Wrong size on SpecialViewItem_C_OnMouseLeave");
static_assert(offsetof(SpecialViewItem_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'SpecialViewItem_C_OnMouseLeave::MouseEvent' has a wrong offset!");

// Function SpecialViewItem.SpecialViewItem_C.OnMouseEnter
// 0x00A8 (0x00A8 - 0x0000)
struct SpecialViewItem_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(SpecialViewItem_C_OnMouseEnter) == 0x000008, "Wrong alignment on SpecialViewItem_C_OnMouseEnter");
static_assert(sizeof(SpecialViewItem_C_OnMouseEnter) == 0x0000A8, "Wrong size on SpecialViewItem_C_OnMouseEnter");
static_assert(offsetof(SpecialViewItem_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'SpecialViewItem_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(SpecialViewItem_C_OnMouseEnter, MouseEvent) == 0x000038, "Member 'SpecialViewItem_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function SpecialViewItem.SpecialViewItem_C.BP_OnItemSelectionChanged
// 0x0001 (0x0001 - 0x0000)
struct SpecialViewItem_C_BP_OnItemSelectionChanged final
{
public:
	bool                                          bIsSelected;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SpecialViewItem_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong alignment on SpecialViewItem_C_BP_OnItemSelectionChanged");
static_assert(sizeof(SpecialViewItem_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong size on SpecialViewItem_C_BP_OnItemSelectionChanged");
static_assert(offsetof(SpecialViewItem_C_BP_OnItemSelectionChanged, bIsSelected) == 0x000000, "Member 'SpecialViewItem_C_BP_OnItemSelectionChanged::bIsSelected' has a wrong offset!");

// Function SpecialViewItem.SpecialViewItem_C.OnListItemObjectSet
// 0x0008 (0x0008 - 0x0000)
struct SpecialViewItem_C_OnListItemObjectSet final
{
public:
	class UObject*                                ListItemObject;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SpecialViewItem_C_OnListItemObjectSet) == 0x000008, "Wrong alignment on SpecialViewItem_C_OnListItemObjectSet");
static_assert(sizeof(SpecialViewItem_C_OnListItemObjectSet) == 0x000008, "Wrong size on SpecialViewItem_C_OnListItemObjectSet");
static_assert(offsetof(SpecialViewItem_C_OnListItemObjectSet, ListItemObject) == 0x000000, "Member 'SpecialViewItem_C_OnListItemObjectSet::ListItemObject' has a wrong offset!");

// Function SpecialViewItem.SpecialViewItem_C.BP_OnItemExpansionChanged
// 0x0001 (0x0001 - 0x0000)
struct SpecialViewItem_C_BP_OnItemExpansionChanged final
{
public:
	bool                                          bIsExpanded;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SpecialViewItem_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong alignment on SpecialViewItem_C_BP_OnItemExpansionChanged");
static_assert(sizeof(SpecialViewItem_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong size on SpecialViewItem_C_BP_OnItemExpansionChanged");
static_assert(offsetof(SpecialViewItem_C_BP_OnItemExpansionChanged, bIsExpanded) == 0x000000, "Member 'SpecialViewItem_C_BP_OnItemExpansionChanged::bIsExpanded' has a wrong offset!");

// Function SpecialViewItem.SpecialViewItem_C.UpdateText
// 0x0098 (0x0098 - 0x0000)
struct SpecialViewItem_C_UpdateText final
{
public:
	bool                                          CallFunc_FindAbilityEffectMaster_bIsValid;         // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45F2[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAbilityEffectMasterData             CallFunc_FindAbilityEffectMaster_AbilityEffectMaster; // 0x0004(0x0024)(NoDestructor)
	class FString                                 CallFunc_GetWeaponPerkText_ReturnValue;            // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0038(0x0018)()
	int32                                         CallFunc_GetItemLevel_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45F3[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_SetSpecialEffectText_SpecialName;         // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_SetSpecialEffectText_SpecialValue;        // 0x0068(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0080(0x0018)()
};
static_assert(alignof(SpecialViewItem_C_UpdateText) == 0x000008, "Wrong alignment on SpecialViewItem_C_UpdateText");
static_assert(sizeof(SpecialViewItem_C_UpdateText) == 0x000098, "Wrong size on SpecialViewItem_C_UpdateText");
static_assert(offsetof(SpecialViewItem_C_UpdateText, CallFunc_FindAbilityEffectMaster_bIsValid) == 0x000000, "Member 'SpecialViewItem_C_UpdateText::CallFunc_FindAbilityEffectMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(SpecialViewItem_C_UpdateText, CallFunc_FindAbilityEffectMaster_AbilityEffectMaster) == 0x000004, "Member 'SpecialViewItem_C_UpdateText::CallFunc_FindAbilityEffectMaster_AbilityEffectMaster' has a wrong offset!");
static_assert(offsetof(SpecialViewItem_C_UpdateText, CallFunc_GetWeaponPerkText_ReturnValue) == 0x000028, "Member 'SpecialViewItem_C_UpdateText::CallFunc_GetWeaponPerkText_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpecialViewItem_C_UpdateText, CallFunc_Conv_StringToText_ReturnValue) == 0x000038, "Member 'SpecialViewItem_C_UpdateText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpecialViewItem_C_UpdateText, CallFunc_GetItemLevel_ReturnValue) == 0x000050, "Member 'SpecialViewItem_C_UpdateText::CallFunc_GetItemLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpecialViewItem_C_UpdateText, K2Node_SwitchEnum_CmpSuccess) == 0x000054, "Member 'SpecialViewItem_C_UpdateText::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(SpecialViewItem_C_UpdateText, CallFunc_SetSpecialEffectText_SpecialName) == 0x000058, "Member 'SpecialViewItem_C_UpdateText::CallFunc_SetSpecialEffectText_SpecialName' has a wrong offset!");
static_assert(offsetof(SpecialViewItem_C_UpdateText, CallFunc_SetSpecialEffectText_SpecialValue) == 0x000068, "Member 'SpecialViewItem_C_UpdateText::CallFunc_SetSpecialEffectText_SpecialValue' has a wrong offset!");
static_assert(offsetof(SpecialViewItem_C_UpdateText, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000080, "Member 'SpecialViewItem_C_UpdateText::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function SpecialViewItem.SpecialViewItem_C.SetData
// 0x0118 (0x0118 - 0x0000)
struct SpecialViewItem_C_SetData final
{
public:
	struct FOwnItemInfo                           Param_ItemData;                                    // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(SpecialViewItem_C_SetData) == 0x000008, "Wrong alignment on SpecialViewItem_C_SetData");
static_assert(sizeof(SpecialViewItem_C_SetData) == 0x000118, "Wrong size on SpecialViewItem_C_SetData");
static_assert(offsetof(SpecialViewItem_C_SetData, Param_ItemData) == 0x000000, "Member 'SpecialViewItem_C_SetData::Param_ItemData' has a wrong offset!");

// Function SpecialViewItem.SpecialViewItem_C.GetData
// 0x0118 (0x0118 - 0x0000)
struct SpecialViewItem_C_GetData final
{
public:
	struct FOwnItemInfo                           Param_ItemData;                                    // 0x0000(0x0118)(Parm, OutParm)
};
static_assert(alignof(SpecialViewItem_C_GetData) == 0x000008, "Wrong alignment on SpecialViewItem_C_GetData");
static_assert(sizeof(SpecialViewItem_C_GetData) == 0x000118, "Wrong size on SpecialViewItem_C_GetData");
static_assert(offsetof(SpecialViewItem_C_GetData, Param_ItemData) == 0x000000, "Member 'SpecialViewItem_C_GetData::Param_ItemData' has a wrong offset!");

}

