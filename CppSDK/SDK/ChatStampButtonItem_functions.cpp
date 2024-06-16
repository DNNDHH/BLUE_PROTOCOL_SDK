#pragma once

 

// Package: ChatStampButtonItem

#include "Basic.hpp"

#include "ChatStampButtonItem_classes.hpp"
#include "ChatStampButtonItem_parameters.hpp"


namespace SDK
{

// Function ChatStampButtonItem.ChatStampButtonItem_C.OnSelect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetStampID                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UChatStampButtonItem_C*           InSelectItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatStampButtonItem_C::OnSelect__DelegateSignature(int32 RetStampID, class UChatStampButtonItem_C* InSelectItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatStampButtonItem_C", "OnSelect__DelegateSignature");

	Params::ChatStampButtonItem_C_OnSelect__DelegateSignature Parms{};

	Parms.RetStampID = RetStampID;
	Parms.InSelectItem = InSelectItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatStampButtonItem.ChatStampButtonItem_C.OnSelectRight__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetStampID                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UChatStampButtonItem_C*           InSelectItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatStampButtonItem_C::OnSelectRight__DelegateSignature(int32 RetStampID, class UChatStampButtonItem_C* InSelectItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatStampButtonItem_C", "OnSelectRight__DelegateSignature");

	Params::ChatStampButtonItem_C_OnSelectRight__DelegateSignature Parms{};

	Parms.RetStampID = RetStampID;
	Parms.InSelectItem = InSelectItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatStampButtonItem.ChatStampButtonItem_C.ExecuteUbergraph_ChatStampButtonItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatStampButtonItem_C::ExecuteUbergraph_ChatStampButtonItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatStampButtonItem_C", "ExecuteUbergraph_ChatStampButtonItem");

	Params::ChatStampButtonItem_C_ExecuteUbergraph_ChatStampButtonItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatStampButtonItem.ChatStampButtonItem_C.BndEvt__StampButton_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UChatStampButtonItem_C::BndEvt__StampButton_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatStampButtonItem_C", "BndEvt__StampButton_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatStampButtonItem.ChatStampButtonItem_C.OnValidStampDelegate_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bValid                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Param_StampId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatStampButtonItem_C::OnValidStampDelegate_Event_0(bool bValid, int32 Param_StampId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatStampButtonItem_C", "OnValidStampDelegate_Event_0");

	Params::ChatStampButtonItem_C_OnValidStampDelegate_Event_0 Parms{};

	Parms.bValid = bValid;
	Parms.Param_StampId = Param_StampId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatStampButtonItem.ChatStampButtonItem_C.OnChangeCoolTimeStamp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsCoolTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatStampButtonItem_C::OnChangeCoolTimeStamp(bool IsCoolTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatStampButtonItem_C", "OnChangeCoolTimeStamp");

	Params::ChatStampButtonItem_C_OnChangeCoolTimeStamp Parms{};

	Parms.IsCoolTime = IsCoolTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatStampButtonItem.ChatStampButtonItem_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UChatStampButtonItem_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatStampButtonItem_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatStampButtonItem.ChatStampButtonItem_C.BndEvt__StampButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UChatStampButtonItem_C::BndEvt__StampButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatStampButtonItem_C", "BndEvt__StampButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatStampButtonItem.ChatStampButtonItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UChatStampButtonItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatStampButtonItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatStampButtonItem.ChatStampButtonItem_C.BndEvt__StampButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UChatStampButtonItem_C::BndEvt__StampButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatStampButtonItem_C", "BndEvt__StampButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatStampButtonItem.ChatStampButtonItem_C.SetStamp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InStampId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatStampButtonItem_C::SetStamp(int32 InStampId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatStampButtonItem_C", "SetStamp");

	Params::ChatStampButtonItem_C_SetStamp Parms{};

	Parms.InStampId = InStampId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatStampButtonItem.ChatStampButtonItem_C.SetIconSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSelected                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatStampButtonItem_C::SetIconSelected(bool IsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatStampButtonItem_C", "SetIconSelected");

	Params::ChatStampButtonItem_C_SetIconSelected Parms{};

	Parms.IsSelected = IsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatStampButtonItem.ChatStampButtonItem_C.SetDragable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InDragable                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatStampButtonItem_C::SetDragable(bool InDragable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatStampButtonItem_C", "SetDragable");

	Params::ChatStampButtonItem_C_SetDragable Parms{};

	Parms.InDragable = InDragable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatStampButtonItem.ChatStampButtonItem_C.OnPreviewMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UChatStampButtonItem_C::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatStampButtonItem_C", "OnPreviewMouseButtonDown");

	Params::ChatStampButtonItem_C_OnPreviewMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ChatStampButtonItem.ChatStampButtonItem_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    PointerEvent                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*               Operation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatStampButtonItem_C::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatStampButtonItem_C", "OnDragDetected");

	Params::ChatStampButtonItem_C_OnDragDetected Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.PointerEvent = std::move(PointerEvent);

	UObject::ProcessEvent(Func, &Parms);

	if (Operation != nullptr)
		*Operation = Parms.Operation;
}


// Function ChatStampButtonItem.ChatStampButtonItem_C.SetPressedSoundId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESystemSE                               PressedSystemSEId                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatStampButtonItem_C::SetPressedSoundId(ESystemSE PressedSystemSEId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatStampButtonItem_C", "SetPressedSoundId");

	Params::ChatStampButtonItem_C_SetPressedSoundId Parms{};

	Parms.PressedSystemSEId = PressedSystemSEId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatStampButtonItem.ChatStampButtonItem_C.SetViewLarger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InViewLarger                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatStampButtonItem_C::SetViewLarger(bool InViewLarger)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatStampButtonItem_C", "SetViewLarger");

	Params::ChatStampButtonItem_C_SetViewLarger Parms{};

	Parms.InViewLarger = InViewLarger;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatStampButtonItem.ChatStampButtonItem_C.GetFloatStampPoint
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                        OutPos                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatStampButtonItem_C::GetFloatStampPoint(struct FVector2D* OutPos)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatStampButtonItem_C", "GetFloatStampPoint");

	Params::ChatStampButtonItem_C_GetFloatStampPoint Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutPos != nullptr)
		*OutPos = std::move(Parms.OutPos);
}


// Function ChatStampButtonItem.ChatStampButtonItem_C.SetLimitedTimeIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatStampButtonItem_C::SetLimitedTimeIcon(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatStampButtonItem_C", "SetLimitedTimeIcon");

	Params::ChatStampButtonItem_C_SetLimitedTimeIcon Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatStampButtonItem.ChatStampButtonItem_C.SetShortcutIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_StampId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    IsVisibility                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatStampButtonItem_C::SetShortcutIcon(const class FString& Param_StampId, bool* IsVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatStampButtonItem_C", "SetShortcutIcon");

	Params::ChatStampButtonItem_C_SetShortcutIcon Parms{};

	Parms.Param_StampId = std::move(Param_StampId);

	UObject::ProcessEvent(Func, &Parms);

	if (IsVisibility != nullptr)
		*IsVisibility = Parms.IsVisibility;
}


// Function ChatStampButtonItem.ChatStampButtonItem_C.SefFloatStampOrder
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUIZOrder                               InOrder                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatStampButtonItem_C::SefFloatStampOrder(EUIZOrder InOrder)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatStampButtonItem_C", "SefFloatStampOrder");

	Params::ChatStampButtonItem_C_SefFloatStampOrder Parms{};

	Parms.InOrder = InOrder;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatStampButtonItem.ChatStampButtonItem_C.GetShortcutItemInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FShortcutItemInfo                OutShortcutItemInfo                                    (Parm, OutParm)

void UChatStampButtonItem_C::GetShortcutItemInfo(struct FShortcutItemInfo* OutShortcutItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatStampButtonItem_C", "GetShortcutItemInfo");

	Params::ChatStampButtonItem_C_GetShortcutItemInfo Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutShortcutItemInfo != nullptr)
		*OutShortcutItemInfo = std::move(Parms.OutShortcutItemInfo);
}

}

