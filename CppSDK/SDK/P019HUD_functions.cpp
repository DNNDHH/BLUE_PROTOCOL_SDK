#pragma once

 

// Package: P019HUD

#include "Basic.hpp"

#include "P019HUD_classes.hpp"
#include "P019HUD_parameters.hpp"


namespace SDK
{

// Function P019HUD.P019HUD_C.ExecuteUbergraph_P019HUD
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UP019HUD_C::ExecuteUbergraph_P019HUD(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P019HUD_C", "ExecuteUbergraph_P019HUD");

	Params::P019HUD_C_ExecuteUbergraph_P019HUD Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P019HUD.P019HUD_C.UnbindVisibleSetting
// (BlueprintCallable, BlueprintEvent)

void UP019HUD_C::UnbindVisibleSetting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P019HUD_C", "UnbindVisibleSetting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P019HUD.P019HUD_C.BindVisibleSetting
// (BlueprintCallable, BlueprintEvent)

void UP019HUD_C::BindVisibleSetting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P019HUD_C", "BindVisibleSetting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P019HUD.P019HUD_C.OnChangeUIVisibleSetting
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBUIType                               InUIType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInInstantly                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UP019HUD_C::OnChangeUIVisibleSetting(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P019HUD_C", "OnChangeUIVisibleSetting");

	Params::P019HUD_C_OnChangeUIVisibleSetting Parms{};

	Parms.InUIType = InUIType;
	Parms.bInVisibility = bInVisibility;
	Parms.bInInstantly = bInInstantly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P019HUD.P019HUD_C.UnbindOnSaveEquippedPassiveArts
// (BlueprintCallable, BlueprintEvent)

void UP019HUD_C::UnbindOnSaveEquippedPassiveArts()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P019HUD_C", "UnbindOnSaveEquippedPassiveArts");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P019HUD.P019HUD_C.BindOnSaveEquippedPassiveArts
// (BlueprintCallable, BlueprintEvent)

void UP019HUD_C::BindOnSaveEquippedPassiveArts()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P019HUD_C", "BindOnSaveEquippedPassiveArts");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P019HUD.P019HUD_C.OnSaveEquippedPassiveArtsDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UP019HUD_C::OnSaveEquippedPassiveArtsDelegate(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P019HUD_C", "OnSaveEquippedPassiveArtsDelegate");

	Params::P019HUD_C_OnSaveEquippedPassiveArtsDelegate Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P019HUD.P019HUD_C.OnInitCartridgeList
// (Private, BlueprintCallable, BlueprintEvent)

void UP019HUD_C::OnInitCartridgeList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P019HUD_C", "OnInitCartridgeList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P019HUD.P019HUD_C.OnInitAdditionalCartridgeList
// (Private, BlueprintCallable, BlueprintEvent)

void UP019HUD_C::OnInitAdditionalCartridgeList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P019HUD_C", "OnInitAdditionalCartridgeList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P019HUD.P019HUD_C.OnUpdateAdditionalCartridge
// (Private, BlueprintCallable, BlueprintEvent)

void UP019HUD_C::OnUpdateAdditionalCartridge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P019HUD_C", "OnUpdateAdditionalCartridge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P019HUD.P019HUD_C.OnSetMaxCartridge
// (Private, BlueprintCallable, BlueprintEvent)

void UP019HUD_C::OnSetMaxCartridge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P019HUD_C", "OnSetMaxCartridge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P019HUD.P019HUD_C.DebugPrintFunc
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UP019HUD_C::DebugPrintFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P019HUD_C", "DebugPrintFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P019HUD.P019HUD_C.PlayAnimForwardInOut
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP019HUD_C::PlayAnimForwardInOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P019HUD_C", "PlayAnimForwardInOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P019HUD.P019HUD_C.PlayAnimReverseInOut
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP019HUD_C::PlayAnimReverseInOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P019HUD_C", "PlayAnimReverseInOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P019HUD.P019HUD_C.OnBind
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP019HUD_C::OnBind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P019HUD_C", "OnBind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P019HUD.P019HUD_C.OnUnbind
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP019HUD_C::OnUnbind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P019HUD_C", "OnUnbind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P019HUD.P019HUD_C.OnInitialize
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP019HUD_C::OnInitialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P019HUD_C", "OnInitialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P019HUD.P019HUD_C.OnTerminate
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UP019HUD_C::OnTerminate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P019HUD_C", "OnTerminate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function P019HUD.P019HUD_C.OnSetEditMode
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsEdit                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UP019HUD_C::OnSetEditMode(bool InIsEdit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P019HUD_C", "OnSetEditMode");

	Params::P019HUD_C_OnSetEditMode Parms{};

	Parms.InIsEdit = InIsEdit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function P019HUD.P019HUD_C.VisibleCartridge
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_CartridgeNum                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    PowerBulletActive                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    HealBulletActive                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UP019HUD_C::VisibleCartridge(int32 Param_CartridgeNum, bool PowerBulletActive, bool HealBulletActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("P019HUD_C", "VisibleCartridge");

	Params::P019HUD_C_VisibleCartridge Parms{};

	Parms.Param_CartridgeNum = Param_CartridgeNum;
	Parms.PowerBulletActive = PowerBulletActive;
	Parms.HealBulletActive = HealBulletActive;

	UObject::ProcessEvent(Func, &Parms);
}

}

