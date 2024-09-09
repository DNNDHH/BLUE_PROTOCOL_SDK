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
	 * 		Name   -> Function BP_NFTArea.BP_NFTArea_C.IsActive
	 * 		Flags  -> ()
	 */
	bool ABP_NFTArea_C::IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NFTArea.BP_NFTArea_C.IsActive");
		
		ABP_NFTArea_C_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NFTArea.BP_NFTArea_C.OnRep_NFTAreaStatus
	 * 		Flags  -> ()
	 */
	void ABP_NFTArea_C::OnRep_NFTAreaStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NFTArea.BP_NFTArea_C.OnRep_NFTAreaStatus");
		
		ABP_NFTArea_C_OnRep_NFTAreaStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NFTArea.BP_NFTArea_C.NotifyHUDStart
	 * 		Flags  -> ()
	 */
	void ABP_NFTArea_C::NotifyHUDStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NFTArea.BP_NFTArea_C.NotifyHUDStart");
		
		ABP_NFTArea_C_NotifyHUDStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NFTArea.BP_NFTArea_C.NotifyHUDEnd
	 * 		Flags  -> ()
	 */
	void ABP_NFTArea_C::NotifyHUDEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NFTArea.BP_NFTArea_C.NotifyHUDEnd");
		
		ABP_NFTArea_C_NotifyHUDEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NFTArea.BP_NFTArea_C.NotifyHUDCancel
	 * 		Flags  -> ()
	 */
	void ABP_NFTArea_C::NotifyHUDCancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NFTArea.BP_NFTArea_C.NotifyHUDCancel");
		
		ABP_NFTArea_C_NotifyHUDCancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NFTArea.BP_NFTArea_C.ReceiveActorBeginOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NFTArea_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NFTArea.BP_NFTArea_C.ReceiveActorBeginOverlap");
		
		ABP_NFTArea_C_ReceiveActorBeginOverlap_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NFTArea.BP_NFTArea_C.StopNFTArea
	 * 		Flags  -> ()
	 */
	void ABP_NFTArea_C::StopNFTArea()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NFTArea.BP_NFTArea_C.StopNFTArea");
		
		ABP_NFTArea_C_StopNFTArea_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NFTArea.BP_NFTArea_C.AddPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NFTArea_C::AddPlayer(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NFTArea.BP_NFTArea_C.AddPlayer");
		
		ABP_NFTArea_C_AddPlayer_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NFTArea.BP_NFTArea_C.RemovePlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NFTArea_C::RemovePlayer(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NFTArea.BP_NFTArea_C.RemovePlayer");
		
		ABP_NFTArea_C_RemovePlayer_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NFTArea.BP_NFTArea_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NFTArea_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NFTArea.BP_NFTArea_C.ReceiveTick");
		
		ABP_NFTArea_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NFTArea.BP_NFTArea_C.StartNFTArea
	 * 		Flags  -> ()
	 */
	void ABP_NFTArea_C::StartNFTArea()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NFTArea.BP_NFTArea_C.StartNFTArea");
		
		ABP_NFTArea_C_StartNFTArea_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NFTArea.BP_NFTArea_C.ReceiveActorEndOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NFTArea_C::ReceiveActorEndOverlap(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NFTArea.BP_NFTArea_C.ReceiveActorEndOverlap");
		
		ABP_NFTArea_C_ReceiveActorEndOverlap_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NFTArea.BP_NFTArea_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_NFTArea_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NFTArea.BP_NFTArea_C.ReceiveBeginPlay");
		
		ABP_NFTArea_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NFTArea.BP_NFTArea_C.StartHUD
	 * 		Flags  -> ()
	 */
	void ABP_NFTArea_C::StartHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NFTArea.BP_NFTArea_C.StartHUD");
		
		ABP_NFTArea_C_StartHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NFTArea.BP_NFTArea_C.EndHUD
	 * 		Flags  -> ()
	 */
	void ABP_NFTArea_C::EndHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NFTArea.BP_NFTArea_C.EndHUD");
		
		ABP_NFTArea_C_EndHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NFTArea.BP_NFTArea_C.CancelHUD
	 * 		Flags  -> ()
	 */
	void ABP_NFTArea_C::CancelHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NFTArea.BP_NFTArea_C.CancelHUD");
		
		ABP_NFTArea_C_CancelHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NFTArea.BP_NFTArea_C.ExecuteUbergraph_BP_NFTArea
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_NFTArea_C::ExecuteUbergraph_BP_NFTArea(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NFTArea.BP_NFTArea_C.ExecuteUbergraph_BP_NFTArea");
		
		ABP_NFTArea_C_ExecuteUbergraph_BP_NFTArea_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_NFTArea_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_NFTArea_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_NFTArea.BP_NFTArea_C");
		return ptr;
	}

}


