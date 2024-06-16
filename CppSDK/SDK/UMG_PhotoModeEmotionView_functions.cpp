#pragma once

 

// Package: UMG_PhotoModeEmotionView

#include "Basic.hpp"

#include "UMG_PhotoModeEmotionView_classes.hpp"
#include "UMG_PhotoModeEmotionView_parameters.hpp"


namespace SDK
{

// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.OnRequestEmote__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             EmotionId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeEmotionView_C::OnRequestEmote__DelegateSignature(class FName EmotionId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeEmotionView_C", "OnRequestEmote__DelegateSignature");

	Params::UMG_PhotoModeEmotionView_C_OnRequestEmote__DelegateSignature Parms{};

	Parms.EmotionId = EmotionId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.OnClickEnableFacial__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PhotoModeEmotionView_C::OnClickEnableFacial__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeEmotionView_C", "OnClickEnableFacial__DelegateSignature");

	Params::UMG_PhotoModeEmotionView_C_OnClickEnableFacial__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.OnChangeFacialComboBox__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBFacialType                           FacialType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeEmotionView_C::OnChangeFacialComboBox__DelegateSignature(ESBFacialType FacialType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeEmotionView_C", "OnChangeFacialComboBox__DelegateSignature");

	Params::UMG_PhotoModeEmotionView_C_OnChangeFacialComboBox__DelegateSignature Parms{};

	Parms.FacialType = FacialType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.OnChangeBlush__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeEmotionView_C::OnChangeBlush__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeEmotionView_C", "OnChangeBlush__DelegateSignature");

	Params::UMG_PhotoModeEmotionView_C_OnChangeBlush__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.OnChangePale__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeEmotionView_C::OnChangePale__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeEmotionView_C", "OnChangePale__DelegateSignature");

	Params::UMG_PhotoModeEmotionView_C_OnChangePale__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.OnChangeLipSync__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBLipSyncType                          LipSyncType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeEmotionView_C::OnChangeLipSync__DelegateSignature(ESBLipSyncType LipSyncType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeEmotionView_C", "OnChangeLipSync__DelegateSignature");

	Params::UMG_PhotoModeEmotionView_C_OnChangeLipSync__DelegateSignature Parms{};

	Parms.LipSyncType = LipSyncType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.OnChangeCloseEyes__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bCloseEyes                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PhotoModeEmotionView_C::OnChangeCloseEyes__DelegateSignature(bool bCloseEyes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeEmotionView_C", "OnChangeCloseEyes__DelegateSignature");

	Params::UMG_PhotoModeEmotionView_C_OnChangeCloseEyes__DelegateSignature Parms{};

	Parms.bCloseEyes = bCloseEyes;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.ExecuteUbergraph_UMG_PhotoModeEmotionView
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeEmotionView_C::ExecuteUbergraph_UMG_PhotoModeEmotionView(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeEmotionView_C", "ExecuteUbergraph_UMG_PhotoModeEmotionView");

	Params::UMG_PhotoModeEmotionView_C_ExecuteUbergraph_UMG_PhotoModeEmotionView Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeEmotionView_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeEmotionView_C", "Tick");

	Params::UMG_PhotoModeEmotionView_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_PhotoModeEmotionView_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeEmotionView_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.BndEvt__UMG_PhotoModeEmotionView_WBP_EmotionScroolBox_K2Node_ComponentBoundEvent_6_OnSelectEmotionItem__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UEmotionMenu_Item_C*              InSelectedItem                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeEmotionView_C::BndEvt__UMG_PhotoModeEmotionView_WBP_EmotionScroolBox_K2Node_ComponentBoundEvent_6_OnSelectEmotionItem__DelegateSignature(class UEmotionMenu_Item_C* InSelectedItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeEmotionView_C", "BndEvt__UMG_PhotoModeEmotionView_WBP_EmotionScroolBox_K2Node_ComponentBoundEvent_6_OnSelectEmotionItem__DelegateSignature");

	Params::UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_WBP_EmotionScroolBox_K2Node_ComponentBoundEvent_6_OnSelectEmotionItem__DelegateSignature Parms{};

	Parms.InSelectedItem = InSelectedItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.UpdateEmotionList
// (BlueprintCallable, BlueprintEvent)

void UUMG_PhotoModeEmotionView_C::UpdateEmotionList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeEmotionView_C", "UpdateEmotionList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.OnClickedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeEmotionView_C::OnClickedEvent(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeEmotionView_C", "OnClickedEvent");

	Params::UMG_PhotoModeEmotionView_C_OnClickedEvent Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.CreateCategory
// (BlueprintCallable, BlueprintEvent)

void UUMG_PhotoModeEmotionView_C::CreateCategory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeEmotionView_C", "CreateCategory");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.Construct_Emotion
// (BlueprintCallable, BlueprintEvent)

void UUMG_PhotoModeEmotionView_C::Construct_Emotion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeEmotionView_C", "Construct_Emotion");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.BndEvt__UMG_PhotoModeEmotionView_SBCheckBox_CloseEyes_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PhotoModeEmotionView_C::BndEvt__UMG_PhotoModeEmotionView_SBCheckBox_CloseEyes_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeEmotionView_C", "BndEvt__UMG_PhotoModeEmotionView_SBCheckBox_CloseEyes_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_SBCheckBox_CloseEyes_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.BndEvt__UMG_PhotoModeEmotionView_LipSyncComboBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeEmotionView_C::BndEvt__UMG_PhotoModeEmotionView_LipSyncComboBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeEmotionView_C", "BndEvt__UMG_PhotoModeEmotionView_LipSyncComboBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature");

	Params::UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_LipSyncComboBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.ChangeFacialOption
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeEmotionView_C::ChangeFacialOption(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeEmotionView_C", "ChangeFacialOption");

	Params::UMG_PhotoModeEmotionView_C_ChangeFacialOption Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.BndEvt__UMG_PhotoModeEmotionView_SBButton_FacialNext_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_PhotoModeEmotionView_C::BndEvt__UMG_PhotoModeEmotionView_SBButton_FacialNext_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeEmotionView_C", "BndEvt__UMG_PhotoModeEmotionView_SBButton_FacialNext_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.BndEvt__UMG_PhotoModeEmotionView_SBButton_FacialPrev_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_PhotoModeEmotionView_C::BndEvt__UMG_PhotoModeEmotionView_SBButton_FacialPrev_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeEmotionView_C", "BndEvt__UMG_PhotoModeEmotionView_SBButton_FacialPrev_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.BndEvt__UMG_PhotoModeEmotionView_UMG_PhotoModeControllSliderShort_DebugPale_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeEmotionView_C::BndEvt__UMG_PhotoModeEmotionView_UMG_PhotoModeControllSliderShort_DebugPale_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeEmotionView_C", "BndEvt__UMG_PhotoModeEmotionView_UMG_PhotoModeControllSliderShort_DebugPale_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature");

	Params::UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_UMG_PhotoModeControllSliderShort_DebugPale_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.BndEvt__UMG_PhotoModeEmotionView_UMG_PhotoModeControllSliderShort_DebugBlush_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeEmotionView_C::BndEvt__UMG_PhotoModeEmotionView_UMG_PhotoModeControllSliderShort_DebugBlush_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeEmotionView_C", "BndEvt__UMG_PhotoModeEmotionView_UMG_PhotoModeControllSliderShort_DebugBlush_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature");

	Params::UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeEmotionView_UMG_PhotoModeControllSliderShort_DebugBlush_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.ConstructFacial
// (BlueprintCallable, BlueprintEvent)

void UUMG_PhotoModeEmotionView_C::ConstructFacial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeEmotionView_C", "ConstructFacial");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.BndEvt__UMG_PhotoModeControllMenu_FacialComboBox_K2Node_ComponentBoundEvent_31_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeEmotionView_C::BndEvt__UMG_PhotoModeControllMenu_FacialComboBox_K2Node_ComponentBoundEvent_31_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeEmotionView_C", "BndEvt__UMG_PhotoModeControllMenu_FacialComboBox_K2Node_ComponentBoundEvent_31_OnSelectionChangedEvent__DelegateSignature");

	Params::UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeControllMenu_FacialComboBox_K2Node_ComponentBoundEvent_31_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.BndEvt__UMG_PhotoModeControllMenu_SBCheckBox_EnableFacial_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PhotoModeEmotionView_C::BndEvt__UMG_PhotoModeControllMenu_SBCheckBox_EnableFacial_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeEmotionView_C", "BndEvt__UMG_PhotoModeControllMenu_SBCheckBox_EnableFacial_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UMG_PhotoModeEmotionView_C_BndEvt__UMG_PhotoModeControllMenu_SBCheckBox_EnableFacial_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.RefreshFacialView
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBPhotoModePlayerControlData*    Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeEmotionView_C::RefreshFacialView(class USBPhotoModePlayerControlData* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeEmotionView_C", "RefreshFacialView");

	Params::UMG_PhotoModeEmotionView_C_RefreshFacialView Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.CreateEmotionEmotionList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUMG_PhotoModeEmotionView_C::CreateEmotionEmotionList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeEmotionView_C", "CreateEmotionEmotionList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.SelectEmotionItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEmotionMenu_Item_C*              InSelectedItem                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeEmotionView_C::SelectEmotionItem(class UEmotionMenu_Item_C* InSelectedItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeEmotionView_C", "SelectEmotionItem");

	Params::UMG_PhotoModeEmotionView_C_SelectEmotionItem Parms{};

	Parms.InSelectedItem = InSelectedItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.UpdateCategory
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_PhotoModeEmotionView_C::UpdateCategory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeEmotionView_C", "UpdateCategory");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.On_FacialComboBox_GenerateWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UUMG_PhotoModeEmotionView_C::On_FacialComboBox_GenerateWidget_0(const class FString& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeEmotionView_C", "On_FacialComboBox_GenerateWidget_0");

	Params::UMG_PhotoModeEmotionView_C_On_FacialComboBox_GenerateWidget_0 Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C.InitFacialOption
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_PhotoModeEmotionView_C::InitFacialOption()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeEmotionView_C", "InitFacialOption");

	UObject::ProcessEvent(Func, nullptr);
}

}

