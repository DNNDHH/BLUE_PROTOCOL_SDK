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
	 * 		Name   -> Function AB_EnpcPhysicsDummy.AB_EnpcPhysicsDummy_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   InPose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAB_EnpcPhysicsDummy_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_EnpcPhysicsDummy.AB_EnpcPhysicsDummy_C.AnimGraph");
		
		UAB_EnpcPhysicsDummy_C_AnimGraph_Params params {};
		params.InPose = InPose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_EnpcPhysicsDummy.AB_EnpcPhysicsDummy_C.ExecuteUbergraph_AB_EnpcPhysicsDummy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_EnpcPhysicsDummy_C::ExecuteUbergraph_AB_EnpcPhysicsDummy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_EnpcPhysicsDummy.AB_EnpcPhysicsDummy_C.ExecuteUbergraph_AB_EnpcPhysicsDummy");
		
		UAB_EnpcPhysicsDummy_C_ExecuteUbergraph_AB_EnpcPhysicsDummy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAB_EnpcPhysicsDummy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAB_EnpcPhysicsDummy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_EnpcPhysicsDummy.AB_EnpcPhysicsDummy_C");
		return ptr;
	}

}


