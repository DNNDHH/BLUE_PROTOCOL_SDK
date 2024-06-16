#pragma once

 

// Package: WholeMapWidget

#include "Basic.hpp"

#include "WholeMapWidget_classes.hpp"
#include "WholeMapWidget_parameters.hpp"


namespace SDK
{

// Function WholeMapWidget.WholeMapWidget_C.OnOpenEditWindow__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWholeMapWidget_C::OnOpenEditWindow__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapWidget_C", "OnOpenEditWindow__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WholeMapWidget.WholeMapWidget_C.OnCloseEditWindow__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWholeMapWidget_C::OnCloseEditWindow__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapWidget_C", "OnCloseEditWindow__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WholeMapWidget.WholeMapWidget_C.ExecuteUbergraph_WholeMapWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWholeMapWidget_C::ExecuteUbergraph_WholeMapWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapWidget_C", "ExecuteUbergraph_WholeMapWidget");

	Params::WholeMapWidget_C_ExecuteUbergraph_WholeMapWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WholeMapWidget.WholeMapWidget_C.LoadBG
// (Event, Protected, BlueprintEvent)

void UWholeMapWidget_C::LoadBG()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapWidget_C", "LoadBG");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WholeMapWidget.WholeMapWidget_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWholeMapWidget_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapWidget_C", "OnAnimationFinished");

	Params::WholeMapWidget_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WholeMapWidget.WholeMapWidget_C.UnbindEdit
// (BlueprintCallable, BlueprintEvent)

void UWholeMapWidget_C::UnbindEdit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapWidget_C", "UnbindEdit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WholeMapWidget.WholeMapWidget_C.BindEdit
// (BlueprintCallable, BlueprintEvent)

void UWholeMapWidget_C::BindEdit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapWidget_C", "BindEdit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WholeMapWidget.WholeMapWidget_C.OnPinChecked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWholeMapWidget_C::OnPinChecked(bool IsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapWidget_C", "OnPinChecked");

	Params::WholeMapWidget_C_OnPinChecked Parms{};

	Parms.IsChecked = IsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WholeMapWidget.WholeMapWidget_C.OnOutAnim
// (BlueprintCallable, BlueprintEvent)

void UWholeMapWidget_C::OnOutAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapWidget_C", "OnOutAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WholeMapWidget.WholeMapWidget_C.OnInAnim
// (BlueprintCallable, BlueprintEvent)

void UWholeMapWidget_C::OnInAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapWidget_C", "OnInAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WholeMapWidget.WholeMapWidget_C.OnReset
// (BlueprintCallable, BlueprintEvent)

void UWholeMapWidget_C::OnReset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapWidget_C", "OnReset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WholeMapWidget.WholeMapWidget_C.CloseEditWindow
// (BlueprintCallable, BlueprintEvent)

void UWholeMapWidget_C::CloseEditWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapWidget_C", "CloseEditWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WholeMapWidget.WholeMapWidget_C.OnWindowSizeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Number                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWholeMapWidget_C::OnWindowSizeChanged(int32 Number)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapWidget_C", "OnWindowSizeChanged");

	Params::WholeMapWidget_C_OnWindowSizeChanged Parms{};

	Parms.Number = Number;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WholeMapWidget.WholeMapWidget_C.OnIconSizeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWholeMapWidget_C::OnIconSizeChanged(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapWidget_C", "OnIconSizeChanged");

	Params::WholeMapWidget_C_OnIconSizeChanged Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WholeMapWidget.WholeMapWidget_C.OnBGAlphaChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWholeMapWidget_C::OnBGAlphaChanged(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapWidget_C", "OnBGAlphaChanged");

	Params::WholeMapWidget_C_OnBGAlphaChanged Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WholeMapWidget.WholeMapWidget_C.OnZoom
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Zoom                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWholeMapWidget_C::OnZoom(float Zoom)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapWidget_C", "OnZoom");

	Params::WholeMapWidget_C_OnZoom Parms{};

	Parms.Zoom = Zoom;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WholeMapWidget.WholeMapWidget_C.OpenEditWindow
// (BlueprintCallable, BlueprintEvent)

void UWholeMapWidget_C::OpenEditWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapWidget_C", "OpenEditWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WholeMapWidget.WholeMapWidget_C.UpdateTraverse
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWholeMapWidget_C::UpdateTraverse(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapWidget_C", "UpdateTraverse");

	Params::WholeMapWidget_C_UpdateTraverse Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WholeMapWidget.WholeMapWidget_C.UnbindTraverseDelegate
// (BlueprintCallable, BlueprintEvent)

void UWholeMapWidget_C::UnbindTraverseDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapWidget_C", "UnbindTraverseDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WholeMapWidget.WholeMapWidget_C.BindTraverseDelegate
// (BlueprintCallable, BlueprintEvent)

void UWholeMapWidget_C::BindTraverseDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapWidget_C", "BindTraverseDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WholeMapWidget.WholeMapWidget_C.UnbindVisibleSettingChangeDelegate
// (BlueprintCallable, BlueprintEvent)

void UWholeMapWidget_C::UnbindVisibleSettingChangeDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapWidget_C", "UnbindVisibleSettingChangeDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WholeMapWidget.WholeMapWidget_C.UIVisibleSettingChangeDelegate_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBUIType                               InUIType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInInstantly                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWholeMapWidget_C::UIVisibleSettingChangeDelegate_Event_0(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapWidget_C", "UIVisibleSettingChangeDelegate_Event_0");

	Params::WholeMapWidget_C_UIVisibleSettingChangeDelegate_Event_0 Parms{};

	Parms.InUIType = InUIType;
	Parms.bInVisibility = bInVisibility;
	Parms.bInInstantly = bInInstantly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WholeMapWidget.WholeMapWidget_C.BindVisibleSettingChangeDelegate
// (BlueprintCallable, BlueprintEvent)

void UWholeMapWidget_C::BindVisibleSettingChangeDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapWidget_C", "BindVisibleSettingChangeDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WholeMapWidget.WholeMapWidget_C.OnLoaded_2CCDB2684036170C3D919597C7222B2A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWholeMapWidget_C::OnLoaded_2CCDB2684036170C3D919597C7222B2A(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapWidget_C", "OnLoaded_2CCDB2684036170C3D919597C7222B2A");

	Params::WholeMapWidget_C_OnLoaded_2CCDB2684036170C3D919597C7222B2A Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WholeMapWidget.WholeMapWidget_C.OnBind
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWholeMapWidget_C::OnBind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapWidget_C", "OnBind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WholeMapWidget.WholeMapWidget_C.OnUnbind
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWholeMapWidget_C::OnUnbind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapWidget_C", "OnUnbind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WholeMapWidget.WholeMapWidget_C.OnCreateWholeMapEditWindow
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWholeMapWidget_C::OnCreateWholeMapEditWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapWidget_C", "OnCreateWholeMapEditWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WholeMapWidget.WholeMapWidget_C.OnDeleteWholeMapEditWindow
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWholeMapWidget_C::OnDeleteWholeMapEditWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapWidget_C", "OnDeleteWholeMapEditWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WholeMapWidget.WholeMapWidget_C.OnSetOptionEditMode
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWholeMapWidget_C::OnSetOptionEditMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapWidget_C", "OnSetOptionEditMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WholeMapWidget.WholeMapWidget_C.PlayAnimIn
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWholeMapWidget_C::PlayAnimIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapWidget_C", "PlayAnimIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WholeMapWidget.WholeMapWidget_C.PlayAnimOut
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWholeMapWidget_C::PlayAnimOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapWidget_C", "PlayAnimOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WholeMapWidget.WholeMapWidget_C.OnOpen
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWholeMapWidget_C::OnOpen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapWidget_C", "OnOpen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WholeMapWidget.WholeMapWidget_C.SetDebugTraverseList
// (Private, BlueprintCallable, BlueprintEvent)

void UWholeMapWidget_C::SetDebugTraverseList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WholeMapWidget_C", "SetDebugTraverseList");

	UObject::ProcessEvent(Func, nullptr);
}

}

