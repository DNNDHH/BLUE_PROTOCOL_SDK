#pragma once

 

// Package: EmotionMenu

#include "Basic.hpp"

#include "EmotionMenu_classes.hpp"
#include "EmotionMenu_parameters.hpp"


namespace SDK
{

// Function EmotionMenu.EmotionMenu_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UEmotionMenu_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EmotionMenu.EmotionMenu_C.OnRequestEmote__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             EmotionId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEmotionMenu_C::OnRequestEmote__DelegateSignature(class FName EmotionId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_C", "OnRequestEmote__DelegateSignature");

	Params::EmotionMenu_C_OnRequestEmote__DelegateSignature Parms{};

	Parms.EmotionId = EmotionId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EmotionMenu.EmotionMenu_C.ExecuteUbergraph_EmotionMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEmotionMenu_C::ExecuteUbergraph_EmotionMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_C", "ExecuteUbergraph_EmotionMenu");

	Params::EmotionMenu_C_ExecuteUbergraph_EmotionMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EmotionMenu.EmotionMenu_C.ArrivalBackendMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEmotionMenu_C::ArrivalBackendMenu(bool Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_C", "ArrivalBackendMenu");

	Params::EmotionMenu_C_ArrivalBackendMenu Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EmotionMenu.EmotionMenu_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEmotionMenu_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_C", "OnAnimationFinished");

	Params::EmotionMenu_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EmotionMenu.EmotionMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEmotionMenu_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EmotionMenu.EmotionMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEmotionMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EmotionMenu.EmotionMenu_C.BndEvt__EmotionMenu_WBP_EmotionScroolBox_K2Node_ComponentBoundEvent_0_OnSelectEmotionItem__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UEmotionMenu_Item_C*              InSelectedItem                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEmotionMenu_C::BndEvt__EmotionMenu_WBP_EmotionScroolBox_K2Node_ComponentBoundEvent_0_OnSelectEmotionItem__DelegateSignature(class UEmotionMenu_Item_C* InSelectedItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_C", "BndEvt__EmotionMenu_WBP_EmotionScroolBox_K2Node_ComponentBoundEvent_0_OnSelectEmotionItem__DelegateSignature");

	Params::EmotionMenu_C_BndEvt__EmotionMenu_WBP_EmotionScroolBox_K2Node_ComponentBoundEvent_0_OnSelectEmotionItem__DelegateSignature Parms{};

	Parms.InSelectedItem = InSelectedItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EmotionMenu.EmotionMenu_C.OnActiveItemaUpdate
// (BlueprintCallable, BlueprintEvent)

void UEmotionMenu_C::OnActiveItemaUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_C", "OnActiveItemaUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EmotionMenu.EmotionMenu_C.UpdateEmotionList
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsCreateCategory                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEmotionMenu_C::UpdateEmotionList(bool IsCreateCategory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_C", "UpdateEmotionList");

	Params::EmotionMenu_C_UpdateEmotionList Parms{};

	Parms.IsCreateCategory = IsCreateCategory;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EmotionMenu.EmotionMenu_C.OnClickedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEmotionMenu_C::OnClickedEvent(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_C", "OnClickedEvent");

	Params::EmotionMenu_C_OnClickedEvent Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EmotionMenu.EmotionMenu_C.CreateCategory
// (BlueprintCallable, BlueprintEvent)

void UEmotionMenu_C::CreateCategory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_C", "CreateCategory");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EmotionMenu.EmotionMenu_C.Construct_Emotion
// (BlueprintCallable, BlueprintEvent)

void UEmotionMenu_C::Construct_Emotion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_C", "Construct_Emotion");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EmotionMenu.EmotionMenu_C.OnTutorialHelp_Close
// (BlueprintCallable, BlueprintEvent)

void UEmotionMenu_C::OnTutorialHelp_Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_C", "OnTutorialHelp_Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EmotionMenu.EmotionMenu_C.OnRequestTutorialHelp
// (BlueprintCallable, BlueprintEvent)

void UEmotionMenu_C::OnRequestTutorialHelp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_C", "OnRequestTutorialHelp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EmotionMenu.EmotionMenu_C.ResetMouseCursorTypeToDefaultRequest
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UEmotionMenu_C::ResetMouseCursorTypeToDefaultRequest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_C", "ResetMouseCursorTypeToDefaultRequest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EmotionMenu.EmotionMenu_C.OnSubMenuUpdate
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   MainPage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SubPage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEmotionMenu_C::OnSubMenuUpdate(int32 MainPage, int32 SubPage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_C", "OnSubMenuUpdate");

	Params::EmotionMenu_C_OnSubMenuUpdate Parms{};

	Parms.MainPage = MainPage;
	Parms.SubPage = SubPage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EmotionMenu.EmotionMenu_C.OnSameMenuBookmarkAccessNew
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InBookMarkType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEmotionMenu_C::OnSameMenuBookmarkAccessNew(const class FString& InBookMarkType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_C", "OnSameMenuBookmarkAccessNew");

	Params::EmotionMenu_C_OnSameMenuBookmarkAccessNew Parms{};

	Parms.InBookMarkType = std::move(InBookMarkType);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EmotionMenu.EmotionMenu_C.OnRMShopClosed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UEmotionMenu_C::OnRMShopClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_C", "OnRMShopClosed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EmotionMenu.EmotionMenu_C.OnParentTerm
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UEmotionMenu_C::OnParentTerm()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_C", "OnParentTerm");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EmotionMenu.EmotionMenu_C.CreateEmotionEmotionList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UEmotionMenu_C::CreateEmotionEmotionList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_C", "CreateEmotionEmotionList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EmotionMenu.EmotionMenu_C.SetRootVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEmotionMenu_C::SetRootVisible(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_C", "SetRootVisible");

	Params::EmotionMenu_C_SetRootVisible Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EmotionMenu.EmotionMenu_C.SetRootBgVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEmotionMenu_C::SetRootBgVisible(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_C", "SetRootBgVisible");

	Params::EmotionMenu_C_SetRootBgVisible Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EmotionMenu.EmotionMenu_C.Show
// (Public, BlueprintCallable, BlueprintEvent)

void UEmotionMenu_C::Show()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_C", "Show");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EmotionMenu.EmotionMenu_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)

void UEmotionMenu_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_C", "Hide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EmotionMenu.EmotionMenu_C.SetLineColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBChatLogType                          InChatLogType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEmotionMenu_C::SetLineColor(ESBChatLogType InChatLogType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_C", "SetLineColor");

	Params::EmotionMenu_C_SetLineColor Parms{};

	Parms.InChatLogType = InChatLogType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EmotionMenu.EmotionMenu_C.SelectEmotionItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEmotionMenu_Item_C*              InSelectedItem                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEmotionMenu_C::SelectEmotionItem(class UEmotionMenu_Item_C* InSelectedItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_C", "SelectEmotionItem");

	Params::EmotionMenu_C_SelectEmotionItem Parms{};

	Parms.InSelectedItem = InSelectedItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EmotionMenu.EmotionMenu_C.SetDragableItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InDragable                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEmotionMenu_C::SetDragableItem(bool InDragable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_C", "SetDragableItem");

	Params::EmotionMenu_C_SetDragableItem Parms{};

	Parms.InDragable = InDragable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EmotionMenu.EmotionMenu_C.UpdateCategory
// (Public, BlueprintCallable, BlueprintEvent)

void UEmotionMenu_C::UpdateCategory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_C", "UpdateCategory");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EmotionMenu.EmotionMenu_C.TermRequest
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESubMenuTermReason                      InReason                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESubMenuTermRequestReply                ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESubMenuTermRequestReply UEmotionMenu_C::TermRequest(const ESubMenuTermReason InReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EmotionMenu_C", "TermRequest");

	Params::EmotionMenu_C_TermRequest Parms{};

	Parms.InReason = InReason;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

