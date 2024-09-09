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
	 * 		Name   -> Function BP_ExtraFoothold.BP_ExtraFoothold_C.BadFallingSurvey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SetStep                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ExtraFoothold_C::BadFallingSurvey(bool* SetStep)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExtraFoothold.BP_ExtraFoothold_C.BadFallingSurvey");
		
		ABP_ExtraFoothold_C_BadFallingSurvey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SetStep != nullptr)
			*SetStep = params.SetStep;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ExtraFoothold.BP_ExtraFoothold_C.GetLocalPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_PlayerCharacter_C*                       LocalPlayerCharacter                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ExtraFoothold_C::GetLocalPlayer(class ABP_PlayerCharacter_C** LocalPlayerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExtraFoothold.BP_ExtraFoothold_C.GetLocalPlayer");
		
		ABP_ExtraFoothold_C_GetLocalPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LocalPlayerCharacter != nullptr)
			*LocalPlayerCharacter = params.LocalPlayerCharacter;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ExtraFoothold.BP_ExtraFoothold_C.HideStep
	 * 		Flags  -> ()
	 */
	void ABP_ExtraFoothold_C::HideStep()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExtraFoothold.BP_ExtraFoothold_C.HideStep");
		
		ABP_ExtraFoothold_C_HideStep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ExtraFoothold.BP_ExtraFoothold_C.SetStep
	 * 		Flags  -> ()
	 */
	void ABP_ExtraFoothold_C::SetStep()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExtraFoothold.BP_ExtraFoothold_C.SetStep");
		
		ABP_ExtraFoothold_C_SetStep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ExtraFoothold.BP_ExtraFoothold_C.CheckWarning
	 * 		Flags  -> ()
	 */
	void ABP_ExtraFoothold_C::CheckWarning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExtraFoothold.BP_ExtraFoothold_C.CheckWarning");
		
		ABP_ExtraFoothold_C_CheckWarning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ExtraFoothold.BP_ExtraFoothold_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ExtraFoothold_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExtraFoothold.BP_ExtraFoothold_C.ReceiveTick");
		
		ABP_ExtraFoothold_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ExtraFoothold.BP_ExtraFoothold_C.DebugFlyinStatusChange
	 * 		Flags  -> ()
	 */
	void ABP_ExtraFoothold_C::DebugFlyinStatusChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExtraFoothold.BP_ExtraFoothold_C.DebugFlyinStatusChange");
		
		ABP_ExtraFoothold_C_DebugFlyinStatusChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ExtraFoothold.BP_ExtraFoothold_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_ExtraFoothold_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExtraFoothold.BP_ExtraFoothold_C.ReceiveBeginPlay");
		
		ABP_ExtraFoothold_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ExtraFoothold.BP_ExtraFoothold_C.ExecuteUbergraph_BP_ExtraFoothold
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ExtraFoothold_C::ExecuteUbergraph_BP_ExtraFoothold(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ExtraFoothold.BP_ExtraFoothold_C.ExecuteUbergraph_BP_ExtraFoothold");
		
		ABP_ExtraFoothold_C_ExecuteUbergraph_BP_ExtraFoothold_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ExtraFoothold_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ExtraFoothold_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ExtraFoothold.BP_ExtraFoothold_C");
		return ptr;
	}

}


