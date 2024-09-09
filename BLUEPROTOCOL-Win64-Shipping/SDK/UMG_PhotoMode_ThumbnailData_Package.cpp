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
	 * 		Name   -> Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.GetImagePNGData_Bp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              OutImagePngData                                            (Parm, OutParm)
	 */
	void UUMG_PhotoMode_ThumbnailData_C::GetImagePNGData_Bp(TArray<unsigned char>* OutImagePngData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.GetImagePNGData_Bp");
		
		UUMG_PhotoMode_ThumbnailData_C_GetImagePNGData_Bp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutImagePngData != nullptr)
			*OutImagePngData = params.OutImagePngData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.GetIsUpload_Bp
	 * 		Flags  -> ()
	 */
	bool UUMG_PhotoMode_ThumbnailData_C::GetIsUpload_Bp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.GetIsUpload_Bp");
		
		UUMG_PhotoMode_ThumbnailData_C_GetIsUpload_Bp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.SetThumbnailTexture_Bp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2DDynamic*                           Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<unsigned char>                              InImagePNGData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	bool UUMG_PhotoMode_ThumbnailData_C::SetThumbnailTexture_Bp(class UTexture2DDynamic* Texture, TArray<unsigned char> InImagePNGData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.SetThumbnailTexture_Bp");
		
		UUMG_PhotoMode_ThumbnailData_C_SetThumbnailTexture_Bp_Params params {};
		params.Texture = Texture;
		params.InImagePNGData = InImagePNGData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.GetThumbnailTexture_Bp
	 * 		Flags  -> ()
	 */
	class UTexture2DDynamic* UUMG_PhotoMode_ThumbnailData_C::GetThumbnailTexture_Bp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.GetThumbnailTexture_Bp");
		
		UUMG_PhotoMode_ThumbnailData_C_GetThumbnailTexture_Bp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.SetIsUpload
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsUpload                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_PhotoMode_ThumbnailData_C::SetIsUpload(bool IsUpload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.SetIsUpload");
		
		UUMG_PhotoMode_ThumbnailData_C_SetIsUpload_Params params {};
		params.IsUpload = IsUpload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.GetIsUpload
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsUpload                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_PhotoMode_ThumbnailData_C::GetIsUpload(bool* IsUpload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.GetIsUpload");
		
		UUMG_PhotoMode_ThumbnailData_C_GetIsUpload_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsUpload != nullptr)
			*IsUpload = params.IsUpload;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.SetSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSelect                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_PhotoMode_ThumbnailData_C::SetSelect(bool bSelect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.SetSelect");
		
		UUMG_PhotoMode_ThumbnailData_C_SetSelect_Params params {};
		params.bSelect = bSelect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.IsSelect
	 * 		Flags  -> ()
	 */
	bool UUMG_PhotoMode_ThumbnailData_C::IsSelect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.IsSelect");
		
		UUMG_PhotoMode_ThumbnailData_C_IsSelect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.Get Slate Brush
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateBrush                                 BrushImage                                                 (Parm, OutParm)
	 */
	bool UUMG_PhotoMode_ThumbnailData_C::GetSlateBrush(struct FSlateBrush* BrushImage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.Get Slate Brush");
		
		UUMG_PhotoMode_ThumbnailData_C_GetSlateBrush_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BrushImage != nullptr)
			*BrushImage = params.BrushImage;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.Reset
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoMode_ThumbnailData_C::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.Reset");
		
		UUMG_PhotoMode_ThumbnailData_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.ResetFaild
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoMode_ThumbnailData_C::ResetFaild()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.ResetFaild");
		
		UUMG_PhotoMode_ThumbnailData_C_ResetFaild_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.GetImage_PNGData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              outImage_PNGData                                           (Parm, OutParm)
	 */
	void UUMG_PhotoMode_ThumbnailData_C::GetImage_PNGData(TArray<unsigned char>* outImage_PNGData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.GetImage_PNGData");
		
		UUMG_PhotoMode_ThumbnailData_C_GetImage_PNGData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outImage_PNGData != nullptr)
			*outImage_PNGData = params.outImage_PNGData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.GetThumbnailTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2DDynamic*                           outThumbnailTexture                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoMode_ThumbnailData_C::GetThumbnailTexture(class UTexture2DDynamic** outThumbnailTexture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.GetThumbnailTexture");
		
		UUMG_PhotoMode_ThumbnailData_C_GetThumbnailTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outThumbnailTexture != nullptr)
			*outThumbnailTexture = params.outThumbnailTexture;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.SetThumbnailTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2DDynamic*                           Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<unsigned char>                              inImage_PNGData                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               outIsTextureNone                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_PhotoMode_ThumbnailData_C::SetThumbnailTexture(class UTexture2DDynamic* Texture, TArray<unsigned char> inImage_PNGData, bool* outIsTextureNone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.SetThumbnailTexture");
		
		UUMG_PhotoMode_ThumbnailData_C_SetThumbnailTexture_Params params {};
		params.Texture = Texture;
		params.inImage_PNGData = inImage_PNGData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outIsTextureNone != nullptr)
			*outIsTextureNone = params.outIsTextureNone;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.IsValidThumbnail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_PhotoMode_ThumbnailData_C::IsValidThumbnail(bool* bIsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.IsValidThumbnail");
		
		UUMG_PhotoMode_ThumbnailData_C_IsValidThumbnail_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.SetIsUpload_Bp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsUpload                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_PhotoMode_ThumbnailData_C::SetIsUpload_Bp(bool bIsUpload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.SetIsUpload_Bp");
		
		UUMG_PhotoMode_ThumbnailData_C_SetIsUpload_Bp_Params params {};
		params.bIsUpload = bIsUpload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.Reset_Bp
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoMode_ThumbnailData_C::Reset_Bp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.Reset_Bp");
		
		UUMG_PhotoMode_ThumbnailData_C_Reset_Bp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ThumbnailNo                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoMode_ThumbnailData_C::Init(int32_t ThumbnailNo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.Init");
		
		UUMG_PhotoMode_ThumbnailData_C_Init_Params params {};
		params.ThumbnailNo = ThumbnailNo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.ResetButton
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoMode_ThumbnailData_C::ResetButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.ResetButton");
		
		UUMG_PhotoMode_ThumbnailData_C_ResetButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.SetIsEnableButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_PhotoMode_ThumbnailData_C::SetIsEnableButton(bool bInIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.SetIsEnableButton");
		
		UUMG_PhotoMode_ThumbnailData_C_SetIsEnableButton_Params params {};
		params.bInIsEnabled = bInIsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.BndEvt__UMG_PhotoMode_ThumbnailData_ThumbnailBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoMode_ThumbnailData_C::BndEvt__UMG_PhotoMode_ThumbnailData_ThumbnailBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.BndEvt__UMG_PhotoMode_ThumbnailData_ThumbnailBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_PhotoMode_ThumbnailData_C_BndEvt__UMG_PhotoMode_ThumbnailData_ThumbnailBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.BndEvt__UMG_PhotoMode_ThumbnailData_SelectFrameButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoMode_ThumbnailData_C::BndEvt__UMG_PhotoMode_ThumbnailData_SelectFrameButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.BndEvt__UMG_PhotoMode_ThumbnailData_SelectFrameButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_PhotoMode_ThumbnailData_C_BndEvt__UMG_PhotoMode_ThumbnailData_SelectFrameButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.ExecuteUbergraph_UMG_PhotoMode_ThumbnailData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoMode_ThumbnailData_C::ExecuteUbergraph_UMG_PhotoMode_ThumbnailData(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.ExecuteUbergraph_UMG_PhotoMode_ThumbnailData");
		
		UUMG_PhotoMode_ThumbnailData_C_ExecuteUbergraph_UMG_PhotoMode_ThumbnailData_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.OnClickedFrameButton__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            outThumbnailNo                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoMode_ThumbnailData_C::OnClickedFrameButton__DelegateSignature(int32_t outThumbnailNo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.OnClickedFrameButton__DelegateSignature");
		
		UUMG_PhotoMode_ThumbnailData_C_OnClickedFrameButton__DelegateSignature_Params params {};
		params.outThumbnailNo = outThumbnailNo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.OnClickedViewerButton__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            outThumbnailNo                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoMode_ThumbnailData_C::OnClickedViewerButton__DelegateSignature(int32_t outThumbnailNo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C.OnClickedViewerButton__DelegateSignature");
		
		UUMG_PhotoMode_ThumbnailData_C_OnClickedViewerButton__DelegateSignature_Params params {};
		params.outThumbnailNo = outThumbnailNo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_PhotoMode_ThumbnailData_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_PhotoMode_ThumbnailData_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C");
		return ptr;
	}

}


