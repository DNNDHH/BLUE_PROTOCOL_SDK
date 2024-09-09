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
	 * 		Name   -> Function FlatShop_Credit.FlatShop_Credit_C.UpdateProductCostBySeasonPass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Rate                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PaidOnly                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsLack                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFlatShop_Credit_C::UpdateProductCostBySeasonPass(int32_t Rate, bool PaidOnly, bool* IsLack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Credit.FlatShop_Credit_C.UpdateProductCostBySeasonPass");
		
		UFlatShop_Credit_C_UpdateProductCostBySeasonPass_Params params {};
		params.Rate = Rate;
		params.PaidOnly = PaidOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsLack != nullptr)
			*IsLack = params.IsLack;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Credit.FlatShop_Credit_C.SetSelectNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatShop_Credit_C::SetSelectNum(int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Credit.FlatShop_Credit_C.SetSelectNum");
		
		UFlatShop_Credit_C_SetSelectNum_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Credit.FlatShop_Credit_C.IsExpiredDay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDateTime                                   InDateTime                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsExpired                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFlatShop_Credit_C::IsExpiredDay(const struct FDateTime& InDateTime, bool* IsExpired)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Credit.FlatShop_Credit_C.IsExpiredDay");
		
		UFlatShop_Credit_C_IsExpiredDay_Params params {};
		params.InDateTime = InDateTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsExpired != nullptr)
			*IsExpired = params.IsExpired;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Credit.FlatShop_Credit_C.UpdateProductCostByCoupon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Rate                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PaidOnly                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsLack                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFlatShop_Credit_C::UpdateProductCostByCoupon(int32_t Rate, bool PaidOnly, bool* IsLack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Credit.FlatShop_Credit_C.UpdateProductCostByCoupon");
		
		UFlatShop_Credit_C_UpdateProductCostByCoupon_Params params {};
		params.Rate = Rate;
		params.PaidOnly = PaidOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsLack != nullptr)
			*IsLack = params.IsLack;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Credit.FlatShop_Credit_C.SetProductCost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Cost                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PaidOnly                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsLack                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFlatShop_Credit_C::SetProductCost(int32_t Cost, bool PaidOnly, bool* bIsLack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Credit.FlatShop_Credit_C.SetProductCost");
		
		UFlatShop_Credit_C_SetProductCost_Params params {};
		params.Cost = Cost;
		params.PaidOnly = PaidOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsLack != nullptr)
			*bIsLack = params.bIsLack;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Credit.FlatShop_Credit_C.Reset Count Move
	 * 		Flags  -> ()
	 */
	void UFlatShop_Credit_C::ResetCountMove()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Credit.FlatShop_Credit_C.Reset Count Move");
		
		UFlatShop_Credit_C_ResetCountMove_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Credit.FlatShop_Credit_C.Init
	 * 		Flags  -> ()
	 */
	void UFlatShop_Credit_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Credit.FlatShop_Credit_C.Init");
		
		UFlatShop_Credit_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Credit.FlatShop_Credit_C.SetBPPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            BPPoint                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatShop_Credit_C::SetBPPoint(int32_t BPPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Credit.FlatShop_Credit_C.SetBPPoint");
		
		UFlatShop_Credit_C_SetBPPoint_Params params {};
		params.BPPoint = BPPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Credit.FlatShop_Credit_C.SetRoseOrb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Free                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Paid                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDateTime                                   FreeExpired                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDateTime                                   PaidExpired                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatShop_Credit_C::SetRoseOrb(int32_t Free, int32_t Paid, const struct FDateTime& FreeExpired, const struct FDateTime& PaidExpired)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Credit.FlatShop_Credit_C.SetRoseOrb");
		
		UFlatShop_Credit_C_SetRoseOrb_Params params {};
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
	 * 		Name   -> Function FlatShop_Credit.FlatShop_Credit_C.SetSeasonPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SeasonPoint                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatShop_Credit_C::SetSeasonPoint(int32_t SeasonPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Credit.FlatShop_Credit_C.SetSeasonPoint");
		
		UFlatShop_Credit_C_SetSeasonPoint_Params params {};
		params.SeasonPoint = SeasonPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Credit.FlatShop_Credit_C.SetSwitchType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatShop_Credit_C::SetSwitchType(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Credit.FlatShop_Credit_C.SetSwitchType");
		
		UFlatShop_Credit_C_SetSwitchType_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Credit.FlatShop_Credit_C.ChangeToTicketType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    TicketIdList                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    TicketPriceList                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UFlatShop_Credit_C::ChangeToTicketType(TArray<int32_t>* TicketIdList, TArray<int32_t>* TicketPriceList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Credit.FlatShop_Credit_C.ChangeToTicketType");
		
		UFlatShop_Credit_C_ChangeToTicketType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TicketIdList != nullptr)
			*TicketIdList = params.TicketIdList;
		if (TicketPriceList != nullptr)
			*TicketPriceList = params.TicketPriceList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Credit.FlatShop_Credit_C.SetGashaCreditType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatShop_Credit_C::SetGashaCreditType(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Credit.FlatShop_Credit_C.SetGashaCreditType");
		
		UFlatShop_Credit_C_SetGashaCreditType_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Credit.FlatShop_Credit_C.Set Gasha Credit Num
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Free                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Paid                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SkyCoin                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDateTime                                   FreeExpired                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDateTime                                   PaidExpired                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDateTime                                   BPPointExpired                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatShop_Credit_C::SetGashaCreditNum(int32_t Free, int32_t Paid, int32_t SkyCoin, const struct FDateTime& FreeExpired, const struct FDateTime& PaidExpired, const struct FDateTime& BPPointExpired)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Credit.FlatShop_Credit_C.Set Gasha Credit Num");
		
		UFlatShop_Credit_C_SetGashaCreditNum_Params params {};
		params.Free = Free;
		params.Paid = Paid;
		params.SkyCoin = SkyCoin;
		params.FreeExpired = FreeExpired;
		params.PaidExpired = PaidExpired;
		params.BPPointExpired = BPPointExpired;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Credit.FlatShop_Credit_C.SetCreditNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Free                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Paid                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatShop_Credit_C::SetCreditNum(int32_t Free, int32_t Paid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Credit.FlatShop_Credit_C.SetCreditNum");
		
		UFlatShop_Credit_C_SetCreditNum_Params params {};
		params.Free = Free;
		params.Paid = Paid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Credit.FlatShop_Credit_C.SetShopType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRmShopMenuType                                  ShopType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsDialog                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFlatShop_Credit_C::SetShopType(ESBRmShopMenuType ShopType, bool IsDialog)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Credit.FlatShop_Credit_C.SetShopType");
		
		UFlatShop_Credit_C_SetShopType_Params params {};
		params.ShopType = ShopType;
		params.IsDialog = IsDialog;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__BtnGasha_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFlatShop_Credit_C::BndEvt__BtnGasha_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__BtnGasha_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UFlatShop_Credit_C_BndEvt__BtnGasha_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__BtnGasha_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFlatShop_Credit_C::BndEvt__BtnGasha_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__BtnGasha_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UFlatShop_Credit_C_BndEvt__BtnGasha_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__BtnGasha_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFlatShop_Credit_C::BndEvt__BtnGasha_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__BtnGasha_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UFlatShop_Credit_C_BndEvt__BtnGasha_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__BtnTransition1_K2Node_ComponentBoundEvent_0_EventBtnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFlatShop_Credit_C::BndEvt__BtnTransition1_K2Node_ComponentBoundEvent_0_EventBtnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__BtnTransition1_K2Node_ComponentBoundEvent_0_EventBtnClicked__DelegateSignature");
		
		UFlatShop_Credit_C_BndEvt__BtnTransition1_K2Node_ComponentBoundEvent_0_EventBtnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__BtnTransition2_K2Node_ComponentBoundEvent_4_EventBtnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFlatShop_Credit_C::BndEvt__BtnTransition2_K2Node_ComponentBoundEvent_4_EventBtnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__BtnTransition2_K2Node_ComponentBoundEvent_4_EventBtnClicked__DelegateSignature");
		
		UFlatShop_Credit_C_BndEvt__BtnTransition2_K2Node_ComponentBoundEvent_4_EventBtnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__BtnTransition3_K2Node_ComponentBoundEvent_5_EventBtnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFlatShop_Credit_C::BndEvt__BtnTransition3_K2Node_ComponentBoundEvent_5_EventBtnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__BtnTransition3_K2Node_ComponentBoundEvent_5_EventBtnClicked__DelegateSignature");
		
		UFlatShop_Credit_C_BndEvt__BtnTransition3_K2Node_ComponentBoundEvent_5_EventBtnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__BtnTransition2_1_K2Node_ComponentBoundEvent_6_EventBtnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFlatShop_Credit_C::BndEvt__BtnTransition2_1_K2Node_ComponentBoundEvent_6_EventBtnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__BtnTransition2_1_K2Node_ComponentBoundEvent_6_EventBtnClicked__DelegateSignature");
		
		UFlatShop_Credit_C_BndEvt__BtnTransition2_1_K2Node_ComponentBoundEvent_6_EventBtnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Credit.FlatShop_Credit_C.Construct
	 * 		Flags  -> ()
	 */
	void UFlatShop_Credit_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Credit.FlatShop_Credit_C.Construct");
		
		UFlatShop_Credit_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__BtnTransition1G_K2Node_ComponentBoundEvent_7_EventBtnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFlatShop_Credit_C::BndEvt__BtnTransition1G_K2Node_ComponentBoundEvent_7_EventBtnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__BtnTransition1G_K2Node_ComponentBoundEvent_7_EventBtnClicked__DelegateSignature");
		
		UFlatShop_Credit_C_BndEvt__BtnTransition1G_K2Node_ComponentBoundEvent_7_EventBtnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__BtnTransition2G_K2Node_ComponentBoundEvent_8_EventBtnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFlatShop_Credit_C::BndEvt__BtnTransition2G_K2Node_ComponentBoundEvent_8_EventBtnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__BtnTransition2G_K2Node_ComponentBoundEvent_8_EventBtnClicked__DelegateSignature");
		
		UFlatShop_Credit_C_BndEvt__BtnTransition2G_K2Node_ComponentBoundEvent_8_EventBtnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__FlatShop_Credit_BtnGasha_1_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFlatShop_Credit_C::BndEvt__FlatShop_Credit_BtnGasha_1_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__FlatShop_Credit_BtnGasha_1_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");
		
		UFlatShop_Credit_C_BndEvt__FlatShop_Credit_BtnGasha_1_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__FlatShop_Credit_BtnGasha_1_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFlatShop_Credit_C::BndEvt__FlatShop_Credit_BtnGasha_1_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__FlatShop_Credit_BtnGasha_1_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");
		
		UFlatShop_Credit_C_BndEvt__FlatShop_Credit_BtnGasha_1_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__FlatShop_Credit_BtnGasha_1_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFlatShop_Credit_C::BndEvt__FlatShop_Credit_BtnGasha_1_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__FlatShop_Credit_BtnGasha_1_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");
		
		UFlatShop_Credit_C_BndEvt__FlatShop_Credit_BtnGasha_1_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__FlatShop_Credit_BtnTransition1_1_K2Node_ComponentBoundEvent_12_EventBtnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFlatShop_Credit_C::BndEvt__FlatShop_Credit_BtnTransition1_1_K2Node_ComponentBoundEvent_12_EventBtnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__FlatShop_Credit_BtnTransition1_1_K2Node_ComponentBoundEvent_12_EventBtnClicked__DelegateSignature");
		
		UFlatShop_Credit_C_BndEvt__FlatShop_Credit_BtnTransition1_1_K2Node_ComponentBoundEvent_12_EventBtnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__FlatShop_Credit_BtnTransition1C_1_K2Node_ComponentBoundEvent_13_EventBtnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFlatShop_Credit_C::BndEvt__FlatShop_Credit_BtnTransition1C_1_K2Node_ComponentBoundEvent_13_EventBtnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__FlatShop_Credit_BtnTransition1C_1_K2Node_ComponentBoundEvent_13_EventBtnClicked__DelegateSignature");
		
		UFlatShop_Credit_C_BndEvt__FlatShop_Credit_BtnTransition1C_1_K2Node_ComponentBoundEvent_13_EventBtnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__FlatShop_Credit_BtnTransition3_1_K2Node_ComponentBoundEvent_14_EventBtnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFlatShop_Credit_C::BndEvt__FlatShop_Credit_BtnTransition3_1_K2Node_ComponentBoundEvent_14_EventBtnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__FlatShop_Credit_BtnTransition3_1_K2Node_ComponentBoundEvent_14_EventBtnClicked__DelegateSignature");
		
		UFlatShop_Credit_C_BndEvt__FlatShop_Credit_BtnTransition3_1_K2Node_ComponentBoundEvent_14_EventBtnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__FlatShop_Credit_BtnTransition2_2_K2Node_ComponentBoundEvent_15_EventBtnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFlatShop_Credit_C::BndEvt__FlatShop_Credit_BtnTransition2_2_K2Node_ComponentBoundEvent_15_EventBtnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__FlatShop_Credit_BtnTransition2_2_K2Node_ComponentBoundEvent_15_EventBtnClicked__DelegateSignature");
		
		UFlatShop_Credit_C_BndEvt__FlatShop_Credit_BtnTransition2_2_K2Node_ComponentBoundEvent_15_EventBtnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__FlatShop_Credit_BtnTransition2C_1_K2Node_ComponentBoundEvent_16_EventBtnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFlatShop_Credit_C::BndEvt__FlatShop_Credit_BtnTransition2C_1_K2Node_ComponentBoundEvent_16_EventBtnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__FlatShop_Credit_BtnTransition2C_1_K2Node_ComponentBoundEvent_16_EventBtnClicked__DelegateSignature");
		
		UFlatShop_Credit_C_BndEvt__FlatShop_Credit_BtnTransition2C_1_K2Node_ComponentBoundEvent_16_EventBtnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__FlatShop_Credit_BtnTransition2_3_K2Node_ComponentBoundEvent_17_EventBtnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFlatShop_Credit_C::BndEvt__FlatShop_Credit_BtnTransition2_3_K2Node_ComponentBoundEvent_17_EventBtnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Credit.FlatShop_Credit_C.BndEvt__FlatShop_Credit_BtnTransition2_3_K2Node_ComponentBoundEvent_17_EventBtnClicked__DelegateSignature");
		
		UFlatShop_Credit_C_BndEvt__FlatShop_Credit_BtnTransition2_3_K2Node_ComponentBoundEvent_17_EventBtnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Credit.FlatShop_Credit_C.ResetFlag
	 * 		Flags  -> ()
	 */
	void UFlatShop_Credit_C::ResetFlag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Credit.FlatShop_Credit_C.ResetFlag");
		
		UFlatShop_Credit_C_ResetFlag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Credit.FlatShop_Credit_C.ExecuteUbergraph_FlatShop_Credit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFlatShop_Credit_C::ExecuteUbergraph_FlatShop_Credit(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Credit.FlatShop_Credit_C.ExecuteUbergraph_FlatShop_Credit");
		
		UFlatShop_Credit_C_ExecuteUbergraph_FlatShop_Credit_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Credit.FlatShop_Credit_C.OnBPPointClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFlatShop_Credit_C::OnBPPointClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Credit.FlatShop_Credit_C.OnBPPointClicked__DelegateSignature");
		
		UFlatShop_Credit_C_OnBPPointClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Credit.FlatShop_Credit_C.OnRoseOrbClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFlatShop_Credit_C::OnRoseOrbClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Credit.FlatShop_Credit_C.OnRoseOrbClicked__DelegateSignature");
		
		UFlatShop_Credit_C_OnRoseOrbClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FlatShop_Credit.FlatShop_Credit_C.OnGashaClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFlatShop_Credit_C::OnGashaClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FlatShop_Credit.FlatShop_Credit_C.OnGashaClicked__DelegateSignature");
		
		UFlatShop_Credit_C_OnGashaClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFlatShop_Credit_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlatShop_Credit_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FlatShop_Credit.FlatShop_Credit_C");
		return ptr;
	}

}


