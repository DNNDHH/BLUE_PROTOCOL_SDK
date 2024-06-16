#pragma once

 

// Package: TokenItem

#include "Basic.hpp"

#include "TokenItem_classes.hpp"
#include "TokenItem_parameters.hpp"


namespace SDK
{

// Function TokenItem.TokenItem_C.ExecuteUbergraph_TokenItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTokenItem_C::ExecuteUbergraph_TokenItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenItem_C", "ExecuteUbergraph_TokenItem");

	Params::TokenItem_C_ExecuteUbergraph_TokenItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TokenItem.TokenItem_C.SetExpiredTokenData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMasterToken                     TokenData                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   Param_Amount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                        EndTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTokenItem_C::SetExpiredTokenData(const struct FMasterToken& TokenData, int32 Param_Amount, const struct FDateTime& EndTime, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenItem_C", "SetExpiredTokenData");

	Params::TokenItem_C_SetExpiredTokenData Parms{};

	Parms.TokenData = std::move(TokenData);
	Parms.Param_Amount = Param_Amount;
	Parms.EndTime = std::move(EndTime);
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TokenItem.TokenItem_C.Set Token Data
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMasterToken                     TokenData                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   Param_Amount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                        EndOfTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                        LastRecoveryDate                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USBToken*                         Token                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTokenItem_C::Set_Token_Data(const struct FMasterToken& TokenData, int32 Param_Amount, const struct FDateTime& EndOfTime, const struct FDateTime& LastRecoveryDate, class USBToken* Token, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenItem_C", "Set Token Data");

	Params::TokenItem_C_Set_Token_Data Parms{};

	Parms.TokenData = std::move(TokenData);
	Parms.Param_Amount = Param_Amount;
	Parms.EndOfTime = std::move(EndOfTime);
	Parms.LastRecoveryDate = std::move(LastRecoveryDate);
	Parms.Token = Token;
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TokenItem.TokenItem_C.SetMoneyData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       IconImage                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   Param_Amount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTokenItem_C::SetMoneyData(class UTexture2D* IconImage, const class FString& Param_Name, int32 Param_Amount, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenItem_C", "SetMoneyData");

	Params::TokenItem_C_SetMoneyData Parms{};

	Parms.IconImage = IconImage;
	Parms.Param_Name = std::move(Param_Name);
	Parms.Param_Amount = Param_Amount;
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TokenItem.TokenItem_C.OnLoaded_722B192B4CFD0BB02EAFCDB5FDEB7A4D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTokenItem_C::OnLoaded_722B192B4CFD0BB02EAFCDB5FDEB7A4D(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenItem_C", "OnLoaded_722B192B4CFD0BB02EAFCDB5FDEB7A4D");

	Params::TokenItem_C_OnLoaded_722B192B4CFD0BB02EAFCDB5FDEB7A4D Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TokenItem.TokenItem_C.OnLoaded_D79227434D2250620D435BBAE24D370E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTokenItem_C::OnLoaded_D79227434D2250620D435BBAE24D370E(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenItem_C", "OnLoaded_D79227434D2250620D435BBAE24D370E");

	Params::TokenItem_C_OnLoaded_D79227434D2250620D435BBAE24D370E Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TokenItem.TokenItem_C.GetToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UTokenItem_C::GetToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TokenItem_C", "GetToolTipWidget_0");

	Params::TokenItem_C_GetToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

