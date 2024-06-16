#pragma once

 

// Package: TokenSelectorListItem

#include "Basic.hpp"

#include "TokenSelectorListItem_classes.hpp"
#include "TokenSelectorListItem_parameters.hpp"


namespace SDK
{

// Function TokenSelectorListItem.TokenSelectorListItem_C.OnSelect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTokenSelectorListItem_C*         Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTokenSelectorListItem_C::OnSelect__DelegateSignature(class UTokenSelectorListItem_C* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenSelectorListItem_C", "OnSelect__DelegateSignature");

	Params::TokenSelectorListItem_C_OnSelect__DelegateSignature Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TokenSelectorListItem.TokenSelectorListItem_C.ExecuteUbergraph_TokenSelectorListItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTokenSelectorListItem_C::ExecuteUbergraph_TokenSelectorListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenSelectorListItem_C", "ExecuteUbergraph_TokenSelectorListItem");

	Params::TokenSelectorListItem_C_ExecuteUbergraph_TokenSelectorListItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TokenSelectorListItem.TokenSelectorListItem_C.BndEvt__TokenSelectorListItem_SBRadioBtnCmn01_C_198_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTokenSelectorListItem_C::BndEvt__TokenSelectorListItem_SBRadioBtnCmn01_C_198_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenSelectorListItem_C", "BndEvt__TokenSelectorListItem_SBRadioBtnCmn01_C_198_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::TokenSelectorListItem_C_BndEvt__TokenSelectorListItem_SBRadioBtnCmn01_C_198_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TokenSelectorListItem.TokenSelectorListItem_C.BndEvt__TokenSelectorListItem_CB_Select_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTokenSelectorListItem_C::BndEvt__TokenSelectorListItem_CB_Select_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenSelectorListItem_C", "BndEvt__TokenSelectorListItem_CB_Select_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::TokenSelectorListItem_C_BndEvt__TokenSelectorListItem_CB_Select_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TokenSelectorListItem.TokenSelectorListItem_C.SetTokenData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_TokenID                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTokenSelectorListItem_C::SetTokenData(int32 Param_TokenID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenSelectorListItem_C", "SetTokenData");

	Params::TokenSelectorListItem_C_SetTokenData Parms{};

	Parms.Param_TokenID = Param_TokenID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TokenSelectorListItem.TokenSelectorListItem_C.SetRecepiData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCraftMasterData                 RecepiData                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UTokenSelectorListItem_C::SetRecepiData(const struct FCraftMasterData& RecepiData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenSelectorListItem_C", "SetRecepiData");

	Params::TokenSelectorListItem_C_SetRecepiData Parms{};

	Parms.RecepiData = std::move(RecepiData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function TokenSelectorListItem.TokenSelectorListItem_C.Set Select
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSelect                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTokenSelectorListItem_C::Set_Select(bool bSelect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenSelectorListItem_C", "Set Select");

	Params::TokenSelectorListItem_C_Set_Select Parms{};

	Parms.bSelect = bSelect;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TokenSelectorListItem.TokenSelectorListItem_C.SetCraftCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_CraftCount                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTokenSelectorListItem_C::SetCraftCount(int32 Param_CraftCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenSelectorListItem_C", "SetCraftCount");

	Params::TokenSelectorListItem_C_SetCraftCount Parms{};

	Parms.Param_CraftCount = Param_CraftCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TokenSelectorListItem.TokenSelectorListItem_C.UpdateNeedNum
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTokenSelectorListItem_C::UpdateNeedNum()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenSelectorListItem_C", "UpdateNeedNum");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TokenSelectorListItem.TokenSelectorListItem_C.SetUIScreen 
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTokenSelectorListItem_C::SetUIScreen_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenSelectorListItem_C", "SetUIScreen ");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TokenSelectorListItem.TokenSelectorListItem_C.GetTokenId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   Param_TokenID                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTokenSelectorListItem_C::GetTokenId(int32* Param_TokenID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenSelectorListItem_C", "GetTokenId");

	Params::TokenSelectorListItem_C_GetTokenId Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_TokenID != nullptr)
		*Param_TokenID = Parms.Param_TokenID;
}

}

