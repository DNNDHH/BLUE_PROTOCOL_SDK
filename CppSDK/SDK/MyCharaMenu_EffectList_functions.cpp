#pragma once

 

// Package: MyCharaMenu_EffectList

#include "Basic.hpp"

#include "MyCharaMenu_EffectList_classes.hpp"
#include "MyCharaMenu_EffectList_parameters.hpp"


namespace SDK
{

// Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.OnChangeEquipWeaponProc__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ProcStart                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_EffectList_C::OnChangeEquipWeaponProc__DelegateSignature(bool ProcStart)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EffectList_C", "OnChangeEquipWeaponProc__DelegateSignature");

	Params::MyCharaMenu_EffectList_C_OnChangeEquipWeaponProc__DelegateSignature Parms{};

	Parms.ProcStart = ProcStart;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.OnAnimFinishedMyCharaOut__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_EffectList_C::OnAnimFinishedMyCharaOut__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EffectList_C", "OnAnimFinishedMyCharaOut__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.OnSubMenuChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_EffectList_C::OnSubMenuChanged__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EffectList_C", "OnSubMenuChanged__DelegateSignature");

	Params::MyCharaMenu_EffectList_C_OnSubMenuChanged__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.OnAchievementChangeButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMyCharaMenu_AchievementList_C*   InAchievementList                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_EffectList_C::OnAchievementChangeButtonClicked__DelegateSignature(class UMyCharaMenu_AchievementList_C* InAchievementList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EffectList_C", "OnAchievementChangeButtonClicked__DelegateSignature");

	Params::MyCharaMenu_EffectList_C_OnAchievementChangeButtonClicked__DelegateSignature Parms{};

	Parms.InAchievementList = InAchievementList;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.OnAcquiredAchievementLoaded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InResult                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_EffectList_C::OnAcquiredAchievementLoaded__DelegateSignature(bool InResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EffectList_C", "OnAcquiredAchievementLoaded__DelegateSignature");

	Params::MyCharaMenu_EffectList_C_OnAcquiredAchievementLoaded__DelegateSignature Parms{};

	Parms.InResult = InResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.OnSelectAchievementSaved__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InResult                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_EffectList_C::OnSelectAchievementSaved__DelegateSignature(bool InResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EffectList_C", "OnSelectAchievementSaved__DelegateSignature");

	Params::MyCharaMenu_EffectList_C_OnSelectAchievementSaved__DelegateSignature Parms{};

	Parms.InResult = InResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.ExecuteUbergraph_MyCharaMenu_EffectList
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_EffectList_C::ExecuteUbergraph_MyCharaMenu_EffectList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EffectList_C", "ExecuteUbergraph_MyCharaMenu_EffectList");

	Params::MyCharaMenu_EffectList_C_ExecuteUbergraph_MyCharaMenu_EffectList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.BndEvt__MyCharaMenu_EffectList_BtnPioneerAbility_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature
// (BlueprintEvent)

void UMyCharaMenu_EffectList_C::BndEvt__MyCharaMenu_EffectList_BtnPioneerAbility_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EffectList_C", "BndEvt__MyCharaMenu_EffectList_BtnPioneerAbility_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_0_OnClicked_AchievementChangeButton__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UMyCharaMenu_AchievementList_C*   InAchievementListRef                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_EffectList_C::BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_0_OnClicked_AchievementChangeButton__DelegateSignature(class UMyCharaMenu_AchievementList_C* InAchievementListRef)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EffectList_C", "BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_0_OnClicked_AchievementChangeButton__DelegateSignature");

	Params::MyCharaMenu_EffectList_C_BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_0_OnClicked_AchievementChangeButton__DelegateSignature Parms{};

	Parms.InAchievementListRef = InAchievementListRef;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.BndEvt__BtnTickets_K2Node_ComponentBoundEvent_8_EventClicked__DelegateSignature
// (BlueprintEvent)

void UMyCharaMenu_EffectList_C::BndEvt__BtnTickets_K2Node_ComponentBoundEvent_8_EventClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EffectList_C", "BndEvt__BtnTickets_K2Node_ComponentBoundEvent_8_EventClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.BndEvt__BtnDrink_K2Node_ComponentBoundEvent_7_EventClicked__DelegateSignature
// (BlueprintEvent)

void UMyCharaMenu_EffectList_C::BndEvt__BtnDrink_K2Node_ComponentBoundEvent_7_EventClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EffectList_C", "BndEvt__BtnDrink_K2Node_ComponentBoundEvent_7_EventClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.BndEvt__BtnAbility_K2Node_ComponentBoundEvent_6_EventClicked__DelegateSignature
// (BlueprintEvent)

void UMyCharaMenu_EffectList_C::BndEvt__BtnAbility_K2Node_ComponentBoundEvent_6_EventClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EffectList_C", "BndEvt__BtnAbility_K2Node_ComponentBoundEvent_6_EventClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.BndEvt__BtnActive_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature
// (BlueprintEvent)

void UMyCharaMenu_EffectList_C::BndEvt__BtnActive_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EffectList_C", "BndEvt__BtnActive_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_1_OnLoadAchievement__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    InResult                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_EffectList_C::BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_1_OnLoadAchievement__DelegateSignature(bool InResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EffectList_C", "BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_1_OnLoadAchievement__DelegateSignature");

	Params::MyCharaMenu_EffectList_C_BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_1_OnLoadAchievement__DelegateSignature Parms{};

	Parms.InResult = InResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_2_OnSaveAchievement__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    InResult                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_EffectList_C::BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_2_OnSaveAchievement__DelegateSignature(bool InResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EffectList_C", "BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_2_OnSaveAchievement__DelegateSignature");

	Params::MyCharaMenu_EffectList_C_BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_2_OnSaveAchievement__DelegateSignature Parms{};

	Parms.InResult = InResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)

void UMyCharaMenu_EffectList_C::WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EffectList_C", "WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UMyCharaMenu_EffectList_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EffectList_C", "WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_3_OnDetailedStatusClicked__DelegateSignature
// (BlueprintEvent)

void UMyCharaMenu_EffectList_C::BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_3_OnDetailedStatusClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EffectList_C", "BndEvt__LeftSideParameters_K2Node_ComponentBoundEvent_3_OnDetailedStatusClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMyCharaMenu_EffectList_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EffectList_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.Init
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_EffectList_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EffectList_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMyCharaMenu_EffectList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EffectList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.BndEvt__MyCharaMenu_BasicStatus_DetailedStatusButtonFullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UMyCharaMenu_EffectList_C::BndEvt__MyCharaMenu_BasicStatus_DetailedStatusButtonFullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EffectList_C", "BndEvt__MyCharaMenu_BasicStatus_DetailedStatusButtonFullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.ClsoeDetailedStatus
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_EffectList_C::ClsoeDetailedStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EffectList_C", "ClsoeDetailedStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.EscDetailedStatus
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_EffectList_C::EscDetailedStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EffectList_C", "EscDetailedStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.Close
// (Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_EffectList_C::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EffectList_C", "Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.SetupEffectParameters
// (Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_EffectList_C::SetupEffectParameters()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EffectList_C", "SetupEffectParameters");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.AddEffectItemToList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InEffectNameText                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UMyCharaMenu_EffectList_C::AddEffectItemToList(const class FText& InEffectNameText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EffectList_C", "AddEffectItemToList");

	Params::MyCharaMenu_EffectList_C_AddEffectItemToList Parms{};

	Parms.InEffectNameText = std::move(InEffectNameText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.AnimMyCharaOut
// (Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_EffectList_C::AnimMyCharaOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EffectList_C", "AnimMyCharaOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_EffectList.MyCharaMenu_EffectList_C.Correct EquipedUIDs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_EffectList_C::Correct_EquipedUIDs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EffectList_C", "Correct EquipedUIDs");

	UObject::ProcessEvent(Func, nullptr);
}

}

