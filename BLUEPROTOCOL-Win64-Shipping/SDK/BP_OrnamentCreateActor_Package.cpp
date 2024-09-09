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
	 * 		Name   -> Function BP_OrnamentCreateActor.BP_OrnamentCreateActor_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_OrnamentCreateActor_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrnamentCreateActor.BP_OrnamentCreateActor_C.ReceiveBeginPlay");
		
		ABP_OrnamentCreateActor_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OrnamentCreateActor.BP_OrnamentCreateActor_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_OrnamentCreateActor_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrnamentCreateActor.BP_OrnamentCreateActor_C.ReceiveTick");
		
		ABP_OrnamentCreateActor_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OrnamentCreateActor.BP_OrnamentCreateActor_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_OrnamentCreateActor_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrnamentCreateActor.BP_OrnamentCreateActor_C.ReceiveEndPlay");
		
		ABP_OrnamentCreateActor_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OrnamentCreateActor.BP_OrnamentCreateActor_C.RequestCustomOrnament
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        OrnamentName                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_OrnamentCreateActor_C::RequestCustomOrnament(const class FName& OrnamentName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrnamentCreateActor.BP_OrnamentCreateActor_C.RequestCustomOrnament");
		
		ABP_OrnamentCreateActor_C_RequestCustomOrnament_Params params {};
		params.OrnamentName = OrnamentName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OrnamentCreateActor.BP_OrnamentCreateActor_C.BndEvt__BP_OrnamentCreateActor_InteractionTargetComponent_K2Node_ComponentBoundEvent_0_SBInteractionDelegate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InOtherActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    ViewRotation                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void ABP_OrnamentCreateActor_C::BndEvt__BP_OrnamentCreateActor_InteractionTargetComponent_K2Node_ComponentBoundEvent_0_SBInteractionDelegate__DelegateSignature(class AActor* InOtherActor, const struct FRotator& ViewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrnamentCreateActor.BP_OrnamentCreateActor_C.BndEvt__BP_OrnamentCreateActor_InteractionTargetComponent_K2Node_ComponentBoundEvent_0_SBInteractionDelegate__DelegateSignature");
		
		ABP_OrnamentCreateActor_C_BndEvt__BP_OrnamentCreateActor_InteractionTargetComponent_K2Node_ComponentBoundEvent_0_SBInteractionDelegate__DelegateSignature_Params params {};
		params.InOtherActor = InOtherActor;
		params.ViewRotation = ViewRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OrnamentCreateActor.BP_OrnamentCreateActor_C.RequestPlayerEmote
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBPlayerCharacter*                          PlayerCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_OrnamentCreateActor_C::RequestPlayerEmote(class ASBPlayerCharacter* PlayerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrnamentCreateActor.BP_OrnamentCreateActor_C.RequestPlayerEmote");
		
		ABP_OrnamentCreateActor_C_RequestPlayerEmote_Params params {};
		params.PlayerCharacter = PlayerCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OrnamentCreateActor.BP_OrnamentCreateActor_C.CompleteRoomInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_OrnamentCreateActor_C::CompleteRoomInfo(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrnamentCreateActor.BP_OrnamentCreateActor_C.CompleteRoomInfo");
		
		ABP_OrnamentCreateActor_C_CompleteRoomInfo_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OrnamentCreateActor.BP_OrnamentCreateActor_C.AttachedPlayerState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBPlayerController*                         PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_OrnamentCreateActor_C::AttachedPlayerState(class ASBPlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrnamentCreateActor.BP_OrnamentCreateActor_C.AttachedPlayerState");
		
		ABP_OrnamentCreateActor_C_AttachedPlayerState_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OrnamentCreateActor.BP_OrnamentCreateActor_C.RequestRoomInfo
	 * 		Flags  -> ()
	 */
	void ABP_OrnamentCreateActor_C::RequestRoomInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrnamentCreateActor.BP_OrnamentCreateActor_C.RequestRoomInfo");
		
		ABP_OrnamentCreateActor_C_RequestRoomInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OrnamentCreateActor.BP_OrnamentCreateActor_C.RequestInteractEffect
	 * 		Flags  -> ()
	 */
	void ABP_OrnamentCreateActor_C::RequestInteractEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrnamentCreateActor.BP_OrnamentCreateActor_C.RequestInteractEffect");
		
		ABP_OrnamentCreateActor_C_RequestInteractEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_OrnamentCreateActor.BP_OrnamentCreateActor_C.ExecuteUbergraph_BP_OrnamentCreateActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_OrnamentCreateActor_C::ExecuteUbergraph_BP_OrnamentCreateActor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_OrnamentCreateActor.BP_OrnamentCreateActor_C.ExecuteUbergraph_BP_OrnamentCreateActor");
		
		ABP_OrnamentCreateActor_C_ExecuteUbergraph_BP_OrnamentCreateActor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_OrnamentCreateActor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_OrnamentCreateActor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_OrnamentCreateActor.BP_OrnamentCreateActor_C");
		return ptr;
	}

}


