#pragma once

 

// Package: EmotionMenu_StampMenu

#include "Basic.hpp"

#include "EmotionMenu_StampMenu_classes.hpp"
#include "EmotionMenu_StampMenu_parameters.hpp"


namespace SDK
{

// Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.ExecuteUbergraph_EmotionMenu_StampMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEmotionMenu_StampMenu_C::ExecuteUbergraph_EmotionMenu_StampMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_StampMenu_C", "ExecuteUbergraph_EmotionMenu_StampMenu");

	Params::EmotionMenu_StampMenu_C_ExecuteUbergraph_EmotionMenu_StampMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.OnChangeCoolTimeEmotion
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsCoolTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEmotionMenu_StampMenu_C::OnChangeCoolTimeEmotion(bool IsCoolTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_StampMenu_C", "OnChangeCoolTimeEmotion");

	Params::EmotionMenu_StampMenu_C_OnChangeCoolTimeEmotion Parms{};

	Parms.IsCoolTime = IsCoolTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEmotionMenu_StampMenu_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_StampMenu_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.BndEvt__StampCategoryMenu_K2Node_ComponentBoundEvent_21_OnUpdateStamp__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FSBStampCategoryMasterData       StampCategoryMasterData                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UEmotionMenu_StampMenu_C::BndEvt__StampCategoryMenu_K2Node_ComponentBoundEvent_21_OnUpdateStamp__DelegateSignature(const struct FSBStampCategoryMasterData& StampCategoryMasterData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_StampMenu_C", "BndEvt__StampCategoryMenu_K2Node_ComponentBoundEvent_21_OnUpdateStamp__DelegateSignature");

	Params::EmotionMenu_StampMenu_C_BndEvt__StampCategoryMenu_K2Node_ComponentBoundEvent_21_OnUpdateStamp__DelegateSignature Parms{};

	Parms.StampCategoryMasterData = std::move(StampCategoryMasterData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.OnStampClicked_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   StampId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UChatStampButtonItem_C*           InSelectItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEmotionMenu_StampMenu_C::OnStampClicked_Event(int32 StampId, class UChatStampButtonItem_C* InSelectItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_StampMenu_C", "OnStampClicked_Event");

	Params::EmotionMenu_StampMenu_C_OnStampClicked_Event Parms{};

	Parms.StampId = StampId;
	Parms.InSelectItem = InSelectItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEmotionMenu_StampMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_StampMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.CreateStamp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBStampCategoryMasterData       StampData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UEmotionMenu_StampMenu_C::CreateStamp(const struct FSBStampCategoryMasterData& StampData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_StampMenu_C", "CreateStamp");

	Params::EmotionMenu_StampMenu_C_CreateStamp Parms{};

	Parms.StampData = std::move(StampData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.SetHistoryMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSet                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEmotionMenu_StampMenu_C::SetHistoryMode(bool bSet)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_StampMenu_C", "SetHistoryMode");

	Params::EmotionMenu_StampMenu_C_SetHistoryMode Parms{};

	Parms.bSet = bSet;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.UpdateIconSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UChatStampButtonItem_C*           InSelectIcon                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEmotionMenu_StampMenu_C::UpdateIconSelect(class UChatStampButtonItem_C* InSelectIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_StampMenu_C", "UpdateIconSelect");

	Params::EmotionMenu_StampMenu_C_UpdateIconSelect Parms{};

	Parms.InSelectIcon = InSelectIcon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.SetDragable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InDragable                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEmotionMenu_StampMenu_C::SetDragable(bool InDragable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_StampMenu_C", "SetDragable");

	Params::EmotionMenu_StampMenu_C_SetDragable Parms{};

	Parms.InDragable = InDragable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.Show
// (Public, BlueprintCallable, BlueprintEvent)

void UEmotionMenu_StampMenu_C::Show()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_StampMenu_C", "Show");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)

void UEmotionMenu_StampMenu_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_StampMenu_C", "Hide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.SelectStamp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InStampId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UChatStampButtonItem_C*           InStampItem                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEmotionMenu_StampMenu_C::SelectStamp(int32 InStampId, class UChatStampButtonItem_C* InStampItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_StampMenu_C", "SelectStamp");

	Params::EmotionMenu_StampMenu_C_SelectStamp Parms{};

	Parms.InStampId = InStampId;
	Parms.InStampItem = InStampItem;

	UObject::ProcessEvent(Func, &Parms);
}

}

