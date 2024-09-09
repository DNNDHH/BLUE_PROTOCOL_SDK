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
	 * 		Name   -> Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.IsCompleteAnimTimeRatio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBNpcCharacterAnimInstance*                 AnimInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsCompleted                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USS_NPC_WaitTurn_C::IsCompleteAnimTimeRatio(class USBNpcCharacterAnimInstance* AnimInstance, bool* IsCompleted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.IsCompleteAnimTimeRatio");
		
		USS_NPC_WaitTurn_C_IsCompleteAnimTimeRatio_Params params {};
		params.AnimInstance = AnimInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsCompleted != nullptr)
			*IsCompleted = params.IsCompleted;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.SetCompleteAnimTimeRatio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBNpcCharacterAnimInstance*                 AnimInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsCompleted                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USS_NPC_WaitTurn_C::SetCompleteAnimTimeRatio(class USBNpcCharacterAnimInstance* AnimInstance, bool IsCompleted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.SetCompleteAnimTimeRatio");
		
		USS_NPC_WaitTurn_C_SetCompleteAnimTimeRatio_Params params {};
		params.AnimInstance = AnimInstance;
		params.IsCompleted = IsCompleted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.GetTempAnimTimeLength
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBNpcCharacterAnimInstance*                 AnimInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AnimTimeLength                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USS_NPC_WaitTurn_C::GetTempAnimTimeLength(class USBNpcCharacterAnimInstance* AnimInstance, float* AnimTimeLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.GetTempAnimTimeLength");
		
		USS_NPC_WaitTurn_C_GetTempAnimTimeLength_Params params {};
		params.AnimInstance = AnimInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimTimeLength != nullptr)
			*AnimTimeLength = params.AnimTimeLength;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.GetTempAnimTimeRatio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBNpcCharacterAnimInstance*                 AnimInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AnimTimeRatio                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USS_NPC_WaitTurn_C::GetTempAnimTimeRatio(class USBNpcCharacterAnimInstance* AnimInstance, float* AnimTimeRatio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.GetTempAnimTimeRatio");
		
		USS_NPC_WaitTurn_C_GetTempAnimTimeRatio_Params params {};
		params.AnimInstance = AnimInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimTimeRatio != nullptr)
			*AnimTimeRatio = params.AnimTimeRatio;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.SetTempAnimTimeLength
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBNpcCharacterAnimInstance*                 AnimInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AnimTimeLength                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USS_NPC_WaitTurn_C::SetTempAnimTimeLength(class USBNpcCharacterAnimInstance* AnimInstance, float AnimTimeLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.SetTempAnimTimeLength");
		
		USS_NPC_WaitTurn_C_SetTempAnimTimeLength_Params params {};
		params.AnimInstance = AnimInstance;
		params.AnimTimeLength = AnimTimeLength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.Set Temp Anim Time Ratio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBNpcCharacterAnimInstance*                 AnimInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AnimTimeRatio                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USS_NPC_WaitTurn_C::SetTempAnimTimeRatio(class USBNpcCharacterAnimInstance* AnimInstance, float AnimTimeRatio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.Set Temp Anim Time Ratio");
		
		USS_NPC_WaitTurn_C_SetTempAnimTimeRatio_Params params {};
		params.AnimInstance = AnimInstance;
		params.AnimTimeRatio = AnimTimeRatio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.GetStartTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBNpcCharacterAnimInstance*                 AnimInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDateTime                                   StartTime                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void USS_NPC_WaitTurn_C::GetStartTime(class USBNpcCharacterAnimInstance* AnimInstance, struct FDateTime* StartTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.GetStartTime");
		
		USS_NPC_WaitTurn_C_GetStartTime_Params params {};
		params.AnimInstance = AnimInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StartTime != nullptr)
			*StartTime = params.StartTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.SetStartTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBNpcCharacterAnimInstance*                 AnimInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USS_NPC_WaitTurn_C::SetStartTime(class USBNpcCharacterAnimInstance* AnimInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.SetStartTime");
		
		USS_NPC_WaitTurn_C_SetStartTime_Params params {};
		params.AnimInstance = AnimInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.EndProcess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBMobCharacter*                             MobCharacter                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USBNpcCharacterAnimInstance*                 AnimInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USS_NPC_WaitTurn_C::EndProcess(class ASBMobCharacter* MobCharacter, class USBNpcCharacterAnimInstance* AnimInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.EndProcess");
		
		USS_NPC_WaitTurn_C_EndProcess_Params params {};
		params.MobCharacter = MobCharacter;
		params.AnimInstance = AnimInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.TickDelegateProcess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USBNpcCharacterAnimInstance*                 AnimInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USS_NPC_WaitTurn_C::TickDelegateProcess(class AActor* Actor, class USBNpcCharacterAnimInstance* AnimInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.TickDelegateProcess");
		
		USS_NPC_WaitTurn_C_TickDelegateProcess_Params params {};
		params.Actor = Actor;
		params.AnimInstance = AnimInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.TickProcess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBNpcCharacterAnimInstance*                 AnimInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USS_NPC_WaitTurn_C::TickProcess(class USBNpcCharacterAnimInstance* AnimInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.TickProcess");
		
		USS_NPC_WaitTurn_C_TickProcess_Params params {};
		params.AnimInstance = AnimInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.BeginProcess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBMobCharacter*                             MobCharacer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USBNpcCharacterAnimInstance*                 AnimInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USS_NPC_WaitTurn_C::BeginProcess(class ASBMobCharacter* MobCharacer, class USBNpcCharacterAnimInstance* AnimInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.BeginProcess");
		
		USS_NPC_WaitTurn_C_BeginProcess_Params params {};
		params.MobCharacer = MobCharacer;
		params.AnimInstance = AnimInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimInstance*                               AnimInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USS_NPC_WaitTurn_C::ReceiveEndPlay(class UAnimInstance* AnimInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.ReceiveEndPlay");
		
		USS_NPC_WaitTurn_C_ReceiveEndPlay_Params params {};
		params.AnimInstance = AnimInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.TickDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBMobCharacter*                             InMobCharacter                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USS_NPC_WaitTurn_C::TickDelegate(class ASBMobCharacter* InMobCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.TickDelegate");
		
		USS_NPC_WaitTurn_C_TickDelegate_Params params {};
		params.InMobCharacter = InMobCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimInstance*                               AnimInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UASAnimationSet*                             AnimationSet                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USS_NPC_WaitTurn_C::ReceiveBeginPlay(class UAnimInstance* AnimInstance, class UASAnimationSet* AnimationSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.ReceiveBeginPlay");
		
		USS_NPC_WaitTurn_C_ReceiveBeginPlay_Params params {};
		params.AnimInstance = AnimInstance;
		params.AnimationSet = AnimationSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimInstance*                               AnimInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UASAnimationSet*                             AnimationSet                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USS_NPC_WaitTurn_C::ReceiveTick(float DeltaTime, class UAnimInstance* AnimInstance, class UASAnimationSet* AnimationSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.ReceiveTick");
		
		USS_NPC_WaitTurn_C_ReceiveTick_Params params {};
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
	 * 		Name   -> Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.ExecuteUbergraph_SS_NPC_WaitTurn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USS_NPC_WaitTurn_C::ExecuteUbergraph_SS_NPC_WaitTurn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.ExecuteUbergraph_SS_NPC_WaitTurn");
		
		USS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USS_NPC_WaitTurn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USS_NPC_WaitTurn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SS_NPC_WaitTurn.SS_NPC_WaitTurn_C");
		return ptr;
	}

}


