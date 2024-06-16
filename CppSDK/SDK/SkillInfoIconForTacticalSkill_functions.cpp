#pragma once

 

// Package: SkillInfoIconForTacticalSkill

#include "Basic.hpp"

#include "SkillInfoIconForTacticalSkill_classes.hpp"
#include "SkillInfoIconForTacticalSkill_parameters.hpp"


namespace SDK
{

// Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.OnTacticalSkillIconPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkillActionPosition                    InTacticalSkillSAP                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSkillId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSkillLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoIconForTacticalSkill_C::OnTacticalSkillIconPressed__DelegateSignature(ESkillActionPosition InTacticalSkillSAP, int32 InSkillId, int32 InSkillLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForTacticalSkill_C", "OnTacticalSkillIconPressed__DelegateSignature");

	Params::SkillInfoIconForTacticalSkill_C_OnTacticalSkillIconPressed__DelegateSignature Parms{};

	Parms.InTacticalSkillSAP = InTacticalSkillSAP;
	Parms.InSkillId = InSkillId;
	Parms.InSkillLevel = InSkillLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.ExecuteUbergraph_SkillInfoIconForTacticalSkill
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoIconForTacticalSkill_C::ExecuteUbergraph_SkillInfoIconForTacticalSkill(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForTacticalSkill_C", "ExecuteUbergraph_SkillInfoIconForTacticalSkill");

	Params::SkillInfoIconForTacticalSkill_C_ExecuteUbergraph_SkillInfoIconForTacticalSkill Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoIconForTacticalSkill_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForTacticalSkill_C", "PreConstruct");

	Params::SkillInfoIconForTacticalSkill_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.BndEvt__MyCharaMenu_SkillInfoItemBaseForBattleSet_SBButtonForTacticalSkill1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void USkillInfoIconForTacticalSkill_C::BndEvt__MyCharaMenu_SkillInfoItemBaseForBattleSet_SBButtonForTacticalSkill1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForTacticalSkill_C", "BndEvt__MyCharaMenu_SkillInfoItemBaseForBattleSet_SBButtonForTacticalSkill1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USkillInfoIconForTacticalSkill_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForTacticalSkill_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.CreateTooltip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsNotUseTooltip                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoIconForTacticalSkill_C::CreateTooltip(bool InIsNotUseTooltip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForTacticalSkill_C", "CreateTooltip");

	Params::SkillInfoIconForTacticalSkill_C_CreateTooltip Parms{};

	Parms.InIsNotUseTooltip = InIsNotUseTooltip;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.SetSkillInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSkillId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSkillLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsInformationHidden                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InIsSkillMastery                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoIconForTacticalSkill_C::SetSkillInfo(int32 InSkillId, int32 InSkillLevel, bool InIsInformationHidden, bool InIsSkillMastery)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForTacticalSkill_C", "SetSkillInfo");

	Params::SkillInfoIconForTacticalSkill_C_SetSkillInfo Parms{};

	Parms.InSkillId = InSkillId;
	Parms.InSkillLevel = InSkillLevel;
	Parms.InIsInformationHidden = InIsInformationHidden;
	Parms.InIsSkillMastery = InIsSkillMastery;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.SetLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSkillId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoIconForTacticalSkill_C::SetLevel(int32 InLevel, int32 InSkillId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForTacticalSkill_C", "SetLevel");

	Params::SkillInfoIconForTacticalSkill_C_SetLevel Parms{};

	Parms.InLevel = InLevel;
	Parms.InSkillId = InSkillId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.SetSkillButtonOffBase
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsButtonOff                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoIconForTacticalSkill_C::SetSkillButtonOffBase(bool InIsButtonOff)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForTacticalSkill_C", "SetSkillButtonOffBase");

	Params::SkillInfoIconForTacticalSkill_C_SetSkillButtonOffBase Parms{};

	Parms.InIsButtonOff = InIsButtonOff;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.SetIsTacticalSkillEmpty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkillActionPosition                    InSAP                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsEmpty                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoIconForTacticalSkill_C::SetIsTacticalSkillEmpty(ESkillActionPosition InSAP, bool InIsEmpty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForTacticalSkill_C", "SetIsTacticalSkillEmpty");

	Params::SkillInfoIconForTacticalSkill_C_SetIsTacticalSkillEmpty Parms{};

	Parms.InSAP = InSAP;
	Parms.InIsEmpty = InIsEmpty;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.SetTacticalSkillButtonOff
// (Public, BlueprintCallable, BlueprintEvent)

void USkillInfoIconForTacticalSkill_C::SetTacticalSkillButtonOff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForTacticalSkill_C", "SetTacticalSkillButtonOff");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.UpdateTacticalSkillIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkillActionPosition                    InSAP                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSkillId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsMastery                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoIconForTacticalSkill_C::UpdateTacticalSkillIcon(ESkillActionPosition InSAP, int32 InSkillId, bool InIsMastery)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForTacticalSkill_C", "UpdateTacticalSkillIcon");

	Params::SkillInfoIconForTacticalSkill_C_UpdateTacticalSkillIcon Parms{};

	Parms.InSAP = InSAP;
	Parms.InSkillId = InSkillId;
	Parms.InIsMastery = InIsMastery;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.InitSkillEmptyColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkillActionPosition                    InSAP                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoIconForTacticalSkill_C::InitSkillEmptyColor(ESkillActionPosition InSAP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForTacticalSkill_C", "InitSkillEmptyColor");

	Params::SkillInfoIconForTacticalSkill_C_InitSkillEmptyColor Parms{};

	Parms.InSAP = InSAP;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.InitSkillStopUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkillActionPosition                    InSAP                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoIconForTacticalSkill_C::InitSkillStopUpdate(ESkillActionPosition InSAP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForTacticalSkill_C", "InitSkillStopUpdate");

	Params::SkillInfoIconForTacticalSkill_C_InitSkillStopUpdate Parms{};

	Parms.InSAP = InSAP;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.SetTacticalSkillAbillityType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBSkillAbilityType                     InSkillAbilityType                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoIconForTacticalSkill_C::SetTacticalSkillAbillityType(ESBSkillAbilityType InSkillAbilityType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForTacticalSkill_C", "SetTacticalSkillAbillityType");

	Params::SkillInfoIconForTacticalSkill_C_SetTacticalSkillAbillityType Parms{};

	Parms.InSkillAbilityType = InSkillAbilityType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.SwitchSkillBg
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bBehind                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bAnim                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoIconForTacticalSkill_C::SwitchSkillBg(bool bBehind, bool bAnim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForTacticalSkill_C", "SwitchSkillBg");

	Params::SkillInfoIconForTacticalSkill_C_SwitchSkillBg Parms{};

	Parms.bBehind = bBehind;
	Parms.bAnim = bAnim;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoIconForTacticalSkill.SkillInfoIconForTacticalSkill_C.SetBtnForPadCursorMoveVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoIconForTacticalSkill_C::SetBtnForPadCursorMoveVisible(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForTacticalSkill_C", "SetBtnForPadCursorMoveVisible");

	Params::SkillInfoIconForTacticalSkill_C_SetBtnForPadCursorMoveVisible Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}

}

