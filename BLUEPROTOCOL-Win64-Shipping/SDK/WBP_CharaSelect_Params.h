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
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.SetCaptureStudioEnable
	 */
	struct UWBP_CharaSelect_C_SetCaptureStudioEnable_Params
	{
	public:
		bool                                                       InEnable;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZJWY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.IsinputEnabled
	 */
	struct UWBP_CharaSelect_C_IsinputEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.SetButtonFocus
	 */
	struct UWBP_CharaSelect_C_SetButtonFocus_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.Init Cur Character Ban System Message
	 */
	struct UWBP_CharaSelect_C_InitCurCharacterBanSystemMessage_Params
	{
	public:
		bool                                                       bIsBaned;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.IsEnablePartyRejoin
	 */
	struct UWBP_CharaSelect_C_IsEnablePartyRejoin_Params
	{
	public:
		bool                                                       bEnablePartyRejoin;                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.IsEnableContentRejoin
	 */
	struct UWBP_CharaSelect_C_IsEnableContentRejoin_Params
	{
	public:
		bool                                                       bEnableContentRejoin;                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.RejectReturnDisconnectedParty
	 */
	struct UWBP_CharaSelect_C_RejectReturnDisconnectedParty_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.ActiveReJoinParty
	 */
	struct UWBP_CharaSelect_C_ActiveReJoinParty_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.InitCurrentCharacterInfoAll
	 */
	struct UWBP_CharaSelect_C_InitCurrentCharacterInfoAll_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.GetActiveCharacterNum
	 */
	struct UWBP_CharaSelect_C_GetActiveCharacterNum_Params
	{
	public:
		int32_t                                                    Nu;                                                      // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.OnEndDialogDeleteLast
	 */
	struct UWBP_CharaSelect_C_OnEndDialogDeleteLast_Params
	{
	public:
		bool                                                       DELETE;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.ShowDialogDeleteLast
	 */
	struct UWBP_CharaSelect_C_ShowDialogDeleteLast_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.OnEndDialogDeleteFirst
	 */
	struct UWBP_CharaSelect_C_OnEndDialogDeleteFirst_Params
	{
	public:
		bool                                                       DELETE;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.ShowDialogDeleteFirst
	 */
	struct UWBP_CharaSelect_C_ShowDialogDeleteFirst_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.OnEndDialogSecondPasswordExpired
	 */
	struct UWBP_CharaSelect_C_OnEndDialogSecondPasswordExpired_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.ShowDialogSecondPasswordExpired
	 */
	struct UWBP_CharaSelect_C_ShowDialogSecondPasswordExpired_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.HideSecondPasswordSender
	 */
	struct UWBP_CharaSelect_C_HideSecondPasswordSender_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.ShowSecondPasswordSender
	 */
	struct UWBP_CharaSelect_C_ShowSecondPasswordSender_Params
	{
	public:
		ESecondPasswordSenderStartType                             Role;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PJFD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.Initialize Character Studio
	 */
	struct UWBP_CharaSelect_C_InitializeCharacterStudio_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.Set Visible Select Cursor
	 */
	struct UWBP_CharaSelect_C_SetVisibleSelectCursor_Params
	{
	public:
		ESlateVisibility                                           InLeftState;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESlateVisibility                                           InRightState;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.SetEnableSelectCursor
	 */
	struct UWBP_CharaSelect_C_SetEnableSelectCursor_Params
	{
	public:
		bool                                                       IsLeft;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsRight;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.Set Chara Sele List Item Data
	 */
	struct UWBP_CharaSelect_C_SetCharaSeleListItemData_Params
	{
	public:
		int32_t                                                    CharaSeleListItemNum;                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CharaIndex;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.IsCreateCharacter
	 */
	struct UWBP_CharaSelect_C_IsCreateCharacter_Params
	{
	public:
		bool                                                       Ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0X38[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.UpdateCharaSlotText
	 */
	struct UWBP_CharaSelect_C_UpdateCharaSlotText_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.UpdateCharaInfo
	 */
	struct UWBP_CharaSelect_C_UpdateCharaInfo_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.ClearCache
	 */
	struct UWBP_CharaSelect_C_ClearCache_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.Update Enable All Button
	 */
	struct UWBP_CharaSelect_C_UpdateEnableAllButton_Params
	{
	public:
		bool                                                       InEnable;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.UpdateCharaSeleText
	 */
	struct UWBP_CharaSelect_C_UpdateCharaSeleText_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.ResetCharaSeleScale
	 */
	struct UWBP_CharaSelect_C_ResetCharaSeleScale_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.GetDefaultSelectIndex
	 */
	struct UWBP_CharaSelect_C_GetDefaultSelectIndex_Params
	{
	public:
		TArray<struct FSBUserOnlineAccountCharacter>               InList;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FString                                              InCharacterId;                                           // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    retIndex;                                                // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.Set Delete Start Button Visible
	 */
	struct UWBP_CharaSelect_C_SetDeleteStartButtonVisible_Params
	{
	public:
		ESlateVisibility                                           InState;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9NGQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.ResetCharaSeleItemPos
	 */
	struct UWBP_CharaSelect_C_ResetCharaSeleItemPos_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.Preload Chara Image
	 */
	struct UWBP_CharaSelect_C_PreloadCharaImage_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.InitCharaVisible
	 */
	struct UWBP_CharaSelect_C_InitCharaVisible_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.UpdateSelectCursorVisible
	 */
	struct UWBP_CharaSelect_C_UpdateSelectCursorVisible_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.UpdateMove
	 */
	struct UWBP_CharaSelect_C_UpdateMove_Params
	{
	public:
		float                                                      InDeltaTime;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.Setup Chara Sele List
	 */
	struct UWBP_CharaSelect_C_SetupCharaSeleList_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.Init Chara Image
	 */
	struct UWBP_CharaSelect_C_InitCharaImage_Params
	{
	public:
		int32_t                                                    InSelectIndex;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LBRC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.Show
	 */
	struct UWBP_CharaSelect_C_Show_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.BndEvt__SBButtonRight_K2Node_ComponentBoundEvent_397_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_CharaSelect_C_BndEvt__SBButtonRight_K2Node_ComponentBoundEvent_397_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.BndEvt__SBButtonLeft_K2Node_ComponentBoundEvent_368_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_CharaSelect_C_BndEvt__SBButtonLeft_K2Node_ComponentBoundEvent_368_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.BndEvt__DebugButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_CharaSelect_C_BndEvt__DebugButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.Construct
	 */
	struct UWBP_CharaSelect_C_Construct_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.Tick
	 */
	struct UWBP_CharaSelect_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.OnUpdatePlayerInfo
	 */
	struct UWBP_CharaSelect_C_OnUpdatePlayerInfo_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_INGC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              DefaultCharacterId;                                      // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.OnDeletedCharacter
	 */
	struct UWBP_CharaSelect_C_OnDeletedCharacter_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bForceDelete;                                            // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.BndEvt__CharacterCreateButton_K2Node_ComponentBoundEvent_559_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_CharaSelect_C_BndEvt__CharacterCreateButton_K2Node_ComponentBoundEvent_559_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.BndEvt__StartButton_K2Node_ComponentBoundEvent_679_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_CharaSelect_C_BndEvt__StartButton_K2Node_ComponentBoundEvent_679_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.BndEvt__DeleteButton_K2Node_ComponentBoundEvent_215_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_CharaSelect_C_BndEvt__DeleteButton_K2Node_ComponentBoundEvent_215_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.DeleteCharacter
	 */
	struct UWBP_CharaSelect_C_DeleteCharacter_Params
	{
	public:
		bool                                                       bForceDelete;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.BndEvt__StartButton_K2Node_ComponentBoundEvent_129_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_CharaSelect_C_BndEvt__StartButton_K2Node_ComponentBoundEvent_129_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.BndEvt__StartButton_K2Node_ComponentBoundEvent_148_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_CharaSelect_C_BndEvt__StartButton_K2Node_ComponentBoundEvent_148_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.BndEvt__DeleteButton_K2Node_ComponentBoundEvent_277_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_CharaSelect_C_BndEvt__DeleteButton_K2Node_ComponentBoundEvent_277_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.BndEvt__DeleteButton_K2Node_ComponentBoundEvent_304_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_CharaSelect_C_BndEvt__DeleteButton_K2Node_ComponentBoundEvent_304_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.BndEvt__CharacterCreateButton_K2Node_ComponentBoundEvent_496_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_CharaSelect_C_BndEvt__CharacterCreateButton_K2Node_ComponentBoundEvent_496_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.BndEvt__CharacterCreateButton_K2Node_ComponentBoundEvent_515_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_CharaSelect_C_BndEvt__CharacterCreateButton_K2Node_ComponentBoundEvent_515_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.BndEvt__CharacterSelectListItem1_K2Node_ComponentBoundEvent_210_EndDelAnim__DelegateSignature
	 */
	struct UWBP_CharaSelect_C_BndEvt__CharacterSelectListItem1_K2Node_ComponentBoundEvent_210_EndDelAnim__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.BndEvt__CharacterSelectListItem2_K2Node_ComponentBoundEvent_233_EndDelAnim__DelegateSignature
	 */
	struct UWBP_CharaSelect_C_BndEvt__CharacterSelectListItem2_K2Node_ComponentBoundEvent_233_EndDelAnim__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.BndEvt__CharacterSelectListItem3_K2Node_ComponentBoundEvent_260_EndDelAnim__DelegateSignature
	 */
	struct UWBP_CharaSelect_C_BndEvt__CharacterSelectListItem3_K2Node_ComponentBoundEvent_260_EndDelAnim__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.BndEvt__CharacterSelectListItem4_K2Node_ComponentBoundEvent_285_EndDelAnim__DelegateSignature
	 */
	struct UWBP_CharaSelect_C_BndEvt__CharacterSelectListItem4_K2Node_ComponentBoundEvent_285_EndDelAnim__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.BndEvt__CharacterSelectListItem5_K2Node_ComponentBoundEvent_316_EndDelAnim__DelegateSignature
	 */
	struct UWBP_CharaSelect_C_BndEvt__CharacterSelectListItem5_K2Node_ComponentBoundEvent_316_EndDelAnim__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.BndEvt__SBButtonLeft_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_CharaSelect_C_BndEvt__SBButtonLeft_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.BndEvt__SBButtonLeft_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_CharaSelect_C_BndEvt__SBButtonLeft_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.BndEvt__SBButtonRight_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_CharaSelect_C_BndEvt__SBButtonRight_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.BndEvt__SBButtonRight_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_CharaSelect_C_BndEvt__SBButtonRight_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.BndEvt__SBButtonLeft_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWBP_CharaSelect_C_BndEvt__SBButtonLeft_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.BndEvt__SBButtonRight_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWBP_CharaSelect_C_BndEvt__SBButtonRight_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.WidgetAnimationEvt_AnimBtnOut_K2Node_WidgetAnimationEvent_1
	 */
	struct UWBP_CharaSelect_C_WidgetAnimationEvt_AnimBtnOut_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_2
	 */
	struct UWBP_CharaSelect_C_WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_2_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.WidgetAnimationEvt_AnimBtnIn_K2Node_WidgetAnimationEvent_3
	 */
	struct UWBP_CharaSelect_C_WidgetAnimationEvt_AnimBtnIn_K2Node_WidgetAnimationEvent_3_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.BndEvt__CmnBack01_K2Node_ComponentBoundEvent_4_EventClicked__DelegateSignature
	 */
	struct UWBP_CharaSelect_C_BndEvt__CmnBack01_K2Node_ComponentBoundEvent_4_EventClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.OnUICancel
	 */
	struct UWBP_CharaSelect_C_OnUICancel_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.ShowCharaSelect
	 */
	struct UWBP_CharaSelect_C_ShowCharaSelect_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.InitializeCharacterSelectOverlay
	 */
	struct UWBP_CharaSelect_C_InitializeCharacterSelectOverlay_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.BndEvt__ChangePauseButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_CharaSelect_C_BndEvt__ChangePauseButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.UpdetaBust_Up
	 */
	struct UWBP_CharaSelect_C_UpdetaBust_Up_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.RemoveMoveBlocker
	 */
	struct UWBP_CharaSelect_C_RemoveMoveBlocker_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.ChangePause
	 */
	struct UWBP_CharaSelect_C_ChangePause_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.StartGamePlayInAnim
	 */
	struct UWBP_CharaSelect_C_StartGamePlayInAnim_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.BndEvt__CharacterCreateButton_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWBP_CharaSelect_C_BndEvt__CharacterCreateButton_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.BndEvt__ChangeposeButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_CharaSelect_C_BndEvt__ChangeposeButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.BndEvt__ChangeposeButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_CharaSelect_C_BndEvt__ChangeposeButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.OnDecideDeleteDialog
	 */
	struct UWBP_CharaSelect_C_OnDecideDeleteDialog_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.CustomEvent_2
	 */
	struct UWBP_CharaSelect_C_CustomEvent_2_Params
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.HideCharaSelect
	 */
	struct UWBP_CharaSelect_C_HideCharaSelect_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.OnEndSecondPasswordSender
	 */
	struct UWBP_CharaSelect_C_OnEndSecondPasswordSender_Params
	{
	public:
		ESendSecondPasswordRole                                    Role;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESecondPasswordSenderEndReason                             Reason;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESecondPasswordSenderStartType                             StartType;                                               // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.BndEvt__RevivalButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_CharaSelect_C_BndEvt__RevivalButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.CustomEvent_1
	 */
	struct UWBP_CharaSelect_C_CustomEvent_1_Params
	{
	public:
		EYesNoDialogResult                                         Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.OnRestoreCharacter
	 */
	struct UWBP_CharaSelect_C_OnRestoreCharacter_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.BndEvt__DeleteImmediateButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_CharaSelect_C_BndEvt__DeleteImmediateButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.CustomEvent
	 */
	struct UWBP_CharaSelect_C_CustomEvent_Params
	{
	public:
		EYesNoDialogResult                                         Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.BndEvt__RenameButton_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_CharaSelect_C_BndEvt__RenameButton_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.カスタムイベント_1
	 */
	struct UWBP_CharaSelect_C__1_Params
	{
	public:
		class FString                                              PlayerName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.Close
	 */
	struct UWBP_CharaSelect_C_Close_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.OnCharacterRename
	 */
	struct UWBP_CharaSelect_C_OnCharacterRename_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.OnDecideReturnPartyReportDialog_Event
	 */
	struct UWBP_CharaSelect_C_OnDecideReturnPartyReportDialog_Event_Params
	{
	public:
		EYesNoDialogResult                                         Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.BndEvt__DeleteImmediateButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_CharaSelect_C_BndEvt__DeleteImmediateButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.BndEvt__DeleteImmediateButton_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_CharaSelect_C_BndEvt__DeleteImmediateButton_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.BndEvt__RevivalButton_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_CharaSelect_C_BndEvt__RevivalButton_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.BndEvt__RevivalButton_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_CharaSelect_C_BndEvt__RevivalButton_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.OnDecideReturnContentReportDialog_Event
	 */
	struct UWBP_CharaSelect_C_OnDecideReturnContentReportDialog_Event_Params
	{
	public:
		EYesNoDialogResult                                         Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.OnRefuseReJoinParty
	 */
	struct UWBP_CharaSelect_C_OnRefuseReJoinParty_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.BndEvt__WBP_CharaSelect_SBButton_C_0_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_CharaSelect_C_BndEvt__WBP_CharaSelect_SBButton_C_0_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.CustomEvent_3
	 */
	struct UWBP_CharaSelect_C_CustomEvent_3_Params
	{
	public:
		class UWBP_AddCharacterSlotDialog_C*                       Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Add;                                                     // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.CreateAddSlotDialog
	 */
	struct UWBP_CharaSelect_C_CreateAddSlotDialog_Params
	{
	public:
		struct FSBCryptoCurrency                                   SBCryptoCurrency;                                        // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.OnGetCryptocurrency
	 */
	struct UWBP_CharaSelect_C_OnGetCryptocurrency_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V0YA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBCryptoCurrency                                   InCryptocurrency;                                        // 0x0008(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.OnCharacterSlotPurchase
	 */
	struct UWBP_CharaSelect_C_OnCharacterSlotPurchase_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G43A[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RetCode;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.CustomEvent_4
	 */
	struct UWBP_CharaSelect_C_CustomEvent_4_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.OnCharacterBuySlot
	 */
	struct UWBP_CharaSelect_C_OnCharacterBuySlot_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QBLY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RetCode;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.DecisonDialogResult
	 */
	struct UWBP_CharaSelect_C_DecisonDialogResult_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.DebugInitialize
	 */
	struct UWBP_CharaSelect_C_DebugInitialize_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.LoadSabLevel
	 */
	struct UWBP_CharaSelect_C_LoadSabLevel_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.ResetCharacterPause
	 */
	struct UWBP_CharaSelect_C_ResetCharacterPause_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.DeleteButtonUpdate
	 */
	struct UWBP_CharaSelect_C_DeleteButtonUpdate_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.ExecuteUbergraph_WBP_CharaSelect
	 */
	struct UWBP_CharaSelect_C_ExecuteUbergraph_WBP_CharaSelect_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.OnRefresh__DelegateSignature
	 */
	struct UWBP_CharaSelect_C_OnRefresh__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.OnStartFriendSession__DelegateSignature
	 */
	struct UWBP_CharaSelect_C_OnStartFriendSession__DelegateSignature_Params
	{
	public:
		class FString                                              CharacterId;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    listIndex;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GM8Z[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              FriendCharacterId;                                       // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.OnRequestCreateMode__DelegateSignature
	 */
	struct UWBP_CharaSelect_C_OnRequestCreateMode__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.OnClose__DelegateSignature
	 */
	struct UWBP_CharaSelect_C_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_CharaSelect.WBP_CharaSelect_C.OnStartWithCharacter__DelegateSignature
	 */
	struct UWBP_CharaSelect_C_OnStartWithCharacter__DelegateSignature_Params
	{
	public:
		class FString                                              CharacterId;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    listIndex;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bReturnDisconnect;                                       // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
