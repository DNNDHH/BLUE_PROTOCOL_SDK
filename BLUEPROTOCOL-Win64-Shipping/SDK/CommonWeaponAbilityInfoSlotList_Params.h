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
	 * Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.SetSlotInfoBase
	 */
	struct UCommonWeaponAbilityInfoSlotList_C_SetSlotInfoBase_Params
	{
	public:
		int32_t                                                    InUnlockedSlotNum;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WZJR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FSBCharacterWeaponPerkData>                  InPerkList;                                              // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    InUsedSlotNum;                                           // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bHasValidAbility;                                        // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IGU5[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.GetUnlockSlotMinMax
	 */
	struct UCommonWeaponAbilityInfoSlotList_C_GetUnlockSlotMinMax_Params
	{
	public:
		struct FSBMasterRewardLotteryGroupsRewards                 LotteryReward;                                           // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		int32_t                                                    Min;                                                     // 0x0038(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Max;                                                     // 0x003C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.SetLotteryReward
	 */
	struct UCommonWeaponAbilityInfoSlotList_C_SetLotteryReward_Params
	{
	public:
		struct FSBMasterRewardLotteryGroupsRewards                 LotteryReward;                                           // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.SetUnknownSlot
	 */
	struct UCommonWeaponAbilityInfoSlotList_C_SetUnknownSlot_Params
	{	};

	/**
	 * Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.SetRecipeId
	 */
	struct UCommonWeaponAbilityInfoSlotList_C_SetRecipeId_Params
	{
	public:
		int32_t                                                    RecipeId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2P4O[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.SetTextColor
	 */
	struct UCommonWeaponAbilityInfoSlotList_C_SetTextColor_Params
	{
	public:
		struct FSlateColor                                         InColorAndOpacity;                                       // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.SetVLineVisibility
	 */
	struct UCommonWeaponAbilityInfoSlotList_C_SetVLineVisibility_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.SetSlotInfoByUniqueId
	 */
	struct UCommonWeaponAbilityInfoSlotList_C_SetSlotInfoByUniqueId_Params
	{
	public:
		class FString                                              UniqueId;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bHasValidAbility;                                        // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_28HL[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.SetSlotInfo
	 */
	struct UCommonWeaponAbilityInfoSlotList_C_SetSlotInfo_Params
	{
	public:
		struct FSBWeaponItemData                                   InWeaponItemData;                                        // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       bHasValidAbility;                                        // 0x0078(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7H6Y[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.GetSlot
	 */
	struct UCommonWeaponAbilityInfoSlotList_C_GetSlot_Params
	{
	public:
		int32_t                                                    InSlotId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsValid;                                                 // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LYOU[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCommonWeaponAbilityInfoSlot_C*                      OutSlot;                                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.SwitchSlotInfoType
	 */
	struct UCommonWeaponAbilityInfoSlotList_C_SwitchSlotInfoType_Params
	{
	public:
		bool                                                       InIsSlotUnlocked;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MTXI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.InitAllSlot
	 */
	struct UCommonWeaponAbilityInfoSlotList_C_InitAllSlot_Params
	{	};

	/**
	 * Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.PreConstruct
	 */
	struct UCommonWeaponAbilityInfoSlotList_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonWeaponAbilityInfoSlotList.CommonWeaponAbilityInfoSlotList_C.ExecuteUbergraph_CommonWeaponAbilityInfoSlotList
	 */
	struct UCommonWeaponAbilityInfoSlotList_C_ExecuteUbergraph_CommonWeaponAbilityInfoSlotList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
