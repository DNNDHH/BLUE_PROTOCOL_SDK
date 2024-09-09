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
	 * 		Name   -> Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAB_PlayerAnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.AnimGraph");
		
		UAB_PlayerAnimBlueprint_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.UpdateMountIKParam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBMount*                                    Mount                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASBPlayerCharacter*                          Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_PlayerAnimBlueprint_C::UpdateMountIKParam(class ASBMount* Mount, class ASBPlayerCharacter* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.UpdateMountIKParam");
		
		UAB_PlayerAnimBlueprint_C_UpdateMountIKParam_Params params {};
		params.Mount = Mount;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.SetupAnimationSet
	 * 		Flags  -> ()
	 */
	void UAB_PlayerAnimBlueprint_C::SetupAnimationSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.SetupAnimationSet");
		
		UAB_PlayerAnimBlueprint_C_SetupAnimationSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.UpdateCharacterVariablesBp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_PlayerAnimBlueprint_C::UpdateCharacterVariablesBp(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.UpdateCharacterVariablesBp");
		
		UAB_PlayerAnimBlueprint_C_UpdateCharacterVariablesBp_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PlayerAnimBlueprint_SBAnimGraphNode_SimpleIK_63E9F70F45D50A456F67428371215FF7
	 * 		Flags  -> ()
	 */
	void UAB_PlayerAnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PlayerAnimBlueprint_SBAnimGraphNode_SimpleIK_63E9F70F45D50A456F67428371215FF7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PlayerAnimBlueprint_SBAnimGraphNode_SimpleIK_63E9F70F45D50A456F67428371215FF7");
		
		UAB_PlayerAnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_PlayerAnimBlueprint_SBAnimGraphNode_SimpleIK_63E9F70F45D50A456F67428371215FF7_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_PlayerAnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.BlueprintUpdateAnimation");
		
		UAB_PlayerAnimBlueprint_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.BlueprintInitializeAnimation
	 * 		Flags  -> ()
	 */
	void UAB_PlayerAnimBlueprint_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.BlueprintInitializeAnimation");
		
		UAB_PlayerAnimBlueprint_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.ReceiveStateChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PreviousStateName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      NextStateName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UAB_PlayerAnimBlueprint_C::ReceiveStateChange(const class FString& PreviousStateName, const class FString& NextStateName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.ReceiveStateChange");
		
		UAB_PlayerAnimBlueprint_C_ReceiveStateChange_Params params {};
		params.PreviousStateName = PreviousStateName;
		params.NextStateName = NextStateName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.Set_Temp_Rot
	 * 		Flags  -> ()
	 */
	void UAB_PlayerAnimBlueprint_C::Set_Temp_Rot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.Set_Temp_Rot");
		
		UAB_PlayerAnimBlueprint_C_Set_Temp_Rot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.Set_MeshYaw
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Yaw                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_PlayerAnimBlueprint_C::Set_MeshYaw(float Yaw)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.Set_MeshYaw");
		
		UAB_PlayerAnimBlueprint_C_Set_MeshYaw_Params params {};
		params.Yaw = Yaw;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.ExecuteUbergraph_AB_PlayerAnimBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_PlayerAnimBlueprint_C::ExecuteUbergraph_AB_PlayerAnimBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.ExecuteUbergraph_AB_PlayerAnimBlueprint");
		
		UAB_PlayerAnimBlueprint_C_ExecuteUbergraph_AB_PlayerAnimBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.ChangeState__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Previous                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Now                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_PlayerAnimBlueprint_C::ChangeState__DelegateSignature(const class FName& Previous, const class FName& Now)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C.ChangeState__DelegateSignature");
		
		UAB_PlayerAnimBlueprint_C_ChangeState__DelegateSignature_Params params {};
		params.Previous = Previous;
		params.Now = Now;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAB_PlayerAnimBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAB_PlayerAnimBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_PlayerAnimBlueprint.AB_PlayerAnimBlueprint_C");
		return ptr;
	}

}


