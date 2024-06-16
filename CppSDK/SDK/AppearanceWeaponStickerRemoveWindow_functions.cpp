#pragma once

 

// Package: AppearanceWeaponStickerRemoveWindow

#include "Basic.hpp"

#include "AppearanceWeaponStickerRemoveWindow_classes.hpp"
#include "AppearanceWeaponStickerRemoveWindow_parameters.hpp"


namespace SDK
{

// Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.OnHideWindowFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UAppearanceWeaponStickerRemoveWindow_C::OnHideWindowFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerRemoveWindow_C", "OnHideWindowFinished__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.OnDecideButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsStickerDiscardSelected                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAppearanceWeaponStickerRemoveWindow_C::OnDecideButtonPressed__DelegateSignature(bool InIsStickerDiscardSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerRemoveWindow_C", "OnDecideButtonPressed__DelegateSignature");

	Params::AppearanceWeaponStickerRemoveWindow_C_OnDecideButtonPressed__DelegateSignature Parms{};

	Parms.InIsStickerDiscardSelected = InIsStickerDiscardSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.ExecuteUbergraph_AppearanceWeaponStickerRemoveWindow
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAppearanceWeaponStickerRemoveWindow_C::ExecuteUbergraph_AppearanceWeaponStickerRemoveWindow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerRemoveWindow_C", "ExecuteUbergraph_AppearanceWeaponStickerRemoveWindow");

	Params::AppearanceWeaponStickerRemoveWindow_C_ExecuteUbergraph_AppearanceWeaponStickerRemoveWindow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.WidgetAnimationEvt_AnmInOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UAppearanceWeaponStickerRemoveWindow_C::WidgetAnimationEvt_AnmInOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerRemoveWindow_C", "WidgetAnimationEvt_AnmInOut_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.BndEvt__AppearanceWeaponStickerRemoveWindow_CmnClose02_K2Node_ComponentBoundEvent_5_OnClosed__DelegateSignature
// (BlueprintEvent)

void UAppearanceWeaponStickerRemoveWindow_C::BndEvt__AppearanceWeaponStickerRemoveWindow_CmnClose02_K2Node_ComponentBoundEvent_5_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerRemoveWindow_C", "BndEvt__AppearanceWeaponStickerRemoveWindow_CmnClose02_K2Node_ComponentBoundEvent_5_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.BndEvt__ItemForStickerRemove_K2Node_ComponentBoundEvent_4_ItemSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAppearanceWeaponStickerRemoveWindowItemForStickerRemove_C*InItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAppearanceWeaponStickerRemoveWindow_C::BndEvt__ItemForStickerRemove_K2Node_ComponentBoundEvent_4_ItemSelected__DelegateSignature(class UAppearanceWeaponStickerRemoveWindowItemForStickerRemove_C* InItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerRemoveWindow_C", "BndEvt__ItemForStickerRemove_K2Node_ComponentBoundEvent_4_ItemSelected__DelegateSignature");

	Params::AppearanceWeaponStickerRemoveWindow_C_BndEvt__ItemForStickerRemove_K2Node_ComponentBoundEvent_4_ItemSelected__DelegateSignature Parms{};

	Parms.InItem = InItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.BndEvt__ItemForStickerDiscard_K2Node_ComponentBoundEvent_3_ItemSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UAppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C*InItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAppearanceWeaponStickerRemoveWindow_C::BndEvt__ItemForStickerDiscard_K2Node_ComponentBoundEvent_3_ItemSelected__DelegateSignature(class UAppearanceWeaponStickerRemoveWindowItemForStickerDiscard_C* InItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerRemoveWindow_C", "BndEvt__ItemForStickerDiscard_K2Node_ComponentBoundEvent_3_ItemSelected__DelegateSignature");

	Params::AppearanceWeaponStickerRemoveWindow_C_BndEvt__ItemForStickerDiscard_K2Node_ComponentBoundEvent_3_ItemSelected__DelegateSignature Parms{};

	Parms.InItem = InItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.OnPress_Cancel
// (Event, Public, BlueprintEvent)

void UAppearanceWeaponStickerRemoveWindow_C::OnPress_Cancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerRemoveWindow_C", "OnPress_Cancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.BndEvt__BtnScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UAppearanceWeaponStickerRemoveWindow_C::BndEvt__BtnScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerRemoveWindow_C", "BndEvt__BtnScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.BndEvt__DecideButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UAppearanceWeaponStickerRemoveWindow_C::BndEvt__DecideButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerRemoveWindow_C", "BndEvt__DecideButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.ShowWindow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsStickerIndefinite                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InHaveWeaponStickerRemoveItem                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   InWeaponStickerRemoveItemHoldNum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAppearanceWeaponStickerRemoveWindow_C::ShowWindow(bool InIsStickerIndefinite, bool InHaveWeaponStickerRemoveItem, int32 InWeaponStickerRemoveItemHoldNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerRemoveWindow_C", "ShowWindow");

	Params::AppearanceWeaponStickerRemoveWindow_C_ShowWindow Parms{};

	Parms.InIsStickerIndefinite = InIsStickerIndefinite;
	Parms.InHaveWeaponStickerRemoveItem = InHaveWeaponStickerRemoveItem;
	Parms.InWeaponStickerRemoveItemHoldNum = InWeaponStickerRemoveItemHoldNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.HideWindow
// (Public, BlueprintCallable, BlueprintEvent)

void UAppearanceWeaponStickerRemoveWindow_C::HideWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerRemoveWindow_C", "HideWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.BlockUIInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InBlockInput                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAppearanceWeaponStickerRemoveWindow_C::BlockUIInput(bool InBlockInput)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerRemoveWindow_C", "BlockUIInput");

	Params::AppearanceWeaponStickerRemoveWindow_C_BlockUIInput Parms{};

	Parms.InBlockInput = InBlockInput;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.SetIsDecideButtonEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsEnabled                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAppearanceWeaponStickerRemoveWindow_C::SetIsDecideButtonEnabled(bool InIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerRemoveWindow_C", "SetIsDecideButtonEnabled");

	Params::AppearanceWeaponStickerRemoveWindow_C_SetIsDecideButtonEnabled Parms{};

	Parms.InIsEnabled = InIsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AppearanceWeaponStickerRemoveWindow.AppearanceWeaponStickerRemoveWindow_C.SetWindowPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        InWindowPosition                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAppearanceWeaponStickerRemoveWindow_C::SetWindowPosition(const struct FVector2D& InWindowPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AppearanceWeaponStickerRemoveWindow_C", "SetWindowPosition");

	Params::AppearanceWeaponStickerRemoveWindow_C_SetWindowPosition Parms{};

	Parms.InWindowPosition = std::move(InWindowPosition);

	UObject::ProcessEvent(Func, &Parms);
}

}

