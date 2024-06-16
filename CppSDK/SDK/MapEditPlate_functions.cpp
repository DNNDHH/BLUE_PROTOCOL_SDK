#pragma once

 

// Package: MapEditPlate

#include "Basic.hpp"

#include "MapEditPlate_classes.hpp"
#include "MapEditPlate_parameters.hpp"


namespace SDK
{

// Function MapEditPlate.MapEditPlate_C.ExecuteUbergraph_MapEditPlate
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapEditPlate_C::ExecuteUbergraph_MapEditPlate(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditPlate_C", "ExecuteUbergraph_MapEditPlate");

	Params::MapEditPlate_C_ExecuteUbergraph_MapEditPlate Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapEditPlate.MapEditPlate_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMapEditPlate_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditPlate_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapEditPlate.MapEditPlate_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMapEditPlate_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditPlate_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapEditPlate.MapEditPlate_C.BndEvt__MapEditPlate_TextKey_K2Node_ComponentBoundEvent_2_OnUpdateKeyConfig__DelegateSignature
// (BlueprintEvent)

void UMapEditPlate_C::BndEvt__MapEditPlate_TextKey_K2Node_ComponentBoundEvent_2_OnUpdateKeyConfig__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditPlate_C", "BndEvt__MapEditPlate_TextKey_K2Node_ComponentBoundEvent_2_OnUpdateKeyConfig__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapEditPlate.MapEditPlate_C.BndEvt__MapEditPlate_TextKey_K2Node_ComponentBoundEvent_1_OnChangePadSkinType__DelegateSignature
// (BlueprintEvent)

void UMapEditPlate_C::BndEvt__MapEditPlate_TextKey_K2Node_ComponentBoundEvent_1_OnChangePadSkinType__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditPlate_C", "BndEvt__MapEditPlate_TextKey_K2Node_ComponentBoundEvent_1_OnChangePadSkinType__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapEditPlate.MapEditPlate_C.BndEvt__MapEditPlate_TextKey_K2Node_ComponentBoundEvent_0_OnUpdateOperationMode__DelegateSignature
// (BlueprintEvent)

void UMapEditPlate_C::BndEvt__MapEditPlate_TextKey_K2Node_ComponentBoundEvent_0_OnUpdateOperationMode__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditPlate_C", "BndEvt__MapEditPlate_TextKey_K2Node_ComponentBoundEvent_0_OnUpdateOperationMode__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapEditPlate.MapEditPlate_C.SetText
// (Private, BlueprintCallable, BlueprintEvent)

void UMapEditPlate_C::SetText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditPlate_C", "SetText");

	UObject::ProcessEvent(Func, nullptr);
}

}

