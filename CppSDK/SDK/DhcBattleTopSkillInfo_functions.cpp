#pragma once

 

// Package: DhcBattleTopSkillInfo

#include "Basic.hpp"

#include "DhcBattleTopSkillInfo_classes.hpp"
#include "DhcBattleTopSkillInfo_parameters.hpp"


namespace SDK
{

// Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.ExecuteUbergraph_DhcBattleTopSkillInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDhcBattleTopSkillInfo_C::ExecuteUbergraph_DhcBattleTopSkillInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopSkillInfo_C", "ExecuteUbergraph_DhcBattleTopSkillInfo");

	Params::DhcBattleTopSkillInfo_C_ExecuteUbergraph_DhcBattleTopSkillInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDhcBattleTopSkillInfo_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopSkillInfo_C", "OnAnimationFinished");

	Params::DhcBattleTopSkillInfo_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.SetUIBlockerMostFrontEnable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsEnabled                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDhcBattleTopSkillInfo_C::SetUIBlockerMostFrontEnable(bool InIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopSkillInfo_C", "SetUIBlockerMostFrontEnable");

	Params::DhcBattleTopSkillInfo_C_SetUIBlockerMostFrontEnable Parms{};

	Parms.InIsEnabled = InIsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.BndEvt__DhcBattleTopSkillInfo_SkillPaletteGrpSwitchBtn_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bInSwitchToSubSkillPalette                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDhcBattleTopSkillInfo_C::BndEvt__DhcBattleTopSkillInfo_SkillPaletteGrpSwitchBtn_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature(bool bInSwitchToSubSkillPalette)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopSkillInfo_C", "BndEvt__DhcBattleTopSkillInfo_SkillPaletteGrpSwitchBtn_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature");

	Params::DhcBattleTopSkillInfo_C_BndEvt__DhcBattleTopSkillInfo_SkillPaletteGrpSwitchBtn_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature Parms{};

	Parms.bInSwitchToSubSkillPalette = bInSwitchToSubSkillPalette;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDhcBattleTopSkillInfo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopSkillInfo_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDhcBattleTopSkillInfo_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopSkillInfo_C", "PreConstruct");

	Params::DhcBattleTopSkillInfo_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.Setup
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBDhcBattlePlayerEquipImagineInfo>InEquipBattleImagineInfo                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FSBDhcBattlePlayerEquipArtsInfo>InEquipArtsInfo                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ESBClassType                            InClassType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InClassLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDhcBattleTopSkillInfo_C::Setup(TArray<struct FSBDhcBattlePlayerEquipImagineInfo>& InEquipBattleImagineInfo, TArray<struct FSBDhcBattlePlayerEquipArtsInfo>& InEquipArtsInfo, ESBClassType InClassType, int32 InClassLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopSkillInfo_C", "Setup");

	Params::DhcBattleTopSkillInfo_C_Setup Parms{};

	Parms.InEquipBattleImagineInfo = std::move(InEquipBattleImagineInfo);
	Parms.InEquipArtsInfo = std::move(InEquipArtsInfo);
	Parms.InClassType = InClassType;
	Parms.InClassLevel = InClassLevel;

	UObject::ProcessEvent(Func, &Parms);

	InEquipBattleImagineInfo = std::move(Parms.InEquipBattleImagineInfo);
	InEquipArtsInfo = std::move(Parms.InEquipArtsInfo);
}


// Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.SetupTacticalSkill
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                           InTacticalSkillIds                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ESBClassType                            InClassType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InClassLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDhcBattleTopSkillInfo_C::SetupTacticalSkill(TArray<int32>& InTacticalSkillIds, ESBClassType InClassType, int32 InClassLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopSkillInfo_C", "SetupTacticalSkill");

	Params::DhcBattleTopSkillInfo_C_SetupTacticalSkill Parms{};

	Parms.InTacticalSkillIds = std::move(InTacticalSkillIds);
	Parms.InClassType = InClassType;
	Parms.InClassLevel = InClassLevel;

	UObject::ProcessEvent(Func, &Parms);

	InTacticalSkillIds = std::move(Parms.InTacticalSkillIds);
}


// Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.SetupRegularAndULTSkill
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                           InRegularSkillIds                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   InULTSkillId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InClassLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDhcBattleTopSkillInfo_C::SetupRegularAndULTSkill(TArray<int32>& InRegularSkillIds, int32 InULTSkillId, int32 InClassLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopSkillInfo_C", "SetupRegularAndULTSkill");

	Params::DhcBattleTopSkillInfo_C_SetupRegularAndULTSkill Parms{};

	Parms.InRegularSkillIds = std::move(InRegularSkillIds);
	Parms.InULTSkillId = InULTSkillId;
	Parms.InClassLevel = InClassLevel;

	UObject::ProcessEvent(Func, &Parms);

	InRegularSkillIds = std::move(Parms.InRegularSkillIds);
}


// Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.SetupBattleImagine
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBDhcBattlePlayerEquipImagineInfo>InBattleImagineInfos                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ESBClassType                            InClassType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InClassLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDhcBattleTopSkillInfo_C::SetupBattleImagine(TArray<struct FSBDhcBattlePlayerEquipImagineInfo>& InBattleImagineInfos, ESBClassType InClassType, int32 InClassLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopSkillInfo_C", "SetupBattleImagine");

	Params::DhcBattleTopSkillInfo_C_SetupBattleImagine Parms{};

	Parms.InBattleImagineInfos = std::move(InBattleImagineInfos);
	Parms.InClassType = InClassType;
	Parms.InClassLevel = InClassLevel;

	UObject::ProcessEvent(Func, &Parms);

	InBattleImagineInfos = std::move(Parms.InBattleImagineInfos);
}


// Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.SetSkillPaletteGrpSwtichEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInIsEnabled                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDhcBattleTopSkillInfo_C::SetSkillPaletteGrpSwtichEnable(bool bInIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopSkillInfo_C", "SetSkillPaletteGrpSwtichEnable");

	Params::DhcBattleTopSkillInfo_C_SetSkillPaletteGrpSwtichEnable Parms{};

	Parms.bInIsEnabled = bInIsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.StartSkillPaletteGrpSwitchAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInSwitchToSubSkillPalette                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInIsAnimation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDhcBattleTopSkillInfo_C::StartSkillPaletteGrpSwitchAnimation(bool bInSwitchToSubSkillPalette, bool bInIsAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopSkillInfo_C", "StartSkillPaletteGrpSwitchAnimation");

	Params::DhcBattleTopSkillInfo_C_StartSkillPaletteGrpSwitchAnimation Parms{};

	Parms.bInSwitchToSubSkillPalette = bInSwitchToSubSkillPalette;
	Parms.bInIsAnimation = bInIsAnimation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.SwitchTacticalSkillBg
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInIsSubSkillPaletteAtFront                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInIsAnimation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDhcBattleTopSkillInfo_C::SwitchTacticalSkillBg(bool bInIsSubSkillPaletteAtFront, bool bInIsAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopSkillInfo_C", "SwitchTacticalSkillBg");

	Params::DhcBattleTopSkillInfo_C_SwitchTacticalSkillBg Parms{};

	Parms.bInIsSubSkillPaletteAtFront = bInIsSubSkillPaletteAtFront;
	Parms.bInIsAnimation = bInIsAnimation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.SetupTacticalSkillPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInIsSkillPaletteGrp2AtFront                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDhcBattleTopSkillInfo_C::SetupTacticalSkillPosition(bool bInIsSkillPaletteGrp2AtFront)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopSkillInfo_C", "SetupTacticalSkillPosition");

	Params::DhcBattleTopSkillInfo_C_SetupTacticalSkillPosition Parms{};

	Parms.bInIsSkillPaletteGrp2AtFront = bInIsSkillPaletteGrp2AtFront;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleTopSkillInfo.DhcBattleTopSkillInfo_C.SetSkillPaletteType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInIsSubSkillPalette                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInIgnoreSwitchBtn                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDhcBattleTopSkillInfo_C::SetSkillPaletteType(bool bInIsSubSkillPalette, bool bInIgnoreSwitchBtn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopSkillInfo_C", "SetSkillPaletteType");

	Params::DhcBattleTopSkillInfo_C_SetSkillPaletteType Parms{};

	Parms.bInIsSubSkillPalette = bInIsSubSkillPalette;
	Parms.bInIgnoreSwitchBtn = bInIgnoreSwitchBtn;

	UObject::ProcessEvent(Func, &Parms);
}

}

