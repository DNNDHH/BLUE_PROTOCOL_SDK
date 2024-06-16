#pragma once

 

// Package: CategoryList_Type1_Group

#include "Basic.hpp"

#include "CategoryList_Type1_Group_classes.hpp"
#include "CategoryList_Type1_Group_parameters.hpp"


namespace SDK
{

// Function CategoryList_Type1_Group.CategoryList_Type1_Group_C.ExecuteUbergraph_CategoryList_Type1_Group
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCategoryList_Type1_Group_C::ExecuteUbergraph_CategoryList_Type1_Group(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CategoryList_Type1_Group_C", "ExecuteUbergraph_CategoryList_Type1_Group");

	Params::CategoryList_Type1_Group_C_ExecuteUbergraph_CategoryList_Type1_Group Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CategoryList_Type1_Group.CategoryList_Type1_Group_C.BndEvt__CategoryList_Type1_Group_ExpandableArea_K2Node_ComponentBoundEvent_1_OnExpandableAreaExpansionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UExpandableArea*                  Area                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsExpanded                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCategoryList_Type1_Group_C::BndEvt__CategoryList_Type1_Group_ExpandableArea_K2Node_ComponentBoundEvent_1_OnExpandableAreaExpansionChanged__DelegateSignature(class UExpandableArea* Area, bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CategoryList_Type1_Group_C", "BndEvt__CategoryList_Type1_Group_ExpandableArea_K2Node_ComponentBoundEvent_1_OnExpandableAreaExpansionChanged__DelegateSignature");

	Params::CategoryList_Type1_Group_C_BndEvt__CategoryList_Type1_Group_ExpandableArea_K2Node_ComponentBoundEvent_1_OnExpandableAreaExpansionChanged__DelegateSignature Parms{};

	Parms.Area = Area;
	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CategoryList_Type1_Group.CategoryList_Type1_Group_C.BndEvt__CategoryList_Type1_Group_ExpandableArea_64_K2Node_ComponentBoundEvent_0_OnExpandableAreaExpansionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UExpandableArea*                  Area                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsExpanded                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCategoryList_Type1_Group_C::BndEvt__CategoryList_Type1_Group_ExpandableArea_64_K2Node_ComponentBoundEvent_0_OnExpandableAreaExpansionChanged__DelegateSignature(class UExpandableArea* Area, bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CategoryList_Type1_Group_C", "BndEvt__CategoryList_Type1_Group_ExpandableArea_64_K2Node_ComponentBoundEvent_0_OnExpandableAreaExpansionChanged__DelegateSignature");

	Params::CategoryList_Type1_Group_C_BndEvt__CategoryList_Type1_Group_ExpandableArea_64_K2Node_ComponentBoundEvent_0_OnExpandableAreaExpansionChanged__DelegateSignature Parms{};

	Parms.Area = Area;
	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CategoryList_Type1_Group.CategoryList_Type1_Group_C.SetGroupNameText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             NameText                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UCategoryList_Type1_Group_C::SetGroupNameText(const class FText& NameText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CategoryList_Type1_Group_C", "SetGroupNameText");

	Params::CategoryList_Type1_Group_C_SetGroupNameText Parms{};

	Parms.NameText = std::move(NameText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CategoryList_Type1_Group.CategoryList_Type1_Group_C.AddListItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCategoryList_Type1_Item_C*       ListItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCategoryList_Type1_Group_C::AddListItem(class UCategoryList_Type1_Item_C* ListItem, int32 ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CategoryList_Type1_Group_C", "AddListItem");

	Params::CategoryList_Type1_Group_C_AddListItem Parms{};

	Parms.ListItem = ListItem;
	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CategoryList_Type1_Group.CategoryList_Type1_Group_C.SetButtonSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Selected                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCategoryList_Type1_Group_C::SetButtonSelected(int32 ID, bool Selected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CategoryList_Type1_Group_C", "SetButtonSelected");

	Params::CategoryList_Type1_Group_C_SetButtonSelected Parms{};

	Parms.ID = ID;
	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CategoryList_Type1_Group.CategoryList_Type1_Group_C.CheckListNewIconVisible
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCategoryList_Type1_Group_C::CheckListNewIconVisible(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CategoryList_Type1_Group_C", "CheckListNewIconVisible");

	Params::CategoryList_Type1_Group_C_CheckListNewIconVisible Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function CategoryList_Type1_Group.CategoryList_Type1_Group_C.SetButtonSelectIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Selected                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCategoryList_Type1_Group_C::SetButtonSelectIndex(int32 Param_Index, bool Selected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CategoryList_Type1_Group_C", "SetButtonSelectIndex");

	Params::CategoryList_Type1_Group_C_SetButtonSelectIndex Parms{};

	Parms.Param_Index = Param_Index;
	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CategoryList_Type1_Group.CategoryList_Type1_Group_C.SetNewIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsActive                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCategoryList_Type1_Group_C::SetNewIcon(int32 InId, bool InIsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CategoryList_Type1_Group_C", "SetNewIcon");

	Params::CategoryList_Type1_Group_C_SetNewIcon Parms{};

	Parms.InId = InId;
	Parms.InIsActive = InIsActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CategoryList_Type1_Group.CategoryList_Type1_Group_C.SetAllNewIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsActive                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCategoryList_Type1_Group_C::SetAllNewIcon(bool InIsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CategoryList_Type1_Group_C", "SetAllNewIcon");

	Params::CategoryList_Type1_Group_C_SetAllNewIcon Parms{};

	Parms.InIsActive = InIsActive;

	UObject::ProcessEvent(Func, &Parms);
}

}

