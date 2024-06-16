#pragma once

 

// Package: SkillInfoForBattleSetTop

#include "Basic.hpp"

#include "SkillInfoForBattleSetTop_classes.hpp"
#include "SkillInfoForBattleSetTop_parameters.hpp"


namespace SDK
{

// Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.OnTacticalSkillIconPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkillActionPosition                    InTacticalSkillSAP                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSkillId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSkillLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoForBattleSetTop_C::OnTacticalSkillIconPressed__DelegateSignature(ESkillActionPosition InTacticalSkillSAP, int32 InSkillId, int32 InSkillLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoForBattleSetTop_C", "OnTacticalSkillIconPressed__DelegateSignature");

	Params::SkillInfoForBattleSetTop_C_OnTacticalSkillIconPressed__DelegateSignature Parms{};

	Parms.InTacticalSkillSAP = InTacticalSkillSAP;
	Parms.InSkillId = InSkillId;
	Parms.InSkillLevel = InSkillLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.OnBattleImagineIconPresssed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkillActionPosition                    InBattleImagineSAP                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           InBattleImagineUniqueId                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void USkillInfoForBattleSetTop_C::OnBattleImagineIconPresssed__DelegateSignature(ESkillActionPosition InBattleImagineSAP, const class FString& InBattleImagineUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoForBattleSetTop_C", "OnBattleImagineIconPresssed__DelegateSignature");

	Params::SkillInfoForBattleSetTop_C_OnBattleImagineIconPresssed__DelegateSignature Parms{};

	Parms.InBattleImagineSAP = InBattleImagineSAP;
	Parms.InBattleImagineUniqueId = std::move(InBattleImagineUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.ExecuteUbergraph_SkillInfoForBattleSetTop
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoForBattleSetTop_C::ExecuteUbergraph_SkillInfoForBattleSetTop(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoForBattleSetTop_C", "ExecuteUbergraph_SkillInfoForBattleSetTop");

	Params::SkillInfoForBattleSetTop_C_ExecuteUbergraph_SkillInfoForBattleSetTop Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USkillInfoForBattleSetTop_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoForBattleSetTop_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.OnTacticalSkillIconSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkillActionPosition                    InTacticalSkillSAP                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSkillId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSkillLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoForBattleSetTop_C::OnTacticalSkillIconSelected(ESkillActionPosition InTacticalSkillSAP, int32 InSkillId, int32 InSkillLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoForBattleSetTop_C", "OnTacticalSkillIconSelected");

	Params::SkillInfoForBattleSetTop_C_OnTacticalSkillIconSelected Parms{};

	Parms.InTacticalSkillSAP = InTacticalSkillSAP;
	Parms.InSkillId = InSkillId;
	Parms.InSkillLevel = InSkillLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoForBattleSetTop_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoForBattleSetTop_C", "OnAnimationFinished");

	Params::SkillInfoForBattleSetTop_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SetUIBlockerMostFrontEnable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsEnabled                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoForBattleSetTop_C::SetUIBlockerMostFrontEnable(bool InIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoForBattleSetTop_C", "SetUIBlockerMostFrontEnable");

	Params::SkillInfoForBattleSetTop_C_SetUIBlockerMostFrontEnable Parms{};

	Parms.InIsEnabled = InIsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.BndEvt__SkillInfoForBattleSetTop_SkillPaletteSwitchBtn_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bInSwitchToSubSkillPalette                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoForBattleSetTop_C::BndEvt__SkillInfoForBattleSetTop_SkillPaletteSwitchBtn_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature(bool bInSwitchToSubSkillPalette)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoForBattleSetTop_C", "BndEvt__SkillInfoForBattleSetTop_SkillPaletteSwitchBtn_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature");

	Params::SkillInfoForBattleSetTop_C_BndEvt__SkillInfoForBattleSetTop_SkillPaletteSwitchBtn_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature Parms{};

	Parms.bInSwitchToSubSkillPalette = bInSwitchToSubSkillPalette;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.BndEvt__SkillInfoForBattleSetTop_BattleImagine2a_K2Node_ComponentBoundEvent_7_OnBattleImagineIconPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ESkillActionPosition                    InBattleImagineSAP                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           InBattleImagineUniqueId                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void USkillInfoForBattleSetTop_C::BndEvt__SkillInfoForBattleSetTop_BattleImagine2a_K2Node_ComponentBoundEvent_7_OnBattleImagineIconPressed__DelegateSignature(ESkillActionPosition InBattleImagineSAP, const class FString& InBattleImagineUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoForBattleSetTop_C", "BndEvt__SkillInfoForBattleSetTop_BattleImagine2a_K2Node_ComponentBoundEvent_7_OnBattleImagineIconPressed__DelegateSignature");

	Params::SkillInfoForBattleSetTop_C_BndEvt__SkillInfoForBattleSetTop_BattleImagine2a_K2Node_ComponentBoundEvent_7_OnBattleImagineIconPressed__DelegateSignature Parms{};

	Parms.InBattleImagineSAP = InBattleImagineSAP;
	Parms.InBattleImagineUniqueId = std::move(InBattleImagineUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.BndEvt__SkillInfoForBattleSetTop_BattleImagine1a_K2Node_ComponentBoundEvent_6_OnBattleImagineIconPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ESkillActionPosition                    InBattleImagineSAP                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           InBattleImagineUniqueId                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void USkillInfoForBattleSetTop_C::BndEvt__SkillInfoForBattleSetTop_BattleImagine1a_K2Node_ComponentBoundEvent_6_OnBattleImagineIconPressed__DelegateSignature(ESkillActionPosition InBattleImagineSAP, const class FString& InBattleImagineUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoForBattleSetTop_C", "BndEvt__SkillInfoForBattleSetTop_BattleImagine1a_K2Node_ComponentBoundEvent_6_OnBattleImagineIconPressed__DelegateSignature");

	Params::SkillInfoForBattleSetTop_C_BndEvt__SkillInfoForBattleSetTop_BattleImagine1a_K2Node_ComponentBoundEvent_6_OnBattleImagineIconPressed__DelegateSignature Parms{};

	Parms.InBattleImagineSAP = InBattleImagineSAP;
	Parms.InBattleImagineUniqueId = std::move(InBattleImagineUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoForBattleSetTop_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoForBattleSetTop_C", "PreConstruct");

	Params::SkillInfoForBattleSetTop_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USkillInfoForBattleSetTop_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoForBattleSetTop_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SetupAllSkill
// (Public, BlueprintCallable, BlueprintEvent)

void USkillInfoForBattleSetTop_C::SetupAllSkill()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoForBattleSetTop_C", "SetupAllSkill");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SetupTacticalSkill
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USkillInfoForBattleSetTop_C::SetupTacticalSkill()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoForBattleSetTop_C", "SetupTacticalSkill");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SetupMainSubULTSkill
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USkillInfoForBattleSetTop_C::SetupMainSubULTSkill()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoForBattleSetTop_C", "SetupMainSubULTSkill");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SetupBattleImagine
// (Public, BlueprintCallable, BlueprintEvent)

void USkillInfoForBattleSetTop_C::SetupBattleImagine()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoForBattleSetTop_C", "SetupBattleImagine");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SetStorageMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsStorageMode                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoForBattleSetTop_C::SetStorageMode(bool InIsStorageMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoForBattleSetTop_C", "SetStorageMode");

	Params::SkillInfoForBattleSetTop_C_SetStorageMode Parms{};

	Parms.InIsStorageMode = InIsStorageMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SetSkillPaletteGrpSwtichEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsEnabled                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoForBattleSetTop_C::SetSkillPaletteGrpSwtichEnable(bool InIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoForBattleSetTop_C", "SetSkillPaletteGrpSwtichEnable");

	Params::SkillInfoForBattleSetTop_C_SetSkillPaletteGrpSwtichEnable Parms{};

	Parms.InIsEnabled = InIsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.StartSkillPaletteGrpSwitchAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InSwitchToSubSkillPalette                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InIsAnimation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoForBattleSetTop_C::StartSkillPaletteGrpSwitchAnimation(bool InSwitchToSubSkillPalette, bool InIsAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoForBattleSetTop_C", "StartSkillPaletteGrpSwitchAnimation");

	Params::SkillInfoForBattleSetTop_C_StartSkillPaletteGrpSwitchAnimation Parms{};

	Parms.InSwitchToSubSkillPalette = InSwitchToSubSkillPalette;
	Parms.InIsAnimation = InIsAnimation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SwitchTacticalSkillBg
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSubSkillPaletteAtFront                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsAnimation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoForBattleSetTop_C::SwitchTacticalSkillBg(bool IsSubSkillPaletteAtFront, bool IsAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoForBattleSetTop_C", "SwitchTacticalSkillBg");

	Params::SkillInfoForBattleSetTop_C_SwitchTacticalSkillBg Parms{};

	Parms.IsSubSkillPaletteAtFront = IsSubSkillPaletteAtFront;
	Parms.IsAnimation = IsAnimation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SetupTacticalSkillPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSkillPaletteGrp2AtFront                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoForBattleSetTop_C::SetupTacticalSkillPosition(bool IsSkillPaletteGrp2AtFront)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoForBattleSetTop_C", "SetupTacticalSkillPosition");

	Params::SkillInfoForBattleSetTop_C_SetupTacticalSkillPosition Parms{};

	Parms.IsSkillPaletteGrp2AtFront = IsSkillPaletteGrp2AtFront;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SetSkillPaletteType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInIsSubSkillPalette                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInIgnoreSwitchBtn                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoForBattleSetTop_C::SetSkillPaletteType(bool bInIsSubSkillPalette, bool bInIgnoreSwitchBtn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoForBattleSetTop_C", "SetSkillPaletteType");

	Params::SkillInfoForBattleSetTop_C_SetSkillPaletteType Parms{};

	Parms.bInIsSubSkillPalette = bInIsSubSkillPalette;
	Parms.bInIgnoreSwitchBtn = bInIgnoreSwitchBtn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.BindTacticalSkillIconEvents
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInUnbindEvent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoForBattleSetTop_C::BindTacticalSkillIconEvents(bool bInUnbindEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoForBattleSetTop_C", "BindTacticalSkillIconEvents");

	Params::SkillInfoForBattleSetTop_C_BindTacticalSkillIconEvents Parms{};

	Parms.bInUnbindEvent = bInUnbindEvent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoForBattleSetTop.SkillInfoForBattleSetTop_C.SetupTacticalSkillButtonEnable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInIsSkillPaletteGrp2AtFront                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoForBattleSetTop_C::SetupTacticalSkillButtonEnable(bool bInIsSkillPaletteGrp2AtFront)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoForBattleSetTop_C", "SetupTacticalSkillButtonEnable");

	Params::SkillInfoForBattleSetTop_C_SetupTacticalSkillButtonEnable Parms{};

	Parms.bInIsSkillPaletteGrp2AtFront = bInIsSkillPaletteGrp2AtFront;

	UObject::ProcessEvent(Func, &Parms);
}

}

