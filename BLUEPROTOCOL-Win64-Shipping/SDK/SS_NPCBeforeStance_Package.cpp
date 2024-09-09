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
	 * 		Name   -> Function SS_NPCBeforeStance.SS_NPCBeforeStance_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimInstance*                               AnimInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UASAnimationSet*                             AnimationSet                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USS_NPCBeforeStance_C::ReceiveBeginPlay(class UAnimInstance* AnimInstance, class UASAnimationSet* AnimationSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SS_NPCBeforeStance.SS_NPCBeforeStance_C.ReceiveBeginPlay");
		
		USS_NPCBeforeStance_C_ReceiveBeginPlay_Params params {};
		params.AnimInstance = AnimInstance;
		params.AnimationSet = AnimationSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SS_NPCBeforeStance.SS_NPCBeforeStance_C.ExecuteUbergraph_SS_NPCBeforeStance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USS_NPCBeforeStance_C::ExecuteUbergraph_SS_NPCBeforeStance(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SS_NPCBeforeStance.SS_NPCBeforeStance_C.ExecuteUbergraph_SS_NPCBeforeStance");
		
		USS_NPCBeforeStance_C_ExecuteUbergraph_SS_NPCBeforeStance_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USS_NPCBeforeStance_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USS_NPCBeforeStance_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SS_NPCBeforeStance.SS_NPCBeforeStance_C");
		return ptr;
	}

}


