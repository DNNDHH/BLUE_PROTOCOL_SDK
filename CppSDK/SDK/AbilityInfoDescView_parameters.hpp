#pragma once

 

// Package: AbilityInfoDescView

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function AbilityInfoDescView.AbilityInfoDescView_C.ExecuteUbergraph_AbilityInfoDescView
// 0x0260 (0x0260 - 0x0000)
struct AbilityInfoDescView_C_ExecuteUbergraph_AbilityInfoDescView final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bIsExpanded;                          // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CCE[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_Event_ListItemObject;                       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsSelected;                          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CCF[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityInfoDescView_C*                 K2Node_DynamicCast_AsAbility_Info_Desc_View;       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CD0[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_GetAbility_Info;                          // 0x0028(0x0118)()
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0140(0x0038)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;                         // 0x0178(0x0070)(ConstParm)
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x01E8(0x0070)(ConstParm)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0259(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AbilityInfoDescView_C_ExecuteUbergraph_AbilityInfoDescView) == 0x000008, "Wrong alignment on AbilityInfoDescView_C_ExecuteUbergraph_AbilityInfoDescView");
static_assert(sizeof(AbilityInfoDescView_C_ExecuteUbergraph_AbilityInfoDescView) == 0x000260, "Wrong size on AbilityInfoDescView_C_ExecuteUbergraph_AbilityInfoDescView");
static_assert(offsetof(AbilityInfoDescView_C_ExecuteUbergraph_AbilityInfoDescView, EntryPoint) == 0x000000, "Member 'AbilityInfoDescView_C_ExecuteUbergraph_AbilityInfoDescView::EntryPoint' has a wrong offset!");
static_assert(offsetof(AbilityInfoDescView_C_ExecuteUbergraph_AbilityInfoDescView, CallFunc_MakeLiteralByte_ReturnValue) == 0x000004, "Member 'AbilityInfoDescView_C_ExecuteUbergraph_AbilityInfoDescView::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(AbilityInfoDescView_C_ExecuteUbergraph_AbilityInfoDescView, Temp_bool_Variable) == 0x000005, "Member 'AbilityInfoDescView_C_ExecuteUbergraph_AbilityInfoDescView::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AbilityInfoDescView_C_ExecuteUbergraph_AbilityInfoDescView, K2Node_Event_bIsExpanded) == 0x000006, "Member 'AbilityInfoDescView_C_ExecuteUbergraph_AbilityInfoDescView::K2Node_Event_bIsExpanded' has a wrong offset!");
static_assert(offsetof(AbilityInfoDescView_C_ExecuteUbergraph_AbilityInfoDescView, K2Node_Event_ListItemObject) == 0x000008, "Member 'AbilityInfoDescView_C_ExecuteUbergraph_AbilityInfoDescView::K2Node_Event_ListItemObject' has a wrong offset!");
static_assert(offsetof(AbilityInfoDescView_C_ExecuteUbergraph_AbilityInfoDescView, K2Node_Event_bIsSelected) == 0x000010, "Member 'AbilityInfoDescView_C_ExecuteUbergraph_AbilityInfoDescView::K2Node_Event_bIsSelected' has a wrong offset!");
static_assert(offsetof(AbilityInfoDescView_C_ExecuteUbergraph_AbilityInfoDescView, K2Node_DynamicCast_AsAbility_Info_Desc_View) == 0x000018, "Member 'AbilityInfoDescView_C_ExecuteUbergraph_AbilityInfoDescView::K2Node_DynamicCast_AsAbility_Info_Desc_View' has a wrong offset!");
static_assert(offsetof(AbilityInfoDescView_C_ExecuteUbergraph_AbilityInfoDescView, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'AbilityInfoDescView_C_ExecuteUbergraph_AbilityInfoDescView::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AbilityInfoDescView_C_ExecuteUbergraph_AbilityInfoDescView, CallFunc_GetAbility_Info) == 0x000028, "Member 'AbilityInfoDescView_C_ExecuteUbergraph_AbilityInfoDescView::CallFunc_GetAbility_Info' has a wrong offset!");
static_assert(offsetof(AbilityInfoDescView_C_ExecuteUbergraph_AbilityInfoDescView, K2Node_Event_MyGeometry) == 0x000140, "Member 'AbilityInfoDescView_C_ExecuteUbergraph_AbilityInfoDescView::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(AbilityInfoDescView_C_ExecuteUbergraph_AbilityInfoDescView, K2Node_Event_MouseEvent_1) == 0x000178, "Member 'AbilityInfoDescView_C_ExecuteUbergraph_AbilityInfoDescView::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(AbilityInfoDescView_C_ExecuteUbergraph_AbilityInfoDescView, K2Node_Event_MouseEvent) == 0x0001E8, "Member 'AbilityInfoDescView_C_ExecuteUbergraph_AbilityInfoDescView::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(AbilityInfoDescView_C_ExecuteUbergraph_AbilityInfoDescView, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000258, "Member 'AbilityInfoDescView_C_ExecuteUbergraph_AbilityInfoDescView::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AbilityInfoDescView_C_ExecuteUbergraph_AbilityInfoDescView, K2Node_Select_Default) == 0x000259, "Member 'AbilityInfoDescView_C_ExecuteUbergraph_AbilityInfoDescView::K2Node_Select_Default' has a wrong offset!");

// Function AbilityInfoDescView.AbilityInfoDescView_C.OnMouseLeave
// 0x0070 (0x0070 - 0x0000)
struct AbilityInfoDescView_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(AbilityInfoDescView_C_OnMouseLeave) == 0x000008, "Wrong alignment on AbilityInfoDescView_C_OnMouseLeave");
static_assert(sizeof(AbilityInfoDescView_C_OnMouseLeave) == 0x000070, "Wrong size on AbilityInfoDescView_C_OnMouseLeave");
static_assert(offsetof(AbilityInfoDescView_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'AbilityInfoDescView_C_OnMouseLeave::MouseEvent' has a wrong offset!");

// Function AbilityInfoDescView.AbilityInfoDescView_C.OnMouseEnter
// 0x00A8 (0x00A8 - 0x0000)
struct AbilityInfoDescView_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(AbilityInfoDescView_C_OnMouseEnter) == 0x000008, "Wrong alignment on AbilityInfoDescView_C_OnMouseEnter");
static_assert(sizeof(AbilityInfoDescView_C_OnMouseEnter) == 0x0000A8, "Wrong size on AbilityInfoDescView_C_OnMouseEnter");
static_assert(offsetof(AbilityInfoDescView_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'AbilityInfoDescView_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(AbilityInfoDescView_C_OnMouseEnter, MouseEvent) == 0x000038, "Member 'AbilityInfoDescView_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function AbilityInfoDescView.AbilityInfoDescView_C.BP_OnItemSelectionChanged
// 0x0001 (0x0001 - 0x0000)
struct AbilityInfoDescView_C_BP_OnItemSelectionChanged final
{
public:
	bool                                          bIsSelected;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AbilityInfoDescView_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong alignment on AbilityInfoDescView_C_BP_OnItemSelectionChanged");
static_assert(sizeof(AbilityInfoDescView_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong size on AbilityInfoDescView_C_BP_OnItemSelectionChanged");
static_assert(offsetof(AbilityInfoDescView_C_BP_OnItemSelectionChanged, bIsSelected) == 0x000000, "Member 'AbilityInfoDescView_C_BP_OnItemSelectionChanged::bIsSelected' has a wrong offset!");

// Function AbilityInfoDescView.AbilityInfoDescView_C.OnListItemObjectSet
// 0x0008 (0x0008 - 0x0000)
struct AbilityInfoDescView_C_OnListItemObjectSet final
{
public:
	class UObject*                                ListItemObject;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AbilityInfoDescView_C_OnListItemObjectSet) == 0x000008, "Wrong alignment on AbilityInfoDescView_C_OnListItemObjectSet");
static_assert(sizeof(AbilityInfoDescView_C_OnListItemObjectSet) == 0x000008, "Wrong size on AbilityInfoDescView_C_OnListItemObjectSet");
static_assert(offsetof(AbilityInfoDescView_C_OnListItemObjectSet, ListItemObject) == 0x000000, "Member 'AbilityInfoDescView_C_OnListItemObjectSet::ListItemObject' has a wrong offset!");

// Function AbilityInfoDescView.AbilityInfoDescView_C.BP_OnItemExpansionChanged
// 0x0001 (0x0001 - 0x0000)
struct AbilityInfoDescView_C_BP_OnItemExpansionChanged final
{
public:
	bool                                          bIsExpanded;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AbilityInfoDescView_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong alignment on AbilityInfoDescView_C_BP_OnItemExpansionChanged");
static_assert(sizeof(AbilityInfoDescView_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong size on AbilityInfoDescView_C_BP_OnItemExpansionChanged");
static_assert(offsetof(AbilityInfoDescView_C_BP_OnItemExpansionChanged, bIsExpanded) == 0x000000, "Member 'AbilityInfoDescView_C_BP_OnItemExpansionChanged::bIsExpanded' has a wrong offset!");

// Function AbilityInfoDescView.AbilityInfoDescView_C.SetAbility
// 0x0118 (0x0118 - 0x0000)
struct AbilityInfoDescView_C_SetAbility final
{
public:
	struct FOwnItemInfo                           Param_Info;                                        // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(AbilityInfoDescView_C_SetAbility) == 0x000008, "Wrong alignment on AbilityInfoDescView_C_SetAbility");
static_assert(sizeof(AbilityInfoDescView_C_SetAbility) == 0x000118, "Wrong size on AbilityInfoDescView_C_SetAbility");
static_assert(offsetof(AbilityInfoDescView_C_SetAbility, Param_Info) == 0x000000, "Member 'AbilityInfoDescView_C_SetAbility::Param_Info' has a wrong offset!");

// Function AbilityInfoDescView.AbilityInfoDescView_C.GetAbility
// 0x0118 (0x0118 - 0x0000)
struct AbilityInfoDescView_C_GetAbility final
{
public:
	struct FOwnItemInfo                           Param_Info;                                        // 0x0000(0x0118)(Parm, OutParm)
};
static_assert(alignof(AbilityInfoDescView_C_GetAbility) == 0x000008, "Wrong alignment on AbilityInfoDescView_C_GetAbility");
static_assert(sizeof(AbilityInfoDescView_C_GetAbility) == 0x000118, "Wrong size on AbilityInfoDescView_C_GetAbility");
static_assert(offsetof(AbilityInfoDescView_C_GetAbility, Param_Info) == 0x000000, "Member 'AbilityInfoDescView_C_GetAbility::Param_Info' has a wrong offset!");

}

