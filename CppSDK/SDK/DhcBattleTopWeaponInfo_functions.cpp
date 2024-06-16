#pragma once

 

// Package: DhcBattleTopWeaponInfo

#include "Basic.hpp"

#include "DhcBattleTopWeaponInfo_classes.hpp"
#include "DhcBattleTopWeaponInfo_parameters.hpp"


namespace SDK
{

// Function DhcBattleTopWeaponInfo.DhcBattleTopWeaponInfo_C.ExecuteUbergraph_DhcBattleTopWeaponInfo
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDhcBattleTopWeaponInfo_C::ExecuteUbergraph_DhcBattleTopWeaponInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopWeaponInfo_C", "ExecuteUbergraph_DhcBattleTopWeaponInfo");

	Params::DhcBattleTopWeaponInfo_C_ExecuteUbergraph_DhcBattleTopWeaponInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleTopWeaponInfo.DhcBattleTopWeaponInfo_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDhcBattleTopWeaponInfo_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopWeaponInfo_C", "PreConstruct");

	Params::DhcBattleTopWeaponInfo_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleTopWeaponInfo.DhcBattleTopWeaponInfo_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBDhcBattlePlayerEquipWeaponInfoInEquipWeaponInfo                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UDhcBattleTopWeaponInfo_C::Setup(const struct FSBDhcBattlePlayerEquipWeaponInfo& InEquipWeaponInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopWeaponInfo_C", "Setup");

	Params::DhcBattleTopWeaponInfo_C_Setup Parms{};

	Parms.InEquipWeaponInfo = std::move(InEquipWeaponInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleTopWeaponInfo.DhcBattleTopWeaponInfo_C.SetAlertIconVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InIsLost                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDhcBattleTopWeaponInfo_C::SetAlertIconVisibility(bool InIsVisible, bool InIsLost)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopWeaponInfo_C", "SetAlertIconVisibility");

	Params::DhcBattleTopWeaponInfo_C_SetAlertIconVisibility Parms{};

	Parms.InIsVisible = InIsVisible;
	Parms.InIsLost = InIsLost;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleTopWeaponInfo.DhcBattleTopWeaponInfo_C.GetIsWeaponLost
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    OutIsLost                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDhcBattleTopWeaponInfo_C::GetIsWeaponLost(bool* OutIsLost)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopWeaponInfo_C", "GetIsWeaponLost");

	Params::DhcBattleTopWeaponInfo_C_GetIsWeaponLost Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsLost != nullptr)
		*OutIsLost = Parms.OutIsLost;
}


// Function DhcBattleTopWeaponInfo.DhcBattleTopWeaponInfo_C.SetStackBIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InStackBNum                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InStackBMax                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDhcBattleTopWeaponInfo_C::SetStackBIcon(int32 InStackBNum, int32 InStackBMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopWeaponInfo_C", "SetStackBIcon");

	Params::DhcBattleTopWeaponInfo_C_SetStackBIcon Parms{};

	Parms.InStackBNum = InStackBNum;
	Parms.InStackBMax = InStackBMax;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleTopWeaponInfo.DhcBattleTopWeaponInfo_C.CreateToolTipWidgetifNeeded
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonIconToolTipContent_Weapon_C*OutWidget                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDhcBattleTopWeaponInfo_C::CreateToolTipWidgetifNeeded(class UCommonIconToolTipContent_Weapon_C** OutWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopWeaponInfo_C", "CreateToolTipWidgetifNeeded");

	Params::DhcBattleTopWeaponInfo_C_CreateToolTipWidgetifNeeded Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutWidget != nullptr)
		*OutWidget = Parms.OutWidget;
}


// Function DhcBattleTopWeaponInfo.DhcBattleTopWeaponInfo_C.Get_BtnForPadCursorMove_ToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UDhcBattleTopWeaponInfo_C::Get_BtnForPadCursorMove_ToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopWeaponInfo_C", "Get_BtnForPadCursorMove_ToolTipWidget_0");

	Params::DhcBattleTopWeaponInfo_C_Get_BtnForPadCursorMove_ToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

