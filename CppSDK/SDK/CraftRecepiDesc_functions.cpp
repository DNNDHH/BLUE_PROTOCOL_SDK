#pragma once

 

// Package: CraftRecepiDesc

#include "Basic.hpp"

#include "CraftRecepiDesc_classes.hpp"
#include "CraftRecepiDesc_parameters.hpp"


namespace SDK
{

// Function CraftRecepiDesc.CraftRecepiDesc_C.Request_ShowRate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCraftRecepiDesc_C::Request_ShowRate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftRecepiDesc_C", "Request_ShowRate__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftRecepiDesc.CraftRecepiDesc_C.ExecuteUbergraph_CraftRecepiDesc
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCraftRecepiDesc_C::ExecuteUbergraph_CraftRecepiDesc(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftRecepiDesc_C", "ExecuteUbergraph_CraftRecepiDesc");

	Params::CraftRecepiDesc_C_ExecuteUbergraph_CraftRecepiDesc Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftRecepiDesc.CraftRecepiDesc_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCraftRecepiDesc_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftRecepiDesc_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftRecepiDesc.CraftRecepiDesc_C.SetRecepiData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterCraftRecepi            Param_RecepiData                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UCraftRecepiDesc_C::SetRecepiData(const struct FCharacterCraftRecepi& Param_RecepiData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftRecepiDesc_C", "SetRecepiData");

	Params::CraftRecepiDesc_C_SetRecepiData Parms{};

	Parms.Param_RecepiData = std::move(Param_RecepiData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftRecepiDesc.CraftRecepiDesc_C.UpdateMoneys
// (BlueprintCallable, BlueprintEvent)

void UCraftRecepiDesc_C::UpdateMoneys()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftRecepiDesc_C", "UpdateMoneys");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftRecepiDesc.CraftRecepiDesc_C.BndEvt__CraftRecepiDesc_CmnBtnWishListWhite_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UCraftRecepiDesc_C::BndEvt__CraftRecepiDesc_CmnBtnWishListWhite_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftRecepiDesc_C", "BndEvt__CraftRecepiDesc_CmnBtnWishListWhite_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftRecepiDesc.CraftRecepiDesc_C.BndEvt__CraftRecepiDesc_CraftRecepiDescProduct_K2Node_ComponentBoundEvent_0_Request_ShowRate__DelegateSignature
// (BlueprintEvent)

void UCraftRecepiDesc_C::BndEvt__CraftRecepiDesc_CraftRecepiDescProduct_K2Node_ComponentBoundEvent_0_Request_ShowRate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftRecepiDesc_C", "BndEvt__CraftRecepiDesc_CraftRecepiDescProduct_K2Node_ComponentBoundEvent_0_Request_ShowRate__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftRecepiDesc.CraftRecepiDesc_C.LoadImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCraftRecepiDesc_C::LoadImage(int32 InItemID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftRecepiDesc_C", "LoadImage");

	Params::CraftRecepiDesc_C_LoadImage Parms{};

	Parms.InItemID = InItemID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftRecepiDesc.CraftRecepiDesc_C.CalclateMoney
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsDiscount                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

int32 UCraftRecepiDesc_C::CalclateMoney(bool* bIsDiscount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftRecepiDesc_C", "CalclateMoney");

	Params::CraftRecepiDesc_C_CalclateMoney Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bIsDiscount != nullptr)
		*bIsDiscount = Parms.bIsDiscount;

	return Parms.ReturnValue;
}


// Function CraftRecepiDesc.CraftRecepiDesc_C.IsCraftable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_bIsCraftable                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCraftRecepiDesc_C::IsCraftable(bool* Param_bIsCraftable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftRecepiDesc_C", "IsCraftable");

	Params::CraftRecepiDesc_C_IsCraftable Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_bIsCraftable != nullptr)
		*Param_bIsCraftable = Parms.Param_bIsCraftable;
}


// Function CraftRecepiDesc.CraftRecepiDesc_C.UpdateMoneyAndItemList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCraftRecepiDesc_C::UpdateMoneyAndItemList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftRecepiDesc_C", "UpdateMoneyAndItemList");

	UObject::ProcessEvent(Func, nullptr);
}

}

