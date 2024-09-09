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
	 * Function ImagineAssetView.ImagineAssetView_C.Set Diff Info
	 */
	struct UImagineAssetView_C_SetDiffInfo_Params
	{
	public:
		struct FOwnItemInfo                                        InDiffBase;                                              // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ImagineAssetView.ImagineAssetView_C.SetAbilityInfoVisibility
	 */
	struct UImagineAssetView_C_SetAbilityInfoVisibility_Params
	{
	public:
		bool                                                       VisibleAbilityInfo;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ImagineAssetView.ImagineAssetView_C.SetUpName
	 */
	struct UImagineAssetView_C_SetUpName_Params
	{	};

	/**
	 * Function ImagineAssetView.ImagineAssetView_C.SetInfo
	 */
	struct UImagineAssetView_C_SetInfo_Params
	{
	public:
		struct FOwnItemInfo                                        Info;                                                    // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ImagineAssetView.ImagineAssetView_C.Request_Image
	 */
	struct UImagineAssetView_C_Request_Image_Params
	{	};

	/**
	 * Function ImagineAssetView.ImagineAssetView_C.PreConstruct
	 */
	struct UImagineAssetView_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ImagineAssetView.ImagineAssetView_C.ExecuteUbergraph_ImagineAssetView
	 */
	struct UImagineAssetView_C_ExecuteUbergraph_ImagineAssetView_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
