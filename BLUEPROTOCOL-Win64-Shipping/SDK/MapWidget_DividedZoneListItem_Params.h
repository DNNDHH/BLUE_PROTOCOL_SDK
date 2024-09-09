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
	 * Function MapWidget_DividedZoneListItem.MapWidget_DividedZoneListItem_C.SetSelected
	 */
	struct UMapWidget_DividedZoneListItem_C_SetSelected_Params
	{
	public:
		bool                                                       InIsSelected;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CN62[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MapWidget_DividedZoneListItem.MapWidget_DividedZoneListItem_C.SetIsEnable
	 */
	struct UMapWidget_DividedZoneListItem_C_SetIsEnable_Params
	{
	public:
		bool                                                       InIsSelectable;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapWidget_DividedZoneListItem.MapWidget_DividedZoneListItem_C.Setup
	 */
	struct UMapWidget_DividedZoneListItem_C_Setup_Params
	{
	public:
		class FString                                              InDividedZoneId;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_DividedZoneListItem.MapWidget_DividedZoneListItem_C.PreConstruct
	 */
	struct UMapWidget_DividedZoneListItem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapWidget_DividedZoneListItem.MapWidget_DividedZoneListItem_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMapWidget_DividedZoneListItem_C_BndEvt__Btn01_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MapWidget_DividedZoneListItem.MapWidget_DividedZoneListItem_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UMapWidget_DividedZoneListItem_C_BndEvt__Btn01_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MapWidget_DividedZoneListItem.MapWidget_DividedZoneListItem_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UMapWidget_DividedZoneListItem_C_BndEvt__Btn01_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MapWidget_DividedZoneListItem.MapWidget_DividedZoneListItem_C.ExecuteUbergraph_MapWidget_DividedZoneListItem
	 */
	struct UMapWidget_DividedZoneListItem_C_ExecuteUbergraph_MapWidget_DividedZoneListItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_DividedZoneListItem.MapWidget_DividedZoneListItem_C.OnClicked__DelegateSignature
	 */
	struct UMapWidget_DividedZoneListItem_C_OnClicked__DelegateSignature_Params
	{
	public:
		class UMapWidget_DividedZoneListItem_C*                    InSelf;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              InDividedZoneId;                                         // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
