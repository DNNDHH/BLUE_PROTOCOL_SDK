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
	 * Function ShopMenuDetailsOrnament.ShopMenuDetailsOrnament_C.Construct
	 */
	struct UShopMenuDetailsOrnament_C_Construct_Params
	{	};

	/**
	 * Function ShopMenuDetailsOrnament.ShopMenuDetailsOrnament_C.ShowDetails
	 */
	struct UShopMenuDetailsOrnament_C_ShowDetails_Params
	{	};

	/**
	 * Function ShopMenuDetailsOrnament.ShopMenuDetailsOrnament_C.CloseDetails
	 */
	struct UShopMenuDetailsOrnament_C_CloseDetails_Params
	{	};

	/**
	 * Function ShopMenuDetailsOrnament.ShopMenuDetailsOrnament_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
	 */
	struct UShopMenuDetailsOrnament_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function ShopMenuDetailsOrnament.ShopMenuDetailsOrnament_C.SetData
	 */
	struct UShopMenuDetailsOrnament_C_SetData_Params
	{
	public:
		int32_t                                                    InOrnamentId;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_URUF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InUniqueId;                                              // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsOrnament.ShopMenuDetailsOrnament_C.BndEvt__ShopMenuDetailsImagineMount_WBP_ShopMenuDetailsTags_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature
	 */
	struct UShopMenuDetailsOrnament_C_BndEvt__ShopMenuDetailsImagineMount_WBP_ShopMenuDetailsTags_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature_Params
	{	};

	/**
	 * Function ShopMenuDetailsOrnament.ShopMenuDetailsOrnament_C.ExecuteUbergraph_ShopMenuDetailsOrnament
	 */
	struct UShopMenuDetailsOrnament_C_ExecuteUbergraph_ShopMenuDetailsOrnament_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VBYF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ShopMenuDetailsOrnament.ShopMenuDetailsOrnament_C.OnClickZoomIn__DelegateSignature
	 */
	struct UShopMenuDetailsOrnament_C_OnClickZoomIn__DelegateSignature_Params
	{
	public:
		E_SBDetailsZoomIn                                          Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsOrnament.ShopMenuDetailsOrnament_C.OnEndCloseDetailAnimation__DelegateSignature
	 */
	struct UShopMenuDetailsOrnament_C_OnEndCloseDetailAnimation__DelegateSignature_Params
	{
	public:
		class UUserWidget*                                         InWidget;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
