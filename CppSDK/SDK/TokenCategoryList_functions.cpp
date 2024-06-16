#pragma once

 

// Package: TokenCategoryList

#include "Basic.hpp"

#include "TokenCategoryList_classes.hpp"
#include "TokenCategoryList_parameters.hpp"


namespace SDK
{

// Function TokenCategoryList.TokenCategoryList_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTokenCategoryList_C::OnClick__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenCategoryList_C", "OnClick__DelegateSignature");

	Params::TokenCategoryList_C_OnClick__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TokenCategoryList.TokenCategoryList_C.ExecuteUbergraph_TokenCategoryList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTokenCategoryList_C::ExecuteUbergraph_TokenCategoryList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenCategoryList_C", "ExecuteUbergraph_TokenCategoryList");

	Params::TokenCategoryList_C_ExecuteUbergraph_TokenCategoryList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TokenCategoryList.TokenCategoryList_C.SeInputActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_InputActive                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTokenCategoryList_C::SeInputActive(bool Param_InputActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenCategoryList_C", "SeInputActive");

	Params::TokenCategoryList_C_SeInputActive Parms{};

	Parms.Param_InputActive = Param_InputActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TokenCategoryList.TokenCategoryList_C.OnButtonClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ListIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTokenCategoryList_C::OnButtonClick(int32 ListIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenCategoryList_C", "OnButtonClick");

	Params::TokenCategoryList_C_OnButtonClick Parms{};

	Parms.ListIndex = ListIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TokenCategoryList.TokenCategoryList_C.SetList
// (BlueprintCallable, BlueprintEvent)

void UTokenCategoryList_C::SetList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenCategoryList_C", "SetList");

	UObject::ProcessEvent(Func, nullptr);
}

}

