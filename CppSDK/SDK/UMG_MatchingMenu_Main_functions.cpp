#pragma once

 

// Package: UMG_MatchingMenu_Main

#include "Basic.hpp"

#include "UMG_MatchingMenu_Main_classes.hpp"
#include "UMG_MatchingMenu_Main_parameters.hpp"


namespace SDK
{

// Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.OnStartMatchmaking__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBMapInfo>               DungeonMapInfoArray                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    bUnlimit                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MatchingMenu_Main_C::OnStartMatchmaking__DelegateSignature(TArray<struct FSBMapInfo>& DungeonMapInfoArray, bool bUnlimit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Main_C", "OnStartMatchmaking__DelegateSignature");

	Params::UMG_MatchingMenu_Main_C_OnStartMatchmaking__DelegateSignature Parms{};

	Parms.DungeonMapInfoArray = std::move(DungeonMapInfoArray);
	Parms.bUnlimit = bUnlimit;

	UObject::ProcessEvent(Func, &Parms);

	DungeonMapInfoArray = std::move(Parms.DungeonMapInfoArray);
}


// Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUMG_MatchingMenu_Main_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Main_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.OnClickSupplyIcon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBDungeonSupply                 DungeonSupply                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UUMG_MatchingMenu_Main_C::OnClickSupplyIcon__DelegateSignature(const struct FSBDungeonSupply& DungeonSupply)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Main_C", "OnClickSupplyIcon__DelegateSignature");

	Params::UMG_MatchingMenu_Main_C_OnClickSupplyIcon__DelegateSignature Parms{};

	Parms.DungeonSupply = std::move(DungeonSupply);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.ExecuteUbergraph_UMG_MatchingMenu_Main
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_Main_C::ExecuteUbergraph_UMG_MatchingMenu_Main(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Main_C", "ExecuteUbergraph_UMG_MatchingMenu_Main");

	Params::UMG_MatchingMenu_Main_C_ExecuteUbergraph_UMG_MatchingMenu_Main Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.BndEvt__UMG_MatchingMenu_Main_ContentInfo_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FSBDungeonSupply                 DungeonSupply                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UUMG_MatchingMenu_Main_C::BndEvt__UMG_MatchingMenu_Main_ContentInfo_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature(const struct FSBDungeonSupply& DungeonSupply)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Main_C", "BndEvt__UMG_MatchingMenu_Main_ContentInfo_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature");

	Params::UMG_MatchingMenu_Main_C_BndEvt__UMG_MatchingMenu_Main_ContentInfo_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature Parms{};

	Parms.DungeonSupply = std::move(DungeonSupply);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.BndEvt__UMG_MatchingMenu_Main_ApplyButtonList_K2Node_ComponentBoundEvent_2_OnClickedMatching__DelegateSignature
// (BlueprintEvent)

void UUMG_MatchingMenu_Main_C::BndEvt__UMG_MatchingMenu_Main_ApplyButtonList_K2Node_ComponentBoundEvent_2_OnClickedMatching__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Main_C", "BndEvt__UMG_MatchingMenu_Main_ApplyButtonList_K2Node_ComponentBoundEvent_2_OnClickedMatching__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.BndEvt__UMG_MatchingMenu_Main_ApplyButtonList_K2Node_ComponentBoundEvent_1_OnClickedSoloOrParty__DelegateSignature
// (BlueprintEvent)

void UUMG_MatchingMenu_Main_C::BndEvt__UMG_MatchingMenu_Main_ApplyButtonList_K2Node_ComponentBoundEvent_1_OnClickedSoloOrParty__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Main_C", "BndEvt__UMG_MatchingMenu_Main_ApplyButtonList_K2Node_ComponentBoundEvent_1_OnClickedSoloOrParty__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.PartyRecruitCancel
// (BlueprintCallable, BlueprintEvent)

void UUMG_MatchingMenu_Main_C::PartyRecruitCancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Main_C", "PartyRecruitCancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.OnCancelRecruit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   IRetCode                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_Main_C::OnCancelRecruit(const bool bWasSuccessful, const int32 IRetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Main_C", "OnCancelRecruit");

	Params::UMG_MatchingMenu_Main_C_OnCancelRecruit Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.IRetCode = IRetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.PartyRecruitCancel_YesNoDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EYesNoDialogResult                      Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_Main_C::PartyRecruitCancel_YesNoDialog(const EYesNoDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Main_C", "PartyRecruitCancel_YesNoDialog");

	Params::UMG_MatchingMenu_Main_C_PartyRecruitCancel_YesNoDialog Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.DoMatching
// (BlueprintCallable, BlueprintEvent)

void UUMG_MatchingMenu_Main_C::DoMatching()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Main_C", "DoMatching");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.BndEvt__ContentInfo_K2Node_ComponentBoundEvent_0_OnCloseButtonClicked__DelegateSignature
// (BlueprintEvent)

void UUMG_MatchingMenu_Main_C::BndEvt__ContentInfo_K2Node_ComponentBoundEvent_0_OnCloseButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Main_C", "BndEvt__ContentInfo_K2Node_ComponentBoundEvent_0_OnCloseButtonClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.ShowNoLeaderAlert
// (BlueprintCallable, BlueprintEvent)

void UUMG_MatchingMenu_Main_C::ShowNoLeaderAlert()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Main_C", "ShowNoLeaderAlert");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_Main_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Main_C", "OnAnimationFinished");

	Params::UMG_MatchingMenu_Main_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_MatchingMenu_Main_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Main_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InitDungeonId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_Main_C::Init(class FName InitDungeonId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Main_C", "Init");

	Params::UMG_MatchingMenu_Main_C_Init Parms{};

	Parms.InitDungeonId = InitDungeonId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.CloseMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_MatchingMenu_Main_C::CloseMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Main_C", "CloseMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.InAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_MatchingMenu_Main_C::InAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Main_C", "InAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.OutAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_MatchingMenu_Main_C::OutAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Main_C", "OutAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_Main.UMG_MatchingMenu_Main_C.RequestPreLoad
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBMapInfo>               InDungeonMapInfos                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_MatchingMenu_Main_C::RequestPreLoad(TArray<struct FSBMapInfo>& InDungeonMapInfos)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Main_C", "RequestPreLoad");

	Params::UMG_MatchingMenu_Main_C_RequestPreLoad Parms{};

	Parms.InDungeonMapInfos = std::move(InDungeonMapInfos);

	UObject::ProcessEvent(Func, &Parms);

	InDungeonMapInfos = std::move(Parms.InDungeonMapInfos);
}

}

