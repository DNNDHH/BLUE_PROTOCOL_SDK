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
	 * Function CommonIconToolTipContent_Single.CommonIconToolTipContent_Single_C.SetText
	 */
	struct UCommonIconToolTipContent_Single_C_SetText_Params
	{
	public:
		class FString                                              InText;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonIconToolTipContent_Single.CommonIconToolTipContent_Single_C.SetTypeOnly
	 */
	struct UCommonIconToolTipContent_Single_C_SetTypeOnly_Params
	{
	public:
		ESBRewardItemType                                          RewardType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZTN9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommonIconToolTipContent_Single.CommonIconToolTipContent_Single_C.SetEmotion
	 */
	struct UCommonIconToolTipContent_Single_C_SetEmotion_Params
	{
	public:
		class FName                                                InId;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonIconToolTipContent_Single.CommonIconToolTipContent_Single_C.SetAmount
	 */
	struct UCommonIconToolTipContent_Single_C_SetAmount_Params
	{
	public:
		int32_t                                                    InAmount;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DVIW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommonIconToolTipContent_Single.CommonIconToolTipContent_Single_C.SetBrokenData
	 */
	struct UCommonIconToolTipContent_Single_C_SetBrokenData_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
