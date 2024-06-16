#pragma once

 

// Package: ShortcutRing

#include "Basic.hpp"

#include "ShortcutRing_classes.hpp"
#include "ShortcutRing_parameters.hpp"


namespace SDK
{

// Function ShortcutRing.ShortcutRing_C.ExecuteUbergraph_ShortcutRing
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShortcutRing_C::ExecuteUbergraph_ShortcutRing(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "ExecuteUbergraph_ShortcutRing");

	Params::ShortcutRing_C_ExecuteUbergraph_ShortcutRing Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRing.ShortcutRing_C.OnDeleteEditWindow
// (Event, Protected, BlueprintEvent)

void UShortcutRing_C::OnDeleteEditWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "OnDeleteEditWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRing.ShortcutRing_C.OnCreateEditWindow
// (Event, Protected, BlueprintEvent)

void UShortcutRing_C::OnCreateEditWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "OnCreateEditWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRing.ShortcutRing_C.BndEvt__ShortcutRingBase_K2Node_ComponentBoundEvent_0_OnInOutFinished__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   AnimationCurrentTime                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShortcutRing_C::BndEvt__ShortcutRingBase_K2Node_ComponentBoundEvent_0_OnInOutFinished__DelegateSignature(float AnimationCurrentTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "BndEvt__ShortcutRingBase_K2Node_ComponentBoundEvent_0_OnInOutFinished__DelegateSignature");

	Params::ShortcutRing_C_BndEvt__ShortcutRingBase_K2Node_ComponentBoundEvent_0_OnInOutFinished__DelegateSignature Parms{};

	Parms.AnimationCurrentTime = AnimationCurrentTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRing.ShortcutRing_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void UShortcutRing_C::CustomEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "CustomEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRing.ShortcutRing_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShortcutRing_C::CustomEvent_0(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "CustomEvent_0");

	Params::ShortcutRing_C_CustomEvent_0 Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRing.ShortcutRing_C.UnbindClosedMenu
// (BlueprintCallable, BlueprintEvent)

void UShortcutRing_C::UnbindClosedMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "UnbindClosedMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRing.ShortcutRing_C.BindClosedMenu
// (BlueprintCallable, BlueprintEvent)

void UShortcutRing_C::BindClosedMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "BindClosedMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRing.ShortcutRing_C.OnCloseShortcutRingEdit
// (BlueprintCallable, BlueprintEvent)

void UShortcutRing_C::OnCloseShortcutRingEdit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "OnCloseShortcutRingEdit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRing.ShortcutRing_C.UnbindEditWindow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBShortcutRingEdit*              InShortcutRingEdit                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShortcutRing_C::UnbindEditWindow(class USBShortcutRingEdit* InShortcutRingEdit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "UnbindEditWindow");

	Params::ShortcutRing_C_UnbindEditWindow Parms{};

	Parms.InShortcutRingEdit = InShortcutRingEdit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRing.ShortcutRing_C.BindEditWindow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBShortcutRingEdit*              InShortcutRingEdit                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShortcutRing_C::BindEditWindow(class USBShortcutRingEdit* InShortcutRingEdit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "BindEditWindow");

	Params::ShortcutRing_C_BindEditWindow Parms{};

	Parms.InShortcutRingEdit = InShortcutRingEdit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRing.ShortcutRing_C.UnbindUIVisibleSettingChange
// (BlueprintCallable, BlueprintEvent)

void UShortcutRing_C::UnbindUIVisibleSettingChange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "UnbindUIVisibleSettingChange");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRing.ShortcutRing_C.BindUIVisibleSettingChange
// (BlueprintCallable, BlueprintEvent)

void UShortcutRing_C::BindUIVisibleSettingChange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "BindUIVisibleSettingChange");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRing.ShortcutRing_C.UIVisibleSettingChangeDelegate_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBUIType                               InUIType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInInstantly                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShortcutRing_C::UIVisibleSettingChangeDelegate_Event_0(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "UIVisibleSettingChangeDelegate_Event_0");

	Params::ShortcutRing_C_UIVisibleSettingChangeDelegate_Event_0 Parms{};

	Parms.InUIType = InUIType;
	Parms.bInVisibility = bInVisibility;
	Parms.bInInstantly = bInInstantly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRing.ShortcutRing_C.UnbindUpdateItem
// (BlueprintCallable, BlueprintEvent)

void UShortcutRing_C::UnbindUpdateItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "UnbindUpdateItem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRing.ShortcutRing_C.BindUpdateItem
// (BlueprintCallable, BlueprintEvent)

void UShortcutRing_C::BindUpdateItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "BindUpdateItem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRing.ShortcutRing_C.OnUseSupply
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShortcutRing_C::OnUseSupply(const bool Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "OnUseSupply");

	Params::ShortcutRing_C_OnUseSupply Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRing.ShortcutRing_C.OnUpdateItems
// (BlueprintCallable, BlueprintEvent)

void UShortcutRing_C::OnUpdateItems()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "OnUpdateItems");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRing.ShortcutRing_C.CustomEvent_16
// (BlueprintCallable, BlueprintEvent)

void UShortcutRing_C::CustomEvent_16()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "CustomEvent_16");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRing.ShortcutRing_C.StopListeningForInputActionF12
// (BlueprintCallable, BlueprintEvent)

void UShortcutRing_C::StopListeningForInputActionF12()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "StopListeningForInputActionF12");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRing.ShortcutRing_C.ListenForInputActionF12
// (BlueprintCallable, BlueprintEvent)

void UShortcutRing_C::ListenForInputActionF12()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "ListenForInputActionF12");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRing.ShortcutRing_C.CustomEvent_13
// (BlueprintCallable, BlueprintEvent)

void UShortcutRing_C::CustomEvent_13()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "CustomEvent_13");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRing.ShortcutRing_C.StopListeningForInputActionF11
// (BlueprintCallable, BlueprintEvent)

void UShortcutRing_C::StopListeningForInputActionF11()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "StopListeningForInputActionF11");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRing.ShortcutRing_C.ListenForInputActionF11
// (BlueprintCallable, BlueprintEvent)

void UShortcutRing_C::ListenForInputActionF11()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "ListenForInputActionF11");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRing.ShortcutRing_C.CustomEvent_10
// (BlueprintCallable, BlueprintEvent)

void UShortcutRing_C::CustomEvent_10()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "CustomEvent_10");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRing.ShortcutRing_C.StopListeningForInputActionF10
// (BlueprintCallable, BlueprintEvent)

void UShortcutRing_C::StopListeningForInputActionF10()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "StopListeningForInputActionF10");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRing.ShortcutRing_C.ListenForInputActionF10
// (BlueprintCallable, BlueprintEvent)

void UShortcutRing_C::ListenForInputActionF10()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "ListenForInputActionF10");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRing.ShortcutRing_C.CustomEvent_7
// (BlueprintCallable, BlueprintEvent)

void UShortcutRing_C::CustomEvent_7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "CustomEvent_7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRing.ShortcutRing_C.StopListeningForInputActionF9
// (BlueprintCallable, BlueprintEvent)

void UShortcutRing_C::StopListeningForInputActionF9()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "StopListeningForInputActionF9");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRing.ShortcutRing_C.ListenForInputActionF9
// (BlueprintCallable, BlueprintEvent)

void UShortcutRing_C::ListenForInputActionF9()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "ListenForInputActionF9");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRing.ShortcutRing_C.CustomEvent_6
// (BlueprintCallable, BlueprintEvent)

void UShortcutRing_C::CustomEvent_6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "CustomEvent_6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRing.ShortcutRing_C.StopListeningForInputActionF8
// (BlueprintCallable, BlueprintEvent)

void UShortcutRing_C::StopListeningForInputActionF8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "StopListeningForInputActionF8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRing.ShortcutRing_C.ListenForInputActionF8
// (BlueprintCallable, BlueprintEvent)

void UShortcutRing_C::ListenForInputActionF8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "ListenForInputActionF8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRing.ShortcutRing_C.CustomEvent_5
// (BlueprintCallable, BlueprintEvent)

void UShortcutRing_C::CustomEvent_5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "CustomEvent_5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRing.ShortcutRing_C.StopListeningForInputActionF7
// (BlueprintCallable, BlueprintEvent)

void UShortcutRing_C::StopListeningForInputActionF7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "StopListeningForInputActionF7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRing.ShortcutRing_C.ListenForInputActionF7
// (BlueprintCallable, BlueprintEvent)

void UShortcutRing_C::ListenForInputActionF7()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "ListenForInputActionF7");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRing.ShortcutRing_C.CustomEvent_4
// (BlueprintCallable, BlueprintEvent)

void UShortcutRing_C::CustomEvent_4()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "CustomEvent_4");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRing.ShortcutRing_C.StopListeningForInputActionF6
// (BlueprintCallable, BlueprintEvent)

void UShortcutRing_C::StopListeningForInputActionF6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "StopListeningForInputActionF6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRing.ShortcutRing_C.ListenForInputActionF6
// (BlueprintCallable, BlueprintEvent)

void UShortcutRing_C::ListenForInputActionF6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "ListenForInputActionF6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRing.ShortcutRing_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)

void UShortcutRing_C::CustomEvent_2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "CustomEvent_2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRing.ShortcutRing_C.StopListeningForInputActionF5
// (BlueprintCallable, BlueprintEvent)

void UShortcutRing_C::StopListeningForInputActionF5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "StopListeningForInputActionF5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRing.ShortcutRing_C.ListenForInputActionF5
// (BlueprintCallable, BlueprintEvent)

void UShortcutRing_C::ListenForInputActionF5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "ListenForInputActionF5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRing.ShortcutRing_C.OnLoaded_E029D6484C901949947AB496CF5240E6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UShortcutRing_C::OnLoaded_E029D6484C901949947AB496CF5240E6(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "OnLoaded_E029D6484C901949947AB496CF5240E6");

	Params::ShortcutRing_C_OnLoaded_E029D6484C901949947AB496CF5240E6 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShortcutRing.ShortcutRing_C.OnBind
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UShortcutRing_C::OnBind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "OnBind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRing.ShortcutRing_C.OnUnbind
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UShortcutRing_C::OnUnbind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "OnUnbind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRing.ShortcutRing_C.PlayAnimIn
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UShortcutRing_C::PlayAnimIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "PlayAnimIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRing.ShortcutRing_C.PlayAnimOut
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UShortcutRing_C::PlayAnimOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "PlayAnimOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRing.ShortcutRing_C.PlaySESelectIcon
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UShortcutRing_C::PlaySESelectIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "PlaySESelectIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRing.ShortcutRing_C.PlaySEExecute
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UShortcutRing_C::PlaySEExecute()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "PlaySEExecute");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRing.ShortcutRing_C.RegistShortcutKey
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UShortcutRing_C::RegistShortcutKey()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "RegistShortcutKey");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShortcutRing.ShortcutRing_C.UnregistShortcutKey
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UShortcutRing_C::UnregistShortcutKey()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShortcutRing_C", "UnregistShortcutKey");

	UObject::ProcessEvent(Func, nullptr);
}

}

