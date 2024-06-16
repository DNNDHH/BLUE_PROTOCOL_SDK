#pragma once

 

// Package: FusionItemList

#include "Basic.hpp"

#include "FusionItemList_classes.hpp"
#include "FusionItemList_parameters.hpp"


namespace SDK
{

// Function FusionItemList.FusionItemList_C.OnSelectItemData__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UFusionItemList_C::OnSelectItemData__DelegateSignature(const struct FOwnItemInfo& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FusionItemList_C", "OnSelectItemData__DelegateSignature");

	Params::FusionItemList_C_OnSelectItemData__DelegateSignature Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FusionItemList.FusionItemList_C.ExecuteUbergraph_FusionItemList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFusionItemList_C::ExecuteUbergraph_FusionItemList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FusionItemList_C", "ExecuteUbergraph_FusionItemList");

	Params::FusionItemList_C_ExecuteUbergraph_FusionItemList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FusionItemList.FusionItemList_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFusionItemList_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FusionItemList_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FusionItemList.FusionItemList_C.BndEvt__FusionItemList_SortBox_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ESBItemSortType                         Param_SortType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFusionItemList_C::BndEvt__FusionItemList_SortBox_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature(ESBItemSortType Param_SortType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FusionItemList_C", "BndEvt__FusionItemList_SortBox_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature");

	Params::FusionItemList_C_BndEvt__FusionItemList_SortBox_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature Parms{};

	Parms.Param_SortType = Param_SortType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FusionItemList.FusionItemList_C.BndEvt__FusionItemList_FilterButton_K2Node_ComponentBoundEvent_1_OnApplyFilter__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// TArray<struct FFilterGroup>             Param_Filters                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFusionItemList_C::BndEvt__FusionItemList_FilterButton_K2Node_ComponentBoundEvent_1_OnApplyFilter__DelegateSignature(TArray<struct FFilterGroup>& Param_Filters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FusionItemList_C", "BndEvt__FusionItemList_FilterButton_K2Node_ComponentBoundEvent_1_OnApplyFilter__DelegateSignature");

	Params::FusionItemList_C_BndEvt__FusionItemList_FilterButton_K2Node_ComponentBoundEvent_1_OnApplyFilter__DelegateSignature Parms{};

	Parms.Param_Filters = std::move(Param_Filters);

	UObject::ProcessEvent(Func, &Parms);

	Param_Filters = std::move(Parms.Param_Filters);
}


// Function FusionItemList.FusionItemList_C.BndEvt__FusionItemList_BasicPager_K2Node_ComponentBoundEvent_0_OnPageChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   Param_Page                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFusionItemList_C::BndEvt__FusionItemList_BasicPager_K2Node_ComponentBoundEvent_0_OnPageChange__DelegateSignature(int32 Param_Page)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FusionItemList_C", "BndEvt__FusionItemList_BasicPager_K2Node_ComponentBoundEvent_0_OnPageChange__DelegateSignature");

	Params::FusionItemList_C_BndEvt__FusionItemList_BasicPager_K2Node_ComponentBoundEvent_0_OnPageChange__DelegateSignature Parms{};

	Parms.Param_Page = Param_Page;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FusionItemList.FusionItemList_C.OnSelectItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     OwnItem                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// class UFusionitemListItem_C*            OnSelected                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFusionItemList_C::OnSelectItem(const struct FOwnItemInfo& OwnItem, class UFusionitemListItem_C* OnSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FusionItemList_C", "OnSelectItem");

	Params::FusionItemList_C_OnSelectItem Parms{};

	Parms.OwnItem = std::move(OwnItem);
	Parms.OnSelected = OnSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FusionItemList.FusionItemList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFusionItemList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FusionItemList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FusionItemList.FusionItemList_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFusionItemList_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FusionItemList_C", "PreConstruct");

	Params::FusionItemList_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FusionItemList.FusionItemList_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFusionItemList_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FusionItemList_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FusionItemList.FusionItemList_C.Terminate
// (Private, BlueprintCallable, BlueprintEvent)

void UFusionItemList_C::Terminate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FusionItemList_C", "Terminate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FusionItemList.FusionItemList_C.SetFusionWepon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     Weapon                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UFusionItemList_C::SetFusionWepon(const struct FOwnItemInfo& Weapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FusionItemList_C", "SetFusionWepon");

	Params::FusionItemList_C_SetFusionWepon Parms{};

	Parms.Weapon = std::move(Weapon);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FusionItemList.FusionItemList_C.SetEmptySlotNum
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SlotNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFusionItemList_C::SetEmptySlotNum(int32 SlotNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FusionItemList_C", "SetEmptySlotNum");

	Params::FusionItemList_C_SetEmptySlotNum Parms{};

	Parms.SlotNum = SlotNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FusionItemList.FusionItemList_C.InitializeFusionItemList 
// (Public, BlueprintCallable, BlueprintEvent)

void UFusionItemList_C::InitializeFusionItemList_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FusionItemList_C", "InitializeFusionItemList ");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FusionItemList.FusionItemList_C.CreateFusionItemList 
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFusionItemList_C::CreateFusionItemList_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FusionItemList_C", "CreateFusionItemList ");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FusionItemList.FusionItemList_C.DeleteFusionItemList
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFusionItemList_C::DeleteFusionItemList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FusionItemList_C", "DeleteFusionItemList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FusionItemList.FusionItemList_C.UpdateSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFusionItemList_C::UpdateSelected(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FusionItemList_C", "UpdateSelected");

	Params::FusionItemList_C_UpdateSelected Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FusionItemList.FusionItemList_C.UpfateSlotNum
// (Private, BlueprintCallable, BlueprintEvent)

void UFusionItemList_C::UpfateSlotNum()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FusionItemList_C", "UpfateSlotNum");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FusionItemList.FusionItemList_C.UpdateEnable
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFusionItemList_C::UpdateEnable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FusionItemList_C", "UpdateEnable");

	UObject::ProcessEvent(Func, nullptr);
}

}

