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
	 * 		Name   -> Function ShopMenuDetailsFusionItem.ShopMenuDetailsFusionItem_C.SetItemEffectText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InItemID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsFusionItem_C::SetItemEffectText(int32_t InItemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsFusionItem.ShopMenuDetailsFusionItem_C.SetItemEffectText");
		
		UShopMenuDetailsFusionItem_C_SetItemEffectText_Params params {};
		params.InItemID = InItemID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsFusionItem.ShopMenuDetailsFusionItem_C.SetItemIconImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InItemIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsFusionItem_C::SetItemIconImage(int32_t InItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsFusionItem.ShopMenuDetailsFusionItem_C.SetItemIconImage");
		
		UShopMenuDetailsFusionItem_C_SetItemIconImage_Params params {};
		params.InItemIndex = InItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsFusionItem.ShopMenuDetailsFusionItem_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsFusionItem_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsFusionItem.ShopMenuDetailsFusionItem_C.OnAnimationFinished");
		
		UShopMenuDetailsFusionItem_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsFusionItem.ShopMenuDetailsFusionItem_C.CloseDetails
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsFusionItem_C::CloseDetails()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsFusionItem.ShopMenuDetailsFusionItem_C.CloseDetails");
		
		UShopMenuDetailsFusionItem_C_CloseDetails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsFusionItem.ShopMenuDetailsFusionItem_C.ShowDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AmountMin                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsFusionItem_C::ShowDetails(int32_t ItemIndex, int32_t Amount, int32_t AmountMin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsFusionItem.ShopMenuDetailsFusionItem_C.ShowDetails");
		
		UShopMenuDetailsFusionItem_C_ShowDetails_Params params {};
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
	 * 		Name   -> Function ShopMenuDetailsFusionItem.ShopMenuDetailsFusionItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsFusionItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsFusionItem.ShopMenuDetailsFusionItem_C.Construct");
		
		UShopMenuDetailsFusionItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsFusionItem.ShopMenuDetailsFusionItem_C.ExecuteUbergraph_ShopMenuDetailsFusionItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsFusionItem_C::ExecuteUbergraph_ShopMenuDetailsFusionItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsFusionItem.ShopMenuDetailsFusionItem_C.ExecuteUbergraph_ShopMenuDetailsFusionItem");
		
		UShopMenuDetailsFusionItem_C_ExecuteUbergraph_ShopMenuDetailsFusionItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsFusionItem.ShopMenuDetailsFusionItem_C.OnEndCloseDetailAnimation__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 InWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsFusionItem_C::OnEndCloseDetailAnimation__DelegateSignature(class UUserWidget* InWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsFusionItem.ShopMenuDetailsFusionItem_C.OnEndCloseDetailAnimation__DelegateSignature");
		
		UShopMenuDetailsFusionItem_C_OnEndCloseDetailAnimation__DelegateSignature_Params params {};
		params.InWidget = InWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsFusionItem.ShopMenuDetailsFusionItem_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsFusionItem_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsFusionItem.ShopMenuDetailsFusionItem_C.OnClose__DelegateSignature");
		
		UShopMenuDetailsFusionItem_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShopMenuDetailsFusionItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShopMenuDetailsFusionItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ShopMenuDetailsFusionItem.ShopMenuDetailsFusionItem_C");
		return ptr;
	}

}


