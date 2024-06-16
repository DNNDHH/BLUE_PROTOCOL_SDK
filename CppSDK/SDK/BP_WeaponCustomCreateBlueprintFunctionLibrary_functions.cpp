#pragma once

 

// Package: BP_WeaponCustomCreateBlueprintFunctionLibrary

#include "Basic.hpp"

#include "BP_WeaponCustomCreateBlueprintFunctionLibrary_classes.hpp"
#include "BP_WeaponCustomCreateBlueprintFunctionLibrary_parameters.hpp"


namespace SDK
{

// Function BP_WeaponCustomCreateBlueprintFunctionLibrary.BP_WeaponCustomCreateBlueprintFunctionLibrary_C.CreateWeaponCustomMenuSynthe
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Param_Class                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      Widget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_WeaponCustomCreateBlueprintFunctionLibrary_C::CreateWeaponCustomMenuSynthe(class UClass* Param_Class, class UObject* __WorldContext, class UUserWidget** Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_WeaponCustomCreateBlueprintFunctionLibrary_C", "CreateWeaponCustomMenuSynthe");

	Params::BP_WeaponCustomCreateBlueprintFunctionLibrary_C_CreateWeaponCustomMenuSynthe Parms{};

	Parms.Param_Class = Param_Class;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;
}


// Function BP_WeaponCustomCreateBlueprintFunctionLibrary.BP_WeaponCustomCreateBlueprintFunctionLibrary_C.CreateWeaponCustomMenuExtender
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Param_Class                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      Widget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_WeaponCustomCreateBlueprintFunctionLibrary_C::CreateWeaponCustomMenuExtender(class UClass* Param_Class, class UObject* __WorldContext, class UUserWidget** Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_WeaponCustomCreateBlueprintFunctionLibrary_C", "CreateWeaponCustomMenuExtender");

	Params::BP_WeaponCustomCreateBlueprintFunctionLibrary_C_CreateWeaponCustomMenuExtender Parms{};

	Parms.Param_Class = Param_Class;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;
}


// Function BP_WeaponCustomCreateBlueprintFunctionLibrary.BP_WeaponCustomCreateBlueprintFunctionLibrary_C.CreateWeaponCustomMenuTuning
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Param_Class                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      Widget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_WeaponCustomCreateBlueprintFunctionLibrary_C::CreateWeaponCustomMenuTuning(class UClass* Param_Class, class UObject* __WorldContext, class UUserWidget** Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_WeaponCustomCreateBlueprintFunctionLibrary_C", "CreateWeaponCustomMenuTuning");

	Params::BP_WeaponCustomCreateBlueprintFunctionLibrary_C_CreateWeaponCustomMenuTuning Parms{};

	Parms.Param_Class = Param_Class;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;
}


// Function BP_WeaponCustomCreateBlueprintFunctionLibrary.BP_WeaponCustomCreateBlueprintFunctionLibrary_C.CreateWeaponCustomMenuRemove
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Param_Class                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      Widget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_WeaponCustomCreateBlueprintFunctionLibrary_C::CreateWeaponCustomMenuRemove(class UClass* Param_Class, class UObject* __WorldContext, class UUserWidget** Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_WeaponCustomCreateBlueprintFunctionLibrary_C", "CreateWeaponCustomMenuRemove");

	Params::BP_WeaponCustomCreateBlueprintFunctionLibrary_C_CreateWeaponCustomMenuRemove Parms{};

	Parms.Param_Class = Param_Class;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;
}

}

