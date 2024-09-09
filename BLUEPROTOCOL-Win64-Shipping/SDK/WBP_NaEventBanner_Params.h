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
	 * Function WBP_NaEventBanner.WBP_NaEventBanner_C.GetBannerTexture
	 */
	struct UWBP_NaEventBanner_C_GetBannerTexture_Params
	{
	public:
		class FName                                                ID;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7DOD[0x28];                                  // 0x0008(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_NaEventBanner.WBP_NaEventBanner_C.OnLoaded_64FD5F4D481E2790866B238F3E237347
	 */
	struct UWBP_NaEventBanner_C_OnLoaded_64FD5F4D481E2790866B238F3E237347_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_NaEventBanner.WBP_NaEventBanner_C.SetData
	 */
	struct UWBP_NaEventBanner_C_SetData_Params
	{
	public:
		class FName                                                BannerId;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                UploadId;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_NaEventBanner.WBP_NaEventBanner_C.LoadBannerImage
	 */
	struct UWBP_NaEventBanner_C_LoadBannerImage_Params
	{	};

	/**
	 * Function WBP_NaEventBanner.WBP_NaEventBanner_C.SetDataByEventId
	 */
	struct UWBP_NaEventBanner_C_SetDataByEventId_Params
	{
	public:
		int32_t                                                    EvemtId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_NaEventBanner.WBP_NaEventBanner_C.ExecuteUbergraph_WBP_NaEventBanner
	 */
	struct UWBP_NaEventBanner_C_ExecuteUbergraph_WBP_NaEventBanner_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_NaEventBanner.WBP_NaEventBanner_C.OnClicked__DelegateSignature
	 */
	struct UWBP_NaEventBanner_C_OnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
