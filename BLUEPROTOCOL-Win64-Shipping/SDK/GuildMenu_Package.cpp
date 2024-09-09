/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMenu.GuildMenu_C.TermRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESubMenuTermReason                                 InReason                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	ESubMenuTermRequestReply UGuildMenu_C::TermRequest(ESubMenuTermReason InReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMenu.GuildMenu_C.TermRequest");
		
		UGuildMenu_C_TermRequest_Params params {};
		params.InReason = InReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMenu.GuildMenu_C.UpdateSubMenuInfosAll
	 * 		Flags  -> ()
	 */
	void UGuildMenu_C::UpdateSubMenuInfosAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMenu.GuildMenu_C.UpdateSubMenuInfosAll");
		
		UGuildMenu_C_UpdateSubMenuInfosAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMenu.GuildMenu_C.UpdateSubMenuOutText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SubPage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildMenu_C::UpdateSubMenuOutText(int32_t Selection, int32_t SubPage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMenu.GuildMenu_C.UpdateSubMenuOutText");
		
		UGuildMenu_C_UpdateSubMenuOutText_Params params {};
		params.Selection = Selection;
		params.SubPage = SubPage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMenu.GuildMenu_C.NeedToWaitUpdateMainMenu
	 * 		Flags  -> ()
	 */
	void UGuildMenu_C::NeedToWaitUpdateMainMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMenu.GuildMenu_C.NeedToWaitUpdateMainMenu");
		
		UGuildMenu_C_NeedToWaitUpdateMainMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMenu.GuildMenu_C.UpdateSubMenuButtonState
	 * 		Flags  -> ()
	 */
	void UGuildMenu_C::UpdateSubMenuButtonState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMenu.GuildMenu_C.UpdateSubMenuButtonState");
		
		UGuildMenu_C_UpdateSubMenuButtonState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMenu.GuildMenu_C.SubMenuOutText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InTextId                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildMenu_C::SubMenuOutText(int32_t InTextId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMenu.GuildMenu_C.SubMenuOutText");
		
		UGuildMenu_C_SubMenuOutText_Params params {};
		params.InTextId = InTextId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMenu.GuildMenu_C.GetPageNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      BookMark                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            Page                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildMenu_C::GetPageNum(const class FString& BookMark, int32_t* Page)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMenu.GuildMenu_C.GetPageNum");
		
		UGuildMenu_C_GetPageNum_Params params {};
		params.BookMark = BookMark;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Page != nullptr)
			*Page = params.Page;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMenu.GuildMenu_C.MakeGuild
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildMenu_C::MakeGuild(class UClass* Class)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMenu.GuildMenu_C.MakeGuild");
		
		UGuildMenu_C_MakeGuild_Params params {};
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMenu.GuildMenu_C.CheckSubMenu
	 * 		Flags  -> ()
	 */
	void UGuildMenu_C::CheckSubMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMenu.GuildMenu_C.CheckSubMenu");
		
		UGuildMenu_C_CheckSubMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMenu.GuildMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UGuildMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMenu.GuildMenu_C.Construct");
		
		UGuildMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMenu.GuildMenu_C.BndEvt__CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildMenu_C::BndEvt__CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMenu.GuildMenu_C.BndEvt__CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");
		
		UGuildMenu_C_BndEvt__CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMenu.GuildMenu_C.Destruct
	 * 		Flags  -> ()
	 */
	void UGuildMenu_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMenu.GuildMenu_C.Destruct");
		
		UGuildMenu_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMenu.GuildMenu_C.BookmarkUpdateRequest
	 * 		Flags  -> ()
	 */
	void UGuildMenu_C::BookmarkUpdateRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMenu.GuildMenu_C.BookmarkUpdateRequest");
		
		UGuildMenu_C_BookmarkUpdateRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMenu.GuildMenu_C.UpdateBookmarkStatusButton
	 * 		Flags  -> ()
	 */
	void UGuildMenu_C::UpdateBookmarkStatusButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMenu.GuildMenu_C.UpdateBookmarkStatusButton");
		
		UGuildMenu_C_UpdateBookmarkStatusButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMenu.GuildMenu_C.OnWithDraw
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildMenu_C::OnWithDraw(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMenu.GuildMenu_C.OnWithDraw");
		
		UGuildMenu_C_OnWithDraw_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMenu.GuildMenu_C.SetPage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PageIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildMenu_C::SetPage(int32_t PageIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMenu.GuildMenu_C.SetPage");
		
		UGuildMenu_C_SetPage_Params params {};
		params.PageIndex = PageIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMenu.GuildMenu_C.OnSameMenuBookmarkAccessNew
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InBookMarkType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UGuildMenu_C::OnSameMenuBookmarkAccessNew(const class FString& InBookMarkType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMenu.GuildMenu_C.OnSameMenuBookmarkAccessNew");
		
		UGuildMenu_C_OnSameMenuBookmarkAccessNew_Params params {};
		params.InBookMarkType = InBookMarkType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMenu.GuildMenu_C.OnSubMenuUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MainPage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SubPage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildMenu_C::OnSubMenuUpdate(int32_t MainPage, int32_t SubPage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMenu.GuildMenu_C.OnSubMenuUpdate");
		
		UGuildMenu_C_OnSubMenuUpdate_Params params {};
		params.MainPage = MainPage;
		params.SubPage = SubPage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMenu.GuildMenu_C.Event_OnCompletedInviteArraignment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isAccept                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      InEntryId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UGuildMenu_C::Event_OnCompletedInviteArraignment(int32_t RetCode, bool isAccept, const class FString& InEntryId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMenu.GuildMenu_C.Event_OnCompletedInviteArraignment");
		
		UGuildMenu_C_Event_OnCompletedInviteArraignment_Params params {};
		params.RetCode = RetCode;
		params.isAccept = isAccept;
		params.InEntryId = InEntryId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMenu.GuildMenu_C.OnSubMenuUpdateWithMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MainPage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SubPage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Message                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGuildMenu_C::OnSubMenuUpdateWithMessage(int32_t MainPage, int32_t SubPage, const class FText& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMenu.GuildMenu_C.OnSubMenuUpdateWithMessage");
		
		UGuildMenu_C_OnSubMenuUpdateWithMessage_Params params {};
		params.MainPage = MainPage;
		params.SubPage = SubPage;
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMenu.GuildMenu_C.Event_OnCompleteGetGuildData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildMenu_C::Event_OnCompleteGetGuildData(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMenu.GuildMenu_C.Event_OnCompleteGetGuildData");
		
		UGuildMenu_C_Event_OnCompleteGetGuildData_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMenu.GuildMenu_C.Event_OnCompleteNotifyKickedFromGuild
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KickedGuildName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UGuildMenu_C::Event_OnCompleteNotifyKickedFromGuild(const class FString& KickedGuildName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMenu.GuildMenu_C.Event_OnCompleteNotifyKickedFromGuild");
		
		UGuildMenu_C_Event_OnCompleteNotifyKickedFromGuild_Params params {};
		params.KickedGuildName = KickedGuildName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMenu.GuildMenu_C.CompletedAcceptMember
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildMenu_C::CompletedAcceptMember(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMenu.GuildMenu_C.CompletedAcceptMember");
		
		UGuildMenu_C_CompletedAcceptMember_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMenu.GuildMenu_C.CompletedDenyMember
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildMenu_C::CompletedDenyMember(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMenu.GuildMenu_C.CompletedDenyMember");
		
		UGuildMenu_C_CompletedDenyMember_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMenu.GuildMenu_C.OnAddedNewMember
	 * 		Flags  -> ()
	 */
	void UGuildMenu_C::OnAddedNewMember()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMenu.GuildMenu_C.OnAddedNewMember");
		
		UGuildMenu_C_OnAddedNewMember_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMenu.GuildMenu_C.CheckGuildData
	 * 		Flags  -> ()
	 */
	void UGuildMenu_C::CheckGuildData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMenu.GuildMenu_C.CheckGuildData");
		
		UGuildMenu_C_CheckGuildData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMenu.GuildMenu_C.ResetMouseCursorTypeToDefaultRequest
	 * 		Flags  -> ()
	 */
	void UGuildMenu_C::ResetMouseCursorTypeToDefaultRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMenu.GuildMenu_C.ResetMouseCursorTypeToDefaultRequest");
		
		UGuildMenu_C_ResetMouseCursorTypeToDefaultRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMenu.GuildMenu_C.OnRMShopClosed
	 * 		Flags  -> ()
	 */
	void UGuildMenu_C::OnRMShopClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMenu.GuildMenu_C.OnRMShopClosed");
		
		UGuildMenu_C_OnRMShopClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMenu.GuildMenu_C.CompletedGGetEntryList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildMenu_C::CompletedGGetEntryList(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMenu.GuildMenu_C.CompletedGGetEntryList");
		
		UGuildMenu_C_CompletedGGetEntryList_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMenu.GuildMenu_C.OnCompleteGuildKicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildMenu_C::OnCompleteGuildKicked(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMenu.GuildMenu_C.OnCompleteGuildKicked");
		
		UGuildMenu_C_OnCompleteGuildKicked_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMenu.GuildMenu_C.OnCompleteGuildCancelInvitation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildMenu_C::OnCompleteGuildCancelInvitation(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMenu.GuildMenu_C.OnCompleteGuildCancelInvitation");
		
		UGuildMenu_C_OnCompleteGuildCancelInvitation_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMenu.GuildMenu_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UGuildMenu_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMenu.GuildMenu_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1");
		
		UGuildMenu_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMenu.GuildMenu_C.OnParentTerm
	 * 		Flags  -> ()
	 */
	void UGuildMenu_C::OnParentTerm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMenu.GuildMenu_C.OnParentTerm");
		
		UGuildMenu_C_OnParentTerm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMenu.GuildMenu_C.Event_CallTermFromChildren
	 * 		Flags  -> ()
	 */
	void UGuildMenu_C::Event_CallTermFromChildren()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMenu.GuildMenu_C.Event_CallTermFromChildren");
		
		UGuildMenu_C_Event_CallTermFromChildren_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GuildMenu.GuildMenu_C.ExecuteUbergraph_GuildMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGuildMenu_C::ExecuteUbergraph_GuildMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GuildMenu.GuildMenu_C.ExecuteUbergraph_GuildMenu");
		
		UGuildMenu_C_ExecuteUbergraph_GuildMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGuildMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGuildMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GuildMenu.GuildMenu_C");
		return ptr;
	}

}


