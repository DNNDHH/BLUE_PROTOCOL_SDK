#pragma once

 

// Package: StackTokenSelectorListItem

#include "Basic.hpp"

#include "StackTokenSelectorListItem_classes.hpp"
#include "StackTokenSelectorListItem_parameters.hpp"


namespace SDK
{

// Function StackTokenSelectorListItem.StackTokenSelectorListItem_C.OnSelect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStackTokenSelectorListItem_C*    Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStackTokenSelectorListItem_C::OnSelect__DelegateSignature(class UStackTokenSelectorListItem_C* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackTokenSelectorListItem_C", "OnSelect__DelegateSignature");

	Params::StackTokenSelectorListItem_C_OnSelect__DelegateSignature Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StackTokenSelectorListItem.StackTokenSelectorListItem_C.ExecuteUbergraph_StackTokenSelectorListItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStackTokenSelectorListItem_C::ExecuteUbergraph_StackTokenSelectorListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackTokenSelectorListItem_C", "ExecuteUbergraph_StackTokenSelectorListItem");

	Params::StackTokenSelectorListItem_C_ExecuteUbergraph_StackTokenSelectorListItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StackTokenSelectorListItem.StackTokenSelectorListItem_C.BndEvt__TokenSelectorListItem_SBRadioBtnCmn01_C_198_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UStackTokenSelectorListItem_C::BndEvt__TokenSelectorListItem_SBRadioBtnCmn01_C_198_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackTokenSelectorListItem_C", "BndEvt__TokenSelectorListItem_SBRadioBtnCmn01_C_198_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::StackTokenSelectorListItem_C_BndEvt__TokenSelectorListItem_SBRadioBtnCmn01_C_198_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StackTokenSelectorListItem.StackTokenSelectorListItem_C.SetTokenData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBStackBTicketData              Param_TokenID                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UStackTokenSelectorListItem_C::SetTokenData(const struct FSBStackBTicketData& Param_TokenID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackTokenSelectorListItem_C", "SetTokenData");

	Params::StackTokenSelectorListItem_C_SetTokenData Parms{};

	Parms.Param_TokenID = std::move(Param_TokenID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function StackTokenSelectorListItem.StackTokenSelectorListItem_C.Set Select
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSelect                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UStackTokenSelectorListItem_C::Set_Select(bool bSelect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackTokenSelectorListItem_C", "Set Select");

	Params::StackTokenSelectorListItem_C_Set_Select Parms{};

	Parms.bSelect = bSelect;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StackTokenSelectorListItem.StackTokenSelectorListItem_C.UpdateNeedNum
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UStackTokenSelectorListItem_C::UpdateNeedNum()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackTokenSelectorListItem_C", "UpdateNeedNum");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StackTokenSelectorListItem.StackTokenSelectorListItem_C.SetUIScreen 
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UStackTokenSelectorListItem_C::SetUIScreen_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackTokenSelectorListItem_C", "SetUIScreen ");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StackTokenSelectorListItem.StackTokenSelectorListItem_C.GetTokenId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   Param_TokenID                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStackTokenSelectorListItem_C::GetTokenId(int32* Param_TokenID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StackTokenSelectorListItem_C", "GetTokenId");

	Params::StackTokenSelectorListItem_C_GetTokenId Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_TokenID != nullptr)
		*Param_TokenID = Parms.Param_TokenID;
}

}

