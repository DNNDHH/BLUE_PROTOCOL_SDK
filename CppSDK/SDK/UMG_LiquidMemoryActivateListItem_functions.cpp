#pragma once

 

// Package: UMG_LiquidMemoryActivateListItem

#include "Basic.hpp"

#include "UMG_LiquidMemoryActivateListItem_classes.hpp"
#include "UMG_LiquidMemoryActivateListItem_parameters.hpp"


namespace SDK
{

// Function UMG_LiquidMemoryActivateListItem.UMG_LiquidMemoryActivateListItem_C.OnBtnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_LiquidMemoryProductListItem_C*InItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryActivateListItem_C::OnBtnHovered__DelegateSignature(class UUMG_LiquidMemoryProductListItem_C* InItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryActivateListItem_C", "OnBtnHovered__DelegateSignature");

	Params::UMG_LiquidMemoryActivateListItem_C_OnBtnHovered__DelegateSignature Parms{};

	Parms.InItem = InItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryActivateListItem.UMG_LiquidMemoryActivateListItem_C.OnBtnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_LiquidMemoryProductListItem_C*InItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryActivateListItem_C::OnBtnUnhovered__DelegateSignature(class UUMG_LiquidMemoryProductListItem_C* InItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryActivateListItem_C", "OnBtnUnhovered__DelegateSignature");

	Params::UMG_LiquidMemoryActivateListItem_C_OnBtnUnhovered__DelegateSignature Parms{};

	Parms.InItem = InItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryActivateListItem.UMG_LiquidMemoryActivateListItem_C.OnBtnSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_LiquidMemoryProductListItem_C*InItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryActivateListItem_C::OnBtnSelected__DelegateSignature(class UUMG_LiquidMemoryProductListItem_C* InItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryActivateListItem_C", "OnBtnSelected__DelegateSignature");

	Params::UMG_LiquidMemoryActivateListItem_C_OnBtnSelected__DelegateSignature Parms{};

	Parms.InItem = InItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryActivateListItem.UMG_LiquidMemoryActivateListItem_C.OnAdd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_LiquidMemoryProductListItem_C*InItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryActivateListItem_C::OnAdd__DelegateSignature(class UUMG_LiquidMemoryProductListItem_C* InItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryActivateListItem_C", "OnAdd__DelegateSignature");

	Params::UMG_LiquidMemoryActivateListItem_C_OnAdd__DelegateSignature Parms{};

	Parms.InItem = InItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryActivateListItem.UMG_LiquidMemoryActivateListItem_C.OnSub__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_LiquidMemoryProductListItem_C*InItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryActivateListItem_C::OnSub__DelegateSignature(class UUMG_LiquidMemoryProductListItem_C* InItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryActivateListItem_C", "OnSub__DelegateSignature");

	Params::UMG_LiquidMemoryActivateListItem_C_OnSub__DelegateSignature Parms{};

	Parms.InItem = InItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryActivateListItem.UMG_LiquidMemoryActivateListItem_C.OnOveredAddNumMax__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUMG_LiquidMemoryActivateListItem_C::OnOveredAddNumMax__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryActivateListItem_C", "OnOveredAddNumMax__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryActivateListItem.UMG_LiquidMemoryActivateListItem_C.OnPopupTokenList__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_LiquidMemoryId                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsFullCharge                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_LiquidMemoryActivateListItem_C::OnPopupTokenList__DelegateSignature(int32 Param_LiquidMemoryId, bool IsFullCharge)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryActivateListItem_C", "OnPopupTokenList__DelegateSignature");

	Params::UMG_LiquidMemoryActivateListItem_C_OnPopupTokenList__DelegateSignature Parms{};

	Parms.Param_LiquidMemoryId = Param_LiquidMemoryId;
	Parms.IsFullCharge = IsFullCharge;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryActivateListItem.UMG_LiquidMemoryActivateListItem_C.ExecuteUbergraph_UMG_LiquidMemoryActivateListItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryActivateListItem_C::ExecuteUbergraph_UMG_LiquidMemoryActivateListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryActivateListItem_C", "ExecuteUbergraph_UMG_LiquidMemoryActivateListItem");

	Params::UMG_LiquidMemoryActivateListItem_C_ExecuteUbergraph_UMG_LiquidMemoryActivateListItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryActivateListItem.UMG_LiquidMemoryActivateListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_LiquidMemoryActivateListItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryActivateListItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_LiquidMemoryActivateListItem.UMG_LiquidMemoryActivateListItem_C.SetLiquidMemoryInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryActivateListItem_C::SetLiquidMemoryInfo(int32 ID, int32 Level)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryActivateListItem_C", "SetLiquidMemoryInfo");

	Params::UMG_LiquidMemoryActivateListItem_C_SetLiquidMemoryInfo Parms{};

	Parms.ID = ID;
	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_LiquidMemoryActivateListItem.UMG_LiquidMemoryActivateListItem_C.UpdateBottleStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InLiquidMemoryId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LiquidMemoryActivateListItem_C::UpdateBottleStatus(int32 InLiquidMemoryId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_LiquidMemoryActivateListItem_C", "UpdateBottleStatus");

	Params::UMG_LiquidMemoryActivateListItem_C_UpdateBottleStatus Parms{};

	Parms.InLiquidMemoryId = InLiquidMemoryId;

	UObject::ProcessEvent(Func, &Parms);
}

}

