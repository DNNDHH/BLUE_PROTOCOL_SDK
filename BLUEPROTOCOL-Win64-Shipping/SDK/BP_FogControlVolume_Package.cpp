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
	 * 		Name   -> Function BP_FogControlVolume.BP_FogControlVolume_C.SetDefaultFogParam
	 * 		Flags  -> ()
	 */
	void ABP_FogControlVolume_C::SetDefaultFogParam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FogControlVolume.BP_FogControlVolume_C.SetDefaultFogParam");
		
		ABP_FogControlVolume_C_SetDefaultFogParam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FogControlVolume.BP_FogControlVolume_C.UpdateEditorPreviewFlag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NowStatus                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               StatusChange                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_FogControlVolume_C::UpdateEditorPreviewFlag(bool* NowStatus, bool* StatusChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FogControlVolume.BP_FogControlVolume_C.UpdateEditorPreviewFlag");
		
		ABP_FogControlVolume_C_UpdateEditorPreviewFlag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NowStatus != nullptr)
			*NowStatus = params.NowStatus;
		if (StatusChange != nullptr)
			*StatusChange = params.StatusChange;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FogControlVolume.BP_FogControlVolume_C.SetAllPrimCollisions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        CollisionProfileName                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FogControlVolume_C::SetAllPrimCollisions(const class FName& CollisionProfileName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FogControlVolume.BP_FogControlVolume_C.SetAllPrimCollisions");
		
		ABP_FogControlVolume_C_SetAllPrimCollisions_Params params {};
		params.CollisionProfileName = CollisionProfileName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FogControlVolume.BP_FogControlVolume_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_FogControlVolume_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FogControlVolume.BP_FogControlVolume_C.UserConstructionScript");
		
		ABP_FogControlVolume_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FogControlVolume.BP_FogControlVolume_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_FogControlVolume_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FogControlVolume.BP_FogControlVolume_C.ReceiveBeginPlay");
		
		ABP_FogControlVolume_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FogControlVolume.BP_FogControlVolume_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FogControlVolume_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FogControlVolume.BP_FogControlVolume_C.ReceiveTick");
		
		ABP_FogControlVolume_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FogControlVolume.BP_FogControlVolume_C.ReceiveActorBeginOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FogControlVolume_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FogControlVolume.BP_FogControlVolume_C.ReceiveActorBeginOverlap");
		
		ABP_FogControlVolume_C_ReceiveActorBeginOverlap_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FogControlVolume.BP_FogControlVolume_C.ReceiveActorEndOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FogControlVolume_C::ReceiveActorEndOverlap(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FogControlVolume.BP_FogControlVolume_C.ReceiveActorEndOverlap");
		
		ABP_FogControlVolume_C_ReceiveActorEndOverlap_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FogControlVolume.BP_FogControlVolume_C.Fog Update In Editor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_FogControlVolume_C*                      ControlActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FogControlVolume_C::FogUpdateInEditor(class ABP_FogControlVolume_C* ControlActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FogControlVolume.BP_FogControlVolume_C.Fog Update In Editor");
		
		ABP_FogControlVolume_C_FogUpdateInEditor_Params params {};
		params.ControlActor = ControlActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FogControlVolume.BP_FogControlVolume_C.SetFog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_FogControlVolume_C*                      FogControlVolume                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FogControlVolume_C::SetFog(class ABP_FogControlVolume_C* FogControlVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FogControlVolume.BP_FogControlVolume_C.SetFog");
		
		ABP_FogControlVolume_C_SetFog_Params params {};
		params.FogControlVolume = FogControlVolume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FogControlVolume.BP_FogControlVolume_C.SetFogToDefault
	 * 		Flags  -> ()
	 */
	void ABP_FogControlVolume_C::SetFogToDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FogControlVolume.BP_FogControlVolume_C.SetFogToDefault");
		
		ABP_FogControlVolume_C_SetFogToDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FogControlVolume.BP_FogControlVolume_C.ExecuteUbergraph_BP_FogControlVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FogControlVolume_C::ExecuteUbergraph_BP_FogControlVolume(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FogControlVolume.BP_FogControlVolume_C.ExecuteUbergraph_BP_FogControlVolume");
		
		ABP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_FogControlVolume_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_FogControlVolume_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_FogControlVolume.BP_FogControlVolume_C");
		return ptr;
	}

}


