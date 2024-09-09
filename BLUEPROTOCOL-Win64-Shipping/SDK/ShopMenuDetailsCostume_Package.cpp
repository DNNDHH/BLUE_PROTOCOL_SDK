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
	 * 		Name   -> Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.SetModelCaptureImageVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UShopMenuDetailsCostume_C::SetModelCaptureImageVisibility(bool InIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.SetModelCaptureImageVisibility");
		
		UShopMenuDetailsCostume_C_SetModelCaptureImageVisibility_Params params {};
		params.InIsVisible = InIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.SetCostumeTypeCheckBoxVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UShopMenuDetailsCostume_C::SetCostumeTypeCheckBoxVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.SetCostumeTypeCheckBoxVisibility");
		
		UShopMenuDetailsCostume_C_SetCostumeTypeCheckBoxVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.SetCostumeTypeCheckBoxSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsMaleCostumeSelected                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UShopMenuDetailsCostume_C::SetCostumeTypeCheckBoxSelected(bool IsMaleCostumeSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.SetCostumeTypeCheckBoxSelected");
		
		UShopMenuDetailsCostume_C_SetCostumeTypeCheckBoxSelected_Params params {};
		params.IsMaleCostumeSelected = IsMaleCostumeSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InCurrMapName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsCostume_C::Init(const class FString& InCurrMapName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.Init");
		
		UShopMenuDetailsCostume_C_Init_Params params {};
		params.InCurrMapName = InCurrMapName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.Construct
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsCostume_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.Construct");
		
		UShopMenuDetailsCostume_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.ShowDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InItemID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AmountMin                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsCostume_C::ShowDetails(int32_t InItemID, int32_t Amount, int32_t AmountMin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.ShowDetails");
		
		UShopMenuDetailsCostume_C_ShowDetails_Params params {};
		params.InItemID = InItemID;
		params.Amount = Amount;
		params.AmountMin = AmountMin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.CloseDetails
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsCostume_C::CloseDetails()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.CloseDetails");
		
		UShopMenuDetailsCostume_C_CloseDetails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.BndEvt__SBCheckBox_C_0_K2Node_ComponentBoundEvent_237_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UShopMenuDetailsCostume_C::BndEvt__SBCheckBox_C_0_K2Node_ComponentBoundEvent_237_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.BndEvt__SBCheckBox_C_0_K2Node_ComponentBoundEvent_237_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UShopMenuDetailsCostume_C_BndEvt__SBCheckBox_C_0_K2Node_ComponentBoundEvent_237_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.BndEvt__CheckBox_FemaleCostume_K2Node_ComponentBoundEvent_389_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UShopMenuDetailsCostume_C::BndEvt__CheckBox_FemaleCostume_K2Node_ComponentBoundEvent_389_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.BndEvt__CheckBox_FemaleCostume_K2Node_ComponentBoundEvent_389_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UShopMenuDetailsCostume_C_BndEvt__CheckBox_FemaleCostume_K2Node_ComponentBoundEvent_389_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsCostume_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.OnAnimationFinished");
		
		UShopMenuDetailsCostume_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.ExecuteUbergraph_ShopMenuDetailsCostume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsCostume_C::ExecuteUbergraph_ShopMenuDetailsCostume(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.ExecuteUbergraph_ShopMenuDetailsCostume");
		
		UShopMenuDetailsCostume_C_ExecuteUbergraph_ShopMenuDetailsCostume_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.OnEndCloseDetailAnimation__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 InWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsCostume_C::OnEndCloseDetailAnimation__DelegateSignature(class UUserWidget* InWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.OnEndCloseDetailAnimation__DelegateSignature");
		
		UShopMenuDetailsCostume_C_OnEndCloseDetailAnimation__DelegateSignature_Params params {};
		params.InWidget = InWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.OnSelectCostumeType__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsMaleCostumeSelected                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UShopMenuDetailsCostume_C::OnSelectCostumeType__DelegateSignature(bool IsMaleCostumeSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.OnSelectCostumeType__DelegateSignature");
		
		UShopMenuDetailsCostume_C_OnSelectCostumeType__DelegateSignature_Params params {};
		params.IsMaleCostumeSelected = IsMaleCostumeSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsCostume_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsCostume.ShopMenuDetailsCostume_C.OnClose__DelegateSignature");
		
		UShopMenuDetailsCostume_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShopMenuDetailsCostume_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShopMenuDetailsCostume_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ShopMenuDetailsCostume.ShopMenuDetailsCostume_C");
		return ptr;
	}

}


