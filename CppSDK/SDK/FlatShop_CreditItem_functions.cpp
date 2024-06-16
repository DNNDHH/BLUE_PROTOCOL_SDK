#pragma once

 

// Package: FlatShop_CreditItem

#include "Basic.hpp"

#include "FlatShop_CreditItem_classes.hpp"
#include "FlatShop_CreditItem_parameters.hpp"


namespace SDK
{

// Function FlatShop_CreditItem.FlatShop_CreditItem_C.ExecuteUbergraph_FlatShop_CreditItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlatShop_CreditItem_C::ExecuteUbergraph_FlatShop_CreditItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_CreditItem_C", "ExecuteUbergraph_FlatShop_CreditItem");

	Params::FlatShop_CreditItem_C_ExecuteUbergraph_FlatShop_CreditItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlatShop_CreditItem.FlatShop_CreditItem_C.SetIconTexture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TokenID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlatShop_CreditItem_C::SetIconTexture(int32 TokenID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_CreditItem_C", "SetIconTexture");

	Params::FlatShop_CreditItem_C_SetIconTexture Parms{};

	Parms.TokenID = TokenID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlatShop_CreditItem.FlatShop_CreditItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFlatShop_CreditItem_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_CreditItem_C", "PreConstruct");

	Params::FlatShop_CreditItem_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlatShop_CreditItem.FlatShop_CreditItem_C.OnLoaded_52660D15417B61953E2BF591D987F44E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlatShop_CreditItem_C::OnLoaded_52660D15417B61953E2BF591D987F44E(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_CreditItem_C", "OnLoaded_52660D15417B61953E2BF591D987F44E");

	Params::FlatShop_CreditItem_C_OnLoaded_52660D15417B61953E2BF591D987F44E Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlatShop_CreditItem.FlatShop_CreditItem_C.Set Credit Type
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFlatShop_CreditItem_C::Set_Credit_Type()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_CreditItem_C", "Set Credit Type");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FlatShop_CreditItem.FlatShop_CreditItem_C.SetCreditNum
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Num                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlatShop_CreditItem_C::SetCreditNum(int32 Num)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_CreditItem_C", "SetCreditNum");

	Params::FlatShop_CreditItem_C_SetCreditNum Parms{};

	Parms.Num = Num;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlatShop_CreditItem.FlatShop_CreditItem_C.ChangeToTicketType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TokenID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlatShop_CreditItem_C::ChangeToTicketType(int32 TokenID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_CreditItem_C", "ChangeToTicketType");

	Params::FlatShop_CreditItem_C_ChangeToTicketType Parms{};

	Parms.TokenID = TokenID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlatShop_CreditItem.FlatShop_CreditItem_C.Reset Count Move
// (Public, BlueprintCallable, BlueprintEvent)

void UFlatShop_CreditItem_C::Reset_Count_Move()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_CreditItem_C", "Reset Count Move");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FlatShop_CreditItem.FlatShop_CreditItem_C.SetGashaTicketAmountColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsLack                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFlatShop_CreditItem_C::SetGashaTicketAmountColor(bool IsLack)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_CreditItem_C", "SetGashaTicketAmountColor");

	Params::FlatShop_CreditItem_C_SetGashaTicketAmountColor Parms{};

	Parms.IsLack = IsLack;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlatShop_CreditItem.FlatShop_CreditItem_C.SetAfterCreditNum
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Num                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlatShop_CreditItem_C::SetAfterCreditNum(int32 Num)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_CreditItem_C", "SetAfterCreditNum");

	Params::FlatShop_CreditItem_C_SetAfterCreditNum Parms{};

	Parms.Num = Num;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlatShop_CreditItem.FlatShop_CreditItem_C.SetVisibilityExpired
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFlatShop_CreditItem_C::SetVisibilityExpired(bool InVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_CreditItem_C", "SetVisibilityExpired");

	Params::FlatShop_CreditItem_C_SetVisibilityExpired Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlatShop_CreditItem.FlatShop_CreditItem_C.SetCreditLack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsLack                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFlatShop_CreditItem_C::SetCreditLack(bool IsLack)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_CreditItem_C", "SetCreditLack");

	Params::FlatShop_CreditItem_C_SetCreditLack Parms{};

	Parms.IsLack = IsLack;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlatShop_CreditItem.FlatShop_CreditItem_C.Get_Caution_ToolTipWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UFlatShop_CreditItem_C::Get_Caution_ToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_CreditItem_C", "Get_Caution_ToolTipWidget_0");

	Params::FlatShop_CreditItem_C_Get_Caution_ToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

