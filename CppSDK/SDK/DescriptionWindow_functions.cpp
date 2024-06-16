#pragma once

 

// Package: DescriptionWindow

#include "Basic.hpp"

#include "DescriptionWindow_classes.hpp"
#include "DescriptionWindow_parameters.hpp"


namespace SDK
{

// Function DescriptionWindow.DescriptionWindow_C.OnClickedButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EDescripionButtonType                   ButtonType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDescriptionWindow_C::OnClickedButton__DelegateSignature(EDescripionButtonType ButtonType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DescriptionWindow_C", "OnClickedButton__DelegateSignature");

	Params::DescriptionWindow_C_OnClickedButton__DelegateSignature Parms{};

	Parms.ButtonType = ButtonType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DescriptionWindow.DescriptionWindow_C.OnWeaponStickerButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InWeaponUniqueId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FSBWeaponItemData                InWeaponItemData                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UDescriptionWindow_C::OnWeaponStickerButtonPressed__DelegateSignature(const class FString& InWeaponUniqueId, const struct FSBWeaponItemData& InWeaponItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DescriptionWindow_C", "OnWeaponStickerButtonPressed__DelegateSignature");

	Params::DescriptionWindow_C_OnWeaponStickerButtonPressed__DelegateSignature Parms{};

	Parms.InWeaponUniqueId = std::move(InWeaponUniqueId);
	Parms.InWeaponItemData = std::move(InWeaponItemData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function DescriptionWindow.DescriptionWindow_C.OnWeaponStickerInUseButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsInUse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDescriptionWindow_C::OnWeaponStickerInUseButtonPressed__DelegateSignature(bool InIsInUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DescriptionWindow_C", "OnWeaponStickerInUseButtonPressed__DelegateSignature");

	Params::DescriptionWindow_C_OnWeaponStickerInUseButtonPressed__DelegateSignature Parms{};

	Parms.InIsInUse = InIsInUse;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DescriptionWindow.DescriptionWindow_C.ExecuteUbergraph_DescriptionWindow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDescriptionWindow_C::ExecuteUbergraph_DescriptionWindow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DescriptionWindow_C", "ExecuteUbergraph_DescriptionWindow");

	Params::DescriptionWindow_C_ExecuteUbergraph_DescriptionWindow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DescriptionWindow.DescriptionWindow_C.BndEvt__EquipDescription_K2Node_ComponentBoundEvent_1_OnWeaponStickerInUseButtonPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    InIsInUse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDescriptionWindow_C::BndEvt__EquipDescription_K2Node_ComponentBoundEvent_1_OnWeaponStickerInUseButtonPressed__DelegateSignature(bool InIsInUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DescriptionWindow_C", "BndEvt__EquipDescription_K2Node_ComponentBoundEvent_1_OnWeaponStickerInUseButtonPressed__DelegateSignature");

	Params::DescriptionWindow_C_BndEvt__EquipDescription_K2Node_ComponentBoundEvent_1_OnWeaponStickerInUseButtonPressed__DelegateSignature Parms{};

	Parms.InIsInUse = InIsInUse;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DescriptionWindow.DescriptionWindow_C.BndEvt__EquipDescription_K2Node_ComponentBoundEvent_0_OnWeaponStickerButtonPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           InWeaponUniqueId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FSBWeaponItemData                InWeaponItemData                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UDescriptionWindow_C::BndEvt__EquipDescription_K2Node_ComponentBoundEvent_0_OnWeaponStickerButtonPressed__DelegateSignature(const class FString& InWeaponUniqueId, const struct FSBWeaponItemData& InWeaponItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DescriptionWindow_C", "BndEvt__EquipDescription_K2Node_ComponentBoundEvent_0_OnWeaponStickerButtonPressed__DelegateSignature");

	Params::DescriptionWindow_C_BndEvt__EquipDescription_K2Node_ComponentBoundEvent_0_OnWeaponStickerButtonPressed__DelegateSignature Parms{};

	Parms.InWeaponUniqueId = std::move(InWeaponUniqueId);
	Parms.InWeaponItemData = std::move(InWeaponItemData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function DescriptionWindow.DescriptionWindow_C.OnButtonClicked_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDescripionButtonType                   ButtonType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDescriptionWindow_C::OnButtonClicked_Bind(EDescripionButtonType ButtonType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DescriptionWindow_C", "OnButtonClicked_Bind");

	Params::DescriptionWindow_C_OnButtonClicked_Bind Parms{};

	Parms.ButtonType = ButtonType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DescriptionWindow.DescriptionWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDescriptionWindow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DescriptionWindow_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DescriptionWindow.DescriptionWindow_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDescriptionWindow_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DescriptionWindow_C", "PreConstruct");

	Params::DescriptionWindow_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DescriptionWindow.DescriptionWindow_C.SetItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryData                   InventoryData                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UDescriptionWindow_C::SetItem(struct FInventoryData& InventoryData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DescriptionWindow_C", "SetItem");

	Params::DescriptionWindow_C_SetItem Parms{};

	Parms.InventoryData = std::move(InventoryData);

	UObject::ProcessEvent(Func, &Parms);

	InventoryData = std::move(Parms.InventoryData);
}


// Function DescriptionWindow.DescriptionWindow_C.SetItemLoadAfter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_CaptureStudio_C*             CaptureStudio                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EItemType                               Selection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDescriptionWindow_C::SetItemLoadAfter(class UUMG_CaptureStudio_C* CaptureStudio, EItemType Selection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DescriptionWindow_C", "SetItemLoadAfter");

	Params::DescriptionWindow_C_SetItemLoadAfter Parms{};

	Parms.CaptureStudio = CaptureStudio;
	Parms.Selection = Selection;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DescriptionWindow.DescriptionWindow_C.Open
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryData                   InventoryData                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UDescriptionWindow_C::Open(const struct FInventoryData& InventoryData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DescriptionWindow_C", "Open");

	Params::DescriptionWindow_C_Open Parms{};

	Parms.InventoryData = std::move(InventoryData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function DescriptionWindow.DescriptionWindow_C.Close
// (Public, BlueprintCallable, BlueprintEvent)

void UDescriptionWindow_C::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DescriptionWindow_C", "Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DescriptionWindow.DescriptionWindow_C.SetRegisterMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsRegisterMode                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDescriptionWindow_C::SetRegisterMode(bool IsRegisterMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DescriptionWindow_C", "SetRegisterMode");

	Params::DescriptionWindow_C_SetRegisterMode Parms{};

	Parms.IsRegisterMode = IsRegisterMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DescriptionWindow.DescriptionWindow_C.RefleshButton
// (Public, BlueprintCallable, BlueprintEvent)

void UDescriptionWindow_C::RefleshButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DescriptionWindow_C", "RefleshButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DescriptionWindow.DescriptionWindow_C.IsClose
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bClose                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDescriptionWindow_C::IsClose(bool* bClose)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DescriptionWindow_C", "IsClose");

	Params::DescriptionWindow_C_IsClose Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bClose != nullptr)
		*bClose = Parms.bClose;
}


// Function DescriptionWindow.DescriptionWindow_C.SetBagStorageViewMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bBagStorageViewMode                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDescriptionWindow_C::SetBagStorageViewMode(bool Param_bBagStorageViewMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DescriptionWindow_C", "SetBagStorageViewMode");

	Params::DescriptionWindow_C_SetBagStorageViewMode Parms{};

	Parms.Param_bBagStorageViewMode = Param_bBagStorageViewMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DescriptionWindow.DescriptionWindow_C.SetWeaponStickerInUseButtonIsInUse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsInUse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDescriptionWindow_C::SetWeaponStickerInUseButtonIsInUse(bool InIsInUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DescriptionWindow_C", "SetWeaponStickerInUseButtonIsInUse");

	Params::DescriptionWindow_C_SetWeaponStickerInUseButtonIsInUse Parms{};

	Parms.InIsInUse = InIsInUse;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DescriptionWindow.DescriptionWindow_C.SetWeaponStickerInUseButtonIsEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsEnabled                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDescriptionWindow_C::SetWeaponStickerInUseButtonIsEnabled(bool InIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DescriptionWindow_C", "SetWeaponStickerInUseButtonIsEnabled");

	Params::DescriptionWindow_C_SetWeaponStickerInUseButtonIsEnabled Parms{};

	Parms.InIsEnabled = InIsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DescriptionWindow.DescriptionWindow_C.SetMoveDescriptionWindow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UDescriptionWindow_C::SetMoveDescriptionWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DescriptionWindow_C", "SetMoveDescriptionWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DescriptionWindow.DescriptionWindow_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UDescriptionWindow_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DescriptionWindow_C", "Refresh");

	UObject::ProcessEvent(Func, nullptr);
}

}

