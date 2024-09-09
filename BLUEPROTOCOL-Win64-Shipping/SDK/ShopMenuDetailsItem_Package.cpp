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
	 * 		Name   -> Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.SetIntervalGrpVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UShopMenuDetailsItem_C::SetIntervalGrpVisibility(bool InIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.SetIntervalGrpVisibility");
		
		UShopMenuDetailsItem_C_SetIntervalGrpVisibility_Params params {};
		params.InIsVisible = InIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.SetItemRecastText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InItemID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsItem_C::SetItemRecastText(int32_t InItemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.SetItemRecastText");
		
		UShopMenuDetailsItem_C_SetItemRecastText_Params params {};
		params.InItemID = InItemID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.SetItemEffectText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InItemID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsItem_C::SetItemEffectText(int32_t InItemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.SetItemEffectText");
		
		UShopMenuDetailsItem_C_SetItemEffectText_Params params {};
		params.InItemID = InItemID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.SetItemIconImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InItemIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsItem_C::SetItemIconImage(int32_t InItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.SetItemIconImage");
		
		UShopMenuDetailsItem_C_SetItemIconImage_Params params {};
		params.InItemIndex = InItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.Construct");
		
		UShopMenuDetailsItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.ShowDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AmountMin                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsItem_C::ShowDetails(int32_t ItemIndex, int32_t Amount, int32_t AmountMin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.ShowDetails");
		
		UShopMenuDetailsItem_C_ShowDetails_Params params {};
		params.ItemIndex = ItemIndex;
		params.Amount = Amount;
		params.AmountMin = AmountMin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.CloseDetails
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsItem_C::CloseDetails()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.CloseDetails");
		
		UShopMenuDetailsItem_C_CloseDetails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsItem_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.OnAnimationFinished");
		
		UShopMenuDetailsItem_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.BndEvt__ShopMenuDetailsItem_SBButtonItemBox_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsItem_C::BndEvt__ShopMenuDetailsItem_SBButtonItemBox_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.BndEvt__ShopMenuDetailsItem_SBButtonItemBox_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UShopMenuDetailsItem_C_BndEvt__ShopMenuDetailsItem_SBButtonItemBox_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.BndEvt__ShopMenuDetailsItem_WBP_ShopMenuDetailsTags_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsItem_C::BndEvt__ShopMenuDetailsItem_WBP_ShopMenuDetailsTags_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.BndEvt__ShopMenuDetailsItem_WBP_ShopMenuDetailsTags_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature");
		
		UShopMenuDetailsItem_C_BndEvt__ShopMenuDetailsItem_WBP_ShopMenuDetailsTags_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.ResetDisplay
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsItem_C::ResetDisplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.ResetDisplay");
		
		UShopMenuDetailsItem_C_ResetDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.SetupExtraButton
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsItem_C::SetupExtraButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.SetupExtraButton");
		
		UShopMenuDetailsItem_C_SetupExtraButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.BndEvt__ShopMenuDetailsItem_SBButtonShowProduct_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsItem_C::BndEvt__ShopMenuDetailsItem_SBButtonShowProduct_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.BndEvt__ShopMenuDetailsItem_SBButtonShowProduct_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UShopMenuDetailsItem_C_BndEvt__ShopMenuDetailsItem_SBButtonShowProduct_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.ExecuteUbergraph_ShopMenuDetailsItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsItem_C::ExecuteUbergraph_ShopMenuDetailsItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.ExecuteUbergraph_ShopMenuDetailsItem");
		
		UShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.OnClickShowProduct__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  RewardType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsItem_C::OnClickShowProduct__DelegateSignature(ESBRewardItemType RewardType, int32_t ItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.OnClickShowProduct__DelegateSignature");
		
		UShopMenuDetailsItem_C_OnClickShowProduct__DelegateSignature_Params params {};
		params.RewardType = RewardType;
		params.ItemIndex = ItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.OnClickZoomIn__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_SBDetailsZoomIn                                  Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsItem_C::OnClickZoomIn__DelegateSignature(E_SBDetailsZoomIn Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.OnClickZoomIn__DelegateSignature");
		
		UShopMenuDetailsItem_C_OnClickZoomIn__DelegateSignature_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.OnClickItemBoxDetail__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsItem_C::OnClickItemBoxDetail__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.OnClickItemBoxDetail__DelegateSignature");
		
		UShopMenuDetailsItem_C_OnClickItemBoxDetail__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.OnEndCloseDetailAnimation__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 InWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsItem_C::OnEndCloseDetailAnimation__DelegateSignature(class UUserWidget* InWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.OnEndCloseDetailAnimation__DelegateSignature");
		
		UShopMenuDetailsItem_C_OnEndCloseDetailAnimation__DelegateSignature_Params params {};
		params.InWidget = InWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsItem_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.OnClose__DelegateSignature");
		
		UShopMenuDetailsItem_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShopMenuDetailsItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShopMenuDetailsItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ShopMenuDetailsItem.ShopMenuDetailsItem_C");
		return ptr;
	}

}


