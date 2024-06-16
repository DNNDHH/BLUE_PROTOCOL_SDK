#pragma once

 

// Package: FishingPlate

#include "Basic.hpp"

#include "FishingPlate_classes.hpp"
#include "FishingPlate_parameters.hpp"


namespace SDK
{

// Function FishingPlate.FishingPlate_C.StartResultPlateAnim__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UFishingPlate_C::StartResultPlateAnim__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FishingPlate_C", "StartResultPlateAnim__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FishingPlate.FishingPlate_C.ExecuteUbergraph_FishingPlate
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFishingPlate_C::ExecuteUbergraph_FishingPlate(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FishingPlate_C", "ExecuteUbergraph_FishingPlate");

	Params::FishingPlate_C_ExecuteUbergraph_FishingPlate Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FishingPlate.FishingPlate_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFishingPlate_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FishingPlate_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FishingPlate.FishingPlate_C.SetFishPlate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           Description                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                                   Length                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Weight                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Show                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   ItemAmount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    New                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    NewRecord                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsBig                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFishingPlate_C::SetFishPlate(const class FString& Param_Name, const class FString& Description, float Length, float Weight, bool Show, int32 ItemAmount, bool New, bool NewRecord, bool IsBig)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FishingPlate_C", "SetFishPlate");

	Params::FishingPlate_C_SetFishPlate Parms{};

	Parms.Param_Name = std::move(Param_Name);
	Parms.Description = std::move(Description);
	Parms.Length = Length;
	Parms.Weight = Weight;
	Parms.Show = Show;
	Parms.ItemAmount = ItemAmount;
	Parms.New = New;
	Parms.NewRecord = NewRecord;
	Parms.IsBig = IsBig;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FishingPlate.FishingPlate_C.IsItemBox
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    TrueIsItemBox                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFishingPlate_C::IsItemBox(const class FString& Param_Name, bool* TrueIsItemBox)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FishingPlate_C", "IsItemBox");

	Params::FishingPlate_C_IsItemBox Parms{};

	Parms.Param_Name = std::move(Param_Name);

	UObject::ProcessEvent(Func, &Parms);

	if (TrueIsItemBox != nullptr)
		*TrueIsItemBox = Parms.TrueIsItemBox;
}


// Function FishingPlate.FishingPlate_C.SwitchItemBox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    TrueIsItemBox                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   ItemAmount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFishingPlate_C::SwitchItemBox(bool TrueIsItemBox, int32 ItemAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FishingPlate_C", "SwitchItemBox");

	Params::FishingPlate_C_SwitchItemBox Parms{};

	Parms.TrueIsItemBox = TrueIsItemBox;
	Parms.ItemAmount = ItemAmount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FishingPlate.FishingPlate_C.Stab_GetSize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    TrueIsBig                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFishingPlate_C::Stab_GetSize(bool* TrueIsBig)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FishingPlate_C", "Stab_GetSize");

	Params::FishingPlate_C_Stab_GetSize Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TrueIsBig != nullptr)
		*TrueIsBig = Parms.TrueIsBig;
}


// Function FishingPlate.FishingPlate_C.Set Big Small
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsBig                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFishingPlate_C::Set_Big_Small(bool IsBig)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FishingPlate_C", "Set Big Small");

	Params::FishingPlate_C_Set_Big_Small Parms{};

	Parms.IsBig = IsBig;

	UObject::ProcessEvent(Func, &Parms);
}

}

