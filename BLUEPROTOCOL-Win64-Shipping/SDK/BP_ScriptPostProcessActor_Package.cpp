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
	 * 		Name   -> Function BP_ScriptPostProcessActor.BP_ScriptPostProcessActor_C.GetTimeRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeRate                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptPostProcessActor_C::GetTimeRate(float* TimeRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptPostProcessActor.BP_ScriptPostProcessActor_C.GetTimeRate");
		
		ABP_ScriptPostProcessActor_C_GetTimeRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TimeRate != nullptr)
			*TimeRate = params.TimeRate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptPostProcessActor.BP_ScriptPostProcessActor_C.Update_Internal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptPostProcessActor_C::Update_Internal(float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptPostProcessActor.BP_ScriptPostProcessActor_C.Update_Internal");
		
		ABP_ScriptPostProcessActor_C_Update_Internal_Params params {};
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptPostProcessActor.BP_ScriptPostProcessActor_C.ApplyDofSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InSettingName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InTransitionTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ScriptPostProcessActor_C::ApplyDofSettings(const class FName& InSettingName, float InTransitionTime, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptPostProcessActor.BP_ScriptPostProcessActor_C.ApplyDofSettings");
		
		ABP_ScriptPostProcessActor_C_ApplyDofSettings_Params params {};
		params.InSettingName = InSettingName;
		params.InTransitionTime = InTransitionTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptPostProcessActor.BP_ScriptPostProcessActor_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptPostProcessActor_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptPostProcessActor.BP_ScriptPostProcessActor_C.ReceiveTick");
		
		ABP_ScriptPostProcessActor_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptPostProcessActor.BP_ScriptPostProcessActor_C.ExecuteUbergraph_BP_ScriptPostProcessActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptPostProcessActor_C::ExecuteUbergraph_BP_ScriptPostProcessActor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptPostProcessActor.BP_ScriptPostProcessActor_C.ExecuteUbergraph_BP_ScriptPostProcessActor");
		
		ABP_ScriptPostProcessActor_C_ExecuteUbergraph_BP_ScriptPostProcessActor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptPostProcessActor.BP_ScriptPostProcessActor_C.OnDofTransitionFinish__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_ScriptPostProcessActor_C::OnDofTransitionFinish__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptPostProcessActor.BP_ScriptPostProcessActor_C.OnDofTransitionFinish__DelegateSignature");
		
		ABP_ScriptPostProcessActor_C_OnDofTransitionFinish__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ScriptPostProcessActor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ScriptPostProcessActor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ScriptPostProcessActor.BP_ScriptPostProcessActor_C");
		return ptr;
	}

}


