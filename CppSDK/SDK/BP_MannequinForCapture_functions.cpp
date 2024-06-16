#pragma once

 

// Package: BP_MannequinForCapture

#include "Basic.hpp"

#include "BP_MannequinForCapture_classes.hpp"
#include "BP_MannequinForCapture_parameters.hpp"


namespace SDK
{

// Function BP_MannequinForCapture.BP_MannequinForCapture_C.ExecuteUbergraph_BP_MannequinForCapture
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MannequinForCapture_C::ExecuteUbergraph_BP_MannequinForCapture(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MannequinForCapture_C", "ExecuteUbergraph_BP_MannequinForCapture");

	Params::BP_MannequinForCapture_C_ExecuteUbergraph_BP_MannequinForCapture Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MannequinForCapture.BP_MannequinForCapture_C.SetMannequinType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsMale                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MannequinForCapture_C::SetMannequinType(bool IsMale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MannequinForCapture_C", "SetMannequinType");

	Params::BP_MannequinForCapture_C_SetMannequinType Parms{};

	Parms.IsMale = IsMale;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MannequinForCapture.BP_MannequinForCapture_C.SetCostumeToMannequin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InCostumeItemId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsOwnItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   InOwnCostumeColorIndex                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InOwnCostumeColorS                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InOwnCostumeColorV                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InOwnCostumeMaterialId                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MannequinForCapture_C::SetCostumeToMannequin(int32 InCostumeItemId, bool IsOwnItem, int32 InOwnCostumeColorIndex, const int32 InOwnCostumeColorS, int32 InOwnCostumeColorV, int32 InOwnCostumeMaterialId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MannequinForCapture_C", "SetCostumeToMannequin");

	Params::BP_MannequinForCapture_C_SetCostumeToMannequin Parms{};

	Parms.InCostumeItemId = InCostumeItemId;
	Parms.IsOwnItem = IsOwnItem;
	Parms.InOwnCostumeColorIndex = InOwnCostumeColorIndex;
	Parms.InOwnCostumeColorS = InOwnCostumeColorS;
	Parms.InOwnCostumeColorV = InOwnCostumeColorV;
	Parms.InOwnCostumeMaterialId = InOwnCostumeMaterialId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MannequinForCapture.BP_MannequinForCapture_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MannequinForCapture_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MannequinForCapture_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MannequinForCapture.BP_MannequinForCapture_C.UpdateMannequin
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MannequinForCapture_C::UpdateMannequin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MannequinForCapture_C", "UpdateMannequin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MannequinForCapture.BP_MannequinForCapture_C.ResetMannequin
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MannequinForCapture_C::ResetMannequin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MannequinForCapture_C", "ResetMannequin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MannequinForCapture.BP_MannequinForCapture_C.UpdateAnimChange
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InCostumeItemId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutAnimChange                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MannequinForCapture_C::UpdateAnimChange(int32 InCostumeItemId, bool* OutAnimChange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MannequinForCapture_C", "UpdateAnimChange");

	Params::BP_MannequinForCapture_C_UpdateAnimChange Parms{};

	Parms.InCostumeItemId = InCostumeItemId;

	UObject::ProcessEvent(Func, &Parms);

	if (OutAnimChange != nullptr)
		*OutAnimChange = Parms.OutAnimChange;
}

}

