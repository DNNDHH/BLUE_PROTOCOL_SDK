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
	 * Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.IsAchievementPossession
	 */
	struct ULibraryMenu_Achievement_C_IsAchievementPossession_Params
	{
	public:
		int32_t                                                    InFindAchievementId;                                     // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    B;                                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       NewParam;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JTZJ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.GetAchievementComponent
	 */
	struct ULibraryMenu_Achievement_C_GetAchievementComponent_Params
	{
	public:
		class USBPlayerAchievementComponent*                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.SetLimitedTime
	 */
	struct ULibraryMenu_Achievement_C_SetLimitedTime_Params
	{
	public:
		class FString                                              TermId;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       OutValue;                                                // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E7X4[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.UpdateCharacterAchievementDataInfo
	 */
	struct ULibraryMenu_Achievement_C_UpdateCharacterAchievementDataInfo_Params
	{	};

	/**
	 * Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.CheckAllAchievement
	 */
	struct ULibraryMenu_Achievement_C_CheckAllAchievement_Params
	{
	public:
		TArray<struct FAchievementMasterData>                      outItemListInfo;                                         // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.GetAchievementReward
	 */
	struct ULibraryMenu_Achievement_C_GetAchievementReward_Params
	{
	public:
		TArray<struct FSBMailData>                                 OutMailData;                                             // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.Set Reward Btn
	 */
	struct ULibraryMenu_Achievement_C_SetRewardBtn_Params
	{	};

	/**
	 * Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.GetCategoryID
	 */
	struct ULibraryMenu_Achievement_C_GetCategoryID_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    outLargeCategoryId;                                      // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    outMediumCategoryId;                                     // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WQ5N[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.GetLargeCategoryName
	 */
	struct ULibraryMenu_Achievement_C_GetLargeCategoryName_Params
	{
	public:
		int32_t                                                    inInt;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NOKY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.GetGroupName
	 */
	struct ULibraryMenu_Achievement_C_GetGroupName_Params
	{
	public:
		int32_t                                                    inInt;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GRAG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.SetAchievedDate
	 */
	struct ULibraryMenu_Achievement_C_SetAchievedDate_Params
	{
	public:
		int32_t                                                    AchievementId;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0D16[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDateTime                                           InDateTime;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.GetCharacterAchievementData
	 */
	struct ULibraryMenu_Achievement_C_GetCharacterAchievementData_Params
	{
	public:
		int32_t                                                    AchievementId;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QNMX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBCharacterAchievementDataInfo                     Data;                                                    // 0x0008(0x0018)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.On_ComboBox_GenerateWidget_1
	 */
	struct ULibraryMenu_Achievement_C_On_ComboBox_GenerateWidget_1_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.CheckCategory
	 */
	struct ULibraryMenu_Achievement_C_CheckCategory_Params
	{
	public:
		struct FAchievementMasterData                              MasterData;                                              // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       Result;                                                  // 0x0078(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.UpdateSelectCategoryNewIcon
	 */
	struct ULibraryMenu_Achievement_C_UpdateSelectCategoryNewIcon_Params
	{	};

	/**
	 * Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.Get Read Achievement Id List
	 */
	struct ULibraryMenu_Achievement_C_GetReadAchievementIdList_Params
	{
	public:
		TArray<int32_t>                                            ReadAchievementIdList;                                   // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.SetAchievementId
	 */
	struct ULibraryMenu_Achievement_C_SetAchievementId_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TNEX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    listIndex;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.ClickListItem
	 */
	struct ULibraryMenu_Achievement_C_ClickListItem_Params
	{
	public:
		int32_t                                                    listIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.CreateItemList
	 */
	struct ULibraryMenu_Achievement_C_CreateItemList_Params
	{
	public:
		int32_t                                                    InSelectID;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CNX6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.Create Category List
	 */
	struct ULibraryMenu_Achievement_C_CreateCategoryList_Params
	{	};

	/**
	 * Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.Initialize_RankProgress
	 */
	struct ULibraryMenu_Achievement_C_Initialize_RankProgress_Params
	{	};

	/**
	 * Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.Initialize
	 */
	struct ULibraryMenu_Achievement_C_Initialize_Params
	{	};

	/**
	 * Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.Construct
	 */
	struct ULibraryMenu_Achievement_C_Construct_Params
	{	};

	/**
	 * Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.Destruct
	 */
	struct ULibraryMenu_Achievement_C_Destruct_Params
	{	};

	/**
	 * Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.OnLoadAchievementDelegate
	 */
	struct ULibraryMenu_Achievement_C_OnLoadAchievementDelegate_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7WII[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FSBAchievementInfo>                          AchievementList;                                         // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.OnSaveAchievementSelectedDelegate_Event
	 */
	struct ULibraryMenu_Achievement_C_OnSaveAchievementSelectedDelegate_Event_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature
	 */
	struct ULibraryMenu_Achievement_C_BndEvt__ComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.RequestAPI_LoadAchievementData
	 */
	struct ULibraryMenu_Achievement_C_RequestAPI_LoadAchievementData_Params
	{	};

	/**
	 * Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.OnLoadAchievementDataDelegate_Event
	 */
	struct ULibraryMenu_Achievement_C_OnLoadAchievementDataDelegate_Event_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AFU8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RetCode;                                                 // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.CallErrorMessage
	 */
	struct ULibraryMenu_Achievement_C_CallErrorMessage_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.RequestAPI_GetAchievementRewards
	 */
	struct ULibraryMenu_Achievement_C_RequestAPI_GetAchievementRewards_Params
	{	};

	/**
	 * Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.OnGetAchievementRewardsDelegate_Event
	 */
	struct ULibraryMenu_Achievement_C_OnGetAchievementRewardsDelegate_Event_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SY9W[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RetCode;                                                 // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSBAchievementRewardData                            AchievementRewardData;                                   // 0x0008(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.AttachmentListWindow_Close
	 */
	struct ULibraryMenu_Achievement_C_AttachmentListWindow_Close_Params
	{	};

	/**
	 * Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.OnGetRewardItemEvent
	 */
	struct ULibraryMenu_Achievement_C_OnGetRewardItemEvent_Params
	{	};

	/**
	 * Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.MailListAttachmentAcceptResult_CloseEvent
	 */
	struct ULibraryMenu_Achievement_C_MailListAttachmentAcceptResult_CloseEvent_Params
	{	};

	/**
	 * Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.BndEvt__LibraryMenu_Achievement_GetRewardBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct ULibraryMenu_Achievement_C_BndEvt__LibraryMenu_Achievement_GetRewardBtn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_6_OnSetAchievement__DelegateSignature
	 */
	struct ULibraryMenu_Achievement_C_BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_6_OnSetAchievement__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_0_OnClickRewardIcon__DelegateSignature
	 */
	struct ULibraryMenu_Achievement_C_BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_0_OnClickRewardIcon__DelegateSignature_Params
	{
	public:
		struct FSBMasterReward                                     InMasterReward;                                          // 0x0000(0x0014)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.OnCloseDetailMenu
	 */
	struct ULibraryMenu_Achievement_C_OnCloseDetailMenu_Params
	{
	public:
		class UUMG_ProductDetailMenu_C*                            Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.BndEvt__LibraryMenu_Achievement_CategoryList_Type1_K2Node_ComponentBoundEvent_5_CategoryChanged__DelegateSignature
	 */
	struct ULibraryMenu_Achievement_C_BndEvt__LibraryMenu_Achievement_CategoryList_Type1_K2Node_ComponentBoundEvent_5_CategoryChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.BndEvt__LibraryMenu_Achievement_GetRewardBtn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct ULibraryMenu_Achievement_C_BndEvt__LibraryMenu_Achievement_GetRewardBtn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.BndEvt__LibraryMenu_Achievement_GetRewardBtn_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	 */
	struct ULibraryMenu_Achievement_C_BndEvt__LibraryMenu_Achievement_GetRewardBtn_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.BndEvt__LibraryMenu_Achievement_GetRewardBtn_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature
	 */
	struct ULibraryMenu_Achievement_C_BndEvt__LibraryMenu_Achievement_GetRewardBtn_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_4_OnGetRewardItem__DelegateSignature
	 */
	struct ULibraryMenu_Achievement_C_BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_4_OnGetRewardItem__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_9_OnClicked_AchievementRewardsBtn__DelegateSignature
	 */
	struct ULibraryMenu_Achievement_C_BndEvt__LibraryMenu_Achievement_LibraryMenu_AchievementDetails_K2Node_ComponentBoundEvent_9_OnClicked_AchievementRewardsBtn__DelegateSignature_Params
	{
	public:
		TArray<struct FSBMailData>                                 outRewardsData;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            outRewardsIds;                                           // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.ExecuteUbergraph_LibraryMenu_Achievement
	 */
	struct ULibraryMenu_Achievement_C_ExecuteUbergraph_LibraryMenu_Achievement_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DUED[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LibraryMenu_Achievement.LibraryMenu_Achievement_C.UpdateNewIcon__DelegateSignature
	 */
	struct ULibraryMenu_Achievement_C_UpdateNewIcon__DelegateSignature_Params
	{
	public:
		int32_t                                                    MenuButtonListId;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
