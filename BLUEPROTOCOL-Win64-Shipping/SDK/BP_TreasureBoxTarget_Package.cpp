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
	 * 		Name   -> Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.GetDisappearSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkAudioEvent*                               AkAudioEvent                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TreasureBoxTarget_C::GetDisappearSound(class UAkAudioEvent** AkAudioEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.GetDisappearSound");
		
		ABP_TreasureBoxTarget_C_GetDisappearSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AkAudioEvent != nullptr)
			*AkAudioEvent = params.AkAudioEvent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.GetDisappearParticle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticleSystem*                             Particle                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TreasureBoxTarget_C::GetDisappearParticle(class UParticleSystem** Particle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.GetDisappearParticle");
		
		ABP_TreasureBoxTarget_C_GetDisappearParticle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Particle != nullptr)
			*Particle = params.Particle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.GetOpenSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkAudioEvent*                               AkAudioEvent                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TreasureBoxTarget_C::GetOpenSound(class UAkAudioEvent** AkAudioEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.GetOpenSound");
		
		ABP_TreasureBoxTarget_C_GetOpenSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AkAudioEvent != nullptr)
			*AkAudioEvent = params.AkAudioEvent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.GetOpenParticle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticleSystem*                             Particle                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TreasureBoxTarget_C::GetOpenParticle(class UParticleSystem** Particle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.GetOpenParticle");
		
		ABP_TreasureBoxTarget_C_GetOpenParticle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Particle != nullptr)
			*Particle = params.Particle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.GetSpawnLidParticle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticleSystem*                             Particle                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TreasureBoxTarget_C::GetSpawnLidParticle(class UParticleSystem** Particle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.GetSpawnLidParticle");
		
		ABP_TreasureBoxTarget_C_GetSpawnLidParticle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Particle != nullptr)
			*Particle = params.Particle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.GetSpawnParticle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAkAudioEvent*                               DropSE1                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UParticleSystem*                             Particle                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAkAudioEvent*                               DropSE                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TreasureBoxTarget_C::GetSpawnParticle(class UAkAudioEvent* DropSE1, class UParticleSystem** Particle, class UAkAudioEvent** DropSE)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.GetSpawnParticle");
		
		ABP_TreasureBoxTarget_C_GetSpawnParticle_Params params {};
		params.DropSE1 = DropSE1;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Particle != nullptr)
			*Particle = params.Particle;
		if (DropSE != nullptr)
			*DropSE = params.DropSE;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.GetStaticMeshUpper
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStaticMesh*                                 StaticMesh                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TreasureBoxTarget_C::GetStaticMeshUpper(class UStaticMesh** StaticMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.GetStaticMeshUpper");
		
		ABP_TreasureBoxTarget_C_GetStaticMeshUpper_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StaticMesh != nullptr)
			*StaticMesh = params.StaticMesh;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.GetStaticMeshLower
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStaticMesh*                                 StaticMesh                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TreasureBoxTarget_C::GetStaticMeshLower(class UStaticMesh** StaticMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.GetStaticMeshLower");
		
		ABP_TreasureBoxTarget_C_GetStaticMeshLower_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StaticMesh != nullptr)
			*StaticMesh = params.StaticMesh;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.BoxOpenEffectFunc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsAutoAllOpenTreasureBox                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TreasureBoxTarget_C::BoxOpenEffectFunc(bool IsAutoAllOpenTreasureBox)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.BoxOpenEffectFunc");
		
		ABP_TreasureBoxTarget_C_BoxOpenEffectFunc_Params params {};
		params.IsAutoAllOpenTreasureBox = IsAutoAllOpenTreasureBox;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.OpenBoxTimeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_TreasureBoxTarget_C::OpenBoxTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.OpenBoxTimeline__FinishedFunc");
		
		ABP_TreasureBoxTarget_C_OpenBoxTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.OpenBoxTimeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_TreasureBoxTarget_C::OpenBoxTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.OpenBoxTimeline__UpdateFunc");
		
		ABP_TreasureBoxTarget_C_OpenBoxTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.ResetFuta
	 * 		Flags  -> ()
	 */
	void ABP_TreasureBoxTarget_C::ResetFuta()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.ResetFuta");
		
		ABP_TreasureBoxTarget_C_ResetFuta_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.PreOpenBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InOtherActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    ViewRotation                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void ABP_TreasureBoxTarget_C::PreOpenBox(class AActor* InOtherActor, const struct FRotator& ViewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.PreOpenBox");
		
		ABP_TreasureBoxTarget_C_PreOpenBox_Params params {};
		params.InOtherActor = InOtherActor;
		params.ViewRotation = ViewRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.PostOpenBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBTreasureBoxLotResult                            Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FSBTreasureBoxLotResult>             LotResults                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FName                                        TextId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TreasureBoxTarget_C::PostOpenBox(ESBTreasureBoxLotResult Result, TArray<struct FSBTreasureBoxLotResult> LotResults, const class FName& TextId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.PostOpenBox");
		
		ABP_TreasureBoxTarget_C_PostOpenBox_Params params {};
		params.Result = Result;
		params.LotResults = LotResults;
		params.TextId = TextId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.Appear
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDropPlaySE                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TreasureBoxTarget_C::Appear(bool IsDropPlaySE)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.Appear");
		
		ABP_TreasureBoxTarget_C_Appear_Params params {};
		params.IsDropPlaySE = IsDropPlaySE;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.Disappear
	 * 		Flags  -> ()
	 */
	void ABP_TreasureBoxTarget_C::Disappear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.Disappear");
		
		ABP_TreasureBoxTarget_C_Disappear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.DestructAfterSetLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBDestructible*                             Myself                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TreasureBoxTarget_C::DestructAfterSetLocation(class ASBDestructible* Myself)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.DestructAfterSetLocation");
		
		ABP_TreasureBoxTarget_C_DestructAfterSetLocation_Params params {};
		params.Myself = Myself;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_TreasureBoxTarget_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.ReceiveBeginPlay");
		
		ABP_TreasureBoxTarget_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.ExecuteUbergraph_BP_TreasureBoxTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TreasureBoxTarget_C::ExecuteUbergraph_BP_TreasureBoxTarget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.ExecuteUbergraph_BP_TreasureBoxTarget");
		
		ABP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_TreasureBoxTarget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_TreasureBoxTarget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TreasureBoxTarget.BP_TreasureBoxTarget_C");
		return ptr;
	}

}


