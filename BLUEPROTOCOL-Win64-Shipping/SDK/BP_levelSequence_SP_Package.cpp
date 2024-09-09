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
	 * 		Name   -> Function BP_levelSequence_SP.BP_LevelSequence_SP_C.ReceiveOnPlay
	 * 		Flags  -> ()
	 */
	void ABP_LevelSequence_SP_C::ReceiveOnPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_levelSequence_SP.BP_LevelSequence_SP_C.ReceiveOnPlay");
		
		ABP_LevelSequence_SP_C_ReceiveOnPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_levelSequence_SP.BP_LevelSequence_SP_C.ReceiveOnStop
	 * 		Flags  -> ()
	 */
	void ABP_LevelSequence_SP_C::ReceiveOnStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_levelSequence_SP.BP_LevelSequence_SP_C.ReceiveOnStop");
		
		ABP_LevelSequence_SP_C_ReceiveOnStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_levelSequence_SP.BP_LevelSequence_SP_C.ExecuteUbergraph_BP_LevelSequence_SP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_LevelSequence_SP_C::ExecuteUbergraph_BP_LevelSequence_SP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_levelSequence_SP.BP_LevelSequence_SP_C.ExecuteUbergraph_BP_LevelSequence_SP");
		
		ABP_LevelSequence_SP_C_ExecuteUbergraph_BP_LevelSequence_SP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_LevelSequence_SP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_LevelSequence_SP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_levelSequence_SP.BP_LevelSequence_SP_C");
		return ptr;
	}

}


