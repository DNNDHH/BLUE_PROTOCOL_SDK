#pragma once

 

// Package: WeaponInfoForBattleCordeEdit

#include "Basic.hpp"

#include "WeaponInfoForBattleCordeEdit_classes.hpp"
#include "WeaponInfoForBattleCordeEdit_parameters.hpp"


namespace SDK
{

// Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.ExecuteUbergraph_WeaponInfoForBattleCordeEdit
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponInfoForBattleCordeEdit_C::ExecuteUbergraph_WeaponInfoForBattleCordeEdit(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponInfoForBattleCordeEdit_C", "ExecuteUbergraph_WeaponInfoForBattleCordeEdit");

	Params::WeaponInfoForBattleCordeEdit_C_ExecuteUbergraph_WeaponInfoForBattleCordeEdit Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponInfoForBattleCordeEdit_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponInfoForBattleCordeEdit_C", "PreConstruct");

	Params::WeaponInfoForBattleCordeEdit_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWeaponInfoForBattleCordeEdit_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponInfoForBattleCordeEdit_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InWeaponID                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           InWeaponUniqueId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    InSetupByCurrEquip                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ESBClassType                            InClassType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponInfoForBattleCordeEdit_C::Setup(int32 InWeaponID, const class FString& InWeaponUniqueId, bool InSetupByCurrEquip, ESBClassType InClassType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponInfoForBattleCordeEdit_C", "Setup");

	Params::WeaponInfoForBattleCordeEdit_C_Setup Parms{};

	Parms.InWeaponID = InWeaponID;
	Parms.InWeaponUniqueId = std::move(InWeaponUniqueId);
	Parms.InSetupByCurrEquip = InSetupByCurrEquip;
	Parms.InClassType = InClassType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.SetAlertIconVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InIsLost                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponInfoForBattleCordeEdit_C::SetAlertIconVisibility(bool InIsVisible, bool InIsLost)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponInfoForBattleCordeEdit_C", "SetAlertIconVisibility");

	Params::WeaponInfoForBattleCordeEdit_C_SetAlertIconVisibility Parms{};

	Parms.InIsVisible = InIsVisible;
	Parms.InIsLost = InIsLost;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.SetStorageMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsStorageMode                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponInfoForBattleCordeEdit_C::SetStorageMode(bool InIsStorageMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponInfoForBattleCordeEdit_C", "SetStorageMode");

	Params::WeaponInfoForBattleCordeEdit_C_SetStorageMode Parms{};

	Parms.InIsStorageMode = InIsStorageMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.GetIsWeaponLost
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    OutIsLost                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponInfoForBattleCordeEdit_C::GetIsWeaponLost(bool* OutIsLost)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponInfoForBattleCordeEdit_C", "GetIsWeaponLost");

	Params::WeaponInfoForBattleCordeEdit_C_GetIsWeaponLost Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsLost != nullptr)
		*OutIsLost = Parms.OutIsLost;
}


// Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.SetStackBIconByOwnItemInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     InOwnItemInfo                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UWeaponInfoForBattleCordeEdit_C::SetStackBIconByOwnItemInfo(const struct FOwnItemInfo& InOwnItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponInfoForBattleCordeEdit_C", "SetStackBIconByOwnItemInfo");

	Params::WeaponInfoForBattleCordeEdit_C_SetStackBIconByOwnItemInfo Parms{};

	Parms.InOwnItemInfo = std::move(InOwnItemInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.CreateToolTipWidgetifNeeded
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonIconToolTip_C*             OutWidget                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponInfoForBattleCordeEdit_C::CreateToolTipWidgetifNeeded(class UCommonIconToolTip_C** OutWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponInfoForBattleCordeEdit_C", "CreateToolTipWidgetifNeeded");

	Params::WeaponInfoForBattleCordeEdit_C_CreateToolTipWidgetifNeeded Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutWidget != nullptr)
		*OutWidget = Parms.OutWidget;
}


// Function WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C.Get_BtnForPadCursorMove_ToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWeaponInfoForBattleCordeEdit_C::Get_BtnForPadCursorMove_ToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponInfoForBattleCordeEdit_C", "Get_BtnForPadCursorMove_ToolTipWidget_0");

	Params::WeaponInfoForBattleCordeEdit_C_Get_BtnForPadCursorMove_ToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

