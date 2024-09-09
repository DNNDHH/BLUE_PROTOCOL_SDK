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
	 * 		Name   -> Function GA_Action_Movement.GA_Action_Movement_C.EventReceived_DC6488B9460FBDBF1C592493913CCCF7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEventData                          Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGA_Action_Movement_C::EventReceived_DC6488B9460FBDBF1C592493913CCCF7(const struct FGameplayEventData& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Action_Movement.GA_Action_Movement_C.EventReceived_DC6488B9460FBDBF1C592493913CCCF7");
		
		UGA_Action_Movement_C_EventReceived_DC6488B9460FBDBF1C592493913CCCF7_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Action_Movement.GA_Action_Movement_C.OnCancelled_F0A7509B4F9F16E6439C7895753943AC
	 * 		Flags  -> ()
	 */
	void UGA_Action_Movement_C::OnCancelled_F0A7509B4F9F16E6439C7895753943AC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Action_Movement.GA_Action_Movement_C.OnCancelled_F0A7509B4F9F16E6439C7895753943AC");
		
		UGA_Action_Movement_C_OnCancelled_F0A7509B4F9F16E6439C7895753943AC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Action_Movement.GA_Action_Movement_C.OnRefused_F0A7509B4F9F16E6439C7895753943AC
	 * 		Flags  -> ()
	 */
	void UGA_Action_Movement_C::OnRefused_F0A7509B4F9F16E6439C7895753943AC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Action_Movement.GA_Action_Movement_C.OnRefused_F0A7509B4F9F16E6439C7895753943AC");
		
		UGA_Action_Movement_C_OnRefused_F0A7509B4F9F16E6439C7895753943AC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Action_Movement.GA_Action_Movement_C.OnCompleted_F0A7509B4F9F16E6439C7895753943AC
	 * 		Flags  -> ()
	 */
	void UGA_Action_Movement_C::OnCompleted_F0A7509B4F9F16E6439C7895753943AC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Action_Movement.GA_Action_Movement_C.OnCompleted_F0A7509B4F9F16E6439C7895753943AC");
		
		UGA_Action_Movement_C_OnCompleted_F0A7509B4F9F16E6439C7895753943AC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Action_Movement.GA_Action_Movement_C.EventReceived_DDC49E4D4373DEBC9BDCBE863747A93E
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEventData                          Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGA_Action_Movement_C::EventReceived_DDC49E4D4373DEBC9BDCBE863747A93E(const struct FGameplayEventData& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Action_Movement.GA_Action_Movement_C.EventReceived_DDC49E4D4373DEBC9BDCBE863747A93E");
		
		UGA_Action_Movement_C_EventReceived_DDC49E4D4373DEBC9BDCBE863747A93E_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Action_Movement.GA_Action_Movement_C.K2_ActivateAbility
	 * 		Flags  -> ()
	 */
	void UGA_Action_Movement_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Action_Movement.GA_Action_Movement_C.K2_ActivateAbility");
		
		UGA_Action_Movement_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Action_Movement.GA_Action_Movement_C.K2_OnEndAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasCancelled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Action_Movement_C::K2_OnEndAbility(bool bWasCancelled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Action_Movement.GA_Action_Movement_C.K2_OnEndAbility");
		
		UGA_Action_Movement_C_K2_OnEndAbility_Params params {};
		params.bWasCancelled = bWasCancelled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Action_Movement.GA_Action_Movement_C.ExecuteUbergraph_GA_Action_Movement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Action_Movement_C::ExecuteUbergraph_GA_Action_Movement(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Action_Movement.GA_Action_Movement_C.ExecuteUbergraph_GA_Action_Movement");
		
		UGA_Action_Movement_C_ExecuteUbergraph_GA_Action_Movement_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Action_Movement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Action_Movement_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Action_Movement.GA_Action_Movement_C");
		return ptr;
	}

}


