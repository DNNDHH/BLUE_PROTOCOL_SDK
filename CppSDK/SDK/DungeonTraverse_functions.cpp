#pragma once

 

// Package: DungeonTraverse

#include "Basic.hpp"

#include "DungeonTraverse_classes.hpp"
#include "DungeonTraverse_parameters.hpp"


namespace SDK
{

// Function DungeonTraverse.DungeonTraverse_C.ExecuteUbergraph_DungeonTraverse
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDungeonTraverse_C::ExecuteUbergraph_DungeonTraverse(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DungeonTraverse_C", "ExecuteUbergraph_DungeonTraverse");

	Params::DungeonTraverse_C_ExecuteUbergraph_DungeonTraverse Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DungeonTraverse.DungeonTraverse_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDungeonTraverse_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DungeonTraverse_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DungeonTraverse.DungeonTraverse_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnchors                         InAnchors                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FVector2D                        InPosition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        InSize                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDungeonTraverse_C::Setup(const struct FAnchors& InAnchors, const struct FVector2D& InPosition, const struct FVector2D& InSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DungeonTraverse_C", "Setup");

	Params::DungeonTraverse_C_Setup Parms{};

	Parms.InAnchors = std::move(InAnchors);
	Parms.InPosition = std::move(InPosition);
	Parms.InSize = std::move(InSize);

	UObject::ProcessEvent(Func, &Parms);
}


// Function DungeonTraverse.DungeonTraverse_C.SetName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDungeonTraverse_C::SetName(class FName Param_Name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DungeonTraverse_C", "SetName");

	Params::DungeonTraverse_C_SetName Parms{};

	Parms.Param_Name = Param_Name;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DungeonTraverse.DungeonTraverse_C.SetVisibleDebugText
// (Private, BlueprintCallable, BlueprintEvent)

void UDungeonTraverse_C::SetVisibleDebugText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DungeonTraverse_C", "SetVisibleDebugText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DungeonTraverse.DungeonTraverse_C.GetName
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                             Param_Name                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDungeonTraverse_C::GetName(class FName* Param_Name) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DungeonTraverse_C", "GetName");

	Params::DungeonTraverse_C_GetName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Name != nullptr)
		*Param_Name = Parms.Param_Name;
}

}

