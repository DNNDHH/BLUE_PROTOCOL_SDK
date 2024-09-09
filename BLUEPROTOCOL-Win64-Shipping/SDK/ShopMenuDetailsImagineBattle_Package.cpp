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
	 * 		Name   -> Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.GetBattleScore
	 * 		Flags  -> ()
	 */
	int32_t UShopMenuDetailsImagineBattle_C::GetBattleScore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.GetBattleScore");
		
		UShopMenuDetailsImagineBattle_C_GetBattleScore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.SetLotteryGroupsId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LotteryGroupsId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsImagineBattle_C::SetLotteryGroupsId(int32_t LotteryGroupsId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.SetLotteryGroupsId");
		
		UShopMenuDetailsImagineBattle_C_SetLotteryGroupsId_Params params {};
		params.LotteryGroupsId = LotteryGroupsId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.ShowRateDialog
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsImagineBattle_C::ShowRateDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.ShowRateDialog");
		
		UShopMenuDetailsImagineBattle_C_ShowRateDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.GetAbilityName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bHasValidAbility                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        AbilityName                                                (Parm, OutParm)
	 */
	void UShopMenuDetailsImagineBattle_C::GetAbilityName(bool* bHasValidAbility, class FText* AbilityName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.GetAbilityName");
		
		UShopMenuDetailsImagineBattle_C_GetAbilityName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bHasValidAbility != nullptr)
			*bHasValidAbility = params.bHasValidAbility;
		if (AbilityName != nullptr)
			*AbilityName = params.AbilityName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.GetToolTipWidgetByAbilityNameScaleBox
	 * 		Flags  -> ()
	 */
	class UWidget* UShopMenuDetailsImagineBattle_C::GetToolTipWidgetByAbilityNameScaleBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.GetToolTipWidgetByAbilityNameScaleBox");
		
		UShopMenuDetailsImagineBattle_C_GetToolTipWidgetByAbilityNameScaleBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.Construct
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsImagineBattle_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.Construct");
		
		UShopMenuDetailsImagineBattle_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.ShowDetails
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsImagineBattle_C::ShowDetails()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.ShowDetails");
		
		UShopMenuDetailsImagineBattle_C_ShowDetails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.CloseDetails
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsImagineBattle_C::CloseDetails()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.CloseDetails");
		
		UShopMenuDetailsImagineBattle_C_CloseDetails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsImagineBattle_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1");
		
		UShopMenuDetailsImagineBattle_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AmountMin                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      UniqueId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               bShowProduct                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ESBRewardItemType                                  OriginalRewardType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OriginalItemIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsImagineBattle_C::SetData(int32_t ItemIndex, int32_t Amount, int32_t AmountMin, const class FString& UniqueId, bool bShowProduct, ESBRewardItemType OriginalRewardType, int32_t OriginalItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.SetData");
		
		UShopMenuDetailsImagineBattle_C_SetData_Params params {};
		params.ItemIndex = ItemIndex;
		params.Amount = Amount;
		params.AmountMin = AmountMin;
		params.UniqueId = UniqueId;
		params.bShowProduct = bShowProduct;
		params.OriginalRewardType = OriginalRewardType;
		params.OriginalItemIndex = OriginalItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.BndEvt__ShopMenuDetailsImagineBattle_WBP_ShopMenuDetailsTags_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsImagineBattle_C::BndEvt__ShopMenuDetailsImagineBattle_WBP_ShopMenuDetailsTags_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.BndEvt__ShopMenuDetailsImagineBattle_WBP_ShopMenuDetailsTags_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature");
		
		UShopMenuDetailsImagineBattle_C_BndEvt__ShopMenuDetailsImagineBattle_WBP_ShopMenuDetailsTags_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.BndEvt__ShopMenuDetailsImagineBattle_SBButton_AbilityInfo_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsImagineBattle_C::BndEvt__ShopMenuDetailsImagineBattle_SBButton_AbilityInfo_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.BndEvt__ShopMenuDetailsImagineBattle_SBButton_AbilityInfo_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UShopMenuDetailsImagineBattle_C_BndEvt__ShopMenuDetailsImagineBattle_SBButton_AbilityInfo_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.Destruct
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsImagineBattle_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.Destruct");
		
		UShopMenuDetailsImagineBattle_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.BndEvt__ShopMenuDetailsImagineBattle_SBButtonReturnToRecipe_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsImagineBattle_C::BndEvt__ShopMenuDetailsImagineBattle_SBButtonReturnToRecipe_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.BndEvt__ShopMenuDetailsImagineBattle_SBButtonReturnToRecipe_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UShopMenuDetailsImagineBattle_C_BndEvt__ShopMenuDetailsImagineBattle_SBButtonReturnToRecipe_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.BndEvt__ShopMenuDetailsImagineBattle_SBButtonShowRate_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsImagineBattle_C::BndEvt__ShopMenuDetailsImagineBattle_SBButtonShowRate_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.BndEvt__ShopMenuDetailsImagineBattle_SBButtonShowRate_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		UShopMenuDetailsImagineBattle_C_BndEvt__ShopMenuDetailsImagineBattle_SBButtonShowRate_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.ExecuteUbergraph_ShopMenuDetailsImagineBattle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsImagineBattle_C::ExecuteUbergraph_ShopMenuDetailsImagineBattle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.ExecuteUbergraph_ShopMenuDetailsImagineBattle");
		
		UShopMenuDetailsImagineBattle_C_ExecuteUbergraph_ShopMenuDetailsImagineBattle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.OnClickShowOriginal__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsImagineBattle_C::OnClickShowOriginal__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.OnClickShowOriginal__DelegateSignature");
		
		UShopMenuDetailsImagineBattle_C_OnClickShowOriginal__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.OnClickZoomIn__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_SBDetailsZoomIn                                  Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsImagineBattle_C::OnClickZoomIn__DelegateSignature(E_SBDetailsZoomIn Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.OnClickZoomIn__DelegateSignature");
		
		UShopMenuDetailsImagineBattle_C_OnClickZoomIn__DelegateSignature_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.OnEndCloseDetailAnimation__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 InWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsImagineBattle_C::OnEndCloseDetailAnimation__DelegateSignature(class UUserWidget* InWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C.OnEndCloseDetailAnimation__DelegateSignature");
		
		UShopMenuDetailsImagineBattle_C_OnEndCloseDetailAnimation__DelegateSignature_Params params {};
		params.InWidget = InWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShopMenuDetailsImagineBattle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShopMenuDetailsImagineBattle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ShopMenuDetailsImagineBattle.ShopMenuDetailsImagineBattle_C");
		return ptr;
	}

}


