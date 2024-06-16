#pragma once

 

// Package: KeyGuide

#include "Basic.hpp"

#include "KeyGuide_classes.hpp"
#include "KeyGuide_parameters.hpp"


namespace SDK
{

// Function KeyGuide.KeyGuide_C.OnChangeKeyGuideVisibilityEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UKeyGuide_C::OnChangeKeyGuideVisibilityEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_C", "OnChangeKeyGuideVisibilityEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyGuide.KeyGuide_C.ExecuteUbergraph_KeyGuide
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyGuide_C::ExecuteUbergraph_KeyGuide(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_C", "ExecuteUbergraph_KeyGuide");

	Params::KeyGuide_C_ExecuteUbergraph_KeyGuide Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyGuide.KeyGuide_C.InitKeyGuideSettingTimerEvent
// (BlueprintCallable, BlueprintEvent)

void UKeyGuide_C::InitKeyGuideSettingTimerEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_C", "InitKeyGuideSettingTimerEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyGuide.KeyGuide_C.Unbind Pad Skin Change
// (BlueprintCallable, BlueprintEvent)

void UKeyGuide_C::Unbind_Pad_Skin_Change()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_C", "Unbind Pad Skin Change");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyGuide.KeyGuide_C.Bind Pad Skin Change
// (BlueprintCallable, BlueprintEvent)

void UKeyGuide_C::Bind_Pad_Skin_Change()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_C", "Bind Pad Skin Change");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyGuide.KeyGuide_C.OnChangePad
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBPadKeySkinType                       SkinType                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyGuide_C::OnChangePad(const ESBPadKeySkinType SkinType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_C", "OnChangePad");

	Params::KeyGuide_C_OnChangePad Parms{};

	Parms.SkinType = SkinType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyGuide.KeyGuide_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyGuide_C::CustomEvent_0(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_C", "CustomEvent_0");

	Params::KeyGuide_C_CustomEvent_0 Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyGuide.KeyGuide_C.UnbindUpdateKeyConfigDelegate
// (BlueprintCallable, BlueprintEvent)

void UKeyGuide_C::UnbindUpdateKeyConfigDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_C", "UnbindUpdateKeyConfigDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyGuide.KeyGuide_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UKeyGuide_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyGuide.KeyGuide_C.UnbindAdventurerRankDelegate
// (BlueprintCallable, BlueprintEvent)

void UKeyGuide_C::UnbindAdventurerRankDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_C", "UnbindAdventurerRankDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyGuide.KeyGuide_C.SetEditMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsEdit                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyGuide_C::SetEditMode(bool bIsEdit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_C", "SetEditMode");

	Params::KeyGuide_C_SetEditMode Parms{};

	Parms.bIsEdit = bIsEdit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyGuide.KeyGuide_C.ChangeKeyGuideVisibilityAuto
// (BlueprintCallable, BlueprintEvent)

void UKeyGuide_C::ChangeKeyGuideVisibilityAuto()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_C", "ChangeKeyGuideVisibilityAuto");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyGuide.KeyGuide_C.OnAdventurerRankDelegate_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRetCode                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyGuide_C::OnAdventurerRankDelegate_Event(const int32 InRetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_C", "OnAdventurerRankDelegate_Event");

	Params::KeyGuide_C_OnAdventurerRankDelegate_Event Parms{};

	Parms.InRetCode = InRetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyGuide.KeyGuide_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    Param_IsDesignTime                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyGuide_C::PreConstruct(bool Param_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_C", "PreConstruct");

	Params::KeyGuide_C_PreConstruct Parms{};

	Parms.Param_IsDesignTime = Param_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyGuide.KeyGuide_C.OnRetryKeyGuideType
// (BlueprintCallable, BlueprintEvent)

void UKeyGuide_C::OnRetryKeyGuideType()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_C", "OnRetryKeyGuideType");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyGuide.KeyGuide_C.OnUpdateKeyConfig
// (BlueprintCallable, BlueprintEvent)

void UKeyGuide_C::OnUpdateKeyConfig()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_C", "OnUpdateKeyConfig");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyGuide.KeyGuide_C.ChangeKeyGuideVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyGuide_C::ChangeKeyGuideVisibility(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_C", "ChangeKeyGuideVisibility");

	Params::KeyGuide_C_ChangeKeyGuideVisibility Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyGuide.KeyGuide_C.ChangeKeyGuide
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EKeyGuideType                           InKeyGuideType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyGuide_C::ChangeKeyGuide(EKeyGuideType InKeyGuideType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_C", "ChangeKeyGuide");

	Params::KeyGuide_C_ChangeKeyGuide Parms{};

	Parms.InKeyGuideType = InKeyGuideType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyGuide.KeyGuide_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UKeyGuide_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyGuide.KeyGuide_C.IsKeyGuideAuto
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bAuto                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyGuide_C::IsKeyGuideAuto(bool* bAuto)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_C", "IsKeyGuideAuto");

	Params::KeyGuide_C_IsKeyGuideAuto Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bAuto != nullptr)
		*bAuto = Parms.bAuto;
}


// Function KeyGuide.KeyGuide_C.SetTextVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkillActionPosition                    Param_SkillActionPosition                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyGuide_C::SetTextVisible(ESkillActionPosition Param_SkillActionPosition, bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_C", "SetTextVisible");

	Params::KeyGuide_C_SetTextVisible Parms{};

	Parms.Param_SkillActionPosition = Param_SkillActionPosition;
	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyGuide.KeyGuide_C.UpdateTextVisible
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UKeyGuide_C::UpdateTextVisible()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_C", "UpdateTextVisible");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyGuide.KeyGuide_C.SetKeyGuide_OfflineBattle
// (Public, BlueprintCallable, BlueprintEvent)

void UKeyGuide_C::SetKeyGuide_OfflineBattle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_C", "SetKeyGuide_OfflineBattle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyGuide.KeyGuide_C.SetKeyGuide_Mount
// (Public, BlueprintCallable, BlueprintEvent)

void UKeyGuide_C::SetKeyGuide_Mount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_C", "SetKeyGuide_Mount");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyGuide.KeyGuide_C.SetKeyGuide_CheerfulItem
// (Public, BlueprintCallable, BlueprintEvent)

void UKeyGuide_C::SetKeyGuide_CheerfulItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_C", "SetKeyGuide_CheerfulItem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyGuide.KeyGuide_C.ExecChangeKeyGuide
// (Public, BlueprintCallable, BlueprintEvent)

void UKeyGuide_C::ExecChangeKeyGuide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuide_C", "ExecChangeKeyGuide");

	UObject::ProcessEvent(Func, nullptr);
}

}

