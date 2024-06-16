#pragma once

 

// Package: KeyGuide2

#include "Basic.hpp"

#include "KeyGuide2_classes.hpp"
#include "KeyGuide2_parameters.hpp"


namespace SDK
{

// Function KeyGuide2.KeyGuide2_C.OnChangeKeyGuideVisibilityEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UKeyGuide2_C::OnChangeKeyGuideVisibilityEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide2_C", "OnChangeKeyGuideVisibilityEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyGuide2.KeyGuide2_C.OnChangeMountEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsMount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyGuide2_C::OnChangeMountEvent__DelegateSignature(bool IsMount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide2_C", "OnChangeMountEvent__DelegateSignature");

	Params::KeyGuide2_C_OnChangeMountEvent__DelegateSignature Parms{};

	Parms.IsMount = IsMount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyGuide2.KeyGuide2_C.OnCheerfulItemEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsCheerfulItem                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyGuide2_C::OnCheerfulItemEvent__DelegateSignature(bool Param_IsCheerfulItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide2_C", "OnCheerfulItemEvent__DelegateSignature");

	Params::KeyGuide2_C_OnCheerfulItemEvent__DelegateSignature Parms{};

	Parms.Param_IsCheerfulItem = Param_IsCheerfulItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyGuide2.KeyGuide2_C.ExecuteUbergraph_KeyGuide2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyGuide2_C::ExecuteUbergraph_KeyGuide2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide2_C", "ExecuteUbergraph_KeyGuide2");

	Params::KeyGuide2_C_ExecuteUbergraph_KeyGuide2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyGuide2.KeyGuide2_C.InitKeyGuideSettingTimerEvent
// (BlueprintCallable, BlueprintEvent)

void UKeyGuide2_C::InitKeyGuideSettingTimerEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide2_C", "InitKeyGuideSettingTimerEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyGuide2.KeyGuide2_C.Unbind Pad Skin Change
// (BlueprintCallable, BlueprintEvent)

void UKeyGuide2_C::Unbind_Pad_Skin_Change()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide2_C", "Unbind Pad Skin Change");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyGuide2.KeyGuide2_C.Bind Pad Skin Change
// (BlueprintCallable, BlueprintEvent)

void UKeyGuide2_C::Bind_Pad_Skin_Change()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide2_C", "Bind Pad Skin Change");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyGuide2.KeyGuide2_C.OnChangePad
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBPadKeySkinType                       SkinType                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyGuide2_C::OnChangePad(const ESBPadKeySkinType SkinType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide2_C", "OnChangePad");

	Params::KeyGuide2_C_OnChangePad Parms{};

	Parms.SkinType = SkinType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyGuide2.KeyGuide2_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyGuide2_C::CustomEvent_0(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide2_C", "CustomEvent_0");

	Params::KeyGuide2_C_CustomEvent_0 Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyGuide2.KeyGuide2_C.UnbindUpdateKeyConfigDelegate
// (BlueprintCallable, BlueprintEvent)

void UKeyGuide2_C::UnbindUpdateKeyConfigDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide2_C", "UnbindUpdateKeyConfigDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyGuide2.KeyGuide2_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UKeyGuide2_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide2_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyGuide2.KeyGuide2_C.UnbindAdventurerRankDelegate
// (BlueprintCallable, BlueprintEvent)

void UKeyGuide2_C::UnbindAdventurerRankDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide2_C", "UnbindAdventurerRankDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyGuide2.KeyGuide2_C.SetEditMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsEdit                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyGuide2_C::SetEditMode(bool bIsEdit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide2_C", "SetEditMode");

	Params::KeyGuide2_C_SetEditMode Parms{};

	Parms.bIsEdit = bIsEdit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyGuide2.KeyGuide2_C.ChangeKeyGuideVisibilityAuto
// (BlueprintCallable, BlueprintEvent)

void UKeyGuide2_C::ChangeKeyGuideVisibilityAuto()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide2_C", "ChangeKeyGuideVisibilityAuto");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyGuide2.KeyGuide2_C.OnAdventurerRankDelegate_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRetCode                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyGuide2_C::OnAdventurerRankDelegate_Event(const int32 InRetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide2_C", "OnAdventurerRankDelegate_Event");

	Params::KeyGuide2_C_OnAdventurerRankDelegate_Event Parms{};

	Parms.InRetCode = InRetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyGuide2.KeyGuide2_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    Param_IsDesignTime                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyGuide2_C::PreConstruct(bool Param_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide2_C", "PreConstruct");

	Params::KeyGuide2_C_PreConstruct Parms{};

	Parms.Param_IsDesignTime = Param_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyGuide2.KeyGuide2_C.OnRetryKeyGuideType
// (BlueprintCallable, BlueprintEvent)

void UKeyGuide2_C::OnRetryKeyGuideType()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide2_C", "OnRetryKeyGuideType");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyGuide2.KeyGuide2_C.OnUpdateKeyConfig
// (BlueprintCallable, BlueprintEvent)

void UKeyGuide2_C::OnUpdateKeyConfig()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide2_C", "OnUpdateKeyConfig");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyGuide2.KeyGuide2_C.ChangeKeyGuideVisibility
// (BlueprintCallable, BlueprintEvent)

void UKeyGuide2_C::ChangeKeyGuideVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide2_C", "ChangeKeyGuideVisibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyGuide2.KeyGuide2_C.ChangeKeyGuide
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EKeyGuideType                           InKeyGuideType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyGuide2_C::ChangeKeyGuide(EKeyGuideType InKeyGuideType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide2_C", "ChangeKeyGuide");

	Params::KeyGuide2_C_ChangeKeyGuide Parms{};

	Parms.InKeyGuideType = InKeyGuideType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyGuide2.KeyGuide2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UKeyGuide2_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide2_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyGuide2.KeyGuide2_C.IsKeyGuideAuto
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bAuto                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyGuide2_C::IsKeyGuideAuto(bool* bAuto)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide2_C", "IsKeyGuideAuto");

	Params::KeyGuide2_C_IsKeyGuideAuto Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bAuto != nullptr)
		*bAuto = Parms.bAuto;
}


// Function KeyGuide2.KeyGuide2_C.SetKeyConfig
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    RetValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyGuide2_C::SetKeyConfig(bool* RetValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide2_C", "SetKeyConfig");

	Params::KeyGuide2_C_SetKeyConfig Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (RetValue != nullptr)
		*RetValue = Parms.RetValue;
}


// Function KeyGuide2.KeyGuide2_C.SetCheerfulItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    RetValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyGuide2_C::SetCheerfulItem(bool* RetValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide2_C", "SetCheerfulItem");

	Params::KeyGuide2_C_SetCheerfulItem Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (RetValue != nullptr)
		*RetValue = Parms.RetValue;
}


// Function KeyGuide2.KeyGuide2_C.SetKeyConfig_Cty
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    RetValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyGuide2_C::SetKeyConfig_Cty(bool* RetValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide2_C", "SetKeyConfig_Cty");

	Params::KeyGuide2_C_SetKeyConfig_Cty Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (RetValue != nullptr)
		*RetValue = Parms.RetValue;
}


// Function KeyGuide2.KeyGuide2_C.SetKeyConfig_OfflineBattle
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    RetValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyGuide2_C::SetKeyConfig_OfflineBattle(bool* RetValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide2_C", "SetKeyConfig_OfflineBattle");

	Params::KeyGuide2_C_SetKeyConfig_OfflineBattle Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (RetValue != nullptr)
		*RetValue = Parms.RetValue;
}


// Function KeyGuide2.KeyGuide2_C.SetIsMount
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    RetValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyGuide2_C::SetIsMount(bool* RetValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide2_C", "SetIsMount");

	Params::KeyGuide2_C_SetIsMount Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (RetValue != nullptr)
		*RetValue = Parms.RetValue;
}


// Function KeyGuide2.KeyGuide2_C.GetPlayerClassKeyConfigData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSBPlayerClassKeyConfigData      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FSBPlayerClassKeyConfigData UKeyGuide2_C::GetPlayerClassKeyConfigData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide2_C", "GetPlayerClassKeyConfigData");

	Params::KeyGuide2_C_GetPlayerClassKeyConfigData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function KeyGuide2.KeyGuide2_C.ExecChangeKeyGuide
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UKeyGuide2_C::ExecChangeKeyGuide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide2_C", "ExecChangeKeyGuide");

	UObject::ProcessEvent(Func, nullptr);
}

}

