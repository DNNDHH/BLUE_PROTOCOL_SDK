#pragma once

 

// Package: SkillTree_SkillIconBase

#include "Basic.hpp"

#include "SkillTree_SkillIconBase_classes.hpp"
#include "SkillTree_SkillIconBase_parameters.hpp"


namespace SDK
{

// Function SkillTree_SkillIconBase.SkillTree_SkillIconBase_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_SkillId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillTree_SkillIconBase_C::OnClicked__DelegateSignature(int32 Param_SkillId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillTree_SkillIconBase_C", "OnClicked__DelegateSignature");

	Params::SkillTree_SkillIconBase_C_OnClicked__DelegateSignature Parms{};

	Parms.Param_SkillId = Param_SkillId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillTree_SkillIconBase.SkillTree_SkillIconBase_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_SkillId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillTree_SkillIconBase_C::OnHovered__DelegateSignature(int32 Param_SkillId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillTree_SkillIconBase_C", "OnHovered__DelegateSignature");

	Params::SkillTree_SkillIconBase_C_OnHovered__DelegateSignature Parms{};

	Parms.Param_SkillId = Param_SkillId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillTree_SkillIconBase.SkillTree_SkillIconBase_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_SkillId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillTree_SkillIconBase_C::OnUnhovered__DelegateSignature(int32 Param_SkillId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillTree_SkillIconBase_C", "OnUnhovered__DelegateSignature");

	Params::SkillTree_SkillIconBase_C_OnUnhovered__DelegateSignature Parms{};

	Parms.Param_SkillId = Param_SkillId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillTree_SkillIconBase.SkillTree_SkillIconBase_C.ExecuteUbergraph_SkillTree_SkillIconBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillTree_SkillIconBase_C::ExecuteUbergraph_SkillTree_SkillIconBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillTree_SkillIconBase_C", "ExecuteUbergraph_SkillTree_SkillIconBase");

	Params::SkillTree_SkillIconBase_C_ExecuteUbergraph_SkillTree_SkillIconBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillTree_SkillIconBase.SkillTree_SkillIconBase_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USkillTree_SkillIconBase_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillTree_SkillIconBase_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillTree_SkillIconBase.SkillTree_SkillIconBase_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsPassive                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Param_SkillId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_SkillLevel                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillTree_SkillIconBase_C::Init(bool IsPassive, int32 Param_SkillId, int32 Param_SkillLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillTree_SkillIconBase_C", "Init");

	Params::SkillTree_SkillIconBase_C_Init Parms{};

	Parms.IsPassive = IsPassive;
	Parms.Param_SkillId = Param_SkillId;
	Parms.Param_SkillLevel = Param_SkillLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillTree_SkillIconBase.SkillTree_SkillIconBase_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USkillTree_SkillIconBase_C::Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillTree_SkillIconBase_C", "Update");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillTree_SkillIconBase.SkillTree_SkillIconBase_C.UpdateSimple
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USkillTree_SkillIconBase_C::UpdateSimple()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillTree_SkillIconBase_C", "UpdateSimple");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillTree_SkillIconBase.SkillTree_SkillIconBase_C.SetEquipmentIconVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillTree_SkillIconBase_C::SetEquipmentIconVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillTree_SkillIconBase_C", "SetEquipmentIconVisible");

	Params::SkillTree_SkillIconBase_C_SetEquipmentIconVisible Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}

}

