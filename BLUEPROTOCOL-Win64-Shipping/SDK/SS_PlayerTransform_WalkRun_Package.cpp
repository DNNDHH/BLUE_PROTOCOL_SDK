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
	 * 		Name   -> Function SS_PlayerTransform_WalkRun.SS_PlayerTransform_WalkRun_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimInstance*                               AnimInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UASAnimationSet*                             AnimationSet                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USS_PlayerTransform_WalkRun_C::ReceiveTick(float DeltaTime, class UAnimInstance* AnimInstance, class UASAnimationSet* AnimationSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SS_PlayerTransform_WalkRun.SS_PlayerTransform_WalkRun_C.ReceiveTick");
		
		USS_PlayerTransform_WalkRun_C_ReceiveTick_Params params {};
		params.DeltaTime = DeltaTime;
		params.AnimInstance = AnimInstance;
		params.AnimationSet = AnimationSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SS_PlayerTransform_WalkRun.SS_PlayerTransform_WalkRun_C.ExecuteUbergraph_SS_PlayerTransform_WalkRun
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USS_PlayerTransform_WalkRun_C::ExecuteUbergraph_SS_PlayerTransform_WalkRun(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SS_PlayerTransform_WalkRun.SS_PlayerTransform_WalkRun_C.ExecuteUbergraph_SS_PlayerTransform_WalkRun");
		
		USS_PlayerTransform_WalkRun_C_ExecuteUbergraph_SS_PlayerTransform_WalkRun_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USS_PlayerTransform_WalkRun_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USS_PlayerTransform_WalkRun_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SS_PlayerTransform_WalkRun.SS_PlayerTransform_WalkRun_C");
		return ptr;
	}

}


