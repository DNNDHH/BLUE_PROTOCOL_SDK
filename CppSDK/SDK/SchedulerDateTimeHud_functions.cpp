#pragma once

 

// Package: SchedulerDateTimeHud

#include "Basic.hpp"

#include "SchedulerDateTimeHud_classes.hpp"
#include "SchedulerDateTimeHud_parameters.hpp"


namespace SDK
{

// Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.ExecuteUbergraph_SchedulerDateTimeHud
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USchedulerDateTimeHud_C::ExecuteUbergraph_SchedulerDateTimeHud(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SchedulerDateTimeHud_C", "ExecuteUbergraph_SchedulerDateTimeHud");

	Params::SchedulerDateTimeHud_C_ExecuteUbergraph_SchedulerDateTimeHud Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USchedulerDateTimeHud_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SchedulerDateTimeHud_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.UnbindDebugValueChanged
// (BlueprintCallable, BlueprintEvent)

void USchedulerDateTimeHud_C::UnbindDebugValueChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SchedulerDateTimeHud_C", "UnbindDebugValueChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.TimerUpaateEvent
// (BlueprintCallable, BlueprintEvent)

void USchedulerDateTimeHud_C::TimerUpaateEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SchedulerDateTimeHud_C", "TimerUpaateEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.OnDebugValueChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBDebugMenuType                        MenuType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             RowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USchedulerDateTimeHud_C::OnDebugValueChanged(ESBDebugMenuType MenuType, class FName RowName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SchedulerDateTimeHud_C", "OnDebugValueChanged");

	Params::SchedulerDateTimeHud_C_OnDebugValueChanged Parms{};

	Parms.MenuType = MenuType;
	Parms.RowName = RowName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.BindDebugValueChanged
// (BlueprintCallable, BlueprintEvent)

void USchedulerDateTimeHud_C::BindDebugValueChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SchedulerDateTimeHud_C", "BindDebugValueChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USchedulerDateTimeHud_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SchedulerDateTimeHud_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.Show
// (Public, BlueprintCallable, BlueprintEvent)

void USchedulerDateTimeHud_C::Show()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SchedulerDateTimeHud_C", "Show");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.Close
// (Public, BlueprintCallable, BlueprintEvent)

void USchedulerDateTimeHud_C::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SchedulerDateTimeHud_C", "Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.Update
// (Public, BlueprintCallable, BlueprintEvent)

void USchedulerDateTimeHud_C::Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SchedulerDateTimeHud_C", "Update");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.update_NowDate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBPlayerVirtualDateTimeComponent*InDateTimeComp                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USchedulerDateTimeHud_C::Update_NowDate(class USBPlayerVirtualDateTimeComponent* InDateTimeComp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SchedulerDateTimeHud_C", "update_NowDate");

	Params::SchedulerDateTimeHud_C_Update_NowDate Parms{};

	Parms.InDateTimeComp = InDateTimeComp;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.update_VirtualDate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBPlayerVirtualDateTimeComponent*InDateTimeComp                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USchedulerDateTimeHud_C::Update_VirtualDate(class USBPlayerVirtualDateTimeComponent* InDateTimeComp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SchedulerDateTimeHud_C", "update_VirtualDate");

	Params::SchedulerDateTimeHud_C_Update_VirtualDate Parms{};

	Parms.InDateTimeComp = InDateTimeComp;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.update_VirtualDateStart
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBPlayerVirtualDateTimeComponent*InDateTimeComp                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USchedulerDateTimeHud_C::Update_VirtualDateStart(class USBPlayerVirtualDateTimeComponent* InDateTimeComp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SchedulerDateTimeHud_C", "update_VirtualDateStart");

	Params::SchedulerDateTimeHud_C_Update_VirtualDateStart Parms{};

	Parms.InDateTimeComp = InDateTimeComp;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.update_DateTime
// (Public, BlueprintCallable, BlueprintEvent)

void USchedulerDateTimeHud_C::Update_DateTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SchedulerDateTimeHud_C", "update_DateTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.IsShow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsShow                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USchedulerDateTimeHud_C::IsShow(bool* Param_IsShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SchedulerDateTimeHud_C", "IsShow");

	Params::SchedulerDateTimeHud_C_IsShow Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsShow != nullptr)
		*Param_IsShow = Parms.Param_IsShow;
}


// Function SchedulerDateTimeHud.SchedulerDateTimeHud_C.update_OpenClose
// (Public, BlueprintCallable, BlueprintEvent)

void USchedulerDateTimeHud_C::Update_OpenClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SchedulerDateTimeHud_C", "update_OpenClose");

	UObject::ProcessEvent(Func, nullptr);
}

}

