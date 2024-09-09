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
	 * 		Name   -> Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.IsInteractionDisable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InOtherActor                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_ExtraNpcCharacter_C::IsInteractionDisable(class AActor* InOtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.IsInteractionDisable");
		
		ABP_ExtraNpcCharacter_C_IsInteractionDisable_Params params {};
		params.InOtherActor = InOtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.CanBeTargetedNow
	 * 		Flags  -> ()
	 */
	bool ABP_ExtraNpcCharacter_C::CanBeTargetedNow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.CanBeTargetedNow");
		
		ABP_ExtraNpcCharacter_C_CanBeTargetedNow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.GetTargetLocation
	 * 		Flags  -> ()
	 */
	struct FVector ABP_ExtraNpcCharacter_C::GetTargetLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.GetTargetLocation");
		
		ABP_ExtraNpcCharacter_C_GetTargetLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.IsValidTargetFor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      TargetingActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_ExtraNpcCharacter_C::IsValidTargetFor(class AActor* TargetingActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.IsValidTargetFor");
		
		ABP_ExtraNpcCharacter_C_IsValidTargetFor_Params params {};
		params.TargetingActor = TargetingActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.RegisterWithManager
	 * 		Flags  -> ()
	 */
	void ABP_ExtraNpcCharacter_C::RegisterWithManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.RegisterWithManager");
		
		ABP_ExtraNpcCharacter_C_RegisterWithManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.UnregisterFromManager
	 * 		Flags  -> ()
	 */
	void ABP_ExtraNpcCharacter_C::UnregisterFromManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.UnregisterFromManager");
		
		ABP_ExtraNpcCharacter_C_UnregisterFromManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.OnInteraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InOtherActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    ViewRotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ExtraNpcCharacter_C::OnInteraction(class AActor* InOtherActor, const struct FRotator& ViewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.OnInteraction");
		
		ABP_ExtraNpcCharacter_C_OnInteraction_Params params {};
		params.InOtherActor = InOtherActor;
		params.ViewRotation = ViewRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.NotifyDeactivated
	 * 		Flags  -> ()
	 */
	void ABP_ExtraNpcCharacter_C::NotifyDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.NotifyDeactivated");
		
		ABP_ExtraNpcCharacter_C_NotifyDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.ReceivePostSpawnBySpawner
	 * 		Flags  -> ()
	 */
	void ABP_ExtraNpcCharacter_C::ReceivePostSpawnBySpawner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.ReceivePostSpawnBySpawner");
		
		ABP_ExtraNpcCharacter_C_ReceivePostSpawnBySpawner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ExtraNpcCharacter_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.ReceiveTick");
		
		ABP_ExtraNpcCharacter_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.ExecuteUbergraph_BP_ExtraNpcCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ExtraNpcCharacter_C::ExecuteUbergraph_BP_ExtraNpcCharacter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.ExecuteUbergraph_BP_ExtraNpcCharacter");
		
		ABP_ExtraNpcCharacter_C_ExecuteUbergraph_BP_ExtraNpcCharacter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ExtraNpcCharacter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ExtraNpcCharacter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C");
		return ptr;
	}

}


