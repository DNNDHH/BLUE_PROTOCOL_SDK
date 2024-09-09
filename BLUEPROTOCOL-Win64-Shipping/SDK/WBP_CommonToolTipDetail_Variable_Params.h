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
	 * Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.Set Name Only Text
	 */
	struct UWBP_CommonToolTipDetail_Variable_C_SetNameOnlyText_Params
	{
	public:
		class FText                                                InName;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetExpOverflowRewardIconMode
	 */
	struct UWBP_CommonToolTipDetail_Variable_C_SetExpOverflowRewardIconMode_Params
	{
	public:
		bool                                                       bInIsClassLevelCounterStop;                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInIsClassLevelLimit;                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInIsClassLevelLimitSmallerThanCounterStop;              // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MCQ3[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetNameAndDescAndTermId
	 */
	struct UWBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndTermId_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Desc;                                                    // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FString                                              TermId;                                                  // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bHideIfMinValue;                                         // 0x0040(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetNameAndDescAndDateTime
	 */
	struct UWBP_CommonToolTipDetail_Variable_C_SetNameAndDescAndDateTime_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Desc;                                                    // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FDateTime                                           DateTime;                                                // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bHideIfMinValue;                                         // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetType
	 */
	struct UWBP_CommonToolTipDetail_Variable_C_SetType_Params
	{
	public:
		class FText                                                InTypeText;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetNameAndTypeAndDescText
	 */
	struct UWBP_CommonToolTipDetail_Variable_C_SetNameAndTypeAndDescText_Params
	{
	public:
		class FText                                                InName;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                InType;                                                  // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                InDesc;                                                  // 0x0030(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetNameAndDescText
	 */
	struct UWBP_CommonToolTipDetail_Variable_C_SetNameAndDescText_Params
	{
	public:
		class FText                                                InName;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                InDesc;                                                  // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetNameAndTypeText
	 */
	struct UWBP_CommonToolTipDetail_Variable_C_SetNameAndTypeText_Params
	{
	public:
		class FText                                                InName;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                InType;                                                  // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetWeaponPerkData
	 */
	struct UWBP_CommonToolTipDetail_Variable_C_SetWeaponPerkData_Params
	{
	public:
		struct FSBCharacterWeaponPerkData                          SBCharacterWeaponPerkData;                               // 0x0000(0x001C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetAbilityPerkID
	 */
	struct UWBP_CommonToolTipDetail_Variable_C_SetAbilityPerkID_Params
	{
	public:
		int32_t                                                    PerkId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetAbilityDescText
	 */
	struct UWBP_CommonToolTipDetail_Variable_C_SetAbilityDescText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C.SetAbilityNameText
	 */
	struct UWBP_CommonToolTipDetail_Variable_C_SetAbilityNameText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
