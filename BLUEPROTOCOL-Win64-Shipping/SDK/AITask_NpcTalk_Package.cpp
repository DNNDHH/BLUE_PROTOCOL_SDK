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
	 * 		Name   -> Function AITask_NpcTalk.AITask_NpcTalk_C.ResetPlayerInteractionActionDeltaTime
	 * 		Flags  -> ()
	 */
	void UAITask_NpcTalk_C::ResetPlayerInteractionActionDeltaTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AITask_NpcTalk.AITask_NpcTalk_C.ResetPlayerInteractionActionDeltaTime");
		
		UAITask_NpcTalk_C_ResetPlayerInteractionActionDeltaTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AITask_NpcTalk.AITask_NpcTalk_C.IsNpcIsQuestReceptionist
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InProfileDatId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Flag                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAITask_NpcTalk_C::IsNpcIsQuestReceptionist(const class FName& InProfileDatId, bool* Flag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AITask_NpcTalk.AITask_NpcTalk_C.IsNpcIsQuestReceptionist");
		
		UAITask_NpcTalk_C_IsNpcIsQuestReceptionist_Params params {};
		params.InProfileDatId = InProfileDatId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Flag != nullptr)
			*Flag = params.Flag;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AITask_NpcTalk.AITask_NpcTalk_C.CheckMobCharacterQuestPrecondition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBMobCharacter*                             InMobCharacter                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Flag                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAITask_NpcTalk_C::CheckMobCharacterQuestPrecondition(class ASBMobCharacter* InMobCharacter, bool* Flag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AITask_NpcTalk.AITask_NpcTalk_C.CheckMobCharacterQuestPrecondition");
		
		UAITask_NpcTalk_C_CheckMobCharacterQuestPrecondition_Params params {};
		params.InMobCharacter = InMobCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Flag != nullptr)
			*Flag = params.Flag;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AITask_NpcTalk.AITask_NpcTalk_C.SetNeedTurn
	 * 		Flags  -> ()
	 */
	void UAITask_NpcTalk_C::SetNeedTurn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AITask_NpcTalk.AITask_NpcTalk_C.SetNeedTurn");
		
		UAITask_NpcTalk_C_SetNeedTurn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AITask_NpcTalk.AITask_NpcTalk_C.OnEndScript
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBScriptActor*                              InScriptActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InScriptHandle                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAITask_NpcTalk_C::OnEndScript(class ASBScriptActor* InScriptActor, int32_t InScriptHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AITask_NpcTalk.AITask_NpcTalk_C.OnEndScript");
		
		UAITask_NpcTalk_C_OnEndScript_Params params {};
		params.InScriptActor = InScriptActor;
		params.InScriptHandle = InScriptHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AITask_NpcTalk.AITask_NpcTalk_C.TaskFinish
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInOwnerFinished                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAITask_NpcTalk_C::TaskFinish(class AAIController* Controller, class APawn* ControlledPawn, bool bInOwnerFinished)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AITask_NpcTalk.AITask_NpcTalk_C.TaskFinish");
		
		UAITask_NpcTalk_C_TaskFinish_Params params {};
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
	 * 		Name   -> Function AITask_NpcTalk.AITask_NpcTalk_C.TaskStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AAIController*                               Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAITask_NpcTalk_C::TaskStart(class AAIController* Controller, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AITask_NpcTalk.AITask_NpcTalk_C.TaskStart");
		
		UAITask_NpcTalk_C_TaskStart_Params params {};
		params.Controller = Controller;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AITask_NpcTalk.AITask_NpcTalk_C.ExecuteUbergraph_AITask_NpcTalk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAITask_NpcTalk_C::ExecuteUbergraph_AITask_NpcTalk(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AITask_NpcTalk.AITask_NpcTalk_C.ExecuteUbergraph_AITask_NpcTalk");
		
		UAITask_NpcTalk_C_ExecuteUbergraph_AITask_NpcTalk_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAITask_NpcTalk_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAITask_NpcTalk_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AITask_NpcTalk.AITask_NpcTalk_C");
		return ptr;
	}

}


