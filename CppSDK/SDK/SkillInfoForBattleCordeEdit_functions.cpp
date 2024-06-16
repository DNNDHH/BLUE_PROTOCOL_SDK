#pragma once

 

// Package: SkillInfoForBattleCordeEdit

#include "Basic.hpp"

#include "SkillInfoForBattleCordeEdit_classes.hpp"
#include "SkillInfoForBattleCordeEdit_parameters.hpp"


namespace SDK
{

// Function SkillInfoForBattleCordeEdit.SkillInfoForBattleCordeEdit_C.ExecuteUbergraph_SkillInfoForBattleCordeEdit
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoForBattleCordeEdit_C::ExecuteUbergraph_SkillInfoForBattleCordeEdit(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoForBattleCordeEdit_C", "ExecuteUbergraph_SkillInfoForBattleCordeEdit");

	Params::SkillInfoForBattleCordeEdit_C_ExecuteUbergraph_SkillInfoForBattleCordeEdit Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoForBattleCordeEdit.SkillInfoForBattleCordeEdit_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoForBattleCordeEdit_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoForBattleCordeEdit_C", "OnAnimationFinished");

	Params::SkillInfoForBattleCordeEdit_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoForBattleCordeEdit.SkillInfoForBattleCordeEdit_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USkillInfoForBattleCordeEdit_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoForBattleCordeEdit_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoForBattleCordeEdit.SkillInfoForBattleCordeEdit_C.SetUIBlockerMostFrontEnable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsEnabled                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoForBattleCordeEdit_C::SetUIBlockerMostFrontEnable(bool InIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoForBattleCordeEdit_C", "SetUIBlockerMostFrontEnable");

	Params::SkillInfoForBattleCordeEdit_C_SetUIBlockerMostFrontEnable Parms{};

	Parms.InIsEnabled = InIsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoForBattleCordeEdit.SkillInfoForBattleCordeEdit_C.BndEvt__SkillInfoForBattleCordeEdit_SkillPaletteFrontBackSwitchBtn_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bInSwitchToSubSkillPalette                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoForBattleCordeEdit_C::BndEvt__SkillInfoForBattleCordeEdit_SkillPaletteFrontBackSwitchBtn_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature(bool bInSwitchToSubSkillPalette)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoForBattleCordeEdit_C", "BndEvt__SkillInfoForBattleCordeEdit_SkillPaletteFrontBackSwitchBtn_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature");

	Params::SkillInfoForBattleCordeEdit_C_BndEvt__SkillInfoForBattleCordeEdit_SkillPaletteFrontBackSwitchBtn_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature Parms{};

	Parms.bInSwitchToSubSkillPalette = bInSwitchToSubSkillPalette;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoForBattleCordeEdit.SkillInfoForBattleCordeEdit_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoForBattleCordeEdit_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoForBattleCordeEdit_C", "PreConstruct");

	Params::SkillInfoForBattleCordeEdit_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoForBattleCordeEdit.SkillInfoForBattleCordeEdit_C.Setup
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                           InTacticalSkillIds                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<int32>                           InRegularSkillIds                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   InULTSkillId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>                   InBattleImagineUniqueIds                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    InSetupByCurrEquip                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ESBClassType                            InClassType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoForBattleCordeEdit_C::Setup(TArray<int32>& InTacticalSkillIds, TArray<int32>& InRegularSkillIds, int32 InULTSkillId, TArray<class FString>& InBattleImagineUniqueIds, bool InSetupByCurrEquip, ESBClassType InClassType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoForBattleCordeEdit_C", "Setup");

	Params::SkillInfoForBattleCordeEdit_C_Setup Parms{};

	Parms.InTacticalSkillIds = std::move(InTacticalSkillIds);
	Parms.InRegularSkillIds = std::move(InRegularSkillIds);
	Parms.InULTSkillId = InULTSkillId;
	Parms.InBattleImagineUniqueIds = std::move(InBattleImagineUniqueIds);
	Parms.InSetupByCurrEquip = InSetupByCurrEquip;
	Parms.InClassType = InClassType;

	UObject::ProcessEvent(Func, &Parms);

	InTacticalSkillIds = std::move(Parms.InTacticalSkillIds);
	InRegularSkillIds = std::move(Parms.InRegularSkillIds);
	InBattleImagineUniqueIds = std::move(Parms.InBattleImagineUniqueIds);
}


// Function SkillInfoForBattleCordeEdit.SkillInfoForBattleCordeEdit_C.SetupTacticalSkill
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                           InTacticalSkillIds                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    InSetupByCurrEquip                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InIsSubPaletteReleased                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoForBattleCordeEdit_C::SetupTacticalSkill(TArray<int32>& InTacticalSkillIds, bool InSetupByCurrEquip, bool InIsSubPaletteReleased)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoForBattleCordeEdit_C", "SetupTacticalSkill");

	Params::SkillInfoForBattleCordeEdit_C_SetupTacticalSkill Parms{};

	Parms.InTacticalSkillIds = std::move(InTacticalSkillIds);
	Parms.InSetupByCurrEquip = InSetupByCurrEquip;
	Parms.InIsSubPaletteReleased = InIsSubPaletteReleased;

	UObject::ProcessEvent(Func, &Parms);

	InTacticalSkillIds = std::move(Parms.InTacticalSkillIds);
}


// Function SkillInfoForBattleCordeEdit.SkillInfoForBattleCordeEdit_C.SetupRegularAndULTSkill
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                           InRegularSkillIds                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   InULTSkillId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InSetupByCurrEquip                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoForBattleCordeEdit_C::SetupRegularAndULTSkill(TArray<int32>& InRegularSkillIds, int32 InULTSkillId, bool InSetupByCurrEquip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoForBattleCordeEdit_C", "SetupRegularAndULTSkill");

	Params::SkillInfoForBattleCordeEdit_C_SetupRegularAndULTSkill Parms{};

	Parms.InRegularSkillIds = std::move(InRegularSkillIds);
	Parms.InULTSkillId = InULTSkillId;
	Parms.InSetupByCurrEquip = InSetupByCurrEquip;

	UObject::ProcessEvent(Func, &Parms);

	InRegularSkillIds = std::move(Parms.InRegularSkillIds);
}


// Function SkillInfoForBattleCordeEdit.SkillInfoForBattleCordeEdit_C.SetupBattleImagine
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>                   InBattleImagineUniqueIds                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    InSetupByCurrEquip                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ESBClassType                            InClassType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoForBattleCordeEdit_C::SetupBattleImagine(TArray<class FString>& InBattleImagineUniqueIds, bool InSetupByCurrEquip, ESBClassType InClassType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoForBattleCordeEdit_C", "SetupBattleImagine");

	Params::SkillInfoForBattleCordeEdit_C_SetupBattleImagine Parms{};

	Parms.InBattleImagineUniqueIds = std::move(InBattleImagineUniqueIds);
	Parms.InSetupByCurrEquip = InSetupByCurrEquip;
	Parms.InClassType = InClassType;

	UObject::ProcessEvent(Func, &Parms);

	InBattleImagineUniqueIds = std::move(Parms.InBattleImagineUniqueIds);
}


// Function SkillInfoForBattleCordeEdit.SkillInfoForBattleCordeEdit_C.SetStorageMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsStorageMode                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoForBattleCordeEdit_C::SetStorageMode(bool InIsStorageMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoForBattleCordeEdit_C", "SetStorageMode");

	Params::SkillInfoForBattleCordeEdit_C_SetStorageMode Parms{};

	Parms.InIsStorageMode = InIsStorageMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoForBattleCordeEdit.SkillInfoForBattleCordeEdit_C.SetSkillPaletteGrpSwtichEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsEnabled                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoForBattleCordeEdit_C::SetSkillPaletteGrpSwtichEnable(bool InIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoForBattleCordeEdit_C", "SetSkillPaletteGrpSwtichEnable");

	Params::SkillInfoForBattleCordeEdit_C_SetSkillPaletteGrpSwtichEnable Parms{};

	Parms.InIsEnabled = InIsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoForBattleCordeEdit.SkillInfoForBattleCordeEdit_C.StartSkillPaletteGrpSwitchAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InSwitchToSubSkillPalette                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InIsAnimation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoForBattleCordeEdit_C::StartSkillPaletteGrpSwitchAnimation(bool InSwitchToSubSkillPalette, bool InIsAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoForBattleCordeEdit_C", "StartSkillPaletteGrpSwitchAnimation");

	Params::SkillInfoForBattleCordeEdit_C_StartSkillPaletteGrpSwitchAnimation Parms{};

	Parms.InSwitchToSubSkillPalette = InSwitchToSubSkillPalette;
	Parms.InIsAnimation = InIsAnimation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoForBattleCordeEdit.SkillInfoForBattleCordeEdit_C.SwitchTacticalSkillBg
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSkillPaletteGrp2AtFront                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsAnimation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoForBattleCordeEdit_C::SwitchTacticalSkillBg(bool IsSkillPaletteGrp2AtFront, bool IsAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoForBattleCordeEdit_C", "SwitchTacticalSkillBg");

	Params::SkillInfoForBattleCordeEdit_C_SwitchTacticalSkillBg Parms{};

	Parms.IsSkillPaletteGrp2AtFront = IsSkillPaletteGrp2AtFront;
	Parms.IsAnimation = IsAnimation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoForBattleCordeEdit.SkillInfoForBattleCordeEdit_C.SetupTacticalSkillPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSkillPaletteGrp2AtFront                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoForBattleCordeEdit_C::SetupTacticalSkillPosition(bool IsSkillPaletteGrp2AtFront)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoForBattleCordeEdit_C", "SetupTacticalSkillPosition");

	Params::SkillInfoForBattleCordeEdit_C_SetupTacticalSkillPosition Parms{};

	Parms.IsSkillPaletteGrp2AtFront = IsSkillPaletteGrp2AtFront;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoForBattleCordeEdit.SkillInfoForBattleCordeEdit_C.SetSkillPaletteType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInIsSubSkillPalette                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInIgnoreSwitchBtn                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoForBattleCordeEdit_C::SetSkillPaletteType(bool bInIsSubSkillPalette, bool bInIgnoreSwitchBtn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoForBattleCordeEdit_C", "SetSkillPaletteType");

	Params::SkillInfoForBattleCordeEdit_C_SetSkillPaletteType Parms{};

	Parms.bInIsSubSkillPalette = bInIsSubSkillPalette;
	Parms.bInIgnoreSwitchBtn = bInIgnoreSwitchBtn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoForBattleCordeEdit.SkillInfoForBattleCordeEdit_C.IsSubPaletteReleased
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OutIsReleased                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoForBattleCordeEdit_C::IsSubPaletteReleased(bool* OutIsReleased)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoForBattleCordeEdit_C", "IsSubPaletteReleased");

	Params::SkillInfoForBattleCordeEdit_C_IsSubPaletteReleased Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsReleased != nullptr)
		*OutIsReleased = Parms.OutIsReleased;
}

}

