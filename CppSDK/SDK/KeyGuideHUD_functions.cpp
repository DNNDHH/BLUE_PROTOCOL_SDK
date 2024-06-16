#pragma once

 

// Package: KeyGuideHUD

#include "Basic.hpp"

#include "KeyGuideHUD_classes.hpp"
#include "KeyGuideHUD_parameters.hpp"


namespace SDK
{

// Function KeyGuideHUD.KeyGuideHUD_C.ExecuteUbergraph_KeyGuideHUD
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyGuideHUD_C::ExecuteUbergraph_KeyGuideHUD(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuideHUD_C", "ExecuteUbergraph_KeyGuideHUD");

	Params::KeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyGuideHUD.KeyGuideHUD_C.UIVisibleSettingChangeEnvet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBUIType                               InUIType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInInstantly                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyGuideHUD_C::UIVisibleSettingChangeEnvet(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuideHUD_C", "UIVisibleSettingChangeEnvet");

	Params::KeyGuideHUD_C_UIVisibleSettingChangeEnvet Parms{};

	Parms.InUIType = InUIType;
	Parms.bInVisibility = bInVisibility;
	Parms.bInInstantly = bInInstantly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyGuideHUD.KeyGuideHUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UKeyGuideHUD_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuideHUD_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyGuideHUD.KeyGuideHUD_C.RetryKeyGuideVisibilityEvent
// (BlueprintCallable, BlueprintEvent)

void UKeyGuideHUD_C::RetryKeyGuideVisibilityEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuideHUD_C", "RetryKeyGuideVisibilityEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyGuideHUD.KeyGuideHUD_C.RetryKeyGuide2VisibilityEvent
// (BlueprintCallable, BlueprintEvent)

void UKeyGuideHUD_C::RetryKeyGuide2VisibilityEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuideHUD_C", "RetryKeyGuide2VisibilityEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyGuideHUD.KeyGuideHUD_C.BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_0_OnChangeKeyGuideVisibilityEvent__DelegateSignature
// (BlueprintEvent)

void UKeyGuideHUD_C::BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_0_OnChangeKeyGuideVisibilityEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuideHUD_C", "BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_0_OnChangeKeyGuideVisibilityEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyGuideHUD.KeyGuideHUD_C.BndEvt__KeyGuideHUD_KeyGuide_95_K2Node_ComponentBoundEvent_4_OnChangeKeyGuideVisibilityEvent__DelegateSignature
// (BlueprintEvent)

void UKeyGuideHUD_C::BndEvt__KeyGuideHUD_KeyGuide_95_K2Node_ComponentBoundEvent_4_OnChangeKeyGuideVisibilityEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuideHUD_C", "BndEvt__KeyGuideHUD_KeyGuide_95_K2Node_ComponentBoundEvent_4_OnChangeKeyGuideVisibilityEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyGuideHUD.KeyGuideHUD_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyGuideHUD_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuideHUD_C", "OnAnimationFinished");

	Params::KeyGuideHUD_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyGuideHUD.KeyGuideHUD_C.BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_3_OnCheerfulItemEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    IsCheerfulItem                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyGuideHUD_C::BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_3_OnCheerfulItemEvent__DelegateSignature(bool IsCheerfulItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuideHUD_C", "BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_3_OnCheerfulItemEvent__DelegateSignature");

	Params::KeyGuideHUD_C_BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_3_OnCheerfulItemEvent__DelegateSignature Parms{};

	Parms.IsCheerfulItem = IsCheerfulItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyGuideHUD.KeyGuideHUD_C.OnReset
// (Event, Public, BlueprintEvent)

void UKeyGuideHUD_C::OnReset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuideHUD_C", "OnReset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyGuideHUD.KeyGuideHUD_C.OnPlayAnim
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bOpen                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyGuideHUD_C::OnPlayAnim(bool bOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuideHUD_C", "OnPlayAnim");

	Params::KeyGuideHUD_C_OnPlayAnim Parms{};

	Parms.bOpen = bOpen;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyGuideHUD.KeyGuideHUD_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyGuideHUD_C::CustomEvent_0(bool Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuideHUD_C", "CustomEvent_0");

	Params::KeyGuideHUD_C_CustomEvent_0 Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyGuideHUD.KeyGuideHUD_C.BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_2_OnChangeMountEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    IsMount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyGuideHUD_C::BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_2_OnChangeMountEvent__DelegateSignature(bool IsMount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuideHUD_C", "BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_2_OnChangeMountEvent__DelegateSignature");

	Params::KeyGuideHUD_C_BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_2_OnChangeMountEvent__DelegateSignature Parms{};

	Parms.IsMount = IsMount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyGuideHUD.KeyGuideHUD_C.SetEditMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEdit                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyGuideHUD_C::SetEditMode(bool IsEdit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuideHUD_C", "SetEditMode");

	Params::KeyGuideHUD_C_SetEditMode Parms{};

	Parms.IsEdit = IsEdit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyGuideHUD.KeyGuideHUD_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    Param_IsDesignTime                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyGuideHUD_C::PreConstruct(bool Param_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuideHUD_C", "PreConstruct");

	Params::KeyGuideHUD_C_PreConstruct Parms{};

	Parms.Param_IsDesignTime = Param_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyGuideHUD.KeyGuideHUD_C.Initialize
// (BlueprintCallable, BlueprintEvent)

void UKeyGuideHUD_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuideHUD_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyGuideHUD.KeyGuideHUD_C.ChangeKeyGuideVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UKeyGuideHUD_C::ChangeKeyGuideVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuideHUD_C", "ChangeKeyGuideVisibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyGuideHUD.KeyGuideHUD_C.ChangeKeyGuide2Visibility
// (Public, BlueprintCallable, BlueprintEvent)

void UKeyGuideHUD_C::ChangeKeyGuide2Visibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuideHUD_C", "ChangeKeyGuide2Visibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyGuideHUD.KeyGuideHUD_C.GetKeyGuideSize
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector2D UKeyGuideHUD_C::GetKeyGuideSize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuideHUD_C", "GetKeyGuideSize");

	Params::KeyGuideHUD_C_GetKeyGuideSize Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function KeyGuideHUD.KeyGuideHUD_C.GetKeyGuide2Size
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector2D UKeyGuideHUD_C::GetKeyGuide2Size()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuideHUD_C", "GetKeyGuide2Size");

	Params::KeyGuideHUD_C_GetKeyGuide2Size Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function KeyGuideHUD.KeyGuideHUD_C.ChangeKeyGuide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EKeyGuideType                           InKeyGuideType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyGuideHUD_C::ChangeKeyGuide(EKeyGuideType InKeyGuideType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuideHUD_C", "ChangeKeyGuide");

	Params::KeyGuideHUD_C_ChangeKeyGuide Parms{};

	Parms.InKeyGuideType = InKeyGuideType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyGuideHUD.KeyGuideHUD_C.ChangeKeyGuide2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EKeyGuideType                           InKeyGuideType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyGuideHUD_C::ChangeKeyGuide2(EKeyGuideType InKeyGuideType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuideHUD_C", "ChangeKeyGuide2");

	Params::KeyGuideHUD_C_ChangeKeyGuide2 Parms{};

	Parms.InKeyGuideType = InKeyGuideType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyGuideHUD.KeyGuideHUD_C.Is Key Guide Animation
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyGuideHUD_C::Is_Key_Guide_Animation(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuideHUD_C", "Is Key Guide Animation");

	Params::KeyGuideHUD_C_Is_Key_Guide_Animation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function KeyGuideHUD.KeyGuideHUD_C.Reset
// (Private, BlueprintCallable, BlueprintEvent)

void UKeyGuideHUD_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuideHUD_C", "Reset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyGuideHUD.KeyGuideHUD_C.SetKeyGuideTextVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkillActionPosition                    SkillActionPosition                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyGuideHUD_C::SetKeyGuideTextVisible(ESkillActionPosition SkillActionPosition, bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuideHUD_C", "SetKeyGuideTextVisible");

	Params::KeyGuideHUD_C_SetKeyGuideTextVisible Parms{};

	Parms.SkillActionPosition = SkillActionPosition;
	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyGuideHUD.KeyGuideHUD_C.Is Key Input BP
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyGuideHUD_C::Is_Key_Input_BP(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuideHUD_C", "Is Key Input BP");

	Params::KeyGuideHUD_C_Is_Key_Input_BP Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function KeyGuideHUD.KeyGuideHUD_C.GetPlayerCharacter
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASBPlayerCharacter*               AsSBPlayer_Character                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyGuideHUD_C::GetPlayerCharacter(bool* Result, class ASBPlayerCharacter** AsSBPlayer_Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuideHUD_C", "GetPlayerCharacter");

	Params::KeyGuideHUD_C_GetPlayerCharacter Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (AsSBPlayer_Character != nullptr)
		*AsSBPlayer_Character = Parms.AsSBPlayer_Character;
}


// Function KeyGuideHUD.KeyGuideHUD_C.GetKBPressed
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASBPlayerCharacter*               _____                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyGuideHUD_C::GetKBPressed(class ASBPlayerCharacter* _____, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuideHUD_C", "GetKBPressed");

	Params::KeyGuideHUD_C_GetKBPressed Parms{};

	Parms._____ = _____;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function KeyGuideHUD.KeyGuideHUD_C.GetGamepadPressed
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASBPlayerCharacter*               _____                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyGuideHUD_C::GetGamepadPressed(class ASBPlayerCharacter* _____, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuideHUD_C", "GetGamepadPressed");

	Params::KeyGuideHUD_C_GetGamepadPressed Parms{};

	Parms._____ = _____;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function KeyGuideHUD.KeyGuideHUD_C.GetClassKeyConfig
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASBPlayerCharacter*               _____                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBPlayerClassKeyConfigData      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FSBPlayerClassKeyConfigData UKeyGuideHUD_C::GetClassKeyConfig(class ASBPlayerCharacter* _____)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuideHUD_C", "GetClassKeyConfig");

	Params::KeyGuideHUD_C_GetClassKeyConfig Parms{};

	Parms._____ = _____;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function KeyGuideHUD.KeyGuideHUD_C.UpdateKeyGuide
// (Public, BlueprintCallable, BlueprintEvent)

void UKeyGuideHUD_C::UpdateKeyGuide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuideHUD_C", "UpdateKeyGuide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function KeyGuideHUD.KeyGuideHUD_C.SetKeyGuideNaviVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility                        InVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyGuideHUD_C::SetKeyGuideNaviVisibility(ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuideHUD_C", "SetKeyGuideNaviVisibility");

	Params::KeyGuideHUD_C_SetKeyGuideNaviVisibility Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function KeyGuideHUD.KeyGuideHUD_C.IsPlayAnimation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UKeyGuideHUD_C::IsPlayAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("KeyGuideHUD_C", "IsPlayAnimation");

	Params::KeyGuideHUD_C_IsPlayAnimation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

