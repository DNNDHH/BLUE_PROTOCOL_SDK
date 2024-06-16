#pragma once

 

// Package: TokenList

#include "Basic.hpp"

#include "TokenList_classes.hpp"
#include "TokenList_parameters.hpp"


namespace SDK
{

// Function TokenList.TokenList_C.OnGetExpiredBlankText__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTokenList_C::OnGetExpiredBlankText__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenList_C", "OnGetExpiredBlankText__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TokenList.TokenList_C.OnGetTokenListBlankText__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTokenList_C::OnGetTokenListBlankText__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenList_C", "OnGetTokenListBlankText__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TokenList.TokenList_C.OnMoneyListEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTokenList_C::OnMoneyListEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenList_C", "OnMoneyListEnd__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TokenList.TokenList_C.ExecuteUbergraph_TokenList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTokenList_C::ExecuteUbergraph_TokenList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenList_C", "ExecuteUbergraph_TokenList");

	Params::TokenList_C_ExecuteUbergraph_TokenList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TokenList.TokenList_C.SetExpiredTokenList
// (BlueprintCallable, BlueprintEvent)

void UTokenList_C::SetExpiredTokenList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenList_C", "SetExpiredTokenList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TokenList.TokenList_C.SetTokenList
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Category                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTokenList_C::SetTokenList(int32 Category)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenList_C", "SetTokenList");

	Params::TokenList_C_SetTokenList Parms{};

	Parms.Category = Category;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TokenList.TokenList_C.OnGetExpiredList
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBExpiredTokenStates            States                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UTokenList_C::OnGetExpiredList(const struct FSBExpiredTokenStates& States)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenList_C", "OnGetExpiredList");

	Params::TokenList_C_OnGetExpiredList Parms{};

	Parms.States = std::move(States);

	UObject::ProcessEvent(Func, &Parms);
}


// Function TokenList.TokenList_C.GetStateList
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBTokenStates                   States                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UTokenList_C::GetStateList(const struct FSBTokenStates& States)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenList_C", "GetStateList");

	Params::TokenList_C_GetStateList Parms{};

	Parms.States = std::move(States);

	UObject::ProcessEvent(Func, &Parms);
}


// Function TokenList.TokenList_C.GetCryptocurerncy
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBCryptoCurrency                Cryptocurrency                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UTokenList_C::GetCryptocurerncy(const bool Result, const int32 RetCode, const struct FSBCryptoCurrency& Cryptocurrency)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenList_C", "GetCryptocurerncy");

	Params::TokenList_C_GetCryptocurerncy Parms{};

	Parms.Result = Result;
	Parms.RetCode = RetCode;
	Parms.Cryptocurrency = std::move(Cryptocurrency);

	UObject::ProcessEvent(Func, &Parms);
}


// Function TokenList.TokenList_C.SetMoneyList
// (BlueprintCallable, BlueprintEvent)

void UTokenList_C::SetMoneyList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenList_C", "SetMoneyList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TokenList.TokenList_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTokenList_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenList_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TokenList.TokenList_C.OnGetMyCharacterInfoDelegate_����_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTokenList_C::OnGetMyCharacterInfoDelegate______0(bool Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenList_C", "OnGetMyCharacterInfoDelegate_����_0");

	Params::TokenList_C_OnGetMyCharacterInfoDelegate______0 Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TokenList.TokenList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTokenList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TokenList.TokenList_C.SetTokenListFunc
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBTokenStates                   TokenStates                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UTokenList_C::SetTokenListFunc(const struct FSBTokenStates& TokenStates)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenList_C", "SetTokenListFunc");

	Params::TokenList_C_SetTokenListFunc Parms{};

	Parms.TokenStates = std::move(TokenStates);

	UObject::ProcessEvent(Func, &Parms);
}


// Function TokenList.TokenList_C.SetExpiredTokenListFunc
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBExpiredTokenStates            SBExpiredTokenStates                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTokenList_C::SetExpiredTokenListFunc(const struct FSBExpiredTokenStates& SBExpiredTokenStates)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenList_C", "SetExpiredTokenListFunc");

	Params::TokenList_C_SetExpiredTokenListFunc Parms{};

	Parms.SBExpiredTokenStates = std::move(SBExpiredTokenStates);

	UObject::ProcessEvent(Func, &Parms);
}

}

