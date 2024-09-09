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
	 * Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.CheckAchievementReward
	 */
	struct ULibraryMenu_AchievementDetails_C_CheckAchievementReward_Params
	{
	public:
		TArray<struct FSBMailData>                                 OutMailDatas;                                            // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.SetRewardIconAlpha
	 */
	struct ULibraryMenu_AchievementDetails_C_SetRewardIconAlpha_Params
	{
	public:
		float                                                      InAlpha;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.SetRank
	 */
	struct ULibraryMenu_AchievementDetails_C_SetRank_Params
	{
	public:
		int32_t                                                    InRankId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.GetAchievementReward
	 */
	struct ULibraryMenu_AchievementDetails_C_GetAchievementReward_Params
	{
	public:
		TArray<struct FSBMailData>                                 OutMailData;                                             // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.SetLimitedTime
	 */
	struct ULibraryMenu_AchievementDetails_C_SetLimitedTime_Params
	{
	public:
		class FString                                              TeamID;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FDateTime                                           InLoadDateTime;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.SetReward
	 */
	struct ULibraryMenu_AchievementDetails_C_SetReward_Params
	{
	public:
		bool                                                       IsEneble;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K9IF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      RewardIdList;                                            // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       IsRecieved;                                              // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.Set Achievement Id
	 */
	struct ULibraryMenu_AchievementDetails_C_SetAchievementId_Params
	{
	public:
		struct FAchievementMasterData                              AchievementMasterData;                                   // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FSBCharacterAchievementDataInfo                     CharacterAchievementData;                                // 0x0078(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FDateTime                                           InLoadDateTime;                                          // 0x0090(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.SetDetailsVisibility
	 */
	struct ULibraryMenu_AchievementDetails_C_SetDetailsVisibility_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.Construct
	 */
	struct ULibraryMenu_AchievementDetails_C_Construct_Params
	{	};

	/**
	 * Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.BndEvt__LibraryMenu_AchievementDetails_LibraryMenu_Achievement_SwitchOnOff_K2Node_ComponentBoundEvent_2_OnSwitchOnPressed__DelegateSignature
	 */
	struct ULibraryMenu_AchievementDetails_C_BndEvt__LibraryMenu_AchievementDetails_LibraryMenu_Achievement_SwitchOnOff_K2Node_ComponentBoundEvent_2_OnSwitchOnPressed__DelegateSignature_Params
	{
	public:
		bool                                                       outIsSetAchievement;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.SaveAchievementSelectEvent
	 */
	struct ULibraryMenu_AchievementDetails_C_SaveAchievementSelectEvent_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.BndEvt__LibraryMenu_AchievementDetails_GetRewardBtn_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 */
	struct ULibraryMenu_AchievementDetails_C_BndEvt__LibraryMenu_AchievementDetails_GetRewardBtn_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.RewardIconClick
	 */
	struct ULibraryMenu_AchievementDetails_C_RewardIconClick_Params
	{
	public:
		class UQuestRewardIcon_C*                                  Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.ExecuteUbergraph_LibraryMenu_AchievementDetails
	 */
	struct ULibraryMenu_AchievementDetails_C_ExecuteUbergraph_LibraryMenu_AchievementDetails_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.OnClicked_AchievementRewardsBtn__DelegateSignature
	 */
	struct ULibraryMenu_AchievementDetails_C_OnClicked_AchievementRewardsBtn__DelegateSignature_Params
	{
	public:
		TArray<struct FSBMailData>                                 outRewardsData;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            outRewardsIds;                                           // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.OnClickRewardIcon__DelegateSignature
	 */
	struct ULibraryMenu_AchievementDetails_C_OnClickRewardIcon__DelegateSignature_Params
	{
	public:
		struct FSBMasterReward                                     InMasterReward;                                          // 0x0000(0x0014)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.OnSetAchievement__DelegateSignature
	 */
	struct ULibraryMenu_AchievementDetails_C_OnSetAchievement__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_AchievementDetails.LibraryMenu_AchievementDetails_C.OnGetRewardItem__DelegateSignature
	 */
	struct ULibraryMenu_AchievementDetails_C_OnGetRewardItem__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
