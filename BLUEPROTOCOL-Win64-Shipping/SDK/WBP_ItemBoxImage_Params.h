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
	 * Function WBP_ItemBoxImage.WBP_ItemBoxImage_C.OnLoaded_753F2A8F4CEFA9688FDB97A44A552509
	 */
	struct UWBP_ItemBoxImage_C_OnLoaded_753F2A8F4CEFA9688FDB97A44A552509_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ItemBoxImage.WBP_ItemBoxImage_C.IconLoadRequest
	 */
	struct UWBP_ItemBoxImage_C_IconLoadRequest_Params
	{	};

	/**
	 * Function WBP_ItemBoxImage.WBP_ItemBoxImage_C.IconLoadStart
	 */
	struct UWBP_ItemBoxImage_C_IconLoadStart_Params
	{	};

	/**
	 * Function WBP_ItemBoxImage.WBP_ItemBoxImage_C.InitIconImage
	 */
	struct UWBP_ItemBoxImage_C_InitIconImage_Params
	{
	public:
		int32_t                                                    InItemID;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemType                                                  InItemType;                                              // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ItemBoxImage.WBP_ItemBoxImage_C.ExecuteUbergraph_WBP_ItemBoxImage
	 */
	struct UWBP_ItemBoxImage_C_ExecuteUbergraph_WBP_ItemBoxImage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
