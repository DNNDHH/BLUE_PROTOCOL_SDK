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
	 * 		Name   -> Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.UpdateReadRecipeTab
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_ImagineDetails_C::UpdateReadRecipeTab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.UpdateReadRecipeTab");
		
		ULibraryMenu_ImagineDetails_C_UpdateReadRecipeTab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.SetActiveTab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_ImagineDetails_C::SetActiveTab(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.SetActiveTab");
		
		ULibraryMenu_ImagineDetails_C_SetActiveTab_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.SetImagineData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterImagine                            InImagineMasterData                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ELibraryImagineType                                InImagineType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_ImagineDetails_C::SetImagineData(const struct FSBMasterImagine& InImagineMasterData, ELibraryImagineType InImagineType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.SetImagineData");
		
		ULibraryMenu_ImagineDetails_C_SetImagineData_Params params {};
		params.InImagineMasterData = InImagineMasterData;
		params.InImagineType = InImagineType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.SetDetailsVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_ImagineDetails_C::SetDetailsVisibility(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.SetDetailsVisibility");
		
		ULibraryMenu_ImagineDetails_C_SetDetailsVisibility_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.OnLoaded_9077E37640FA46939F1F1AB3BCBE4946
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_ImagineDetails_C::OnLoaded_9077E37640FA46939F1F1AB3BCBE4946(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.OnLoaded_9077E37640FA46939F1F1AB3BCBE4946");
		
		ULibraryMenu_ImagineDetails_C_OnLoaded_9077E37640FA46939F1F1AB3BCBE4946_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.BndEvt__LibraryMenu_ItemDetails_ExplainTabButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_ImagineDetails_C::BndEvt__LibraryMenu_ItemDetails_ExplainTabButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.BndEvt__LibraryMenu_ItemDetails_ExplainTabButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");
		
		ULibraryMenu_ImagineDetails_C_BndEvt__LibraryMenu_ItemDetails_ExplainTabButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.Construct
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_ImagineDetails_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.Construct");
		
		ULibraryMenu_ImagineDetails_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.Destruct
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_ImagineDetails_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.Destruct");
		
		ULibraryMenu_ImagineDetails_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.BndEvt__LibraryMenu_WeaponDetails_WindowOpenButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_ImagineDetails_C::BndEvt__LibraryMenu_WeaponDetails_WindowOpenButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.BndEvt__LibraryMenu_WeaponDetails_WindowOpenButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		ULibraryMenu_ImagineDetails_C_BndEvt__LibraryMenu_WeaponDetails_WindowOpenButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.BndEvt__LibraryMenu_ItemDetails_DetailTabButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_ImagineDetails_C::BndEvt__LibraryMenu_ItemDetails_DetailTabButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.BndEvt__LibraryMenu_ItemDetails_DetailTabButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");
		
		ULibraryMenu_ImagineDetails_C_BndEvt__LibraryMenu_ItemDetails_DetailTabButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_ImagineDetails_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.PreConstruct");
		
		ULibraryMenu_ImagineDetails_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.SetEnhanceImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InImagineId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_ImagineDetails_C::SetEnhanceImage(int32_t InImagineId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.SetEnhanceImage");
		
		ULibraryMenu_ImagineDetails_C_SetEnhanceImage_Params params {};
		params.InImagineId = InImagineId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.BndEvt__LibraryMenu_ImagineDetails_Button_EnhanceImagine_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_ImagineDetails_C::BndEvt__LibraryMenu_ImagineDetails_Button_EnhanceImagine_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.BndEvt__LibraryMenu_ImagineDetails_Button_EnhanceImagine_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		ULibraryMenu_ImagineDetails_C_BndEvt__LibraryMenu_ImagineDetails_Button_EnhanceImagine_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.BndEvt__LibraryMenu_ImagineDetails_UMG_CaptureStudio_K2Node_ComponentBoundEvent_3_OnLoadAssetComplete__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_ImagineDetails_C::BndEvt__LibraryMenu_ImagineDetails_UMG_CaptureStudio_K2Node_ComponentBoundEvent_3_OnLoadAssetComplete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.BndEvt__LibraryMenu_ImagineDetails_UMG_CaptureStudio_K2Node_ComponentBoundEvent_3_OnLoadAssetComplete__DelegateSignature");
		
		ULibraryMenu_ImagineDetails_C_BndEvt__LibraryMenu_ImagineDetails_UMG_CaptureStudio_K2Node_ComponentBoundEvent_3_OnLoadAssetComplete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.ExecuteUbergraph_LibraryMenu_ImagineDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_ImagineDetails_C::ExecuteUbergraph_LibraryMenu_ImagineDetails(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.ExecuteUbergraph_LibraryMenu_ImagineDetails");
		
		ULibraryMenu_ImagineDetails_C_ExecuteUbergraph_LibraryMenu_ImagineDetails_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.OnClickZoomIn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_ImagineDetails_C::OnClickZoomIn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.OnClickZoomIn__DelegateSignature");
		
		ULibraryMenu_ImagineDetails_C_OnClickZoomIn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.OnRecipeTabRead__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_ImagineDetails_C::OnRecipeTabRead__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C.OnRecipeTabRead__DelegateSignature");
		
		ULibraryMenu_ImagineDetails_C_OnRecipeTabRead__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULibraryMenu_ImagineDetails_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULibraryMenu_ImagineDetails_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LibraryMenu_ImagineDetails.LibraryMenu_ImagineDetails_C");
		return ptr;
	}

}


