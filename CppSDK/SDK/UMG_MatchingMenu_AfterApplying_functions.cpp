#pragma once

 

// Package: UMG_MatchingMenu_AfterApplying

#include "Basic.hpp"

#include "UMG_MatchingMenu_AfterApplying_classes.hpp"
#include "UMG_MatchingMenu_AfterApplying_parameters.hpp"


namespace SDK
{

// Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUMG_MatchingMenu_AfterApplying_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_AfterApplying_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.OnCancel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUMG_MatchingMenu_AfterApplying_C::OnCancel__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_AfterApplying_C", "OnCancel__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.OnClickSupplyIcon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBDungeonSupply                 DungeonSupply                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UUMG_MatchingMenu_AfterApplying_C::OnClickSupplyIcon__DelegateSignature(const struct FSBDungeonSupply& DungeonSupply)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_AfterApplying_C", "OnClickSupplyIcon__DelegateSignature");

	Params::UMG_MatchingMenu_AfterApplying_C_OnClickSupplyIcon__DelegateSignature Parms{};

	Parms.DungeonSupply = std::move(DungeonSupply);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.ExecuteUbergraph_UMG_MatchingMenu_AfterApplying
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_AfterApplying_C::ExecuteUbergraph_UMG_MatchingMenu_AfterApplying(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_AfterApplying_C", "ExecuteUbergraph_UMG_MatchingMenu_AfterApplying");

	Params::UMG_MatchingMenu_AfterApplying_C_ExecuteUbergraph_UMG_MatchingMenu_AfterApplying Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.BndEvt__UMG_MatchingMenu_AfterApplying_UMG_MatchingMenu_Confirm_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature
// (BlueprintEvent)

void UUMG_MatchingMenu_AfterApplying_C::BndEvt__UMG_MatchingMenu_AfterApplying_UMG_MatchingMenu_Confirm_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_AfterApplying_C", "BndEvt__UMG_MatchingMenu_AfterApplying_UMG_MatchingMenu_Confirm_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.BndEvt__UMG_MatchingMenu_AfterApplying_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FSBDungeonSupply                 DungeonSupply                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UUMG_MatchingMenu_AfterApplying_C::BndEvt__UMG_MatchingMenu_AfterApplying_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature(const struct FSBDungeonSupply& DungeonSupply)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_AfterApplying_C", "BndEvt__UMG_MatchingMenu_AfterApplying_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature");

	Params::UMG_MatchingMenu_AfterApplying_C_BndEvt__UMG_MatchingMenu_AfterApplying_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature Parms{};

	Parms.DungeonSupply = std::move(DungeonSupply);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.WidgetAnimationEvt_AnimDetailShow_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)

void UUMG_MatchingMenu_AfterApplying_C::WidgetAnimationEvt_AnimDetailShow_K2Node_WidgetAnimationEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_AfterApplying_C", "WidgetAnimationEvt_AnimDetailShow_K2Node_WidgetAnimationEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.WidgetAnimationEvt_AnimDetailHide_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UUMG_MatchingMenu_AfterApplying_C::WidgetAnimationEvt_AnimDetailHide_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_AfterApplying_C", "WidgetAnimationEvt_AnimDetailHide_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.BndEvt__UMG_MatchingMenu_AfterApplying_ButtonDetail_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_MatchingMenu_AfterApplying_C::BndEvt__UMG_MatchingMenu_AfterApplying_ButtonDetail_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_AfterApplying_C", "BndEvt__UMG_MatchingMenu_AfterApplying_ButtonDetail_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_MatchingMenu_AfterApplying_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_AfterApplying_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_AfterApplying_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_AfterApplying_C", "OnAnimationFinished");

	Params::UMG_MatchingMenu_AfterApplying_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.BndEvt__UMG_MatchingMenu_AfterApplying_UMG_MatchingMenu_Headder_K2Node_ComponentBoundEvent_0_OnCloseButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUMG_MatchingMenu_AfterApplying_C::BndEvt__UMG_MatchingMenu_AfterApplying_UMG_MatchingMenu_Headder_K2Node_ComponentBoundEvent_0_OnCloseButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_AfterApplying_C", "BndEvt__UMG_MatchingMenu_AfterApplying_UMG_MatchingMenu_Headder_K2Node_ComponentBoundEvent_0_OnCloseButtonClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_MatchingMenu_AfterApplying_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_AfterApplying_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.WaitIn
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_MatchingMenu_AfterApplying_C::WaitIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_AfterApplying_C", "WaitIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.ConfirmIn
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_MatchingMenu_AfterApplying_C::ConfirmIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_AfterApplying_C", "ConfirmIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.Out
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_MatchingMenu_AfterApplying_C::Out()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_AfterApplying_C", "Out");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.OutClose
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_MatchingMenu_AfterApplying_C::OutClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_AfterApplying_C", "OutClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.OutCancel
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_MatchingMenu_AfterApplying_C::OutCancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_AfterApplying_C", "OutCancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.WaitOut
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_MatchingMenu_AfterApplying_C::WaitOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_AfterApplying_C", "WaitOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.ConfirmOut
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_MatchingMenu_AfterApplying_C::ConfirmOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_AfterApplying_C", "ConfirmOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.SetHUDMode
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_MatchingMenu_AfterApplying_C::SetHUDMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_AfterApplying_C", "SetHUDMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.SetCommandMenuMode
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_MatchingMenu_AfterApplying_C::SetCommandMenuMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_AfterApplying_C", "SetCommandMenuMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.SetDungeonInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             GameContentId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   HelpMatchingModeId                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_AfterApplying_C::SetDungeonInfo(class FName GameContentId, int32 HelpMatchingModeId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_AfterApplying_C", "SetDungeonInfo");

	Params::UMG_MatchingMenu_AfterApplying_C_SetDungeonInfo Parms{};

	Parms.GameContentId = GameContentId;
	Parms.HelpMatchingModeId = HelpMatchingModeId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.SetTerm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             EventTerm                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_AfterApplying_C::SetTerm(class FName EventTerm)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_AfterApplying_C", "SetTerm");

	Params::UMG_MatchingMenu_AfterApplying_C_SetTerm Parms{};

	Parms.EventTerm = EventTerm;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.MakeHelpModeInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ModeId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_AfterApplying_C::MakeHelpModeInfo(int32 ModeId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_AfterApplying_C", "MakeHelpModeInfo");

	Params::UMG_MatchingMenu_AfterApplying_C_MakeHelpModeInfo Parms{};

	Parms.ModeId = ModeId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.GetHelpMatchingRequiredInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ModeId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   BattleScore                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ClassLevel                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_AfterApplying_C::GetHelpMatchingRequiredInfo(int32 ModeId, int32* BattleScore, int32* ClassLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_AfterApplying_C", "GetHelpMatchingRequiredInfo");

	Params::UMG_MatchingMenu_AfterApplying_C_GetHelpMatchingRequiredInfo Parms{};

	Parms.ModeId = ModeId;

	UObject::ProcessEvent(Func, &Parms);

	if (BattleScore != nullptr)
		*BattleScore = Parms.BattleScore;

	if (ClassLevel != nullptr)
		*ClassLevel = Parms.ClassLevel;
}


// Function UMG_MatchingMenu_AfterApplying.UMG_MatchingMenu_AfterApplying_C.GetRewardSearchName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ModeId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             SearchName                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_AfterApplying_C::GetRewardSearchName(int32 ModeId, class FName* SearchName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_AfterApplying_C", "GetRewardSearchName");

	Params::UMG_MatchingMenu_AfterApplying_C_GetRewardSearchName Parms{};

	Parms.ModeId = ModeId;

	UObject::ProcessEvent(Func, &Parms);

	if (SearchName != nullptr)
		*SearchName = Parms.SearchName;
}

}

