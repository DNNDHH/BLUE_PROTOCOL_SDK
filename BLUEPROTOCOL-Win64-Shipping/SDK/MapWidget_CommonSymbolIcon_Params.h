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
	 * Function MapWidget_CommonSymbolIcon.MapWidget_CommonSymbolIcon_C.SetTooltipTextColor
	 */
	struct UMapWidget_CommonSymbolIcon_C_SetTooltipTextColor_Params
	{
	public:
		struct FSlateColor                                         InColorAndOpacity;                                       // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MapWidget_CommonSymbolIcon.MapWidget_CommonSymbolIcon_C.GetTooltipText
	 */
	struct UMapWidget_CommonSymbolIcon_C_GetTooltipText_Params
	{
	public:
		class FString                                              OutTooltipText;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_CommonSymbolIcon.MapWidget_CommonSymbolIcon_C.SetIconTextureBySymbolIconType
	 */
	struct UMapWidget_CommonSymbolIcon_C_SetIconTextureBySymbolIconType_Params
	{
	public:
		EMapSymbolIconType                                         InSymbolIconType;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W9TA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MapWidget_CommonSymbolIcon.MapWidget_CommonSymbolIcon_C.SetIconTexture
	 */
	struct UMapWidget_CommonSymbolIcon_C_SetIconTexture_Params
	{
	public:
		class UTexture2D*                                          InTexture;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_CommonSymbolIcon.MapWidget_CommonSymbolIcon_C.SetTextToTooltip
	 */
	struct UMapWidget_CommonSymbolIcon_C_SetTextToTooltip_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MapWidget_CommonSymbolIcon.MapWidget_CommonSymbolIcon_C.SetTooltipEnable
	 */
	struct UMapWidget_CommonSymbolIcon_C_SetTooltipEnable_Params
	{
	public:
		bool                                                       IsEnable;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapWidget_CommonSymbolIcon.MapWidget_CommonSymbolIcon_C.GetToolTipWidget_1
	 */
	struct UMapWidget_CommonSymbolIcon_C_GetToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_CommonSymbolIcon.MapWidget_CommonSymbolIcon_C.Construct
	 */
	struct UMapWidget_CommonSymbolIcon_C_Construct_Params
	{	};

	/**
	 * Function MapWidget_CommonSymbolIcon.MapWidget_CommonSymbolIcon_C.PlayPublicDungeonAnimation
	 */
	struct UMapWidget_CommonSymbolIcon_C_PlayPublicDungeonAnimation_Params
	{	};

	/**
	 * Function MapWidget_CommonSymbolIcon.MapWidget_CommonSymbolIcon_C.ExecuteUbergraph_MapWidget_CommonSymbolIcon
	 */
	struct UMapWidget_CommonSymbolIcon_C_ExecuteUbergraph_MapWidget_CommonSymbolIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GSS4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
