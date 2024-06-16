#pragma once

 

// Package: AestheShop_TicketListItem

#include "Basic.hpp"

#include "AestheShop_TicketListItem_classes.hpp"
#include "AestheShop_TicketListItem_parameters.hpp"


namespace SDK
{

// Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.OnSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InCourseId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InTicketTokenId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InHoldTicketTokenAmount                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAestheShop_TicketListItem_C::OnSelected__DelegateSignature(int32 InCourseId, int32 InTicketTokenId, int32 InHoldTicketTokenAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_TicketListItem_C", "OnSelected__DelegateSignature");

	Params::AestheShop_TicketListItem_C_OnSelected__DelegateSignature Parms{};

	Parms.InCourseId = InCourseId;
	Parms.InTicketTokenId = InTicketTokenId;
	Parms.InHoldTicketTokenAmount = InHoldTicketTokenAmount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.ExecuteUbergraph_AestheShop_TicketListItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAestheShop_TicketListItem_C::ExecuteUbergraph_AestheShop_TicketListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_TicketListItem_C", "ExecuteUbergraph_AestheShop_TicketListItem");

	Params::AestheShop_TicketListItem_C_ExecuteUbergraph_AestheShop_TicketListItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UAestheShop_TicketListItem_C::BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_TicketListItem_C", "BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAestheShop_TicketListItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_TicketListItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.SetupCourseListItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InCourseId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InHoldTicketTokenAmount                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAestheShop_TicketListItem_C::SetupCourseListItem(int32 InCourseId, int32 InHoldTicketTokenAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_TicketListItem_C", "SetupCourseListItem");

	Params::AestheShop_TicketListItem_C_SetupCourseListItem Parms{};

	Parms.InCourseId = InCourseId;
	Parms.InHoldTicketTokenAmount = InHoldTicketTokenAmount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.SetCourseIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>        InIconTexture                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UAestheShop_TicketListItem_C::SetCourseIcon(TSoftObjectPtr<class UTexture2D> InIconTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_TicketListItem_C", "SetCourseIcon");

	Params::AestheShop_TicketListItem_C_SetCourseIcon Parms{};

	Parms.InIconTexture = InIconTexture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.SetCourseName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UAestheShop_TicketListItem_C::SetCourseName(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_TicketListItem_C", "SetCourseName");

	Params::AestheShop_TicketListItem_C_SetCourseName Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.SetTicketName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UAestheShop_TicketListItem_C::SetTicketName(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_TicketListItem_C", "SetTicketName");

	Params::AestheShop_TicketListItem_C_SetTicketName Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.SetTicketAmount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAestheShop_TicketListItem_C::SetTicketAmount(int32 InAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_TicketListItem_C", "SetTicketAmount");

	Params::AestheShop_TicketListItem_C_SetTicketAmount Parms{};

	Parms.InAmount = InAmount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.SetListItemSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSelected                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAestheShop_TicketListItem_C::SetListItemSelected(bool IsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_TicketListItem_C", "SetListItemSelected");

	Params::AestheShop_TicketListItem_C_SetListItemSelected Parms{};

	Parms.IsSelected = IsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.GetTicketTokenId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   OutTIcketTokenId                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAestheShop_TicketListItem_C::GetTicketTokenId(int32* OutTIcketTokenId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_TicketListItem_C", "GetTicketTokenId");

	Params::AestheShop_TicketListItem_C_GetTicketTokenId Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutTIcketTokenId != nullptr)
		*OutTIcketTokenId = Parms.OutTIcketTokenId;
}


// Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.GetHoldTicketTokenAmount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   OutAmount                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAestheShop_TicketListItem_C::GetHoldTicketTokenAmount(int32* OutAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_TicketListItem_C", "GetHoldTicketTokenAmount");

	Params::AestheShop_TicketListItem_C_GetHoldTicketTokenAmount Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutAmount != nullptr)
		*OutAmount = Parms.OutAmount;
}


// Function AestheShop_TicketListItem.AestheShop_TicketListItem_C.GetCourseId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   OutCourseId                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAestheShop_TicketListItem_C::GetCourseId(int32* OutCourseId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_TicketListItem_C", "GetCourseId");

	Params::AestheShop_TicketListItem_C_GetCourseId Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutCourseId != nullptr)
		*OutCourseId = Parms.OutCourseId;
}

}

