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
	 * 		Name   -> Function BP_GatherPointTarget.BP_GatherPointTarget_C.SetVisualHeight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     ParticleHeight                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     InteractCursorHeight                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GatherPointTarget_C::SetVisualHeight(const struct FVector& ParticleHeight, const struct FVector& InteractCursorHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GatherPointTarget.BP_GatherPointTarget_C.SetVisualHeight");
		
		ABP_GatherPointTarget_C_SetVisualHeight_Params params {};
		params.ParticleHeight = ParticleHeight;
		params.InteractCursorHeight = InteractCursorHeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GatherPointTarget.BP_GatherPointTarget_C.SetParticleSystemVisibleParam
	 * 		Flags  -> ()
	 */
	void ABP_GatherPointTarget_C::SetParticleSystemVisibleParam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GatherPointTarget.BP_GatherPointTarget_C.SetParticleSystemVisibleParam");
		
		ABP_GatherPointTarget_C_SetParticleSystemVisibleParam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GatherPointTarget.BP_GatherPointTarget_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_GatherPointTarget_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GatherPointTarget.BP_GatherPointTarget_C.UserConstructionScript");
		
		ABP_GatherPointTarget_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GatherPointTarget.BP_GatherPointTarget_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_GatherPointTarget_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GatherPointTarget.BP_GatherPointTarget_C.ReceiveBeginPlay");
		
		ABP_GatherPointTarget_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GatherPointTarget.BP_GatherPointTarget_C.Appear
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NotSpawnEffect                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GatherPointTarget_C::Appear(bool NotSpawnEffect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GatherPointTarget.BP_GatherPointTarget_C.Appear");
		
		ABP_GatherPointTarget_C_Appear_Params params {};
		params.NotSpawnEffect = NotSpawnEffect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GatherPointTarget.BP_GatherPointTarget_C.Disappear
	 * 		Flags  -> ()
	 */
	void ABP_GatherPointTarget_C::Disappear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GatherPointTarget.BP_GatherPointTarget_C.Disappear");
		
		ABP_GatherPointTarget_C_Disappear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GatherPointTarget.BP_GatherPointTarget_C.InteractPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InOtherActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    ViewRotation                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void ABP_GatherPointTarget_C::InteractPoint(class AActor* InOtherActor, const struct FRotator& ViewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GatherPointTarget.BP_GatherPointTarget_C.InteractPoint");
		
		ABP_GatherPointTarget_C_InteractPoint_Params params {};
		params.InOtherActor = InOtherActor;
		params.ViewRotation = ViewRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GatherPointTarget.BP_GatherPointTarget_C.PostInteractPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBGatherPointLotResult                            Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FGatherPointLotResult>               LotResults                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_GatherPointTarget_C::PostInteractPoint(ESBGatherPointLotResult Result, TArray<struct FGatherPointLotResult> LotResults)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GatherPointTarget.BP_GatherPointTarget_C.PostInteractPoint");
		
		ABP_GatherPointTarget_C_PostInteractPoint_Params params {};
		params.Result = Result;
		params.LotResults = LotResults;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GatherPointTarget.BP_GatherPointTarget_C.OnGatherPointEnableDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsElable                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GatherPointTarget_C::OnGatherPointEnableDelegate(bool IsElable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GatherPointTarget.BP_GatherPointTarget_C.OnGatherPointEnableDelegate");
		
		ABP_GatherPointTarget_C_OnGatherPointEnableDelegate_Params params {};
		params.IsElable = IsElable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GatherPointTarget.BP_GatherPointTarget_C.MotionEnd
	 * 		Flags  -> ()
	 */
	void ABP_GatherPointTarget_C::MotionEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GatherPointTarget.BP_GatherPointTarget_C.MotionEnd");
		
		ABP_GatherPointTarget_C_MotionEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GatherPointTarget.BP_GatherPointTarget_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GatherPointTarget_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GatherPointTarget.BP_GatherPointTarget_C.ReceiveTick");
		
		ABP_GatherPointTarget_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GatherPointTarget.BP_GatherPointTarget_C.ExecuteUbergraph_BP_GatherPointTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GatherPointTarget_C::ExecuteUbergraph_BP_GatherPointTarget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_GatherPointTarget.BP_GatherPointTarget_C.ExecuteUbergraph_BP_GatherPointTarget");
		
		ABP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_GatherPointTarget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_GatherPointTarget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_GatherPointTarget.BP_GatherPointTarget_C");
		return ptr;
	}

}


