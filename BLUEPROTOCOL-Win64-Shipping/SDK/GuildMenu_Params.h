#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function GuildMenu.GuildMenu_C.TermRequest
	 */
	struct UGuildMenu_C_TermRequest_Params
	{
	public:
		ESubMenuTermReason                                         InReason;                                                // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESubMenuTermRequestReply                                   ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMenu.GuildMenu_C.UpdateSubMenuInfosAll
	 */
	struct UGuildMenu_C_UpdateSubMenuInfosAll_Params
	{	};

	/**
	 * Function GuildMenu.GuildMenu_C.UpdateSubMenuOutText
	 */
	struct UGuildMenu_C_UpdateSubMenuOutText_Params
	{
	public:
		int32_t                                                    Selection;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SubPage;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMenu.GuildMenu_C.NeedToWaitUpdateMainMenu
	 */
	struct UGuildMenu_C_NeedToWaitUpdateMainMenu_Params
	{	};

	/**
	 * Function GuildMenu.GuildMenu_C.UpdateSubMenuButtonState
	 */
	struct UGuildMenu_C_UpdateSubMenuButtonState_Params
	{	};

	/**
	 * Function GuildMenu.GuildMenu_C.SubMenuOutText
	 */
	struct UGuildMenu_C_SubMenuOutText_Params
	{
	public:
		int32_t                                                    InTextId;                                                // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMenu.GuildMenu_C.GetPageNum
	 */
	struct UGuildMenu_C_GetPageNum_Params
	{
	public:
		class FString                                              BookMark;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    Page;                                                    // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMenu.GuildMenu_C.MakeGuild
	 */
	struct UGuildMenu_C_MakeGuild_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMenu.GuildMenu_C.CheckSubMenu
	 */
	struct UGuildMenu_C_CheckSubMenu_Params
	{	};

	/**
	 * Function GuildMenu.GuildMenu_C.Construct
	 */
	struct UGuildMenu_C_Construct_Params
	{	};

	/**
	 * Function GuildMenu.GuildMenu_C.BndEvt__CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
	 */
	struct UGuildMenu_C_BndEvt__CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMenu.GuildMenu_C.Destruct
	 */
	struct UGuildMenu_C_Destruct_Params
	{	};

	/**
	 * Function GuildMenu.GuildMenu_C.BookmarkUpdateRequest
	 */
	struct UGuildMenu_C_BookmarkUpdateRequest_Params
	{	};

	/**
	 * Function GuildMenu.GuildMenu_C.UpdateBookmarkStatusButton
	 */
	struct UGuildMenu_C_UpdateBookmarkStatusButton_Params
	{	};

	/**
	 * Function GuildMenu.GuildMenu_C.OnWithDraw
	 */
	struct UGuildMenu_C_OnWithDraw_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMenu.GuildMenu_C.SetPage
	 */
	struct UGuildMenu_C_SetPage_Params
	{
	public:
		int32_t                                                    PageIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMenu.GuildMenu_C.OnSameMenuBookmarkAccessNew
	 */
	struct UGuildMenu_C_OnSameMenuBookmarkAccessNew_Params
	{
	public:
		class FString                                              InBookMarkType;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMenu.GuildMenu_C.OnSubMenuUpdate
	 */
	struct UGuildMenu_C_OnSubMenuUpdate_Params
	{
	public:
		int32_t                                                    MainPage;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SubPage;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMenu.GuildMenu_C.Event_OnCompletedInviteArraignment
	 */
	struct UGuildMenu_C_Event_OnCompletedInviteArraignment_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isAccept;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_70ER[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InEntryId;                                               // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMenu.GuildMenu_C.OnSubMenuUpdateWithMessage
	 */
	struct UGuildMenu_C_OnSubMenuUpdateWithMessage_Params
	{
	public:
		int32_t                                                    MainPage;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SubPage;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Message;                                                 // 0x0008(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GuildMenu.GuildMenu_C.Event_OnCompleteGetGuildData
	 */
	struct UGuildMenu_C_Event_OnCompleteGetGuildData_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMenu.GuildMenu_C.Event_OnCompleteNotifyKickedFromGuild
	 */
	struct UGuildMenu_C_Event_OnCompleteNotifyKickedFromGuild_Params
	{
	public:
		class FString                                              KickedGuildName;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMenu.GuildMenu_C.CompletedAcceptMember
	 */
	struct UGuildMenu_C_CompletedAcceptMember_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMenu.GuildMenu_C.CompletedDenyMember
	 */
	struct UGuildMenu_C_CompletedDenyMember_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMenu.GuildMenu_C.OnAddedNewMember
	 */
	struct UGuildMenu_C_OnAddedNewMember_Params
	{	};

	/**
	 * Function GuildMenu.GuildMenu_C.CheckGuildData
	 */
	struct UGuildMenu_C_CheckGuildData_Params
	{	};

	/**
	 * Function GuildMenu.GuildMenu_C.ResetMouseCursorTypeToDefaultRequest
	 */
	struct UGuildMenu_C_ResetMouseCursorTypeToDefaultRequest_Params
	{	};

	/**
	 * Function GuildMenu.GuildMenu_C.OnRMShopClosed
	 */
	struct UGuildMenu_C_OnRMShopClosed_Params
	{	};

	/**
	 * Function GuildMenu.GuildMenu_C.CompletedGGetEntryList
	 */
	struct UGuildMenu_C_CompletedGGetEntryList_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMenu.GuildMenu_C.OnCompleteGuildKicked
	 */
	struct UGuildMenu_C_OnCompleteGuildKicked_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMenu.GuildMenu_C.OnCompleteGuildCancelInvitation
	 */
	struct UGuildMenu_C_OnCompleteGuildCancelInvitation_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMenu.GuildMenu_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
	 */
	struct UGuildMenu_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function GuildMenu.GuildMenu_C.OnParentTerm
	 */
	struct UGuildMenu_C_OnParentTerm_Params
	{	};

	/**
	 * Function GuildMenu.GuildMenu_C.Event_CallTermFromChildren
	 */
	struct UGuildMenu_C_Event_CallTermFromChildren_Params
	{	};

	/**
	 * Function GuildMenu.GuildMenu_C.ExecuteUbergraph_GuildMenu
	 */
	struct UGuildMenu_C_ExecuteUbergraph_GuildMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
