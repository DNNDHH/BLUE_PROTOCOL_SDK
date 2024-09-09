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
	 * 		Name   -> Function ShopMenuDetailsImagineInner.ShopMenuDetailsImagineInner_C.GetBattleScore
	 * 		Flags  -> ()
	 */
	int32_t UShopMenuDetailsImagineInner_C::GetBattleScore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsImagineInner.ShopMenuDetailsImagineInner_C.GetBattleScore");
		
		UShopMenuDetailsImagineInner_C_GetBattleScore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsImagineInner.ShopMenuDetailsImagineInner_C.SetLotteryGroupsId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LotteryGroupsId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsImagineInner_C::SetLotteryGroupsId(int32_t LotteryGroupsId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsImagineInner.ShopMenuDetailsImagineInner_C.SetLotteryGroupsId");
		
		UShopMenuDetailsImagineInner_C_SetLotteryGroupsId_Params params {};
		params.LotteryGroupsId = LotteryGroupsId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsImagineInner.ShopMenuDetailsImagineInner_C.Construct
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsImagineInner_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsImagineInner.ShopMenuDetailsImagineInner_C.Construct");
		
		UShopMenuDetailsImagineInner_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsImagineInner.ShopMenuDetailsImagineInner_C.ShowDetails
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsImagineInner_C::ShowDetails()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsImagineInner.ShopMenuDetailsImagineInner_C.ShowDetails");
		
		UShopMenuDetailsImagineInner_C_ShowDetails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsImagineInner.ShopMenuDetailsImagineInner_C.CloseDetails
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsImagineInner_C::CloseDetails()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsImagineInner.ShopMenuDetailsImagineInner_C.CloseDetails");
		
		UShopMenuDetailsImagineInner_C_CloseDetails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsImagineInner.ShopMenuDetailsImagineInner_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsImagineInner_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsImagineInner.ShopMenuDetailsImagineInner_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1");
		
		UShopMenuDetailsImagineInner_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsImagineInner.ShopMenuDetailsImagineInner_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AmountMin                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      UniqueId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               bShowProduct                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            RecipeId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsImagineInner_C::SetData(int32_t ItemIndex, int32_t Amount, int32_t AmountMin, const class FString& UniqueId, bool bShowProduct, int32_t RecipeId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsImagineInner.ShopMenuDetailsImagineInner_C.SetData");
		
		UShopMenuDetailsImagineInner_C_SetData_Params params {};
		params.ItemIndex = ItemIndex;
		params.Amount = Amount;
		params.AmountMin = AmountMin;
		params.UniqueId = UniqueId;
		params.bShowProduct = bShowProduct;
		params.RecipeId = RecipeId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsImagineInner.ShopMenuDetailsImagineInner_C.BndEvt__ShopMenuDetailsImagineBattle_SBButton_AbilityInfo_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsImagineInner_C::BndEvt__ShopMenuDetailsImagineBattle_SBButton_AbilityInfo_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsImagineInner.ShopMenuDetailsImagineInner_C.BndEvt__ShopMenuDetailsImagineBattle_SBButton_AbilityInfo_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UShopMenuDetailsImagineInner_C_BndEvt__ShopMenuDetailsImagineBattle_SBButton_AbilityInfo_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsImagineInner.ShopMenuDetailsImagineInner_C.Destruct
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsImagineInner_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsImagineInner.ShopMenuDetailsImagineInner_C.Destruct");
		
		UShopMenuDetailsImagineInner_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsImagineInner.ShopMenuDetailsImagineInner_C.BndEvt__ShopMenuDetailsImagineInner_SBButtonReturnToRecipe_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsImagineInner_C::BndEvt__ShopMenuDetailsImagineInner_SBButtonReturnToRecipe_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsImagineInner.ShopMenuDetailsImagineInner_C.BndEvt__ShopMenuDetailsImagineInner_SBButtonReturnToRecipe_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UShopMenuDetailsImagineInner_C_BndEvt__ShopMenuDetailsImagineInner_SBButtonReturnToRecipe_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsImagineInner.ShopMenuDetailsImagineInner_C.BndEvt__ShopMenuDetailsImagineInner_SBButtonShowRate_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsImagineInner_C::BndEvt__ShopMenuDetailsImagineInner_SBButtonShowRate_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsImagineInner.ShopMenuDetailsImagineInner_C.BndEvt__ShopMenuDetailsImagineInner_SBButtonShowRate_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UShopMenuDetailsImagineInner_C_BndEvt__ShopMenuDetailsImagineInner_SBButtonShowRate_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsImagineInner.ShopMenuDetailsImagineInner_C.ExecuteUbergraph_ShopMenuDetailsImagineInner
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsImagineInner_C::ExecuteUbergraph_ShopMenuDetailsImagineInner(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsImagineInner.ShopMenuDetailsImagineInner_C.ExecuteUbergraph_ShopMenuDetailsImagineInner");
		
		UShopMenuDetailsImagineInner_C_ExecuteUbergraph_ShopMenuDetailsImagineInner_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsImagineInner.ShopMenuDetailsImagineInner_C.OnClickShowOriginal__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsImagineInner_C::OnClickShowOriginal__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsImagineInner.ShopMenuDetailsImagineInner_C.OnClickShowOriginal__DelegateSignature");
		
		UShopMenuDetailsImagineInner_C_OnClickShowOriginal__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsImagineInner.ShopMenuDetailsImagineInner_C.OnBtnImgViewClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsImagineInner_C::OnBtnImgViewClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsImagineInner.ShopMenuDetailsImagineInner_C.OnBtnImgViewClicked__DelegateSignature");
		
		UShopMenuDetailsImagineInner_C_OnBtnImgViewClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsImagineInner.ShopMenuDetailsImagineInner_C.OnEndCloseDetailAnimation__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 InWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsImagineInner_C::OnEndCloseDetailAnimation__DelegateSignature(class UUserWidget* InWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsImagineInner.ShopMenuDetailsImagineInner_C.OnEndCloseDetailAnimation__DelegateSignature");
		
		UShopMenuDetailsImagineInner_C_OnEndCloseDetailAnimation__DelegateSignature_Params params {};
		params.InWidget = InWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShopMenuDetailsImagineInner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShopMenuDetailsImagineInner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ShopMenuDetailsImagineInner.ShopMenuDetailsImagineInner_C");
		return ptr;
	}

}


