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
	 * 		Name   -> Function AB_ExtraNPC_Common_Demo.AB_ExtraNPC_Common_Demo_C.HairLayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   InPose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FVector                                     Acceralation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FPoseLink                                   HairLayer                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAB_ExtraNPC_Common_Demo_C::HairLayer(const struct FPoseLink& InPose, const struct FVector& Acceralation, bool Active, struct FPoseLink* HairLayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_ExtraNPC_Common_Demo.AB_ExtraNPC_Common_Demo_C.HairLayer");
		
		UAB_ExtraNPC_Common_Demo_C_HairLayer_Params params {};
		params.InPose = InPose;
		params.Acceralation = Acceralation;
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HairLayer != nullptr)
			*HairLayer = params.HairLayer;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_ExtraNPC_Common_Demo.AB_ExtraNPC_Common_Demo_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAB_ExtraNPC_Common_Demo_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_ExtraNPC_Common_Demo.AB_ExtraNPC_Common_Demo_C.AnimGraph");
		
		UAB_ExtraNPC_Common_Demo_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_ExtraNPC_Common_Demo.AB_ExtraNPC_Common_Demo_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_ExtraNPC_Common_Demo_AnimGraphNode_LayeredBoneBlend_0F69395E4C7BF0B1A9E39E81E7A73811
	 * 		Flags  -> ()
	 */
	void UAB_ExtraNPC_Common_Demo_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_ExtraNPC_Common_Demo_AnimGraphNode_LayeredBoneBlend_0F69395E4C7BF0B1A9E39E81E7A73811()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_ExtraNPC_Common_Demo.AB_ExtraNPC_Common_Demo_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_ExtraNPC_Common_Demo_AnimGraphNode_LayeredBoneBlend_0F69395E4C7BF0B1A9E39E81E7A73811");
		
		UAB_ExtraNPC_Common_Demo_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_ExtraNPC_Common_Demo_AnimGraphNode_LayeredBoneBlend_0F69395E4C7BF0B1A9E39E81E7A73811_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_ExtraNPC_Common_Demo.AB_ExtraNPC_Common_Demo_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_ExtraNPC_Common_Demo_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_ExtraNPC_Common_Demo.AB_ExtraNPC_Common_Demo_C.BlueprintUpdateAnimation");
		
		UAB_ExtraNPC_Common_Demo_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_ExtraNPC_Common_Demo.AB_ExtraNPC_Common_Demo_C.BlueprintInitializeAnimation
	 * 		Flags  -> ()
	 */
	void UAB_ExtraNPC_Common_Demo_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_ExtraNPC_Common_Demo.AB_ExtraNPC_Common_Demo_C.BlueprintInitializeAnimation");
		
		UAB_ExtraNPC_Common_Demo_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AB_ExtraNPC_Common_Demo.AB_ExtraNPC_Common_Demo_C.ExecuteUbergraph_AB_ExtraNPC_Common_Demo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_ExtraNPC_Common_Demo_C::ExecuteUbergraph_AB_ExtraNPC_Common_Demo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_ExtraNPC_Common_Demo.AB_ExtraNPC_Common_Demo_C.ExecuteUbergraph_AB_ExtraNPC_Common_Demo");
		
		UAB_ExtraNPC_Common_Demo_C_ExecuteUbergraph_AB_ExtraNPC_Common_Demo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAB_ExtraNPC_Common_Demo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAB_ExtraNPC_Common_Demo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_ExtraNPC_Common_Demo.AB_ExtraNPC_Common_Demo_C");
		return ptr;
	}

}


