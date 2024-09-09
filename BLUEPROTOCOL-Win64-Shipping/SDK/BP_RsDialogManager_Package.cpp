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
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.ExitClickedEscBtn
	 * 		Flags  -> ()
	 */
	void UBP_RsDialogManager_C::ExitClickedEscBtn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.ExitClickedEscBtn");
		
		UBP_RsDialogManager_C_ExitClickedEscBtn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.SwitchNextDialog
	 * 		Flags  -> ()
	 */
	void UBP_RsDialogManager_C::SwitchNextDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.SwitchNextDialog");
		
		UBP_RsDialogManager_C_SwitchNextDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.Set Next Dialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERsDialogType                                      NextDialog                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RsDialogManager_C::SetNextDialog(ERsDialogType NextDialog)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.Set Next Dialog");
		
		UBP_RsDialogManager_C_SetNextDialog_Params params {};
		params.NextDialog = NextDialog;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.Set Shop Type
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRmShopMenuType                                  ShopType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RsDialogManager_C::SetShopType(ESBRmShopMenuType ShopType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.Set Shop Type");
		
		UBP_RsDialogManager_C_SetShopType_Params params {};
		params.ShopType = ShopType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.Initialize
	 * 		Flags  -> ()
	 */
	void UBP_RsDialogManager_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.Initialize");
		
		UBP_RsDialogManager_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.SetErrorMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MessageId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ErrorCode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RsDialogManager_C::SetErrorMessage(int32_t MessageId, int32_t ErrorCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.SetErrorMessage");
		
		UBP_RsDialogManager_C_SetErrorMessage_Params params {};
		params.MessageId = MessageId;
		params.ErrorCode = ErrorCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialog_Caution_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERsDialogButtonType                                Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RsDialogManager_C::BndEvt__BP_RsDialog_Caution_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(ERsDialogButtonType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialog_Caution_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");
		
		UBP_RsDialogManager_C_BndEvt__BP_RsDialog_Caution_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.ShowDialog_InputCoupon
	 * 		Flags  -> ()
	 */
	void UBP_RsDialogManager_C::ShowDialog_InputCoupon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.ShowDialog_InputCoupon");
		
		UBP_RsDialogManager_C_ShowDialog_InputCoupon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialog_InputCoupon_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERsDialogButtonType                                Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RsDialogManager_C::BndEvt__BP_RsDialog_InputCoupon_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(ERsDialogButtonType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialog_InputCoupon_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");
		
		UBP_RsDialogManager_C_BndEvt__BP_RsDialog_InputCoupon_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialog_InputCoupon_K2Node_ComponentBoundEvent_1_OnUseCoupon__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Code                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_RsDialogManager_C::BndEvt__BP_RsDialog_InputCoupon_K2Node_ComponentBoundEvent_1_OnUseCoupon__DelegateSignature(const class FString& Code)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialog_InputCoupon_K2Node_ComponentBoundEvent_1_OnUseCoupon__DelegateSignature");
		
		UBP_RsDialogManager_C_BndEvt__BP_RsDialog_InputCoupon_K2Node_ComponentBoundEvent_1_OnUseCoupon__DelegateSignature_Params params {};
		params.Code = Code;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.ShowDialog_LimitCondition
	 * 		Flags  -> ()
	 */
	void UBP_RsDialogManager_C::ShowDialog_LimitCondition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.ShowDialog_LimitCondition");
		
		UBP_RsDialogManager_C_ShowDialog_LimitCondition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialog_LimitCondition_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERsDialogButtonType                                Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RsDialogManager_C::BndEvt__BP_RsDialog_LimitCondition_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(ERsDialogButtonType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialog_LimitCondition_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");
		
		UBP_RsDialogManager_C_BndEvt__BP_RsDialog_LimitCondition_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.AddItem_LimitCondition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsAchieve                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_RsDialogManager_C::AddItem_LimitCondition(bool IsAchieve, const class FString& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.AddItem_LimitCondition");
		
		UBP_RsDialogManager_C_AddItem_LimitCondition_Params params {};
		params.IsAchieve = IsAchieve;
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.ShowDialog_ChargeRoseOrb
	 * 		Flags  -> ()
	 */
	void UBP_RsDialogManager_C::ShowDialog_ChargeRoseOrb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.ShowDialog_ChargeRoseOrb");
		
		UBP_RsDialogManager_C_ShowDialog_ChargeRoseOrb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialog_ChargeRoseOrb_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERsDialogButtonType                                Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RsDialogManager_C::BndEvt__BP_RsDialog_ChargeRoseOrb_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(ERsDialogButtonType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialog_ChargeRoseOrb_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");
		
		UBP_RsDialogManager_C_BndEvt__BP_RsDialog_ChargeRoseOrb_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.ShowDialog_ErrorMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ErrorCode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RsDialogManager_C::ShowDialog_ErrorMessage(int32_t ErrorCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.ShowDialog_ErrorMessage");
		
		UBP_RsDialogManager_C_ShowDialog_ErrorMessage_Params params {};
		params.ErrorCode = ErrorCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialog_ErrorCode_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERsDialogButtonType                                Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RsDialogManager_C::BndEvt__BP_RsDialog_ErrorCode_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature(ERsDialogButtonType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialog_ErrorCode_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature");
		
		UBP_RsDialogManager_C_BndEvt__BP_RsDialog_ErrorCode_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.ShowDialog_Processing
	 * 		Flags  -> ()
	 */
	void UBP_RsDialogManager_C::ShowDialog_Processing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.ShowDialog_Processing");
		
		UBP_RsDialogManager_C_ShowDialog_Processing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialogManager_BP_RsDialog_Processing_K2Node_ComponentBoundEvent_12_OnDialogEnd__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_RsDialogManager_C::BndEvt__BP_RsDialogManager_BP_RsDialog_Processing_K2Node_ComponentBoundEvent_12_OnDialogEnd__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialogManager_BP_RsDialog_Processing_K2Node_ComponentBoundEvent_12_OnDialogEnd__DelegateSignature");
		
		UBP_RsDialogManager_C_BndEvt__BP_RsDialogManager_BP_RsDialog_Processing_K2Node_ComponentBoundEvent_12_OnDialogEnd__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.ShowDialog_UseItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        EffectDescription                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_RsDialogManager_C::ShowDialog_UseItem(const class FText& EffectDescription)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.ShowDialog_UseItem");
		
		UBP_RsDialogManager_C_ShowDialog_UseItem_Params params {};
		params.EffectDescription = EffectDescription;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialog_UseItem_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERsDialogButtonType                                Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RsDialogManager_C::BndEvt__BP_RsDialog_UseItem_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(ERsDialogButtonType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialog_UseItem_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");
		
		UBP_RsDialogManager_C_BndEvt__BP_RsDialog_UseItem_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.ShowDialog_Completed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShowMsgStoreLetter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ERsDialogCurrencyPaidType                          PaidType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RsDialogManager_C::ShowDialog_Completed(bool ShowMsgStoreLetter, ERsDialogCurrencyPaidType PaidType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.ShowDialog_Completed");
		
		UBP_RsDialogManager_C_ShowDialog_Completed_Params params {};
		params.ShowMsgStoreLetter = ShowMsgStoreLetter;
		params.PaidType = PaidType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialog_Completed_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERsDialogButtonType                                Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RsDialogManager_C::BndEvt__BP_RsDialog_Completed_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(ERsDialogButtonType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialog_Completed_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");
		
		UBP_RsDialogManager_C_BndEvt__BP_RsDialog_Completed_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.PlaySE_Completed
	 * 		Flags  -> ()
	 */
	void UBP_RsDialogManager_C::PlaySE_Completed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.PlaySE_Completed");
		
		UBP_RsDialogManager_C_PlaySE_Completed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.ShowDialog_Payment
	 * 		Flags  -> ()
	 */
	void UBP_RsDialogManager_C::ShowDialog_Payment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.ShowDialog_Payment");
		
		UBP_RsDialogManager_C_ShowDialog_Payment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialog_Payment_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERsDialogButtonType                                Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RsDialogManager_C::BndEvt__BP_RsDialog_Payment_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature(ERsDialogButtonType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialog_Payment_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature");
		
		UBP_RsDialogManager_C_BndEvt__BP_RsDialog_Payment_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.ShowDialog_Purchase
	 * 		Flags  -> ()
	 */
	void UBP_RsDialogManager_C::ShowDialog_Purchase()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.ShowDialog_Purchase");
		
		UBP_RsDialogManager_C_ShowDialog_Purchase_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialog_Purchase_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERsDialogButtonType                                Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RsDialogManager_C::BndEvt__BP_RsDialog_Purchase_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(ERsDialogButtonType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialog_Purchase_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");
		
		UBP_RsDialogManager_C_BndEvt__BP_RsDialog_Purchase_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.SetDiscountRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Rate                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RsDialogManager_C::SetDiscountRate(int32_t Rate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.SetDiscountRate");
		
		UBP_RsDialogManager_C_SetDiscountRate_Params params {};
		params.Rate = Rate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.SetDiscountRate_SeasonPass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Rate                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RsDialogManager_C::SetDiscountRate_SeasonPass(int32_t Rate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.SetDiscountRate_SeasonPass");
		
		UBP_RsDialogManager_C_SetDiscountRate_SeasonPass_Params params {};
		params.Rate = Rate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.Construct
	 * 		Flags  -> ()
	 */
	void UBP_RsDialogManager_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.Construct");
		
		UBP_RsDialogManager_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.Destruct
	 * 		Flags  -> ()
	 */
	void UBP_RsDialogManager_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.Destruct");
		
		UBP_RsDialogManager_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.ShowDialog_Caution
	 * 		Flags  -> ()
	 */
	void UBP_RsDialogManager_C::ShowDialog_Caution()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.ShowDialog_Caution");
		
		UBP_RsDialogManager_C_ShowDialog_Caution_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.Show
	 * 		Flags  -> ()
	 */
	void UBP_RsDialogManager_C::Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.Show");
		
		UBP_RsDialogManager_C_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.Hide
	 * 		Flags  -> ()
	 */
	void UBP_RsDialogManager_C::Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.Hide");
		
		UBP_RsDialogManager_C_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.StartUI
	 * 		Flags  -> ()
	 */
	void UBP_RsDialogManager_C::StartUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.StartUI");
		
		UBP_RsDialogManager_C_StartUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.EndUI
	 * 		Flags  -> ()
	 */
	void UBP_RsDialogManager_C::EndUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.EndUI");
		
		UBP_RsDialogManager_C_EndUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.EndAnimIn_Base
	 * 		Flags  -> ()
	 */
	void UBP_RsDialogManager_C::EndAnimIn_Base()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.EndAnimIn_Base");
		
		UBP_RsDialogManager_C_EndAnimIn_Base_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.EndAnimOut_Base
	 * 		Flags  -> ()
	 */
	void UBP_RsDialogManager_C::EndAnimOut_Base()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.EndAnimOut_Base");
		
		UBP_RsDialogManager_C_EndAnimOut_Base_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.EndAnimIn_Dialog
	 * 		Flags  -> ()
	 */
	void UBP_RsDialogManager_C::EndAnimIn_Dialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.EndAnimIn_Dialog");
		
		UBP_RsDialogManager_C_EndAnimIn_Dialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.EndAnimOut_Dialog
	 * 		Flags  -> ()
	 */
	void UBP_RsDialogManager_C::EndAnimOut_Dialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.EndAnimOut_Dialog");
		
		UBP_RsDialogManager_C_EndAnimOut_Dialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__DBtn_07_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_RsDialogManager_C::BndEvt__DBtn_07_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__DBtn_07_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UBP_RsDialogManager_C_BndEvt__DBtn_07_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.SwitchDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERsDialogType                                      Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RsDialogManager_C::SwitchDialog(ERsDialogType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.SwitchDialog");
		
		UBP_RsDialogManager_C_SwitchDialog_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__DBtn_01_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_RsDialogManager_C::BndEvt__DBtn_01_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__DBtn_01_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UBP_RsDialogManager_C_BndEvt__DBtn_01_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__DBtn_02_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_RsDialogManager_C::BndEvt__DBtn_02_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__DBtn_02_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UBP_RsDialogManager_C_BndEvt__DBtn_02_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__DBtn_03_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_RsDialogManager_C::BndEvt__DBtn_03_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__DBtn_03_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UBP_RsDialogManager_C_BndEvt__DBtn_03_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__DBtn_04_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_RsDialogManager_C::BndEvt__DBtn_04_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__DBtn_04_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UBP_RsDialogManager_C_BndEvt__DBtn_04_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__DBtn_05_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_RsDialogManager_C::BndEvt__DBtn_05_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__DBtn_05_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		UBP_RsDialogManager_C_BndEvt__DBtn_05_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__DBtn_06_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_RsDialogManager_C::BndEvt__DBtn_06_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__DBtn_06_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");
		
		UBP_RsDialogManager_C_BndEvt__DBtn_06_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.HideDialog
	 * 		Flags  -> ()
	 */
	void UBP_RsDialogManager_C::HideDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.HideDialog");
		
		UBP_RsDialogManager_C_HideDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.SetCommonInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERsDialogProductTitleType                          ProductTilteType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemSetId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        ProductName                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            RankFrom                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RankTo                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ShowPurchaseNum                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            PurchaseNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ERsDialogPaymentType                               PaymentType01                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PurchasePrice01                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ERsDialogPaymentType                               PaymentType02                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PurchasePrice02                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PaidOnly                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_RsDialogManager_C::SetCommonInfo(ERsDialogProductTitleType ProductTilteType, int32_t ItemSetId, const class FText& ProductName, int32_t RankFrom, int32_t RankTo, bool ShowPurchaseNum, int32_t PurchaseNum, ERsDialogPaymentType PaymentType01, int32_t PurchasePrice01, ERsDialogPaymentType PaymentType02, int32_t PurchasePrice02, bool PaidOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.SetCommonInfo");
		
		UBP_RsDialogManager_C_SetCommonInfo_Params params {};
		params.ProductTilteType = ProductTilteType;
		params.ItemSetId = ItemSetId;
		params.ProductName = ProductName;
		params.RankFrom = RankFrom;
		params.RankTo = RankTo;
		params.ShowPurchaseNum = ShowPurchaseNum;
		params.PurchaseNum = PurchaseNum;
		params.PaymentType01 = PaymentType01;
		params.PurchasePrice01 = PurchasePrice01;
		params.PaymentType02 = PaymentType02;
		params.PurchasePrice02 = PurchasePrice02;
		params.PaidOnly = PaidOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__DBtn_07_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_RsDialogManager_C::BndEvt__DBtn_07_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__DBtn_07_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UBP_RsDialogManager_C_BndEvt__DBtn_07_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RsDialogManager_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.Tick");
		
		UBP_RsDialogManager_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.CloseDialog_Force
	 * 		Flags  -> ()
	 */
	void UBP_RsDialogManager_C::CloseDialog_Force()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.CloseDialog_Force");
		
		UBP_RsDialogManager_C_CloseDialog_Force_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__DBtn_08_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_RsDialogManager_C::BndEvt__DBtn_08_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__DBtn_08_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UBP_RsDialogManager_C_BndEvt__DBtn_08_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__DBtn_09_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_RsDialogManager_C::BndEvt__DBtn_09_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__DBtn_09_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UBP_RsDialogManager_C_BndEvt__DBtn_09_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__FlatShop_Credit_K2Node_ComponentBoundEvent_10_OnRoseOrbClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_RsDialogManager_C::BndEvt__FlatShop_Credit_K2Node_ComponentBoundEvent_10_OnRoseOrbClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__FlatShop_Credit_K2Node_ComponentBoundEvent_10_OnRoseOrbClicked__DelegateSignature");
		
		UBP_RsDialogManager_C_BndEvt__FlatShop_Credit_K2Node_ComponentBoundEvent_10_OnRoseOrbClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__FlatShop_Credit_K2Node_ComponentBoundEvent_11_OnBPPointClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_RsDialogManager_C::BndEvt__FlatShop_Credit_K2Node_ComponentBoundEvent_11_OnBPPointClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__FlatShop_Credit_K2Node_ComponentBoundEvent_11_OnBPPointClicked__DelegateSignature");
		
		UBP_RsDialogManager_C_BndEvt__FlatShop_Credit_K2Node_ComponentBoundEvent_11_OnBPPointClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.JumpShopMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRmShopMenuType                                  Shop                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RsDialogManager_C::JumpShopMenu(ESBRmShopMenuType Shop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.JumpShopMenu");
		
		UBP_RsDialogManager_C_JumpShopMenu_Params params {};
		params.Shop = Shop;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.NextDialog_Event
	 * 		Flags  -> ()
	 */
	void UBP_RsDialogManager_C::NextDialog_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.NextDialog_Event");
		
		UBP_RsDialogManager_C_NextDialog_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.SetRoseOrb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Free                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Paid                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDateTime                                   FreeExpired                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDateTime                                   PaidExpired                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RsDialogManager_C::SetRoseOrb(int32_t Free, int32_t Paid, const struct FDateTime& FreeExpired, const struct FDateTime& PaidExpired)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.SetRoseOrb");
		
		UBP_RsDialogManager_C_SetRoseOrb_Params params {};
		params.Free = Free;
		params.Paid = Paid;
		params.FreeExpired = FreeExpired;
		params.PaidExpired = PaidExpired;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.SetBPPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            BP                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RsDialogManager_C::SetBPPoint(int32_t BP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.SetBPPoint");
		
		UBP_RsDialogManager_C_SetBPPoint_Params params {};
		params.BP = BP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.SetSeasonPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SP                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RsDialogManager_C::SetSeasonPoint(int32_t SP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.SetSeasonPoint");
		
		UBP_RsDialogManager_C_SetSeasonPoint_Params params {};
		params.SP = SP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.CheckEndAnimIn_Event
	 * 		Flags  -> ()
	 */
	void UBP_RsDialogManager_C::CheckEndAnimIn_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.CheckEndAnimIn_Event");
		
		UBP_RsDialogManager_C_CheckEndAnimIn_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialogManager_Btn_Exit_K2Node_ComponentBoundEvent_1_EventClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_RsDialogManager_C::BndEvt__BP_RsDialogManager_Btn_Exit_K2Node_ComponentBoundEvent_1_EventClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialogManager_Btn_Exit_K2Node_ComponentBoundEvent_1_EventClicked__DelegateSignature");
		
		UBP_RsDialogManager_C_BndEvt__BP_RsDialogManager_Btn_Exit_K2Node_ComponentBoundEvent_1_EventClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.RegistInput
	 * 		Flags  -> ()
	 */
	void UBP_RsDialogManager_C::RegistInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.RegistInput");
		
		UBP_RsDialogManager_C_RegistInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.OnCloseDialog
	 * 		Flags  -> ()
	 */
	void UBP_RsDialogManager_C::OnCloseDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.OnCloseDialog");
		
		UBP_RsDialogManager_C_OnCloseDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialogManager_Btn_Commerce_K2Node_ComponentBoundEvent_13_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_RsDialogManager_C::BndEvt__BP_RsDialogManager_Btn_Commerce_K2Node_ComponentBoundEvent_13_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.BndEvt__BP_RsDialogManager_Btn_Commerce_K2Node_ComponentBoundEvent_13_EventOnClicked__DelegateSignature");
		
		UBP_RsDialogManager_C_BndEvt__BP_RsDialogManager_Btn_Commerce_K2Node_ComponentBoundEvent_13_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.ExecuteUbergraph_BP_RsDialogManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RsDialogManager_C::ExecuteUbergraph_BP_RsDialogManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.ExecuteUbergraph_BP_RsDialogManager");
		
		UBP_RsDialogManager_C_ExecuteUbergraph_BP_RsDialogManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.OnUseCoupon__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CouponCode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_RsDialogManager_C::OnUseCoupon__DelegateSignature(const class FString& CouponCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.OnUseCoupon__DelegateSignature");
		
		UBP_RsDialogManager_C_OnUseCoupon__DelegateSignature_Params params {};
		params.CouponCode = CouponCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RsDialogManager.BP_RsDialogManager_C.OnButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERsDialogType                                      RsDialogType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ERsDialogButtonType                                ClickedButtonType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_RsDialogManager_C::OnButtonClicked__DelegateSignature(ERsDialogType RsDialogType, ERsDialogButtonType ClickedButtonType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_RsDialogManager.BP_RsDialogManager_C.OnButtonClicked__DelegateSignature");
		
		UBP_RsDialogManager_C_OnButtonClicked__DelegateSignature_Params params {};
		params.RsDialogType = RsDialogType;
		params.ClickedButtonType = ClickedButtonType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_RsDialogManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_RsDialogManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_RsDialogManager.BP_RsDialogManager_C");
		return ptr;
	}

}


