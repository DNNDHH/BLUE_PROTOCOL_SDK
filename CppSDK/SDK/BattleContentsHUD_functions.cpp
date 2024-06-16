#pragma once

 

// Package: BattleContentsHUD

#include "Basic.hpp"

#include "BattleContentsHUD_classes.hpp"
#include "BattleContentsHUD_parameters.hpp"


namespace SDK
{

// Function BattleContentsHUD.BattleContentsHUD_C.InittedHUD__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBattleContentsHUD_C::InittedHUD__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleContentsHUD_C", "InittedHUD__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleContentsHUD.BattleContentsHUD_C.ExecuteUbergraph_BattleContentsHUD
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleContentsHUD_C::ExecuteUbergraph_BattleContentsHUD(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleContentsHUD_C", "ExecuteUbergraph_BattleContentsHUD");

	Params::BattleContentsHUD_C_ExecuteUbergraph_BattleContentsHUD Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleContentsHUD.BattleContentsHUD_C.UnBindDxBattleStart
// (BlueprintCallable, BlueprintEvent)

void UBattleContentsHUD_C::UnBindDxBattleStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleContentsHUD_C", "UnBindDxBattleStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleContentsHUD.BattleContentsHUD_C.DxBattleStartGameDelegate
// (BlueprintCallable, BlueprintEvent)

void UBattleContentsHUD_C::DxBattleStartGameDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleContentsHUD_C", "DxBattleStartGameDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleContentsHUD.BattleContentsHUD_C.BindDxBattleStart
// (BlueprintCallable, BlueprintEvent)

void UBattleContentsHUD_C::BindDxBattleStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleContentsHUD_C", "BindDxBattleStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleContentsHUD.BattleContentsHUD_C.TrySetupCharacterCard
// (BlueprintCallable, BlueprintEvent)

void UBattleContentsHUD_C::TrySetupCharacterCard()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleContentsHUD_C", "TrySetupCharacterCard");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleContentsHUD.BattleContentsHUD_C.BndEvt__BattleContentsHUD_CharacterCardHUD_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
// (BlueprintEvent)

void UBattleContentsHUD_C::BndEvt__BattleContentsHUD_CharacterCardHUD_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleContentsHUD_C", "BndEvt__BattleContentsHUD_CharacterCardHUD_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleContentsHUD.BattleContentsHUD_C.OnUnbind
// (Event, Protected, BlueprintEvent)

void UBattleContentsHUD_C::OnUnbind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleContentsHUD_C", "OnUnbind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleContentsHUD.BattleContentsHUD_C.OnBind
// (Event, Protected, BlueprintEvent)

void UBattleContentsHUD_C::OnBind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleContentsHUD_C", "OnBind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleContentsHUD.BattleContentsHUD_C.MakeHUDEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleContentsHUDType                  Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleContentsHUD_C::MakeHUDEvent(EBattleContentsHUDType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleContentsHUD_C", "MakeHUDEvent");

	Params::BattleContentsHUD_C_MakeHUDEvent Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleContentsHUD.BattleContentsHUD_C.CreatePreviewHUD
// (BlueprintCallable, BlueprintEvent)

void UBattleContentsHUD_C::CreatePreviewHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleContentsHUD_C", "CreatePreviewHUD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleContentsHUD.BattleContentsHUD_C.ChangeVisible
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBUIType                               InUIType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInInstantly                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleContentsHUD_C::ChangeVisible(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleContentsHUD_C", "ChangeVisible");

	Params::BattleContentsHUD_C_ChangeVisible Parms{};

	Parms.InUIType = InUIType;
	Parms.bInVisibility = bInVisibility;
	Parms.bInInstantly = bInInstantly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleContentsHUD.BattleContentsHUD_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleContentsHUD_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleContentsHUD_C", "PreConstruct");

	Params::BattleContentsHUD_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleContentsHUD.BattleContentsHUD_C.OnLoaded_ECE1C1BA4E700CC4BA03EE9564CEDB35
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UBattleContentsHUD_C::OnLoaded_ECE1C1BA4E700CC4BA03EE9564CEDB35(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleContentsHUD_C", "OnLoaded_ECE1C1BA4E700CC4BA03EE9564CEDB35");

	Params::BattleContentsHUD_C_OnLoaded_ECE1C1BA4E700CC4BA03EE9564CEDB35 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleContentsHUD.BattleContentsHUD_C.OnLoaded_6DF30A834378AD2EA639D79963E4E40F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UBattleContentsHUD_C::OnLoaded_6DF30A834378AD2EA639D79963E4E40F(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleContentsHUD_C", "OnLoaded_6DF30A834378AD2EA639D79963E4E40F");

	Params::BattleContentsHUD_C_OnLoaded_6DF30A834378AD2EA639D79963E4E40F Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleContentsHUD.BattleContentsHUD_C.RemovePreview
// (Private, BlueprintCallable, BlueprintEvent)

void UBattleContentsHUD_C::RemovePreview()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleContentsHUD_C", "RemovePreview");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleContentsHUD.BattleContentsHUD_C.GetObj
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleContentsHUDType                  Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftClassPtr<class UClass>             Path                                                   (Parm, OutParm, HasGetValueTypeHash)

void UBattleContentsHUD_C::GetObj(EBattleContentsHUDType Type, TSoftClassPtr<class UClass>* Path)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleContentsHUD_C", "GetObj");

	Params::BattleContentsHUD_C_GetObj Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

	if (Path != nullptr)
		*Path = Parms.Path;
}


// Function BattleContentsHUD.BattleContentsHUD_C.SetupHUD
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBattleContentsHUD_C::SetupHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleContentsHUD_C", "SetupHUD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleContentsHUD.BattleContentsHUD_C.OnInitialize
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UBattleContentsHUD_C::OnInitialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleContentsHUD_C", "OnInitialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleContentsHUD.BattleContentsHUD_C.OnTerminate
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UBattleContentsHUD_C::OnTerminate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleContentsHUD_C", "OnTerminate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleContentsHUD.BattleContentsHUD_C.GetNowContentsHUD
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleContentsHUDType                  Type                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USBContentsHUDBase*               HUD                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleContentsHUD_C::GetNowContentsHUD(EBattleContentsHUDType* Type, class USBContentsHUDBase** HUD)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleContentsHUD_C", "GetNowContentsHUD");

	Params::BattleContentsHUD_C_GetNowContentsHUD Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Type != nullptr)
		*Type = Parms.Type;

	if (HUD != nullptr)
		*HUD = Parms.HUD;
}


// Function BattleContentsHUD.BattleContentsHUD_C.ClearPanel
// (Public, BlueprintCallable, BlueprintEvent)

void UBattleContentsHUD_C::ClearPanel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleContentsHUD_C", "ClearPanel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleContentsHUD.BattleContentsHUD_C.GetCurrentHUD
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UUserWidget* UBattleContentsHUD_C::GetCurrentHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleContentsHUD_C", "GetCurrentHUD");

	Params::BattleContentsHUD_C_GetCurrentHUD Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BattleContentsHUD.BattleContentsHUD_C.SetVisibilityHUD
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    TrueIsVisible                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleContentsHUD_C::SetVisibilityHUD(bool TrueIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleContentsHUD_C", "SetVisibilityHUD");

	Params::BattleContentsHUD_C_SetVisibilityHUD Parms{};

	Parms.TrueIsVisible = TrueIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleContentsHUD.BattleContentsHUD_C.CheckDxBattleStart
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    TrueIsStarted                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattleContentsHUD_C::CheckDxBattleStart(bool* TrueIsStarted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleContentsHUD_C", "CheckDxBattleStart");

	Params::BattleContentsHUD_C_CheckDxBattleStart Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TrueIsStarted != nullptr)
		*TrueIsStarted = Parms.TrueIsStarted;
}

}

