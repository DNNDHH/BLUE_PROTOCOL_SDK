#pragma once

 

// Package: GuildMenu

#include "Basic.hpp"

#include "GuildMenu_classes.hpp"
#include "GuildMenu_parameters.hpp"


namespace SDK
{

// Function GuildMenu.GuildMenu_C.ExecuteUbergraph_GuildMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMenu_C::ExecuteUbergraph_GuildMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMenu_C", "ExecuteUbergraph_GuildMenu");

	Params::GuildMenu_C_ExecuteUbergraph_GuildMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMenu.GuildMenu_C.Event_CallTermFromChildren
// (BlueprintCallable, BlueprintEvent)

void UGuildMenu_C::Event_CallTermFromChildren()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMenu_C", "Event_CallTermFromChildren");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMenu.GuildMenu_C.OnParentTerm
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGuildMenu_C::OnParentTerm()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMenu_C", "OnParentTerm");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMenu.GuildMenu_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UGuildMenu_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMenu_C", "WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMenu.GuildMenu_C.OnCompleteGuildCancelInvitation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMenu_C::OnCompleteGuildCancelInvitation(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMenu_C", "OnCompleteGuildCancelInvitation");

	Params::GuildMenu_C_OnCompleteGuildCancelInvitation Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMenu.GuildMenu_C.OnCompleteGuildKicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMenu_C::OnCompleteGuildKicked(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMenu_C", "OnCompleteGuildKicked");

	Params::GuildMenu_C_OnCompleteGuildKicked Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMenu.GuildMenu_C.CompletedGGetEntryList
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMenu_C::CompletedGGetEntryList(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMenu_C", "CompletedGGetEntryList");

	Params::GuildMenu_C_CompletedGGetEntryList Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMenu.GuildMenu_C.OnRMShopClosed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGuildMenu_C::OnRMShopClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMenu_C", "OnRMShopClosed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMenu.GuildMenu_C.ResetMouseCursorTypeToDefaultRequest
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGuildMenu_C::ResetMouseCursorTypeToDefaultRequest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMenu_C", "ResetMouseCursorTypeToDefaultRequest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMenu.GuildMenu_C.CheckGuildData
// (BlueprintCallable, BlueprintEvent)

void UGuildMenu_C::CheckGuildData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMenu_C", "CheckGuildData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMenu.GuildMenu_C.OnAddedNewMember
// (BlueprintCallable, BlueprintEvent)

void UGuildMenu_C::OnAddedNewMember()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMenu_C", "OnAddedNewMember");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMenu.GuildMenu_C.CompletedDenyMember
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMenu_C::CompletedDenyMember(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMenu_C", "CompletedDenyMember");

	Params::GuildMenu_C_CompletedDenyMember Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMenu.GuildMenu_C.CompletedAcceptMember
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMenu_C::CompletedAcceptMember(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMenu_C", "CompletedAcceptMember");

	Params::GuildMenu_C_CompletedAcceptMember Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMenu.GuildMenu_C.Event_OnCompleteNotifyKickedFromGuild
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           KickedGuildName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UGuildMenu_C::Event_OnCompleteNotifyKickedFromGuild(const class FString& KickedGuildName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMenu_C", "Event_OnCompleteNotifyKickedFromGuild");

	Params::GuildMenu_C_Event_OnCompleteNotifyKickedFromGuild Parms{};

	Parms.KickedGuildName = std::move(KickedGuildName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMenu.GuildMenu_C.Event_OnCompleteGetGuildData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMenu_C::Event_OnCompleteGetGuildData(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMenu_C", "Event_OnCompleteGetGuildData");

	Params::GuildMenu_C_Event_OnCompleteGetGuildData Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMenu.GuildMenu_C.OnSubMenuUpdateWithMessage
// (HasOutParams, BlueprintEvent)
// Parameters:
// int32                                   MainPage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SubPage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Message                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGuildMenu_C::OnSubMenuUpdateWithMessage(int32 MainPage, int32 SubPage, const class FText& Message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMenu_C", "OnSubMenuUpdateWithMessage");

	Params::GuildMenu_C_OnSubMenuUpdateWithMessage Parms{};

	Parms.MainPage = MainPage;
	Parms.SubPage = SubPage;
	Parms.Message = std::move(Message);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMenu.GuildMenu_C.Event_OnCompletedInviteArraignment
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsAccept                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           InEntryId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UGuildMenu_C::Event_OnCompletedInviteArraignment(const int32 RetCode, bool IsAccept, const class FString& InEntryId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMenu_C", "Event_OnCompletedInviteArraignment");

	Params::GuildMenu_C_Event_OnCompletedInviteArraignment Parms{};

	Parms.RetCode = RetCode;
	Parms.IsAccept = IsAccept;
	Parms.InEntryId = std::move(InEntryId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMenu.GuildMenu_C.OnSubMenuUpdate
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   MainPage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SubPage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMenu_C::OnSubMenuUpdate(int32 MainPage, int32 SubPage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMenu_C", "OnSubMenuUpdate");

	Params::GuildMenu_C_OnSubMenuUpdate Parms{};

	Parms.MainPage = MainPage;
	Parms.SubPage = SubPage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMenu.GuildMenu_C.OnSameMenuBookmarkAccessNew
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InBookMarkType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UGuildMenu_C::OnSameMenuBookmarkAccessNew(const class FString& InBookMarkType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMenu_C", "OnSameMenuBookmarkAccessNew");

	Params::GuildMenu_C_OnSameMenuBookmarkAccessNew Parms{};

	Parms.InBookMarkType = std::move(InBookMarkType);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMenu.GuildMenu_C.SetPage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PageIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMenu_C::SetPage(int32 PageIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMenu_C", "SetPage");

	Params::GuildMenu_C_SetPage Parms{};

	Parms.PageIndex = PageIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMenu.GuildMenu_C.OnWithDraw
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMenu_C::OnWithDraw(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMenu_C", "OnWithDraw");

	Params::GuildMenu_C_OnWithDraw Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMenu.GuildMenu_C.UpdateBookmarkStatusButton
// (BlueprintCallable, BlueprintEvent)

void UGuildMenu_C::UpdateBookmarkStatusButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMenu_C", "UpdateBookmarkStatusButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMenu.GuildMenu_C.BookmarkUpdateRequest
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGuildMenu_C::BookmarkUpdateRequest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMenu_C", "BookmarkUpdateRequest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMenu.GuildMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGuildMenu_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMenu_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMenu.GuildMenu_C.BndEvt__CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   ButtonId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMenu_C::BndEvt__CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(int32 ButtonId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMenu_C", "BndEvt__CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");

	Params::GuildMenu_C_BndEvt__CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature Parms{};

	Parms.ButtonId = ButtonId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMenu.GuildMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGuildMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMenu.GuildMenu_C.CheckSubMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UGuildMenu_C::CheckSubMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMenu_C", "CheckSubMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMenu.GuildMenu_C.MakeGuild
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Param_Class                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMenu_C::MakeGuild(class UClass* Param_Class)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMenu_C", "MakeGuild");

	Params::GuildMenu_C_MakeGuild Parms{};

	Parms.Param_Class = Param_Class;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMenu.GuildMenu_C.GetPageNum
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           BookMark                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   Page                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMenu_C::GetPageNum(const class FString& BookMark, int32* Page)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMenu_C", "GetPageNum");

	Params::GuildMenu_C_GetPageNum Parms{};

	Parms.BookMark = std::move(BookMark);

	UObject::ProcessEvent(Func, &Parms);

	if (Page != nullptr)
		*Page = Parms.Page;
}


// Function GuildMenu.GuildMenu_C.SubMenuOutText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InTextID                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMenu_C::SubMenuOutText(const int32 InTextID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMenu_C", "SubMenuOutText");

	Params::GuildMenu_C_SubMenuOutText Parms{};

	Parms.InTextID = InTextID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMenu.GuildMenu_C.UpdateSubMenuButtonState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGuildMenu_C::UpdateSubMenuButtonState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMenu_C", "UpdateSubMenuButtonState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMenu.GuildMenu_C.NeedToWaitUpdateMainMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UGuildMenu_C::NeedToWaitUpdateMainMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMenu_C", "NeedToWaitUpdateMainMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMenu.GuildMenu_C.UpdateSubMenuOutText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Selection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Sub_Page                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMenu_C::UpdateSubMenuOutText(int32 Selection, int32 Param_Sub_Page)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMenu_C", "UpdateSubMenuOutText");

	Params::GuildMenu_C_UpdateSubMenuOutText Parms{};

	Parms.Selection = Selection;
	Parms.Param_Sub_Page = Param_Sub_Page;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMenu.GuildMenu_C.UpdateSubMenuInfosAll
// (Public, BlueprintCallable, BlueprintEvent)

void UGuildMenu_C::UpdateSubMenuInfosAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMenu_C", "UpdateSubMenuInfosAll");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMenu.GuildMenu_C.TermRequest
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESubMenuTermReason                      InReason                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESubMenuTermRequestReply                ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESubMenuTermRequestReply UGuildMenu_C::TermRequest(const ESubMenuTermReason InReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMenu_C", "TermRequest");

	Params::GuildMenu_C_TermRequest Parms{};

	Parms.InReason = InReason;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

