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
	 * 		Name   -> Function ActionSystem.ASAnimationSet.GetStateMachine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UASStateMachine* UASAnimationSet::GetStateMachine(const class FName& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASAnimationSet.GetStateMachine");
		
		UASAnimationSet_GetStateMachine_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASAnimationSet.GetSequence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAnimSequenceBase* UASAnimationSet::GetSequence(const class FName& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASAnimationSet.GetSequence");
		
		UASAnimationSet_GetSequence_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASAnimationSet.GetBlendSpace
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UBlendSpaceBase* UASAnimationSet::GetBlendSpace(const class FName& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASAnimationSet.GetBlendSpace");
		
		UASAnimationSet_GetBlendSpace_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UASAnimationSet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UASAnimationSet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionSystem.ASAnimationSet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASAnimInstance.SetDynamicTransition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      AnimNodeName                                               (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      TransitionName                                             (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CrossfadeDuration                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UASAnimInstance::SetDynamicTransition(const class FString& AnimNodeName, const class FString& TransitionName, float CrossfadeDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASAnimInstance.SetDynamicTransition");
		
		UASAnimInstance_SetDynamicTransition_Params params {};
		params.AnimNodeName = AnimNodeName;
		params.TransitionName = TransitionName;
		params.CrossfadeDuration = CrossfadeDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASAnimInstance.SetDynamicSubMachine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      AnimNodeName                                               (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StateName                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UASStateMachine*                             StateMachineAsset                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UASAnimInstance::SetDynamicSubMachine(const class FString& AnimNodeName, const class FString& StateName, class UASStateMachine* StateMachineAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASAnimInstance.SetDynamicSubMachine");
		
		UASAnimInstance_SetDynamicSubMachine_Params params {};
		params.AnimNodeName = AnimNodeName;
		params.StateName = StateName;
		params.StateMachineAsset = StateMachineAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASAnimInstance.SetDynamicSequence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      AnimNodeName                                               (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StateName                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAnimSequenceBase*                           SequenceAsset                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UASAnimInstance::SetDynamicSequence(const class FString& AnimNodeName, const class FString& StateName, class UAnimSequenceBase* SequenceAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASAnimInstance.SetDynamicSequence");
		
		UASAnimInstance_SetDynamicSequence_Params params {};
		params.AnimNodeName = AnimNodeName;
		params.StateName = StateName;
		params.SequenceAsset = SequenceAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASAnimInstance.SetDynamicAnimationSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      AnimNodeName                                               (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StateName                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UASAnimationSet*                             AnimationSetAsset                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UASAnimInstance::SetDynamicAnimationSet(const class FString& AnimNodeName, const class FString& StateName, class UASAnimationSet* AnimationSetAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASAnimInstance.SetDynamicAnimationSet");
		
		UASAnimInstance_SetDynamicAnimationSet_Params params {};
		params.AnimNodeName = AnimNodeName;
		params.StateName = StateName;
		params.AnimationSetAsset = AnimationSetAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASAnimInstance.SendCommand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Command                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForce                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UASAnimInstance::SendCommand(const class FName& Command, bool bForce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASAnimInstance.SendCommand");
		
		UASAnimInstance_SendCommand_Params params {};
		params.Command = Command;
		params.bForce = bForce;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASAnimInstance.ReceiveStateChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PreviousStateName                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      NextStateName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UASAnimInstance::ReceiveStateChange(const class FString& PreviousStateName, const class FString& NextStateName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASAnimInstance.ReceiveStateChange");
		
		UASAnimInstance_ReceiveStateChange_Params params {};
		params.PreviousStateName = PreviousStateName;
		params.NextStateName = NextStateName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASAnimInstance.JumpMachineState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MachinName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StateName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UASAnimInstance::JumpMachineState(const class FString& MachinName, const class FString& StateName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASAnimInstance.JumpMachineState");
		
		UASAnimInstance_JumpMachineState_Params params {};
		params.MachinName = MachinName;
		params.StateName = StateName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASAnimInstance.IsHitShift
	 * 		Flags  -> ()
	 */
	bool UASAnimInstance::IsHitShift()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASAnimInstance.IsHitShift");
		
		UASAnimInstance_IsHitShift_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASAnimInstance.HasTagAny
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                Tags                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UASAnimInstance::HasTagAny(TArray<class FName> Tags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASAnimInstance.HasTagAny");
		
		UASAnimInstance_HasTagAny_Params params {};
		params.Tags = Tags;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASAnimInstance.HasTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Tag                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UASAnimInstance::HasTag(const class FName& Tag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASAnimInstance.HasTag");
		
		UASAnimInstance_HasTag_Params params {};
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASAnimInstance.AnimNotify_StateChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UASAnimNotify_StateChange*                   Notify                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UASAnimInstance::AnimNotify_StateChange(class UASAnimNotify_StateChange* Notify)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASAnimInstance.AnimNotify_StateChange");
		
		UASAnimInstance_AnimNotify_StateChange_Params params {};
		params.Notify = Notify;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UASAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UASAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionSystem.ASAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UASAnimNotify_EndCancel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UASAnimNotify_EndCancel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionSystem.ASAnimNotify_EndCancel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UASAnimNotify_HitShift.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UASAnimNotify_HitShift::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionSystem.ASAnimNotify_HitShift");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UASAnimNotify_StateChange.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UASAnimNotify_StateChange::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionSystem.ASAnimNotify_StateChange");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UASAnimNotifyState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UASAnimNotifyState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionSystem.ASAnimNotifyState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UASAnimNotifyState_Attack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UASAnimNotifyState_Attack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionSystem.ASAnimNotifyState_Attack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UASAnimNotifyState_EndCancel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UASAnimNotifyState_EndCancel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionSystem.ASAnimNotifyState_EndCancel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UASAnimNotifyState_Float.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UASAnimNotifyState_Float::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionSystem.ASAnimNotifyState_Float");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UASAnimNotifyState_Input.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UASAnimNotifyState_Input::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionSystem.ASAnimNotifyState_Input");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UASAnimNotifyState_Invincible.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UASAnimNotifyState_Invincible::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionSystem.ASAnimNotifyState_Invincible");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UASAnimNotifyState_SuperArmor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UASAnimNotifyState_SuperArmor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionSystem.ASAnimNotifyState_SuperArmor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASCharacterBase.SendCommand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Command                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Force                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNoEndCancel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AASCharacterBase::SendCommand(const class FName& Command, bool Force, bool bNoEndCancel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASCharacterBase.SendCommand");
		
		AASCharacterBase_SendCommand_Params params {};
		params.Command = Command;
		params.Force = Force;
		params.bNoEndCancel = bNoEndCancel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASCharacterBase.SendAnimCommand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Command                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Force                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AASCharacterBase::SendAnimCommand(const class FString& Command, bool Force)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASCharacterBase.SendAnimCommand");
		
		AASCharacterBase_SendAnimCommand_Params params {};
		params.Command = Command;
		params.Force = Force;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASCharacterBase.ReceiveStateChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PreviousStateName                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      NextStateName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AASCharacterBase::ReceiveStateChange(const class FString& PreviousStateName, const class FString& NextStateName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASCharacterBase.ReceiveStateChange");
		
		AASCharacterBase_ReceiveStateChange_Params params {};
		params.PreviousStateName = PreviousStateName;
		params.NextStateName = NextStateName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASCharacterBase.OnRep_ReplicateStateInfo
	 * 		Flags  -> ()
	 */
	void AASCharacterBase::OnRep_ReplicateStateInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASCharacterBase.OnRep_ReplicateStateInfo");
		
		AASCharacterBase_OnRep_ReplicateStateInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASCharacterBase.JumpMachineState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MachinName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StateName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AASCharacterBase::JumpMachineState(const class FString& MachinName, const class FString& StateName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASCharacterBase.JumpMachineState");
		
		AASCharacterBase_JumpMachineState_Params params {};
		params.MachinName = MachinName;
		params.StateName = StateName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASCharacterBase.HasAnimTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Tag                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AASCharacterBase::HasAnimTag(const class FName& Tag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASCharacterBase.HasAnimTag");
		
		AASCharacterBase_HasAnimTag_Params params {};
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASCharacterBase.GetAnimTags
	 * 		Flags  -> ()
	 */
	TArray<class FName> AASCharacterBase::GetAnimTags()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASCharacterBase.GetAnimTags");
		
		AASCharacterBase_GetAnimTags_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AASCharacterBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AASCharacterBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionSystem.ASCharacterBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASCharacter.IsSuperArmor
	 * 		Flags  -> ()
	 */
	bool AASCharacter::IsSuperArmor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASCharacter.IsSuperArmor");
		
		AASCharacter_IsSuperArmor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASCharacter.IsHitAttack
	 * 		Flags  -> ()
	 */
	bool AASCharacter::IsHitAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASCharacter.IsHitAttack");
		
		AASCharacter_IsHitAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AASCharacter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AASCharacter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionSystem.ASCharacter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASCharacterMovementComponent.SetImpulse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Impulse                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bVelocityChange                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UASCharacterMovementComponent::SetImpulse(const struct FVector& Impulse, bool bVelocityChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASCharacterMovementComponent.SetImpulse");
		
		UASCharacterMovementComponent_SetImpulse_Params params {};
		params.Impulse = Impulse;
		params.bVelocityChange = bVelocityChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASCharacterMovementComponent.SendCommand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Command                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Force                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UASCharacterMovementComponent::SendCommand(const class FName& Command, bool Force)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASCharacterMovementComponent.SendCommand");
		
		UASCharacterMovementComponent_SendCommand_Params params {};
		params.Command = Command;
		params.Force = Force;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASCharacterMovementComponent.SendAnimCommand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Command                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Force                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UASCharacterMovementComponent::SendAnimCommand(const class FString& Command, bool Force)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASCharacterMovementComponent.SendAnimCommand");
		
		UASCharacterMovementComponent_SendAnimCommand_Params params {};
		params.Command = Command;
		params.Force = Force;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASCharacterMovementComponent.HasAnimTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Tag                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UASCharacterMovementComponent::HasAnimTag(const class FName& Tag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASCharacterMovementComponent.HasAnimTag");
		
		UASCharacterMovementComponent_HasAnimTag_Params params {};
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UASCharacterMovementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UASCharacterMovementComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionSystem.ASCharacterMovementComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASCollisionBoxComponent.OnAttackEndOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UASCollisionBoxComponent::OnAttackEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASCollisionBoxComponent.OnAttackEndOverlap");
		
		UASCollisionBoxComponent_OnAttackEndOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASCollisionBoxComponent.OnAttackBeginOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UASCollisionBoxComponent::OnAttackBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASCollisionBoxComponent.OnAttackBeginOverlap");
		
		UASCollisionBoxComponent_OnAttackBeginOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UASCollisionBoxComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UASCollisionBoxComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionSystem.ASCollisionBoxComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASCollisionCapsuleComponent.OnAttackEndOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UASCollisionCapsuleComponent::OnAttackEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASCollisionCapsuleComponent.OnAttackEndOverlap");
		
		UASCollisionCapsuleComponent_OnAttackEndOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASCollisionCapsuleComponent.OnAttackBeginOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UASCollisionCapsuleComponent::OnAttackBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASCollisionCapsuleComponent.OnAttackBeginOverlap");
		
		UASCollisionCapsuleComponent_OnAttackBeginOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UASCollisionCapsuleComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UASCollisionCapsuleComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionSystem.ASCollisionCapsuleComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASCollisionGroupComponent.StopAttack
	 * 		Flags  -> ()
	 */
	void UASCollisionGroupComponent::StopAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASCollisionGroupComponent.StopAttack");
		
		UASCollisionGroupComponent_StopAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASCollisionGroupComponent.StartAttack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            HitCount                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              HitInterval                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UASCollisionGroupComponent::StartAttack(int32_t HitCount, float HitInterval)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASCollisionGroupComponent.StartAttack");
		
		UASCollisionGroupComponent_StartAttack_Params params {};
		params.HitCount = HitCount;
		params.HitInterval = HitInterval;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASCollisionGroupComponent.SetActiveCollision
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Active                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UASCollisionGroupComponent::SetActiveCollision(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASCollisionGroupComponent.SetActiveCollision");
		
		UASCollisionGroupComponent_SetActiveCollision_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASCollisionGroupComponent.OnAttackEndOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         MyComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UASCollisionGroupComponent::OnAttackEndOverlap(class UPrimitiveComponent* MyComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASCollisionGroupComponent.OnAttackEndOverlap");
		
		UASCollisionGroupComponent_OnAttackEndOverlap_Params params {};
		params.MyComp = MyComp;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASCollisionGroupComponent.OnAttackBeginOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         MyComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UASCollisionGroupComponent::OnAttackBeginOverlap(class UPrimitiveComponent* MyComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASCollisionGroupComponent.OnAttackBeginOverlap");
		
		UASCollisionGroupComponent_OnAttackBeginOverlap_Params params {};
		params.MyComp = MyComp;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UASCollisionGroupComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UASCollisionGroupComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionSystem.ASCollisionGroupComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UASCollisionInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UASCollisionInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionSystem.ASCollisionInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASCollisionListener.OnAttackOverlapCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         MyComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UASCollisionListener::OnAttackOverlapCallback(class UPrimitiveComponent* MyComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASCollisionListener.OnAttackOverlapCallback");
		
		UASCollisionListener_OnAttackOverlapCallback_Params params {};
		params.MyComp = MyComp;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UASCollisionListener.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UASCollisionListener::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionSystem.ASCollisionListener");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASCollisionSphereComponent.OnAttackEndOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UASCollisionSphereComponent::OnAttackEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASCollisionSphereComponent.OnAttackEndOverlap");
		
		UASCollisionSphereComponent_OnAttackEndOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASCollisionSphereComponent.OnAttackBeginOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UASCollisionSphereComponent::OnAttackBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASCollisionSphereComponent.OnAttackBeginOverlap");
		
		UASCollisionSphereComponent_OnAttackBeginOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UASCollisionSphereComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UASCollisionSphereComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionSystem.ASCollisionSphereComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UASDamageType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UASDamageType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionSystem.ASDamageType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UASSMNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UASSMNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionSystem.ASSMNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UASSMStateNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UASSMStateNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionSystem.ASSMStateNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UASSMState_BlendSpace.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UASSMState_BlendSpace::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionSystem.ASSMState_BlendSpace");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UASSMState_AimOffset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UASSMState_AimOffset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionSystem.ASSMState_AimOffset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UASSMState_Conduit.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UASSMState_Conduit::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionSystem.ASSMState_Conduit");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UASSMState_Sequence.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UASSMState_Sequence::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionSystem.ASSMState_Sequence");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UASSMState_Slot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UASSMState_Slot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionSystem.ASSMState_Slot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UASSMState_StateMachine.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UASSMState_StateMachine::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionSystem.ASSMState_StateMachine");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UASSMState_Terminate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UASSMState_Terminate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionSystem.ASSMState_Terminate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UASSMState_Through.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UASSMState_Through::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionSystem.ASSMState_Through");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UASSMTransitionNode_Base.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UASSMTransitionNode_Base::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionSystem.ASSMTransitionNode_Base");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UASSMTransitionNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UASSMTransitionNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionSystem.ASSMTransitionNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UASCustomStartSate_Base.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UASCustomStartSate_Base::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionSystem.ASCustomStartSate_Base");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UASSMTransitionNodeEventDriven.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UASSMTransitionNodeEventDriven::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionSystem.ASSMTransitionNodeEventDriven");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UASState_Base.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UASState_Base::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionSystem.ASState_Base");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASState_BlueprintBase.StopSlotAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              BlendTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UASState_BlueprintBase::StopSlotAnimation(float BlendTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASState_BlueprintBase.StopSlotAnimation");
		
		UASState_BlueprintBase_StopSlotAnimation_Params params {};
		params.BlendTime = BlendTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASState_BlueprintBase.SetRootMotionScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewScale                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        RootMotionScaleName                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UASState_BlueprintBase::SetRootMotionScale(float NewScale, const class FName& RootMotionScaleName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASState_BlueprintBase.SetRootMotionScale");
		
		UASState_BlueprintBase_SetRootMotionScale_Params params {};
		params.NewScale = NewScale;
		params.RootMotionScaleName = RootMotionScaleName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASState_BlueprintBase.SetPlayRateScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              RateScale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UASState_BlueprintBase::SetPlayRateScale(float RateScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASState_BlueprintBase.SetPlayRateScale");
		
		UASState_BlueprintBase_SetPlayRateScale_Params params {};
		params.RateScale = RateScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASState_BlueprintBase.SetPlayRate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewRate                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UASState_BlueprintBase::SetPlayRate(float NewRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASState_BlueprintBase.SetPlayRate");
		
		UASState_BlueprintBase_SetPlayRate_Params params {};
		params.NewRate = NewRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASState_BlueprintBase.SetBlendSpaceInputY
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewBlendInputY                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UASState_BlueprintBase::SetBlendSpaceInputY(float NewBlendInputY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASState_BlueprintBase.SetBlendSpaceInputY");
		
		UASState_BlueprintBase_SetBlendSpaceInputY_Params params {};
		params.NewBlendInputY = NewBlendInputY;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASState_BlueprintBase.SetBlendSpaceInputX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewBlendInputX                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UASState_BlueprintBase::SetBlendSpaceInputX(float NewBlendInputX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASState_BlueprintBase.SetBlendSpaceInputX");
		
		UASState_BlueprintBase_SetBlendSpaceInputX_Params params {};
		params.NewBlendInputX = NewBlendInputX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASState_BlueprintBase.SetBlendSpaceInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     NewBlendInput                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UASState_BlueprintBase::SetBlendSpaceInput(const struct FVector& NewBlendInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASState_BlueprintBase.SetBlendSpaceInput");
		
		UASState_BlueprintBase_SetBlendSpaceInput_Params params {};
		params.NewBlendInput = NewBlendInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASState_BlueprintBase.SetAnimTimeRatio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeRatio                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UASState_BlueprintBase::SetAnimTimeRatio(float TimeRatio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASState_BlueprintBase.SetAnimTimeRatio");
		
		UASState_BlueprintBase_SetAnimTimeRatio_Params params {};
		params.TimeRatio = TimeRatio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASState_BlueprintBase.SetAnimTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UASState_BlueprintBase::SetAnimTime(float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASState_BlueprintBase.SetAnimTime");
		
		UASState_BlueprintBase_SetAnimTime_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASState_BlueprintBase.ResetRootMotionScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        RootMotionScaleName                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UASState_BlueprintBase::ResetRootMotionScale(const class FName& RootMotionScaleName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASState_BlueprintBase.ResetRootMotionScale");
		
		UASState_BlueprintBase_ResetRootMotionScale_Params params {};
		params.RootMotionScaleName = RootMotionScaleName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASState_BlueprintBase.ResetPlayRate
	 * 		Flags  -> ()
	 */
	void UASState_BlueprintBase::ResetPlayRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASState_BlueprintBase.ResetPlayRate");
		
		UASState_BlueprintBase_ResetPlayRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASState_BlueprintBase.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAnimInstance*                               AnimInstance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UASAnimationSet*                             AnimationSet                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UASState_BlueprintBase::ReceiveTick(float DeltaTime, class UAnimInstance* AnimInstance, class UASAnimationSet* AnimationSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASState_BlueprintBase.ReceiveTick");
		
		UASState_BlueprintBase_ReceiveTick_Params params {};
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
	 * 		Name   -> Function ActionSystem.ASState_BlueprintBase.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimInstance*                               AnimInstance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UASState_BlueprintBase::ReceiveEndPlay(class UAnimInstance* AnimInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASState_BlueprintBase.ReceiveEndPlay");
		
		UASState_BlueprintBase_ReceiveEndPlay_Params params {};
		params.AnimInstance = AnimInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASState_BlueprintBase.ReceiveBeginPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimInstance*                               AnimInstance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UASAnimationSet*                             AnimationSet                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UASState_BlueprintBase::ReceiveBeginPlay(class UAnimInstance* AnimInstance, class UASAnimationSet* AnimationSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASState_BlueprintBase.ReceiveBeginPlay");
		
		UASState_BlueprintBase_ReceiveBeginPlay_Params params {};
		params.AnimInstance = AnimInstance;
		params.AnimationSet = AnimationSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASState_BlueprintBase.PlaySlotAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimSequenceBase*                           AnimSequence                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              BlendTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bLoop                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UASState_BlueprintBase::PlaySlotAnimation(class UAnimSequenceBase* AnimSequence, float BlendTime, bool bLoop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASState_BlueprintBase.PlaySlotAnimation");
		
		UASState_BlueprintBase_PlaySlotAnimation_Params params {};
		params.AnimSequence = AnimSequence;
		params.BlendTime = BlendTime;
		params.bLoop = bLoop;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASState_BlueprintBase.HasCommand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Command                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAlwaysCanceledCommand                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOnce                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UASState_BlueprintBase::HasCommand(const class FName& Command, bool bAlwaysCanceledCommand, bool bOnce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASState_BlueprintBase.HasCommand");
		
		UASState_BlueprintBase_HasCommand_Params params {};
		params.Command = Command;
		params.bAlwaysCanceledCommand = bAlwaysCanceledCommand;
		params.bOnce = bOnce;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASState_BlueprintBase.GetRootMotionDistanceRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EndTime                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UASState_BlueprintBase::GetRootMotionDistanceRange(float StartTime, float EndTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASState_BlueprintBase.GetRootMotionDistanceRange");
		
		UASState_BlueprintBase_GetRootMotionDistanceRange_Params params {};
		params.StartTime = StartTime;
		params.EndTime = EndTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASState_BlueprintBase.GetRootMotionDistance
	 * 		Flags  -> ()
	 */
	float UASState_BlueprintBase::GetRootMotionDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASState_BlueprintBase.GetRootMotionDistance");
		
		UASState_BlueprintBase_GetRootMotionDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASState_BlueprintBase.GetAnimTimeRatio
	 * 		Flags  -> ()
	 */
	float UASState_BlueprintBase::GetAnimTimeRatio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASState_BlueprintBase.GetAnimTimeRatio");
		
		UASState_BlueprintBase_GetAnimTimeRatio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASState_BlueprintBase.GetAnimTimeLength
	 * 		Flags  -> ()
	 */
	float UASState_BlueprintBase::GetAnimTimeLength()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASState_BlueprintBase.GetAnimTimeLength");
		
		UASState_BlueprintBase_GetAnimTimeLength_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASState_BlueprintBase.GetAnimTime
	 * 		Flags  -> ()
	 */
	float UASState_BlueprintBase::GetAnimTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASState_BlueprintBase.GetAnimTime");
		
		UASState_BlueprintBase_GetAnimTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UASState_BlueprintBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UASState_BlueprintBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionSystem.ASState_BlueprintBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UASStateMachine.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UASStateMachine::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionSystem.ASStateMachine");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UASTransition_CommonBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UASTransition_CommonBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionSystem.ASTransition_CommonBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UASTransition_Base.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UASTransition_Base::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionSystem.ASTransition_Base");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASTransition_BlueprintBase.ReceiveCanEnter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimInstance*                               AnimInstance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UASTransition_BlueprintBase::ReceiveCanEnter(class UAnimInstance* AnimInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASTransition_BlueprintBase.ReceiveCanEnter");
		
		UASTransition_BlueprintBase_ReceiveCanEnter_Params params {};
		params.AnimInstance = AnimInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASTransition_BlueprintBase.OutputLog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UASTransition_BlueprintBase::OutputLog(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASTransition_BlueprintBase.OutputLog");
		
		UASTransition_BlueprintBase_OutputLog_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASTransition_BlueprintBase.IsPlayEnd
	 * 		Flags  -> ()
	 */
	bool UASTransition_BlueprintBase::IsPlayEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASTransition_BlueprintBase.IsPlayEnd");
		
		UASTransition_BlueprintBase_IsPlayEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASTransition_BlueprintBase.HasCommand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Command                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOnce                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UASTransition_BlueprintBase::HasCommand(const class FName& Command, bool bOnce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASTransition_BlueprintBase.HasCommand");
		
		UASTransition_BlueprintBase_HasCommand_Params params {};
		params.Command = Command;
		params.bOnce = bOnce;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASTransition_BlueprintBase.GetElapsedTime
	 * 		Flags  -> ()
	 */
	float UASTransition_BlueprintBase::GetElapsedTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASTransition_BlueprintBase.GetElapsedTime");
		
		UASTransition_BlueprintBase_GetElapsedTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASTransition_BlueprintBase.GetAnimTimeLength
	 * 		Flags  -> ()
	 */
	float UASTransition_BlueprintBase::GetAnimTimeLength()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASTransition_BlueprintBase.GetAnimTimeLength");
		
		UASTransition_BlueprintBase_GetAnimTimeLength_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASTransition_BlueprintBase.GetAnimTime
	 * 		Flags  -> ()
	 */
	float UASTransition_BlueprintBase::GetAnimTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASTransition_BlueprintBase.GetAnimTime");
		
		UASTransition_BlueprintBase_GetAnimTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASTransition_BlueprintBase.CheckCommandState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Command                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOnce                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EAnimCommandState UASTransition_BlueprintBase::CheckCommandState(const class FName& Command, bool bOnce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASTransition_BlueprintBase.CheckCommandState");
		
		UASTransition_BlueprintBase_CheckCommandState_Params params {};
		params.Command = Command;
		params.bOnce = bOnce;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ActionSystem.ASTransition_BlueprintBase.CheckCommand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Command                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOnce                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UASTransition_BlueprintBase::CheckCommand(const class FString& Command, bool bOnce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionSystem.ASTransition_BlueprintBase.CheckCommand");
		
		UASTransition_BlueprintBase_CheckCommand_Params params {};
		params.Command = Command;
		params.bOnce = bOnce;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UASTransition_BlueprintBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UASTransition_BlueprintBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionSystem.ASTransition_BlueprintBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UASTransition_Command.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UASTransition_Command::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionSystem.ASTransition_Command");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UASTransition_MovementMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UASTransition_MovementMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionSystem.ASTransition_MovementMode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UASTransition_PlayEnd.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UASTransition_PlayEnd::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionSystem.ASTransition_PlayEnd");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UASTransitionEventDriven_Base.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UASTransitionEventDriven_Base::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionSystem.ASTransitionEventDriven_Base");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UASTransitionEventDriven_Command.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UASTransitionEventDriven_Command::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ActionSystem.ASTransitionEventDriven_Command");
		return ptr;
	}

}


