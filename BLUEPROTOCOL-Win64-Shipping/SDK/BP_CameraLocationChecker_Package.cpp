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
	 * 		Name   -> Function BP_CameraLocationChecker.BP_CameraLocationChecker_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_CameraLocationChecker_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraLocationChecker.BP_CameraLocationChecker_C.ReceiveBeginPlay");
		
		ABP_CameraLocationChecker_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CameraLocationChecker.BP_CameraLocationChecker_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CameraLocationChecker_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraLocationChecker.BP_CameraLocationChecker_C.ReceiveTick");
		
		ABP_CameraLocationChecker_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CameraLocationChecker.BP_CameraLocationChecker_C.InitPostProcessLUT
	 * 		Flags  -> ()
	 */
	void ABP_CameraLocationChecker_C::InitPostProcessLUT()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraLocationChecker.BP_CameraLocationChecker_C.InitPostProcessLUT");
		
		ABP_CameraLocationChecker_C_InitPostProcessLUT_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CameraLocationChecker.BP_CameraLocationChecker_C.CheckPostPorcessVolumeLUT
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSecnd                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CameraLocationChecker_C::CheckPostPorcessVolumeLUT(float DeltaSecnd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraLocationChecker.BP_CameraLocationChecker_C.CheckPostPorcessVolumeLUT");
		
		ABP_CameraLocationChecker_C_CheckPostPorcessVolumeLUT_Params params {};
		params.DeltaSecnd = DeltaSecnd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CameraLocationChecker.BP_CameraLocationChecker_C.ExecuteUbergraph_BP_CameraLocationChecker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CameraLocationChecker_C::ExecuteUbergraph_BP_CameraLocationChecker(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraLocationChecker.BP_CameraLocationChecker_C.ExecuteUbergraph_BP_CameraLocationChecker");
		
		ABP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_CameraLocationChecker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_CameraLocationChecker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CameraLocationChecker.BP_CameraLocationChecker_C");
		return ptr;
	}

}


