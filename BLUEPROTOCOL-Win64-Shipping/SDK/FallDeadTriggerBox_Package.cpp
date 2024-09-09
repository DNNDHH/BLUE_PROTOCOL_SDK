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
	 * 		Name   -> Function FallDeadTriggerBox.FallDeadTriggerBox_C.SetStaticMeshScale
	 * 		Flags  -> ()
	 */
	void AFallDeadTriggerBox_C::SetStaticMeshScale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FallDeadTriggerBox.FallDeadTriggerBox_C.SetStaticMeshScale");
		
		AFallDeadTriggerBox_C_SetStaticMeshScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FallDeadTriggerBox.FallDeadTriggerBox_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AFallDeadTriggerBox_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FallDeadTriggerBox.FallDeadTriggerBox_C.UserConstructionScript");
		
		AFallDeadTriggerBox_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FallDeadTriggerBox.FallDeadTriggerBox_C.ReceiveActorBeginOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFallDeadTriggerBox_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FallDeadTriggerBox.FallDeadTriggerBox_C.ReceiveActorBeginOverlap");
		
		AFallDeadTriggerBox_C_ReceiveActorBeginOverlap_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FallDeadTriggerBox.FallDeadTriggerBox_C.ExecuteUbergraph_FallDeadTriggerBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFallDeadTriggerBox_C::ExecuteUbergraph_FallDeadTriggerBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FallDeadTriggerBox.FallDeadTriggerBox_C.ExecuteUbergraph_FallDeadTriggerBox");
		
		AFallDeadTriggerBox_C_ExecuteUbergraph_FallDeadTriggerBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFallDeadTriggerBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFallDeadTriggerBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FallDeadTriggerBox.FallDeadTriggerBox_C");
		return ptr;
	}

}


