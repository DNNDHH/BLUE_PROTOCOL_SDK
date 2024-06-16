#pragma once

 

// Package: MyCharaMenu

#include "Basic.hpp"

#include "MyCharaMenu_classes.hpp"
#include "MyCharaMenu_parameters.hpp"


namespace SDK
{

// Function MyCharaMenu.MyCharaMenu_C.ExecuteUbergraph_MyCharaMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_C::ExecuteUbergraph_MyCharaMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "ExecuteUbergraph_MyCharaMenu");

	Params::MyCharaMenu_C_ExecuteUbergraph_MyCharaMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu.MyCharaMenu_C.AdventurerRankSubMenuChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_C::AdventurerRankSubMenuChanged(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "AdventurerRankSubMenuChanged");

	Params::MyCharaMenu_C_AdventurerRankSubMenuChanged Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu.MyCharaMenu_C.SkillBoardSetSubMenuChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_C::SkillBoardSetSubMenuChanged(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "SkillBoardSetSubMenuChanged");

	Params::MyCharaMenu_C_SkillBoardSetSubMenuChanged Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu.MyCharaMenu_C.CostumeAndMountsSubMenuChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_C::CostumeAndMountsSubMenuChanged(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "CostumeAndMountsSubMenuChanged");

	Params::MyCharaMenu_C_CostumeAndMountsSubMenuChanged Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu.MyCharaMenu_C.OnResetAvatarCostumeOnOffToDefault
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_C::OnResetAvatarCostumeOnOffToDefault()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "OnResetAvatarCostumeOnOffToDefault");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu.MyCharaMenu_C.OnCostumeAndMountsSubMenuChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSubMenuId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_C::OnCostumeAndMountsSubMenuChanged(int32 InSubMenuId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "OnCostumeAndMountsSubMenuChanged");

	Params::MyCharaMenu_C_OnCostumeAndMountsSubMenuChanged Parms{};

	Parms.InSubMenuId = InSubMenuId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu.MyCharaMenu_C.OnIsCostumeOn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsCostumeOn                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_C::OnIsCostumeOn(bool InIsCostumeOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "OnIsCostumeOn");

	Params::MyCharaMenu_C_OnIsCostumeOn Parms{};

	Parms.InIsCostumeOn = InIsCostumeOn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu.MyCharaMenu_C.OnCharaPartsLoaded_CostumePreviewRefresh
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_C::OnCharaPartsLoaded_CostumePreviewRefresh(bool Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "OnCharaPartsLoaded_CostumePreviewRefresh");

	Params::MyCharaMenu_C_OnCharaPartsLoaded_CostumePreviewRefresh Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu.MyCharaMenu_C.RefreshPreviewCostume
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBCharaCreateParameter          CharaCreateParameter                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UMyCharaMenu_C::RefreshPreviewCostume(const struct FSBCharaCreateParameter& CharaCreateParameter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "RefreshPreviewCostume");

	Params::MyCharaMenu_C_RefreshPreviewCostume Parms{};

	Parms.CharaCreateParameter = std::move(CharaCreateParameter);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu.MyCharaMenu_C.SetAvatarImageReuploadFlag
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_C::SetAvatarImageReuploadFlag()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "SetAvatarImageReuploadFlag");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu.MyCharaMenu_C.SetCostumePreviewParameter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBCharaCreateParameter          CharaCreateParameter                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    Start                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_C::SetCostumePreviewParameter(const struct FSBCharaCreateParameter& CharaCreateParameter, bool Start)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "SetCostumePreviewParameter");

	Params::MyCharaMenu_C_SetCostumePreviewParameter Parms{};

	Parms.CharaCreateParameter = std::move(CharaCreateParameter);
	Parms.Start = Start;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu.MyCharaMenu_C.OnResetPlayerAvatarRotate_����
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_C::OnResetPlayerAvatarRotate_____()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "OnResetPlayerAvatarRotate_����");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu.MyCharaMenu_C.OnEquippedWeaponSpawned
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_C::OnEquippedWeaponSpawned()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "OnEquippedWeaponSpawned");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu.MyCharaMenu_C.OnIsCmnBackBtnVisibleEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_C::OnIsCmnBackBtnVisibleEvent(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "OnIsCmnBackBtnVisibleEvent");

	Params::MyCharaMenu_C_OnIsCmnBackBtnVisibleEvent Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu.MyCharaMenu_C.OnSameMenuBookmarkAccessNew
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InBookMarkType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMyCharaMenu_C::OnSameMenuBookmarkAccessNew(const class FString& InBookMarkType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "OnSameMenuBookmarkAccessNew");

	Params::MyCharaMenu_C_OnSameMenuBookmarkAccessNew Parms{};

	Parms.InBookMarkType = std::move(InBookMarkType);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu.MyCharaMenu_C.OnChangeEquipCostumeOccuredAtOtherEquipChange
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_C::OnChangeEquipCostumeOccuredAtOtherEquipChange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "OnChangeEquipCostumeOccuredAtOtherEquipChange");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu.MyCharaMenu_C.OnCostumeSwitchOnOffEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsCostumeOn                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_C::OnCostumeSwitchOnOffEvent(bool InIsCostumeOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "OnCostumeSwitchOnOffEvent");

	Params::MyCharaMenu_C_OnCostumeSwitchOnOffEvent Parms{};

	Parms.InIsCostumeOn = InIsCostumeOn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu.MyCharaMenu_C.UpdateBookmarkStatusButton
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_C::UpdateBookmarkStatusButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "UpdateBookmarkStatusButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu.MyCharaMenu_C.BookmarkUpdateRequest
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_C::BookmarkUpdateRequest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "BookmarkUpdateRequest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu.MyCharaMenu_C.OnSetPlayerCaptureStudioHidden_����
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsHidden                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_C::OnSetPlayerCaptureStudioHidden_____(bool IsHidden)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "OnSetPlayerCaptureStudioHidden_����");

	Params::MyCharaMenu_C_OnSetPlayerCaptureStudioHidden_____ Parms{};

	Parms.IsHidden = IsHidden;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu.MyCharaMenu_C.DoMenuClose
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_C::DoMenuClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "DoMenuClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu.MyCharaMenu_C.OnCharaPartsLoadedDelegate_ByChangeCostume_����
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_C::OnCharaPartsLoadedDelegate_ByChangeCostume_____(bool Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "OnCharaPartsLoadedDelegate_ByChangeCostume_����");

	Params::MyCharaMenu_C_OnCharaPartsLoadedDelegate_ByChangeCostume_____ Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu.MyCharaMenu_C.OnChangeStateByCostumeChange_����
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InPrevStateName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           InNextStateName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMyCharaMenu_C::OnChangeStateByCostumeChange_____(const class FString& InPrevStateName, const class FString& InNextStateName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "OnChangeStateByCostumeChange_����");

	Params::MyCharaMenu_C_OnChangeStateByCostumeChange_____ Parms{};

	Parms.InPrevStateName = std::move(InPrevStateName);
	Parms.InNextStateName = std::move(InNextStateName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu.MyCharaMenu_C.StartOpenMenuAnimation
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_C::StartOpenMenuAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "StartOpenMenuAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu.MyCharaMenu_C.OnAvatarPoseChangeState_����
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InPrevStateName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           InNextStateName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMyCharaMenu_C::OnAvatarPoseChangeState_____(const class FString& InPrevStateName, const class FString& InNextStateName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "OnAvatarPoseChangeState_����");

	Params::MyCharaMenu_C_OnAvatarPoseChangeState_____ Parms{};

	Parms.InPrevStateName = std::move(InPrevStateName);
	Parms.InNextStateName = std::move(InNextStateName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu.MyCharaMenu_C.OnPlayerAvatarStudio_CharaPartsLoaded_����
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_C::OnPlayerAvatarStudio_CharaPartsLoaded_____()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "OnPlayerAvatarStudio_CharaPartsLoaded_����");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu.MyCharaMenu_C.OnPlayerAvatarSwitchPosing_����
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             OnPosingCommandName                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InSwitchPosingToPrev                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_C::OnPlayerAvatarSwitchPosing_____(class FName OnPosingCommandName, bool InSwitchPosingToPrev)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "OnPlayerAvatarSwitchPosing_����");

	Params::MyCharaMenu_C_OnPlayerAvatarSwitchPosing_____ Parms{};

	Parms.OnPosingCommandName = OnPosingCommandName;
	Parms.InSwitchPosingToPrev = InSwitchPosingToPrev;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu.MyCharaMenu_C.EffectListSubMenuChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_C::EffectListSubMenuChanged(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "EffectListSubMenuChanged");

	Params::MyCharaMenu_C_EffectListSubMenuChanged Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu.MyCharaMenu_C.BattleSetSubMenuChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_C::BattleSetSubMenuChanged(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "BattleSetSubMenuChanged");

	Params::MyCharaMenu_C_BattleSetSubMenuChanged Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu.MyCharaMenu_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "CustomEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu.MyCharaMenu_C.OnRequestDirectChat_Event
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_C::OnRequestDirectChat_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "OnRequestDirectChat_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu.MyCharaMenu_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "OnAnimationFinished");

	Params::MyCharaMenu_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu.MyCharaMenu_C.ChangeCostumeProc
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InProcStart                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_C::ChangeCostumeProc(bool InProcStart)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "ChangeCostumeProc");

	Params::MyCharaMenu_C_ChangeCostumeProc Parms{};

	Parms.InProcStart = InProcStart;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu.MyCharaMenu_C.OnPlayerAvatarRotateActive_����
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsActive                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_C::OnPlayerAvatarRotateActive_____(bool InIsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "OnPlayerAvatarRotateActive_����");

	Params::MyCharaMenu_C_OnPlayerAvatarRotateActive_____ Parms{};

	Parms.InIsActive = InIsActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu.MyCharaMenu_C.SetUIBlockerVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_C::SetUIBlockerVisibility(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "SetUIBlockerVisibility");

	Params::MyCharaMenu_C_SetUIBlockerVisibility Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu.MyCharaMenu_C.BndEvt__MenuItemTabList_K2Node_ComponentBoundEvent_120_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   ButtonId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_C::BndEvt__MenuItemTabList_K2Node_ComponentBoundEvent_120_OnClick__DelegateSignature(int32 ButtonId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "BndEvt__MenuItemTabList_K2Node_ComponentBoundEvent_120_OnClick__DelegateSignature");

	Params::MyCharaMenu_C_BndEvt__MenuItemTabList_K2Node_ComponentBoundEvent_120_OnClick__DelegateSignature Parms{};

	Parms.ButtonId = ButtonId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu.MyCharaMenu_C.Init
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu.MyCharaMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMyCharaMenu_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu.MyCharaMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMyCharaMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu.MyCharaMenu_C.SelectAchievementSaved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InResult                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_C::SelectAchievementSaved(bool InResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "SelectAchievementSaved");

	Params::MyCharaMenu_C_SelectAchievementSaved Parms{};

	Parms.InResult = InResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu.MyCharaMenu_C.AcquiredAchievementLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InResult                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_C::AcquiredAchievementLoaded(bool InResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "AcquiredAchievementLoaded");

	Params::MyCharaMenu_C_AcquiredAchievementLoaded Parms{};

	Parms.InResult = InResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu.MyCharaMenu_C.AchievementChangeButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMyCharaMenu_AchievementList_C*   InAchievementList                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_C::AchievementChangeButtonClicked(class UMyCharaMenu_AchievementList_C* InAchievementList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "AchievementChangeButtonClicked");

	Params::MyCharaMenu_C_AchievementChangeButtonClicked Parms{};

	Parms.InAchievementList = InAchievementList;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu.MyCharaMenu_C.OnUploadImageEnded
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_C::OnUploadImageEnded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "OnUploadImageEnded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu.MyCharaMenu_C.StartPlayerAvatarUploadImage
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_C::StartPlayerAvatarUploadImage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "StartPlayerAvatarUploadImage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu.MyCharaMenu_C.OnUploadImageCompleted_����
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_C::OnUploadImageCompleted_____()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "OnUploadImageCompleted_����");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu.MyCharaMenu_C.OnSaveCommandMenuPlayerAvatarPoseId_����
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRetCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InAvatarPoseId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_C::OnSaveCommandMenuPlayerAvatarPoseId_____(int32 InRetCode, int32 InAvatarPoseId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "OnSaveCommandMenuPlayerAvatarPoseId_����");

	Params::MyCharaMenu_C_OnSaveCommandMenuPlayerAvatarPoseId_____ Parms{};

	Parms.InRetCode = InRetCode;
	Parms.InAvatarPoseId = InAvatarPoseId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu.MyCharaMenu_C.StartUploadImage
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_C::StartUploadImage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "StartUploadImage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu.MyCharaMenu_C.ResetMouseCursorTypeToDefaultRequest
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_C::ResetMouseCursorTypeToDefaultRequest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "ResetMouseCursorTypeToDefaultRequest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu.MyCharaMenu_C.OnSubMenuUpdate
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   MainPage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SubPage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_C::OnSubMenuUpdate(int32 MainPage, int32 SubPage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "OnSubMenuUpdate");

	Params::MyCharaMenu_C_OnSubMenuUpdate Parms{};

	Parms.MainPage = MainPage;
	Parms.SubPage = SubPage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu.MyCharaMenu_C.OnRMShopClosed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_C::OnRMShopClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "OnRMShopClosed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu.MyCharaMenu_C.OnParentTerm
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_C::OnParentTerm()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "OnParentTerm");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu.MyCharaMenu_C.Setup Selected Menu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMyCharaMenu_ItemType                   InSelectedItemType                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_C::Setup_Selected_Menu(EMyCharaMenu_ItemType InSelectedItemType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "Setup Selected Menu");

	Params::MyCharaMenu_C_Setup_Selected_Menu Parms{};

	Parms.InSelectedItemType = InSelectedItemType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu.MyCharaMenu_C.FindCurrMapPlayerAvatarTransform
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InCurrMapName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FTransform                       OutTransform                                           (Parm, OutParm, IsPlainOldData, NoDestructor)

void UMyCharaMenu_C::FindCurrMapPlayerAvatarTransform(const class FString& InCurrMapName, struct FTransform* OutTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "FindCurrMapPlayerAvatarTransform");

	Params::MyCharaMenu_C_FindCurrMapPlayerAvatarTransform Parms{};

	Parms.InCurrMapName = std::move(InCurrMapName);

	UObject::ProcessEvent(Func, &Parms);

	if (OutTransform != nullptr)
		*OutTransform = std::move(Parms.OutTransform);
}


// Function MyCharaMenu.MyCharaMenu_C.SetPlayerAvatarStudioHidden
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsHidden                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_C::SetPlayerAvatarStudioHidden(bool InIsHidden)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "SetPlayerAvatarStudioHidden");

	Params::MyCharaMenu_C_SetPlayerAvatarStudioHidden Parms{};

	Parms.InIsHidden = InIsHidden;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu.MyCharaMenu_C.Initialize Open Menu Type
// (Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_C::Initialize_Open_Menu_Type()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "Initialize Open Menu Type");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu.MyCharaMenu_C.UpdateArmamentChangeButtonEnable
// (Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_C::UpdateArmamentChangeButtonEnable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "UpdateArmamentChangeButtonEnable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu.MyCharaMenu_C.Set Player Avater Motion Mode
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMyCharaMenu_ItemType                   InMyCharaMenuItemType                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsIdleMotionPlaying                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_C::Set_Player_Avater_Motion_Mode(EMyCharaMenu_ItemType& InMyCharaMenuItemType, bool* IsIdleMotionPlaying)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "Set Player Avater Motion Mode");

	Params::MyCharaMenu_C_Set_Player_Avater_Motion_Mode Parms{};

	Parms.InMyCharaMenuItemType = InMyCharaMenuItemType;

	UObject::ProcessEvent(Func, &Parms);

	InMyCharaMenuItemType = Parms.InMyCharaMenuItemType;

	if (IsIdleMotionPlaying != nullptr)
		*IsIdleMotionPlaying = Parms.IsIdleMotionPlaying;
}


// Function MyCharaMenu.MyCharaMenu_C.Set Player Avater Current Mode Motion
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMyCharaMenu_ItemType                   InMyCharaMenuItemType                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ForceEnable                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_C::Set_Player_Avater_Current_Mode_Motion(EMyCharaMenu_ItemType InMyCharaMenuItemType, bool ForceEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "Set Player Avater Current Mode Motion");

	Params::MyCharaMenu_C_Set_Player_Avater_Current_Mode_Motion Parms{};

	Parms.InMyCharaMenuItemType = InMyCharaMenuItemType;
	Parms.ForceEnable = ForceEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu.MyCharaMenu_C.UpdatePlayerAvatarWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_C::UpdatePlayerAvatarWeapon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "UpdatePlayerAvatarWeapon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu.MyCharaMenu_C.TermRequest
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESubMenuTermReason                      InReason                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESubMenuTermRequestReply                ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESubMenuTermRequestReply UMyCharaMenu_C::TermRequest(const ESubMenuTermReason InReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_C", "TermRequest");

	Params::MyCharaMenu_C_TermRequest Parms{};

	Parms.InReason = InReason;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

