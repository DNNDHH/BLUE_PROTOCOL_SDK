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
	 * Function QuestRewardIcon.QuestRewardIcon_C.SetPerkPickId
	 */
	struct UQuestRewardIcon_C_SetPerkPickId_Params
	{
	public:
		int32_t                                                    LotId;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.SetOrnament
	 */
	struct UQuestRewardIcon_C_SetOrnament_Params
	{
	public:
		int32_t                                                    InIndex;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InAmount;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.StopAnimTeamBonus
	 */
	struct UQuestRewardIcon_C_StopAnimTeamBonus_Params
	{	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.PlayAnimTeamBonus
	 */
	struct UQuestRewardIcon_C_PlayAnimTeamBonus_Params
	{	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.DeleteDetail
	 */
	struct UQuestRewardIcon_C_DeleteDetail_Params
	{	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.CreateDetail
	 */
	struct UQuestRewardIcon_C_CreateDetail_Params
	{	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.SetTacticalAbility
	 */
	struct UQuestRewardIcon_C_SetTacticalAbility_Params
	{
	public:
		int32_t                                                    SkillId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SkillLV;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsClickToShowDetail;                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.isDetailWindow
	 */
	struct UQuestRewardIcon_C_isDetailWindow_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.SetUnidentifiedIcon
	 */
	struct UQuestRewardIcon_C_SetUnidentifiedIcon_Params
	{	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.SetUnknown
	 */
	struct UQuestRewardIcon_C_SetUnknown_Params
	{	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.SetLiquidMemory
	 */
	struct UQuestRewardIcon_C_SetLiquidMemory_Params
	{
	public:
		int32_t                                                    InIndex;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InAmount;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.SetAchivement
	 */
	struct UQuestRewardIcon_C_SetAchivement_Params
	{
	public:
		int32_t                                                    InIdex;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InAmount;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.SetRecipeSet
	 */
	struct UQuestRewardIcon_C_SetRecipeSet_Params
	{
	public:
		int32_t                                                    InIdex;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InAmount;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.SetRecipe
	 */
	struct UQuestRewardIcon_C_SetRecipe_Params
	{
	public:
		ESBRewardItemType                                          InType;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4ERZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InIndex;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InAmount;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.GetAmountColorOrange
	 */
	struct UQuestRewardIcon_C_GetAmountColorOrange_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.GetAmountColorYellow
	 */
	struct UQuestRewardIcon_C_GetAmountColorYellow_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.GetAmountColorWhite
	 */
	struct UQuestRewardIcon_C_GetAmountColorWhite_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.SetAmountColorBonus
	 */
	struct UQuestRewardIcon_C_SetAmountColorBonus_Params
	{
	public:
		bool                                                       IsBonus;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.GetMasterReward
	 */
	struct UQuestRewardIcon_C_GetMasterReward_Params
	{
	public:
		struct FSBMasterReward                                     MasterReward;                                            // 0x0000(0x0014)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.GetRewardId
	 */
	struct UQuestRewardIcon_C_GetRewardId_Params
	{
	public:
		int32_t                                                    RewardId;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.SetRewardMasterOnly
	 */
	struct UQuestRewardIcon_C_SetRewardMasterOnly_Params
	{
	public:
		struct FSBMasterReward                                     InMasterReward;                                          // 0x0000(0x0014)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		bool                                                       bUseRewardLottery;                                       // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.SetReceivedStyle
	 */
	struct UQuestRewardIcon_C_SetReceivedStyle_Params
	{
	public:
		bool                                                       IsReceived;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.SetClickToShowDetail
	 */
	struct UQuestRewardIcon_C_SetClickToShowDetail_Params
	{
	public:
		bool                                                       bIsClickToShowDetail;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.SetIconType
	 */
	struct UQuestRewardIcon_C_SetIconType_Params
	{
	public:
		bool                                                       IsTacticalAbility;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.SetStamp
	 */
	struct UQuestRewardIcon_C_SetStamp_Params
	{
	public:
		int32_t                                                    InIndex;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InAmount;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.SetItemSimpleAmount
	 */
	struct UQuestRewardIcon_C_SetItemSimpleAmount_Params
	{
	public:
		int32_t                                                    InIndex;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InAmount;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsUnIdentified;                                         // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.SetItem
	 */
	struct UQuestRewardIcon_C_SetItem_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Amount;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsUnidentified;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R3SX[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    AmountMin;                                               // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AmountMax;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.SetWeaponDetails
	 */
	struct UQuestRewardIcon_C_SetWeaponDetails_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InAmount;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              InItemUniqueId;                                          // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    InStorageNumber;                                         // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RC1G[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBWeaponItemData                                   InWeaponData;                                            // 0x0020(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.SetWeapon
	 */
	struct UQuestRewardIcon_C_SetWeapon_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Amount;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsAlwaysCategoryIcon;                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.SetCostume
	 */
	struct UQuestRewardIcon_C_SetCostume_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Amount;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.SetMountImagine
	 */
	struct UQuestRewardIcon_C_SetMountImagine_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Amount;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.SetImagine
	 */
	struct UQuestRewardIcon_C_SetImagine_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Amount;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsAlwaysCategoryIcon;                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.SetSkyCoin
	 */
	struct UQuestRewardIcon_C_SetSkyCoin_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.SetGC
	 */
	struct UQuestRewardIcon_C_SetGC_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.SetCheck
	 */
	struct UQuestRewardIcon_C_SetCheck_Params
	{
	public:
		bool                                                       bInCheck;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.SetAlertIconType
	 */
	struct UQuestRewardIcon_C_SetAlertIconType_Params
	{
	public:
		bool                                                       IsYellow;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.SetAlertIconVisible
	 */
	struct UQuestRewardIcon_C_SetAlertIconVisible_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.SetAmountColorType
	 */
	struct UQuestRewardIcon_C_SetAmountColorType_Params
	{
	public:
		class FString                                              ColorName;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.SetAmountColor
	 */
	struct UQuestRewardIcon_C_SetAmountColor_Params
	{
	public:
		struct FLinearColor                                        InColor;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.SetAmountVisibility
	 */
	struct UQuestRewardIcon_C_SetAmountVisibility_Params
	{
	public:
		bool                                                       InIconAmountVisibility;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UnderIconAmountVisibility;                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.SetFlagVisible
	 */
	struct UQuestRewardIcon_C_SetFlagVisible_Params
	{
	public:
		bool                                                       Index;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.SetFloorNumberVisible
	 */
	struct UQuestRewardIcon_C_SetFloorNumberVisible_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.SetBGVisible
	 */
	struct UQuestRewardIcon_C_SetBGVisible_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.SetTeamBonus
	 */
	struct UQuestRewardIcon_C_SetTeamBonus_Params
	{
	public:
		int32_t                                                    InTeamBonusPercent;                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.SetBonus
	 */
	struct UQuestRewardIcon_C_SetBonus_Params
	{
	public:
		bool                                                       bBonus;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.SetLuminous
	 */
	struct UQuestRewardIcon_C_SetLuminous_Params
	{
	public:
		bool                                                       InIsDraw;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OQQ2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.SetOption
	 */
	struct UQuestRewardIcon_C_SetOption_Params
	{
	public:
		bool                                                       IsLuminous;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsBonus;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q8U7[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InTeamBonusPercent;                                      // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.Setup
	 */
	struct UQuestRewardIcon_C_Setup_Params
	{	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.SetMoney
	 */
	struct UQuestRewardIcon_C_SetMoney_Params
	{
	public:
		int32_t                                                    Num;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.SetClassExp
	 */
	struct UQuestRewardIcon_C_SetClassExp_Params
	{
	public:
		int32_t                                                    Exp;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.SetRewardIcon
	 */
	struct UQuestRewardIcon_C_SetRewardIcon_Params
	{
	public:
		class UCommonIcon_C*                                       self2;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBRewardItemType                                          InRewardType;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_75UA[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InId;                                                    // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InAmount;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bUseRewardLottery;                                       // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G7FI[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    AmountRangeMin;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AmountRangeMax;                                          // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.SetupIcon
	 */
	struct UQuestRewardIcon_C_SetupIcon_Params
	{
	public:
		ESBRewardItemType                                          RewardType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HEBO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ID;                                                      // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Value;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QV9G[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              UniqueId;                                                // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       IsUnidentified;                                          // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsUseRewardLottery;                                      // 0x0021(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1GKF[0x2];                                   // 0x0022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    AmountMin;                                               // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AmountMax;                                               // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.SetRewardMaster
	 */
	struct UQuestRewardIcon_C_SetRewardMaster_Params
	{
	public:
		struct FSBMasterReward                                     InMasterReward;                                          // 0x0000(0x0014)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       IsUnidentified;                                          // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       OverwriteAmount;                                         // 0x0015(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ASX3[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    NewAmount;                                               // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AmountMin;                                               // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AmountMax;                                               // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsTreasure;                                              // 0x0024(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_51C5[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.CustomEvent
	 */
	struct UQuestRewardIcon_C_CustomEvent_Params
	{
	public:
		class UUMG_ProductDetailMenu_C*                            Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.BindDetail
	 */
	struct UQuestRewardIcon_C_BindDetail_Params
	{
	public:
		class UUMG_ProductDetailMenu_C*                            DetailWidget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.UnbindDetail
	 */
	struct UQuestRewardIcon_C_UnbindDetail_Params
	{
	public:
		class UUMG_ProductDetailMenu_C*                            DetailWidget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.Construct
	 */
	struct UQuestRewardIcon_C_Construct_Params
	{	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.BndEvt__QuestRewardIcon_Icon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
	 */
	struct UQuestRewardIcon_C_BndEvt__QuestRewardIcon_Icon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature_Params
	{
	public:
		class UCommonIcon_C*                                       Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.PreConstruct
	 */
	struct UQuestRewardIcon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.BndEvt__QuestRewardIcon_IconTacticalAbility_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UQuestRewardIcon_C_BndEvt__QuestRewardIcon_IconTacticalAbility_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.Destruct
	 */
	struct UQuestRewardIcon_C_Destruct_Params
	{	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.ExecuteUbergraph_QuestRewardIcon
	 */
	struct UQuestRewardIcon_C_ExecuteUbergraph_QuestRewardIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.OnClick__DelegateSignature
	 */
	struct UQuestRewardIcon_C_OnClick__DelegateSignature_Params
	{
	public:
		class UQuestRewardIcon_C*                                  Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function QuestRewardIcon.QuestRewardIcon_C.OnToggleCheck__DelegateSignature
	 */
	struct UQuestRewardIcon_C_OnToggleCheck__DelegateSignature_Params
	{
	public:
		bool                                                       IsCheck;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RYG9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UQuestRewardIcon_C*                                  Widget;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
