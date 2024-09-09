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
	 * 		Name   -> Function UMG_ProductDetail.UMG_ProductDetail_C.SetButtonPosition_Posing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EShopType                                          IsExchangeShop                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ProductDetail_C::SetButtonPosition_Posing(EShopType IsExchangeShop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductDetail.UMG_ProductDetail_C.SetButtonPosition_Posing");
		
		UUMG_ProductDetail_C_SetButtonPosition_Posing_Params params {};
		params.IsExchangeShop = IsExchangeShop;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductDetail.UMG_ProductDetail_C.SetSelectedSimpleItemData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemType                                          ItemType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bToggleTrying                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bForceTrying                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_ProductDetail_C::SetSelectedSimpleItemData(EItemType ItemType, int32_t ItemIndex, int32_t Amount, bool bToggleTrying, bool bForceTrying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductDetail.UMG_ProductDetail_C.SetSelectedSimpleItemData");
		
		UUMG_ProductDetail_C_SetSelectedSimpleItemData_Params params {};
		params.ItemType = ItemType;
		params.ItemIndex = ItemIndex;
		params.Amount = Amount;
		params.bToggleTrying = bToggleTrying;
		params.bForceTrying = bForceTrying;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductDetail.UMG_ProductDetail_C.UnsetSelectedItemData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_SBProductItemData_C*                     ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ProductDetail_C::UnsetSelectedItemData(class UBP_SBProductItemData_C* ItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductDetail.UMG_ProductDetail_C.UnsetSelectedItemData");
		
		UUMG_ProductDetail_C_UnsetSelectedItemData_Params params {};
		params.ItemData = ItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductDetail.UMG_ProductDetail_C.UnsetTryingCostumeItemData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_SBProductItemData_C*                     Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ProductDetail_C::UnsetTryingCostumeItemData(class UBP_SBProductItemData_C* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductDetail.UMG_ProductDetail_C.UnsetTryingCostumeItemData");
		
		UUMG_ProductDetail_C_UnsetTryingCostumeItemData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductDetail.UMG_ProductDetail_C.SetSelectedItemData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_SBProductItemData_C*                     ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bToggleTrying                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bForceTrying                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_ProductDetail_C::SetSelectedItemData(class UBP_SBProductItemData_C* ItemData, bool bToggleTrying, bool bForceTrying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductDetail.UMG_ProductDetail_C.SetSelectedItemData");
		
		UUMG_ProductDetail_C_SetSelectedItemData_Params params {};
		params.ItemData = ItemData;
		params.bToggleTrying = bToggleTrying;
		params.bForceTrying = bForceTrying;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductDetail.UMG_ProductDetail_C.SetTryingAllIfCostumeSet
	 * 		Flags  -> ()
	 */
	void UUMG_ProductDetail_C::SetTryingAllIfCostumeSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductDetail.UMG_ProductDetail_C.SetTryingAllIfCostumeSet");
		
		UUMG_ProductDetail_C_SetTryingAllIfCostumeSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductDetail.UMG_ProductDetail_C.SetTryingCostumeItemData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_SBProductItemData_C*                     Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bTrying                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bUpdateCapture                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_ProductDetail_C::SetTryingCostumeItemData(class UBP_SBProductItemData_C* Data, bool bTrying, bool bUpdateCapture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductDetail.UMG_ProductDetail_C.SetTryingCostumeItemData");
		
		UUMG_ProductDetail_C_SetTryingCostumeItemData_Params params {};
		params.Data = Data;
		params.bTrying = bTrying;
		params.bUpdateCapture = bUpdateCapture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductDetail.UMG_ProductDetail_C.BndEvt__CmnCostume_K2Node_ComponentBoundEvent_0_OnTrying__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bTrying                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_ProductDetail_C::BndEvt__CmnCostume_K2Node_ComponentBoundEvent_0_OnTrying__DelegateSignature(int32_t ItemIndex, bool bTrying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductDetail.UMG_ProductDetail_C.BndEvt__CmnCostume_K2Node_ComponentBoundEvent_0_OnTrying__DelegateSignature");
		
		UUMG_ProductDetail_C_BndEvt__CmnCostume_K2Node_ComponentBoundEvent_0_OnTrying__DelegateSignature_Params params {};
		params.ItemIndex = ItemIndex;
		params.bTrying = bTrying;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductDetail.UMG_ProductDetail_C.BndEvt__CmnCostume_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_ProductDetail_C::BndEvt__CmnCostume_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductDetail.UMG_ProductDetail_C.BndEvt__CmnCostume_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature");
		
		UUMG_ProductDetail_C_BndEvt__CmnCostume_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductDetail.UMG_ProductDetail_C.BndEvt__CmnCostume_K2Node_ComponentBoundEvent_2_OnClickZoomOut__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_ProductDetail_C::BndEvt__CmnCostume_K2Node_ComponentBoundEvent_2_OnClickZoomOut__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductDetail.UMG_ProductDetail_C.BndEvt__CmnCostume_K2Node_ComponentBoundEvent_2_OnClickZoomOut__DelegateSignature");
		
		UUMG_ProductDetail_C_BndEvt__CmnCostume_K2Node_ComponentBoundEvent_2_OnClickZoomOut__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductDetail.UMG_ProductDetail_C.BndEvt__ExchangeShop_2_K2Node_ComponentBoundEvent_3_OnShow__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_ProductDetail_C::BndEvt__ExchangeShop_2_K2Node_ComponentBoundEvent_3_OnShow__DelegateSignature(bool bShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductDetail.UMG_ProductDetail_C.BndEvt__ExchangeShop_2_K2Node_ComponentBoundEvent_3_OnShow__DelegateSignature");
		
		UUMG_ProductDetail_C_BndEvt__ExchangeShop_2_K2Node_ComponentBoundEvent_3_OnShow__DelegateSignature_Params params {};
		params.bShow = bShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductDetail.UMG_ProductDetail_C.BndEvt__UMG_ProductDetail_ShopMenuDetailsSwitcher_K2Node_ComponentBoundEvent_5_OnClickItemBoxDetail__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_ProductDetail_C::BndEvt__UMG_ProductDetail_ShopMenuDetailsSwitcher_K2Node_ComponentBoundEvent_5_OnClickItemBoxDetail__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductDetail.UMG_ProductDetail_C.BndEvt__UMG_ProductDetail_ShopMenuDetailsSwitcher_K2Node_ComponentBoundEvent_5_OnClickItemBoxDetail__DelegateSignature");
		
		UUMG_ProductDetail_C_BndEvt__UMG_ProductDetail_ShopMenuDetailsSwitcher_K2Node_ComponentBoundEvent_5_OnClickItemBoxDetail__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductDetail.UMG_ProductDetail_C.BndEvt__UMG_ProductDetail_ShopMenuDetailsSwitcher_K2Node_ComponentBoundEvent_0_OnClickZoomIn__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_SBDetailsZoomIn                                  Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ProductDetail_C::BndEvt__UMG_ProductDetail_ShopMenuDetailsSwitcher_K2Node_ComponentBoundEvent_0_OnClickZoomIn__DelegateSignature(E_SBDetailsZoomIn Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductDetail.UMG_ProductDetail_C.BndEvt__UMG_ProductDetail_ShopMenuDetailsSwitcher_K2Node_ComponentBoundEvent_0_OnClickZoomIn__DelegateSignature");
		
		UUMG_ProductDetail_C_BndEvt__UMG_ProductDetail_ShopMenuDetailsSwitcher_K2Node_ComponentBoundEvent_0_OnClickZoomIn__DelegateSignature_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductDetail.UMG_ProductDetail_C.Construct
	 * 		Flags  -> ()
	 */
	void UUMG_ProductDetail_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductDetail.UMG_ProductDetail_C.Construct");
		
		UUMG_ProductDetail_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductDetail.UMG_ProductDetail_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_ProductDetail_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductDetail.UMG_ProductDetail_C.PreConstruct");
		
		UUMG_ProductDetail_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductDetail.UMG_ProductDetail_C.BndEvt__CmnCostume_K2Node_ComponentBoundEvent_1_OnCreatePlayerCapture__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_PlayerSceneCapture2D_Studio_C*           PlayerCapture                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ProductDetail_C::BndEvt__CmnCostume_K2Node_ComponentBoundEvent_1_OnCreatePlayerCapture__DelegateSignature(class ABP_PlayerSceneCapture2D_Studio_C* PlayerCapture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductDetail.UMG_ProductDetail_C.BndEvt__CmnCostume_K2Node_ComponentBoundEvent_1_OnCreatePlayerCapture__DelegateSignature");
		
		UUMG_ProductDetail_C_BndEvt__CmnCostume_K2Node_ComponentBoundEvent_1_OnCreatePlayerCapture__DelegateSignature_Params params {};
		params.PlayerCapture = PlayerCapture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductDetail.UMG_ProductDetail_C.SetZoomFlag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bZoomIn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bOnlyDisplay                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bAnimation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_ProductDetail_C::SetZoomFlag(bool bZoomIn, bool bOnlyDisplay, bool bAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductDetail.UMG_ProductDetail_C.SetZoomFlag");
		
		UUMG_ProductDetail_C_SetZoomFlag_Params params {};
		params.bZoomIn = bZoomIn;
		params.bOnlyDisplay = bOnlyDisplay;
		params.bAnimation = bAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductDetail.UMG_ProductDetail_C.SetData
	 * 		Flags  -> ()
	 */
	void UUMG_ProductDetail_C::SetData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductDetail.UMG_ProductDetail_C.SetData");
		
		UUMG_ProductDetail_C_SetData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductDetail.UMG_ProductDetail_C.CloseItemDetail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bAnimation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_ProductDetail_C::CloseItemDetail(bool bAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductDetail.UMG_ProductDetail_C.CloseItemDetail");
		
		UUMG_ProductDetail_C_CloseItemDetail_Params params {};
		params.bAnimation = bAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductDetail.UMG_ProductDetail_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUMG_ProductDetail_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductDetail.UMG_ProductDetail_C.Destruct");
		
		UUMG_ProductDetail_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductDetail.UMG_ProductDetail_C.ExecuteUbergraph_UMG_ProductDetail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ProductDetail_C::ExecuteUbergraph_UMG_ProductDetail(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductDetail.UMG_ProductDetail_C.ExecuteUbergraph_UMG_ProductDetail");
		
		UUMG_ProductDetail_C_ExecuteUbergraph_UMG_ProductDetail_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductDetail.UMG_ProductDetail_C.OnClickItemBoxDetail__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_SBProductItemData_C*                     Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ProductDetail_C::OnClickItemBoxDetail__DelegateSignature(class UBP_SBProductItemData_C* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductDetail.UMG_ProductDetail_C.OnClickItemBoxDetail__DelegateSignature");
		
		UUMG_ProductDetail_C_OnClickItemBoxDetail__DelegateSignature_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductDetail.UMG_ProductDetail_C.OnClickZoomIn__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_SBDetailsZoomIn                                  Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_ProductDetail_C::OnClickZoomIn__DelegateSignature(E_SBDetailsZoomIn Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductDetail.UMG_ProductDetail_C.OnClickZoomIn__DelegateSignature");
		
		UUMG_ProductDetail_C_OnClickZoomIn__DelegateSignature_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_ProductDetail.UMG_ProductDetail_C.OnShowDetails__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_ProductDetail_C::OnShowDetails__DelegateSignature(bool bShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_ProductDetail.UMG_ProductDetail_C.OnShowDetails__DelegateSignature");
		
		UUMG_ProductDetail_C_OnShowDetails__DelegateSignature_Params params {};
		params.bShow = bShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_ProductDetail_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_ProductDetail_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_ProductDetail.UMG_ProductDetail_C");
		return ptr;
	}

}


