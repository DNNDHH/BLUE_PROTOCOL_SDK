#pragma once

 

// Package: RecepiListItemBtn

#include "Basic.hpp"

#include "RecepiListItemBtn_classes.hpp"
#include "RecepiListItemBtn_parameters.hpp"


namespace SDK
{

// Function RecepiListItemBtn.RecepiListItemBtn_C.OnSelect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMasterImagineRecepi             MasterData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class URecepiListItemBtn_C*             SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URecepiListItemBtn_C::OnSelect__DelegateSignature(const struct FMasterImagineRecepi& MasterData, class URecepiListItemBtn_C* SelectedItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RecepiListItemBtn_C", "OnSelect__DelegateSignature");

	Params::RecepiListItemBtn_C_OnSelect__DelegateSignature Parms{};

	Parms.MasterData = std::move(MasterData);
	Parms.SelectedItem = SelectedItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RecepiListItemBtn.RecepiListItemBtn_C.ExecuteUbergraph_RecepiListItemBtn
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URecepiListItemBtn_C::ExecuteUbergraph_RecepiListItemBtn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RecepiListItemBtn_C", "ExecuteUbergraph_RecepiListItemBtn");

	Params::RecepiListItemBtn_C_ExecuteUbergraph_RecepiListItemBtn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RecepiListItemBtn.RecepiListItemBtn_C.Update Wishlist
// (BlueprintCallable, BlueprintEvent)

void URecepiListItemBtn_C::Update_Wishlist()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RecepiListItemBtn_C", "Update Wishlist");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RecepiListItemBtn.RecepiListItemBtn_C.OnUpdateReward
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URecepiListItemBtn_C::OnUpdateReward(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RecepiListItemBtn_C", "OnUpdateReward");

	Params::RecepiListItemBtn_C_OnUpdateReward Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RecepiListItemBtn.RecepiListItemBtn_C.Unbind Boost
// (BlueprintCallable, BlueprintEvent)

void URecepiListItemBtn_C::Unbind_Boost()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RecepiListItemBtn_C", "Unbind Boost");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RecepiListItemBtn.RecepiListItemBtn_C.Bind Boost
// (BlueprintCallable, BlueprintEvent)

void URecepiListItemBtn_C::Bind_Boost()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RecepiListItemBtn_C", "Bind Boost");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RecepiListItemBtn.RecepiListItemBtn_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URecepiListItemBtn_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RecepiListItemBtn_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RecepiListItemBtn.RecepiListItemBtn_C.Destruct_RecepiAttach
// (BlueprintCallable, BlueprintEvent)

void URecepiListItemBtn_C::Destruct_RecepiAttach()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RecepiListItemBtn_C", "Destruct_RecepiAttach");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RecepiListItemBtn.RecepiListItemBtn_C.Construct_RecepiAttach
// (BlueprintCallable, BlueprintEvent)

void URecepiListItemBtn_C::Construct_RecepiAttach()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RecepiListItemBtn_C", "Construct_RecepiAttach");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RecepiListItemBtn.RecepiListItemBtn_C.OnRecepiUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RecepiId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URecepiListItemBtn_C::OnRecepiUpdated(int32 RecepiId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RecepiListItemBtn_C", "OnRecepiUpdated");

	Params::RecepiListItemBtn_C_OnRecepiUpdated Parms{};

	Parms.RecepiId = RecepiId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RecepiListItemBtn.RecepiListItemBtn_C.Check Adv Rank Reached
// (BlueprintCallable, BlueprintEvent)

void URecepiListItemBtn_C::Check_Adv_Rank_Reached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RecepiListItemBtn_C", "Check Adv Rank Reached");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RecepiListItemBtn.RecepiListItemBtn_C.Set Crafted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsCrafted                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URecepiListItemBtn_C::Set_Crafted(bool Param_IsCrafted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RecepiListItemBtn_C", "Set Crafted");

	Params::RecepiListItemBtn_C_Set_Crafted Parms{};

	Parms.Param_IsCrafted = Param_IsCrafted;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RecepiListItemBtn.RecepiListItemBtn_C.ApplyImagineData
// (BlueprintCallable, BlueprintEvent)

void URecepiListItemBtn_C::ApplyImagineData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RecepiListItemBtn_C", "ApplyImagineData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RecepiListItemBtn.RecepiListItemBtn_C.Set RecepiData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMasterImagineRecepi             Param_ImagineRecpiData                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void URecepiListItemBtn_C::Set_RecepiData(const struct FMasterImagineRecepi& Param_ImagineRecpiData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RecepiListItemBtn_C", "Set RecepiData");

	Params::RecepiListItemBtn_C_Set_RecepiData Parms{};

	Parms.Param_ImagineRecpiData = std::move(Param_ImagineRecpiData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function RecepiListItemBtn.RecepiListItemBtn_C.BndEvt__Btn_Select_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void URecepiListItemBtn_C::BndEvt__Btn_Select_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RecepiListItemBtn_C", "BndEvt__Btn_Select_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RecepiListItemBtn.RecepiListItemBtn_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URecepiListItemBtn_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RecepiListItemBtn_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RecepiListItemBtn.RecepiListItemBtn_C.GetRecepi
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FMasterImagineRecepi             Master                                                 (Parm, OutParm)
// bool                                    bIsCrafted                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URecepiListItemBtn_C::GetRecepi(struct FMasterImagineRecepi* Master, bool* bIsCrafted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RecepiListItemBtn_C", "GetRecepi");

	Params::RecepiListItemBtn_C_GetRecepi Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Master != nullptr)
		*Master = std::move(Parms.Master);

	if (bIsCrafted != nullptr)
		*bIsCrafted = Parms.bIsCrafted;
}


// Function RecepiListItemBtn.RecepiListItemBtn_C.UpdateRewardBoost
// (Public, BlueprintCallable, BlueprintEvent)

void URecepiListItemBtn_C::UpdateRewardBoost()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RecepiListItemBtn_C", "UpdateRewardBoost");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RecepiListItemBtn.RecepiListItemBtn_C.Bind Wishlist Update
// (Public, BlueprintCallable, BlueprintEvent)

void URecepiListItemBtn_C::Bind_Wishlist_Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RecepiListItemBtn_C", "Bind Wishlist Update");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RecepiListItemBtn.RecepiListItemBtn_C.Unbind Wishlist Update
// (Public, BlueprintCallable, BlueprintEvent)

void URecepiListItemBtn_C::Unbind_Wishlist_Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RecepiListItemBtn_C", "Unbind Wishlist Update");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RecepiListItemBtn.RecepiListItemBtn_C.SetSelectedVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URecepiListItemBtn_C::SetSelectedVisible(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RecepiListItemBtn_C", "SetSelectedVisible");

	Params::RecepiListItemBtn_C_SetSelectedVisible Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RecepiListItemBtn.RecepiListItemBtn_C.UpdateTimeLimit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void URecepiListItemBtn_C::UpdateTimeLimit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RecepiListItemBtn_C", "UpdateTimeLimit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RecepiListItemBtn.RecepiListItemBtn_C.UpdateNewMark
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RecepiId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URecepiListItemBtn_C::UpdateNewMark(int32 RecepiId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RecepiListItemBtn_C", "UpdateNewMark");

	Params::RecepiListItemBtn_C_UpdateNewMark Parms{};

	Parms.RecepiId = RecepiId;

	UObject::ProcessEvent(Func, &Parms);
}

}

