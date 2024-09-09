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
	 * 		Name   -> Function BP_PerformanceCameraActor.BP_PerformanceCameraActor_C.GetShowActorList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              ShowList                                                   (Parm, OutParm)
	 */
	void ABP_PerformanceCameraActor_C::GetShowActorList(TArray<class AActor*>* ShowList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerformanceCameraActor.BP_PerformanceCameraActor_C.GetShowActorList");
		
		ABP_PerformanceCameraActor_C_GetShowActorList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShowList != nullptr)
			*ShowList = params.ShowList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerformanceCameraActor.BP_PerformanceCameraActor_C.CreateScreenWidget
	 * 		Flags  -> ()
	 */
	void ABP_PerformanceCameraActor_C::CreateScreenWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerformanceCameraActor.BP_PerformanceCameraActor_C.CreateScreenWidget");
		
		ABP_PerformanceCameraActor_C_CreateScreenWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerformanceCameraActor.BP_PerformanceCameraActor_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PerformanceCameraActor_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerformanceCameraActor.BP_PerformanceCameraActor_C.ReceiveTick");
		
		ABP_PerformanceCameraActor_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerformanceCameraActor.BP_PerformanceCameraActor_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PerformanceCameraActor_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerformanceCameraActor.BP_PerformanceCameraActor_C.ReceiveEndPlay");
		
		ABP_PerformanceCameraActor_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerformanceCameraActor.BP_PerformanceCameraActor_C.SetupSceneCapture
	 * 		Flags  -> ()
	 */
	void ABP_PerformanceCameraActor_C::SetupSceneCapture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerformanceCameraActor.BP_PerformanceCameraActor_C.SetupSceneCapture");
		
		ABP_PerformanceCameraActor_C_SetupSceneCapture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PerformanceCameraActor.BP_PerformanceCameraActor_C.ExecuteUbergraph_BP_PerformanceCameraActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PerformanceCameraActor_C::ExecuteUbergraph_BP_PerformanceCameraActor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PerformanceCameraActor.BP_PerformanceCameraActor_C.ExecuteUbergraph_BP_PerformanceCameraActor");
		
		ABP_PerformanceCameraActor_C_ExecuteUbergraph_BP_PerformanceCameraActor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PerformanceCameraActor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PerformanceCameraActor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PerformanceCameraActor.BP_PerformanceCameraActor_C");
		return ptr;
	}

}


