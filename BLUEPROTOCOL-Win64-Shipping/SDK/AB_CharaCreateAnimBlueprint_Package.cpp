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
	 * 		Name   -> Function AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAB_CharaCreateAnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C.AnimGraph");
		
		UAB_CharaCreateAnimBlueprint_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C.UnuseCopyPose
	 * 		Flags  -> ()
	 */
	void UAB_CharaCreateAnimBlueprint_C::UnuseCopyPose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C.UnuseCopyPose");
		
		UAB_CharaCreateAnimBlueprint_C_UnuseCopyPose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C.InitCopyPose
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      SourceCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UAB_CharaCreateAnimBlueprint_C::InitCopyPose(class USkeletalMeshComponent* SourceCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C.InitCopyPose");
		
		UAB_CharaCreateAnimBlueprint_C_InitCopyPose_Params params {};
		params.SourceCharacter = SourceCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C.SetupAnimationSet
	 * 		Flags  -> ()
	 */
	void UAB_CharaCreateAnimBlueprint_C::SetupAnimationSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C.SetupAnimationSet");
		
		UAB_CharaCreateAnimBlueprint_C_SetupAnimationSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C.UpdateCharacterVariablesBp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_CharaCreateAnimBlueprint_C::UpdateCharacterVariablesBp(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C.UpdateCharacterVariablesBp");
		
		UAB_CharaCreateAnimBlueprint_C_UpdateCharacterVariablesBp_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_CharaCreateAnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C.BlueprintUpdateAnimation");
		
		UAB_CharaCreateAnimBlueprint_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C.BlueprintInitializeAnimation
	 * 		Flags  -> ()
	 */
	void UAB_CharaCreateAnimBlueprint_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C.BlueprintInitializeAnimation");
		
		UAB_CharaCreateAnimBlueprint_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C.ReceiveStateChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PreviousStateName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      NextStateName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAB_CharaCreateAnimBlueprint_C::ReceiveStateChange(const class FString& PreviousStateName, const class FString& NextStateName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C.ReceiveStateChange");
		
		UAB_CharaCreateAnimBlueprint_C_ReceiveStateChange_Params params {};
		params.PreviousStateName = PreviousStateName;
		params.NextStateName = NextStateName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C.ExecuteUbergraph_AB_CharaCreateAnimBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_CharaCreateAnimBlueprint_C::ExecuteUbergraph_AB_CharaCreateAnimBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C.ExecuteUbergraph_AB_CharaCreateAnimBlueprint");
		
		UAB_CharaCreateAnimBlueprint_C_ExecuteUbergraph_AB_CharaCreateAnimBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C.ChangeState__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InPrevStateName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      InNextStateName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAB_CharaCreateAnimBlueprint_C::ChangeState__DelegateSignature(const class FString& InPrevStateName, const class FString& InNextStateName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C.ChangeState__DelegateSignature");
		
		UAB_CharaCreateAnimBlueprint_C_ChangeState__DelegateSignature_Params params {};
		params.InPrevStateName = InPrevStateName;
		params.InNextStateName = InNextStateName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAB_CharaCreateAnimBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAB_CharaCreateAnimBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_CharaCreateAnimBlueprint.AB_CharaCreateAnimBlueprint_C");
		return ptr;
	}

}


