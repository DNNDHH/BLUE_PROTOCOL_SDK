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
	 * 		Name   -> Function BP_EnemyCharacter.BP_EnemyCharacter_C.GetPartsDamageOverrideImpact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      AppearanceId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OverrideImpact                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_EnemyCharacter_C::GetPartsDamageOverrideImpact(const class FString& AppearanceId, bool* IsValid, float* OverrideImpact)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnemyCharacter.BP_EnemyCharacter_C.GetPartsDamageOverrideImpact");
		
		ABP_EnemyCharacter_C_GetPartsDamageOverrideImpact_Params params {};
		params.AppearanceId = AppearanceId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		if (OverrideImpact != nullptr)
			*OverrideImpact = params.OverrideImpact;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnemyCharacter.BP_EnemyCharacter_C.IsClient
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ReturnParam                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_EnemyCharacter_C::IsClient(bool* ReturnParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnemyCharacter.BP_EnemyCharacter_C.IsClient");
		
		ABP_EnemyCharacter_C_IsClient_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnParam != nullptr)
			*ReturnParam = params.ReturnParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnemyCharacter.BP_EnemyCharacter_C.GetDamageReaction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBStunInfo                                 StunInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		E_DamageReaction                                   DamageReaction                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_EnemyCharacter_C::GetDamageReaction(const struct FSBStunInfo& StunInfo, E_DamageReaction* DamageReaction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnemyCharacter.BP_EnemyCharacter_C.GetDamageReaction");
		
		ABP_EnemyCharacter_C_GetDamageReaction_Params params {};
		params.StunInfo = StunInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DamageReaction != nullptr)
			*DamageReaction = params.DamageReaction;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnemyCharacter.BP_EnemyCharacter_C.InitializeEquipWeapon
	 * 		Flags  -> ()
	 */
	void ABP_EnemyCharacter_C::InitializeEquipWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnemyCharacter.BP_EnemyCharacter_C.InitializeEquipWeapon");
		
		ABP_EnemyCharacter_C_InitializeEquipWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnemyCharacter.BP_EnemyCharacter_C.SetAimBodyBlendRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              BlendRate                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_EnemyCharacter_C::SetAimBodyBlendRate(float BlendRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnemyCharacter.BP_EnemyCharacter_C.SetAimBodyBlendRate");
		
		ABP_EnemyCharacter_C_SetAimBodyBlendRate_Params params {};
		params.BlendRate = BlendRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnemyCharacter.BP_EnemyCharacter_C.EndAimBodyBlend
	 * 		Flags  -> ()
	 */
	void ABP_EnemyCharacter_C::EndAimBodyBlend()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnemyCharacter.BP_EnemyCharacter_C.EndAimBodyBlend");
		
		ABP_EnemyCharacter_C_EndAimBodyBlend_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnemyCharacter.BP_EnemyCharacter_C.BeginAimBodyBlend
	 * 		Flags  -> ()
	 */
	void ABP_EnemyCharacter_C::BeginAimBodyBlend()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnemyCharacter.BP_EnemyCharacter_C.BeginAimBodyBlend");
		
		ABP_EnemyCharacter_C_BeginAimBodyBlend_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnemyCharacter.BP_EnemyCharacter_C.UpdateAimBlend
	 * 		Flags  -> ()
	 */
	void ABP_EnemyCharacter_C::UpdateAimBlend()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnemyCharacter.BP_EnemyCharacter_C.UpdateAimBlend");
		
		ABP_EnemyCharacter_C_UpdateAimBlend_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnemyCharacter.BP_EnemyCharacter_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_EnemyCharacter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnemyCharacter.BP_EnemyCharacter_C.UserConstructionScript");
		
		ABP_EnemyCharacter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnemyCharacter.BP_EnemyCharacter_C.Timeline_AimBodyBlendRate__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_EnemyCharacter_C::Timeline_AimBodyBlendRate__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnemyCharacter.BP_EnemyCharacter_C.Timeline_AimBodyBlendRate__FinishedFunc");
		
		ABP_EnemyCharacter_C_Timeline_AimBodyBlendRate__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnemyCharacter.BP_EnemyCharacter_C.Timeline_AimBodyBlendRate__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_EnemyCharacter_C::Timeline_AimBodyBlendRate__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnemyCharacter.BP_EnemyCharacter_C.Timeline_AimBodyBlendRate__UpdateFunc");
		
		ABP_EnemyCharacter_C_Timeline_AimBodyBlendRate__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnemyCharacter.BP_EnemyCharacter_C.Event Begin Aim Restricted
	 * 		Flags  -> ()
	 */
	void ABP_EnemyCharacter_C::EventBeginAimRestricted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnemyCharacter.BP_EnemyCharacter_C.Event Begin Aim Restricted");
		
		ABP_EnemyCharacter_C_EventBeginAimRestricted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnemyCharacter.BP_EnemyCharacter_C.ReceiveEndInitialLoad
	 * 		Flags  -> ()
	 */
	void ABP_EnemyCharacter_C::ReceiveEndInitialLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnemyCharacter.BP_EnemyCharacter_C.ReceiveEndInitialLoad");
		
		ABP_EnemyCharacter_C_ReceiveEndInitialLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnemyCharacter.BP_EnemyCharacter_C.Event End Aim Restricted
	 * 		Flags  -> ()
	 */
	void ABP_EnemyCharacter_C::EventEndAimRestricted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnemyCharacter.BP_EnemyCharacter_C.Event End Aim Restricted");
		
		ABP_EnemyCharacter_C_EventEndAimRestricted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnemyCharacter.BP_EnemyCharacter_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_EnemyCharacter_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnemyCharacter.BP_EnemyCharacter_C.ReceiveTick");
		
		ABP_EnemyCharacter_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnemyCharacter.BP_EnemyCharacter_C.ReceiveStartDeathEffect
	 * 		Flags  -> ()
	 */
	void ABP_EnemyCharacter_C::ReceiveStartDeathEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnemyCharacter.BP_EnemyCharacter_C.ReceiveStartDeathEffect");
		
		ABP_EnemyCharacter_C_ReceiveStartDeathEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnemyCharacter.BP_EnemyCharacter_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_EnemyCharacter_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnemyCharacter.BP_EnemyCharacter_C.ReceiveBeginPlay");
		
		ABP_EnemyCharacter_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnemyCharacter.BP_EnemyCharacter_C.ReceiveSelfDeath
	 * 		Flags  -> ()
	 */
	void ABP_EnemyCharacter_C::ReceiveSelfDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnemyCharacter.BP_EnemyCharacter_C.ReceiveSelfDeath");
		
		ABP_EnemyCharacter_C_ReceiveSelfDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnemyCharacter.BP_EnemyCharacter_C.Event Aim Body Blend Rate Near Max
	 * 		Flags  -> ()
	 */
	void ABP_EnemyCharacter_C::EventAimBodyBlendRateNearMax()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnemyCharacter.BP_EnemyCharacter_C.Event Aim Body Blend Rate Near Max");
		
		ABP_EnemyCharacter_C_EventAimBodyBlendRateNearMax_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnemyCharacter.BP_EnemyCharacter_C.ExecuteUbergraph_BP_EnemyCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_EnemyCharacter_C::ExecuteUbergraph_BP_EnemyCharacter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnemyCharacter.BP_EnemyCharacter_C.ExecuteUbergraph_BP_EnemyCharacter");
		
		ABP_EnemyCharacter_C_ExecuteUbergraph_BP_EnemyCharacter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnemyCharacter.BP_EnemyCharacter_C.EnemySelfDeath__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_EnemyCharacter_C::EnemySelfDeath__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnemyCharacter.BP_EnemyCharacter_C.EnemySelfDeath__DelegateSignature");
		
		ABP_EnemyCharacter_C_EnemySelfDeath__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EnemyCharacter.BP_EnemyCharacter_C.EnemyDeath__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_EnemyCharacter_C::EnemyDeath__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EnemyCharacter.BP_EnemyCharacter_C.EnemyDeath__DelegateSignature");
		
		ABP_EnemyCharacter_C_EnemyDeath__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_EnemyCharacter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_EnemyCharacter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_EnemyCharacter.BP_EnemyCharacter_C");
		return ptr;
	}

}


