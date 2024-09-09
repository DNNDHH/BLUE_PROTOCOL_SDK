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
	 * Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.ShowMessage
	 */
	struct UUMG_PhotoMode_UploadWindowMenu_C_ShowMessage_Params
	{
	public:
		class FName                                                InTextId;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.IsClickCheck
	 */
	struct UUMG_PhotoMode_UploadWindowMenu_C_IsClickCheck_Params
	{
	public:
		bool                                                       outIsClickOk;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LCKO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.ResetFaild
	 */
	struct UUMG_PhotoMode_UploadWindowMenu_C_ResetFaild_Params
	{	};

	/**
	 * Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.Reset
	 */
	struct UUMG_PhotoMode_UploadWindowMenu_C_Reset_Params
	{	};

	/**
	 * Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.GetSelectedImagePngData
	 */
	struct UUMG_PhotoMode_UploadWindowMenu_C_GetSelectedImagePngData_Params
	{
	public:
		TArray<unsigned char>                                      outImage_PNGData;                                        // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.Get Thumbnail Image List
	 */
	struct UUMG_PhotoMode_UploadWindowMenu_C_GetThumbnailImageList_Params
	{
	public:
		TArray<struct FSlateBrush>                                 outThumbnailImage;                                       // 0x0000(0x0010)  (Parm, OutParm)
		TArray<bool>                                               outReturnValue;                                          // 0x0010(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.OnClickedViewerButton
	 */
	struct UUMG_PhotoMode_UploadWindowMenu_C_OnClickedViewerButton_Params
	{
	public:
		int32_t                                                    inThumbnailNo;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.OnClickedFrameButton
	 */
	struct UUMG_PhotoMode_UploadWindowMenu_C_OnClickedFrameButton_Params
	{
	public:
		int32_t                                                    outThumnnailNo;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.DisableThumbnailButton
	 */
	struct UUMG_PhotoMode_UploadWindowMenu_C_DisableThumbnailButton_Params
	{	};

	/**
	 * Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.SetBtn
	 */
	struct UUMG_PhotoMode_UploadWindowMenu_C_SetBtn_Params
	{	};

	/**
	 * Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.Reset Thumbnail Button
	 */
	struct UUMG_PhotoMode_UploadWindowMenu_C_ResetThumbnailButton_Params
	{	};

	/**
	 * Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.SetThumbnailTexture2D
	 */
	struct UUMG_PhotoMode_UploadWindowMenu_C_SetThumbnailTexture2D_Params
	{	};

	/**
	 * Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.InitThumbnailData
	 */
	struct UUMG_PhotoMode_UploadWindowMenu_C_InitThumbnailData_Params
	{
	public:
		class USBPhotoModeImageComponent*                          PhotoModeImageComponent;                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.SetThumbnailTexture2D_Bp
	 */
	struct UUMG_PhotoMode_UploadWindowMenu_C_SetThumbnailTexture2D_Bp_Params
	{	};

	/**
	 * Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.Reset_Bp
	 */
	struct UUMG_PhotoMode_UploadWindowMenu_C_Reset_Bp_Params
	{	};

	/**
	 * Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.ViewerInit
	 */
	struct UUMG_PhotoMode_UploadWindowMenu_C_ViewerInit_Params
	{
	public:
		class UTexture2DDynamic*                                   InTexture;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    inOpenTextureNum;                                        // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.StartViewer
	 */
	struct UUMG_PhotoMode_UploadWindowMenu_C_StartViewer_Params
	{	};

	/**
	 * Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.WidgetAnimationEvt_ViewerPanelOpen_K2Node_WidgetAnimationEvent_1
	 */
	struct UUMG_PhotoMode_UploadWindowMenu_C_WidgetAnimationEvt_ViewerPanelOpen_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.CloseViewer
	 */
	struct UUMG_PhotoMode_UploadWindowMenu_C_CloseViewer_Params
	{	};

	/**
	 * Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.BndEvt__UMG_PhotoMode_UploadWindowMenu_PrevBtn_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_PhotoMode_UploadWindowMenu_C_BndEvt__UMG_PhotoMode_UploadWindowMenu_PrevBtn_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.BndEvt__UMG_PhotoMode_UploadWindowMenu_NextBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_PhotoMode_UploadWindowMenu_C_BndEvt__UMG_PhotoMode_UploadWindowMenu_NextBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.BndEvt__UMG_PhotoMode_UploadWindowMenu_ViewerCloseBtn_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature
	 */
	struct UUMG_PhotoMode_UploadWindowMenu_C_BndEvt__UMG_PhotoMode_UploadWindowMenu_ViewerCloseBtn_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.WidgetAnimationEvt_ViewerPanelClose_K2Node_WidgetAnimationEvent_2
	 */
	struct UUMG_PhotoMode_UploadWindowMenu_C_WidgetAnimationEvt_ViewerPanelClose_K2Node_WidgetAnimationEvent_2_Params
	{	};

	/**
	 * Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.WidgetAnimationEvt_ViewerPanelClose_K2Node_WidgetAnimationEvent_3
	 */
	struct UUMG_PhotoMode_UploadWindowMenu_C_WidgetAnimationEvt_ViewerPanelClose_K2Node_WidgetAnimationEvent_3_Params
	{	};

	/**
	 * Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.Construct
	 */
	struct UUMG_PhotoMode_UploadWindowMenu_C_Construct_Params
	{	};

	/**
	 * Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.OpenWindow
	 */
	struct UUMG_PhotoMode_UploadWindowMenu_C_OpenWindow_Params
	{	};

	/**
	 * Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.WidgetAnimationEvt_WindowOpenAnim_K2Node_WidgetAnimationEvent_1
	 */
	struct UUMG_PhotoMode_UploadWindowMenu_C_WidgetAnimationEvt_WindowOpenAnim_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.CloseWindow
	 */
	struct UUMG_PhotoMode_UploadWindowMenu_C_CloseWindow_Params
	{	};

	/**
	 * Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.WidgetAnimationEvt_WindowCloseAnim_K2Node_WidgetAnimationEvent_3
	 */
	struct UUMG_PhotoMode_UploadWindowMenu_C_WidgetAnimationEvt_WindowCloseAnim_K2Node_WidgetAnimationEvent_3_Params
	{	};

	/**
	 * Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.WidgetAnimationEvt_WindowCloseAnim_K2Node_WidgetAnimationEvent_4
	 */
	struct UUMG_PhotoMode_UploadWindowMenu_C_WidgetAnimationEvt_WindowCloseAnim_K2Node_WidgetAnimationEvent_4_Params
	{	};

	/**
	 * Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.BndEvt__UMG_PhotoMode_UploadWindowMenu_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
	 */
	struct UUMG_PhotoMode_UploadWindowMenu_C_BndEvt__UMG_PhotoMode_UploadWindowMenu_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.BndEvt__UMG_PhotoMode_UploadWindowMenu_CancelBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_PhotoMode_UploadWindowMenu_C_BndEvt__UMG_PhotoMode_UploadWindowMenu_CancelBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.BndEvt__UMG_PhotoMode_UploadWindowMenu_UploadBtn_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature
	 */
	struct UUMG_PhotoMode_UploadWindowMenu_C_BndEvt__UMG_PhotoMode_UploadWindowMenu_UploadBtn_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.Destruct
	 */
	struct UUMG_PhotoMode_UploadWindowMenu_C_Destruct_Params
	{	};

	/**
	 * Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.OnUploadPhotoModeImageDelegate
	 */
	struct UUMG_PhotoMode_UploadWindowMenu_C_OnUploadPhotoModeImageDelegate_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.WidgetAnimationEvt_WindowOpenAnim_K2Node_WidgetAnimationEvent_5
	 */
	struct UUMG_PhotoMode_UploadWindowMenu_C_WidgetAnimationEvt_WindowOpenAnim_K2Node_WidgetAnimationEvent_5_Params
	{	};

	/**
	 * Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.ExecuteUbergraph_UMG_PhotoMode_UploadWindowMenu
	 */
	struct UUMG_PhotoMode_UploadWindowMenu_C_ExecuteUbergraph_UMG_PhotoMode_UploadWindowMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.WindowUploadFaildFinishedEvent__DelegateSignature
	 */
	struct UUMG_PhotoMode_UploadWindowMenu_C_WindowUploadFaildFinishedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.WindowUploadStartEvent__DelegateSignature
	 */
	struct UUMG_PhotoMode_UploadWindowMenu_C_WindowUploadStartEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.WindowUploadFinishedEvent__DelegateSignature
	 */
	struct UUMG_PhotoMode_UploadWindowMenu_C_WindowUploadFinishedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.WindowCloseFinishedEvent__DelegateSignature
	 */
	struct UUMG_PhotoMode_UploadWindowMenu_C_WindowCloseFinishedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.WindowOpenFinishedEvent__DelegateSignature
	 */
	struct UUMG_PhotoMode_UploadWindowMenu_C_WindowOpenFinishedEvent__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
