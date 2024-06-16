#pragma once

 

// Package: MyCharaMenu_Drink

#include "Basic.hpp"

#include "MyCharaMenu_Drink_classes.hpp"
#include "MyCharaMenu_Drink_parameters.hpp"


namespace SDK
{

// Function MyCharaMenu_Drink.MyCharaMenu_Drink_C.ExecuteUbergraph_MyCharaMenu_Drink
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_Drink_C::ExecuteUbergraph_MyCharaMenu_Drink(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Drink_C", "ExecuteUbergraph_MyCharaMenu_Drink");

	Params::MyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_Drink.MyCharaMenu_Drink_C.Add NonActive Param
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_Drink_C::Add_NonActive_Param(const class FText& Param_Name, float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Drink_C", "Add NonActive Param");

	Params::MyCharaMenu_Drink_C_Add_NonActive_Param Parms{};

	Parms.Param_Name = std::move(Param_Name);
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_Drink.MyCharaMenu_Drink_C.Add Active Param
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBLiquidMemoryEfficacyValueType        EffucaryValueType                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_Drink_C::Add_Active_Param(const class FText& Param_Name, float Value, ESBLiquidMemoryEfficacyValueType EffucaryValueType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Drink_C", "Add Active Param");

	Params::MyCharaMenu_Drink_C_Add_Active_Param Parms{};

	Parms.Param_Name = std::move(Param_Name);
	Parms.Value = Value;
	Parms.EffucaryValueType = EffucaryValueType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_Drink.MyCharaMenu_Drink_C.Update LiquidMemoryData
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_Drink_C::Update_LiquidMemoryData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Drink_C", "Update LiquidMemoryData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Drink.MyCharaMenu_Drink_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMyCharaMenu_Drink_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Drink_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

