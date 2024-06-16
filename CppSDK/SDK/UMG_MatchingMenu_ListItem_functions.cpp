#pragma once

 

// Package: UMG_MatchingMenu_ListItem

#include "Basic.hpp"

#include "UMG_MatchingMenu_ListItem_classes.hpp"
#include "UMG_MatchingMenu_ListItem_parameters.hpp"


namespace SDK
{

// Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.OnSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMapInfo                       Param_DungeonMapInfo                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UUMG_MatchingMenu_ListItem_C*     ListItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_ListItem_C::OnSelected__DelegateSignature(const struct FSBMapInfo& Param_DungeonMapInfo, class UUMG_MatchingMenu_ListItem_C* ListItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_ListItem_C", "OnSelected__DelegateSignature");

	Params::UMG_MatchingMenu_ListItem_C_OnSelected__DelegateSignature Parms{};

	Parms.Param_DungeonMapInfo = std::move(Param_DungeonMapInfo);
	Parms.ListItem = ListItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.ExecuteUbergraph_UMG_MatchingMenu_ListItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_ListItem_C::ExecuteUbergraph_UMG_MatchingMenu_ListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_ListItem_C", "ExecuteUbergraph_UMG_MatchingMenu_ListItem");

	Params::UMG_MatchingMenu_ListItem_C_ExecuteUbergraph_UMG_MatchingMenu_ListItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.UpdateBonusIcon
// (BlueprintCallable, BlueprintEvent)

void UUMG_MatchingMenu_ListItem_C::UpdateBonusIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_ListItem_C", "UpdateBonusIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.OnUpdateRewardBoostInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_ListItem_C::OnUpdateRewardBoostInfo(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_ListItem_C", "OnUpdateRewardBoostInfo");

	Params::UMG_MatchingMenu_ListItem_C_OnUpdateRewardBoostInfo Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_MatchingMenu_ListItem_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_ListItem_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_123_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_MatchingMenu_ListItem_C::BndEvt__ItemButton_K2Node_ComponentBoundEvent_123_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_ListItem_C", "BndEvt__ItemButton_K2Node_ComponentBoundEvent_123_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_MatchingMenu_ListItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_ListItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.Update Style
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsFocus                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MatchingMenu_ListItem_C::Update_Style(bool IsFocus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_ListItem_C", "Update Style");

	Params::UMG_MatchingMenu_ListItem_C_Update_Style Parms{};

	Parms.IsFocus = IsFocus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.SetSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Select                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MatchingMenu_ListItem_C::SetSelect(bool Select)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_ListItem_C", "SetSelect");

	Params::UMG_MatchingMenu_ListItem_C_SetSelect Parms{};

	Parms.Select = Select;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.Get_ItemButton_ToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UUMG_MatchingMenu_ListItem_C::Get_ItemButton_ToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_ListItem_C", "Get_ItemButton_ToolTipWidget_0");

	Params::UMG_MatchingMenu_ListItem_C_Get_ItemButton_ToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.SetVisibilityNew
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bShow                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MatchingMenu_ListItem_C::SetVisibilityNew(bool bShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_ListItem_C", "SetVisibilityNew");

	Params::UMG_MatchingMenu_ListItem_C_SetVisibilityNew Parms{};

	Parms.bShow = bShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.GetHelpMatchingRequiredInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   BattleScore                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ClassLevel                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_ListItem_C::GetHelpMatchingRequiredInfo(int32* BattleScore, int32* ClassLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_ListItem_C", "GetHelpMatchingRequiredInfo");

	Params::UMG_MatchingMenu_ListItem_C_GetHelpMatchingRequiredInfo Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (BattleScore != nullptr)
		*BattleScore = Parms.BattleScore;

	if (ClassLevel != nullptr)
		*ClassLevel = Parms.ClassLevel;
}


// Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.MakeMapInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUMG_MatchingMenu_ListItem_C::MakeMapInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_ListItem_C", "MakeMapInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_ListItem.UMG_MatchingMenu_ListItem_C.GetRewardSearchName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             SearchName                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_ListItem_C::GetRewardSearchName(class FName* SearchName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_ListItem_C", "GetRewardSearchName");

	Params::UMG_MatchingMenu_ListItem_C_GetRewardSearchName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SearchName != nullptr)
		*SearchName = Parms.SearchName;
}

}

