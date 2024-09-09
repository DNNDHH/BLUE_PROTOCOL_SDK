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
	 * Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.GetViewCount
	 */
	struct UMapWidget_VisitedMapList2_C_GetViewCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.ChangeFaceImageTexture
	 */
	struct UMapWidget_VisitedMapList2_C_ChangeFaceImageTexture_Params
	{
	public:
		class UTexture2DDynamic*                                   Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.PageChange
	 */
	struct UMapWidget_VisitedMapList2_C_PageChange_Params
	{
	public:
		int32_t                                                    Page;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.Setup
	 */
	struct UMapWidget_VisitedMapList2_C_Setup_Params
	{
	public:
		TArray<class FString>                                      InMapIds;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FString                                              InCurrentId;                                             // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.ResetListItem
	 */
	struct UMapWidget_VisitedMapList2_C_ResetListItem_Params
	{	};

	/**
	 * Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.SetupListItem
	 */
	struct UMapWidget_VisitedMapList2_C_SetupListItem_Params
	{	};

	/**
	 * Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.Close
	 */
	struct UMapWidget_VisitedMapList2_C_Close_Params
	{	};

	/**
	 * Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.Open
	 */
	struct UMapWidget_VisitedMapList2_C_Open_Params
	{	};

	/**
	 * Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.BindListItem
	 */
	struct UMapWidget_VisitedMapList2_C_BindListItem_Params
	{
	public:
		class UMapWidget_VisitedMapList2Item_C*                    Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.UnbindListItem
	 */
	struct UMapWidget_VisitedMapList2_C_UnbindListItem_Params
	{
	public:
		class UMapWidget_VisitedMapList2Item_C*                    Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.OnListItemClickedEvent
	 */
	struct UMapWidget_VisitedMapList2_C_OnListItemClickedEvent_Params
	{
	public:
		class FString                                              InMapId;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.Destruct
	 */
	struct UMapWidget_VisitedMapList2_C_Destruct_Params
	{	};

	/**
	 * Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.OnPress_Cancel
	 */
	struct UMapWidget_VisitedMapList2_C_OnPress_Cancel_Params
	{	};

	/**
	 * Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.BndEvt__MapWidget_VisitedMapList2_BtnScreen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMapWidget_VisitedMapList2_C_BndEvt__MapWidget_VisitedMapList2_BtnScreen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.OnAnimationFinished
	 */
	struct UMapWidget_VisitedMapList2_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.BndEvt__MapWidget_VisitedMapList2_BasicPager_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature
	 */
	struct UMapWidget_VisitedMapList2_C_BndEvt__MapWidget_VisitedMapList2_BasicPager_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature_Params
	{
	public:
		int32_t                                                    Page;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.Construct
	 */
	struct UMapWidget_VisitedMapList2_C_Construct_Params
	{	};

	/**
	 * Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.ExecuteUbergraph_MapWidget_VisitedMapList2
	 */
	struct UMapWidget_VisitedMapList2_C_ExecuteUbergraph_MapWidget_VisitedMapList2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.OnClose__DelegateSignature
	 */
	struct UMapWidget_VisitedMapList2_C_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function MapWidget_VisitedMapList2.MapWidget_VisitedMapList2_C.OnListItemClicked__DelegateSignature
	 */
	struct UMapWidget_VisitedMapList2_C_OnListItemClicked__DelegateSignature_Params
	{
	public:
		class FString                                              InMapId;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
