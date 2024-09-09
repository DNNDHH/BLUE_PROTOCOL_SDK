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
	 * Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.UpdateSubMenuExcramationIcon
	 */
	struct UUMG_SeasonPassMenuMain_C_UpdateSubMenuExcramationIcon_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.UpdateBookmarkButton
	 */
	struct UUMG_SeasonPassMenuMain_C_UpdateBookmarkButton_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.TermRequest
	 */
	struct UUMG_SeasonPassMenuMain_C_TermRequest_Params
	{
	public:
		ESubMenuTermReason                                         InReason;                                                // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESubMenuTermRequestReply                                   ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.Initialize Open Menu Type
	 */
	struct UUMG_SeasonPassMenuMain_C_InitializeOpenMenuType_Params
	{
	public:
		class FString                                              InputPin;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bInit;                                                   // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.SetTab
	 */
	struct UUMG_SeasonPassMenuMain_C_SetTab_Params
	{
	public:
		int32_t                                                    InSelect;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInit;                                                   // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bChangeTab;                                              // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.SwitchOut
	 */
	struct UUMG_SeasonPassMenuMain_C_SwitchOut_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.TermRequesTiming
	 */
	struct UUMG_SeasonPassMenuMain_C_TermRequesTiming_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.SwitchSelect
	 */
	struct UUMG_SeasonPassMenuMain_C_SwitchSelect_Params
	{
	public:
		class FString                                              OpenBookMarkType;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FName                                                ParamName;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.BndEvt__UMG_SeasonPassMenuMain_UMG_SeasonPassQuestMenu_K2Node_ComponentBoundEvent_12_OnChangeBookmarkType__DelegateSignature
	 */
	struct UUMG_SeasonPassMenuMain_C_BndEvt__UMG_SeasonPassMenuMain_UMG_SeasonPassQuestMenu_K2Node_ComponentBoundEvent_12_OnChangeBookmarkType__DelegateSignature_Params
	{
	public:
		class FString                                              BookmarkType;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.BndEvt__UMG_SeasonPassMenuMain_CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature
	 */
	struct UUMG_SeasonPassMenuMain_C_BndEvt__UMG_SeasonPassMenuMain_CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.BndEvt__UMG_SeasonPassMenuMain_UMG_SeasonPassMenuReward_v106_K2Node_ComponentBoundEvent_6_OnClickRewardItemIcon__DelegateSignature
	 */
	struct UUMG_SeasonPassMenuMain_C_BndEvt__UMG_SeasonPassMenuMain_UMG_SeasonPassMenuReward_v106_K2Node_ComponentBoundEvent_6_OnClickRewardItemIcon__DelegateSignature_Params
	{
	public:
		class USBSeasonPassMenuRewardItemData*                     RewardItemData;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.BndEvt__UMG_SeasonPassMenuMain_UMG_SeasonPassMenuGeneral_v106_K2Node_ComponentBoundEvent_11_OnClickUpgrade__DelegateSignature
	 */
	struct UUMG_SeasonPassMenuMain_C_BndEvt__UMG_SeasonPassMenuMain_UMG_SeasonPassMenuGeneral_v106_K2Node_ComponentBoundEvent_11_OnClickUpgrade__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.BndEvt__UMG_SeasonPassMenuMain_UMG_SeasonPassMenuGeneral_v106_K2Node_ComponentBoundEvent_13_OnClickBuyRankUp__DelegateSignature
	 */
	struct UUMG_SeasonPassMenuMain_C_BndEvt__UMG_SeasonPassMenuMain_UMG_SeasonPassMenuGeneral_v106_K2Node_ComponentBoundEvent_13_OnClickBuyRankUp__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.BndEvt__UMG_SeasonPassMenuMain_UMG_SeasonPassMenuGeneral_v106_K2Node_ComponentBoundEvent_10_OnClickSeasonPassRewardAll__DelegateSignature
	 */
	struct UUMG_SeasonPassMenuMain_C_BndEvt__UMG_SeasonPassMenuMain_UMG_SeasonPassMenuGeneral_v106_K2Node_ComponentBoundEvent_10_OnClickSeasonPassRewardAll__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.SetData
	 */
	struct UUMG_SeasonPassMenuMain_C_SetData_Params
	{
	public:
		class USBSeasonPassMenuRewardData*                         RewardData;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.UpdateDesign
	 */
	struct UUMG_SeasonPassMenuMain_C_UpdateDesign_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.UpdateDesignAndData
	 */
	struct UUMG_SeasonPassMenuMain_C_UpdateDesignAndData_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.OnUpdateData
	 */
	struct UUMG_SeasonPassMenuMain_C_OnUpdateData_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.SwitchIn
	 */
	struct UUMG_SeasonPassMenuMain_C_SwitchIn_Params
	{
	public:
		class FString                                              OpenBookMarkType;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FName                                                ParamName;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.UpdateBookmarkStatusButton
	 */
	struct UUMG_SeasonPassMenuMain_C_UpdateBookmarkStatusButton_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.BookmarkUpdateRequest
	 */
	struct UUMG_SeasonPassMenuMain_C_BookmarkUpdateRequest_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.Construct
	 */
	struct UUMG_SeasonPassMenuMain_C_Construct_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.TabChangeInit
	 */
	struct UUMG_SeasonPassMenuMain_C_TabChangeInit_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.AutoDeliveryQuestLoad
	 */
	struct UUMG_SeasonPassMenuMain_C_AutoDeliveryQuestLoad_Params
	{
	public:
		int32_t                                                    ReturnCode;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.SubMenuUpdateEvent
	 */
	struct UUMG_SeasonPassMenuMain_C_SubMenuUpdateEvent_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.Destruct
	 */
	struct UUMG_SeasonPassMenuMain_C_Destruct_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.OnInAnimationFinished
	 */
	struct UUMG_SeasonPassMenuMain_C_OnInAnimationFinished_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.ExecuteUbergraph_UMG_SeasonPassMenuMain
	 */
	struct UUMG_SeasonPassMenuMain_C_ExecuteUbergraph_UMG_SeasonPassMenuMain_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AY10[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.OnCheckAutoRankup__DelegateSignature
	 */
	struct UUMG_SeasonPassMenuMain_C_OnCheckAutoRankup__DelegateSignature_Params
	{
	public:
		bool                                                       bDoCheck;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.OnChangeBookmarkType__DelegateSignature
	 */
	struct UUMG_SeasonPassMenuMain_C_OnChangeBookmarkType__DelegateSignature_Params
	{
	public:
		class FString                                              BookmarkType;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.OnClickSeasonPassRewardAll__DelegateSignature
	 */
	struct UUMG_SeasonPassMenuMain_C_OnClickSeasonPassRewardAll__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.OnClickQuest__DelegateSignature
	 */
	struct UUMG_SeasonPassMenuMain_C_OnClickQuest__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.OnClickBuyRankUp__DelegateSignature
	 */
	struct UUMG_SeasonPassMenuMain_C_OnClickBuyRankUp__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.OnClickPointShop__DelegateSignature
	 */
	struct UUMG_SeasonPassMenuMain_C_OnClickPointShop__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.OnClickRankUp__DelegateSignature
	 */
	struct UUMG_SeasonPassMenuMain_C_OnClickRankUp__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.OnClickRewardItemIcon__DelegateSignature
	 */
	struct UUMG_SeasonPassMenuMain_C_OnClickRewardItemIcon__DelegateSignature_Params
	{
	public:
		class USBSeasonPassMenuRewardItemData*                     RewardItemData;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_SeasonPassMenuMain.UMG_SeasonPassMenuMain_C.OnClickUpgrade__DelegateSignature
	 */
	struct UUMG_SeasonPassMenuMain_C_OnClickUpgrade__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
