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
	 * 		Name   -> Function OwnGashaTicketItem.OwnGashaTicketItem_C.GetAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutAmount                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOwnGashaTicketItem_C::GetAmount(int32_t* OutAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OwnGashaTicketItem.OwnGashaTicketItem_C.GetAmount");
		
		UOwnGashaTicketItem_C_GetAmount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAmount != nullptr)
			*OutAmount = params.OutAmount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OwnGashaTicketItem.OwnGashaTicketItem_C.SetExecutionTicketSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBGashaTickets                             InGashaTicketData                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Gender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOwnGashaTicketItem_C::SetExecutionTicketSelect(const struct FSBGashaTickets& InGashaTicketData, int32_t Amount, int32_t Gender, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OwnGashaTicketItem.OwnGashaTicketItem_C.SetExecutionTicketSelect");
		
		UOwnGashaTicketItem_C_SetExecutionTicketSelect_Params params {};
		params.InGashaTicketData = InGashaTicketData;
		params.Amount = Amount;
		params.Gender = Gender;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OwnGashaTicketItem.OwnGashaTicketItem_C.SetOwnTicketList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TokenID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOwnGashaTicketItem_C::SetOwnTicketList(int32_t TokenID, int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OwnGashaTicketItem.OwnGashaTicketItem_C.SetOwnTicketList");
		
		UOwnGashaTicketItem_C_SetOwnTicketList_Params params {};
		params.TokenID = TokenID;
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OwnGashaTicketItem.OwnGashaTicketItem_C.OnLoaded_B24768C447D1D1C1B9F53D83D080C74E
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOwnGashaTicketItem_C::OnLoaded_B24768C447D1D1C1B9F53D83D080C74E(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OwnGashaTicketItem.OwnGashaTicketItem_C.OnLoaded_B24768C447D1D1C1B9F53D83D080C74E");
		
		UOwnGashaTicketItem_C_OnLoaded_B24768C447D1D1C1B9F53D83D080C74E_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OwnGashaTicketItem.OwnGashaTicketItem_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOwnGashaTicketItem_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OwnGashaTicketItem.OwnGashaTicketItem_C.PreConstruct");
		
		UOwnGashaTicketItem_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OwnGashaTicketItem.OwnGashaTicketItem_C.BndEvt__GashaLever_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOwnGashaTicketItem_C::BndEvt__GashaLever_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OwnGashaTicketItem.OwnGashaTicketItem_C.BndEvt__GashaLever_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");
		
		UOwnGashaTicketItem_C_BndEvt__GashaLever_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OwnGashaTicketItem.OwnGashaTicketItem_C.BndEvt__GashaLever_K2Node_ComponentBoundEvent_2_EventRotateAnimFinished__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOwnGashaTicketItem_C::BndEvt__GashaLever_K2Node_ComponentBoundEvent_2_EventRotateAnimFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OwnGashaTicketItem.OwnGashaTicketItem_C.BndEvt__GashaLever_K2Node_ComponentBoundEvent_2_EventRotateAnimFinished__DelegateSignature");
		
		UOwnGashaTicketItem_C_BndEvt__GashaLever_K2Node_ComponentBoundEvent_2_EventRotateAnimFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OwnGashaTicketItem.OwnGashaTicketItem_C.SetIconTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TokenID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOwnGashaTicketItem_C::SetIconTexture(int32_t TokenID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OwnGashaTicketItem.OwnGashaTicketItem_C.SetIconTexture");
		
		UOwnGashaTicketItem_C_SetIconTexture_Params params {};
		params.TokenID = TokenID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OwnGashaTicketItem.OwnGashaTicketItem_C.ExecuteUbergraph_OwnGashaTicketItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOwnGashaTicketItem_C::ExecuteUbergraph_OwnGashaTicketItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OwnGashaTicketItem.OwnGashaTicketItem_C.ExecuteUbergraph_OwnGashaTicketItem");
		
		UOwnGashaTicketItem_C_ExecuteUbergraph_OwnGashaTicketItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OwnGashaTicketItem.OwnGashaTicketItem_C.EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOwnGashaTicketItem_C::EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OwnGashaTicketItem.OwnGashaTicketItem_C.EventOnClicked__DelegateSignature");
		
		UOwnGashaTicketItem_C_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OwnGashaTicketItem.OwnGashaTicketItem_C.OnSelectTicket__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBGashaTickets                             TicketData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOwnGashaTicketItem_C::OnSelectTicket__DelegateSignature(const struct FSBGashaTickets& TicketData, int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OwnGashaTicketItem.OwnGashaTicketItem_C.OnSelectTicket__DelegateSignature");
		
		UOwnGashaTicketItem_C_OnSelectTicket__DelegateSignature_Params params {};
		params.TicketData = TicketData;
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOwnGashaTicketItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOwnGashaTicketItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OwnGashaTicketItem.OwnGashaTicketItem_C");
		return ptr;
	}

}


