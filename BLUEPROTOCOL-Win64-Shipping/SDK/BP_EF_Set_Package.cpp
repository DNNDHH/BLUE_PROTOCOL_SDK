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
	 * 		Name   -> Function BP_EF_Set.BP_EF_Set_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_EF_Set_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EF_Set.BP_EF_Set_C.ReceiveBeginPlay");
		
		ABP_EF_Set_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EF_Set.BP_EF_Set_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_EF_Set_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EF_Set.BP_EF_Set_C.ReceiveTick");
		
		ABP_EF_Set_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EF_Set.BP_EF_Set_C.EffectCheck
	 * 		Flags  -> ()
	 */
	void ABP_EF_Set_C::EffectCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EF_Set.BP_EF_Set_C.EffectCheck");
		
		ABP_EF_Set_C_EffectCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EF_Set.BP_EF_Set_C.ReceiveNotifyUpdateAttackCollisionScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_EF_Set_C::ReceiveNotifyUpdateAttackCollisionScale(const struct FVector& Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EF_Set.BP_EF_Set_C.ReceiveNotifyUpdateAttackCollisionScale");
		
		ABP_EF_Set_C_ReceiveNotifyUpdateAttackCollisionScale_Params params {};
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EF_Set.BP_EF_Set_C.ReceiveNotifyPrepareDestroy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bForce                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_EF_Set_C::ReceiveNotifyPrepareDestroy(bool bForce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EF_Set.BP_EF_Set_C.ReceiveNotifyPrepareDestroy");
		
		ABP_EF_Set_C_ReceiveNotifyPrepareDestroy_Params params {};
		params.bForce = bForce;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EF_Set.BP_EF_Set_C.ExecuteUbergraph_BP_EF_Set
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_EF_Set_C::ExecuteUbergraph_BP_EF_Set(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EF_Set.BP_EF_Set_C.ExecuteUbergraph_BP_EF_Set");
		
		ABP_EF_Set_C_ExecuteUbergraph_BP_EF_Set_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_EF_Set_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_EF_Set_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_EF_Set.BP_EF_Set_C");
		return ptr;
	}

}


