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
	 * 		Name   -> Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.SetSubAbilityInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bExist                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bEnable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        ValueText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               bIsMax                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        ValueMaxText                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UShopMenuDetailsWeapon_C::SetSubAbilityInfo(bool bExist, bool bEnable, const class FText& Name, const class FText& ValueText, bool bIsMax, const class FText& ValueMaxText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.SetSubAbilityInfo");
		
		UShopMenuDetailsWeapon_C_SetSubAbilityInfo_Params params {};
		params.bExist = bExist;
		params.bEnable = bEnable;
		params.Name = Name;
		params.ValueText = ValueText;
		params.bIsMax = bIsMax;
		params.ValueMaxText = ValueMaxText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.GetBattleScore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            BattleScore                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsWeapon_C::GetBattleScore(int32_t* BattleScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.GetBattleScore");
		
		UShopMenuDetailsWeapon_C_GetBattleScore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BattleScore != nullptr)
			*BattleScore = params.BattleScore;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.GetSpEffectText_Internal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        PerkPickId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FText UShopMenuDetailsWeapon_C::GetSpEffectText_Internal(const class FName& PerkPickId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.GetSpEffectText_Internal");
		
		UShopMenuDetailsWeapon_C_GetSpEffectText_Internal_Params params {};
		params.PerkPickId = PerkPickId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.SetLotteryGroupsId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LotteryGroupsId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsWeapon_C::SetLotteryGroupsId(int32_t LotteryGroupsId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.SetLotteryGroupsId");
		
		UShopMenuDetailsWeapon_C_SetLotteryGroupsId_Params params {};
		params.LotteryGroupsId = LotteryGroupsId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.SetLotteryAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bLotteryAbility                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UShopMenuDetailsWeapon_C::SetLotteryAbility(bool bLotteryAbility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.SetLotteryAbility");
		
		UShopMenuDetailsWeapon_C_SetLotteryAbility_Params params {};
		params.bLotteryAbility = bLotteryAbility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.GetSpEffectText
	 * 		Flags  -> ()
	 */
	class FText UShopMenuDetailsWeapon_C::GetSpEffectText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.GetSpEffectText");
		
		UShopMenuDetailsWeapon_C_GetSpEffectText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.GetWeaponAtkStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Value                                                      (Parm, OutParm)
	 */
	void UShopMenuDetailsWeapon_C::GetWeaponAtkStatus(class FText* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.GetWeaponAtkStatus");
		
		UShopMenuDetailsWeapon_C_GetWeaponAtkStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.GetWeaponLevelStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBWeaponStatus                                    EnhanceType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Value                                                      (Parm, OutParm)
	 */
	void UShopMenuDetailsWeapon_C::GetWeaponLevelStatus(ESBWeaponStatus EnhanceType, class FText* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.GetWeaponLevelStatus");
		
		UShopMenuDetailsWeapon_C_GetWeaponLevelStatus_Params params {};
		params.EnhanceType = EnhanceType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.FindCurrMapWeaponTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InCurrMapName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  OutTransform                                               (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void UShopMenuDetailsWeapon_C::FindCurrMapWeaponTransform(const class FString& InCurrMapName, struct FTransform* OutTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.FindCurrMapWeaponTransform");
		
		UShopMenuDetailsWeapon_C_FindCurrMapWeaponTransform_Params params {};
		params.InCurrMapName = InCurrMapName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTransform != nullptr)
			*OutTransform = params.OutTransform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InCurrMapName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsWeapon_C::Init(const class FString& InCurrMapName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.Init");
		
		UShopMenuDetailsWeapon_C_Init_Params params {};
		params.InCurrMapName = InCurrMapName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.Construct
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsWeapon_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.Construct");
		
		UShopMenuDetailsWeapon_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.ShowDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsSellItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      ItemUniqueId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AmountMin                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bShowProduct                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            RecipeId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsWeapon_C::ShowDetails(int32_t ItemIndex, bool IsSellItem, const class FString& ItemUniqueId, int32_t Amount, int32_t AmountMin, bool bShowProduct, int32_t RecipeId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.ShowDetails");
		
		UShopMenuDetailsWeapon_C_ShowDetails_Params params {};
		params.ItemIndex = ItemIndex;
		params.IsSellItem = IsSellItem;
		params.ItemUniqueId = ItemUniqueId;
		params.Amount = Amount;
		params.AmountMin = AmountMin;
		params.bShowProduct = bShowProduct;
		params.RecipeId = RecipeId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.CloseDetails
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsWeapon_C::CloseDetails()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.CloseDetails");
		
		UShopMenuDetailsWeapon_C_CloseDetails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsWeapon_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.OnAnimationFinished");
		
		UShopMenuDetailsWeapon_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.BndEvt__ShopMenuDetailsWeapon_WBP_ShopMenuDetailsTags_K2Node_ComponentBoundEvent_0_OnClickZoomIn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsWeapon_C::BndEvt__ShopMenuDetailsWeapon_WBP_ShopMenuDetailsTags_K2Node_ComponentBoundEvent_0_OnClickZoomIn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.BndEvt__ShopMenuDetailsWeapon_WBP_ShopMenuDetailsTags_K2Node_ComponentBoundEvent_0_OnClickZoomIn__DelegateSignature");
		
		UShopMenuDetailsWeapon_C_BndEvt__ShopMenuDetailsWeapon_WBP_ShopMenuDetailsTags_K2Node_ComponentBoundEvent_0_OnClickZoomIn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.Destruct
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsWeapon_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.Destruct");
		
		UShopMenuDetailsWeapon_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.BndEvt__ShopMenuDetailsWeapon_Button_AbilityInfo_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsWeapon_C::BndEvt__ShopMenuDetailsWeapon_Button_AbilityInfo_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.BndEvt__ShopMenuDetailsWeapon_Button_AbilityInfo_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UShopMenuDetailsWeapon_C_BndEvt__ShopMenuDetailsWeapon_Button_AbilityInfo_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.BndEvt__ShopMenuDetailsWeapon_SBButtonReturnToRecipe_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsWeapon_C::BndEvt__ShopMenuDetailsWeapon_SBButtonReturnToRecipe_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.BndEvt__ShopMenuDetailsWeapon_SBButtonReturnToRecipe_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UShopMenuDetailsWeapon_C_BndEvt__ShopMenuDetailsWeapon_SBButtonReturnToRecipe_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.BndEvt__ShopMenuDetailsWeapon_SBButtonShowRate_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsWeapon_C::BndEvt__ShopMenuDetailsWeapon_SBButtonShowRate_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.BndEvt__ShopMenuDetailsWeapon_SBButtonShowRate_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		UShopMenuDetailsWeapon_C_BndEvt__ShopMenuDetailsWeapon_SBButtonShowRate_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.ExecuteUbergraph_ShopMenuDetailsWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsWeapon_C::ExecuteUbergraph_ShopMenuDetailsWeapon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.ExecuteUbergraph_ShopMenuDetailsWeapon");
		
		UShopMenuDetailsWeapon_C_ExecuteUbergraph_ShopMenuDetailsWeapon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.OnClickShowOriginal__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsWeapon_C::OnClickShowOriginal__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.OnClickShowOriginal__DelegateSignature");
		
		UShopMenuDetailsWeapon_C_OnClickShowOriginal__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.OnClickZoomIn__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_SBDetailsZoomIn                                  Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsWeapon_C::OnClickZoomIn__DelegateSignature(E_SBDetailsZoomIn Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.OnClickZoomIn__DelegateSignature");
		
		UShopMenuDetailsWeapon_C_OnClickZoomIn__DelegateSignature_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.OnEndCloseDetailAnimation__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 InWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UShopMenuDetailsWeapon_C::OnEndCloseDetailAnimation__DelegateSignature(class UUserWidget* InWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.OnEndCloseDetailAnimation__DelegateSignature");
		
		UShopMenuDetailsWeapon_C_OnEndCloseDetailAnimation__DelegateSignature_Params params {};
		params.InWidget = InWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UShopMenuDetailsWeapon_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C.OnClose__DelegateSignature");
		
		UShopMenuDetailsWeapon_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShopMenuDetailsWeapon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShopMenuDetailsWeapon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ShopMenuDetailsWeapon.ShopMenuDetailsWeapon_C");
		return ptr;
	}

}


