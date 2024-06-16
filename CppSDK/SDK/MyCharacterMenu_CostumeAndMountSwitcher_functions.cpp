#pragma once

 

// Package: MyCharacterMenu_CostumeAndMountSwitcher

#include "Basic.hpp"

#include "MyCharacterMenu_CostumeAndMountSwitcher_classes.hpp"
#include "MyCharacterMenu_CostumeAndMountSwitcher_parameters.hpp"


namespace SDK
{

// Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnSubMenuChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharacterMenu_CostumeAndMountSwitcher_C::OnSubMenuChanged__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_CostumeAndMountSwitcher_C", "OnSubMenuChanged__DelegateSignature");

	Params::MyCharacterMenu_CostumeAndMountSwitcher_C_OnSubMenuChanged__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnAchievementChangeButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMyCharaMenu_AchievementList_C*   InAchievementList                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharacterMenu_CostumeAndMountSwitcher_C::OnAchievementChangeButtonClicked__DelegateSignature(class UMyCharaMenu_AchievementList_C* InAchievementList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_CostumeAndMountSwitcher_C", "OnAchievementChangeButtonClicked__DelegateSignature");

	Params::MyCharacterMenu_CostumeAndMountSwitcher_C_OnAchievementChangeButtonClicked__DelegateSignature Parms{};

	Parms.InAchievementList = InAchievementList;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnAcquiredAchievementLoaded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InResult                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharacterMenu_CostumeAndMountSwitcher_C::OnAcquiredAchievementLoaded__DelegateSignature(bool InResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_CostumeAndMountSwitcher_C", "OnAcquiredAchievementLoaded__DelegateSignature");

	Params::MyCharacterMenu_CostumeAndMountSwitcher_C_OnAcquiredAchievementLoaded__DelegateSignature Parms{};

	Parms.InResult = InResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnSelectAchievementSaved__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InResult                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharacterMenu_CostumeAndMountSwitcher_C::OnSelectAchievementSaved__DelegateSignature(bool InResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_CostumeAndMountSwitcher_C", "OnSelectAchievementSaved__DelegateSignature");

	Params::MyCharacterMenu_CostumeAndMountSwitcher_C_OnSelectAchievementSaved__DelegateSignature Parms{};

	Parms.InResult = InResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnSetPlayerCaptureStudioHidden__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsHidden                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharacterMenu_CostumeAndMountSwitcher_C::OnSetPlayerCaptureStudioHidden__DelegateSignature(bool IsHidden)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_CostumeAndMountSwitcher_C", "OnSetPlayerCaptureStudioHidden__DelegateSignature");

	Params::MyCharacterMenu_CostumeAndMountSwitcher_C_OnSetPlayerCaptureStudioHidden__DelegateSignature Parms{};

	Parms.IsHidden = IsHidden;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnPlayerAvatarRotateActive__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsActive                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharacterMenu_CostumeAndMountSwitcher_C::OnPlayerAvatarRotateActive__DelegateSignature(bool InIsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_CostumeAndMountSwitcher_C", "OnPlayerAvatarRotateActive__DelegateSignature");

	Params::MyCharacterMenu_CostumeAndMountSwitcher_C_OnPlayerAvatarRotateActive__DelegateSignature Parms{};

	Parms.InIsActive = InIsActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnPlayerCharacterEquippedCostumeChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMyCharacterMenu_CostumeAndMountSwitcher_C::OnPlayerCharacterEquippedCostumeChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_CostumeAndMountSwitcher_C", "OnPlayerCharacterEquippedCostumeChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnIsCmnBackBtnVisible__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharacterMenu_CostumeAndMountSwitcher_C::OnIsCmnBackBtnVisible__DelegateSignature(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_CostumeAndMountSwitcher_C", "OnIsCmnBackBtnVisible__DelegateSignature");

	Params::MyCharacterMenu_CostumeAndMountSwitcher_C_OnIsCmnBackBtnVisible__DelegateSignature Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnEquippedWeaponSpawned__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMyCharacterMenu_CostumeAndMountSwitcher_C::OnEquippedWeaponSpawned__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_CostumeAndMountSwitcher_C", "OnEquippedWeaponSpawned__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnResetPlayerAvatarRotate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMyCharacterMenu_CostumeAndMountSwitcher_C::OnResetPlayerAvatarRotate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_CostumeAndMountSwitcher_C", "OnResetPlayerAvatarRotate__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnSetCostumeOnFlag__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsCostumeOn                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharacterMenu_CostumeAndMountSwitcher_C::OnSetCostumeOnFlag__DelegateSignature(bool InIsCostumeOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_CostumeAndMountSwitcher_C", "OnSetCostumeOnFlag__DelegateSignature");

	Params::MyCharacterMenu_CostumeAndMountSwitcher_C_OnSetCostumeOnFlag__DelegateSignature Parms{};

	Parms.InIsCostumeOn = InIsCostumeOn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharacterMenu_CostumeAndMountSwitcher_C::ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_CostumeAndMountSwitcher_C", "ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher");

	Params::MyCharacterMenu_CostumeAndMountSwitcher_C_ExecuteUbergraph_MyCharacterMenu_CostumeAndMountSwitcher Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnAdventureBoardBtn_Event
// (BlueprintCallable, BlueprintEvent)

void UMyCharacterMenu_CostumeAndMountSwitcher_C::OnAdventureBoardBtn_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_CostumeAndMountSwitcher_C", "OnAdventureBoardBtn_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.Free_BattleSet_FullSrnBtn
// (BlueprintCallable, BlueprintEvent)

void UMyCharacterMenu_CostumeAndMountSwitcher_C::Free_BattleSet_FullSrnBtn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_CostumeAndMountSwitcher_C", "Free_BattleSet_FullSrnBtn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnClickedDetailedStatus
// (BlueprintCallable, BlueprintEvent)

void UMyCharacterMenu_CostumeAndMountSwitcher_C::OnClickedDetailedStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_CostumeAndMountSwitcher_C", "OnClickedDetailedStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.EscDetailedStatus
// (BlueprintCallable, BlueprintEvent)

void UMyCharacterMenu_CostumeAndMountSwitcher_C::EscDetailedStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_CostumeAndMountSwitcher_C", "EscDetailedStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.Init_BattleSet_FullSrnBtn
// (BlueprintCallable, BlueprintEvent)

void UMyCharacterMenu_CostumeAndMountSwitcher_C::Init_BattleSet_FullSrnBtn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_CostumeAndMountSwitcher_C", "Init_BattleSet_FullSrnBtn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.BndEvt__MyCharacterMenu_StatusSwitcher_ButtonFullScreen_BattleSet_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMyCharacterMenu_CostumeAndMountSwitcher_C::BndEvt__MyCharacterMenu_StatusSwitcher_ButtonFullScreen_BattleSet_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_CostumeAndMountSwitcher_C", "BndEvt__MyCharacterMenu_StatusSwitcher_ButtonFullScreen_BattleSet_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnClicked_BattleSet_DetailedStatus
// (BlueprintCallable, BlueprintEvent)

void UMyCharacterMenu_CostumeAndMountSwitcher_C::OnClicked_BattleSet_DetailedStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_CostumeAndMountSwitcher_C", "OnClicked_BattleSet_DetailedStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.UpdateBookmarkStatusButton
// (BlueprintCallable, BlueprintEvent)

void UMyCharacterMenu_CostumeAndMountSwitcher_C::UpdateBookmarkStatusButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_CostumeAndMountSwitcher_C", "UpdateBookmarkStatusButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.BookmarkUpdateRequest
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMyCharacterMenu_CostumeAndMountSwitcher_C::BookmarkUpdateRequest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_CostumeAndMountSwitcher_C", "BookmarkUpdateRequest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.ChangeTab
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_TmpClickedTabButtonId                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharacterMenu_CostumeAndMountSwitcher_C::ChangeTab(int32 Param_TmpClickedTabButtonId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_CostumeAndMountSwitcher_C", "ChangeTab");

	Params::MyCharacterMenu_CostumeAndMountSwitcher_C_ChangeTab Parms{};

	Parms.Param_TmpClickedTabButtonId = Param_TmpClickedTabButtonId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.OnSetPlayerCaptureStudioHidden_����
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsHidden                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharacterMenu_CostumeAndMountSwitcher_C::OnSetPlayerCaptureStudioHidden_____(bool IsHidden)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_CostumeAndMountSwitcher_C", "OnSetPlayerCaptureStudioHidden_����");

	Params::MyCharacterMenu_CostumeAndMountSwitcher_C_OnSetPlayerCaptureStudioHidden_____ Parms{};

	Parms.IsHidden = IsHidden;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsFirstOpen                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           Param_OpenBookMarkType                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMyCharacterMenu_CostumeAndMountSwitcher_C::Init(bool Param_IsFirstOpen, const class FString& Param_OpenBookMarkType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_CostumeAndMountSwitcher_C", "Init");

	Params::MyCharacterMenu_CostumeAndMountSwitcher_C_Init Parms{};

	Parms.Param_IsFirstOpen = Param_IsFirstOpen;
	Parms.Param_OpenBookMarkType = std::move(Param_OpenBookMarkType);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.BndEvt__TabButtons_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   ButtonId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharacterMenu_CostumeAndMountSwitcher_C::BndEvt__TabButtons_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(int32 ButtonId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_CostumeAndMountSwitcher_C", "BndEvt__TabButtons_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");

	Params::MyCharacterMenu_CostumeAndMountSwitcher_C_BndEvt__TabButtons_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature Parms{};

	Parms.ButtonId = ButtonId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.SetTab
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ItemToFind                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)

void UMyCharacterMenu_CostumeAndMountSwitcher_C::SetTab(const class FString& ItemToFind)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_CostumeAndMountSwitcher_C", "SetTab");

	Params::MyCharacterMenu_CostumeAndMountSwitcher_C_SetTab Parms{};

	Parms.ItemToFind = std::move(ItemToFind);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMyCharacterMenu_CostumeAndMountSwitcher_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_CostumeAndMountSwitcher_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMyCharacterMenu_CostumeAndMountSwitcher_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_CostumeAndMountSwitcher_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.Update Sub Button Excramation Icon
// (Public, BlueprintCallable, BlueprintEvent)

void UMyCharacterMenu_CostumeAndMountSwitcher_C::Update_Sub_Button_Excramation_Icon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_CostumeAndMountSwitcher_C", "Update Sub Button Excramation Icon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.IsBattleSetButtonEnable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    OutIsEnable                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharacterMenu_CostumeAndMountSwitcher_C::IsBattleSetButtonEnable(bool* OutIsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_CostumeAndMountSwitcher_C", "IsBattleSetButtonEnable");

	Params::MyCharacterMenu_CostumeAndMountSwitcher_C_IsBattleSetButtonEnable Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsEnable != nullptr)
		*OutIsEnable = Parms.OutIsEnable;
}


// Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.InitCostumeChangeMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMyCharaMenu_Costume_C*           InCostumeChangeMenu                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharacterMenu_CostumeAndMountSwitcher_C::InitCostumeChangeMenu(class UMyCharaMenu_Costume_C* InCostumeChangeMenu)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_CostumeAndMountSwitcher_C", "InitCostumeChangeMenu");

	Params::MyCharacterMenu_CostumeAndMountSwitcher_C_InitCostumeChangeMenu Parms{};

	Parms.InCostumeChangeMenu = InCostumeChangeMenu;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharacterMenu_CostumeAndMountSwitcher.MyCharacterMenu_CostumeAndMountSwitcher_C.GetWidgetSwitcherActiveWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          OutWidget                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharacterMenu_CostumeAndMountSwitcher_C::GetWidgetSwitcherActiveWidget(class UWidget** OutWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharacterMenu_CostumeAndMountSwitcher_C", "GetWidgetSwitcherActiveWidget");

	Params::MyCharacterMenu_CostumeAndMountSwitcher_C_GetWidgetSwitcherActiveWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutWidget != nullptr)
		*OutWidget = Parms.OutWidget;
}

}

