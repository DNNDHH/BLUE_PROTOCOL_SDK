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
	 * 		Name   -> Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.UpdateEditorPreview
	 * 		Flags  -> ()
	 */
	void ABP_DirectionalLightControlVolume_C::UpdateEditorPreview()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.UpdateEditorPreview");
		
		ABP_DirectionalLightControlVolume_C_UpdateEditorPreview_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.UpdateBlendValue
	 * 		Flags  -> ()
	 */
	void ABP_DirectionalLightControlVolume_C::UpdateBlendValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.UpdateBlendValue");
		
		ABP_DirectionalLightControlVolume_C_UpdateBlendValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.CreateOutArea
	 * 		Flags  -> ()
	 */
	void ABP_DirectionalLightControlVolume_C::CreateOutArea()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.CreateOutArea");
		
		ABP_DirectionalLightControlVolume_C_CreateOutArea_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.GetNowTimeParam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeRate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NowLightIntensity                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NowToonIntensityScale                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                NowLightColor                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DirectionalLightControlVolume_C::GetNowTimeParam(float TimeRate, float* NowLightIntensity, float* NowToonIntensityScale, struct FLinearColor* NowLightColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.GetNowTimeParam");
		
		ABP_DirectionalLightControlVolume_C_GetNowTimeParam_Params params {};
		params.TimeRate = TimeRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NowLightIntensity != nullptr)
			*NowLightIntensity = params.NowLightIntensity;
		if (NowToonIntensityScale != nullptr)
			*NowToonIntensityScale = params.NowToonIntensityScale;
		if (NowLightColor != nullptr)
			*NowLightColor = params.NowLightColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_DirectionalLightControlVolume_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.UserConstructionScript");
		
		ABP_DirectionalLightControlVolume_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_DirectionalLightControlVolume_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.ReceiveBeginPlay");
		
		ABP_DirectionalLightControlVolume_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.ReceiveActorBeginOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DirectionalLightControlVolume_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.ReceiveActorBeginOverlap");
		
		ABP_DirectionalLightControlVolume_C_ReceiveActorBeginOverlap_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DirectionalLightControlVolume_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.ReceiveTick");
		
		ABP_DirectionalLightControlVolume_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.ReceiveActorEndOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DirectionalLightControlVolume_C::ReceiveActorEndOverlap(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.ReceiveActorEndOverlap");
		
		ABP_DirectionalLightControlVolume_C_ReceiveActorEndOverlap_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.UpdateLightParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Blend                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DirectionalLightControlVolume_C::UpdateLightParams(float Blend, float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.UpdateLightParams");
		
		ABP_DirectionalLightControlVolume_C_UpdateLightParams_Params params {};
		params.Blend = Blend;
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.VolumeDebugDraw
	 * 		Flags  -> ()
	 */
	void ABP_DirectionalLightControlVolume_C::VolumeDebugDraw()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.VolumeDebugDraw");
		
		ABP_DirectionalLightControlVolume_C_VolumeDebugDraw_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.ExecuteUbergraph_BP_DirectionalLightControlVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DirectionalLightControlVolume_C::ExecuteUbergraph_BP_DirectionalLightControlVolume(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.ExecuteUbergraph_BP_DirectionalLightControlVolume");
		
		ABP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_DirectionalLightControlVolume_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DirectionalLightControlVolume_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C");
		return ptr;
	}

}


