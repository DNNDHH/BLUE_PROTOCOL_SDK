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
	 * 		Name   -> Function BP_SBPhotoModePawn.BP_SBPhotoModePawn_C.ShowDebugLine
	 * 		Flags  -> ()
	 */
	void ABP_SBPhotoModePawn_C::ShowDebugLine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModePawn.BP_SBPhotoModePawn_C.ShowDebugLine");
		
		ABP_SBPhotoModePawn_C_ShowDebugLine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModePawn.BP_SBPhotoModePawn_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_SBPhotoModePawn_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModePawn.BP_SBPhotoModePawn_C.ReceiveBeginPlay");
		
		ABP_SBPhotoModePawn_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModePawn.BP_SBPhotoModePawn_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SBPhotoModePawn_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModePawn.BP_SBPhotoModePawn_C.ReceiveTick");
		
		ABP_SBPhotoModePawn_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModePawn.BP_SBPhotoModePawn_C.ReceivePossessed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 NewController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SBPhotoModePawn_C::ReceivePossessed(class AController* NewController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModePawn.BP_SBPhotoModePawn_C.ReceivePossessed");
		
		ABP_SBPhotoModePawn_C_ReceivePossessed_Params params {};
		params.NewController = NewController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModePawn.BP_SBPhotoModePawn_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SBPhotoModePawn_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModePawn.BP_SBPhotoModePawn_C.ReceiveEndPlay");
		
		ABP_SBPhotoModePawn_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModePawn.BP_SBPhotoModePawn_C.CreateWorldCameraActor
	 * 		Flags  -> ()
	 */
	void ABP_SBPhotoModePawn_C::CreateWorldCameraActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModePawn.BP_SBPhotoModePawn_C.CreateWorldCameraActor");
		
		ABP_SBPhotoModePawn_C_CreateWorldCameraActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModePawn.BP_SBPhotoModePawn_C.OnOverLimitDistance
	 * 		Flags  -> ()
	 */
	void ABP_SBPhotoModePawn_C::OnOverLimitDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModePawn.BP_SBPhotoModePawn_C.OnOverLimitDistance");
		
		ABP_SBPhotoModePawn_C_OnOverLimitDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModePawn.BP_SBPhotoModePawn_C.ResetPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NewLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SBPhotoModePawn_C::ResetPosition(const struct FVector& NewLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModePawn.BP_SBPhotoModePawn_C.ResetPosition");
		
		ABP_SBPhotoModePawn_C_ResetPosition_Params params {};
		params.NewLocation = NewLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModePawn.BP_SBPhotoModePawn_C.BP_ResetCamera
	 * 		Flags  -> ()
	 */
	void ABP_SBPhotoModePawn_C::BP_ResetCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModePawn.BP_SBPhotoModePawn_C.BP_ResetCamera");
		
		ABP_SBPhotoModePawn_C_BP_ResetCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModePawn.BP_SBPhotoModePawn_C.ExecuteUbergraph_BP_SBPhotoModePawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SBPhotoModePawn_C::ExecuteUbergraph_BP_SBPhotoModePawn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModePawn.BP_SBPhotoModePawn_C.ExecuteUbergraph_BP_SBPhotoModePawn");
		
		ABP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SBPhotoModePawn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SBPhotoModePawn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SBPhotoModePawn.BP_SBPhotoModePawn_C");
		return ptr;
	}

}


