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
	 * 		Name   -> Function UMG_ProductItem.UMG_ProductItem_C.ShowNumberSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_ProductItem_C::ShowNumberSelect(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItem.UMG_ProductItem_C.ShowNumberSelect");
		
		UUMG_ProductItem_C_ShowNumberSelect_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItem.UMG_ProductItem_C.GetInputNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Num                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ProductItem_C::GetInputNum(int32_t* Num)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItem.UMG_ProductItem_C.GetInputNum");
		
		UUMG_ProductItem_C_GetInputNum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Num != nullptr)
			*Num = params.Num;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItem.UMG_ProductItem_C.UnBindCancelKey
	 * 		Flags  -> ()
	 */
	void UUMG_ProductItem_C::UnBindCancelKey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItem.UMG_ProductItem_C.UnBindCancelKey");
		
		UUMG_ProductItem_C_UnBindCancelKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItem.UMG_ProductItem_C.Set Enable Purchase Button
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_ProductItem_C::SetEnablePurchaseButton(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItem.UMG_ProductItem_C.Set Enable Purchase Button");
		
		UUMG_ProductItem_C_SetEnablePurchaseButton_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItem.UMG_ProductItem_C.SetVisibleReceiveButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_ProductItem_C::SetVisibleReceiveButton(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItem.UMG_ProductItem_C.SetVisibleReceiveButton");
		
		UUMG_ProductItem_C_SetVisibleReceiveButton_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItem.UMG_ProductItem_C.SetPrice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Price                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RankPoint                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ProductItem_C::SetPrice(int32_t Price, int32_t RankPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItem.UMG_ProductItem_C.SetPrice");
		
		UUMG_ProductItem_C_SetPrice_Params params {};
		params.Price = Price;
		params.RankPoint = RankPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItem.UMG_ProductItem_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_SBProductItemData_C*                     Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ProductItem_C::SetData(class UBP_SBProductItemData_C* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItem.UMG_ProductItem_C.SetData");
		
		UUMG_ProductItem_C_SetData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItem.UMG_ProductItem_C.SetProductData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_SBProductData_C*                         Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ProductItem_C::SetProductData(class UBP_SBProductData_C* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItem.UMG_ProductItem_C.SetProductData");
		
		UUMG_ProductItem_C_SetProductData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItem.UMG_ProductItem_C.SetProductInterfaceData
	 * 		Flags  -> ()
	 */
	void UUMG_ProductItem_C::SetProductInterfaceData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItem.UMG_ProductItem_C.SetProductInterfaceData");
		
		UUMG_ProductItem_C_SetProductInterfaceData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItem.UMG_ProductItem_C.SetDetailType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_SBProductDetailType                              InDetailType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ProductItem_C::SetDetailType(E_SBProductDetailType InDetailType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItem.UMG_ProductItem_C.SetDetailType");
		
		UUMG_ProductItem_C_SetDetailType_Params params {};
		params.InDetailType = InDetailType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItem.UMG_ProductItem_C.SetPurcahseNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ProductItem_C::SetPurcahseNum(int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItem.UMG_ProductItem_C.SetPurcahseNum");
		
		UUMG_ProductItem_C_SetPurcahseNum_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItem.UMG_ProductItem_C.GetRemainNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Remain                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ProductItem_C::GetRemainNum(int32_t* Remain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItem.UMG_ProductItem_C.GetRemainNum");
		
		UUMG_ProductItem_C_GetRemainNum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Remain != nullptr)
			*Remain = params.Remain;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItem.UMG_ProductItem_C.SetProductInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ProductData                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		TArray<struct FShopItemInfo>                       ItemInfoList                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUMG_ProductItem_C::SetProductInfo(bool ProductData, const class FText& Description, TArray<struct FShopItemInfo>* ItemInfoList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItem.UMG_ProductItem_C.SetProductInfo");
		
		UUMG_ProductItem_C_SetProductInfo_Params params {};
		params.ProductData = ProductData;
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemInfoList != nullptr)
			*ItemInfoList = params.ItemInfoList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItem.UMG_ProductItem_C.BndEvt__UMG_ProductItem_PurchaseTypeSwitchingTab_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            BtnId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ProductItem_C::BndEvt__UMG_ProductItem_PurchaseTypeSwitchingTab_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(int32_t BtnId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItem.UMG_ProductItem_C.BndEvt__UMG_ProductItem_PurchaseTypeSwitchingTab_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UUMG_ProductItem_C_BndEvt__UMG_ProductItem_PurchaseTypeSwitchingTab_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		params.BtnId = BtnId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItem.UMG_ProductItem_C.InitUpdateGasha
	 * 		Flags  -> ()
	 */
	void UUMG_ProductItem_C::InitUpdateGasha()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItem.UMG_ProductItem_C.InitUpdateGasha");
		
		UUMG_ProductItem_C_InitUpdateGasha_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItem.UMG_ProductItem_C.BndEvt__UMG_ProductItem_UMG_ProductItemList_K2Node_ComponentBoundEvent_3_OnBannerVisibilityChanged __DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_ProductItem_C::BndEvt__UMG_ProductItem_UMG_ProductItemList_K2Node_ComponentBoundEvent_3_OnBannerVisibilityChanged__DelegateSignature(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItem.UMG_ProductItem_C.BndEvt__UMG_ProductItem_UMG_ProductItemList_K2Node_ComponentBoundEvent_3_OnBannerVisibilityChanged __DelegateSignature");
		
		UUMG_ProductItem_C_BndEvt__UMG_ProductItem_UMG_ProductItemList_K2Node_ComponentBoundEvent_3_OnBannerVisibilityChanged__DelegateSignature_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItem.UMG_ProductItem_C.BndEvt__GashaShopProductDetail_StepList_Gasha_K2Node_ComponentBoundEvent_2_OnChangeStep__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBGashaInfo                                GashaInfo                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUMG_ProductItem_C::BndEvt__GashaShopProductDetail_StepList_Gasha_K2Node_ComponentBoundEvent_2_OnChangeStep__DelegateSignature(const struct FSBGashaInfo& GashaInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItem.UMG_ProductItem_C.BndEvt__GashaShopProductDetail_StepList_Gasha_K2Node_ComponentBoundEvent_2_OnChangeStep__DelegateSignature");
		
		UUMG_ProductItem_C_BndEvt__GashaShopProductDetail_StepList_Gasha_K2Node_ComponentBoundEvent_2_OnChangeStep__DelegateSignature_Params params {};
		params.GashaInfo = GashaInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItem.UMG_ProductItem_C.BndEvt__GashaShopProductDetail_BtnNotes_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_ProductItem_C::BndEvt__GashaShopProductDetail_BtnNotes_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItem.UMG_ProductItem_C.BndEvt__GashaShopProductDetail_BtnNotes_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");
		
		UUMG_ProductItem_C_BndEvt__GashaShopProductDetail_BtnNotes_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItem.UMG_ProductItem_C.OnClose_SubWindow
	 * 		Flags  -> ()
	 */
	void UUMG_ProductItem_C::OnClose_SubWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItem.UMG_ProductItem_C.OnClose_SubWindow");
		
		UUMG_ProductItem_C_OnClose_SubWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItem.UMG_ProductItem_C.InitStepUp
	 * 		Flags  -> ()
	 */
	void UUMG_ProductItem_C::InitStepUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItem.UMG_ProductItem_C.InitStepUp");
		
		UUMG_ProductItem_C_InitStepUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItem.UMG_ProductItem_C.Destruct_Gasha
	 * 		Flags  -> ()
	 */
	void UUMG_ProductItem_C::Destruct_Gasha()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItem.UMG_ProductItem_C.Destruct_Gasha");
		
		UUMG_ProductItem_C_Destruct_Gasha_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItem.UMG_ProductItem_C.SetProductData_RoPS
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBRoseOrbShopItemMasterData                ProductData                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUMG_ProductItem_C::SetProductData_RoPS(const struct FSBRoseOrbShopItemMasterData& ProductData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItem.UMG_ProductItem_C.SetProductData_RoPS");
		
		UUMG_ProductItem_C_SetProductData_RoPS_Params params {};
		params.ProductData = ProductData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItem.UMG_ProductItem_C.BndEvt__CmnBtn27_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_ProductItem_C::BndEvt__CmnBtn27_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItem.UMG_ProductItem_C.BndEvt__CmnBtn27_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");
		
		UUMG_ProductItem_C_BndEvt__CmnBtn27_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItem.UMG_ProductItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UUMG_ProductItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItem.UMG_ProductItem_C.Construct");
		
		UUMG_ProductItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItem.UMG_ProductItem_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_ProductItem_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItem.UMG_ProductItem_C.PreConstruct");
		
		UUMG_ProductItem_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItem.UMG_ProductItem_C.UpdateLayout
	 * 		Flags  -> ()
	 */
	void UUMG_ProductItem_C::UpdateLayout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItem.UMG_ProductItem_C.UpdateLayout");
		
		UUMG_ProductItem_C_UpdateLayout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItem.UMG_ProductItem_C.BndEvt__FlatShop_ProductItem_2_K2Node_ComponentBoundEvent_9_OnItemClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_SBProductItemData_C*                     Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ProductItem_C::BndEvt__FlatShop_ProductItem_2_K2Node_ComponentBoundEvent_9_OnItemClicked__DelegateSignature(class UBP_SBProductItemData_C* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItem.UMG_ProductItem_C.BndEvt__FlatShop_ProductItem_2_K2Node_ComponentBoundEvent_9_OnItemClicked__DelegateSignature");
		
		UUMG_ProductItem_C_BndEvt__FlatShop_ProductItem_2_K2Node_ComponentBoundEvent_9_OnItemClicked__DelegateSignature_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItem.UMG_ProductItem_C.BndEvt__BtnReceive_K2Node_ComponentBoundEvent_13_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_ProductItem_C::BndEvt__BtnReceive_K2Node_ComponentBoundEvent_13_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItem.UMG_ProductItem_C.BndEvt__BtnReceive_K2Node_ComponentBoundEvent_13_EventOnClicked__DelegateSignature");
		
		UUMG_ProductItem_C_BndEvt__BtnReceive_K2Node_ComponentBoundEvent_13_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItem.UMG_ProductItem_C.BndEvt__FlatShop_ProductItemList_K2Node_ComponentBoundEvent_14_OnSelectedItemData__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_SBProductItemData_C*                     Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bTrying                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_ProductItem_C::BndEvt__FlatShop_ProductItemList_K2Node_ComponentBoundEvent_14_OnSelectedItemData__DelegateSignature(class UBP_SBProductItemData_C* Data, bool bTrying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItem.UMG_ProductItem_C.BndEvt__FlatShop_ProductItemList_K2Node_ComponentBoundEvent_14_OnSelectedItemData__DelegateSignature");
		
		UUMG_ProductItem_C_BndEvt__FlatShop_ProductItemList_K2Node_ComponentBoundEvent_14_OnSelectedItemData__DelegateSignature_Params params {};
		params.Data = Data;
		params.bTrying = bTrying;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItem.UMG_ProductItem_C.OnInputCancelKey
	 * 		Flags  -> ()
	 */
	void UUMG_ProductItem_C::OnInputCancelKey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItem.UMG_ProductItem_C.OnInputCancelKey");
		
		UUMG_ProductItem_C_OnInputCancelKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItem.UMG_ProductItem_C.CreateItemList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UBP_SBProductItemData_C*>             ItemDataList                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUMG_ProductItem_C::CreateItemList(TArray<class UBP_SBProductItemData_C*> ItemDataList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItem.UMG_ProductItem_C.CreateItemList");
		
		UUMG_ProductItem_C_CreateItemList_Params params {};
		params.ItemDataList = ItemDataList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItem.UMG_ProductItem_C.BndEvt__UMG_ProductItemNumberInput_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ProductItem_C::BndEvt__UMG_ProductItemNumberInput_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItem.UMG_ProductItem_C.BndEvt__UMG_ProductItemNumberInput_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature");
		
		UUMG_ProductItem_C_BndEvt__UMG_ProductItemNumberInput_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItem.UMG_ProductItem_C.BndEvt__BtnPurchase_1_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_ProductItem_C::BndEvt__BtnPurchase_1_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItem.UMG_ProductItem_C.BndEvt__BtnPurchase_1_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");
		
		UUMG_ProductItem_C_BndEvt__BtnPurchase_1_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItem.UMG_ProductItem_C.BndEvt__UMG_ProductItem_CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_ProductItem_C::BndEvt__UMG_ProductItem_CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItem.UMG_ProductItem_C.BndEvt__UMG_ProductItem_CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature");
		
		UUMG_ProductItem_C_BndEvt__UMG_ProductItem_CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItem.UMG_ProductItem_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUMG_ProductItem_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItem.UMG_ProductItem_C.Destruct");
		
		UUMG_ProductItem_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItem.UMG_ProductItem_C.ExecuteUbergraph_UMG_ProductItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ProductItem_C::ExecuteUbergraph_UMG_ProductItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItem.UMG_ProductItem_C.ExecuteUbergraph_UMG_ProductItem");
		
		UUMG_ProductItem_C_ExecuteUbergraph_UMG_ProductItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItem.UMG_ProductItem_C.OnChangePurchaseType__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            BtnId                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ProductItem_C::OnChangePurchaseType__DelegateSignature(int32_t BtnId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItem.UMG_ProductItem_C.OnChangePurchaseType__DelegateSignature");
		
		UUMG_ProductItem_C_OnChangePurchaseType__DelegateSignature_Params params {};
		params.BtnId = BtnId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItem.UMG_ProductItem_C.OnChangeStep__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBGashaInfo                                GashaInfo                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUMG_ProductItem_C::OnChangeStep__DelegateSignature(const struct FSBGashaInfo& GashaInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItem.UMG_ProductItem_C.OnChangeStep__DelegateSignature");
		
		UUMG_ProductItem_C_OnChangeStep__DelegateSignature_Params params {};
		params.GashaInfo = GashaInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItem.UMG_ProductItem_C.OnSelectedItemData__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_SBProductItemData_C*                     Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bTrying                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_ProductItem_C::OnSelectedItemData__DelegateSignature(class UBP_SBProductItemData_C* Data, bool bTrying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItem.UMG_ProductItem_C.OnSelectedItemData__DelegateSignature");
		
		UUMG_ProductItem_C_OnSelectedItemData__DelegateSignature_Params params {};
		params.Data = Data;
		params.bTrying = bTrying;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItem.UMG_ProductItem_C.OnReceiveButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_ProductItem_C::OnReceiveButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItem.UMG_ProductItem_C.OnReceiveButtonClicked__DelegateSignature");
		
		UUMG_ProductItem_C_OnReceiveButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItem.UMG_ProductItem_C.OnItemClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_SBProductItemData_C*                     Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ProductItem_C::OnItemClicked__DelegateSignature(class UBP_SBProductItemData_C* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItem.UMG_ProductItem_C.OnItemClicked__DelegateSignature");
		
		UUMG_ProductItem_C_OnItemClicked__DelegateSignature_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItem.UMG_ProductItem_C.OnPurchase__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_ProductItem_C::OnPurchase__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItem.UMG_ProductItem_C.OnPurchase__DelegateSignature");
		
		UUMG_ProductItem_C_OnPurchase__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductItem.UMG_ProductItem_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_ProductItem_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductItem.UMG_ProductItem_C.OnClose__DelegateSignature");
		
		UUMG_ProductItem_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_ProductItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_ProductItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_ProductItem.UMG_ProductItem_C");
		return ptr;
	}

}


