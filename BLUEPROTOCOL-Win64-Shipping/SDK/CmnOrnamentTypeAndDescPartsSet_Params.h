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
	 * Function CmnOrnamentTypeAndDescPartsSet.CmnOrnamentTypeAndDescPartsSet_C.SetDescText
	 */
	struct UCmnOrnamentTypeAndDescPartsSet_C_SetDescText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CmnOrnamentTypeAndDescPartsSet.CmnOrnamentTypeAndDescPartsSet_C.SetOrnamentTypeTextId
	 */
	struct UCmnOrnamentTypeAndDescPartsSet_C_SetOrnamentTypeTextId_Params
	{
	public:
		int32_t                                                    InTextId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M4G6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CmnOrnamentTypeAndDescPartsSet.CmnOrnamentTypeAndDescPartsSet_C.SetMenuTypeTextId
	 */
	struct UCmnOrnamentTypeAndDescPartsSet_C_SetMenuTypeTextId_Params
	{
	public:
		int32_t                                                    InTextId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_92IO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CmnOrnamentTypeAndDescPartsSet.CmnOrnamentTypeAndDescPartsSet_C.SetPlacementTypeTextId
	 */
	struct UCmnOrnamentTypeAndDescPartsSet_C_SetPlacementTypeTextId_Params
	{
	public:
		int32_t                                                    InTextId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P5TP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CmnOrnamentTypeAndDescPartsSet.CmnOrnamentTypeAndDescPartsSet_C.SetupByMasterData
	 */
	struct UCmnOrnamentTypeAndDescPartsSet_C_SetupByMasterData_Params
	{
	public:
		struct FSBMasterOrnament                                   InOrnamentMasterData;                                    // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CmnOrnamentTypeAndDescPartsSet.CmnOrnamentTypeAndDescPartsSet_C.SetTitleTextWidth
	 */
	struct UCmnOrnamentTypeAndDescPartsSet_C_SetTitleTextWidth_Params
	{
	public:
		float                                                      InWidth;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FOIT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CmnOrnamentTypeAndDescPartsSet.CmnOrnamentTypeAndDescPartsSet_C.SetPaddingLeft
	 */
	struct UCmnOrnamentTypeAndDescPartsSet_C_SetPaddingLeft_Params
	{
	public:
		float                                                      InPaddingLeft;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9DAJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CmnOrnamentTypeAndDescPartsSet.CmnOrnamentTypeAndDescPartsSet_C.PreConstruct
	 */
	struct UCmnOrnamentTypeAndDescPartsSet_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CmnOrnamentTypeAndDescPartsSet.CmnOrnamentTypeAndDescPartsSet_C.ExecuteUbergraph_CmnOrnamentTypeAndDescPartsSet
	 */
	struct UCmnOrnamentTypeAndDescPartsSet_C_ExecuteUbergraph_CmnOrnamentTypeAndDescPartsSet_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
