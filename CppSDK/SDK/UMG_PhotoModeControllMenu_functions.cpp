#pragma once

 

// Package: UMG_PhotoModeControllMenu

#include "Basic.hpp"

#include "UMG_PhotoModeControllMenu_classes.hpp"
#include "UMG_PhotoModeControllMenu_parameters.hpp"


namespace SDK
{

// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.ExecuteUbergraph_UMG_PhotoModeControllMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeControllMenu_C::ExecuteUbergraph_UMG_PhotoModeControllMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "ExecuteUbergraph_UMG_PhotoModeControllMenu");

	Params::UMG_PhotoModeControllMenu_C_ExecuteUbergraph_UMG_PhotoModeControllMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.UpdateSkillList
// (BlueprintCallable, BlueprintEvent)

void UUMG_PhotoModeControllMenu_C::UpdateSkillList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "UpdateSkillList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.RefreshPlayerControlData
// (BlueprintCallable, BlueprintEvent)

void UUMG_PhotoModeControllMenu_C::RefreshPlayerControlData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "RefreshPlayerControlData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.TogglePlayerControlView
// (BlueprintCallable, BlueprintEvent)

void UUMG_PhotoModeControllMenu_C::TogglePlayerControlView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "TogglePlayerControlView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.ToggleCameraControlView
// (BlueprintCallable, BlueprintEvent)

void UUMG_PhotoModeControllMenu_C::ToggleCameraControlView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "ToggleCameraControlView");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.UpdateDesign
// (BlueprintCallable, BlueprintEvent)

void UUMG_PhotoModeControllMenu_C::UpdateDesign()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "UpdateDesign");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.OnChangeVisibleSetting
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBUIType                               InUIType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInInstantly                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PhotoModeControllMenu_C::OnChangeVisibleSetting(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "OnChangeVisibleSetting");

	Params::UMG_PhotoModeControllMenu_C_OnChangeVisibleSetting Parms{};

	Parms.InUIType = InUIType;
	Parms.bInVisibility = bInVisibility;
	Parms.bInInstantly = bInInstantly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.OnScreenShotCapturedEvent
// (BlueprintCallable, BlueprintEvent)

void UUMG_PhotoModeControllMenu_C::OnScreenShotCapturedEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "OnScreenShotCapturedEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_PhotoModeControllMenu_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetTalkMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bTalkMode                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PhotoModeControllMenu_C::SetTalkMode(bool Param_bTalkMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "SetTalkMode");

	Params::UMG_PhotoModeControllMenu_C_SetTalkMode Parms{};

	Parms.Param_bTalkMode = Param_bTalkMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_PhotoModeControllMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetControlMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bPlayerControlMode                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PhotoModeControllMenu_C::SetControlMode(bool Param_bPlayerControlMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "SetControlMode");

	Params::UMG_PhotoModeControllMenu_C_SetControlMode Parms{};

	Parms.Param_bPlayerControlMode = Param_bPlayerControlMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PhotoModeControllMenu_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "PreConstruct");

	Params::UMG_PhotoModeControllMenu_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetPhotoModeContoller
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SBPhotoModeController_C*      PMC                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeControllMenu_C::SetPhotoModeContoller(class ABP_SBPhotoModeController_C* PMC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "SetPhotoModeContoller");

	Params::UMG_PhotoModeControllMenu_C_SetPhotoModeContoller Parms{};

	Parms.PMC = PMC;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_36_OnChangeCloseEyes__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bCloseEyes                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_36_OnChangeCloseEyes__DelegateSignature(bool bCloseEyes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_36_OnChangeCloseEyes__DelegateSignature");

	Params::UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_36_OnChangeCloseEyes__DelegateSignature Parms{};

	Parms.bCloseEyes = bCloseEyes;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_31_OnChangeLipSync__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ESBLipSyncType                          LipSyncType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_31_OnChangeLipSync__DelegateSignature(ESBLipSyncType LipSyncType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_31_OnChangeLipSync__DelegateSignature");

	Params::UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_31_OnChangeLipSync__DelegateSignature Parms{};

	Parms.LipSyncType = LipSyncType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_34_OnChangePale__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_34_OnChangePale__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_34_OnChangePale__DelegateSignature");

	Params::UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_34_OnChangePale__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_29_OnChangeBlush__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_29_OnChangeBlush__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_29_OnChangeBlush__DelegateSignature");

	Params::UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_29_OnChangeBlush__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_SBCheckBoxCmnCheckBox01_DebugOverideTime_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_SBCheckBoxCmnCheckBox01_DebugOverideTime_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "BndEvt__UMG_PhotoModeControllMenu_SBCheckBoxCmnCheckBox01_DebugOverideTime_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_SBCheckBoxCmnCheckBox01_DebugOverideTime_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_Slider_DebugOverrideTime_K2Node_ComponentBoundEvent_23_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_Slider_DebugOverrideTime_K2Node_ComponentBoundEvent_23_OnValueChanged__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "BndEvt__UMG_PhotoModeControllMenu_Slider_DebugOverrideTime_K2Node_ComponentBoundEvent_23_OnValueChanged__DelegateSignature");

	Params::UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_Slider_DebugOverrideTime_K2Node_ComponentBoundEvent_23_OnValueChanged__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.UpdateDofUi
// (BlueprintCallable, BlueprintEvent)

void UUMG_PhotoModeControllMenu_C::UpdateDofUi()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "UpdateDofUi");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_33_OnClickEnableFacial__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_33_OnClickEnableFacial__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_33_OnClickEnableFacial__DelegateSignature");

	Params::UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_33_OnClickEnableFacial__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_32_OnChangeFacialComboBox__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ESBFacialType                           FacialType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_32_OnChangeFacialComboBox__DelegateSignature(ESBFacialType FacialType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_32_OnChangeFacialComboBox__DelegateSignature");

	Params::UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_32_OnChangeFacialComboBox__DelegateSignature Parms{};

	Parms.FacialType = FacialType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_30_OnRequestEmote__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                             EmotionId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_30_OnRequestEmote__DelegateSignature(class FName EmotionId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_30_OnRequestEmote__DelegateSignature");

	Params::UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeEmotionView_K2Node_ComponentBoundEvent_30_OnRequestEmote__DelegateSignature Parms{};

	Parms.EmotionId = EmotionId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_SBTextButton_TogglePlayerControlView_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_SBTextButton_TogglePlayerControlView_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "BndEvt__UMG_PhotoModeControllMenu_SBTextButton_TogglePlayerControlView_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetActivePlayerControlViewWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeControllMenu_C::SetActivePlayerControlViewWidget(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "SetActivePlayerControlViewWidget");

	Params::UMG_PhotoModeControllMenu_C_SetActivePlayerControlViewWidget Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_SBTextButton_Ctrl_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_SBTextButton_Ctrl_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "BndEvt__UMG_PhotoModeControllMenu_SBTextButton_Ctrl_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetRotation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                         Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PhotoModeControllMenu_C::SetRotation(const struct FRotator& Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "SetRotation");

	Params::UMG_PhotoModeControllMenu_C_SetRotation Parms{};

	Parms.Value = std::move(Value);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetFOV
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeControllMenu_C::SetFOV(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "SetFOV");

	Params::UMG_PhotoModeControllMenu_C_SetFOV Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetFocalDistance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeControllMenu_C::SetFocalDistance(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "SetFocalDistance");

	Params::UMG_PhotoModeControllMenu_C_SetFocalDistance Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_CheckBox_FocusToPlayer_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_CheckBox_FocusToPlayer_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "BndEvt__UMG_PhotoModeControllMenu_CheckBox_FocusToPlayer_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature");

	Params::UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControllMenu_CheckBox_FocusToPlayer_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__SBButton_ResetCamera_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_PhotoModeControllMenu_C::BndEvt__SBButton_ResetCamera_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "BndEvt__SBButton_ResetCamera_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__SBButton_TalkMode_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_PhotoModeControllMenu_C::BndEvt__SBButton_TalkMode_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "BndEvt__SBButton_TalkMode_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetLookAtPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bLookAtPlayer                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PhotoModeControllMenu_C::SetLookAtPlayer(bool bLookAtPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "SetLookAtPlayer");

	Params::UMG_PhotoModeControllMenu_C_SetLookAtPlayer Parms{};

	Parms.bLookAtPlayer = bLookAtPlayer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__MaxForegroundRadius_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeControllMenu_C::BndEvt__MaxForegroundRadius_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "BndEvt__MaxForegroundRadius_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature");

	Params::UMG_PhotoModeControllMenu_C_BndEvt__MaxForegroundRadius_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__MaxBackgroundRadius_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeControllMenu_C::BndEvt__MaxBackgroundRadius_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "BndEvt__MaxBackgroundRadius_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature");

	Params::UMG_PhotoModeControllMenu_C_BndEvt__MaxBackgroundRadius_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__SBCheckBox_C_293_K2Node_ComponentBoundEvent_38_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PhotoModeControllMenu_C::BndEvt__SBCheckBox_C_293_K2Node_ComponentBoundEvent_38_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "BndEvt__SBCheckBox_C_293_K2Node_ComponentBoundEvent_38_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UMG_PhotoModeControllMenu_C_BndEvt__SBCheckBox_C_293_K2Node_ComponentBoundEvent_38_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Slider_FOV_2_K2Node_ComponentBoundEvent_37_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeControllMenu_C::BndEvt__Slider_FOV_2_K2Node_ComponentBoundEvent_37_OnValueChanged__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "BndEvt__Slider_FOV_2_K2Node_ComponentBoundEvent_37_OnValueChanged__DelegateSignature");

	Params::UMG_PhotoModeControllMenu_C_BndEvt__Slider_FOV_2_K2Node_ComponentBoundEvent_37_OnValueChanged__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__SBButton_ResetCamera_2_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_PhotoModeControllMenu_C::BndEvt__SBButton_ResetCamera_2_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "BndEvt__SBButton_ResetCamera_2_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControlMenuSkillList_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCharaCreateClassSkillMenuItem_C* Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControlMenuSkillList_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature(class UCharaCreateClassSkillMenuItem_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "BndEvt__UMG_PhotoModeControlMenuSkillList_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature");

	Params::UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControlMenuSkillList_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControlMenuSkillList_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCharaCreateClassSkillMenuItem_C* Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControlMenuSkillList_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature(class UCharaCreateClassSkillMenuItem_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "BndEvt__UMG_PhotoModeControlMenuSkillList_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature");

	Params::UMG_PhotoModeControllMenu_C_BndEvt__UMG_PhotoModeControlMenuSkillList_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Button_TabRight_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_PhotoModeControllMenu_C::BndEvt__Button_TabRight_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "BndEvt__Button_TabRight_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Button_TabLeft_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_PhotoModeControllMenu_C::BndEvt__Button_TabLeft_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "BndEvt__Button_TabLeft_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__CmnBack01_K2Node_ComponentBoundEvent_22_EventClicked__DelegateSignature
// (BlueprintEvent)

void UUMG_PhotoModeControllMenu_C::BndEvt__CmnBack01_K2Node_ComponentBoundEvent_22_EventClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "BndEvt__CmnBack01_K2Node_ComponentBoundEvent_22_EventClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetActiveCameraControlViewWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeControllMenu_C::SetActiveCameraControlViewWidget(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "SetActiveCameraControlViewWidget");

	Params::UMG_PhotoModeControllMenu_C_SetActiveCameraControlViewWidget Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Button_Tab3_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_PhotoModeControllMenu_C::BndEvt__Button_Tab3_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "BndEvt__Button_Tab3_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Button_Tab4_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_PhotoModeControllMenu_C::BndEvt__Button_Tab4_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "BndEvt__Button_Tab4_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Button_Tab5_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_PhotoModeControllMenu_C::BndEvt__Button_Tab5_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "BndEvt__Button_Tab5_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Button_ResetRotation_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_PhotoModeControllMenu_C::BndEvt__Button_ResetRotation_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "BndEvt__Button_ResetRotation_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Button_Tab2_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_PhotoModeControllMenu_C::BndEvt__Button_Tab2_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "BndEvt__Button_Tab2_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Slider_RotationYow_K2Node_ComponentBoundEvent_14_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeControllMenu_C::BndEvt__Slider_RotationYow_K2Node_ComponentBoundEvent_14_OnValueChanged__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "BndEvt__Slider_RotationYow_K2Node_ComponentBoundEvent_14_OnValueChanged__DelegateSignature");

	Params::UMG_PhotoModeControllMenu_C_BndEvt__Slider_RotationYow_K2Node_ComponentBoundEvent_14_OnValueChanged__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Slider_RotationPitch_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeControllMenu_C::BndEvt__Slider_RotationPitch_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "BndEvt__Slider_RotationPitch_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature");

	Params::UMG_PhotoModeControllMenu_C_BndEvt__Slider_RotationPitch_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Button_LookAtPlayerOff_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_PhotoModeControllMenu_C::BndEvt__Button_LookAtPlayerOff_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "BndEvt__Button_LookAtPlayerOff_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Button_LookAtPlayerOn_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_PhotoModeControllMenu_C::BndEvt__Button_LookAtPlayerOn_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "BndEvt__Button_LookAtPlayerOn_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Button_Tab1_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_PhotoModeControllMenu_C::BndEvt__Button_Tab1_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "BndEvt__Button_Tab1_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Button_ResetTab1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_PhotoModeControllMenu_C::BndEvt__Button_ResetTab1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "BndEvt__Button_ResetTab1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__CheckBox_DOF_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PhotoModeControllMenu_C::BndEvt__CheckBox_DOF_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "BndEvt__CheckBox_DOF_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature");

	Params::UMG_PhotoModeControllMenu_C_BndEvt__CheckBox_DOF_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Slider_Aperture_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeControllMenu_C::BndEvt__Slider_Aperture_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "BndEvt__Slider_Aperture_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature");

	Params::UMG_PhotoModeControllMenu_C_BndEvt__Slider_Aperture_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Slider_FocalDistance_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeControllMenu_C::BndEvt__Slider_FocalDistance_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "BndEvt__Slider_FocalDistance_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature");

	Params::UMG_PhotoModeControllMenu_C_BndEvt__Slider_FocalDistance_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__Slider_Roll_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeControllMenu_C::BndEvt__Slider_Roll_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "BndEvt__Slider_Roll_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature");

	Params::UMG_PhotoModeControllMenu_C_BndEvt__Slider_Roll_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeControll_UploadList_K2Node_ComponentBoundEvent_5_UploadSelectWindowClickEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeControll_UploadList_K2Node_ComponentBoundEvent_5_UploadSelectWindowClickEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoModeControll_UploadList_K2Node_ComponentBoundEvent_5_UploadSelectWindowClickEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoMode_UploadWindowMenu_K2Node_ComponentBoundEvent_4_WindowUploadFaildFinishedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoMode_UploadWindowMenu_K2Node_ComponentBoundEvent_4_WindowUploadFaildFinishedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoMode_UploadWindowMenu_K2Node_ComponentBoundEvent_4_WindowUploadFaildFinishedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoMode_UploadWindowMenu_K2Node_ComponentBoundEvent_3_WindowUploadStartEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoMode_UploadWindowMenu_K2Node_ComponentBoundEvent_3_WindowUploadStartEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoMode_UploadWindowMenu_K2Node_ComponentBoundEvent_3_WindowUploadStartEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoMode_UploadWindowMenu_K2Node_ComponentBoundEvent_0_WindowUploadFinishedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoMode_UploadWindowMenu_K2Node_ComponentBoundEvent_0_WindowUploadFinishedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoMode_UploadWindowMenu_K2Node_ComponentBoundEvent_0_WindowUploadFinishedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoMode_UploadWindowMenu_K2Node_ComponentBoundEvent_1_WindowCloseFinishedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_PhotoModeControllMenu_C::BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoMode_UploadWindowMenu_K2Node_ComponentBoundEvent_1_WindowCloseFinishedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "BndEvt__UMG_PhotoModeControllMenu_UMG_PhotoMode_UploadWindowMenu_K2Node_ComponentBoundEvent_1_WindowCloseFinishedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UUMG_PhotoModeControllMenu_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "OnMouseButtonDown");

	Params::UMG_PhotoModeControllMenu_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.OnDragOver
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    PointerEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*               Operation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUMG_PhotoModeControllMenu_C::OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "OnDragOver");

	Params::UMG_PhotoModeControllMenu_C_OnDragOver Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.PointerEvent = std::move(PointerEvent);
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    PointerEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*               Operation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUMG_PhotoModeControllMenu_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "OnDrop");

	Params::UMG_PhotoModeControllMenu_C_OnDrop Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.PointerEvent = std::move(PointerEvent);
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.On_DropHitBG_MouseButtonDown
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UUMG_PhotoModeControllMenu_C::On_DropHitBG_MouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "On_DropHitBG_MouseButtonDown");

	Params::UMG_PhotoModeControllMenu_C_On_DropHitBG_MouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.IsKeyboardMode
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUMG_PhotoModeControllMenu_C::IsKeyboardMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "IsKeyboardMode");

	Params::UMG_PhotoModeControllMenu_C_IsKeyboardMode Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.InitKeyGuidText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUMG_PhotoModeControllMenu_C::InitKeyGuidText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "InitKeyGuidText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.SetRootVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PhotoModeControllMenu_C::SetRootVisible(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "SetRootVisible");

	Params::UMG_PhotoModeControllMenu_C_SetRootVisible Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.IsGamepadMode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUMG_PhotoModeControllMenu_C::IsGamepadMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "IsGamepadMode");

	Params::UMG_PhotoModeControllMenu_C_IsGamepadMode Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.Create Tool Tip
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             TextId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          Param_TabButtonToolTip                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhotoModeControllMenu_C::Create_Tool_Tip(class FName TextId, class UWidget** Param_TabButtonToolTip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "Create Tool Tip");

	Params::UMG_PhotoModeControllMenu_C_Create_Tool_Tip Parms{};

	Parms.TextId = TextId;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_TabButtonToolTip != nullptr)
		*Param_TabButtonToolTip = Parms.Param_TabButtonToolTip;
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.Get_SBButton_TabRotation_ToolTipWidget_0
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UUMG_PhotoModeControllMenu_C::Get_SBButton_TabRotation_ToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "Get_SBButton_TabRotation_ToolTipWidget_0");

	Params::UMG_PhotoModeControllMenu_C_Get_SBButton_TabRotation_ToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.Get_SBButton_TabZoom_ToolTipWidget_0
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UUMG_PhotoModeControllMenu_C::Get_SBButton_TabZoom_ToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "Get_SBButton_TabZoom_ToolTipWidget_0");

	Params::UMG_PhotoModeControllMenu_C_Get_SBButton_TabZoom_ToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.Get_SBButton_TabLookAt_ToolTipWidget_0
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UUMG_PhotoModeControllMenu_C::Get_SBButton_TabLookAt_ToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "Get_SBButton_TabLookAt_ToolTipWidget_0");

	Params::UMG_PhotoModeControllMenu_C_Get_SBButton_TabLookAt_ToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.Get_SBButton_TabGesture_ToolTipWidget_0
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UUMG_PhotoModeControllMenu_C::Get_SBButton_TabGesture_ToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "Get_SBButton_TabGesture_ToolTipWidget_0");

	Params::UMG_PhotoModeControllMenu_C_Get_SBButton_TabGesture_ToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UMG_PhotoModeControllMenu.UMG_PhotoModeControllMenu_C.Get_SBButton_TabSkill_ToolTipWidget_0
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UUMG_PhotoModeControllMenu_C::Get_SBButton_TabSkill_ToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PhotoModeControllMenu_C", "Get_SBButton_TabSkill_ToolTipWidget_0");

	Params::UMG_PhotoModeControllMenu_C_Get_SBButton_TabSkill_ToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

