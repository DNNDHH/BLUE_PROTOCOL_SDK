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
	 * 		Name   -> Function BP_ScriptTheaterActor.BP_ScriptTheaterActor_C.RequestPlayDemo_Theater
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InDemoName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptTheaterActor_C::RequestPlayDemo_Theater(const class FName& InDemoName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptTheaterActor.BP_ScriptTheaterActor_C.RequestPlayDemo_Theater");
		
		ABP_ScriptTheaterActor_C_RequestPlayDemo_Theater_Params params {};
		params.InDemoName = InDemoName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptTheaterActor.BP_ScriptTheaterActor_C.OnDemoFinish_Theater
	 * 		Flags  -> ()
	 */
	void ABP_ScriptTheaterActor_C::OnDemoFinish_Theater()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptTheaterActor.BP_ScriptTheaterActor_C.OnDemoFinish_Theater");
		
		ABP_ScriptTheaterActor_C_OnDemoFinish_Theater_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptTheaterActor.BP_ScriptTheaterActor_C.ReceiveDestroyed
	 * 		Flags  -> ()
	 */
	void ABP_ScriptTheaterActor_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptTheaterActor.BP_ScriptTheaterActor_C.ReceiveDestroyed");
		
		ABP_ScriptTheaterActor_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptTheaterActor.BP_ScriptTheaterActor_C.ExecuteUbergraph_BP_ScriptTheaterActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptTheaterActor_C::ExecuteUbergraph_BP_ScriptTheaterActor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptTheaterActor.BP_ScriptTheaterActor_C.ExecuteUbergraph_BP_ScriptTheaterActor");
		
		ABP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ScriptTheaterActor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ScriptTheaterActor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ScriptTheaterActor.BP_ScriptTheaterActor_C");
		return ptr;
	}

}


