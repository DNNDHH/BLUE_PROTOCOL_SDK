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
	 * 		Name   -> Function GA_Action_Cancel.GA_Action_Cancel_C.OnCancelled_4565D44A40D52A401330AE96906B75A0
	 * 		Flags  -> ()
	 */
	void UGA_Action_Cancel_C::OnCancelled_4565D44A40D52A401330AE96906B75A0()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Action_Cancel.GA_Action_Cancel_C.OnCancelled_4565D44A40D52A401330AE96906B75A0");
		
		UGA_Action_Cancel_C_OnCancelled_4565D44A40D52A401330AE96906B75A0_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Action_Cancel.GA_Action_Cancel_C.OnRefused_4565D44A40D52A401330AE96906B75A0
	 * 		Flags  -> ()
	 */
	void UGA_Action_Cancel_C::OnRefused_4565D44A40D52A401330AE96906B75A0()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Action_Cancel.GA_Action_Cancel_C.OnRefused_4565D44A40D52A401330AE96906B75A0");
		
		UGA_Action_Cancel_C_OnRefused_4565D44A40D52A401330AE96906B75A0_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Action_Cancel.GA_Action_Cancel_C.OnCompleted_4565D44A40D52A401330AE96906B75A0
	 * 		Flags  -> ()
	 */
	void UGA_Action_Cancel_C::OnCompleted_4565D44A40D52A401330AE96906B75A0()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Action_Cancel.GA_Action_Cancel_C.OnCompleted_4565D44A40D52A401330AE96906B75A0");
		
		UGA_Action_Cancel_C_OnCompleted_4565D44A40D52A401330AE96906B75A0_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Action_Cancel.GA_Action_Cancel_C.EventReceived_B985FB814EB02487BF36918A821F5C0C
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEventData                          Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGA_Action_Cancel_C::EventReceived_B985FB814EB02487BF36918A821F5C0C(const struct FGameplayEventData& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Action_Cancel.GA_Action_Cancel_C.EventReceived_B985FB814EB02487BF36918A821F5C0C");
		
		UGA_Action_Cancel_C_EventReceived_B985FB814EB02487BF36918A821F5C0C_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Action_Cancel.GA_Action_Cancel_C.EventReceived_24E51A6C4D943FA7BDB7EDBA7086404A
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEventData                          Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGA_Action_Cancel_C::EventReceived_24E51A6C4D943FA7BDB7EDBA7086404A(const struct FGameplayEventData& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Action_Cancel.GA_Action_Cancel_C.EventReceived_24E51A6C4D943FA7BDB7EDBA7086404A");
		
		UGA_Action_Cancel_C_EventReceived_24E51A6C4D943FA7BDB7EDBA7086404A_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Action_Cancel.GA_Action_Cancel_C.K2_ActivateAbility
	 * 		Flags  -> ()
	 */
	void UGA_Action_Cancel_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Action_Cancel.GA_Action_Cancel_C.K2_ActivateAbility");
		
		UGA_Action_Cancel_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Action_Cancel.GA_Action_Cancel_C.K2_OnEndAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasCancelled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Action_Cancel_C::K2_OnEndAbility(bool bWasCancelled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Action_Cancel.GA_Action_Cancel_C.K2_OnEndAbility");
		
		UGA_Action_Cancel_C_K2_OnEndAbility_Params params {};
		params.bWasCancelled = bWasCancelled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Action_Cancel.GA_Action_Cancel_C.ExecuteUbergraph_GA_Action_Cancel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Action_Cancel_C::ExecuteUbergraph_GA_Action_Cancel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Action_Cancel.GA_Action_Cancel_C.ExecuteUbergraph_GA_Action_Cancel");
		
		UGA_Action_Cancel_C_ExecuteUbergraph_GA_Action_Cancel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Action_Cancel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Action_Cancel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Action_Cancel.GA_Action_Cancel_C");
		return ptr;
	}

}


