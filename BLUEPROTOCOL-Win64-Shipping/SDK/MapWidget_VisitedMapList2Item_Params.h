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
	 * Function MapWidget_VisitedMapList2Item.MapWidget_VisitedMapList2Item_C.Get_ListButton_ToolTipWidget_1
	 */
	struct UMapWidget_VisitedMapList2Item_C_Get_ListButton_ToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_VisitedMapList2Item.MapWidget_VisitedMapList2Item_C.Get Map Zone String
	 */
	struct UMapWidget_VisitedMapList2Item_C_GetMapZoneString_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7VOW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              OutString;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_VisitedMapList2Item.MapWidget_VisitedMapList2Item_C.ChangeFaceIconTexture
	 */
	struct UMapWidget_VisitedMapList2Item_C_ChangeFaceIconTexture_Params
	{
	public:
		class UTexture2DDynamic*                                   Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_VisitedMapList2Item.MapWidget_VisitedMapList2Item_C.Setup
	 */
	struct UMapWidget_VisitedMapList2Item_C_Setup_Params
	{
	public:
		class FString                                              InMapId;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       InCurrentMap;                                            // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BKWX[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MapWidget_VisitedMapList2Item.MapWidget_VisitedMapList2Item_C.BndEvt__MapWidget_VisitedMapList2Item_ListButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMapWidget_VisitedMapList2Item_C_BndEvt__MapWidget_VisitedMapList2Item_ListButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MapWidget_VisitedMapList2Item.MapWidget_VisitedMapList2Item_C.ExecuteUbergraph_MapWidget_VisitedMapList2Item
	 */
	struct UMapWidget_VisitedMapList2Item_C_ExecuteUbergraph_MapWidget_VisitedMapList2Item_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_VisitedMapList2Item.MapWidget_VisitedMapList2Item_C.OnClicked__DelegateSignature
	 */
	struct UMapWidget_VisitedMapList2Item_C_OnClicked__DelegateSignature_Params
	{
	public:
		class FString                                              InMapId;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
