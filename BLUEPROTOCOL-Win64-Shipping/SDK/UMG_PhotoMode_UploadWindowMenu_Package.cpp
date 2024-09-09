/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.ShowMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InTextId                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoMode_UploadWindowMenu_C::ShowMessage(const class FName& InTextId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.ShowMessage");
		
		UUMG_PhotoMode_UploadWindowMenu_C_ShowMessage_Params params {};
		params.InTextId = InTextId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.IsClickCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               outIsClickOk                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_PhotoMode_UploadWindowMenu_C::IsClickCheck(bool* outIsClickOk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.IsClickCheck");
		
		UUMG_PhotoMode_UploadWindowMenu_C_IsClickCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outIsClickOk != nullptr)
			*outIsClickOk = params.outIsClickOk;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.ResetFaild
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoMode_UploadWindowMenu_C::ResetFaild()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.ResetFaild");
		
		UUMG_PhotoMode_UploadWindowMenu_C_ResetFaild_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.Reset
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoMode_UploadWindowMenu_C::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.Reset");
		
		UUMG_PhotoMode_UploadWindowMenu_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.GetSelectedImagePngData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              outImage_PNGData                                           (Parm, OutParm)
	 */
	void UUMG_PhotoMode_UploadWindowMenu_C::GetSelectedImagePngData(TArray<unsigned char>* outImage_PNGData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.GetSelectedImagePngData");
		
		UUMG_PhotoMode_UploadWindowMenu_C_GetSelectedImagePngData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outImage_PNGData != nullptr)
			*outImage_PNGData = params.outImage_PNGData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.Get Thumbnail Image List
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSlateBrush>                         outThumbnailImage                                          (Parm, OutParm)
	 * 		TArray<bool>                                       outReturnValue                                             (Parm, OutParm)
	 */
	void UUMG_PhotoMode_UploadWindowMenu_C::GetThumbnailImageList(TArray<struct FSlateBrush>* outThumbnailImage, TArray<bool>* outReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.Get Thumbnail Image List");
		
		UUMG_PhotoMode_UploadWindowMenu_C_GetThumbnailImageList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outThumbnailImage != nullptr)
			*outThumbnailImage = params.outThumbnailImage;
		if (outReturnValue != nullptr)
			*outReturnValue = params.outReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.OnClickedViewerButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            inThumbnailNo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoMode_UploadWindowMenu_C::OnClickedViewerButton(int32_t inThumbnailNo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.OnClickedViewerButton");
		
		UUMG_PhotoMode_UploadWindowMenu_C_OnClickedViewerButton_Params params {};
		params.inThumbnailNo = inThumbnailNo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.OnClickedFrameButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            outThumnnailNo                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoMode_UploadWindowMenu_C::OnClickedFrameButton(int32_t outThumnnailNo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.OnClickedFrameButton");
		
		UUMG_PhotoMode_UploadWindowMenu_C_OnClickedFrameButton_Params params {};
		params.outThumnnailNo = outThumnnailNo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.DisableThumbnailButton
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoMode_UploadWindowMenu_C::DisableThumbnailButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.DisableThumbnailButton");
		
		UUMG_PhotoMode_UploadWindowMenu_C_DisableThumbnailButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.SetBtn
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoMode_UploadWindowMenu_C::SetBtn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.SetBtn");
		
		UUMG_PhotoMode_UploadWindowMenu_C_SetBtn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.Reset Thumbnail Button
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoMode_UploadWindowMenu_C::ResetThumbnailButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.Reset Thumbnail Button");
		
		UUMG_PhotoMode_UploadWindowMenu_C_ResetThumbnailButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.SetThumbnailTexture2D
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoMode_UploadWindowMenu_C::SetThumbnailTexture2D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.SetThumbnailTexture2D");
		
		UUMG_PhotoMode_UploadWindowMenu_C_SetThumbnailTexture2D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.InitThumbnailData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPhotoModeImageComponent*                  PhotoModeImageComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoMode_UploadWindowMenu_C::InitThumbnailData(class USBPhotoModeImageComponent* PhotoModeImageComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.InitThumbnailData");
		
		UUMG_PhotoMode_UploadWindowMenu_C_InitThumbnailData_Params params {};
		params.PhotoModeImageComponent = PhotoModeImageComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.SetThumbnailTexture2D_Bp
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoMode_UploadWindowMenu_C::SetThumbnailTexture2D_Bp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.SetThumbnailTexture2D_Bp");
		
		UUMG_PhotoMode_UploadWindowMenu_C_SetThumbnailTexture2D_Bp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.Reset_Bp
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoMode_UploadWindowMenu_C::Reset_Bp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.Reset_Bp");
		
		UUMG_PhotoMode_UploadWindowMenu_C_Reset_Bp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.ViewerInit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2DDynamic*                           InTexture                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            inOpenTextureNum                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoMode_UploadWindowMenu_C::ViewerInit(class UTexture2DDynamic* InTexture, int32_t inOpenTextureNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.ViewerInit");
		
		UUMG_PhotoMode_UploadWindowMenu_C_ViewerInit_Params params {};
		params.InTexture = InTexture;
		params.inOpenTextureNum = inOpenTextureNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.StartViewer
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoMode_UploadWindowMenu_C::StartViewer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.StartViewer");
		
		UUMG_PhotoMode_UploadWindowMenu_C_StartViewer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.WidgetAnimationEvt_ViewerPanelOpen_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoMode_UploadWindowMenu_C::WidgetAnimationEvt_ViewerPanelOpen_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.WidgetAnimationEvt_ViewerPanelOpen_K2Node_WidgetAnimationEvent_1");
		
		UUMG_PhotoMode_UploadWindowMenu_C_WidgetAnimationEvt_ViewerPanelOpen_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.CloseViewer
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoMode_UploadWindowMenu_C::CloseViewer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.CloseViewer");
		
		UUMG_PhotoMode_UploadWindowMenu_C_CloseViewer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.BndEvt__UMG_PhotoMode_UploadWindowMenu_PrevBtn_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoMode_UploadWindowMenu_C::BndEvt__UMG_PhotoMode_UploadWindowMenu_PrevBtn_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.BndEvt__UMG_PhotoMode_UploadWindowMenu_PrevBtn_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_PhotoMode_UploadWindowMenu_C_BndEvt__UMG_PhotoMode_UploadWindowMenu_PrevBtn_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.BndEvt__UMG_PhotoMode_UploadWindowMenu_NextBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoMode_UploadWindowMenu_C::BndEvt__UMG_PhotoMode_UploadWindowMenu_NextBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.BndEvt__UMG_PhotoMode_UploadWindowMenu_NextBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_PhotoMode_UploadWindowMenu_C_BndEvt__UMG_PhotoMode_UploadWindowMenu_NextBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.BndEvt__UMG_PhotoMode_UploadWindowMenu_ViewerCloseBtn_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoMode_UploadWindowMenu_C::BndEvt__UMG_PhotoMode_UploadWindowMenu_ViewerCloseBtn_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.BndEvt__UMG_PhotoMode_UploadWindowMenu_ViewerCloseBtn_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature");
		
		UUMG_PhotoMode_UploadWindowMenu_C_BndEvt__UMG_PhotoMode_UploadWindowMenu_ViewerCloseBtn_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.WidgetAnimationEvt_ViewerPanelClose_K2Node_WidgetAnimationEvent_2
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoMode_UploadWindowMenu_C::WidgetAnimationEvt_ViewerPanelClose_K2Node_WidgetAnimationEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.WidgetAnimationEvt_ViewerPanelClose_K2Node_WidgetAnimationEvent_2");
		
		UUMG_PhotoMode_UploadWindowMenu_C_WidgetAnimationEvt_ViewerPanelClose_K2Node_WidgetAnimationEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.WidgetAnimationEvt_ViewerPanelClose_K2Node_WidgetAnimationEvent_3
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoMode_UploadWindowMenu_C::WidgetAnimationEvt_ViewerPanelClose_K2Node_WidgetAnimationEvent_3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.WidgetAnimationEvt_ViewerPanelClose_K2Node_WidgetAnimationEvent_3");
		
		UUMG_PhotoMode_UploadWindowMenu_C_WidgetAnimationEvt_ViewerPanelClose_K2Node_WidgetAnimationEvent_3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoMode_UploadWindowMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.Construct");
		
		UUMG_PhotoMode_UploadWindowMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.OpenWindow
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoMode_UploadWindowMenu_C::OpenWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.OpenWindow");
		
		UUMG_PhotoMode_UploadWindowMenu_C_OpenWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.WidgetAnimationEvt_WindowOpenAnim_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoMode_UploadWindowMenu_C::WidgetAnimationEvt_WindowOpenAnim_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.WidgetAnimationEvt_WindowOpenAnim_K2Node_WidgetAnimationEvent_1");
		
		UUMG_PhotoMode_UploadWindowMenu_C_WidgetAnimationEvt_WindowOpenAnim_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.CloseWindow
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoMode_UploadWindowMenu_C::CloseWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.CloseWindow");
		
		UUMG_PhotoMode_UploadWindowMenu_C_CloseWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.WidgetAnimationEvt_WindowCloseAnim_K2Node_WidgetAnimationEvent_3
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoMode_UploadWindowMenu_C::WidgetAnimationEvt_WindowCloseAnim_K2Node_WidgetAnimationEvent_3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.WidgetAnimationEvt_WindowCloseAnim_K2Node_WidgetAnimationEvent_3");
		
		UUMG_PhotoMode_UploadWindowMenu_C_WidgetAnimationEvt_WindowCloseAnim_K2Node_WidgetAnimationEvent_3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.WidgetAnimationEvt_WindowCloseAnim_K2Node_WidgetAnimationEvent_4
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoMode_UploadWindowMenu_C::WidgetAnimationEvt_WindowCloseAnim_K2Node_WidgetAnimationEvent_4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.WidgetAnimationEvt_WindowCloseAnim_K2Node_WidgetAnimationEvent_4");
		
		UUMG_PhotoMode_UploadWindowMenu_C_WidgetAnimationEvt_WindowCloseAnim_K2Node_WidgetAnimationEvent_4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.BndEvt__UMG_PhotoMode_UploadWindowMenu_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoMode_UploadWindowMenu_C::BndEvt__UMG_PhotoMode_UploadWindowMenu_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.BndEvt__UMG_PhotoMode_UploadWindowMenu_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature");
		
		UUMG_PhotoMode_UploadWindowMenu_C_BndEvt__UMG_PhotoMode_UploadWindowMenu_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.BndEvt__UMG_PhotoMode_UploadWindowMenu_CancelBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoMode_UploadWindowMenu_C::BndEvt__UMG_PhotoMode_UploadWindowMenu_CancelBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.BndEvt__UMG_PhotoMode_UploadWindowMenu_CancelBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_PhotoMode_UploadWindowMenu_C_BndEvt__UMG_PhotoMode_UploadWindowMenu_CancelBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.BndEvt__UMG_PhotoMode_UploadWindowMenu_UploadBtn_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoMode_UploadWindowMenu_C::BndEvt__UMG_PhotoMode_UploadWindowMenu_UploadBtn_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.BndEvt__UMG_PhotoMode_UploadWindowMenu_UploadBtn_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature");
		
		UUMG_PhotoMode_UploadWindowMenu_C_BndEvt__UMG_PhotoMode_UploadWindowMenu_UploadBtn_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoMode_UploadWindowMenu_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.Destruct");
		
		UUMG_PhotoMode_UploadWindowMenu_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.OnUploadPhotoModeImageDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bResult                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_PhotoMode_UploadWindowMenu_C::OnUploadPhotoModeImageDelegate(bool bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.OnUploadPhotoModeImageDelegate");
		
		UUMG_PhotoMode_UploadWindowMenu_C_OnUploadPhotoModeImageDelegate_Params params {};
		params.bResult = bResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.WidgetAnimationEvt_WindowOpenAnim_K2Node_WidgetAnimationEvent_5
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoMode_UploadWindowMenu_C::WidgetAnimationEvt_WindowOpenAnim_K2Node_WidgetAnimationEvent_5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.WidgetAnimationEvt_WindowOpenAnim_K2Node_WidgetAnimationEvent_5");
		
		UUMG_PhotoMode_UploadWindowMenu_C_WidgetAnimationEvt_WindowOpenAnim_K2Node_WidgetAnimationEvent_5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.ExecuteUbergraph_UMG_PhotoMode_UploadWindowMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoMode_UploadWindowMenu_C::ExecuteUbergraph_UMG_PhotoMode_UploadWindowMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.ExecuteUbergraph_UMG_PhotoMode_UploadWindowMenu");
		
		UUMG_PhotoMode_UploadWindowMenu_C_ExecuteUbergraph_UMG_PhotoMode_UploadWindowMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.WindowUploadFaildFinishedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoMode_UploadWindowMenu_C::WindowUploadFaildFinishedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.WindowUploadFaildFinishedEvent__DelegateSignature");
		
		UUMG_PhotoMode_UploadWindowMenu_C_WindowUploadFaildFinishedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.WindowUploadStartEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoMode_UploadWindowMenu_C::WindowUploadStartEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.WindowUploadStartEvent__DelegateSignature");
		
		UUMG_PhotoMode_UploadWindowMenu_C_WindowUploadStartEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.WindowUploadFinishedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoMode_UploadWindowMenu_C::WindowUploadFinishedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.WindowUploadFinishedEvent__DelegateSignature");
		
		UUMG_PhotoMode_UploadWindowMenu_C_WindowUploadFinishedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.WindowCloseFinishedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoMode_UploadWindowMenu_C::WindowCloseFinishedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.WindowCloseFinishedEvent__DelegateSignature");
		
		UUMG_PhotoMode_UploadWindowMenu_C_WindowCloseFinishedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.WindowOpenFinishedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoMode_UploadWindowMenu_C::WindowOpenFinishedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C.WindowOpenFinishedEvent__DelegateSignature");
		
		UUMG_PhotoMode_UploadWindowMenu_C_WindowOpenFinishedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_PhotoMode_UploadWindowMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_PhotoMode_UploadWindowMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C");
		return ptr;
	}

}


