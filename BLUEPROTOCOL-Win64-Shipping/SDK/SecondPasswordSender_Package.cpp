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
	 * 		Name   -> Function SecondPasswordSender.SecondPasswordSender_C.SetCaptionFailure
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ExpireCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USecondPasswordSender_C::SetCaptionFailure(int32_t ExpireCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecondPasswordSender.SecondPasswordSender_C.SetCaptionFailure");
		
		USecondPasswordSender_C_SetCaptionFailure_Params params {};
		params.ExpireCount = ExpireCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SecondPasswordSender.SecondPasswordSender_C.SetCaption
	 * 		Flags  -> ()
	 */
	void USecondPasswordSender_C::SetCaption()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecondPasswordSender.SecondPasswordSender_C.SetCaption");
		
		USecondPasswordSender_C_SetCaption_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SecondPasswordSender.SecondPasswordSender_C.ClearPassword
	 * 		Flags  -> ()
	 */
	void USecondPasswordSender_C::ClearPassword()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecondPasswordSender.SecondPasswordSender_C.ClearPassword");
		
		USecondPasswordSender_C_ClearPassword_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SecondPasswordSender.SecondPasswordSender_C.SendPassword
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESendSecondPasswordRole                            Role                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USecondPasswordSender_C::SendPassword(ESendSecondPasswordRole Role)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecondPasswordSender.SecondPasswordSender_C.SendPassword");
		
		USecondPasswordSender_C_SendPassword_Params params {};
		params.Role = Role;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SecondPasswordSender.SecondPasswordSender_C.OnAuthorizeSecondPassword
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ExpireCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESendSecondPasswordRole                            Role                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bWasAuthorized                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USecondPasswordSender_C::OnAuthorizeSecondPassword(bool bWasSuccessful, int32_t ExpireCount, ESendSecondPasswordRole Role, bool bWasAuthorized)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecondPasswordSender.SecondPasswordSender_C.OnAuthorizeSecondPassword");
		
		USecondPasswordSender_C_OnAuthorizeSecondPassword_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		params.ExpireCount = ExpireCount;
		params.Role = Role;
		params.bWasAuthorized = bWasAuthorized;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SecondPasswordSender.SecondPasswordSender_C.BndEvt__SoftwareNumericKeypad_K2Node_ComponentBoundEvent_2_OnClickedEnter__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USecondPasswordSender_C::BndEvt__SoftwareNumericKeypad_K2Node_ComponentBoundEvent_2_OnClickedEnter__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecondPasswordSender.SecondPasswordSender_C.BndEvt__SoftwareNumericKeypad_K2Node_ComponentBoundEvent_2_OnClickedEnter__DelegateSignature");
		
		USecondPasswordSender_C_BndEvt__SoftwareNumericKeypad_K2Node_ComponentBoundEvent_2_OnClickedEnter__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SecondPasswordSender.SecondPasswordSender_C.Construct
	 * 		Flags  -> ()
	 */
	void USecondPasswordSender_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecondPasswordSender.SecondPasswordSender_C.Construct");
		
		USecondPasswordSender_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SecondPasswordSender.SecondPasswordSender_C.BndEvt__SecondPasswordSender_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USecondPasswordSender_C::BndEvt__SecondPasswordSender_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecondPasswordSender.SecondPasswordSender_C.BndEvt__SecondPasswordSender_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature");
		
		USecondPasswordSender_C_BndEvt__SecondPasswordSender_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SecondPasswordSender.SecondPasswordSender_C.Cancel
	 * 		Flags  -> ()
	 */
	void USecondPasswordSender_C::Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecondPasswordSender.SecondPasswordSender_C.Cancel");
		
		USecondPasswordSender_C_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SecondPasswordSender.SecondPasswordSender_C.ExecuteUbergraph_SecondPasswordSender
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USecondPasswordSender_C::ExecuteUbergraph_SecondPasswordSender(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecondPasswordSender.SecondPasswordSender_C.ExecuteUbergraph_SecondPasswordSender");
		
		USecondPasswordSender_C_ExecuteUbergraph_SecondPasswordSender_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SecondPasswordSender.SecondPasswordSender_C.OnEnd__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESendSecondPasswordRole                            Role                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESecondPasswordSenderEndReason                     Reason                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESecondPasswordSenderStartType                     StartType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USecondPasswordSender_C::OnEnd__DelegateSignature(ESendSecondPasswordRole Role, ESecondPasswordSenderEndReason Reason, ESecondPasswordSenderStartType StartType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SecondPasswordSender.SecondPasswordSender_C.OnEnd__DelegateSignature");
		
		USecondPasswordSender_C_OnEnd__DelegateSignature_Params params {};
		params.Role = Role;
		params.Reason = Reason;
		params.StartType = StartType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USecondPasswordSender_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USecondPasswordSender_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SecondPasswordSender.SecondPasswordSender_C");
		return ptr;
	}

}


