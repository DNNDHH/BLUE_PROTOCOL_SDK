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
	 * Function MapWidget_DividedZoneList.MapWidget_DividedZoneList_C.Setup
	 */
	struct UMapWidget_DividedZoneList_C_Setup_Params
	{
	public:
		class FString                                              InMapId;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		TArray<class FString>                                      InVisitedZoneIds;                                        // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MapWidget_DividedZoneList.MapWidget_DividedZoneList_C.PreConstruct
	 */
	struct UMapWidget_DividedZoneList_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapWidget_DividedZoneList.MapWidget_DividedZoneList_C.Destruct
	 */
	struct UMapWidget_DividedZoneList_C_Destruct_Params
	{	};

	/**
	 * Function MapWidget_DividedZoneList.MapWidget_DividedZoneList_C.OnListItemClickedEvent
	 */
	struct UMapWidget_DividedZoneList_C_OnListItemClickedEvent_Params
	{
	public:
		class UMapWidget_DividedZoneListItem_C*                    InSelf;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              InDividedZoneId;                                         // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_DividedZoneList.MapWidget_DividedZoneList_C.ExecuteUbergraph_MapWidget_DividedZoneList
	 */
	struct UMapWidget_DividedZoneList_C_ExecuteUbergraph_MapWidget_DividedZoneList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_DividedZoneList.MapWidget_DividedZoneList_C.OnListItemClicked__DelegateSignature
	 */
	struct UMapWidget_DividedZoneList_C_OnListItemClicked__DelegateSignature_Params
	{
	public:
		class FString                                              InDividedZoneId;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
