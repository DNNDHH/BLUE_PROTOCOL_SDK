#pragma once

 

// Package: MountShortcutIcon

#include "Basic.hpp"

#include "MountShortcutIcon_classes.hpp"
#include "MountShortcutIcon_parameters.hpp"


namespace SDK
{

// Function MountShortcutIcon.MountShortcutIcon_C.ExecuteUbergraph_MountShortcutIcon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMountShortcutIcon_C::ExecuteUbergraph_MountShortcutIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountShortcutIcon_C", "ExecuteUbergraph_MountShortcutIcon");

	Params::MountShortcutIcon_C_ExecuteUbergraph_MountShortcutIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MountShortcutIcon.MountShortcutIcon_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMountShortcutIcon_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountShortcutIcon_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountShortcutIcon.MountShortcutIcon_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMountShortcutIcon_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountShortcutIcon_C", "Tick");

	Params::MountShortcutIcon_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MountShortcutIcon.MountShortcutIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMountShortcutIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountShortcutIcon_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountShortcutIcon.MountShortcutIcon_C.BndEvt__MountShortcutIcon_txtKey_K2Node_ComponentBoundEvent_2_OnUpdateKeyConfig__DelegateSignature
// (BlueprintEvent)

void UMountShortcutIcon_C::BndEvt__MountShortcutIcon_txtKey_K2Node_ComponentBoundEvent_2_OnUpdateKeyConfig__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountShortcutIcon_C", "BndEvt__MountShortcutIcon_txtKey_K2Node_ComponentBoundEvent_2_OnUpdateKeyConfig__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountShortcutIcon.MountShortcutIcon_C.BndEvt__MountShortcutIcon_txtKey_K2Node_ComponentBoundEvent_1_OnChangePadSkinType__DelegateSignature
// (BlueprintEvent)

void UMountShortcutIcon_C::BndEvt__MountShortcutIcon_txtKey_K2Node_ComponentBoundEvent_1_OnChangePadSkinType__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountShortcutIcon_C", "BndEvt__MountShortcutIcon_txtKey_K2Node_ComponentBoundEvent_1_OnChangePadSkinType__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountShortcutIcon.MountShortcutIcon_C.BndEvt__MountShortcutIcon_txtKey_K2Node_ComponentBoundEvent_0_OnUpdateOperationMode__DelegateSignature
// (BlueprintEvent)

void UMountShortcutIcon_C::BndEvt__MountShortcutIcon_txtKey_K2Node_ComponentBoundEvent_0_OnUpdateOperationMode__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountShortcutIcon_C", "BndEvt__MountShortcutIcon_txtKey_K2Node_ComponentBoundEvent_0_OnUpdateOperationMode__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountShortcutIcon.MountShortcutIcon_C.UpdateInterval
// (Public, BlueprintCallable, BlueprintEvent)

void UMountShortcutIcon_C::UpdateInterval()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountShortcutIcon_C", "UpdateInterval");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountShortcutIcon.MountShortcutIcon_C.UpdateKeyText
// (Public, BlueprintCallable, BlueprintEvent)

void UMountShortcutIcon_C::UpdateKeyText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountShortcutIcon_C", "UpdateKeyText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountShortcutIcon.MountShortcutIcon_C.PlayAnimChargeEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UMountShortcutIcon_C::PlayAnimChargeEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountShortcutIcon_C", "PlayAnimChargeEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountShortcutIcon.MountShortcutIcon_C.UpdateIconTexture
// (Public, BlueprintCallable, BlueprintEvent)

void UMountShortcutIcon_C::UpdateIconTexture()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountShortcutIcon_C", "UpdateIconTexture");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MountShortcutIcon.MountShortcutIcon_C.PlayAnimInOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bin                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMountShortcutIcon_C::PlayAnimInOut(bool bin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountShortcutIcon_C", "PlayAnimInOut");

	Params::MountShortcutIcon_C_PlayAnimInOut Parms{};

	Parms.bin = bin;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MountShortcutIcon.MountShortcutIcon_C.SetSwitch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMountShortcutIcon_C::SetSwitch(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountShortcutIcon_C", "SetSwitch");

	Params::MountShortcutIcon_C_SetSwitch Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MountShortcutIcon.MountShortcutIcon_C.CheckSwitchIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMountShortcutIcon_C::CheckSwitchIndex(int32 Param_Index, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountShortcutIcon_C", "CheckSwitchIndex");

	Params::MountShortcutIcon_C_CheckSwitchIndex Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}

}

