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
	 * Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.SetImagineTypeViewWidth
	 */
	struct UImagineAssetViewStatus_C_SetImagineTypeViewWidth_Params
	{
	public:
		float                                                      Width;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.SetEnableFlatStyle
	 */
	struct UImagineAssetViewStatus_C_SetEnableFlatStyle_Params
	{
	public:
		bool                                                       bEnableFlatStyle;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.SetupImagineAbilities
	 */
	struct UImagineAssetViewStatus_C_SetupImagineAbilities_Params
	{
	public:
		struct FOwnItemInfo                                        InputPin;                                                // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.SetDiffVisible
	 */
	struct UImagineAssetViewStatus_C_SetDiffVisible_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.SetImagineTypeVisibility
	 */
	struct UImagineAssetViewStatus_C_SetImagineTypeVisibility_Params
	{	};

	/**
	 * Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.UpdateDiffParamImagine
	 */
	struct UImagineAssetViewStatus_C_UpdateDiffParamImagine_Params
	{	};

	/**
	 * Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.SetDiffBase
	 */
	struct UImagineAssetViewStatus_C_SetDiffBase_Params
	{
	public:
		struct FOwnItemInfo                                        InDiffBase;                                              // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.SetAbilityInfoVisibility
	 */
	struct UImagineAssetViewStatus_C_SetAbilityInfoVisibility_Params
	{
	public:
		bool                                                       VisibleAbilityInfo;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.SetUpName
	 */
	struct UImagineAssetViewStatus_C_SetUpName_Params
	{	};

	/**
	 * Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.SetupParameterImagine
	 */
	struct UImagineAssetViewStatus_C_SetupParameterImagine_Params
	{
	public:
		struct FOwnItemInfo                                        InItemInfo;                                              // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ImagineAssetViewStatus.ImagineAssetViewStatus_C.SetInfo
	 */
	struct UImagineAssetViewStatus_C_SetInfo_Params
	{
	public:
		struct FOwnItemInfo                                        Info;                                                    // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
