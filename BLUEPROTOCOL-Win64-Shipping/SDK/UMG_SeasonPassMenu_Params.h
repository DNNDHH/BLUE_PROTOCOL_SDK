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
	 * Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.TermRequest
	 */
	struct UUMG_SeasonPassMenu_C_TermRequest_Params
	{
	public:
		ESubMenuTermReason                                         InReason;                                                // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESubMenuTermRequestReply                                   ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.OnParentTerm
	 */
	struct UUMG_SeasonPassMenu_C_OnParentTerm_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.OnRMShopClosed
	 */
	struct UUMG_SeasonPassMenu_C_OnRMShopClosed_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.OnSubMenuUpdate
	 */
	struct UUMG_SeasonPassMenu_C_OnSubMenuUpdate_Params
	{
	public:
		int32_t                                                    MainPage;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SubPage;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.ResetMouseCursorTypeToDefaultRequest
	 */
	struct UUMG_SeasonPassMenu_C_ResetMouseCursorTypeToDefaultRequest_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.BndEvt__SBButton_BuySeasonPass_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_SeasonPassMenu_C_BndEvt__SBButton_BuySeasonPass_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.BndEvt__SBButton_Rankup_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_SeasonPassMenu_C_BndEvt__SBButton_Rankup_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.BndEvt__SBButton_BuyRankup_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_SeasonPassMenu_C_BndEvt__SBButton_BuyRankup_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.BndEvt__SBButton_GetRaward_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_SeasonPassMenu_C_BndEvt__SBButton_GetRaward_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.BndEvt__SBButton_GetInfo_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_SeasonPassMenu_C_BndEvt__SBButton_GetInfo_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.OnCompletedAmoutOfMoney
	 */
	struct UUMG_SeasonPassMenu_C_OnCompletedAmoutOfMoney_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InFreeMoney;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InPaidMoney;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.BndEvt__EditableTextBox_168_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UUMG_SeasonPassMenu_C_BndEvt__EditableTextBox_168_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.BndEvt__SBButton_Rankup_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_SeasonPassMenu_C_BndEvt__SBButton_Rankup_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.OnCompleted
	 */
	struct UUMG_SeasonPassMenu_C_OnCompleted_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.RequestRankupApi
	 */
	struct UUMG_SeasonPassMenu_C_RequestRankupApi_Params
	{
	public:
		int32_t                                                    UpRank;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.OnCompleteRankup
	 */
	struct UUMG_SeasonPassMenu_C_OnCompleteRankup_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.RequestReceiveApi
	 */
	struct UUMG_SeasonPassMenu_C_RequestReceiveApi_Params
	{
	public:
		class USBSeasonPassMenuRewardItemData*                     Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.OnComplateReceive
	 */
	struct UUMG_SeasonPassMenu_C_OnComplateReceive_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.RequestAutoRankup
	 */
	struct UUMG_SeasonPassMenu_C_RequestAutoRankup_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.RequestGetInfo
	 */
	struct UUMG_SeasonPassMenu_C_RequestGetInfo_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.ConfirmRequestRankupApi
	 */
	struct UUMG_SeasonPassMenu_C_ConfirmRequestRankupApi_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.OnCompletedGetInfo
	 */
	struct UUMG_SeasonPassMenu_C_OnCompletedGetInfo_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.RequestGetSeasonPassRewardAll
	 */
	struct UUMG_SeasonPassMenu_C_RequestGetSeasonPassRewardAll_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.OnGetSeasonPassRewardAllCompleted
	 */
	struct UUMG_SeasonPassMenu_C_OnGetSeasonPassRewardAllCompleted_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.OnCloseRankupJingle
	 */
	struct UUMG_SeasonPassMenu_C_OnCloseRankupJingle_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.OnClickedRankupDialogOk
	 */
	struct UUMG_SeasonPassMenu_C_OnClickedRankupDialogOk_Params
	{
	public:
		int32_t                                                    UpRank;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.BndEvt__WBP_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_0_OnClickUpgrade__DelegateSignature
	 */
	struct UUMG_SeasonPassMenu_C_BndEvt__WBP_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_0_OnClickUpgrade__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.BndEvt__UMG_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_2_OnClickQuest__DelegateSignature
	 */
	struct UUMG_SeasonPassMenu_C_BndEvt__UMG_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_2_OnClickQuest__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.BndEvt__UMG_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_3_OnClickPointShop__DelegateSignature
	 */
	struct UUMG_SeasonPassMenu_C_BndEvt__UMG_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_3_OnClickPointShop__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.BndEvt__UMG_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_4_OnClickBuyRankUp__DelegateSignature
	 */
	struct UUMG_SeasonPassMenu_C_BndEvt__UMG_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_4_OnClickBuyRankUp__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.BndEvt__UMG_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_5_OnClickRankUp__DelegateSignature
	 */
	struct UUMG_SeasonPassMenu_C_BndEvt__UMG_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_5_OnClickRankUp__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.BndEvt__UMG_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_1_OnClickRewardItemIcon__DelegateSignature
	 */
	struct UUMG_SeasonPassMenu_C_BndEvt__UMG_SeasonPassMenu_Main_K2Node_ComponentBoundEvent_1_OnClickRewardItemIcon__DelegateSignature_Params
	{
	public:
		class USBSeasonPassMenuRewardItemData*                     RewardItemData;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.OnCloseReceiveMenu
	 */
	struct UUMG_SeasonPassMenu_C_OnCloseReceiveMenu_Params
	{
	public:
		class UUMG_SeasonPassItemReceiveMenu_C*                    Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.OnClieckItemReceive
	 */
	struct UUMG_SeasonPassMenu_C_OnClieckItemReceive_Params
	{
	public:
		class USBSeasonPassMenuRewardItemData*                     Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.OnSuccessedReceiveApi
	 */
	struct UUMG_SeasonPassMenu_C_OnSuccessedReceiveApi_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.BndEvt__UMG_SeasonPassMenu_UMG_SeasonPassMenuMain_K2Node_ComponentBoundEvent_7_OnClickSeasonPassRewardAll__DelegateSignature
	 */
	struct UUMG_SeasonPassMenu_C_BndEvt__UMG_SeasonPassMenu_UMG_SeasonPassMenuMain_K2Node_ComponentBoundEvent_7_OnClickSeasonPassRewardAll__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.BndEvt__UMG_SeasonPassMenu_UMG_SeasonPassMenuMain_K2Node_ComponentBoundEvent_0_OnChangeBookmarkType__DelegateSignature
	 */
	struct UUMG_SeasonPassMenu_C_BndEvt__UMG_SeasonPassMenu_UMG_SeasonPassMenuMain_K2Node_ComponentBoundEvent_0_OnChangeBookmarkType__DelegateSignature_Params
	{
	public:
		class FString                                              BookmarkType;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.BndEvt__UMG_SeasonPassMenu_UMG_SeasonPassMenuMain_K2Node_ComponentBoundEvent_9_OnCheckAutoRankup__DelegateSignature
	 */
	struct UUMG_SeasonPassMenu_C_BndEvt__UMG_SeasonPassMenu_UMG_SeasonPassMenuMain_K2Node_ComponentBoundEvent_9_OnCheckAutoRankup__DelegateSignature_Params
	{
	public:
		bool                                                       bDoCheck;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.Construct
	 */
	struct UUMG_SeasonPassMenu_C_Construct_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.OnAnimationFinished
	 */
	struct UUMG_SeasonPassMenu_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.FinishAnimPagein
	 */
	struct UUMG_SeasonPassMenu_C_FinishAnimPagein_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.CheckAutoRankup
	 */
	struct UUMG_SeasonPassMenu_C_CheckAutoRankup_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.EnableInput
	 */
	struct UUMG_SeasonPassMenu_C_EnableInput_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.Init
	 */
	struct UUMG_SeasonPassMenu_C_Init_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.Destruct
	 */
	struct UUMG_SeasonPassMenu_C_Destruct_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.OnUpdateSeasonPassInfo
	 */
	struct UUMG_SeasonPassMenu_C_OnUpdateSeasonPassInfo_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.OnUpdateReceivedRewardInfo
	 */
	struct UUMG_SeasonPassMenu_C_OnUpdateReceivedRewardInfo_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.BookmarkUpdateRequest
	 */
	struct UUMG_SeasonPassMenu_C_BookmarkUpdateRequest_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.OnSameMenuBookmarkAccessNew
	 */
	struct UUMG_SeasonPassMenu_C_OnSameMenuBookmarkAccessNew_Params
	{
	public:
		class FString                                              InBookMarkType;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassMenu.UMG_SeasonPassMenu_C.ExecuteUbergraph_UMG_SeasonPassMenu
	 */
	struct UUMG_SeasonPassMenu_C_ExecuteUbergraph_UMG_SeasonPassMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
