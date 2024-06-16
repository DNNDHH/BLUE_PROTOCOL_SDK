#pragma once

 

// Package: WeaponSynthePart_ItemBox

#include "Basic.hpp"

#include "WeaponSynthePart_ItemBox_classes.hpp"
#include "WeaponSynthePart_ItemBox_parameters.hpp"


namespace SDK
{

// Function WeaponSynthePart_ItemBox.WeaponSynthePart_ItemBox_C.ExecuteUbergraph_WeaponSynthePart_ItemBox
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_ItemBox_C::ExecuteUbergraph_WeaponSynthePart_ItemBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_ItemBox_C", "ExecuteUbergraph_WeaponSynthePart_ItemBox");

	Params::WeaponSynthePart_ItemBox_C_ExecuteUbergraph_WeaponSynthePart_ItemBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_ItemBox.WeaponSynthePart_ItemBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWeaponSynthePart_ItemBox_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_ItemBox_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_ItemBox.WeaponSynthePart_ItemBox_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWeaponSynthePart_ItemBox_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_ItemBox_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_ItemBox.WeaponSynthePart_ItemBox_C.Generate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemId                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_ItemBox_C::Generate(const int32 ItemId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_ItemBox_C", "Generate");

	Params::WeaponSynthePart_ItemBox_C_Generate Parms{};

	Parms.ItemId = ItemId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_ItemBox.WeaponSynthePart_ItemBox_C.Create
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWeaponSynthePart_ItemBoxItem_C*  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWeaponSynthePart_ItemBoxItem_C* UWeaponSynthePart_ItemBox_C::Create()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_ItemBox_C", "Create");

	Params::WeaponSynthePart_ItemBox_C_Create Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WeaponSynthePart_ItemBox.WeaponSynthePart_ItemBox_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponSynthePart_ItemBox_C::Clear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_ItemBox_C", "Clear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_ItemBox.WeaponSynthePart_ItemBox_C.GetCreateNum
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UWeaponSynthePart_ItemBox_C::GetCreateNum()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_ItemBox_C", "GetCreateNum");

	Params::WeaponSynthePart_ItemBox_C_GetCreateNum Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

