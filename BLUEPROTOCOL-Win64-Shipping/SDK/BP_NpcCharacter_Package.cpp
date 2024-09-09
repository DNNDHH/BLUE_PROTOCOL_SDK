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
	 * 		Name   -> Function BP_NpcCharacter.BP_NpcCharacter_C.IsInteractionDisable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InOtherActor                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_NpcCharacter_C::IsInteractionDisable(class AActor* InOtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NpcCharacter.BP_NpcCharacter_C.IsInteractionDisable");
		
		ABP_NpcCharacter_C_IsInteractionDisable_Params params {};
		params.InOtherActor = InOtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NpcCharacter.BP_NpcCharacter_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NpcCharacter_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NpcCharacter.BP_NpcCharacter_C.ReceiveTick");
		
		ABP_NpcCharacter_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NpcCharacter.BP_NpcCharacter_C.NotifyDeactivated
	 * 		Flags  -> ()
	 */
	void ABP_NpcCharacter_C::NotifyDeactivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NpcCharacter.BP_NpcCharacter_C.NotifyDeactivated");
		
		ABP_NpcCharacter_C_NotifyDeactivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NpcCharacter.BP_NpcCharacter_C.ReceivePostSpawnBySpawner
	 * 		Flags  -> ()
	 */
	void ABP_NpcCharacter_C::ReceivePostSpawnBySpawner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NpcCharacter.BP_NpcCharacter_C.ReceivePostSpawnBySpawner");
		
		ABP_NpcCharacter_C_ReceivePostSpawnBySpawner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NpcCharacter.BP_NpcCharacter_C.OnInteraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InOtherActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    ViewRotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_NpcCharacter_C::OnInteraction(class AActor* InOtherActor, const struct FRotator& ViewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NpcCharacter.BP_NpcCharacter_C.OnInteraction");
		
		ABP_NpcCharacter_C_OnInteraction_Params params {};
		params.InOtherActor = InOtherActor;
		params.ViewRotation = ViewRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NpcCharacter.BP_NpcCharacter_C.ExecuteUbergraph_BP_NpcCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NpcCharacter_C::ExecuteUbergraph_BP_NpcCharacter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NpcCharacter.BP_NpcCharacter_C.ExecuteUbergraph_BP_NpcCharacter");
		
		ABP_NpcCharacter_C_ExecuteUbergraph_BP_NpcCharacter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_NpcCharacter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_NpcCharacter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_NpcCharacter.BP_NpcCharacter_C");
		return ptr;
	}

}


