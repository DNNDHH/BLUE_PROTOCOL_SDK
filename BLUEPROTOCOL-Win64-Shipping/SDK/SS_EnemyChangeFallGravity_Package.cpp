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
	 * 		Name   -> Function SS_EnemyChangeFallGravity.SS_EnemyChangeFallGravity_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimInstance*                               AnimInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UASAnimationSet*                             AnimationSet                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USS_EnemyChangeFallGravity_C::ReceiveBeginPlay(class UAnimInstance* AnimInstance, class UASAnimationSet* AnimationSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SS_EnemyChangeFallGravity.SS_EnemyChangeFallGravity_C.ReceiveBeginPlay");
		
		USS_EnemyChangeFallGravity_C_ReceiveBeginPlay_Params params {};
		params.AnimInstance = AnimInstance;
		params.AnimationSet = AnimationSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SS_EnemyChangeFallGravity.SS_EnemyChangeFallGravity_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimInstance*                               AnimInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USS_EnemyChangeFallGravity_C::ReceiveEndPlay(class UAnimInstance* AnimInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SS_EnemyChangeFallGravity.SS_EnemyChangeFallGravity_C.ReceiveEndPlay");
		
		USS_EnemyChangeFallGravity_C_ReceiveEndPlay_Params params {};
		params.AnimInstance = AnimInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SS_EnemyChangeFallGravity.SS_EnemyChangeFallGravity_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimInstance*                               AnimInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UASAnimationSet*                             AnimationSet                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USS_EnemyChangeFallGravity_C::ReceiveTick(float DeltaTime, class UAnimInstance* AnimInstance, class UASAnimationSet* AnimationSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SS_EnemyChangeFallGravity.SS_EnemyChangeFallGravity_C.ReceiveTick");
		
		USS_EnemyChangeFallGravity_C_ReceiveTick_Params params {};
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
	 * 		Name   -> Function SS_EnemyChangeFallGravity.SS_EnemyChangeFallGravity_C.ExecuteUbergraph_SS_EnemyChangeFallGravity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USS_EnemyChangeFallGravity_C::ExecuteUbergraph_SS_EnemyChangeFallGravity(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SS_EnemyChangeFallGravity.SS_EnemyChangeFallGravity_C.ExecuteUbergraph_SS_EnemyChangeFallGravity");
		
		USS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USS_EnemyChangeFallGravity_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USS_EnemyChangeFallGravity_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SS_EnemyChangeFallGravity.SS_EnemyChangeFallGravity_C");
		return ptr;
	}

}


