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
	 * 		Name   -> Function TicketSelectButtonView.TicketSelectButtonView_C.UpdateTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UTicketSelectButtonView_C::UpdateTarget(const struct FOwnItemInfo& Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TicketSelectButtonView.TicketSelectButtonView_C.UpdateTarget");
		
		UTicketSelectButtonView_C_UpdateTarget_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TicketSelectButtonView.TicketSelectButtonView_C.CheckRewardRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FSBStackBMasterData                         SBStackBMasterData                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	float UTicketSelectButtonView_C::CheckRewardRate(const struct FOwnItemInfo& InputPin, const struct FSBStackBMasterData& SBStackBMasterData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TicketSelectButtonView.TicketSelectButtonView_C.CheckRewardRate");
		
		UTicketSelectButtonView_C_CheckRewardRate_Params params {};
		params.InputPin = InputPin;
		params.SBStackBMasterData = SBStackBMasterData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TicketSelectButtonView.TicketSelectButtonView_C.UpdateTextData
	 * 		Flags  -> ()
	 */
	void UTicketSelectButtonView_C::UpdateTextData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TicketSelectButtonView.TicketSelectButtonView_C.UpdateTextData");
		
		UTicketSelectButtonView_C_UpdateTextData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TicketSelectButtonView.TicketSelectButtonView_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TicketId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTicketSelectButtonView_C::SetData(int32_t TicketId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TicketSelectButtonView.TicketSelectButtonView_C.SetData");
		
		UTicketSelectButtonView_C_SetData_Params params {};
		params.TicketId = TicketId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TicketSelectButtonView.TicketSelectButtonView_C.BndEvt__TicketSelectButtonView_BtnReselect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTicketSelectButtonView_C::BndEvt__TicketSelectButtonView_BtnReselect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TicketSelectButtonView.TicketSelectButtonView_C.BndEvt__TicketSelectButtonView_BtnReselect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");
		
		UTicketSelectButtonView_C_BndEvt__TicketSelectButtonView_BtnReselect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TicketSelectButtonView.TicketSelectButtonView_C.ExecuteUbergraph_TicketSelectButtonView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTicketSelectButtonView_C::ExecuteUbergraph_TicketSelectButtonView(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TicketSelectButtonView.TicketSelectButtonView_C.ExecuteUbergraph_TicketSelectButtonView");
		
		UTicketSelectButtonView_C_ExecuteUbergraph_TicketSelectButtonView_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TicketSelectButtonView.TicketSelectButtonView_C.Reselect__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTicketSelectButtonView_C::Reselect__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TicketSelectButtonView.TicketSelectButtonView_C.Reselect__DelegateSignature");
		
		UTicketSelectButtonView_C_Reselect__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTicketSelectButtonView_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTicketSelectButtonView_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TicketSelectButtonView.TicketSelectButtonView_C");
		return ptr;
	}

}


