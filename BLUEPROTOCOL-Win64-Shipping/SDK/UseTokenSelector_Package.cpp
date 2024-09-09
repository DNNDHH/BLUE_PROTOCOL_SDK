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
	 * 		Name   -> Function UseTokenSelector.UseTokenSelector_C.IfMeetDemand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               MeetDemand                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUseTokenSelector_C::IfMeetDemand(int32_t Count, bool* MeetDemand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UseTokenSelector.UseTokenSelector_C.IfMeetDemand");
		
		UUseTokenSelector_C_IfMeetDemand_Params params {};
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MeetDemand != nullptr)
			*MeetDemand = params.MeetDemand;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UseTokenSelector.UseTokenSelector_C.IsMeetDemand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               MeetDemand                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUseTokenSelector_C::IsMeetDemand(bool* MeetDemand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UseTokenSelector.UseTokenSelector_C.IsMeetDemand");
		
		UUseTokenSelector_C_IsMeetDemand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MeetDemand != nullptr)
			*MeetDemand = params.MeetDemand;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UseTokenSelector.UseTokenSelector_C.SetCraftCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CraftCount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUseTokenSelector_C::SetCraftCount(int32_t CraftCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UseTokenSelector.UseTokenSelector_C.SetCraftCount");
		
		UUseTokenSelector_C_SetCraftCount_Params params {};
		params.CraftCount = CraftCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UseTokenSelector.UseTokenSelector_C.IsUseToken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    UseToken                                                   (Parm, OutParm)
	 */
	void UUseTokenSelector_C::IsUseToken(TArray<int32_t>* UseToken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UseTokenSelector.UseTokenSelector_C.IsUseToken");
		
		UUseTokenSelector_C_IsUseToken_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UseToken != nullptr)
			*UseToken = params.UseToken;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UseTokenSelector.UseTokenSelector_C.SetRecepi
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCraftMasterData                            Recepi                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUseTokenSelector_C::SetRecepi(const struct FCraftMasterData& Recepi)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UseTokenSelector.UseTokenSelector_C.SetRecepi");
		
		UUseTokenSelector_C_SetRecepi_Params params {};
		params.Recepi = Recepi;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UseTokenSelector.UseTokenSelector_C.BndEvt__UseTokenSelector_Btn_TicketSelect_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUseTokenSelector_C::BndEvt__UseTokenSelector_Btn_TicketSelect_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UseTokenSelector.UseTokenSelector_C.BndEvt__UseTokenSelector_Btn_TicketSelect_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UUseTokenSelector_C_BndEvt__UseTokenSelector_Btn_TicketSelect_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UseTokenSelector.UseTokenSelector_C.OnSelectToken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TokenID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUseTokenSelector_C::OnSelectToken(int32_t TokenID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UseTokenSelector.UseTokenSelector_C.OnSelectToken");
		
		UUseTokenSelector_C_OnSelectToken_Params params {};
		params.TokenID = TokenID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UseTokenSelector.UseTokenSelector_C.OnCloseTokenSelector
	 * 		Flags  -> ()
	 */
	void UUseTokenSelector_C::OnCloseTokenSelector()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UseTokenSelector.UseTokenSelector_C.OnCloseTokenSelector");
		
		UUseTokenSelector_C_OnCloseTokenSelector_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UseTokenSelector.UseTokenSelector_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUseTokenSelector_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UseTokenSelector.UseTokenSelector_C.Destruct");
		
		UUseTokenSelector_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UseTokenSelector.UseTokenSelector_C.BndEvt__UseTokenSelector_Btn_TicketSelect_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUseTokenSelector_C::BndEvt__UseTokenSelector_Btn_TicketSelect_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UseTokenSelector.UseTokenSelector_C.BndEvt__UseTokenSelector_Btn_TicketSelect_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UUseTokenSelector_C_BndEvt__UseTokenSelector_Btn_TicketSelect_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UseTokenSelector.UseTokenSelector_C.BndEvt__UseTokenSelector_Btn_TicketSelect_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUseTokenSelector_C::BndEvt__UseTokenSelector_Btn_TicketSelect_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UseTokenSelector.UseTokenSelector_C.BndEvt__UseTokenSelector_Btn_TicketSelect_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UUseTokenSelector_C_BndEvt__UseTokenSelector_Btn_TicketSelect_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UseTokenSelector.UseTokenSelector_C.ResetToken
	 * 		Flags  -> ()
	 */
	void UUseTokenSelector_C::ResetToken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UseTokenSelector.UseTokenSelector_C.ResetToken");
		
		UUseTokenSelector_C_ResetToken_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UseTokenSelector.UseTokenSelector_C.ExecuteUbergraph_UseTokenSelector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUseTokenSelector_C::ExecuteUbergraph_UseTokenSelector(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UseTokenSelector.UseTokenSelector_C.ExecuteUbergraph_UseTokenSelector");
		
		UUseTokenSelector_C_ExecuteUbergraph_UseTokenSelector_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UseTokenSelector.UseTokenSelector_C.OnTokenSelectUpdate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUseTokenSelector_C::OnTokenSelectUpdate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UseTokenSelector.UseTokenSelector_C.OnTokenSelectUpdate__DelegateSignature");
		
		UUseTokenSelector_C_OnTokenSelectUpdate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUseTokenSelector_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUseTokenSelector_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UseTokenSelector.UseTokenSelector_C");
		return ptr;
	}

}


