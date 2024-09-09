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
	 * Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.IconStateCheck
	 */
	struct UMapWidget_TimeSymbolIcon_C_IconStateCheck_Params
	{	};

	/**
	 * Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.SetTimeData
	 */
	struct UMapWidget_TimeSymbolIcon_C_SetTimeData_Params
	{
	public:
		class FString                                              TermId;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.GetTooltipText
	 */
	struct UMapWidget_TimeSymbolIcon_C_GetTooltipText_Params
	{
	public:
		class FString                                              OutTooltipText;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.SetIconTextureBySymbolIconType
	 */
	struct UMapWidget_TimeSymbolIcon_C_SetIconTextureBySymbolIconType_Params
	{
	public:
		EMapSymbolIconType                                         InSymbolIconType;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0M69[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.SetIconTexture
	 */
	struct UMapWidget_TimeSymbolIcon_C_SetIconTexture_Params
	{
	public:
		class UTexture2D*                                          InTexture;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.SetTextToTooltip
	 */
	struct UMapWidget_TimeSymbolIcon_C_SetTextToTooltip_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.SetTooltipEnable
	 */
	struct UMapWidget_TimeSymbolIcon_C_SetTooltipEnable_Params
	{
	public:
		bool                                                       IsEnable;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.GetToolTipWidget_1
	 */
	struct UMapWidget_TimeSymbolIcon_C_GetToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.Construct
	 */
	struct UMapWidget_TimeSymbolIcon_C_Construct_Params
	{	};

	/**
	 * Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.Destruct
	 */
	struct UMapWidget_TimeSymbolIcon_C_Destruct_Params
	{	};

	/**
	 * Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.TimerEvent_IconCheck
	 */
	struct UMapWidget_TimeSymbolIcon_C_TimerEvent_IconCheck_Params
	{	};

	/**
	 * Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.ExecuteUbergraph_MapWidget_TimeSymbolIcon
	 */
	struct UMapWidget_TimeSymbolIcon_C_ExecuteUbergraph_MapWidget_TimeSymbolIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_TimeSymbolIcon.MapWidget_TimeSymbolIcon_C.OnOpenTimeEnd__DelegateSignature
	 */
	struct UMapWidget_TimeSymbolIcon_C_OnOpenTimeEnd__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UZYA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMapWidget_TimeSymbolIcon_C*                         Widget;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
