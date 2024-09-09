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
	 * 		Name   -> Function BP_DHC_OutPortal.BP_DHC_OutPortal_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_DHC_OutPortal_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DHC_OutPortal.BP_DHC_OutPortal_C.ReceiveBeginPlay");
		
		ABP_DHC_OutPortal_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DHC_OutPortal.BP_DHC_OutPortal_C.Interacted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    ViewRotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_DHC_OutPortal_C::Interacted(class AActor* OtherActor, const struct FRotator& ViewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DHC_OutPortal.BP_DHC_OutPortal_C.Interacted");
		
		ABP_DHC_OutPortal_C_Interacted_Params params {};
		params.OtherActor = OtherActor;
		params.ViewRotation = ViewRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DHC_OutPortal.BP_DHC_OutPortal_C.TeleportOut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class APlayerController*>                   PlayerMembers                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_DHC_OutPortal_C::TeleportOut(TArray<class APlayerController*> PlayerMembers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DHC_OutPortal.BP_DHC_OutPortal_C.TeleportOut");
		
		ABP_DHC_OutPortal_C_TeleportOut_Params params {};
		params.PlayerMembers = PlayerMembers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DHC_OutPortal.BP_DHC_OutPortal_C.CustomEvent
	 * 		Flags  -> ()
	 */
	void ABP_DHC_OutPortal_C::CustomEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DHC_OutPortal.BP_DHC_OutPortal_C.CustomEvent");
		
		ABP_DHC_OutPortal_C_CustomEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DHC_OutPortal.BP_DHC_OutPortal_C.ExecuteUbergraph_BP_DHC_OutPortal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DHC_OutPortal_C::ExecuteUbergraph_BP_DHC_OutPortal(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DHC_OutPortal.BP_DHC_OutPortal_C.ExecuteUbergraph_BP_DHC_OutPortal");
		
		ABP_DHC_OutPortal_C_ExecuteUbergraph_BP_DHC_OutPortal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_DHC_OutPortal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DHC_OutPortal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DHC_OutPortal.BP_DHC_OutPortal_C");
		return ptr;
	}

}


