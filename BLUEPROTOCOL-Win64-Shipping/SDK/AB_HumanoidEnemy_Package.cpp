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
	 * 		Name   -> Function AB_HumanoidEnemy.AB_HumanoidEnemy_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAB_HumanoidEnemy_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_HumanoidEnemy.AB_HumanoidEnemy_C.AnimGraph");
		
		UAB_HumanoidEnemy_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_HumanoidEnemy.AB_HumanoidEnemy_C.BlueprintInitializeAnimation
	 * 		Flags  -> ()
	 */
	void UAB_HumanoidEnemy_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_HumanoidEnemy.AB_HumanoidEnemy_C.BlueprintInitializeAnimation");
		
		UAB_HumanoidEnemy_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_HumanoidEnemy.AB_HumanoidEnemy_C.ExecuteUbergraph_AB_HumanoidEnemy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_HumanoidEnemy_C::ExecuteUbergraph_AB_HumanoidEnemy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_HumanoidEnemy.AB_HumanoidEnemy_C.ExecuteUbergraph_AB_HumanoidEnemy");
		
		UAB_HumanoidEnemy_C_ExecuteUbergraph_AB_HumanoidEnemy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAB_HumanoidEnemy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAB_HumanoidEnemy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_HumanoidEnemy.AB_HumanoidEnemy_C");
		return ptr;
	}

}


