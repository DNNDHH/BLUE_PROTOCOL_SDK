#pragma once

 

// Package: DroppingText

#include "Basic.hpp"

#include "DroppingText_classes.hpp"
#include "DroppingText_parameters.hpp"


namespace SDK
{

// Function DroppingText.DroppingText_C.ExecuteUbergraph_DroppingText
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDroppingText_C::ExecuteUbergraph_DroppingText(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DroppingText_C", "ExecuteUbergraph_DroppingText");

	Params::DroppingText_C_ExecuteUbergraph_DroppingText Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DroppingText.DroppingText_C.SetMessageTextInFree
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ESBDroppingTextOption                   Option                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDroppingText_C::SetMessageTextInFree(const class FText& InText, ESBDroppingTextOption Option)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DroppingText_C", "SetMessageTextInFree");

	Params::DroppingText_C_SetMessageTextInFree Parms{};

	Parms.InText = std::move(InText);
	Parms.Option = Option;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DroppingText.DroppingText_C.SetMessageTextInItemName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             ItemName                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   Amount                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBDroppingTextOption                   Option                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDroppingText_C::SetMessageTextInItemName(const class FText& ItemName, const int32 Amount, ESBDroppingTextOption Option)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DroppingText_C", "SetMessageTextInItemName");

	Params::DroppingText_C_SetMessageTextInItemName Parms{};

	Parms.ItemName = std::move(ItemName);
	Parms.Amount = Amount;
	Parms.Option = Option;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DroppingText.DroppingText_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDroppingText_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DroppingText_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DroppingText.DroppingText_C.UIVisibleSettingChangeDelegate_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBUIType                               InUIType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInInstantly                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDroppingText_C::UIVisibleSettingChangeDelegate_Event_0(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DroppingText_C", "UIVisibleSettingChangeDelegate_Event_0");

	Params::DroppingText_C_UIVisibleSettingChangeDelegate_Event_0 Parms{};

	Parms.InUIType = InUIType;
	Parms.bInVisibility = bInVisibility;
	Parms.bInInstantly = bInInstantly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DroppingText.DroppingText_C.SetMessageTextInItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemType                               ItemType                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ItemId                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Amount                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBDroppingTextOption                   Option                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bUnidentified                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bIsBonusAdd                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDroppingText_C::SetMessageTextInItem(const EItemType ItemType, const int32 ItemId, const int32 Amount, ESBDroppingTextOption Option, bool bUnidentified, bool bIsBonusAdd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DroppingText_C", "SetMessageTextInItem");

	Params::DroppingText_C_SetMessageTextInItem Parms{};

	Parms.ItemType = ItemType;
	Parms.ItemId = ItemId;
	Parms.Amount = Amount;
	Parms.Option = Option;
	Parms.bUnidentified = bUnidentified;
	Parms.bIsBonusAdd = bIsBonusAdd;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DroppingText.DroppingText_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDroppingText_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DroppingText_C", "OnAnimationFinished");

	Params::DroppingText_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DroppingText.DroppingText_C.Start
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDroppingText_C::Start()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DroppingText_C", "Start");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DroppingText.DroppingText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDroppingText_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DroppingText_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DroppingText.DroppingText_C.GetItemIdToText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EItemType                               ItemType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bUnidentified                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)
// bool                                    IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

class FText UDroppingText_C::GetItemIdToText(int32 ID, EItemType ItemType, bool bUnidentified, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DroppingText_C", "GetItemIdToText");

	Params::DroppingText_C_GetItemIdToText Parms{};

	Parms.ID = ID;
	Parms.ItemType = ItemType;
	Parms.bUnidentified = bUnidentified;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	return Parms.ReturnValue;
}


// Function DroppingText.DroppingText_C.SetTextColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBDroppingTextOption                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDroppingText_C::SetTextColor(ESBDroppingTextOption Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DroppingText_C", "SetTextColor");

	Params::DroppingText_C_SetTextColor Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}

}

