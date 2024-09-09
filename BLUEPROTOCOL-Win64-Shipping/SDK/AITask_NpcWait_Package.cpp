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
	 * 		Name   -> Function AITask_NpcWait.AITask_NpcWait_C.TaskFinish
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInOwnerFinished                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAITask_NpcWait_C::TaskFinish(class AAIController* Controller, class APawn* ControlledPawn, bool bInOwnerFinished)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AITask_NpcWait.AITask_NpcWait_C.TaskFinish");
		
		UAITask_NpcWait_C_TaskFinish_Params params {};
		params.Controller = Controller;
		params.ControlledPawn = ControlledPawn;
		params.bInOwnerFinished = bInOwnerFinished;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AITask_NpcWait.AITask_NpcWait_C.RequestAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAITask_NpcWait_C::RequestAnimation(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AITask_NpcWait.AITask_NpcWait_C.RequestAnimation");
		
		UAITask_NpcWait_C_RequestAnimation_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AITask_NpcWait.AITask_NpcWait_C.TaskStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAITask_NpcWait_C::TaskStart(class AAIController* Controller, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AITask_NpcWait.AITask_NpcWait_C.TaskStart");
		
		UAITask_NpcWait_C_TaskStart_Params params {};
		params.Controller = Controller;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AITask_NpcWait.AITask_NpcWait_C.ExecuteUbergraph_AITask_NpcWait
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAITask_NpcWait_C::ExecuteUbergraph_AITask_NpcWait(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AITask_NpcWait.AITask_NpcWait_C.ExecuteUbergraph_AITask_NpcWait");
		
		UAITask_NpcWait_C_ExecuteUbergraph_AITask_NpcWait_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAITask_NpcWait_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAITask_NpcWait_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AITask_NpcWait.AITask_NpcWait_C");
		return ptr;
	}

}


