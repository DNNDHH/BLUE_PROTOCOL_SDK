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
	 * Function ShopMenuDetailsImagineMount.ShopMenuDetailsImagineMount_C.Construct
	 */
	struct UShopMenuDetailsImagineMount_C_Construct_Params
	{	};

	/**
	 * Function ShopMenuDetailsImagineMount.ShopMenuDetailsImagineMount_C.ShowDetails
	 */
	struct UShopMenuDetailsImagineMount_C_ShowDetails_Params
	{	};

	/**
	 * Function ShopMenuDetailsImagineMount.ShopMenuDetailsImagineMount_C.CloseDetails
	 */
	struct UShopMenuDetailsImagineMount_C_CloseDetails_Params
	{	};

	/**
	 * Function ShopMenuDetailsImagineMount.ShopMenuDetailsImagineMount_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
	 */
	struct UShopMenuDetailsImagineMount_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function ShopMenuDetailsImagineMount.ShopMenuDetailsImagineMount_C.SetData
	 */
	struct UShopMenuDetailsImagineMount_C_SetData_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Amount;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AmountMin;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I1B9[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              UniqueId;                                                // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsImagineMount.ShopMenuDetailsImagineMount_C.BndEvt__ShopMenuDetailsImagineMount_WBP_ShopMenuDetailsTags_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature
	 */
	struct UShopMenuDetailsImagineMount_C_BndEvt__ShopMenuDetailsImagineMount_WBP_ShopMenuDetailsTags_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature_Params
	{	};

	/**
	 * Function ShopMenuDetailsImagineMount.ShopMenuDetailsImagineMount_C.ExecuteUbergraph_ShopMenuDetailsImagineMount
	 */
	struct UShopMenuDetailsImagineMount_C_ExecuteUbergraph_ShopMenuDetailsImagineMount_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M5V5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ShopMenuDetailsImagineMount.ShopMenuDetailsImagineMount_C.OnClickZoomIn__DelegateSignature
	 */
	struct UShopMenuDetailsImagineMount_C_OnClickZoomIn__DelegateSignature_Params
	{
	public:
		E_SBDetailsZoomIn                                          Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsImagineMount.ShopMenuDetailsImagineMount_C.OnEndCloseDetailAnimation__DelegateSignature
	 */
	struct UShopMenuDetailsImagineMount_C_OnEndCloseDetailAnimation__DelegateSignature_Params
	{
	public:
		class UUserWidget*                                         InWidget;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
