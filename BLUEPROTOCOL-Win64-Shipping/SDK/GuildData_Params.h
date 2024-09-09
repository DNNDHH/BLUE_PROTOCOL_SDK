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
	 * Function GuildData.GuildData_C.TermRequest
	 */
	struct UGuildData_C_TermRequest_Params
	{
	public:
		ESubMenuTermReason                                         InReason;                                                // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESubMenuTermRequestReply                                   ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildData.GuildData_C.IsGuildInvited
	 */
	struct UGuildData_C_IsGuildInvited_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K6MT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GuildData.GuildData_C.GetPageIndex
	 */
	struct UGuildData_C_GetPageIndex_Params
	{	};

	/**
	 * Function GuildData.GuildData_C.UpdateSubMenuButtonStateByIndex
	 */
	struct UGuildData_C_UpdateSubMenuButtonStateByIndex_Params
	{
	public:
		int32_t                                                    SubButtonIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildData.GuildData_C.SetPage
	 */
	struct UGuildData_C_SetPage_Params
	{
	public:
		int32_t                                                    PageIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildData.GuildData_C.GetGuildComp
	 */
	struct UGuildData_C_GetGuildComp_Params
	{
	public:
		class USBPlayerGuildComponent*                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildData.GuildData_C.BookmarkUpdateRequest
	 */
	struct UGuildData_C_BookmarkUpdateRequest_Params
	{	};

	/**
	 * Function GuildData.GuildData_C.OnParentTerm
	 */
	struct UGuildData_C_OnParentTerm_Params
	{	};

	/**
	 * Function GuildData.GuildData_C.OnRMShopClosed
	 */
	struct UGuildData_C_OnRMShopClosed_Params
	{	};

	/**
	 * Function GuildData.GuildData_C.OnSameMenuBookmarkAccessNew
	 */
	struct UGuildData_C_OnSameMenuBookmarkAccessNew_Params
	{
	public:
		class FString                                              InBookMarkType;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildData.GuildData_C.OnSubMenuUpdate
	 */
	struct UGuildData_C_OnSubMenuUpdate_Params
	{
	public:
		int32_t                                                    MainPage;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SubPage;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildData.GuildData_C.ResetMouseCursorTypeToDefaultRequest
	 */
	struct UGuildData_C_ResetMouseCursorTypeToDefaultRequest_Params
	{	};

	/**
	 * Function GuildData.GuildData_C.Construct
	 */
	struct UGuildData_C_Construct_Params
	{	};

	/**
	 * Function GuildData.GuildData_C.InitializeNoGuild
	 */
	struct UGuildData_C_InitializeNoGuild_Params
	{	};

	/**
	 * Function GuildData.GuildData_C.InitializeGuildMember
	 */
	struct UGuildData_C_InitializeGuildMember_Params
	{	};

	/**
	 * Function GuildData.GuildData_C.Reinit
	 */
	struct UGuildData_C_Reinit_Params
	{	};

	/**
	 * Function GuildData.GuildData_C.BindInit
	 */
	struct UGuildData_C_BindInit_Params
	{	};

	/**
	 * Function GuildData.GuildData_C.OnCompleteRefleshData
	 */
	struct UGuildData_C_OnCompleteRefleshData_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildData.GuildData_C.OnCmplInviteArraignment
	 */
	struct UGuildData_C_OnCmplInviteArraignment_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isAccept;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5F3P[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InEntryId;                                               // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildData.GuildData_C.BndEvt__Btn_GuildOrganize_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UGuildData_C_BndEvt__Btn_GuildOrganize_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function GuildData.GuildData_C.BndEvt__GuildEntriesList_K2Node_ComponentBoundEvent_2_OnClickedGuildEntry__DelegateSignature
	 */
	struct UGuildData_C_BndEvt__GuildEntriesList_K2Node_ComponentBoundEvent_2_OnClickedGuildEntry__DelegateSignature_Params
	{
	public:
		struct FGuildEntryData                                     GuildEntryData;                                          // 0x0000(0x00E0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GuildData.GuildData_C.BndEvt__TB_SearchBox_K2Node_ComponentBoundEvent_9_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UGuildData_C_BndEvt__TB_SearchBox_K2Node_ComponentBoundEvent_9_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildData.GuildData_C.OnGuiluildDatailGeted
	 */
	struct UGuildData_C_OnGuiluildDatailGeted_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0XW5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGuildData                                          InGuildData;                                             // 0x0008(0x00B8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GuildData.GuildData_C.Lock Search
	 */
	struct UGuildData_C_LockSearch_Params
	{	};

	/**
	 * Function GuildData.GuildData_C.Unlock Search
	 */
	struct UGuildData_C_UnlockSearch_Params
	{	};

	/**
	 * Function GuildData.GuildData_C.OnSearched
	 */
	struct UGuildData_C_OnSearched_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildData.GuildData_C.BndEvt__GuildData_BtnSearch_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature
	 */
	struct UGuildData_C_BndEvt__GuildData_BtnSearch_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function GuildData.GuildData_C.OnBootExternalBrowser
	 */
	struct UGuildData_C_OnBootExternalBrowser_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildData.GuildData_C.Value Init
	 */
	struct UGuildData_C_ValueInit_Params
	{	};

	/**
	 * Function GuildData.GuildData_C.BndEvt__GuildData_Btn_ShowHint_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UGuildData_C_BndEvt__GuildData_Btn_ShowHint_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function GuildData.GuildData_C.BndEvt__GuildData_GuildMenuCommandSubButtonList_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature
	 */
	struct UGuildData_C_BndEvt__GuildData_GuildMenuCommandSubButtonList_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildData.GuildData_C.BndEvt__GuildData_Btn_ShowHint_RecruitGuild_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 */
	struct UGuildData_C_BndEvt__GuildData_Btn_ShowHint_RecruitGuild_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function GuildData.GuildData_C.BndEvt__GuildData_SearchBox_K2Node_ComponentBoundEvent_11_OnTextChange__DelegateSignature
	 */
	struct UGuildData_C_BndEvt__GuildData_SearchBox_K2Node_ComponentBoundEvent_11_OnTextChange__DelegateSignature_Params
	{
	public:
		class FText                                                newText;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GuildData.GuildData_C.BndEvt__GuildData_Own_GuildMenuCommandSubButtonList_K2Node_ComponentBoundEvent_12_OnClick__DelegateSignature
	 */
	struct UGuildData_C_BndEvt__GuildData_Own_GuildMenuCommandSubButtonList_K2Node_ComponentBoundEvent_12_OnClick__DelegateSignature_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildData.GuildData_C.SetTitleTextById
	 */
	struct UGuildData_C_SetTitleTextById_Params
	{
	public:
		int32_t                                                    TextId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildData.GuildData_C.OnMemberAccepted
	 */
	struct UGuildData_C_OnMemberAccepted_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildData.GuildData_C.OnMember Denied
	 */
	struct UGuildData_C_OnMemberDenied_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildData.GuildData_C.OnAddedNewMember
	 */
	struct UGuildData_C_OnAddedNewMember_Params
	{	};

	/**
	 * Function GuildData.GuildData_C.On Update Guild Member List
	 */
	struct UGuildData_C_OnUpdateGuildMemberList_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildData.GuildData_C.BndEvt__GuildData_BtnFind_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UGuildData_C_BndEvt__GuildData_BtnFind_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function GuildData.GuildData_C.BndEvt__GuildData_BtnFind_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	 */
	struct UGuildData_C_BndEvt__GuildData_BtnFind_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function GuildData.GuildData_C.BndEvt__GuildData_BtnFind_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	 */
	struct UGuildData_C_BndEvt__GuildData_BtnFind_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function GuildData.GuildData_C.UnBindEvent
	 */
	struct UGuildData_C_UnBindEvent_Params
	{	};

	/**
	 * Function GuildData.GuildData_C.Destruct
	 */
	struct UGuildData_C_Destruct_Params
	{	};

	/**
	 * Function GuildData.GuildData_C.ExecuteUbergraph_GuildData
	 */
	struct UGuildData_C_ExecuteUbergraph_GuildData_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildData.GuildData_C.SetNowTutorialHelpId__DelegateSignature
	 */
	struct UGuildData_C_SetNowTutorialHelpId__DelegateSignature_Params
	{
	public:
		class FName                                                TutorialHelpId;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildData.GuildData_C.OnRefreshRightMenu__DelegateSignature
	 */
	struct UGuildData_C_OnRefreshRightMenu__DelegateSignature_Params
	{	};

	/**
	 * Function GuildData.GuildData_C.OnSelectEntry__DelegateSignature
	 */
	struct UGuildData_C_OnSelectEntry__DelegateSignature_Params
	{
	public:
		struct FGuildEntryData                                     GuildEntry;                                              // 0x0000(0x00E0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GuildData.GuildData_C.OnGuildOrganize__DelegateSignature
	 */
	struct UGuildData_C_OnGuildOrganize__DelegateSignature_Params
	{	};

	/**
	 * Function GuildData.GuildData_C.OnGuildApplications__DelegateSignature
	 */
	struct UGuildData_C_OnGuildApplications__DelegateSignature_Params
	{	};

	/**
	 * Function GuildData.GuildData_C.OnGuildMember__DelegateSignature
	 */
	struct UGuildData_C_OnGuildMember__DelegateSignature_Params
	{	};

	/**
	 * Function GuildData.GuildData_C.OnGuildSetting__DelegateSignature
	 */
	struct UGuildData_C_OnGuildSetting__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
