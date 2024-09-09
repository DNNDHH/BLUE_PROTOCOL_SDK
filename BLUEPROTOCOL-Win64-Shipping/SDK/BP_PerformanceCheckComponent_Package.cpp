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
	 * 		Name   -> Function BP_PerformanceCheckComponent.BP_PerformanceCheckComponent_C.GenerateFilename
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	class FString UBP_PerformanceCheckComponent_C::GenerateFilename(const class FString& Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerformanceCheckComponent.BP_PerformanceCheckComponent_C.GenerateFilename");
		
		UBP_PerformanceCheckComponent_C_GenerateFilename_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerformanceCheckComponent.BP_PerformanceCheckComponent_C.PerformanceCheckEvent
	 * 		Flags  -> ()
	 */
	void UBP_PerformanceCheckComponent_C::PerformanceCheckEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerformanceCheckComponent.BP_PerformanceCheckComponent_C.PerformanceCheckEvent");
		
		UBP_PerformanceCheckComponent_C_PerformanceCheckEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerformanceCheckComponent.BP_PerformanceCheckComponent_C.OnPerformanceCheckStop
	 * 		Flags  -> ()
	 */
	void UBP_PerformanceCheckComponent_C::OnPerformanceCheckStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerformanceCheckComponent.BP_PerformanceCheckComponent_C.OnPerformanceCheckStop");
		
		UBP_PerformanceCheckComponent_C_OnPerformanceCheckStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerformanceCheckComponent.BP_PerformanceCheckComponent_C.OnPerformanceCheckStart
	 * 		Flags  -> ()
	 */
	void UBP_PerformanceCheckComponent_C::OnPerformanceCheckStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerformanceCheckComponent.BP_PerformanceCheckComponent_C.OnPerformanceCheckStart");
		
		UBP_PerformanceCheckComponent_C_OnPerformanceCheckStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerformanceCheckComponent.BP_PerformanceCheckComponent_C.ExecuteUbergraph_BP_PerformanceCheckComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PerformanceCheckComponent_C::ExecuteUbergraph_BP_PerformanceCheckComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerformanceCheckComponent.BP_PerformanceCheckComponent_C.ExecuteUbergraph_BP_PerformanceCheckComponent");
		
		UBP_PerformanceCheckComponent_C_ExecuteUbergraph_BP_PerformanceCheckComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PerformanceCheckComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PerformanceCheckComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PerformanceCheckComponent.BP_PerformanceCheckComponent_C");
		return ptr;
	}

}


