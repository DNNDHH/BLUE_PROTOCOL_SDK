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
	 * 		Name   -> Function BP_PartyPortal.BP_PartyPortal_C.GetWarpPlayers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBPlayerCharacter*                          Owner                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class ASBPlayerCharacter*>                  WarpPlayers                                                (Parm, OutParm)
	 */
	void ABP_PartyPortal_C::GetWarpPlayers(class ASBPlayerCharacter* Owner, TArray<class ASBPlayerCharacter*>* WarpPlayers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyPortal.BP_PartyPortal_C.GetWarpPlayers");
		
		ABP_PartyPortal_C_GetWarpPlayers_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WarpPlayers != nullptr)
			*WarpPlayers = params.WarpPlayers;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PartyPortal.BP_PartyPortal_C.ClearGoalActor
	 * 		Flags  -> ()
	 */
	void ABP_PartyPortal_C::ClearGoalActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyPortal.BP_PartyPortal_C.ClearGoalActor");
		
		ABP_PartyPortal_C_ClearGoalActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PartyPortal.BP_PartyPortal_C.SetGoalActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_InteractionWarpGoal_C*                   GoalTargetActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PartyPortal_C::SetGoalActor(class ABP_InteractionWarpGoal_C* GoalTargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyPortal.BP_PartyPortal_C.SetGoalActor");
		
		ABP_PartyPortal_C_SetGoalActor_Params params {};
		params.GoalTargetActor = GoalTargetActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PartyPortal.BP_PartyPortal_C.DebugPrint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      inString                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_PartyPortal_C::DebugPrint(const class FString& inString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyPortal.BP_PartyPortal_C.DebugPrint");
		
		ABP_PartyPortal_C_DebugPrint_Params params {};
		params.inString = inString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PartyPortal.BP_PartyPortal_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_PartyPortal_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyPortal.BP_PartyPortal_C.ReceiveBeginPlay");
		
		ABP_PartyPortal_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PartyPortal.BP_PartyPortal_C.Teleport_FadeIn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_InteractionWarpGoal_C*                   WarpGoal                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASBPlayerCharacter*                          AccessPlayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PartyPortal_C::Teleport_FadeIn(class ABP_InteractionWarpGoal_C* WarpGoal, class ASBPlayerCharacter* AccessPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyPortal.BP_PartyPortal_C.Teleport_FadeIn");
		
		ABP_PartyPortal_C_Teleport_FadeIn_Params params {};
		params.WarpGoal = WarpGoal;
		params.AccessPlayer = AccessPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PartyPortal.BP_PartyPortal_C.Interacted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    ViewRotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PartyPortal_C::Interacted(class AActor* OtherActor, const struct FRotator& ViewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyPortal.BP_PartyPortal_C.Interacted");
		
		ABP_PartyPortal_C_Interacted_Params params {};
		params.OtherActor = OtherActor;
		params.ViewRotation = ViewRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PartyPortal.BP_PartyPortal_C.LocalWarpEnd
	 * 		Flags  -> ()
	 */
	void ABP_PartyPortal_C::LocalWarpEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyPortal.BP_PartyPortal_C.LocalWarpEnd");
		
		ABP_PartyPortal_C_LocalWarpEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PartyPortal.BP_PartyPortal_C.ExecuteUbergraph_BP_PartyPortal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PartyPortal_C::ExecuteUbergraph_BP_PartyPortal(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyPortal.BP_PartyPortal_C.ExecuteUbergraph_BP_PartyPortal");
		
		ABP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PartyPortal.BP_PartyPortal_C.PartyWarpStart__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBPlayerCharacter*                          WarpTarget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PartyPortal_C::PartyWarpStart__DelegateSignature(class ASBPlayerCharacter* WarpTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyPortal.BP_PartyPortal_C.PartyWarpStart__DelegateSignature");
		
		ABP_PartyPortal_C_PartyWarpStart__DelegateSignature_Params params {};
		params.WarpTarget = WarpTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PartyPortal.BP_PartyPortal_C.PartyWarpEnd__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_PartyPortal_C::PartyWarpEnd__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PartyPortal.BP_PartyPortal_C.PartyWarpEnd__DelegateSignature");
		
		ABP_PartyPortal_C_PartyWarpEnd__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PartyPortal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PartyPortal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PartyPortal.BP_PartyPortal_C");
		return ptr;
	}

}


