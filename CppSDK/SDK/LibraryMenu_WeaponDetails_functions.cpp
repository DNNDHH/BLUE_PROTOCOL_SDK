#pragma once

 

// Package: LibraryMenu_WeaponDetails

#include "Basic.hpp"

#include "LibraryMenu_WeaponDetails_classes.hpp"
#include "LibraryMenu_WeaponDetails_parameters.hpp"


namespace SDK
{

// Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.OnRecipeTabRead__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_WeaponDetails_C::OnRecipeTabRead__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_WeaponDetails_C", "OnRecipeTabRead__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.OnClickZoomIn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_WeaponDetails_C::OnClickZoomIn__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_WeaponDetails_C", "OnClickZoomIn__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.ExecuteUbergraph_LibraryMenu_WeaponDetails
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_WeaponDetails_C::ExecuteUbergraph_LibraryMenu_WeaponDetails(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_WeaponDetails_C", "ExecuteUbergraph_LibraryMenu_WeaponDetails");

	Params::LibraryMenu_WeaponDetails_C_ExecuteUbergraph_LibraryMenu_WeaponDetails Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.OnWeaponLoaded_Event
// (BlueprintCallable, BlueprintEvent)

void ULibraryMenu_WeaponDetails_C::OnWeaponLoaded_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_WeaponDetails_C", "OnWeaponLoaded_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.BndEvt__LibraryMenu_WeaponDetails_WindowOpenButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_WeaponDetails_C::BndEvt__LibraryMenu_WeaponDetails_WindowOpenButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_WeaponDetails_C", "BndEvt__LibraryMenu_WeaponDetails_WindowOpenButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULibraryMenu_WeaponDetails_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_WeaponDetails_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULibraryMenu_WeaponDetails_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_WeaponDetails_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.BndEvt__LibraryMenu_ItemDetails_ExplainTabButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_WeaponDetails_C::BndEvt__LibraryMenu_ItemDetails_ExplainTabButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_WeaponDetails_C", "BndEvt__LibraryMenu_ItemDetails_ExplainTabButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.BndEvt__LibraryMenu_ItemDetails_DetailTabButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_WeaponDetails_C::BndEvt__LibraryMenu_ItemDetails_DetailTabButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_WeaponDetails_C", "BndEvt__LibraryMenu_ItemDetails_DetailTabButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.SetDetailsVisibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_WeaponDetails_C::SetDetailsVisibility(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_WeaponDetails_C", "SetDetailsVisibility");

	Params::LibraryMenu_WeaponDetails_C_SetDetailsVisibility Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.SetWeaponData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBWeaponMasterData              InWeaponMasterData                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ULibraryMenu_WeaponDetails_C::SetWeaponData(const struct FSBWeaponMasterData& InWeaponMasterData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_WeaponDetails_C", "SetWeaponData");

	Params::LibraryMenu_WeaponDetails_C_SetWeaponData Parms{};

	Parms.InWeaponMasterData = std::move(InWeaponMasterData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.SetActiveTab
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_WeaponDetails_C::SetActiveTab(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_WeaponDetails_C", "SetActiveTab");

	Params::LibraryMenu_WeaponDetails_C_SetActiveTab Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.UpdateReadRecipeTab
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_WeaponDetails_C::UpdateReadRecipeTab()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_WeaponDetails_C", "UpdateReadRecipeTab");

	UObject::ProcessEvent(Func, nullptr);
}

}

