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
	 * 		Name   -> Function SelectMaterial.SelectMaterial_C.UpdateSelectAlert
	 * 		Flags  -> ()
	 */
	void USelectMaterial_C::UpdateSelectAlert()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMaterial.SelectMaterial_C.UpdateSelectAlert");
		
		USelectMaterial_C_UpdateSelectAlert_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMaterial.SelectMaterial_C.Get_HB_SelectAlert_ToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* USelectMaterial_C::Get_HB_SelectAlert_ToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMaterial.SelectMaterial_C.Get_HB_SelectAlert_ToolTipWidget_1");
		
		USelectMaterial_C_Get_HB_SelectAlert_ToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMaterial.SelectMaterial_C.UpdateText
	 * 		Flags  -> ()
	 */
	void USelectMaterial_C::UpdateText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMaterial.SelectMaterial_C.UpdateText");
		
		USelectMaterial_C_UpdateText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMaterial.SelectMaterial_C.IsMoneyAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isAmount                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USelectMaterial_C::IsMoneyAmount(bool* isAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMaterial.SelectMaterial_C.IsMoneyAmount");
		
		USelectMaterial_C_IsMoneyAmount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isAmount != nullptr)
			*isAmount = params.isAmount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMaterial.SelectMaterial_C.RequestWalletShow
	 * 		Flags  -> ()
	 */
	void USelectMaterial_C::RequestWalletShow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMaterial.SelectMaterial_C.RequestWalletShow");
		
		USelectMaterial_C_RequestWalletShow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMaterial.SelectMaterial_C.SetFilterType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFilter_Type                                       FilterType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USelectMaterial_C::SetFilterType(EFilter_Type FilterType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMaterial.SelectMaterial_C.SetFilterType");
		
		USelectMaterial_C_SetFilterType_Params params {};
		params.FilterType = FilterType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMaterial.SelectMaterial_C.CalculateLiquidMemoryMoneyDiscount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            BaseMoney                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CalclatedMoney                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USelectMaterial_C::CalculateLiquidMemoryMoneyDiscount(int32_t BaseMoney, int32_t* CalclatedMoney)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMaterial.SelectMaterial_C.CalculateLiquidMemoryMoneyDiscount");
		
		USelectMaterial_C_CalculateLiquidMemoryMoneyDiscount_Params params {};
		params.BaseMoney = BaseMoney;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CalclatedMoney != nullptr)
			*CalclatedMoney = params.CalclatedMoney;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMaterial.SelectMaterial_C.CalculateRewardBoostMoney
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SupportItemId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            BasicNeedLuno                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CalculatedMoney                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USelectMaterial_C::CalculateRewardBoostMoney(int32_t SupportItemId, int32_t BasicNeedLuno, int32_t* CalculatedMoney)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMaterial.SelectMaterial_C.CalculateRewardBoostMoney");
		
		USelectMaterial_C_CalculateRewardBoostMoney_Params params {};
		params.SupportItemId = SupportItemId;
		params.BasicNeedLuno = BasicNeedLuno;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CalculatedMoney != nullptr)
			*CalculatedMoney = params.CalculatedMoney;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMaterial.SelectMaterial_C.CalclateRewardBoostSupportItemNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            BaseAmount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SupportItemId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CalculatedAmount                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USelectMaterial_C::CalclateRewardBoostSupportItemNum(int32_t BaseAmount, int32_t SupportItemId, int32_t* CalculatedAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMaterial.SelectMaterial_C.CalclateRewardBoostSupportItemNum");
		
		USelectMaterial_C_CalclateRewardBoostSupportItemNum_Params params {};
		params.BaseAmount = BaseAmount;
		params.SupportItemId = SupportItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CalculatedAmount != nullptr)
			*CalculatedAmount = params.CalculatedAmount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMaterial.SelectMaterial_C.IsNeedMoreMaterial
	 * 		Flags  -> ()
	 */
	bool USelectMaterial_C::IsNeedMoreMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMaterial.SelectMaterial_C.IsNeedMoreMaterial");
		
		USelectMaterial_C_IsNeedMoreMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMaterial.SelectMaterial_C.GenerateUIDs
	 * 		Flags  -> ()
	 */
	TArray<struct FOwnItemInfo> USelectMaterial_C::GenerateUIDs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMaterial.SelectMaterial_C.GenerateUIDs");
		
		USelectMaterial_C_GenerateUIDs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMaterial.SelectMaterial_C.Update
	 * 		Flags  -> ()
	 */
	void USelectMaterial_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMaterial.SelectMaterial_C.Update");
		
		USelectMaterial_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMaterial.SelectMaterial_C.UpdateSelectButton
	 * 		Flags  -> ()
	 */
	void USelectMaterial_C::UpdateSelectButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMaterial.SelectMaterial_C.UpdateSelectButton");
		
		USelectMaterial_C_UpdateSelectButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMaterial.SelectMaterial_C.IsMaterialFull
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOk                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USelectMaterial_C::IsMaterialFull(bool* IsOk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMaterial.SelectMaterial_C.IsMaterialFull");
		
		USelectMaterial_C_IsMaterialFull_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsOk != nullptr)
			*IsOk = params.IsOk;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMaterial.SelectMaterial_C.TicketTextUpdate
	 * 		Flags  -> ()
	 */
	void USelectMaterial_C::TicketTextUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMaterial.SelectMaterial_C.TicketTextUpdate");
		
		USelectMaterial_C_TicketTextUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMaterial.SelectMaterial_C.UpdateTicketData
	 * 		Flags  -> ()
	 */
	void USelectMaterial_C::UpdateTicketData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMaterial.SelectMaterial_C.UpdateTicketData");
		
		USelectMaterial_C_UpdateTicketData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMaterial.SelectMaterial_C.CacheTicketData
	 * 		Flags  -> ()
	 */
	void USelectMaterial_C::CacheTicketData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMaterial.SelectMaterial_C.CacheTicketData");
		
		USelectMaterial_C_CacheTicketData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMaterial.SelectMaterial_C.InitializeTickets
	 * 		Flags  -> ()
	 */
	void USelectMaterial_C::InitializeTickets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMaterial.SelectMaterial_C.InitializeTickets");
		
		USelectMaterial_C_InitializeTickets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMaterial.SelectMaterial_C.TextInitialize
	 * 		Flags  -> ()
	 */
	void USelectMaterial_C::TextInitialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMaterial.SelectMaterial_C.TextInitialize");
		
		USelectMaterial_C_TextInitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMaterial.SelectMaterial_C.RemoveMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                OwnItemInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void USelectMaterial_C::RemoveMaterial(const struct FOwnItemInfo& OwnItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMaterial.SelectMaterial_C.RemoveMaterial");
		
		USelectMaterial_C_RemoveMaterial_Params params {};
		params.OwnItemInfo = OwnItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMaterial.SelectMaterial_C.HasMaterialStorage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                ItemInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               bOutExist                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USelectMaterial_C::HasMaterialStorage(const struct FOwnItemInfo& ItemInfo, bool* bOutExist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMaterial.SelectMaterial_C.HasMaterialStorage");
		
		USelectMaterial_C_HasMaterialStorage_Params params {};
		params.ItemInfo = ItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOutExist != nullptr)
			*bOutExist = params.bOutExist;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMaterial.SelectMaterial_C.UpdateMaterialView
	 * 		Flags  -> ()
	 */
	void USelectMaterial_C::UpdateMaterialView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMaterial.SelectMaterial_C.UpdateMaterialView");
		
		USelectMaterial_C_UpdateMaterialView_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMaterial.SelectMaterial_C.Initialize
	 * 		Flags  -> ()
	 */
	void USelectMaterial_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMaterial.SelectMaterial_C.Initialize");
		
		USelectMaterial_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMaterial.SelectMaterial_C.BndEvt__SelectMaterial_CB_MaterialTicketUse_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USelectMaterial_C::BndEvt__SelectMaterial_CB_MaterialTicketUse_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMaterial.SelectMaterial_C.BndEvt__SelectMaterial_CB_MaterialTicketUse_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		USelectMaterial_C_BndEvt__SelectMaterial_CB_MaterialTicketUse_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMaterial.SelectMaterial_C.OnEndDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USelectMaterial_C::OnEndDialog(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMaterial.SelectMaterial_C.OnEndDialog");
		
		USelectMaterial_C_OnEndDialog_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMaterial.SelectMaterial_C.BndEvt__SelectMaterial_StorageFilter_K2Node_ComponentBoundEvent_1_OnApplyFilter__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FFilterGroup>                        Filters                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void USelectMaterial_C::BndEvt__SelectMaterial_StorageFilter_K2Node_ComponentBoundEvent_1_OnApplyFilter__DelegateSignature(TArray<struct FFilterGroup>* Filters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMaterial.SelectMaterial_C.BndEvt__SelectMaterial_StorageFilter_K2Node_ComponentBoundEvent_1_OnApplyFilter__DelegateSignature");
		
		USelectMaterial_C_BndEvt__SelectMaterial_StorageFilter_K2Node_ComponentBoundEvent_1_OnApplyFilter__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filters != nullptr)
			*Filters = params.Filters;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMaterial.SelectMaterial_C.OnSectedLockedItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USelectMaterial_C::OnSectedLockedItems(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMaterial.SelectMaterial_C.OnSectedLockedItems");
		
		USelectMaterial_C_OnSectedLockedItems_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMaterial.SelectMaterial_C.BndEvt__SelectMaterial_MaterialGrid_K2Node_ComponentBoundEvent_2_SelectedItem__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                SelectItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USelectMaterial_C::BndEvt__SelectMaterial_MaterialGrid_K2Node_ComponentBoundEvent_2_SelectedItem__DelegateSignature(const struct FOwnItemInfo& SelectItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMaterial.SelectMaterial_C.BndEvt__SelectMaterial_MaterialGrid_K2Node_ComponentBoundEvent_2_SelectedItem__DelegateSignature");
		
		USelectMaterial_C_BndEvt__SelectMaterial_MaterialGrid_K2Node_ComponentBoundEvent_2_SelectedItem__DelegateSignature_Params params {};
		params.SelectItem = SelectItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMaterial.SelectMaterial_C.BndEvt__SelectMaterial_StorageGrid_K2Node_ComponentBoundEvent_1_SelectedItem__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                SelectItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USelectMaterial_C::BndEvt__SelectMaterial_StorageGrid_K2Node_ComponentBoundEvent_1_SelectedItem__DelegateSignature(const struct FOwnItemInfo& SelectItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMaterial.SelectMaterial_C.BndEvt__SelectMaterial_StorageGrid_K2Node_ComponentBoundEvent_1_SelectedItem__DelegateSignature");
		
		USelectMaterial_C_BndEvt__SelectMaterial_StorageGrid_K2Node_ComponentBoundEvent_1_SelectedItem__DelegateSignature_Params params {};
		params.SelectItem = SelectItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMaterial.SelectMaterial_C.BndEvt__SelectMaterial_BagGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                SelectItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USelectMaterial_C::BndEvt__SelectMaterial_BagGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature(const struct FOwnItemInfo& SelectItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMaterial.SelectMaterial_C.BndEvt__SelectMaterial_BagGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature");
		
		USelectMaterial_C_BndEvt__SelectMaterial_BagGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature_Params params {};
		params.SelectItem = SelectItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMaterial.SelectMaterial_C.OnEndBattleContains
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USelectMaterial_C::OnEndBattleContains(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMaterial.SelectMaterial_C.OnEndBattleContains");
		
		USelectMaterial_C_OnEndBattleContains_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMaterial.SelectMaterial_C.Construct
	 * 		Flags  -> ()
	 */
	void USelectMaterial_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMaterial.SelectMaterial_C.Construct");
		
		USelectMaterial_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMaterial.SelectMaterial_C.RequestClose
	 * 		Flags  -> ()
	 */
	void USelectMaterial_C::RequestClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMaterial.SelectMaterial_C.RequestClose");
		
		USelectMaterial_C_RequestClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMaterial.SelectMaterial_C.Destruct
	 * 		Flags  -> ()
	 */
	void USelectMaterial_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMaterial.SelectMaterial_C.Destruct");
		
		USelectMaterial_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMaterial.SelectMaterial_C.BndEvt__SelectMaterial_CmnClose03_K2Node_ComponentBoundEvent_8_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USelectMaterial_C::BndEvt__SelectMaterial_CmnClose03_K2Node_ComponentBoundEvent_8_OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMaterial.SelectMaterial_C.BndEvt__SelectMaterial_CmnClose03_K2Node_ComponentBoundEvent_8_OnClosed__DelegateSignature");
		
		USelectMaterial_C_BndEvt__SelectMaterial_CmnClose03_K2Node_ComponentBoundEvent_8_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMaterial.SelectMaterial_C.OnCloseDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USelectMaterial_C::OnCloseDialog(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMaterial.SelectMaterial_C.OnCloseDialog");
		
		USelectMaterial_C_OnCloseDialog_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMaterial.SelectMaterial_C.BndEvt__SelectMaterial_StoragePager_K2Node_ComponentBoundEvent_0_OnPageChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PageCurrent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USelectMaterial_C::BndEvt__SelectMaterial_StoragePager_K2Node_ComponentBoundEvent_0_OnPageChange__DelegateSignature(int32_t PageCurrent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMaterial.SelectMaterial_C.BndEvt__SelectMaterial_StoragePager_K2Node_ComponentBoundEvent_0_OnPageChange__DelegateSignature");
		
		USelectMaterial_C_BndEvt__SelectMaterial_StoragePager_K2Node_ComponentBoundEvent_0_OnPageChange__DelegateSignature_Params params {};
		params.PageCurrent = PageCurrent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMaterial.SelectMaterial_C.BndEvt__SelectMaterial_Btn_Selected_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USelectMaterial_C::BndEvt__SelectMaterial_Btn_Selected_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMaterial.SelectMaterial_C.BndEvt__SelectMaterial_Btn_Selected_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");
		
		USelectMaterial_C_BndEvt__SelectMaterial_Btn_Selected_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMaterial.SelectMaterial_C.Event On Begin Selected Material
	 * 		Flags  -> ()
	 */
	void USelectMaterial_C::EventOnBeginSelectedMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMaterial.SelectMaterial_C.Event On Begin Selected Material");
		
		USelectMaterial_C_EventOnBeginSelectedMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMaterial.SelectMaterial_C.Event On End Selected Material
	 * 		Flags  -> ()
	 */
	void USelectMaterial_C::EventOnEndSelectedMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMaterial.SelectMaterial_C.Event On End Selected Material");
		
		USelectMaterial_C_EventOnEndSelectedMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMaterial.SelectMaterial_C.Event On Abort Selected Material
	 * 		Flags  -> ()
	 */
	void USelectMaterial_C::EventOnAbortSelectedMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMaterial.SelectMaterial_C.Event On Abort Selected Material");
		
		USelectMaterial_C_EventOnAbortSelectedMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMaterial.SelectMaterial_C.BndEvt__SelectMaterial_StorageSort_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBItemSortType                                    SortType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USelectMaterial_C::BndEvt__SelectMaterial_StorageSort_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature(ESBItemSortType SortType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMaterial.SelectMaterial_C.BndEvt__SelectMaterial_StorageSort_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature");
		
		USelectMaterial_C_BndEvt__SelectMaterial_StorageSort_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature_Params params {};
		params.SortType = SortType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMaterial.SelectMaterial_C.WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void USelectMaterial_C::WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMaterial.SelectMaterial_C.WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_1");
		
		USelectMaterial_C_WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMaterial.SelectMaterial_C.ExecuteUbergraph_SelectMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USelectMaterial_C::ExecuteUbergraph_SelectMaterial(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMaterial.SelectMaterial_C.ExecuteUbergraph_SelectMaterial");
		
		USelectMaterial_C_ExecuteUbergraph_SelectMaterial_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMaterial.SelectMaterial_C.OnSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FOwnItemInfo>                        Uids                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               UseTicket                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBStackBUseTicket                          StackBTicket                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void USelectMaterial_C::OnSelected__DelegateSignature(TArray<struct FOwnItemInfo>* Uids, bool UseTicket, const struct FSBStackBUseTicket& StackBTicket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMaterial.SelectMaterial_C.OnSelected__DelegateSignature");
		
		USelectMaterial_C_OnSelected__DelegateSignature_Params params {};
		params.UseTicket = UseTicket;
		params.StackBTicket = StackBTicket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Uids != nullptr)
			*Uids = params.Uids;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SelectMaterial.SelectMaterial_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USelectMaterial_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectMaterial.SelectMaterial_C.OnClose__DelegateSignature");
		
		USelectMaterial_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USelectMaterial_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USelectMaterial_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SelectMaterial.SelectMaterial_C");
		return ptr;
	}

}


