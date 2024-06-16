#pragma once

 

// Package: WBP_EmotionIconScroolBox

#include "Basic.hpp"

#include "WBP_EmotionIconScroolBox_classes.hpp"
#include "WBP_EmotionIconScroolBox_parameters.hpp"


namespace SDK
{

// Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.OnSelectEmotionItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEmotionMenu_Item_C*              InSelectedItem                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EmotionIconScroolBox_C::OnSelectEmotionItem__DelegateSignature(class UEmotionMenu_Item_C* InSelectedItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EmotionIconScroolBox_C", "OnSelectEmotionItem__DelegateSignature");

	Params::WBP_EmotionIconScroolBox_C_OnSelectEmotionItem__DelegateSignature Parms{};

	Parms.InSelectedItem = InSelectedItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.ExecuteUbergraph_WBP_EmotionIconScroolBox
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EmotionIconScroolBox_C::ExecuteUbergraph_WBP_EmotionIconScroolBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EmotionIconScroolBox_C", "ExecuteUbergraph_WBP_EmotionIconScroolBox");

	Params::WBP_EmotionIconScroolBox_C_ExecuteUbergraph_WBP_EmotionIconScroolBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.Event_OnSelectEmotionItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEmotionMenu_Item_C*              InSelectedItem                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EmotionIconScroolBox_C::Event_OnSelectEmotionItem(class UEmotionMenu_Item_C* InSelectedItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EmotionIconScroolBox_C", "Event_OnSelectEmotionItem");

	Params::WBP_EmotionIconScroolBox_C_Event_OnSelectEmotionItem Parms{};

	Parms.InSelectedItem = InSelectedItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.Destruct_Emotion
// (BlueprintCallable, BlueprintEvent)

void UWBP_EmotionIconScroolBox_C::Destruct_Emotion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EmotionIconScroolBox_C", "Destruct_Emotion");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.CreateEmotionIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>                   InEmotionList                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_EmotionIconScroolBox_C::CreateEmotionIcon(TArray<class FString>& InEmotionList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EmotionIconScroolBox_C", "CreateEmotionIcon");

	Params::WBP_EmotionIconScroolBox_C_CreateEmotionIcon Parms{};

	Parms.InEmotionList = std::move(InEmotionList);

	UObject::ProcessEvent(Func, &Parms);

	InEmotionList = std::move(Parms.InEmotionList);
}


// Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.CreateEmotionEmptySlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSlotCount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EmotionIconScroolBox_C::CreateEmotionEmptySlot(int32 InSlotCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EmotionIconScroolBox_C", "CreateEmotionEmptySlot");

	Params::WBP_EmotionIconScroolBox_C_CreateEmotionEmptySlot Parms{};

	Parms.InSlotCount = InSlotCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.RefreshEmotion
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>                   InEmotionList                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_EmotionIconScroolBox_C::RefreshEmotion(TArray<class FString>& InEmotionList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EmotionIconScroolBox_C", "RefreshEmotion");

	Params::WBP_EmotionIconScroolBox_C_RefreshEmotion Parms{};

	Parms.InEmotionList = std::move(InEmotionList);

	UObject::ProcessEvent(Func, &Parms);

	InEmotionList = std::move(Parms.InEmotionList);
}


// Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.ClearEmotionSlot
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_EmotionIconScroolBox_C::ClearEmotionSlot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EmotionIconScroolBox_C", "ClearEmotionSlot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.UpdateEmoteIconEnable
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_EmotionIconScroolBox_C::UpdateEmoteIconEnable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EmotionIconScroolBox_C", "UpdateEmoteIconEnable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.IsEnableEmoteIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             EmoteId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsEnable                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_EmotionIconScroolBox_C::IsEnableEmoteIcon(class FName EmoteId, bool* bIsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EmotionIconScroolBox_C", "IsEnableEmoteIcon");

	Params::WBP_EmotionIconScroolBox_C_IsEnableEmoteIcon Parms{};

	Parms.EmoteId = EmoteId;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsEnable != nullptr)
		*bIsEnable = Parms.bIsEnable;
}


// Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.SetSelectedIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          InSelectedItem                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EmotionIconScroolBox_C::SetSelectedIcon(class UObject* InSelectedItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EmotionIconScroolBox_C", "SetSelectedIcon");

	Params::WBP_EmotionIconScroolBox_C_SetSelectedIcon Parms{};

	Parms.InSelectedItem = InSelectedItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.SetDragableItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InDragable                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_EmotionIconScroolBox_C::SetDragableItem(bool InDragable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EmotionIconScroolBox_C", "SetDragableItem");

	Params::WBP_EmotionIconScroolBox_C_SetDragableItem Parms{};

	Parms.InDragable = InDragable;

	UObject::ProcessEvent(Func, &Parms);
}

}

