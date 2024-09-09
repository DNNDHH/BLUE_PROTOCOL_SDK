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
	 * Function MapWidget_Cloud.MapWidget_Cloud_C.Construct
	 */
	struct UMapWidget_Cloud_C_Construct_Params
	{	};

	/**
	 * Function MapWidget_Cloud.MapWidget_Cloud_C.OnCloudReachedLeftEdgeOfTheScreen
	 */
	struct UMapWidget_Cloud_C_OnCloudReachedLeftEdgeOfTheScreen_Params
	{	};

	/**
	 * Function MapWidget_Cloud.MapWidget_Cloud_C.Destruct
	 */
	struct UMapWidget_Cloud_C_Destruct_Params
	{	};

	/**
	 * Function MapWidget_Cloud.MapWidget_Cloud_C.PreConstruct
	 */
	struct UMapWidget_Cloud_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapWidget_Cloud.MapWidget_Cloud_C.ExecuteUbergraph_MapWidget_Cloud
	 */
	struct UMapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
