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
	 * 		Name   -> Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.ScreenShotCapturedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UTexture2DDynamic*>                   InThumbnailImage                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUMG_PhotoModeControll_UploadList_C::ScreenShotCapturedEvent(TArray<class UTexture2DDynamic*>* InThumbnailImage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.ScreenShotCapturedEvent");
		
		UUMG_PhotoModeControll_UploadList_C_ScreenShotCapturedEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InThumbnailImage != nullptr)
			*InThumbnailImage = params.InThumbnailImage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.SetUploadThumbnail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UTexture2DDynamic*>                   InThumbnailImage                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUMG_PhotoModeControll_UploadList_C::SetUploadThumbnail(TArray<class UTexture2DDynamic*>* InThumbnailImage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.SetUploadThumbnail");
		
		UUMG_PhotoModeControll_UploadList_C_SetUploadThumbnail_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InThumbnailImage != nullptr)
			*InThumbnailImage = params.InThumbnailImage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.InitUploadPanel
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeControll_UploadList_C::InitUploadPanel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.InitUploadPanel");
		
		UUMG_PhotoModeControll_UploadList_C_InitUploadPanel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.ScreenshotCapturedEvent_Bp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UTexture2DDynamic*>                   InThumbnailImage                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUMG_PhotoModeControll_UploadList_C::ScreenshotCapturedEvent_Bp(TArray<class UTexture2DDynamic*> InThumbnailImage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.ScreenshotCapturedEvent_Bp");
		
		UUMG_PhotoModeControll_UploadList_C_ScreenshotCapturedEvent_Bp_Params params {};
		params.InThumbnailImage = InThumbnailImage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.SetUploadThumbnail_Bp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UTexture2DDynamic*>                   InThumbnailImage                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUMG_PhotoModeControll_UploadList_C::SetUploadThumbnail_Bp(TArray<class UTexture2DDynamic*> InThumbnailImage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.SetUploadThumbnail_Bp");
		
		UUMG_PhotoModeControll_UploadList_C_SetUploadThumbnail_Bp_Params params {};
		params.InThumbnailImage = InThumbnailImage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.UploadWidgetSwitcher_Bp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      InMode                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControll_UploadList_C::UploadWidgetSwitcher_Bp(unsigned char InMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.UploadWidgetSwitcher_Bp");
		
		UUMG_PhotoModeControll_UploadList_C_UploadWidgetSwitcher_Bp_Params params {};
		params.InMode = InMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.UploadWidgetSwitcher
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPhotoModeUploadList                               InMode                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControll_UploadList_C::UploadWidgetSwitcher(EPhotoModeUploadList InMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.UploadWidgetSwitcher");
		
		UUMG_PhotoModeControll_UploadList_C_UploadWidgetSwitcher_Params params {};
		params.InMode = InMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.UploadFinish
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSlateBrush>                         InThumbnailImage                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<bool>                                       InReturnValue                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               InIsClickCheck                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_PhotoModeControll_UploadList_C::UploadFinish(TArray<struct FSlateBrush> InThumbnailImage, TArray<bool> InReturnValue, bool InIsClickCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.UploadFinish");
		
		UUMG_PhotoModeControll_UploadList_C_UploadFinish_Params params {};
		params.InThumbnailImage = InThumbnailImage;
		params.InReturnValue = InReturnValue;
		params.InIsClickCheck = InIsClickCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.BndEvt__UMG_PhotoModeControll_UploadList_SBButton_UploadSelectWindowOpen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeControll_UploadList_C::BndEvt__UMG_PhotoModeControll_UploadList_SBButton_UploadSelectWindowOpen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.BndEvt__UMG_PhotoModeControll_UploadList_SBButton_UploadSelectWindowOpen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UUMG_PhotoModeControll_UploadList_C_BndEvt__UMG_PhotoModeControll_UploadList_SBButton_UploadSelectWindowOpen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.ExecuteUbergraph_UMG_PhotoModeControll_UploadList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModeControll_UploadList_C::ExecuteUbergraph_UMG_PhotoModeControll_UploadList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.ExecuteUbergraph_UMG_PhotoModeControll_UploadList");
		
		UUMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.UploadSelectWindowClickEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModeControll_UploadList_C::UploadSelectWindowClickEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.UploadSelectWindowClickEvent__DelegateSignature");
		
		UUMG_PhotoModeControll_UploadList_C_UploadSelectWindowClickEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_PhotoModeControll_UploadList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_PhotoModeControll_UploadList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C");
		return ptr;
	}

}


