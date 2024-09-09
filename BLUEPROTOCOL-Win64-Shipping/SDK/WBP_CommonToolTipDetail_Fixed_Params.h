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
	 * Function WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C.Set Stack Imagine Mode
	 */
	struct UWBP_CommonToolTipDetail_Fixed_C_SetStackImagineMode_Params
	{
	public:
		class FText                                                InName;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Type1;                                                   // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Desc1;                                                   // 0x0030(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Type2;                                                   // 0x0048(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Desc2;                                                   // 0x0060(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FOwnItemInfo                                        Info;                                                    // 0x0078(0x0150)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       StackBEffectiveDisplay;                                  // 0x01C8(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C.Set Visible Stack
	 */
	struct UWBP_CommonToolTipDetail_Fixed_C_SetVisibleStack_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C.SetNameAndTypeAndDescText
	 */
	struct UWBP_CommonToolTipDetail_Fixed_C_SetNameAndTypeAndDescText_Params
	{
	public:
		class FText                                                InName;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Type;                                                    // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                InDesc;                                                  // 0x0030(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C.SetNameAndTypeText
	 */
	struct UWBP_CommonToolTipDetail_Fixed_C_SetNameAndTypeText_Params
	{
	public:
		class FText                                                InName;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Type;                                                    // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C.SetNameAndDescText
	 */
	struct UWBP_CommonToolTipDetail_Fixed_C_SetNameAndDescText_Params
	{
	public:
		class FText                                                InName;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                InDesc;                                                  // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C.SetAsWeaponSkinUnattached
	 */
	struct UWBP_CommonToolTipDetail_Fixed_C_SetAsWeaponSkinUnattached_Params
	{	};

	/**
	 * Function WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C.SetWeaponPerkData
	 */
	struct UWBP_CommonToolTipDetail_Fixed_C_SetWeaponPerkData_Params
	{
	public:
		struct FSBCharacterWeaponPerkData                          SBCharacterWeaponPerkData;                               // 0x0000(0x001C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C.SetAbilityPerkID
	 */
	struct UWBP_CommonToolTipDetail_Fixed_C_SetAbilityPerkID_Params
	{
	public:
		int32_t                                                    PerkId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C.SetAbilityDescText
	 */
	struct UWBP_CommonToolTipDetail_Fixed_C_SetAbilityDescText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C.SetAbilityNameText
	 */
	struct UWBP_CommonToolTipDetail_Fixed_C_SetAbilityNameText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
