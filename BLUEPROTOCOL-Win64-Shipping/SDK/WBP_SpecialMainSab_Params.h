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
	 * Function WBP_SpecialMainSab.WBP_SpecialMainSab_C.SetBaseInfoChangeColor
	 */
	struct UWBP_SpecialMainSab_C_SetBaseInfoChangeColor_Params
	{
	public:
		struct FOwnItemInfo                                        Prev;                                                    // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_SpecialMainSab.WBP_SpecialMainSab_C.SetVisibleBonusInfo
	 */
	struct UWBP_SpecialMainSab_C_SetVisibleBonusInfo_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_SpecialMainSab.WBP_SpecialMainSab_C.SetLinePadding
	 */
	struct UWBP_SpecialMainSab_C_SetLinePadding_Params
	{
	public:
		struct FMargin                                             PaddingOffset;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_SpecialMainSab.WBP_SpecialMainSab_C.Setup
	 */
	struct UWBP_SpecialMainSab_C_Setup_Params
	{
	public:
		struct FOwnItemInfo                                        OwnItemInfo;                                             // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_SpecialMainSab.WBP_SpecialMainSab_C.SetupSubAbilityInfoTypeStackB
	 */
	struct UWBP_SpecialMainSab_C_SetupSubAbilityInfoTypeStackB_Params
	{	};

	/**
	 * Function WBP_SpecialMainSab.WBP_SpecialMainSab_C.SetOffSubInfoTypeStackB
	 */
	struct UWBP_SpecialMainSab_C_SetOffSubInfoTypeStackB_Params
	{
	public:
		bool                                                       bIsExist;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T8D8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_SpecialMainSab.WBP_SpecialMainSab_C.SetOffMainInfoTypeStackB
	 */
	struct UWBP_SpecialMainSab_C_SetOffMainInfoTypeStackB_Params
	{
	public:
		bool                                                       bIsExist;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4TRH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_SpecialMainSab.WBP_SpecialMainSab_C.InitVisibleSetUpTypeStackB
	 */
	struct UWBP_SpecialMainSab_C_InitVisibleSetUpTypeStackB_Params
	{
	public:
		bool                                                       bIsExist;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ESBWeaponPerkRarity                                        InWeaponPerkRarity;                                      // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_SpecialMainSab.WBP_SpecialMainSab_C.SetSpecialDataTypeStackB
	 */
	struct UWBP_SpecialMainSab_C_SetSpecialDataTypeStackB_Params
	{
	public:
		bool                                                       bIsStackBMax;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SQ8F[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InItemID;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InRecepiId;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InLotteryGroupsId;                                       // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_SpecialMainSab.WBP_SpecialMainSab_C.TryGetToolTip
	 */
	struct UWBP_SpecialMainSab_C_TryGetToolTip_Params
	{
	public:
		class UWBP_HyouiAbilityParamToolTip_C*                     ToolTip;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_SpecialMainSab.WBP_SpecialMainSab_C.Get_Icon_info_ToolTipWidget_1
	 */
	struct UWBP_SpecialMainSab_C_Get_Icon_info_ToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_SpecialMainSab.WBP_SpecialMainSab_C.Set Hyoui Imagine Data
	 */
	struct UWBP_SpecialMainSab_C_SetHyouiImagineData_Params
	{
	public:
		int32_t                                                    InId;                                                    // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    stackb_num;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_SpecialMainSab.WBP_SpecialMainSab_C.Set Special Data
	 */
	struct UWBP_SpecialMainSab_C_SetSpecialData_Params
	{
	public:
		class FString                                              UniqueId;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    StorageNumber;                                           // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    WeaponID;                                                // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
