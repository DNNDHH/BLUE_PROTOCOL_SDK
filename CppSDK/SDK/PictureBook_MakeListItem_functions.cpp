#pragma once

 

// Package: PictureBook_MakeListItem

#include "Basic.hpp"

#include "PictureBook_MakeListItem_classes.hpp"
#include "PictureBook_MakeListItem_parameters.hpp"


namespace SDK
{

// Function PictureBook_MakeListItem.PictureBook_MakeListItem_C.OnWishlist__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UPictureBook_MakeListItem_C::OnWishlist__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureBook_MakeListItem_C", "OnWishlist__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PictureBook_MakeListItem.PictureBook_MakeListItem_C.ExecuteUbergraph_PictureBook_MakeListItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPictureBook_MakeListItem_C::ExecuteUbergraph_PictureBook_MakeListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureBook_MakeListItem_C", "ExecuteUbergraph_PictureBook_MakeListItem");

	Params::PictureBook_MakeListItem_C_ExecuteUbergraph_PictureBook_MakeListItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PictureBook_MakeListItem.PictureBook_MakeListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPictureBook_MakeListItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureBook_MakeListItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PictureBook_MakeListItem.PictureBook_MakeListItem_C.BndEvt__PictureBook_MakeListItem_HudCheck_RadioBtn_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPictureBook_MakeListItem_C::BndEvt__PictureBook_MakeListItem_HudCheck_RadioBtn_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureBook_MakeListItem_C", "BndEvt__PictureBook_MakeListItem_HudCheck_RadioBtn_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::PictureBook_MakeListItem_C_BndEvt__PictureBook_MakeListItem_HudCheck_RadioBtn_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PictureBook_MakeListItem.PictureBook_MakeListItem_C.SetName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UPictureBook_MakeListItem_C::SetName(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureBook_MakeListItem_C", "SetName");

	Params::PictureBook_MakeListItem_C_SetName Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PictureBook_MakeListItem.PictureBook_MakeListItem_C.SetSecret
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsSecret                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPictureBook_MakeListItem_C::SetSecret(bool Param_IsSecret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureBook_MakeListItem_C", "SetSecret");

	Params::PictureBook_MakeListItem_C_SetSecret Parms{};

	Parms.Param_IsSecret = Param_IsSecret;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PictureBook_MakeListItem.PictureBook_MakeListItem_C.SetNew
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsRead                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsAddRead                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPictureBook_MakeListItem_C::SetNew(bool IsRead, bool* IsAddRead)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureBook_MakeListItem_C", "SetNew");

	Params::PictureBook_MakeListItem_C_SetNew Parms{};

	Parms.IsRead = IsRead;

	UObject::ProcessEvent(Func, &Parms);

	if (IsAddRead != nullptr)
		*IsAddRead = Parms.IsAddRead;
}


// Function PictureBook_MakeListItem.PictureBook_MakeListItem_C.SetWishlistBtnEnable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPictureBook_MakeListItem_C::SetWishlistBtnEnable(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureBook_MakeListItem_C", "SetWishlistBtnEnable");

	Params::PictureBook_MakeListItem_C_SetWishlistBtnEnable Parms{};

	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PictureBook_MakeListItem.PictureBook_MakeListItem_C.CheckAdventurerRank
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPictureBook_MakeListItem_C::CheckAdventurerRank(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureBook_MakeListItem_C", "CheckAdventurerRank");

	Params::PictureBook_MakeListItem_C_CheckAdventurerRank Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function PictureBook_MakeListItem.PictureBook_MakeListItem_C.SetTermId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           TermId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UPictureBook_MakeListItem_C::SetTermId(const class FString& TermId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PictureBook_MakeListItem_C", "SetTermId");

	Params::PictureBook_MakeListItem_C_SetTermId Parms{};

	Parms.TermId = std::move(TermId);

	UObject::ProcessEvent(Func, &Parms);
}

}

