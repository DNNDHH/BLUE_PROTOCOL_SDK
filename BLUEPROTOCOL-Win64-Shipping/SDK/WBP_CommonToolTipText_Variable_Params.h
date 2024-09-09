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
	 * Function WBP_CommonToolTipText_Variable.WBP_CommonToolTipText_Variable_C.SetCommunicationSettingMenuAchievement
	 */
	struct UWBP_CommonToolTipText_Variable_C_SetCommunicationSettingMenuAchievement_Params
	{
	public:
		struct FDateTime                                           InDateTime;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CommonToolTipText_Variable.WBP_CommonToolTipText_Variable_C.SetAdventureBoardBosstDateTime
	 */
	struct UWBP_CommonToolTipText_Variable_C_SetAdventureBoardBosstDateTime_Params
	{
	public:
		bool                                                       InLimited;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M6XS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDateTime                                           InDateTime;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CommonToolTipText_Variable.WBP_CommonToolTipText_Variable_C.SetRecipeDateTime
	 */
	struct UWBP_CommonToolTipText_Variable_C_SetRecipeDateTime_Params
	{
	public:
		struct FDateTime                                           DateTime;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CommonToolTipText_Variable.WBP_CommonToolTipText_Variable_C.SetWeaponSkin
	 */
	struct UWBP_CommonToolTipText_Variable_C_SetWeaponSkin_Params
	{
	public:
		int32_t                                                    InWeaponSkinId;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsTermLimited;                                         // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IIV3[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDateTime                                           InExpiryDateTime;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CommonToolTipText_Variable.WBP_CommonToolTipText_Variable_C.Set Emotion
	 */
	struct UWBP_CommonToolTipText_Variable_C_SetEmotion_Params
	{
	public:
		class FName                                                InId;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CommonToolTipText_Variable.WBP_CommonToolTipText_Variable_C.SetText
	 */
	struct UWBP_CommonToolTipText_Variable_C_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_CommonToolTipText_Variable.WBP_CommonToolTipText_Variable_C.SetTextAndDateTime
	 */
	struct UWBP_CommonToolTipText_Variable_C_SetTextAndDateTime_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FDateTime                                           DateTime;                                                // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		bool                                                       bHideIfMinValue;                                         // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_CommonToolTipText_Variable.WBP_CommonToolTipText_Variable_C.SetLimitTimer
	 */
	struct UWBP_CommonToolTipText_Variable_C_SetLimitTimer_Params
	{
	public:
		struct FDateTime                                           InDateTime;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_CommonToolTipText_Variable.WBP_CommonToolTipText_Variable_C.ExecuteUbergraph_WBP_CommonToolTipText_Variable
	 */
	struct UWBP_CommonToolTipText_Variable_C_ExecuteUbergraph_WBP_CommonToolTipText_Variable_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
