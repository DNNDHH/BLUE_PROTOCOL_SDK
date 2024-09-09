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
	 * Function ImagineStackBResult.ImagineStackBResult_C.SetImagineType
	 */
	struct UImagineStackBResult_C_SetImagineType_Params
	{
	public:
		ESBImagineCategoryType                                     ImagineType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4B23[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ImagineStackBResult.ImagineStackBResult_C.SetPrevData
	 */
	struct UImagineStackBResult_C_SetPrevData_Params
	{
	public:
		struct FOwnItemInfo                                        OwnItemInfo;                                             // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ImagineStackBResult.ImagineStackBResult_C.ImageLoad
	 */
	struct UImagineStackBResult_C_ImageLoad_Params
	{	};

	/**
	 * Function ImagineStackBResult.ImagineStackBResult_C.UpdateImagineType
	 */
	struct UImagineStackBResult_C_UpdateImagineType_Params
	{	};

	/**
	 * Function ImagineStackBResult.ImagineStackBResult_C.UpdateStackBIcon
	 */
	struct UImagineStackBResult_C_UpdateStackBIcon_Params
	{	};

	/**
	 * Function ImagineStackBResult.ImagineStackBResult_C.Set Info
	 */
	struct UImagineStackBResult_C_SetInfo_Params
	{
	public:
		struct FOwnItemInfo                                        ItemData;                                                // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ImagineStackBResult.ImagineStackBResult_C.PreConstruct
	 */
	struct UImagineStackBResult_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ImagineStackBResult.ImagineStackBResult_C.Construct
	 */
	struct UImagineStackBResult_C_Construct_Params
	{	};

	/**
	 * Function ImagineStackBResult.ImagineStackBResult_C.ExecuteUbergraph_ImagineStackBResult
	 */
	struct UImagineStackBResult_C_ExecuteUbergraph_ImagineStackBResult_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
