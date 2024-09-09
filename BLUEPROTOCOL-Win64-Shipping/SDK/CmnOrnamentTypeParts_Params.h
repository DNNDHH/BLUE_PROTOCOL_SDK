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
	 * Function CmnOrnamentTypeParts.CmnOrnamentTypeParts_C.SetBodyText
	 */
	struct UCmnOrnamentTypeParts_C_SetBodyText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CmnOrnamentTypeParts.CmnOrnamentTypeParts_C.SetTitleTextWidth
	 */
	struct UCmnOrnamentTypeParts_C_SetTitleTextWidth_Params
	{
	public:
		float                                                      InWidth;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CmnOrnamentTypeParts.CmnOrnamentTypeParts_C.SetPaddingLeft
	 */
	struct UCmnOrnamentTypeParts_C_SetPaddingLeft_Params
	{
	public:
		float                                                      InPaddingLeft;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1M78[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CmnOrnamentTypeParts.CmnOrnamentTypeParts_C.PreConstruct
	 */
	struct UCmnOrnamentTypeParts_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CmnOrnamentTypeParts.CmnOrnamentTypeParts_C.ExecuteUbergraph_CmnOrnamentTypeParts
	 */
	struct UCmnOrnamentTypeParts_C_ExecuteUbergraph_CmnOrnamentTypeParts_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
