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
	 * 		Name   -> Function BP_SkyLightControlVolume.BP_SkyLightControlVolume_C.SetAllPrimCollisions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        CollisionProfileName                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SkyLightControlVolume_C::SetAllPrimCollisions(const class FName& CollisionProfileName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SkyLightControlVolume.BP_SkyLightControlVolume_C.SetAllPrimCollisions");
		
		ABP_SkyLightControlVolume_C_SetAllPrimCollisions_Params params {};
		params.CollisionProfileName = CollisionProfileName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SkyLightControlVolume.BP_SkyLightControlVolume_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_SkyLightControlVolume_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SkyLightControlVolume.BP_SkyLightControlVolume_C.UserConstructionScript");
		
		ABP_SkyLightControlVolume_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SkyLightControlVolume.BP_SkyLightControlVolume_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_SkyLightControlVolume_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SkyLightControlVolume.BP_SkyLightControlVolume_C.ReceiveBeginPlay");
		
		ABP_SkyLightControlVolume_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SkyLightControlVolume.BP_SkyLightControlVolume_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SkyLightControlVolume_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SkyLightControlVolume.BP_SkyLightControlVolume_C.ReceiveTick");
		
		ABP_SkyLightControlVolume_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SkyLightControlVolume.BP_SkyLightControlVolume_C.ReceiveActorBeginOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SkyLightControlVolume_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SkyLightControlVolume.BP_SkyLightControlVolume_C.ReceiveActorBeginOverlap");
		
		ABP_SkyLightControlVolume_C_ReceiveActorBeginOverlap_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SkyLightControlVolume.BP_SkyLightControlVolume_C.ReceiveActorEndOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SkyLightControlVolume_C::ReceiveActorEndOverlap(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SkyLightControlVolume.BP_SkyLightControlVolume_C.ReceiveActorEndOverlap");
		
		ABP_SkyLightControlVolume_C_ReceiveActorEndOverlap_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SkyLightControlVolume.BP_SkyLightControlVolume_C.SkyLightControlEnable
	 * 		Flags  -> ()
	 */
	void ABP_SkyLightControlVolume_C::SkyLightControlEnable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SkyLightControlVolume.BP_SkyLightControlVolume_C.SkyLightControlEnable");
		
		ABP_SkyLightControlVolume_C_SkyLightControlEnable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SkyLightControlVolume.BP_SkyLightControlVolume_C.ExecuteUbergraph_BP_SkyLightControlVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SkyLightControlVolume_C::ExecuteUbergraph_BP_SkyLightControlVolume(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SkyLightControlVolume.BP_SkyLightControlVolume_C.ExecuteUbergraph_BP_SkyLightControlVolume");
		
		ABP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SkyLightControlVolume_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SkyLightControlVolume_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SkyLightControlVolume.BP_SkyLightControlVolume_C");
		return ptr;
	}

}


