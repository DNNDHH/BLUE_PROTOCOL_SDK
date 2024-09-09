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
	 * 		Name   -> Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.SetSeasonPassRewardExtraInfo
	 * 		Flags  -> ()
	 */
	void UFlatShop_ProductItem_DescItem_C::SetSeasonPassRewardExtraInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.SetSeasonPassRewardExtraInfo");
		
		UFlatShop_ProductItem_DescItem_C_SetSeasonPassRewardExtraInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.ClearProductItemData
	 * 		Flags  -> ()
	 */
	void UFlatShop_ProductItem_DescItem_C::ClearProductItemData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.ClearProductItemData");
		
		UFlatShop_ProductItem_DescItem_C_ClearProductItemData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.SetDetailType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_SBProductDetailType                              InDetailType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatShop_ProductItem_DescItem_C::SetDetailType(E_SBProductDetailType InDetailType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.SetDetailType");
		
		UFlatShop_ProductItem_DescItem_C_SetDetailType_Params params {};
		params.InDetailType = InDetailType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.SetRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Rate                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatShop_ProductItem_DescItem_C::SetRate(float Rate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.SetRate");
		
		UFlatShop_ProductItem_DescItem_C_SetRate_Params params {};
		params.Rate = Rate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.SetSwitchType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SwitchId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatShop_ProductItem_DescItem_C::SetSwitchType(int32_t SwitchId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.SetSwitchType");
		
		UFlatShop_ProductItem_DescItem_C_SetSwitchType_Params params {};
		params.SwitchId = SwitchId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.SetProductItemData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_SBProductItemData_C*                     Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatShop_ProductItem_DescItem_C::SetProductItemData(class UBP_SBProductItemData_C* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.SetProductItemData");
		
		UFlatShop_ProductItem_DescItem_C_SetProductItemData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.SetProductInfoReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRewardItemType                                  RewardItemType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatShop_ProductItem_DescItem_C::SetProductInfoReward(ESBRewardItemType RewardItemType, int32_t ItemId, int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.SetProductInfoReward");
		
		UFlatShop_ProductItem_DescItem_C_SetProductInfoReward_Params params {};
		params.RewardItemType = RewardItemType;
		params.ItemId = ItemId;
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.SetProductInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemType                                          ItemType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatShop_ProductItem_DescItem_C::SetProductInfo(int32_t ItemId, EItemType ItemType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.SetProductInfo");
		
		UFlatShop_ProductItem_DescItem_C_SetProductInfo_Params params {};
		params.ItemId = ItemId;
		params.ItemType = ItemType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFlatShop_ProductItem_DescItem_C::BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UFlatShop_ProductItem_DescItem_C_BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.BndEvt__Btn_Item_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFlatShop_ProductItem_DescItem_C::BndEvt__Btn_Item_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.BndEvt__Btn_Item_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UFlatShop_ProductItem_DescItem_C_BndEvt__Btn_Item_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.OnChangeVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   Visibility                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatShop_ProductItem_DescItem_C::OnChangeVisibility(ESlateVisibility Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.OnChangeVisibility");
		
		UFlatShop_ProductItem_DescItem_C_OnChangeVisibility_Params params {};
		params.Visibility = Visibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFlatShop_ProductItem_DescItem_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.PreConstruct");
		
		UFlatShop_ProductItem_DescItem_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.UpdateLayout
	 * 		Flags  -> ()
	 */
	void UFlatShop_ProductItem_DescItem_C::UpdateLayout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.UpdateLayout");
		
		UFlatShop_ProductItem_DescItem_C_UpdateLayout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.LayoutCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_SBProductDetailType                              DetailType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatShop_ProductItem_DescItem_C::LayoutCheck(E_SBProductDetailType DetailType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.LayoutCheck");
		
		UFlatShop_ProductItem_DescItem_C_LayoutCheck_Params params {};
		params.DetailType = DetailType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.SetTrying
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bTrying                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFlatShop_ProductItem_DescItem_C::SetTrying(bool bTrying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.SetTrying");
		
		UFlatShop_ProductItem_DescItem_C_SetTrying_Params params {};
		params.bTrying = bTrying;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.OnChangeTrying
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_SBProductItemData_C*                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bTrying                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFlatShop_ProductItem_DescItem_C::OnChangeTrying(class UBP_SBProductItemData_C* Sender, bool bTrying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.OnChangeTrying");
		
		UFlatShop_ProductItem_DescItem_C_OnChangeTrying_Params params {};
		params.Sender = Sender;
		params.bTrying = bTrying;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UFlatShop_ProductItem_DescItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.Construct");
		
		UFlatShop_ProductItem_DescItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.ExecuteUbergraph_FlatShop_ProductItem_DescItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatShop_ProductItem_DescItem_C::ExecuteUbergraph_FlatShop_ProductItem_DescItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.ExecuteUbergraph_FlatShop_ProductItem_DescItem");
		
		UFlatShop_ProductItem_DescItem_C_ExecuteUbergraph_FlatShop_ProductItem_DescItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.OnBtnClicked2__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_SBProductItemData_C*                     Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatShop_ProductItem_DescItem_C::OnBtnClicked2__DelegateSignature(class UBP_SBProductItemData_C* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.OnBtnClicked2__DelegateSignature");
		
		UFlatShop_ProductItem_DescItem_C_OnBtnClicked2__DelegateSignature_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.OnBtnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSetItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFlatShop_ProductItem_DescItem_C::OnBtnClicked__DelegateSignature(bool IsSetItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.OnBtnClicked__DelegateSignature");
		
		UFlatShop_ProductItem_DescItem_C_OnBtnClicked__DelegateSignature_Params params {};
		params.IsSetItem = IsSetItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFlatShop_ProductItem_DescItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlatShop_ProductItem_DescItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C");
		return ptr;
	}

}


