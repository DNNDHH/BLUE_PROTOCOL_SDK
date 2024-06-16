#pragma once

 

// Package: ChatSettingRadioBtn

#include "Basic.hpp"

#include "ChatSettingRadioBtn_classes.hpp"
#include "ChatSettingRadioBtn_parameters.hpp"


namespace SDK
{

// Function ChatSettingRadioBtn.ChatSettingRadioBtn_C.OnChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSelectBtnId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatSettingRadioBtn_C::OnChange__DelegateSignature(int32 InSelectBtnId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatSettingRadioBtn_C", "OnChange__DelegateSignature");

	Params::ChatSettingRadioBtn_C_OnChange__DelegateSignature Parms{};

	Parms.InSelectBtnId = InSelectBtnId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatSettingRadioBtn.ChatSettingRadioBtn_C.ExecuteUbergraph_ChatSettingRadioBtn
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatSettingRadioBtn_C::ExecuteUbergraph_ChatSettingRadioBtn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatSettingRadioBtn_C", "ExecuteUbergraph_ChatSettingRadioBtn");

	Params::ChatSettingRadioBtn_C_ExecuteUbergraph_ChatSettingRadioBtn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatSettingRadioBtn.ChatSettingRadioBtn_C.BndEvt__ChatSettingRadioBtn_RadioBtn_3_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatSettingRadioBtn_C::BndEvt__ChatSettingRadioBtn_RadioBtn_3_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatSettingRadioBtn_C", "BndEvt__ChatSettingRadioBtn_RadioBtn_3_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::ChatSettingRadioBtn_C_BndEvt__ChatSettingRadioBtn_RadioBtn_3_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatSettingRadioBtn.ChatSettingRadioBtn_C.BndEvt__ChatSettingRadioBtn_RadioBtn_2_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatSettingRadioBtn_C::BndEvt__ChatSettingRadioBtn_RadioBtn_2_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatSettingRadioBtn_C", "BndEvt__ChatSettingRadioBtn_RadioBtn_2_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::ChatSettingRadioBtn_C_BndEvt__ChatSettingRadioBtn_RadioBtn_2_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatSettingRadioBtn.ChatSettingRadioBtn_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UChatSettingRadioBtn_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatSettingRadioBtn_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatSettingRadioBtn.ChatSettingRadioBtn_C.UpdateBlocker
// (BlueprintCallable, BlueprintEvent)

void UChatSettingRadioBtn_C::UpdateBlocker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatSettingRadioBtn_C", "UpdateBlocker");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatSettingRadioBtn.ChatSettingRadioBtn_C.BndEvt__UnreadNotifyRadioBtn_RadioBtn_OFF_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatSettingRadioBtn_C::BndEvt__UnreadNotifyRadioBtn_RadioBtn_OFF_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatSettingRadioBtn_C", "BndEvt__UnreadNotifyRadioBtn_RadioBtn_OFF_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::ChatSettingRadioBtn_C_BndEvt__UnreadNotifyRadioBtn_RadioBtn_OFF_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatSettingRadioBtn.ChatSettingRadioBtn_C.BndEvt__UnreadNotifyRadioBtn_RadioBtn_ON_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatSettingRadioBtn_C::BndEvt__UnreadNotifyRadioBtn_RadioBtn_ON_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatSettingRadioBtn_C", "BndEvt__UnreadNotifyRadioBtn_RadioBtn_ON_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::ChatSettingRadioBtn_C_BndEvt__UnreadNotifyRadioBtn_RadioBtn_ON_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatSettingRadioBtn.ChatSettingRadioBtn_C.InitBtnSetting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   BtnId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatSettingRadioBtn_C::InitBtnSetting(int32 BtnId, bool InEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatSettingRadioBtn_C", "InitBtnSetting");

	Params::ChatSettingRadioBtn_C_InitBtnSetting Parms{};

	Parms.BtnId = BtnId;
	Parms.InEnable = InEnable;

	UObject::ProcessEvent(Func, &Parms);
}

}

