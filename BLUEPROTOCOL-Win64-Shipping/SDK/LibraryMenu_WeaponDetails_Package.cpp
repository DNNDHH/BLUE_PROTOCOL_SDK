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
	 * 		Name   -> Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.UpdateReadRecipeTab
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_WeaponDetails_C::UpdateReadRecipeTab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.UpdateReadRecipeTab");
		
		ULibraryMenu_WeaponDetails_C_UpdateReadRecipeTab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.SetActiveTab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_WeaponDetails_C::SetActiveTab(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.SetActiveTab");
		
		ULibraryMenu_WeaponDetails_C_SetActiveTab_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.SetWeaponData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBWeaponMasterData                         InWeaponMasterData                                         (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ULibraryMenu_WeaponDetails_C::SetWeaponData(const struct FSBWeaponMasterData& InWeaponMasterData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.SetWeaponData");
		
		ULibraryMenu_WeaponDetails_C_SetWeaponData_Params params {};
		params.InWeaponMasterData = InWeaponMasterData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.SetDetailsVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_WeaponDetails_C::SetDetailsVisibility(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.SetDetailsVisibility");
		
		ULibraryMenu_WeaponDetails_C_SetDetailsVisibility_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.BndEvt__LibraryMenu_ItemDetails_DetailTabButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_WeaponDetails_C::BndEvt__LibraryMenu_ItemDetails_DetailTabButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.BndEvt__LibraryMenu_ItemDetails_DetailTabButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");
		
		ULibraryMenu_WeaponDetails_C_BndEvt__LibraryMenu_ItemDetails_DetailTabButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.BndEvt__LibraryMenu_ItemDetails_ExplainTabButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_WeaponDetails_C::BndEvt__LibraryMenu_ItemDetails_ExplainTabButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.BndEvt__LibraryMenu_ItemDetails_ExplainTabButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");
		
		ULibraryMenu_WeaponDetails_C_BndEvt__LibraryMenu_ItemDetails_ExplainTabButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.Construct
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_WeaponDetails_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.Construct");
		
		ULibraryMenu_WeaponDetails_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.Destruct
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_WeaponDetails_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.Destruct");
		
		ULibraryMenu_WeaponDetails_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.BndEvt__LibraryMenu_WeaponDetails_WindowOpenButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_WeaponDetails_C::BndEvt__LibraryMenu_WeaponDetails_WindowOpenButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.BndEvt__LibraryMenu_WeaponDetails_WindowOpenButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		ULibraryMenu_WeaponDetails_C_BndEvt__LibraryMenu_WeaponDetails_WindowOpenButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.OnWeaponLoaded_Event
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_WeaponDetails_C::OnWeaponLoaded_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.OnWeaponLoaded_Event");
		
		ULibraryMenu_WeaponDetails_C_OnWeaponLoaded_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.ExecuteUbergraph_LibraryMenu_WeaponDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_WeaponDetails_C::ExecuteUbergraph_LibraryMenu_WeaponDetails(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.ExecuteUbergraph_LibraryMenu_WeaponDetails");
		
		ULibraryMenu_WeaponDetails_C_ExecuteUbergraph_LibraryMenu_WeaponDetails_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.OnClickZoomIn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_WeaponDetails_C::OnClickZoomIn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.OnClickZoomIn__DelegateSignature");
		
		ULibraryMenu_WeaponDetails_C_OnClickZoomIn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.OnRecipeTabRead__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_WeaponDetails_C::OnRecipeTabRead__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.OnRecipeTabRead__DelegateSignature");
		
		ULibraryMenu_WeaponDetails_C_OnRecipeTabRead__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULibraryMenu_WeaponDetails_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULibraryMenu_WeaponDetails_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C");
		return ptr;
	}

}


