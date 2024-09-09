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
	 * 		Name   -> Function BP_AIControllerNpc.BP_AIControllerNpc_C.StartTalk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      TalkTarget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AIControllerNpc_C::StartTalk(class AActor* TalkTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIControllerNpc.BP_AIControllerNpc_C.StartTalk");
		
		ABP_AIControllerNpc_C_StartTalk_Params params {};
		params.TalkTarget = TalkTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AIControllerNpc.BP_AIControllerNpc_C.RegisterUtilityOption
	 * 		Flags  -> ()
	 */
	void ABP_AIControllerNpc_C::RegisterUtilityOption()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIControllerNpc.BP_AIControllerNpc_C.RegisterUtilityOption");
		
		ABP_AIControllerNpc_C_RegisterUtilityOption_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AIControllerNpc.BP_AIControllerNpc_C.OnInteraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InOtherActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    ViewRotation                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void ABP_AIControllerNpc_C::OnInteraction(class AActor* InOtherActor, const struct FRotator& ViewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIControllerNpc.BP_AIControllerNpc_C.OnInteraction");
		
		ABP_AIControllerNpc_C_OnInteraction_Params params {};
		params.InOtherActor = InOtherActor;
		params.ViewRotation = ViewRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AIControllerNpc.BP_AIControllerNpc_C.ReceiveUnPossess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       UnpossessedPawn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AIControllerNpc_C::ReceiveUnPossess(class APawn* UnpossessedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIControllerNpc.BP_AIControllerNpc_C.ReceiveUnPossess");
		
		ABP_AIControllerNpc_C_ReceiveUnPossess_Params params {};
		params.UnpossessedPawn = UnpossessedPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AIControllerNpc.BP_AIControllerNpc_C.OnOwnerDeactivate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBMobCharacter*                             InMobCharacter                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AIControllerNpc_C::OnOwnerDeactivate(class ASBMobCharacter* InMobCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIControllerNpc.BP_AIControllerNpc_C.OnOwnerDeactivate");
		
		ABP_AIControllerNpc_C_OnOwnerDeactivate_Params params {};
		params.InMobCharacter = InMobCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AIControllerNpc.BP_AIControllerNpc_C.OnOwnerActivate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBMobCharacter*                             InMobCharacter                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AIControllerNpc_C::OnOwnerActivate(class ASBMobCharacter* InMobCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIControllerNpc.BP_AIControllerNpc_C.OnOwnerActivate");
		
		ABP_AIControllerNpc_C_OnOwnerActivate_Params params {};
		params.InMobCharacter = InMobCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AIControllerNpc.BP_AIControllerNpc_C.ReceivePossess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       PossessedPawn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AIControllerNpc_C::ReceivePossess(class APawn* PossessedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIControllerNpc.BP_AIControllerNpc_C.ReceivePossess");
		
		ABP_AIControllerNpc_C_ReceivePossess_Params params {};
		params.PossessedPawn = PossessedPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AIControllerNpc.BP_AIControllerNpc_C.ExecuteUbergraph_BP_AIControllerNpc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AIControllerNpc_C::ExecuteUbergraph_BP_AIControllerNpc(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AIControllerNpc.BP_AIControllerNpc_C.ExecuteUbergraph_BP_AIControllerNpc");
		
		ABP_AIControllerNpc_C_ExecuteUbergraph_BP_AIControllerNpc_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_AIControllerNpc_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_AIControllerNpc_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_AIControllerNpc.BP_AIControllerNpc_C");
		return ptr;
	}

}


