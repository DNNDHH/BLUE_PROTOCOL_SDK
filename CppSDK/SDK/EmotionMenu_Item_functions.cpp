#pragma once

 

// Package: EmotionMenu_Item

#include "Basic.hpp"

#include "EmotionMenu_Item_classes.hpp"
#include "EmotionMenu_Item_parameters.hpp"


namespace SDK
{

// Function EmotionMenu_Item.EmotionMenu_Item_C.OnSelect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEmotionMenu_Item_C*              InSelectedItem                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEmotionMenu_Item_C::OnSelect__DelegateSignature(class UEmotionMenu_Item_C* InSelectedItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_Item_C", "OnSelect__DelegateSignature");

	Params::EmotionMenu_Item_C_OnSelect__DelegateSignature Parms{};

	Parms.InSelectedItem = InSelectedItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EmotionMenu_Item.EmotionMenu_Item_C.OnSelectRight__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEmotionMenu_Item_C*              InSelectedItem                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEmotionMenu_Item_C::OnSelectRight__DelegateSignature(class UEmotionMenu_Item_C* InSelectedItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_Item_C", "OnSelectRight__DelegateSignature");

	Params::EmotionMenu_Item_C_OnSelectRight__DelegateSignature Parms{};

	Parms.InSelectedItem = InSelectedItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EmotionMenu_Item.EmotionMenu_Item_C.ExecuteUbergraph_EmotionMenu_Item
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEmotionMenu_Item_C::ExecuteUbergraph_EmotionMenu_Item(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_Item_C", "ExecuteUbergraph_EmotionMenu_Item");

	Params::EmotionMenu_Item_C_ExecuteUbergraph_EmotionMenu_Item Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EmotionMenu_Item.EmotionMenu_Item_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEmotionMenu_Item_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_Item_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EmotionMenu_Item.EmotionMenu_Item_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEmotionMenu_Item_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_Item_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EmotionMenu_Item.EmotionMenu_Item_C.BndEvt__Button_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UEmotionMenu_Item_C::BndEvt__Button_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_Item_C", "BndEvt__Button_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EmotionMenu_Item.EmotionMenu_Item_C.OnValidEmoteDelegate_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bValid                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   EmoteId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEmotionMenu_Item_C::OnValidEmoteDelegate_Event_0(bool bValid, int32 EmoteId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_Item_C", "OnValidEmoteDelegate_Event_0");

	Params::EmotionMenu_Item_C_OnValidEmoteDelegate_Event_0 Parms{};

	Parms.bValid = bValid;
	Parms.EmoteId = EmoteId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EmotionMenu_Item.EmotionMenu_Item_C.OnChangeCoolTimeEmotion
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsCoolTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEmotionMenu_Item_C::OnChangeCoolTimeEmotion(bool IsCoolTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_Item_C", "OnChangeCoolTimeEmotion");

	Params::EmotionMenu_Item_C_OnChangeCoolTimeEmotion Parms{};

	Parms.IsCoolTime = IsCoolTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EmotionMenu_Item.EmotionMenu_Item_C.SetEmotion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InEmotion                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEmotionMenu_Item_C::SetEmotion(const class FString& InEmotion)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_Item_C", "SetEmotion");

	Params::EmotionMenu_Item_C_SetEmotion Parms{};

	Parms.InEmotion = std::move(InEmotion);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EmotionMenu_Item.EmotionMenu_Item_C.SetEmpty
// (Public, BlueprintCallable, BlueprintEvent)

void UEmotionMenu_Item_C::SetEmpty()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_Item_C", "SetEmpty");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EmotionMenu_Item.EmotionMenu_Item_C.GetEmotion
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           OutEmotion                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UEmotionMenu_Item_C::GetEmotion(class FString* OutEmotion)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_Item_C", "GetEmotion");

	Params::EmotionMenu_Item_C_GetEmotion Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutEmotion != nullptr)
		*OutEmotion = std::move(Parms.OutEmotion);
}


// Function EmotionMenu_Item.EmotionMenu_Item_C.SetIconSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsSelected                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEmotionMenu_Item_C::SetIconSelected(bool Param_IsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_Item_C", "SetIconSelected");

	Params::EmotionMenu_Item_C_SetIconSelected Parms{};

	Parms.Param_IsSelected = Param_IsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EmotionMenu_Item.EmotionMenu_Item_C.IsSelected
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bSelected                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEmotionMenu_Item_C::IsSelected(bool* Param_bSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_Item_C", "IsSelected");

	Params::EmotionMenu_Item_C_IsSelected Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_bSelected != nullptr)
		*Param_bSelected = Parms.Param_bSelected;
}


// Function EmotionMenu_Item.EmotionMenu_Item_C.SetTooptipEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEnable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEmotionMenu_Item_C::SetTooptipEnable(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_Item_C", "SetTooptipEnable");

	Params::EmotionMenu_Item_C_SetTooptipEnable Parms{};

	Parms.bEnable = bEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EmotionMenu_Item.EmotionMenu_Item_C.SetEmptyBgColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ColorType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEmotionMenu_Item_C::SetEmptyBgColor(int32 ColorType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_Item_C", "SetEmptyBgColor");

	Params::EmotionMenu_Item_C_SetEmptyBgColor Parms{};

	Parms.ColorType = ColorType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EmotionMenu_Item.EmotionMenu_Item_C.OnPreviewMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UEmotionMenu_Item_C::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_Item_C", "OnPreviewMouseButtonDown");

	Params::EmotionMenu_Item_C_OnPreviewMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function EmotionMenu_Item.EmotionMenu_Item_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    PointerEvent                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*               Operation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEmotionMenu_Item_C::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_Item_C", "OnDragDetected");

	Params::EmotionMenu_Item_C_OnDragDetected Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.PointerEvent = std::move(PointerEvent);

	UObject::ProcessEvent(Func, &Parms);

	if (Operation != nullptr)
		*Operation = Parms.Operation;
}


// Function EmotionMenu_Item.EmotionMenu_Item_C.SetDragable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InDragable                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEmotionMenu_Item_C::SetDragable(bool InDragable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_Item_C", "SetDragable");

	Params::EmotionMenu_Item_C_SetDragable Parms{};

	Parms.InDragable = InDragable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EmotionMenu_Item.EmotionMenu_Item_C.GetShortcutItemInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FShortcutItemInfo                OutShortcutItemInfo                                    (Parm, OutParm)

void UEmotionMenu_Item_C::GetShortcutItemInfo(struct FShortcutItemInfo* OutShortcutItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_Item_C", "GetShortcutItemInfo");

	Params::EmotionMenu_Item_C_GetShortcutItemInfo Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutShortcutItemInfo != nullptr)
		*OutShortcutItemInfo = std::move(Parms.OutShortcutItemInfo);
}

}

