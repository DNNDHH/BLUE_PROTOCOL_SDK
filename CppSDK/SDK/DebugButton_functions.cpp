#pragma once

 

// Package: DebugButton

#include "Basic.hpp"

#include "DebugButton_classes.hpp"
#include "DebugButton_parameters.hpp"


namespace SDK
{

// Function DebugButton.DebugButton_C.EventDispatcher_OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDebugButton_C*                   DebugButton                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugButton_C::EventDispatcher_OnClicked__DelegateSignature(class UDebugButton_C* DebugButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugButton_C", "EventDispatcher_OnClicked__DelegateSignature");

	Params::DebugButton_C_EventDispatcher_OnClicked__DelegateSignature Parms{};

	Parms.DebugButton = DebugButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugButton.DebugButton_C.ExecuteUbergraph_DebugButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugButton_C::ExecuteUbergraph_DebugButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugButton_C", "ExecuteUbergraph_DebugButton");

	Params::DebugButton_C_ExecuteUbergraph_DebugButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugButton.DebugButton_C.OnPressOk
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDebugButton_C::OnPressOk()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugButton_C", "OnPressOk");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugButton.DebugButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_454_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDebugButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_454_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugButton_C", "BndEvt__Button_K2Node_ComponentBoundEvent_454_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugButton.DebugButton_C.ExecFunc
// (BlueprintCallable, BlueprintEvent)

void UDebugButton_C::ExecFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugButton_C", "ExecFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugButton.DebugButton_C.OnLostFocus
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDebugButton_C::OnLostFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugButton_C", "OnLostFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugButton.DebugButton_C.OnGetFocus
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDebugButton_C::OnGetFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugButton_C", "OnGetFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugButton.DebugButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDebugButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugButton.DebugButton_C.PushButton
// (BlueprintCallable, BlueprintEvent)

void UDebugButton_C::PushButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugButton_C", "PushButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugButton.DebugButton_C.OnPress_TimeSettingMenuToEvening
// (BlueprintCallable, BlueprintEvent)

void UDebugButton_C::OnPress_TimeSettingMenuToEvening()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugButton_C", "OnPress_TimeSettingMenuToEvening");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugButton.DebugButton_C.OnPress_TimeSettingMenuToNoon
// (BlueprintCallable, BlueprintEvent)

void UDebugButton_C::OnPress_TimeSettingMenuToNoon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugButton_C", "OnPress_TimeSettingMenuToNoon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugButton.DebugButton_C.OnPress_FastTravelMenu_ReturnToCity
// (BlueprintCallable, BlueprintEvent)

void UDebugButton_C::OnPress_FastTravelMenu_ReturnToCity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugButton_C", "OnPress_FastTravelMenu_ReturnToCity");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugButton.DebugButton_C.OnPress_FastTravelMenu_ToTargetPoint
// (BlueprintCallable, BlueprintEvent)

void UDebugButton_C::OnPress_FastTravelMenu_ToTargetPoint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugButton_C", "OnPress_FastTravelMenu_ToTargetPoint");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugButton.DebugButton_C.OnPress_SetResolution
// (BlueprintCallable, BlueprintEvent)

void UDebugButton_C::OnPress_SetResolution()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugButton_C", "OnPress_SetResolution");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugButton.DebugButton_C.OnPress_CommandMenu_WindowMode
// (BlueprintCallable, BlueprintEvent)

void UDebugButton_C::OnPress_CommandMenu_WindowMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugButton_C", "OnPress_CommandMenu_WindowMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugButton.DebugButton_C.OnPress_CommandMenu_FullscreenMode
// (BlueprintCallable, BlueprintEvent)

void UDebugButton_C::OnPress_CommandMenu_FullscreenMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugButton_C", "OnPress_CommandMenu_FullscreenMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugButton.DebugButton_C.OnPress_ReplayDemo
// (BlueprintCallable, BlueprintEvent)

void UDebugButton_C::OnPress_ReplayDemo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugButton_C", "OnPress_ReplayDemo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugButton.DebugButton_C.OnPress_PlayDemo
// (BlueprintCallable, BlueprintEvent)

void UDebugButton_C::OnPress_PlayDemo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugButton_C", "OnPress_PlayDemo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugButton.DebugButton_C.OnPressSetPlayerLocation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           LocationStr                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UDebugButton_C::OnPressSetPlayerLocation(const class FString& LocationStr)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugButton_C", "OnPressSetPlayerLocation");

	Params::DebugButton_C_OnPressSetPlayerLocation Parms{};

	Parms.LocationStr = std::move(LocationStr);

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugButton.DebugButton_C.OnLoaded_EC90BF7741C1C9ADEA6AB9AB7B8B16B9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UDebugButton_C::OnLoaded_EC90BF7741C1C9ADEA6AB9AB7B8B16B9(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugButton_C", "OnLoaded_EC90BF7741C1C9ADEA6AB9AB7B8B16B9");

	Params::DebugButton_C_OnLoaded_EC90BF7741C1C9ADEA6AB9AB7B8B16B9 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugButton.DebugButton_C.OnLoaded_495F650B48822E342FF6D9A376B5922E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UDebugButton_C::OnLoaded_495F650B48822E342FF6D9A376B5922E(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugButton_C", "OnLoaded_495F650B48822E342FF6D9A376B5922E");

	Params::DebugButton_C_OnLoaded_495F650B48822E342FF6D9A376B5922E Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugButton.DebugButton_C.OnLoaded_445800FD409A4EBB9ABB87B77ED6E644
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UDebugButton_C::OnLoaded_445800FD409A4EBB9ABB87B77ED6E644(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugButton_C", "OnLoaded_445800FD409A4EBB9ABB87B77ED6E644");

	Params::DebugButton_C_OnLoaded_445800FD409A4EBB9ABB87B77ED6E644 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugButton.DebugButton_C.LoadSettings
// (Public, BlueprintCallable, BlueprintEvent)

void UDebugButton_C::LoadSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugButton_C", "LoadSettings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugButton.DebugButton_C.SaveSettings
// (Public, BlueprintCallable, BlueprintEvent)

void UDebugButton_C::SaveSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugButton_C", "SaveSettings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugButton.DebugButton_C.ResetSettings
// (Public, BlueprintCallable, BlueprintEvent)

void UDebugButton_C::ResetSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugButton_C", "ResetSettings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DebugButton.DebugButton_C.SetButtonFocus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bFocus                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDebugButton_C::SetButtonFocus(bool bFocus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugButton_C", "SetButtonFocus");

	Params::DebugButton_C_SetButtonFocus Parms{};

	Parms.bFocus = bFocus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugButton.DebugButton_C.GetText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (Parm, OutParm)

void UDebugButton_C::GetText(class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugButton_C", "GetText");

	Params::DebugButton_C_GetText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = std::move(Parms.Text);
}


// Function DebugButton.DebugButton_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UDebugButton_C::SetText(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugButton_C", "SetText");

	Params::DebugButton_C_SetText Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function DebugButton.DebugButton_C.CalcChildMenuPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D                        Position                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugButton_C::CalcChildMenuPosition(struct FVector2D* Position) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugButton_C", "CalcChildMenuPosition");

	Params::DebugButton_C_CalcChildMenuPosition Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Position != nullptr)
		*Position = std::move(Parms.Position);
}

}

