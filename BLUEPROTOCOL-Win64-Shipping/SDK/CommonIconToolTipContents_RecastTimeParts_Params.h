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
	 * Function CommonIconToolTipContents_RecastTimeParts.CommonIconToolTipContents_RecastTimeParts_C.SetRecastTime
	 */
	struct UCommonIconToolTipContents_RecastTimeParts_C_SetRecastTime_Params
	{
	public:
		float                                                      InRecastTime;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TKBK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommonIconToolTipContents_RecastTimeParts.CommonIconToolTipContents_RecastTimeParts_C.PreConstruct
	 */
	struct UCommonIconToolTipContents_RecastTimeParts_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonIconToolTipContents_RecastTimeParts.CommonIconToolTipContents_RecastTimeParts_C.SetTextColor
	 */
	struct UCommonIconToolTipContents_RecastTimeParts_C_SetTextColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonIconToolTipContents_RecastTimeParts.CommonIconToolTipContents_RecastTimeParts_C.ExecuteUbergraph_CommonIconToolTipContents_RecastTimeParts
	 */
	struct UCommonIconToolTipContents_RecastTimeParts_C_ExecuteUbergraph_CommonIconToolTipContents_RecastTimeParts_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
