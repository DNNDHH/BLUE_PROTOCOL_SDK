#pragma once

 

// Package: QuestListTop

#include "Basic.hpp"

#include "QuestListTop_classes.hpp"
#include "QuestListTop_parameters.hpp"


namespace SDK
{

// Function QuestListTop.QuestListTop_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UQuestListTop_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestListTop_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestListTop.QuestListTop_C.ExecuteUbergraph_QuestListTop
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestListTop_C::ExecuteUbergraph_QuestListTop(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestListTop_C", "ExecuteUbergraph_QuestListTop");

	Params::QuestListTop_C_ExecuteUbergraph_QuestListTop Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestListTop.QuestListTop_C.BindSubMenuQuestUpdate_Event
// (BlueprintCallable, BlueprintEvent)

void UQuestListTop_C::BindSubMenuQuestUpdate_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestListTop_C", "BindSubMenuQuestUpdate_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestListTop.QuestListTop_C.OnUpdateQuestButtonNew_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestListTop_C::OnUpdateQuestButtonNew_Event(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestListTop_C", "OnUpdateQuestButtonNew_Event");

	Params::QuestListTop_C_OnUpdateQuestButtonNew_Event Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestListTop.QuestListTop_C.UpdateAutoDeliveryQuestExclamation_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestListTop_C::UpdateAutoDeliveryQuestExclamation_Event(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestListTop_C", "UpdateAutoDeliveryQuestExclamation_Event");

	Params::QuestListTop_C_UpdateAutoDeliveryQuestExclamation_Event Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestListTop.QuestListTop_C.BindAutoDeliveryQuestUpdate_Event
// (BlueprintCallable, BlueprintEvent)

void UQuestListTop_C::BindAutoDeliveryQuestUpdate_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestListTop_C", "BindAutoDeliveryQuestUpdate_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestListTop.QuestListTop_C.UpdateSubMenuAdventureBoardExclamation_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestListTop_C::UpdateSubMenuAdventureBoardExclamation_Event(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestListTop_C", "UpdateSubMenuAdventureBoardExclamation_Event");

	Params::QuestListTop_C_UpdateSubMenuAdventureBoardExclamation_Event Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestListTop.QuestListTop_C.BindSubMenuAdventureBoardUpdate_Event
// (BlueprintCallable, BlueprintEvent)

void UQuestListTop_C::BindSubMenuAdventureBoardUpdate_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestListTop_C", "BindSubMenuAdventureBoardUpdate_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestListTop.QuestListTop_C.OnLoadAdventureBoardDelegete_����_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestListTop_C::OnLoadAdventureBoardDelegete______0(int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestListTop_C", "OnLoadAdventureBoardDelegete_����_0");

	Params::QuestListTop_C_OnLoadAdventureBoardDelegete______0 Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestListTop.QuestListTop_C.UpdateBookmarkButton
// (BlueprintCallable, BlueprintEvent)

void UQuestListTop_C::UpdateBookmarkButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestListTop_C", "UpdateBookmarkButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestListTop.QuestListTop_C.OnSameMenuBookmarkAccessNew
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InBookMarkType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UQuestListTop_C::OnSameMenuBookmarkAccessNew(const class FString& InBookMarkType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestListTop_C", "OnSameMenuBookmarkAccessNew");

	Params::QuestListTop_C_OnSameMenuBookmarkAccessNew Parms{};

	Parms.InBookMarkType = std::move(InBookMarkType);

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestListTop.QuestListTop_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ReturnCode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestListTop_C::CustomEvent_0(int32 ReturnCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestListTop_C", "CustomEvent_0");

	Params::QuestListTop_C_CustomEvent_0 Parms{};

	Parms.ReturnCode = ReturnCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestListTop.QuestListTop_C.OnSubMenuUpdate
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   MainPage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SubPage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestListTop_C::OnSubMenuUpdate(int32 MainPage, int32 SubPage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestListTop_C", "OnSubMenuUpdate");

	Params::QuestListTop_C_OnSubMenuUpdate Parms{};

	Parms.MainPage = MainPage;
	Parms.SubPage = SubPage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestListTop.QuestListTop_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UQuestListTop_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestListTop_C", "WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestListTop.QuestListTop_C.BookmarkUpdateRequest
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UQuestListTop_C::BookmarkUpdateRequest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestListTop_C", "BookmarkUpdateRequest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestListTop.QuestListTop_C.ChangePage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PageNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestListTop_C::ChangePage(int32 PageNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestListTop_C", "ChangePage");

	Params::QuestListTop_C_ChangePage Parms{};

	Parms.PageNum = PageNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestListTop.QuestListTop_C.BndEvt__Tab1_K2Node_ComponentBoundEvent_24_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   ButtonId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestListTop_C::BndEvt__Tab1_K2Node_ComponentBoundEvent_24_OnClick__DelegateSignature(int32 ButtonId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestListTop_C", "BndEvt__Tab1_K2Node_ComponentBoundEvent_24_OnClick__DelegateSignature");

	Params::QuestListTop_C_BndEvt__Tab1_K2Node_ComponentBoundEvent_24_OnClick__DelegateSignature Parms{};

	Parms.ButtonId = ButtonId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestListTop.QuestListTop_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuestListTop_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestListTop_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestListTop.QuestListTop_C.ResetMouseCursorTypeToDefaultRequest
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UQuestListTop_C::ResetMouseCursorTypeToDefaultRequest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestListTop_C", "ResetMouseCursorTypeToDefaultRequest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestListTop.QuestListTop_C.OnRMShopClosed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UQuestListTop_C::OnRMShopClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestListTop_C", "OnRMShopClosed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestListTop.QuestListTop_C.OnParentTerm
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UQuestListTop_C::OnParentTerm()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestListTop_C", "OnParentTerm");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestListTop.QuestListTop_C.OnLoaded_B897C77C401AFB2FF4EE5498A2CCE559
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UQuestListTop_C::OnLoaded_B897C77C401AFB2FF4EE5498A2CCE559(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestListTop_C", "OnLoaded_B897C77C401AFB2FF4EE5498A2CCE559");

	Params::QuestListTop_C_OnLoaded_B897C77C401AFB2FF4EE5498A2CCE559 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestListTop.QuestListTop_C.Initialize Open Menu Type
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestListTop_C::Initialize_Open_Menu_Type()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestListTop_C", "Initialize Open Menu Type");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestListTop.QuestListTop_C.IsAdventureBoardExclamation
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestListTop_C::IsAdventureBoardExclamation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestListTop_C", "IsAdventureBoardExclamation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestListTop.QuestListTop_C.IsAutoDeliveryQuestExclamation
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestListTop_C::IsAutoDeliveryQuestExclamation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestListTop_C", "IsAutoDeliveryQuestExclamation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestListTop.QuestListTop_C.IsActiveDeliveryQuest
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Active                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestListTop_C::IsActiveDeliveryQuest(bool* Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestListTop_C", "IsActiveDeliveryQuest");

	Params::QuestListTop_C_IsActiveDeliveryQuest Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Active != nullptr)
		*Active = Parms.Active;
}


// Function QuestListTop.QuestListTop_C.UpdateQuestButtonExclamation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UQuestListTop_C::UpdateQuestButtonExclamation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestListTop_C", "UpdateQuestButtonExclamation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestListTop.QuestListTop_C.TermRequest
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESubMenuTermReason                      InReason                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESubMenuTermRequestReply                ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESubMenuTermRequestReply UQuestListTop_C::TermRequest(const ESubMenuTermReason InReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestListTop_C", "TermRequest");

	Params::QuestListTop_C_TermRequest Parms{};

	Parms.InReason = InReason;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

