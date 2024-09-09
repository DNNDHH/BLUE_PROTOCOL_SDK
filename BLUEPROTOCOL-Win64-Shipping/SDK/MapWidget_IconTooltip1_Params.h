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
	 * Function MapWidget_IconTooltip1.MapWidget_IconTooltip1_C.Set Text Color
	 */
	struct UMapWidget_IconTooltip1_C_SetTextColor_Params
	{
	public:
		struct FSlateColor                                         InColorAndOpacity;                                       // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MapWidget_IconTooltip1.MapWidget_IconTooltip1_C.SetTooltipTextureType
	 */
	struct UMapWidget_IconTooltip1_C_SetTooltipTextureType_Params
	{
	public:
		E_MapWidget_Tooltip1_TextureTypes                          InType;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_IconTooltip1.MapWidget_IconTooltip1_C.GetName
	 */
	struct UMapWidget_IconTooltip1_C_GetName_Params
	{
	public:
		class FText                                                OutName;                                                 // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function MapWidget_IconTooltip1.MapWidget_IconTooltip1_C.SetName
	 */
	struct UMapWidget_IconTooltip1_C_SetName_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
