#pragma once

 

// Package: ChatLogOtherPlayerMessage

#include "Basic.hpp"

#include "ChatLogOtherPlayerMessage_classes.hpp"
#include "ChatLogOtherPlayerMessage_parameters.hpp"


namespace SDK
{

// Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.OnClickedDirectMessage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           TagertPlayerId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                             TagertName                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                           CharacterId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESBPrivilegeType                        PrivilegeType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatLogOtherPlayerMessage_C::OnClickedDirectMessage__DelegateSignature(const class FString& TagertPlayerId, const class FText& TagertName, const class FString& CharacterId, ESBPrivilegeType PrivilegeType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogOtherPlayerMessage_C", "OnClickedDirectMessage__DelegateSignature");

	Params::ChatLogOtherPlayerMessage_C_OnClickedDirectMessage__DelegateSignature Parms{};

	Parms.TagertPlayerId = std::move(TagertPlayerId);
	Parms.TagertName = std::move(TagertName);
	Parms.CharacterId = std::move(CharacterId);
	Parms.PrivilegeType = PrivilegeType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.ExecuteUbergraph_ChatLogOtherPlayerMessage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatLogOtherPlayerMessage_C::ExecuteUbergraph_ChatLogOtherPlayerMessage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogOtherPlayerMessage_C", "ExecuteUbergraph_ChatLogOtherPlayerMessage");

	Params::ChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.SetWidthOverride
// (BlueprintCallable, BlueprintEvent)

void UChatLogOtherPlayerMessage_C::SetWidthOverride()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogOtherPlayerMessage_C", "SetWidthOverride");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.OnClose_Event
// (BlueprintCallable, BlueprintEvent)

void UChatLogOtherPlayerMessage_C::OnClose_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogOtherPlayerMessage_C", "OnClose_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.OnGetPlayerProfile
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPlayerProfileMenuDetailData     PlayerProfileDetailMenuData                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatLogOtherPlayerMessage_C::OnGetPlayerProfile(const bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogOtherPlayerMessage_C", "OnGetPlayerProfile");

	Params::ChatLogOtherPlayerMessage_C_OnGetPlayerProfile Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.PlayerProfileDetailMenuData = std::move(PlayerProfileDetailMenuData);
	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UChatLogOtherPlayerMessage_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogOtherPlayerMessage_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.ClipboardCopy
// (BlueprintCallable, BlueprintEvent)

void UChatLogOtherPlayerMessage_C::ClipboardCopy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogOtherPlayerMessage_C", "ClipboardCopy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.BndEvt__SBButtonMessageBG_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UChatLogOtherPlayerMessage_C::BndEvt__SBButtonMessageBG_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogOtherPlayerMessage_C", "BndEvt__SBButtonMessageBG_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.BndEvt__SBButtonMessageBG_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UChatLogOtherPlayerMessage_C::BndEvt__SBButtonMessageBG_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogOtherPlayerMessage_C", "BndEvt__SBButtonMessageBG_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.BndEvt__Button_StampLog_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UChatLogOtherPlayerMessage_C::BndEvt__Button_StampLog_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogOtherPlayerMessage_C", "BndEvt__Button_StampLog_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.BndEvt__Button_82_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UChatLogOtherPlayerMessage_C::BndEvt__Button_82_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogOtherPlayerMessage_C", "BndEvt__Button_82_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.OnTimeEvent
// (BlueprintCallable, BlueprintEvent)

void UChatLogOtherPlayerMessage_C::OnTimeEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogOtherPlayerMessage_C", "OnTimeEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.DonwloadFaceImage_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           URL                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UChatLogOtherPlayerMessage_C::DonwloadFaceImage_Event(const class FString& URL)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogOtherPlayerMessage_C", "DonwloadFaceImage_Event");

	Params::ChatLogOtherPlayerMessage_C_DonwloadFaceImage_Event Parms{};

	Parms.URL = std::move(URL);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.BndEvt__FaceImageButton_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UChatLogOtherPlayerMessage_C::BndEvt__FaceImageButton_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogOtherPlayerMessage_C", "BndEvt__FaceImageButton_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBChatUIMessage                 InMessLog                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    IsEndInit                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsCursorStampHit                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatLogOtherPlayerMessage_C::Init(const struct FSBChatUIMessage& InMessLog, bool IsEndInit, bool IsCursorStampHit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogOtherPlayerMessage_C", "Init");

	Params::ChatLogOtherPlayerMessage_C_Init Parms{};

	Parms.InMessLog = std::move(InMessLog);
	Parms.IsEndInit = IsEndInit;
	Parms.IsCursorStampHit = IsCursorStampHit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.ZeroPadding
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             RetValue                                               (Parm, OutParm)

void UChatLogOtherPlayerMessage_C::ZeroPadding(int32 InValue, class FText* RetValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogOtherPlayerMessage_C", "ZeroPadding");

	Params::ChatLogOtherPlayerMessage_C_ZeroPadding Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

	if (RetValue != nullptr)
		*RetValue = std::move(Parms.RetValue);
}


// Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.SetStamp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InStampId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEndInit                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatLogOtherPlayerMessage_C::SetStamp(int32 InStampId, bool IsEndInit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogOtherPlayerMessage_C", "SetStamp");

	Params::ChatLogOtherPlayerMessage_C_SetStamp Parms{};

	Parms.InStampId = InStampId;
	Parms.IsEndInit = IsEndInit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.GetFloatStampPoint
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                        NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatLogOtherPlayerMessage_C::GetFloatStampPoint(struct FVector2D* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogOtherPlayerMessage_C", "GetFloatStampPoint");

	Params::ChatLogOtherPlayerMessage_C_GetFloatStampPoint Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = std::move(Parms.NewParam);
}


// Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UChatLogOtherPlayerMessage_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogOtherPlayerMessage_C", "OnMouseButtonDown");

	Params::ChatLogOtherPlayerMessage_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.SetClipboardCopy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsCopy                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatLogOtherPlayerMessage_C::SetClipboardCopy(bool IsCopy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogOtherPlayerMessage_C", "SetClipboardCopy");

	Params::ChatLogOtherPlayerMessage_C_SetClipboardCopy Parms{};

	Parms.IsCopy = IsCopy;

	UObject::ProcessEvent(Func, &Parms);
}

}

