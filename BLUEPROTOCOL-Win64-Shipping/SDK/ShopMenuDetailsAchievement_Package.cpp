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
	 * 		Name   -> Function ShopMenuDetailsAchievement.ShopMenuDetailsAchievement_C.Construct
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsAchievement_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsAchievement.ShopMenuDetailsAchievement_C.Construct");
		
		UShopMenuDetailsAchievement_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsAchievement.ShopMenuDetailsAchievement_C.ShowDetails
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsAchievement_C::ShowDetails()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsAchievement.ShopMenuDetailsAchievement_C.ShowDetails");
		
		UShopMenuDetailsAchievement_C_ShowDetails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsAchievement.ShopMenuDetailsAchievement_C.CloseDetails
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsAchievement_C::CloseDetails()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsAchievement.ShopMenuDetailsAchievement_C.CloseDetails");
		
		UShopMenuDetailsAchievement_C_CloseDetails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsAchievement.ShopMenuDetailsAchievement_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsAchievement_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsAchievement.ShopMenuDetailsAchievement_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1");
		
		UShopMenuDetailsAchievement_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsAchievement.ShopMenuDetailsAchievement_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  RewardType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsAchievement_C::SetData(ESBRewardItemType RewardType, int32_t ItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsAchievement.ShopMenuDetailsAchievement_C.SetData");
		
		UShopMenuDetailsAchievement_C_SetData_Params params {};
		params.RewardType = RewardType;
		params.ItemIndex = ItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsAchievement.ShopMenuDetailsAchievement_C.ExecuteUbergraph_ShopMenuDetailsAchievement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsAchievement_C::ExecuteUbergraph_ShopMenuDetailsAchievement(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsAchievement.ShopMenuDetailsAchievement_C.ExecuteUbergraph_ShopMenuDetailsAchievement");
		
		UShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsAchievement.ShopMenuDetailsAchievement_C.OnEndCloseDetailAnimation__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 InWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsAchievement_C::OnEndCloseDetailAnimation__DelegateSignature(class UUserWidget* InWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsAchievement.ShopMenuDetailsAchievement_C.OnEndCloseDetailAnimation__DelegateSignature");
		
		UShopMenuDetailsAchievement_C_OnEndCloseDetailAnimation__DelegateSignature_Params params {};
		params.InWidget = InWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShopMenuDetailsAchievement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShopMenuDetailsAchievement_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ShopMenuDetailsAchievement.ShopMenuDetailsAchievement_C");
		return ptr;
	}

}


