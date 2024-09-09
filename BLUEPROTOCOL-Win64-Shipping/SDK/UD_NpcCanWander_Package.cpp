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
	 * 		Name   -> Function UD_NpcCanWander.UD_NpcCanWander_C.ReceiveFetchValue
	 * 		Flags  -> ()
	 */
	float UUD_NpcCanWander_C::ReceiveFetchValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UD_NpcCanWander.UD_NpcCanWander_C.ReceiveFetchValue");
		
		UUD_NpcCanWander_C_ReceiveFetchValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UD_NpcCanWander.UD_NpcCanWander_C.ReceiveInitialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBUtilityBrainComponent*                    OwnerComponent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUD_NpcCanWander_C::ReceiveInitialize(class USBUtilityBrainComponent* OwnerComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UD_NpcCanWander.UD_NpcCanWander_C.ReceiveInitialize");
		
		UUD_NpcCanWander_C_ReceiveInitialize_Params params {};
		params.OwnerComponent = OwnerComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UD_NpcCanWander.UD_NpcCanWander_C.OnWanderingModeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bCanWander                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUD_NpcCanWander_C::OnWanderingModeChanged(bool bCanWander)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UD_NpcCanWander.UD_NpcCanWander_C.OnWanderingModeChanged");
		
		UUD_NpcCanWander_C_OnWanderingModeChanged_Params params {};
		params.bCanWander = bCanWander;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UD_NpcCanWander.UD_NpcCanWander_C.ExecuteUbergraph_UD_NpcCanWander
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUD_NpcCanWander_C::ExecuteUbergraph_UD_NpcCanWander(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UD_NpcCanWander.UD_NpcCanWander_C.ExecuteUbergraph_UD_NpcCanWander");
		
		UUD_NpcCanWander_C_ExecuteUbergraph_UD_NpcCanWander_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUD_NpcCanWander_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUD_NpcCanWander_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass UD_NpcCanWander.UD_NpcCanWander_C");
		return ptr;
	}

}


