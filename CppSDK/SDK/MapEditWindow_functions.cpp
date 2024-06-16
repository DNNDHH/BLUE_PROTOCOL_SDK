#pragma once

 

// Package: MapEditWindow

#include "Basic.hpp"

#include "MapEditWindow_classes.hpp"
#include "MapEditWindow_parameters.hpp"


namespace SDK
{

// Function MapEditWindow.MapEditWindow_C.OnRangeScaleChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapEditWindow_C::OnRangeScaleChanged__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindow_C", "OnRangeScaleChanged__DelegateSignature");

	Params::MapEditWindow_C_OnRangeScaleChanged__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapEditWindow.MapEditWindow_C.OnBGAlphaChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapEditWindow_C::OnBGAlphaChanged__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindow_C", "OnBGAlphaChanged__DelegateSignature");

	Params::MapEditWindow_C_OnBGAlphaChanged__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapEditWindow.MapEditWindow_C.OnInAnim__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMapEditWindow_C::OnInAnim__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindow_C", "OnInAnim__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapEditWindow.MapEditWindow_C.OnOutAnim__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMapEditWindow_C::OnOutAnim__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindow_C", "OnOutAnim__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapEditWindow.MapEditWindow_C.OnIconSizeChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapEditWindow_C::OnIconSizeChanged__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindow_C", "OnIconSizeChanged__DelegateSignature");

	Params::MapEditWindow_C_OnIconSizeChanged__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapEditWindow.MapEditWindow_C.OnWindowSizeChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Number                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapEditWindow_C::OnWindowSizeChanged__DelegateSignature(int32 Number)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindow_C", "OnWindowSizeChanged__DelegateSignature");

	Params::MapEditWindow_C_OnWindowSizeChanged__DelegateSignature Parms{};

	Parms.Number = Number;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapEditWindow.MapEditWindow_C.OnReset__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMapEditWindow_C::OnReset__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindow_C", "OnReset__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapEditWindow.MapEditWindow_C.OnPinVisible__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsOn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapEditWindow_C::OnPinVisible__DelegateSignature(bool IsOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindow_C", "OnPinVisible__DelegateSignature");

	Params::MapEditWindow_C_OnPinVisible__DelegateSignature Parms{};

	Parms.IsOn = IsOn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapEditWindow.MapEditWindow_C.ExecuteUbergraph_MapEditWindow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapEditWindow_C::ExecuteUbergraph_MapEditWindow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindow_C", "ExecuteUbergraph_MapEditWindow");

	Params::MapEditWindow_C_ExecuteUbergraph_MapEditWindow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapEditWindow.MapEditWindow_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMapEditWindow_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindow_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapEditWindow.MapEditWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMapEditWindow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindow_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapEditWindow.MapEditWindow_C.BndEvt__MapEditWindow_BtnReset_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMapEditWindow_C::BndEvt__MapEditWindow_BtnReset_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindow_C", "BndEvt__MapEditWindow_BtnReset_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapEditWindow.MapEditWindow_C.DialogDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapEditWindow_C::DialogDelegate(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindow_C", "DialogDelegate");

	Params::MapEditWindow_C_DialogDelegate Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapEditWindow.MapEditWindow_C.BndEvt__MapEditWindow_WindowPin_K2Node_ComponentBoundEvent_3_OnPinVisible__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    IsOn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapEditWindow_C::BndEvt__MapEditWindow_WindowPin_K2Node_ComponentBoundEvent_3_OnPinVisible__DelegateSignature(bool IsOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindow_C", "BndEvt__MapEditWindow_WindowPin_K2Node_ComponentBoundEvent_3_OnPinVisible__DelegateSignature");

	Params::MapEditWindow_C_BndEvt__MapEditWindow_WindowPin_K2Node_ComponentBoundEvent_3_OnPinVisible__DelegateSignature Parms{};

	Parms.IsOn = IsOn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapEditWindow.MapEditWindow_C.BndEvt__MapEditWindow_MapEditWindowSize_K2Node_ComponentBoundEvent_19_OnWindowSizeChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   Number                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapEditWindow_C::BndEvt__MapEditWindow_MapEditWindowSize_K2Node_ComponentBoundEvent_19_OnWindowSizeChanged__DelegateSignature(int32 Number)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindow_C", "BndEvt__MapEditWindow_MapEditWindowSize_K2Node_ComponentBoundEvent_19_OnWindowSizeChanged__DelegateSignature");

	Params::MapEditWindow_C_BndEvt__MapEditWindow_MapEditWindowSize_K2Node_ComponentBoundEvent_19_OnWindowSizeChanged__DelegateSignature Parms{};

	Parms.Number = Number;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapEditWindow.MapEditWindow_C.BndEvt__MapEditWindow_SliderZ_K2Node_ComponentBoundEvent_15_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapEditWindow_C::BndEvt__MapEditWindow_SliderZ_K2Node_ComponentBoundEvent_15_OnValueChanged__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindow_C", "BndEvt__MapEditWindow_SliderZ_K2Node_ComponentBoundEvent_15_OnValueChanged__DelegateSignature");

	Params::MapEditWindow_C_BndEvt__MapEditWindow_SliderZ_K2Node_ComponentBoundEvent_15_OnValueChanged__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapEditWindow.MapEditWindow_C.BndEvt__MapEditWindow_MapEditSlider_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapEditWindow_C::BndEvt__MapEditWindow_MapEditSlider_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindow_C", "BndEvt__MapEditWindow_MapEditSlider_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature");

	Params::MapEditWindow_C_BndEvt__MapEditWindow_MapEditSlider_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapEditWindow.MapEditWindow_C.BndEvt__MapEditWindow_SliderBG_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapEditWindow_C::BndEvt__MapEditWindow_SliderBG_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindow_C", "BndEvt__MapEditWindow_SliderBG_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature");

	Params::MapEditWindow_C_BndEvt__MapEditWindow_SliderBG_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapEditWindow.MapEditWindow_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapEditWindow_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindow_C", "OnAnimationFinished");

	Params::MapEditWindow_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapEditWindow.MapEditWindow_C.UIVisibleSettingChangeDelegate_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBUIType                               InUIType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInInstantly                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapEditWindow_C::UIVisibleSettingChangeDelegate_Event_0(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindow_C", "UIVisibleSettingChangeDelegate_Event_0");

	Params::MapEditWindow_C_UIVisibleSettingChangeDelegate_Event_0 Parms{};

	Parms.InUIType = InUIType;
	Parms.bInVisibility = bInVisibility;
	Parms.bInInstantly = bInInstantly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapEditWindow.MapEditWindow_C.UnbindVisibleSettingChangeDelegate
// (BlueprintCallable, BlueprintEvent)

void UMapEditWindow_C::UnbindVisibleSettingChangeDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindow_C", "UnbindVisibleSettingChangeDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapEditWindow.MapEditWindow_C.BindVisibleSettingChangeDelegate
// (BlueprintCallable, BlueprintEvent)

void UMapEditWindow_C::BindVisibleSettingChangeDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindow_C", "BindVisibleSettingChangeDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapEditWindow.MapEditWindow_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void UMapEditWindow_C::CustomEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindow_C", "CustomEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapEditWindow.MapEditWindow_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMapEditWindow_C::CustomEvent_0(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindow_C", "CustomEvent_0");

	Params::MapEditWindow_C_CustomEvent_0 Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapEditWindow.MapEditWindow_C.UnbindClosedMenu
// (BlueprintCallable, BlueprintEvent)

void UMapEditWindow_C::UnbindClosedMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindow_C", "UnbindClosedMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapEditWindow.MapEditWindow_C.BindClosedMenu
// (BlueprintCallable, BlueprintEvent)

void UMapEditWindow_C::BindClosedMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindow_C", "BindClosedMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapEditWindow.MapEditWindow_C.BndEvt__MapEditWindow_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
// (BlueprintEvent)

void UMapEditWindow_C::BndEvt__MapEditWindow_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindow_C", "BndEvt__MapEditWindow_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapEditWindow.MapEditWindow_C.OnPressCancel
// (BlueprintCallable, BlueprintEvent)

void UMapEditWindow_C::OnPressCancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindow_C", "OnPressCancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapEditWindow.MapEditWindow_C.DeregisterCancelKey
// (BlueprintCallable, BlueprintEvent)

void UMapEditWindow_C::DeregisterCancelKey()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindow_C", "DeregisterCancelKey");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapEditWindow.MapEditWindow_C.RegisterCancelKey
// (BlueprintCallable, BlueprintEvent)

void UMapEditWindow_C::RegisterCancelKey()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindow_C", "RegisterCancelKey");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapEditWindow.MapEditWindow_C.Bind
// (Private, BlueprintCallable, BlueprintEvent)

void UMapEditWindow_C::Bind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindow_C", "Bind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapEditWindow.MapEditWindow_C.Unbind
// (Private, BlueprintCallable, BlueprintEvent)

void UMapEditWindow_C::Unbind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindow_C", "Unbind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapEditWindow.MapEditWindow_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   WindowSizeIndex                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   BGAlphaValue                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   IconSizeScale                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Zoom                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    PinChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMapEditWindow_C::Initialize(int32 WindowSizeIndex, float BGAlphaValue, float IconSizeScale, float Zoom, bool PinChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindow_C", "Initialize");

	Params::MapEditWindow_C_Initialize Parms{};

	Parms.WindowSizeIndex = WindowSizeIndex;
	Parms.BGAlphaValue = BGAlphaValue;
	Parms.IconSizeScale = IconSizeScale;
	Parms.Zoom = Zoom;
	Parms.PinChecked = PinChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MapEditWindow.MapEditWindow_C.Open
// (Public, BlueprintCallable, BlueprintEvent)

void UMapEditWindow_C::Open()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindow_C", "Open");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapEditWindow.MapEditWindow_C.Close
// (Public, BlueprintCallable, BlueprintEvent)

void UMapEditWindow_C::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindow_C", "Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapEditWindow.MapEditWindow_C.SetMapSizeTitle
// (Public, BlueprintCallable, BlueprintEvent)

void UMapEditWindow_C::SetMapSizeTitle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindow_C", "SetMapSizeTitle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapEditWindow.MapEditWindow_C.SetGameModeAndUI
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMapEditWindow_C::SetGameModeAndUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindow_C", "SetGameModeAndUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapEditWindow.MapEditWindow_C.SetGameMode
// (Private, BlueprintCallable, BlueprintEvent)

void UMapEditWindow_C::SetGameMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindow_C", "SetGameMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapEditWindow.MapEditWindow_C.CreateDialogYesNo
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Message                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// class UBP_Dialog_C*                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UBP_Dialog_C* UMapEditWindow_C::CreateDialogYesNo(const class FText& Message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindow_C", "CreateDialogYesNo");

	Params::MapEditWindow_C_CreateDialogYesNo Parms{};

	Parms.Message = std::move(Message);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function MapEditWindow.MapEditWindow_C.DeleteDialogYesNo
// (Private, BlueprintCallable, BlueprintEvent)

void UMapEditWindow_C::DeleteDialogYesNo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindow_C", "DeleteDialogYesNo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MapEditWindow.MapEditWindow_C.GetDialogMessage
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                             Message                                                (Parm, OutParm)

void UMapEditWindow_C::GetDialogMessage(class FText* Message) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MapEditWindow_C", "GetDialogMessage");

	Params::MapEditWindow_C_GetDialogMessage Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Message != nullptr)
		*Message = std::move(Parms.Message);
}

}

