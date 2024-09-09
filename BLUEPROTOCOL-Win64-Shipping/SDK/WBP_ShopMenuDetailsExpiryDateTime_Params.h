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
	 * Function WBP_ShopMenuDetailsExpiryDateTime.WBP_ShopMenuDetailsExpiryDateTime_C.SetMessageTextColor
	 */
	struct UWBP_ShopMenuDetailsExpiryDateTime_C_SetMessageTextColor_Params
	{
	public:
		struct FSlateColor                                         LimitTime;                                               // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FSlateColor                                         Desc;                                                    // 0x0028(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_ShopMenuDetailsExpiryDateTime.WBP_ShopMenuDetailsExpiryDateTime_C.SetMessage
	 */
	struct UWBP_ShopMenuDetailsExpiryDateTime_C_SetMessage_Params
	{
	public:
		ESBRewardItemType                                          RewardType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ShopMenuDetailsExpiryDateTime.WBP_ShopMenuDetailsExpiryDateTime_C.SetDurationMinutes
	 */
	struct UWBP_ShopMenuDetailsExpiryDateTime_C_SetDurationMinutes_Params
	{
	public:
		int32_t                                                    DurationMinutes;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OH19[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_ShopMenuDetailsExpiryDateTime.WBP_ShopMenuDetailsExpiryDateTime_C.SetEventTermId
	 */
	struct UWBP_ShopMenuDetailsExpiryDateTime_C_SetEventTermId_Params
	{
	public:
		class FString                                              EventTermId;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ShopMenuDetailsExpiryDateTime.WBP_ShopMenuDetailsExpiryDateTime_C.SetData
	 */
	struct UWBP_ShopMenuDetailsExpiryDateTime_C_SetData_Params
	{
	public:
		class FString                                              EventTermId;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    DurationMinutes;                                         // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBRewardItemType                                          RewardType;                                              // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ShopMenuDetailsExpiryDateTime.WBP_ShopMenuDetailsExpiryDateTime_C.SetExpiryDateTime
	 */
	struct UWBP_ShopMenuDetailsExpiryDateTime_C_SetExpiryDateTime_Params
	{
	public:
		struct FDateTime                                           ExpiryDateTime;                                          // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ShopMenuDetailsExpiryDateTime.WBP_ShopMenuDetailsExpiryDateTime_C.SetDataAndVisibility
	 */
	struct UWBP_ShopMenuDetailsExpiryDateTime_C_SetDataAndVisibility_Params
	{
	public:
		class FString                                              EventTermId;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    DurationMinutes;                                         // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBRewardItemType                                          RewardType;                                              // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ShopMenuDetailsExpiryDateTime.WBP_ShopMenuDetailsExpiryDateTime_C.PreConstruct
	 */
	struct UWBP_ShopMenuDetailsExpiryDateTime_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ShopMenuDetailsExpiryDateTime.WBP_ShopMenuDetailsExpiryDateTime_C.SetEventTermIdForAestheFreePass
	 */
	struct UWBP_ShopMenuDetailsExpiryDateTime_C_SetEventTermIdForAestheFreePass_Params
	{
	public:
		class FString                                              InEventTermId;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ShopMenuDetailsExpiryDateTime.WBP_ShopMenuDetailsExpiryDateTime_C.ExecuteUbergraph_WBP_ShopMenuDetailsExpiryDateTime
	 */
	struct UWBP_ShopMenuDetailsExpiryDateTime_C_ExecuteUbergraph_WBP_ShopMenuDetailsExpiryDateTime_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
