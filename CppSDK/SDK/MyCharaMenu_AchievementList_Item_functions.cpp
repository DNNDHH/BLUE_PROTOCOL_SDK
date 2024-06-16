#pragma once

 

// Package: MyCharaMenu_AchievementList_Item

#include "Basic.hpp"

#include "MyCharaMenu_AchievementList_Item_classes.hpp"
#include "MyCharaMenu_AchievementList_Item_parameters.hpp"


namespace SDK
{

// Function MyCharaMenu_AchievementList_Item.MyCharaMenu_AchievementList_Item_C.OnSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMyCharaMenu_AchievementList_Item_C*InSelectedItem                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_AchievementList_Item_C::OnSelected__DelegateSignature(class UMyCharaMenu_AchievementList_Item_C* InSelectedItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_AchievementList_Item_C", "OnSelected__DelegateSignature");

	Params::MyCharaMenu_AchievementList_Item_C_OnSelected__DelegateSignature Parms{};

	Parms.InSelectedItem = InSelectedItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_AchievementList_Item.MyCharaMenu_AchievementList_Item_C.ExecuteUbergraph_MyCharaMenu_AchievementList_Item
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_AchievementList_Item_C::ExecuteUbergraph_MyCharaMenu_AchievementList_Item(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_AchievementList_Item_C", "ExecuteUbergraph_MyCharaMenu_AchievementList_Item");

	Params::MyCharaMenu_AchievementList_Item_C_ExecuteUbergraph_MyCharaMenu_AchievementList_Item Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_AchievementList_Item.MyCharaMenu_AchievementList_Item_C.BndEvt__CheckBoxNormal_K2Node_ComponentBoundEvent_219_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_AchievementList_Item_C::BndEvt__CheckBoxNormal_K2Node_ComponentBoundEvent_219_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_AchievementList_Item_C", "BndEvt__CheckBoxNormal_K2Node_ComponentBoundEvent_219_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::MyCharaMenu_AchievementList_Item_C_BndEvt__CheckBoxNormal_K2Node_ComponentBoundEvent_219_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_AchievementList_Item.MyCharaMenu_AchievementList_Item_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_AchievementList_Item_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_AchievementList_Item_C", "PreConstruct");

	Params::MyCharaMenu_AchievementList_Item_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_AchievementList_Item.MyCharaMenu_AchievementList_Item_C.GetToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UMyCharaMenu_AchievementList_Item_C::GetToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_AchievementList_Item_C", "GetToolTipWidget_0");

	Params::MyCharaMenu_AchievementList_Item_C_GetToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function MyCharaMenu_AchievementList_Item.MyCharaMenu_AchievementList_Item_C.SetAchievement
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InAchievementId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_AchievementList_Item_C::SetAchievement(int32 InAchievementId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_AchievementList_Item_C", "SetAchievement");

	Params::MyCharaMenu_AchievementList_Item_C_SetAchievement Parms{};

	Parms.InAchievementId = InAchievementId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_AchievementList_Item.MyCharaMenu_AchievementList_Item_C.GetAchievement
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   OutAchievementId                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_AchievementList_Item_C::GetAchievement(int32* OutAchievementId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_AchievementList_Item_C", "GetAchievement");

	Params::MyCharaMenu_AchievementList_Item_C_GetAchievement Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutAchievementId != nullptr)
		*OutAchievementId = Parms.OutAchievementId;
}


// Function MyCharaMenu_AchievementList_Item.MyCharaMenu_AchievementList_Item_C.SetTooltipEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_AchievementList_Item_C::SetTooltipEnable(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_AchievementList_Item_C", "SetTooltipEnable");

	Params::MyCharaMenu_AchievementList_Item_C_SetTooltipEnable Parms{};

	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_AchievementList_Item.MyCharaMenu_AchievementList_Item_C.SetAsAchievementSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsAchievementSelected                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_AchievementList_Item_C::SetAsAchievementSelected(bool IsAchievementSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_AchievementList_Item_C", "SetAsAchievementSelected");

	Params::MyCharaMenu_AchievementList_Item_C_SetAsAchievementSelected Parms{};

	Parms.IsAchievementSelected = IsAchievementSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_AchievementList_Item.MyCharaMenu_AchievementList_Item_C.SetAchievementUnlock
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsUnlocked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_AchievementList_Item_C::SetAchievementUnlock(bool IsUnlocked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_AchievementList_Item_C", "SetAchievementUnlock");

	Params::MyCharaMenu_AchievementList_Item_C_SetAchievementUnlock Parms{};

	Parms.IsUnlocked = IsUnlocked;

	UObject::ProcessEvent(Func, &Parms);
}

}

