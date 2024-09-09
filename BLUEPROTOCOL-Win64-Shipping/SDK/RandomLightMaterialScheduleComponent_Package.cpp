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
	 * 		Name   -> Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.FindDecalsMaterial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDecalComponent*                             DecalComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstance*                           TargetMaterial                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Idx                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UMaterialInstanceDynamic* URandomLightMaterialScheduleComponent_C::FindDecalsMaterial(class UDecalComponent* DecalComp, class UMaterialInstance* TargetMaterial, int32_t Idx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.FindDecalsMaterial");
		
		URandomLightMaterialScheduleComponent_C_FindDecalsMaterial_Params params {};
		params.DecalComp = DecalComp;
		params.TargetMaterial = TargetMaterial;
		params.Idx = Idx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.CalcPreviewFade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NowTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FadeStart                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Sw                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Available                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Rate                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URandomLightMaterialScheduleComponent_C::CalcPreviewFade(float NowTime, float FadeStart, float Duration, bool Sw, bool* Available, float* Rate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.CalcPreviewFade");
		
		URandomLightMaterialScheduleComponent_C_CalcPreviewFade_Params params {};
		params.NowTime = NowTime;
		params.FadeStart = FadeStart;
		params.Duration = Duration;
		params.Sw = Sw;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Available != nullptr)
			*Available = params.Available;
		if (Rate != nullptr)
			*Rate = params.Rate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.InitEditorPreview
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Sw                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URandomLightMaterialScheduleComponent_C::InitEditorPreview(bool Sw)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.InitEditorPreview");
		
		URandomLightMaterialScheduleComponent_C_InitEditorPreview_Params params {};
		params.Sw = Sw;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.EditorPreview
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeRate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Preview                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	int32_t URandomLightMaterialScheduleComponent_C::EditorPreview(float TimeRate, bool Preview)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.EditorPreview");
		
		URandomLightMaterialScheduleComponent_C_EditorPreview_Params params {};
		params.TimeRate = TimeRate;
		params.Preview = Preview;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.OnRep_ScheduledMaterialLight
	 * 		Flags  -> ()
	 */
	void URandomLightMaterialScheduleComponent_C::OnRep_ScheduledMaterialLight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.OnRep_ScheduledMaterialLight");
		
		URandomLightMaterialScheduleComponent_C_OnRep_ScheduledMaterialLight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void URandomLightMaterialScheduleComponent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.ReceiveBeginPlay");
		
		URandomLightMaterialScheduleComponent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.SpawnScheduledMaterialActors
	 * 		Flags  -> ()
	 */
	void URandomLightMaterialScheduleComponent_C::SpawnScheduledMaterialActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.SpawnScheduledMaterialActors");
		
		URandomLightMaterialScheduleComponent_C_SpawnScheduledMaterialActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.RewriteMaterials
	 * 		Flags  -> ()
	 */
	void URandomLightMaterialScheduleComponent_C::RewriteMaterials()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.RewriteMaterials");
		
		URandomLightMaterialScheduleComponent_C_RewriteMaterials_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.SetRandomSchedule
	 * 		Flags  -> ()
	 */
	void URandomLightMaterialScheduleComponent_C::SetRandomSchedule()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.SetRandomSchedule");
		
		URandomLightMaterialScheduleComponent_C_SetRandomSchedule_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.RewriteMaterialsCore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStaticMeshComponent*                        MeshComp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstance*                           TargetMaterial                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Idx                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URandomLightMaterialScheduleComponent_C::RewriteMaterialsCore(class UStaticMeshComponent* MeshComp, class UMaterialInstance* TargetMaterial, int32_t Idx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.RewriteMaterialsCore");
		
		URandomLightMaterialScheduleComponent_C_RewriteMaterialsCore_Params params {};
		params.MeshComp = MeshComp;
		params.TargetMaterial = TargetMaterial;
		params.Idx = Idx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.InitializeRandomLightMaterials
	 * 		Flags  -> ()
	 */
	void URandomLightMaterialScheduleComponent_C::InitializeRandomLightMaterials()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.InitializeRandomLightMaterials");
		
		URandomLightMaterialScheduleComponent_C_InitializeRandomLightMaterials_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.ExecuteUbergraph_RandomLightMaterialScheduleComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URandomLightMaterialScheduleComponent_C::ExecuteUbergraph_RandomLightMaterialScheduleComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.ExecuteUbergraph_RandomLightMaterialScheduleComponent");
		
		URandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.Loop Up__DelegateSignature
	 * 		Flags  -> ()
	 */
	void URandomLightMaterialScheduleComponent_C::LoopUp__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.Loop Up__DelegateSignature");
		
		URandomLightMaterialScheduleComponent_C_LoopUp__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URandomLightMaterialScheduleComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URandomLightMaterialScheduleComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C");
		return ptr;
	}

}


