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
	 * Function ShopMenuDetailsJesture.ShopMenuDetailsJesture_C.Construct
	 */
	struct UShopMenuDetailsJesture_C_Construct_Params
	{	};

	/**
	 * Function ShopMenuDetailsJesture.ShopMenuDetailsJesture_C.ShowDetails
	 */
	struct UShopMenuDetailsJesture_C_ShowDetails_Params
	{	};

	/**
	 * Function ShopMenuDetailsJesture.ShopMenuDetailsJesture_C.CloseDetails
	 */
	struct UShopMenuDetailsJesture_C_CloseDetails_Params
	{	};

	/**
	 * Function ShopMenuDetailsJesture.ShopMenuDetailsJesture_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
	 */
	struct UShopMenuDetailsJesture_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function ShopMenuDetailsJesture.ShopMenuDetailsJesture_C.SetData
	 */
	struct UShopMenuDetailsJesture_C_SetData_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsJesture.ShopMenuDetailsJesture_C.SetCaptureStudio
	 */
	struct UShopMenuDetailsJesture_C_SetCaptureStudio_Params
	{
	public:
		class ABP_PlayerSceneCapture2D_Studio_C*                   CaptureStudio;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsJesture.ShopMenuDetailsJesture_C.OnEmoteFinished
	 */
	struct UShopMenuDetailsJesture_C_OnEmoteFinished_Params
	{	};

	/**
	 * Function ShopMenuDetailsJesture.ShopMenuDetailsJesture_C.Destruct
	 */
	struct UShopMenuDetailsJesture_C_Destruct_Params
	{	};

	/**
	 * Function ShopMenuDetailsJesture.ShopMenuDetailsJesture_C.Event_OnVisibilityChanged
	 */
	struct UShopMenuDetailsJesture_C_Event_OnVisibilityChanged_Params
	{
	public:
		ESlateVisibility                                           InVisibility;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsJesture.ShopMenuDetailsJesture_C.ExecuteUbergraph_ShopMenuDetailsJesture
	 */
	struct UShopMenuDetailsJesture_C_ExecuteUbergraph_ShopMenuDetailsJesture_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y6NI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ShopMenuDetailsJesture.ShopMenuDetailsJesture_C.OnEndCloseDetailAnimation__DelegateSignature
	 */
	struct UShopMenuDetailsJesture_C_OnEndCloseDetailAnimation__DelegateSignature_Params
	{
	public:
		class UUserWidget*                                         InWidget;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
