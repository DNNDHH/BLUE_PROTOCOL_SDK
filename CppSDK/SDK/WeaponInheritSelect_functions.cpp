#pragma once

 

// Package: WeaponInheritSelect

#include "Basic.hpp"

#include "WeaponInheritSelect_classes.hpp"
#include "WeaponInheritSelect_parameters.hpp"


namespace SDK
{

// Function WeaponInheritSelect.WeaponInheritSelect_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWeaponInheritSelect_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponInheritSelect_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponInheritSelect.WeaponInheritSelect_C.OnSelected__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           SpecialPerkUID                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FSBStackBPerk>            Param_SelectedPerks                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWeaponInheritSelect_C::OnSelected__DelegateSignature(const class FString& SpecialPerkUID, TArray<struct FSBStackBPerk>& Param_SelectedPerks)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponInheritSelect_C", "OnSelected__DelegateSignature");

	Params::WeaponInheritSelect_C_OnSelected__DelegateSignature Parms{};

	Parms.SpecialPerkUID = std::move(SpecialPerkUID);
	Parms.Param_SelectedPerks = std::move(Param_SelectedPerks);

	UObject::ProcessEvent(Func, &Parms);

	Param_SelectedPerks = std::move(Parms.Param_SelectedPerks);
}


// Function WeaponInheritSelect.WeaponInheritSelect_C.ExecuteUbergraph_WeaponInheritSelect
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponInheritSelect_C::ExecuteUbergraph_WeaponInheritSelect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponInheritSelect_C", "ExecuteUbergraph_WeaponInheritSelect");

	Params::WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponInheritSelect.WeaponInheritSelect_C.BndEvt__WeaponInheritSelect_CmnClose03_K2Node_ComponentBoundEvent_10_OnClosed__DelegateSignature
// (BlueprintEvent)

void UWeaponInheritSelect_C::BndEvt__WeaponInheritSelect_CmnClose03_K2Node_ComponentBoundEvent_10_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponInheritSelect_C", "BndEvt__WeaponInheritSelect_CmnClose03_K2Node_ComponentBoundEvent_10_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponInheritSelect.WeaponInheritSelect_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UWeaponInheritSelect_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponInheritSelect_C", "WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponInheritSelect.WeaponInheritSelect_C.OnCheckedInhelit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponInheritSelect_C::OnCheckedInhelit(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponInheritSelect_C", "OnCheckedInhelit");

	Params::WeaponInheritSelect_C_OnCheckedInhelit Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponInheritSelect.WeaponInheritSelect_C.OnRequestClose
// (BlueprintCallable, BlueprintEvent)

void UWeaponInheritSelect_C::OnRequestClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponInheritSelect_C", "OnRequestClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponInheritSelect.WeaponInheritSelect_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWeaponInheritSelect_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponInheritSelect_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponInheritSelect.WeaponInheritSelect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWeaponInheritSelect_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponInheritSelect_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponInheritSelect.WeaponInheritSelect_C.BndEvt__WeaponInheritSelect_Btn_Rest_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWeaponInheritSelect_C::BndEvt__WeaponInheritSelect_Btn_Rest_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponInheritSelect_C", "BndEvt__WeaponInheritSelect_Btn_Rest_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponInheritSelect.WeaponInheritSelect_C.BndEvt__WeaponInheritSelect_Btn_Rest_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWeaponInheritSelect_C::BndEvt__WeaponInheritSelect_Btn_Rest_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponInheritSelect_C", "BndEvt__WeaponInheritSelect_Btn_Rest_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponInheritSelect.WeaponInheritSelect_C.BndEvt__WeaponInheritSelect_Btn_Decide_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWeaponInheritSelect_C::BndEvt__WeaponInheritSelect_Btn_Decide_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponInheritSelect_C", "BndEvt__WeaponInheritSelect_Btn_Decide_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponInheritSelect.WeaponInheritSelect_C.BndEvt__WeaponInheritSelect_Btn_Decide_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWeaponInheritSelect_C::BndEvt__WeaponInheritSelect_Btn_Decide_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponInheritSelect_C", "BndEvt__WeaponInheritSelect_Btn_Decide_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponInheritSelect.WeaponInheritSelect_C.BndEvt__WeaponInheritSelect_CmnBtn16_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UWeaponInheritSelect_C::BndEvt__WeaponInheritSelect_CmnBtn16_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponInheritSelect_C", "BndEvt__WeaponInheritSelect_CmnBtn16_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponInheritSelect.WeaponInheritSelect_C.BndEvt__WeaponInheritSelect_Btn_Decide_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWeaponInheritSelect_C::BndEvt__WeaponInheritSelect_Btn_Decide_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponInheritSelect_C", "BndEvt__WeaponInheritSelect_Btn_Decide_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponInheritSelect.WeaponInheritSelect_C.BndEvt__WeaponInheritSelect_InhelitPerkView_K2Node_ComponentBoundEvent_4_PurgeRequest__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FSBStackBPerk                    PurgeTarget                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UWeaponInheritSelect_C::BndEvt__WeaponInheritSelect_InhelitPerkView_K2Node_ComponentBoundEvent_4_PurgeRequest__DelegateSignature(const struct FSBStackBPerk& PurgeTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponInheritSelect_C", "BndEvt__WeaponInheritSelect_InhelitPerkView_K2Node_ComponentBoundEvent_4_PurgeRequest__DelegateSignature");

	Params::WeaponInheritSelect_C_BndEvt__WeaponInheritSelect_InhelitPerkView_K2Node_ComponentBoundEvent_4_PurgeRequest__DelegateSignature Parms{};

	Parms.PurgeTarget = std::move(PurgeTarget);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponInheritSelect.WeaponInheritSelect_C.BndEvt__WeaponInheritSelect_Btn_Rest_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWeaponInheritSelect_C::BndEvt__WeaponInheritSelect_Btn_Rest_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponInheritSelect_C", "BndEvt__WeaponInheritSelect_Btn_Rest_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponInheritSelect.WeaponInheritSelect_C.ChangePerks
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBStackBPerk                    Before                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSBStackBPerk                    Select                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWeaponInheritSelect_C::ChangePerks(const struct FSBStackBPerk& Before, const struct FSBStackBPerk& Select)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponInheritSelect_C", "ChangePerks");

	Params::WeaponInheritSelect_C_ChangePerks Parms{};

	Parms.Before = std::move(Before);
	Parms.Select = std::move(Select);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponInheritSelect.WeaponInheritSelect_C.OnClosePerkSelect
// (BlueprintCallable, BlueprintEvent)

void UWeaponInheritSelect_C::OnClosePerkSelect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponInheritSelect_C", "OnClosePerkSelect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponInheritSelect.WeaponInheritSelect_C.BndEvt__WeaponInheritSelect_InhelitPerkView_K2Node_ComponentBoundEvent_2_ChangePerkRequest__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FSBStackBPerk                    ChangeTarget                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWeaponInheritSelect_C::BndEvt__WeaponInheritSelect_InhelitPerkView_K2Node_ComponentBoundEvent_2_ChangePerkRequest__DelegateSignature(const struct FSBStackBPerk& ChangeTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponInheritSelect_C", "BndEvt__WeaponInheritSelect_InhelitPerkView_K2Node_ComponentBoundEvent_2_ChangePerkRequest__DelegateSignature");

	Params::WeaponInheritSelect_C_BndEvt__WeaponInheritSelect_InhelitPerkView_K2Node_ComponentBoundEvent_2_ChangePerkRequest__DelegateSignature Parms{};

	Parms.ChangeTarget = std::move(ChangeTarget);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponInheritSelect.WeaponInheritSelect_C.OnCloseVitalSelect
// (BlueprintCallable, BlueprintEvent)

void UWeaponInheritSelect_C::OnCloseVitalSelect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponInheritSelect_C", "OnCloseVitalSelect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponInheritSelect.WeaponInheritSelect_C.OnSelectedNewVitalType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     OnSelect                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UWeaponInheritSelect_C::OnSelectedNewVitalType(const struct FOwnItemInfo& OnSelect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponInheritSelect_C", "OnSelectedNewVitalType");

	Params::WeaponInheritSelect_C_OnSelectedNewVitalType Parms{};

	Parms.OnSelect = std::move(OnSelect);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponInheritSelect.WeaponInheritSelect_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWeaponInheritSelect_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponInheritSelect_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponInheritSelect.WeaponInheritSelect_C.AddViewChild
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          Content                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponInheritSelect_C::AddViewChild(class UWidget* Content)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponInheritSelect_C", "AddViewChild");

	Params::WeaponInheritSelect_C_AddViewChild Parms{};

	Parms.Content = Content;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponInheritSelect.WeaponInheritSelect_C.RequestClose
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponInheritSelect_C::RequestClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponInheritSelect_C", "RequestClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponInheritSelect.WeaponInheritSelect_C.CloseWindow
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponInheritSelect_C::CloseWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponInheritSelect_C", "CloseWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponInheritSelect.WeaponInheritSelect_C.FindArgViralId
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FOwnItemInfo                     Array_Element                                          (Parm, OutParm)

void UWeaponInheritSelect_C::FindArgViralId(struct FOwnItemInfo* Array_Element)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponInheritSelect_C", "FindArgViralId");

	Params::WeaponInheritSelect_C_FindArgViralId Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Array_Element != nullptr)
		*Array_Element = std::move(Parms.Array_Element);
}


// Function WeaponInheritSelect.WeaponInheritSelect_C.IsModalWindowOpen
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    IsOpen                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponInheritSelect_C::IsModalWindowOpen(bool* IsOpen) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponInheritSelect_C", "IsModalWindowOpen");

	Params::WeaponInheritSelect_C_IsModalWindowOpen Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsOpen != nullptr)
		*IsOpen = Parms.IsOpen;
}

}

