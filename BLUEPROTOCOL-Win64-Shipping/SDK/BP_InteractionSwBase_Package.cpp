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
	 * 		Name   -> Function BP_InteractionSwBase.BP_InteractionSwBase_C.IsInteractionDisable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InOtherActor                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_InteractionSwBase_C::IsInteractionDisable(class AActor* InOtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionSwBase.BP_InteractionSwBase_C.IsInteractionDisable");
		
		ABP_InteractionSwBase_C_IsInteractionDisable_Params params {};
		params.InOtherActor = InOtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InteractionSwBase.BP_InteractionSwBase_C.OnRep_NewDoorStatus
	 * 		Flags  -> ()
	 */
	void ABP_InteractionSwBase_C::OnRep_NewDoorStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionSwBase.BP_InteractionSwBase_C.OnRep_NewDoorStatus");
		
		ABP_InteractionSwBase_C_OnRep_NewDoorStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InteractionSwBase.BP_InteractionSwBase_C.OnRep_DoorStatus
	 * 		Flags  -> ()
	 */
	void ABP_InteractionSwBase_C::OnRep_DoorStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionSwBase.BP_InteractionSwBase_C.OnRep_DoorStatus");
		
		ABP_InteractionSwBase_C_OnRep_DoorStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InteractionSwBase.BP_InteractionSwBase_C.OnRep_status
	 * 		Flags  -> ()
	 */
	void ABP_InteractionSwBase_C::OnRep_status()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionSwBase.BP_InteractionSwBase_C.OnRep_status");
		
		ABP_InteractionSwBase_C_OnRep_status_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InteractionSwBase.BP_InteractionSwBase_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_InteractionSwBase_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionSwBase.BP_InteractionSwBase_C.UserConstructionScript");
		
		ABP_InteractionSwBase_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InteractionSwBase.BP_InteractionSwBase_C.RecycleSw
	 * 		Flags  -> ()
	 */
	void ABP_InteractionSwBase_C::RecycleSw()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionSwBase.BP_InteractionSwBase_C.RecycleSw");
		
		ABP_InteractionSwBase_C_RecycleSw_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InteractionSwBase.BP_InteractionSwBase_C.CleanupBlocker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFieldStatus                                       NewStatus                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_InteractionSwBase_C::CleanupBlocker(EFieldStatus NewStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionSwBase.BP_InteractionSwBase_C.CleanupBlocker");
		
		ABP_InteractionSwBase_C_CleanupBlocker_Params params {};
		params.NewStatus = NewStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InteractionSwBase.BP_InteractionSwBase_C.OnInteraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InOtherActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    ViewRotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_InteractionSwBase_C::OnInteraction(class AActor* InOtherActor, const struct FRotator& ViewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionSwBase.BP_InteractionSwBase_C.OnInteraction");
		
		ABP_InteractionSwBase_C_OnInteraction_Params params {};
		params.InOtherActor = InOtherActor;
		params.ViewRotation = ViewRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InteractionSwBase.BP_InteractionSwBase_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_InteractionSwBase_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionSwBase.BP_InteractionSwBase_C.ReceiveTick");
		
		ABP_InteractionSwBase_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InteractionSwBase.BP_InteractionSwBase_C.OnInteractionSw
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    Rotator                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_InteractionSwBase_C::OnInteractionSw(class AActor* OtherActor, const struct FRotator& Rotator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionSwBase.BP_InteractionSwBase_C.OnInteractionSw");
		
		ABP_InteractionSwBase_C_OnInteractionSw_Params params {};
		params.OtherActor = OtherActor;
		params.Rotator = Rotator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InteractionSwBase.BP_InteractionSwBase_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_InteractionSwBase_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionSwBase.BP_InteractionSwBase_C.ReceiveBeginPlay");
		
		ABP_InteractionSwBase_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InteractionSwBase.BP_InteractionSwBase_C.ExecuteUbergraph_BP_InteractionSwBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_InteractionSwBase_C::ExecuteUbergraph_BP_InteractionSwBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionSwBase.BP_InteractionSwBase_C.ExecuteUbergraph_BP_InteractionSwBase");
		
		ABP_InteractionSwBase_C_ExecuteUbergraph_BP_InteractionSwBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_InteractionSwBase.BP_InteractionSwBase_C.Interaction__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    ViewRotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_InteractionSwBase_C::Interaction__DelegateSignature(class AActor* OtherActor, const struct FRotator& ViewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_InteractionSwBase.BP_InteractionSwBase_C.Interaction__DelegateSignature");
		
		ABP_InteractionSwBase_C_Interaction__DelegateSignature_Params params {};
		params.OtherActor = OtherActor;
		params.ViewRotation = ViewRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_InteractionSwBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_InteractionSwBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_InteractionSwBase.BP_InteractionSwBase_C");
		return ptr;
	}

}


