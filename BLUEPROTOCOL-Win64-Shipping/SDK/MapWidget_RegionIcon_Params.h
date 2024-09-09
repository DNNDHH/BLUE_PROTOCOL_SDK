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
	 * Function MapWidget_RegionIcon.MapWidget_RegionIcon_C.SetRegion
	 */
	struct UMapWidget_RegionIcon_C_SetRegion_Params
	{
	public:
		class FString                                              InRegionMapId;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_RegionIcon.MapWidget_RegionIcon_C.GetToolTipWidget_1
	 */
	struct UMapWidget_RegionIcon_C_GetToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_RegionIcon.MapWidget_RegionIcon_C.Construct
	 */
	struct UMapWidget_RegionIcon_C_Construct_Params
	{	};

	/**
	 * Function MapWidget_RegionIcon.MapWidget_RegionIcon_C.BndEvt__Button_WarpPoint_K2Node_ComponentBoundEvent_179_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMapWidget_RegionIcon_C_BndEvt__Button_WarpPoint_K2Node_ComponentBoundEvent_179_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MapWidget_RegionIcon.MapWidget_RegionIcon_C.ExecuteUbergraph_MapWidget_RegionIcon
	 */
	struct UMapWidget_RegionIcon_C_ExecuteUbergraph_MapWidget_RegionIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0D3A[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MapWidget_RegionIcon.MapWidget_RegionIcon_C.OnPressed__DelegateSignature
	 */
	struct UMapWidget_RegionIcon_C_OnPressed__DelegateSignature_Params
	{
	public:
		class FString                                              InRegionMapId;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
