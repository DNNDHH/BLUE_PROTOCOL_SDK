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
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.ClearPartyMigrationState
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::ClearPartyMigrationState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.ClearPartyMigrationState");
		
		ABP_ScriptActor_C_ClearPartyMigrationState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.GetPlayerNeckJOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ZOffset                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::GetPlayerNeckJOffset(float* ZOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.GetPlayerNeckJOffset");
		
		ABP_ScriptActor_C_GetPlayerNeckJOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ZOffset != nullptr)
			*ZOffset = params.ZOffset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.SetTalkModeFixed_Internal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InOtherActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ViewParamId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsNoCheck                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              InCameraZOffset                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::SetTalkModeFixed_Internal(class AActor* InOtherActor, const class FName& ViewParamId, bool bIsNoCheck, float InCameraZOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.SetTalkModeFixed_Internal");
		
		ABP_ScriptActor_C_SetTalkModeFixed_Internal_Params params {};
		params.InOtherActor = InOtherActor;
		params.ViewParamId = ViewParamId;
		params.bIsNoCheck = bIsNoCheck;
		params.InCameraZOffset = InCameraZOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.CalcTalkModeTagetLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      NPC                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Offset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::CalcTalkModeTagetLocation(class AActor* NPC, const struct FVector& Offset, struct FVector* Ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.CalcTalkModeTagetLocation");
		
		ABP_ScriptActor_C_CalcTalkModeTagetLocation_Params params {};
		params.NPC = NPC;
		params.Offset = Offset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ret != nullptr)
			*Ret = params.Ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.CalcTalkModeCameraLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      NPC                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              HeightDiff                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Offset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::CalcTalkModeCameraLocation(class AActor* NPC, float HeightDiff, const struct FVector& Offset, struct FVector* Ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.CalcTalkModeCameraLocation");
		
		ABP_ScriptActor_C_CalcTalkModeCameraLocation_Params params {};
		params.NPC = NPC;
		params.HeightDiff = HeightDiff;
		params.Offset = Offset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ret != nullptr)
			*Ret = params.Ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.CalcTalkModeHeightDiff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      NPC                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::CalcTalkModeHeightDiff(class AActor* NPC, float* Ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.CalcTalkModeHeightDiff");
		
		ABP_ScriptActor_C_CalcTalkModeHeightDiff_Params params {};
		params.NPC = NPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ret != nullptr)
			*Ret = params.Ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.AddStringArrayForDebug
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              SrcTextArray                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FString                                      DstText                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      DstTitle                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::AddStringArrayForDebug(TArray<class FString>* SrcTextArray, const class FString& DstText, const class FString& DstTitle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.AddStringArrayForDebug");
		
		ABP_ScriptActor_C_AddStringArrayForDebug_Params params {};
		params.DstText = DstText;
		params.DstTitle = DstTitle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SrcTextArray != nullptr)
			*SrcTextArray = params.SrcTextArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.Get Actor Yaw Diff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      SourceActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DestinationActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              YawDiff                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::GetActorYawDiff(class AActor** SourceActor, class AActor** DestinationActor, float* YawDiff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.Get Actor Yaw Diff");
		
		ABP_ScriptActor_C_GetActorYawDiff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SourceActor != nullptr)
			*SourceActor = params.SourceActor;
		if (DestinationActor != nullptr)
			*DestinationActor = params.DestinationActor;
		if (YawDiff != nullptr)
			*YawDiff = params.YawDiff;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.LimitAngleDifference
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Start                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OutTarget                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::LimitAngleDifference(float Start, float Target, float* OutTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.LimitAngleDifference");
		
		ABP_ScriptActor_C_LimitAngleDifference_Params params {};
		params.Start = Start;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTarget != nullptr)
			*OutTarget = params.OutTarget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.CreateWalletWidgetIfNeeded
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::CreateWalletWidgetIfNeeded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.CreateWalletWidgetIfNeeded");
		
		ABP_ScriptActor_C_CreateWalletWidgetIfNeeded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.PlayParticleFromActor_Internal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InTargetActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UParticleSystem*                             InParticle                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        InSocketId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     OffsetLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::PlayParticleFromActor_Internal(class AActor* InTargetActor, class UParticleSystem* InParticle, const class FName& InSocketId, const struct FVector& OffsetLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.PlayParticleFromActor_Internal");
		
		ABP_ScriptActor_C_PlayParticleFromActor_Internal_Params params {};
		params.InTargetActor = InTargetActor;
		params.InParticle = InParticle;
		params.InSocketId = InSocketId;
		params.OffsetLocation = OffsetLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.CurViewTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ViewTargetActor                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::CurViewTarget(class AActor** ViewTargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.CurViewTarget");
		
		ABP_ScriptActor_C_CurViewTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ViewTargetActor != nullptr)
			*ViewTargetActor = params.ViewTargetActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.GetFreeViewTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ViewTargetActor                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::GetFreeViewTarget(class AActor** ViewTargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.GetFreeViewTarget");
		
		ABP_ScriptActor_C_GetFreeViewTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ViewTargetActor != nullptr)
			*ViewTargetActor = params.ViewTargetActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.CalcViewTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     InTargetLocation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    InTargetRotation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInRelative                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     OutTargetLocation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    OutTargetRotation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSucs                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ScriptActor_C::CalcViewTarget(const struct FVector& InTargetLocation, const struct FRotator& InTargetRotation, bool bInRelative, struct FVector* OutTargetLocation, struct FRotator* OutTargetRotation, bool* bSucs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.CalcViewTarget");
		
		ABP_ScriptActor_C_CalcViewTarget_Params params {};
		params.InTargetLocation = InTargetLocation;
		params.InTargetRotation = InTargetRotation;
		params.bInRelative = bInRelative;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTargetLocation != nullptr)
			*OutTargetLocation = params.OutTargetLocation;
		if (OutTargetRotation != nullptr)
			*OutTargetRotation = params.OutTargetRotation;
		if (bSucs != nullptr)
			*bSucs = params.bSucs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.SpawnSubActor_Internal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      InActorClass                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     InLocation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USBCharaCreateData*                          InCharaCreateData                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UASAnimationSet*                             InAnimationSet                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class AActor* ABP_ScriptActor_C::SpawnSubActor_Internal(class UClass* InActorClass, const struct FVector& InLocation, class USBCharaCreateData* InCharaCreateData, class UASAnimationSet* InAnimationSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.SpawnSubActor_Internal");
		
		ABP_ScriptActor_C_SpawnSubActor_Internal_Params params {};
		params.InActorClass = InActorClass;
		params.InLocation = InLocation;
		params.InCharaCreateData = InCharaCreateData;
		params.InAnimationSet = InAnimationSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.GetValidSubEvents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                InCheckEvents                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class FName>                                OutValidEvents                                             (Parm, OutParm)
	 */
	void ABP_ScriptActor_C::GetValidSubEvents(TArray<class FName>* InCheckEvents, TArray<class FName>* OutValidEvents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.GetValidSubEvents");
		
		ABP_ScriptActor_C_GetValidSubEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InCheckEvents != nullptr)
			*InCheckEvents = params.InCheckEvents;
		if (OutValidEvents != nullptr)
			*OutValidEvents = params.OutValidEvents;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.IsActivatedDungeon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InDungeonId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bActivated                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ScriptActor_C::IsActivatedDungeon(const class FName& InDungeonId, bool* bActivated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.IsActivatedDungeon");
		
		ABP_ScriptActor_C_IsActivatedDungeon_Params params {};
		params.InDungeonId = InDungeonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bActivated != nullptr)
			*bActivated = params.bActivated;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.SetTalkMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InOtherActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DistancePlayer                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsNoCheckAtTeleport                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CameraZOffset                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::SetTalkMode(class AActor* InOtherActor, float DistancePlayer, bool bIsNoCheckAtTeleport, float CameraZOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.SetTalkMode");
		
		ABP_ScriptActor_C_SetTalkMode_Params params {};
		params.InOtherActor = InOtherActor;
		params.DistancePlayer = DistancePlayer;
		params.bIsNoCheckAtTeleport = bIsNoCheckAtTeleport;
		params.CameraZOffset = CameraZOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.TryGetSocketLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        SocketName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::TryGetSocketLocation(class AActor* Actor, const class FName& SocketName, struct FVector* Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.TryGetSocketLocation");
		
		ABP_ScriptActor_C_TryGetSocketLocation_Params params {};
		params.Actor = Actor;
		params.SocketName = SocketName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.CalcTalkPlayerPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      NewTargetActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::CalcTalkPlayerPosition(class AActor* NewTargetActor, float Distance, struct FVector* Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.CalcTalkPlayerPosition");
		
		ABP_ScriptActor_C_CalcTalkPlayerPosition_Params params {};
		params.NewTargetActor = NewTargetActor;
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.GetViewTargetLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::GetViewTargetLocation(class AActor* Actor, struct FVector* Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.GetViewTargetLocation");
		
		ABP_ScriptActor_C_GetViewTargetLocation_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.CalcViewTargetByActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      NewTargetActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsRelative                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    Rotation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ScriptActor_C::CalcViewTargetByActor(class AActor* NewTargetActor, bool IsRelative, struct FVector* Location, struct FRotator* Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.CalcViewTargetByActor");
		
		ABP_ScriptActor_C_CalcViewTargetByActor_Params params {};
		params.NewTargetActor = NewTargetActor;
		params.IsRelative = IsRelative;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
		if (Rotation != nullptr)
			*Rotation = params.Rotation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.LookAtTimer__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::LookAtTimer__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.LookAtTimer__FinishedFunc");
		
		ABP_ScriptActor_C_LookAtTimer__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.LookAtTimer__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::LookAtTimer__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.LookAtTimer__UpdateFunc");
		
		ABP_ScriptActor_C_LookAtTimer__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnLoaded_8AC3F88145F9E66965EA0ABFD90CC4D7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::OnLoaded_8AC3F88145F9E66965EA0ABFD90CC4D7(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnLoaded_8AC3F88145F9E66965EA0ABFD90CC4D7");
		
		ABP_ScriptActor_C_OnLoaded_8AC3F88145F9E66965EA0ABFD90CC4D7_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnLoaded_919BBF95440C9B20CDB744AE50922B91
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::OnLoaded_919BBF95440C9B20CDB744AE50922B91(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnLoaded_919BBF95440C9B20CDB744AE50922B91");
		
		ABP_ScriptActor_C_OnLoaded_919BBF95440C9B20CDB744AE50922B91_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnLoaded_26E4AF3B47ADCFDB70C9C1AA5914347B
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::OnLoaded_26E4AF3B47ADCFDB70C9C1AA5914347B(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnLoaded_26E4AF3B47ADCFDB70C9C1AA5914347B");
		
		ABP_ScriptActor_C_OnLoaded_26E4AF3B47ADCFDB70C9C1AA5914347B_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnLoaded_BFD6CB5C4F10202715FBFC8DF93C8DB8
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::OnLoaded_BFD6CB5C4F10202715FBFC8DF93C8DB8(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnLoaded_BFD6CB5C4F10202715FBFC8DF93C8DB8");
		
		ABP_ScriptActor_C_OnLoaded_BFD6CB5C4F10202715FBFC8DF93C8DB8_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnLoaded_E0794065497F6D746C417B8FDB70CAC5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::OnLoaded_E0794065497F6D746C417B8FDB70CAC5(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnLoaded_E0794065497F6D746C417B8FDB70CAC5");
		
		ABP_ScriptActor_C_OnLoaded_E0794065497F6D746C417B8FDB70CAC5_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnLoaded_0738D19D491EAF2FA7D8EAB23BFAF290
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::OnLoaded_0738D19D491EAF2FA7D8EAB23BFAF290(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnLoaded_0738D19D491EAF2FA7D8EAB23BFAF290");
		
		ABP_ScriptActor_C_OnLoaded_0738D19D491EAF2FA7D8EAB23BFAF290_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnLoaded_99E9C36745BE1A9494AA2FBF9AD729BF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::OnLoaded_99E9C36745BE1A9494AA2FBF9AD729BF(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnLoaded_99E9C36745BE1A9494AA2FBF9AD729BF");
		
		ABP_ScriptActor_C_OnLoaded_99E9C36745BE1A9494AA2FBF9AD729BF_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnLoaded_EF4A23B0441F8A087072C0826ED33902
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::OnLoaded_EF4A23B0441F8A087072C0826ED33902(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnLoaded_EF4A23B0441F8A087072C0826ED33902");
		
		ABP_ScriptActor_C_OnLoaded_EF4A23B0441F8A087072C0826ED33902_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnLoaded_D739ED1F4BFDF8FE4E06DCB64B073A9B
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::OnLoaded_D739ED1F4BFDF8FE4E06DCB64B073A9B(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnLoaded_D739ED1F4BFDF8FE4E06DCB64B073A9B");
		
		ABP_ScriptActor_C_OnLoaded_D739ED1F4BFDF8FE4E06DCB64B073A9B_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnLoaded_18FE13924D8C002D3FD33FA53CEABAB5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::OnLoaded_18FE13924D8C002D3FD33FA53CEABAB5(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnLoaded_18FE13924D8C002D3FD33FA53CEABAB5");
		
		ABP_ScriptActor_C_OnLoaded_18FE13924D8C002D3FD33FA53CEABAB5_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_LoginBonusCheck
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::BP_LoginBonusCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_LoginBonusCheck");
		
		ABP_ScriptActor_C_BP_LoginBonusCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.LoginBonusFinished
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::LoginBonusFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.LoginBonusFinished");
		
		ABP_ScriptActor_C_LoginBonusFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.LoginBonusCheckCmplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ErrorCode                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::LoginBonusCheckCmplete(bool bWasSuccessful, int32_t ErrorCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.LoginBonusCheckCmplete");
		
		ABP_ScriptActor_C_LoginBonusCheckCmplete_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		params.ErrorCode = ErrorCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnLoginBonusWindowClose
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::OnLoginBonusWindowClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnLoginBonusWindowClose");
		
		ABP_ScriptActor_C_OnLoginBonusWindowClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.FangExpeditionClosed
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::FangExpeditionClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.FangExpeditionClosed");
		
		ABP_ScriptActor_C_FangExpeditionClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowFang_expedition
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::BP_ShowFang_expedition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowFang_expedition");
		
		ABP_ScriptActor_C_BP_ShowFang_expedition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_StartActorLipSyncAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBCharaPartsFaceComponent*                  FaceComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Speed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::BP_StartActorLipSyncAnim(class USBCharaPartsFaceComponent* FaceComponent, float Speed, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_StartActorLipSyncAnim");
		
		ABP_ScriptActor_C_BP_StartActorLipSyncAnim_Params params {};
		params.FaceComponent = FaceComponent;
		params.Speed = Speed;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_RequestFreeBuffEffectActivation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBFieldActorFreeBuffPoint*                  BuffPoint                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      PlayerCharacter                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::BP_RequestFreeBuffEffectActivation(class ASBFieldActorFreeBuffPoint* BuffPoint, class AActor* PlayerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_RequestFreeBuffEffectActivation");
		
		ABP_ScriptActor_C_BP_RequestFreeBuffEffectActivation_Params params {};
		params.BuffPoint = BuffPoint;
		params.PlayerCharacter = PlayerCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowResearchTeamMenu
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::BP_ShowResearchTeamMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowResearchTeamMenu");
		
		ABP_ScriptActor_C_BP_ShowResearchTeamMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowRmShopMenu
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::BP_ShowRmShopMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowRmShopMenu");
		
		ABP_ScriptActor_C_BP_ShowRmShopMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnClose_RmShopMenu_Event
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::OnClose_RmShopMenu_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnClose_RmShopMenu_Event");
		
		ABP_ScriptActor_C_OnClose_RmShopMenu_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_SetEnvironmentMeshShadow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        RowName                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bCastShadow                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ScriptActor_C::BP_SetEnvironmentMeshShadow(const class FName& RowName, bool bCastShadow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_SetEnvironmentMeshShadow");
		
		ABP_ScriptActor_C_BP_SetEnvironmentMeshShadow_Params params {};
		params.RowName = RowName;
		params.bCastShadow = bCastShadow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowGuildMenu
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::BP_ShowGuildMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowGuildMenu");
		
		ABP_ScriptActor_C_BP_ShowGuildMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnClosedNpcGuild
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::OnClosedNpcGuild()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnClosedNpcGuild");
		
		ABP_ScriptActor_C_OnClosedNpcGuild_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowGuildJoinMenu
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::BP_ShowGuildJoinMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowGuildJoinMenu");
		
		ABP_ScriptActor_C_BP_ShowGuildJoinMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnGuildJoinMenuClosed
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::OnGuildJoinMenuClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnGuildJoinMenuClosed");
		
		ABP_ScriptActor_C_OnGuildJoinMenuClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnClosedNpcGuildFromJoin
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::OnClosedNpcGuildFromJoin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnClosedNpcGuildFromJoin");
		
		ABP_ScriptActor_C_OnClosedNpcGuildFromJoin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.ResetNpcGuildWidget
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::ResetNpcGuildWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.ResetNpcGuildWidget");
		
		ABP_ScriptActor_C_ResetNpcGuildWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ActivateWarpPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InWarpPointId                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::BP_ActivateWarpPoint(const class FName& InWarpPointId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ActivateWarpPoint");
		
		ABP_ScriptActor_C_BP_ActivateWarpPoint_Params params {};
		params.InWarpPointId = InWarpPointId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.カスタムイベント_1
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.カスタムイベント_1");
		
		ABP_ScriptActor_C__1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnChangeClass
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::OnChangeClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnChangeClass");
		
		ABP_ScriptActor_C_OnChangeClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_SendMail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InMailId                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::BP_SendMail(const class FName& InMailId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_SendMail");
		
		ABP_ScriptActor_C_BP_SendMail_Params params {};
		params.InMailId = InMailId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnCompletedMail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ErrorCode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::OnCompletedMail(bool bWasSuccessful, int32_t ErrorCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnCompletedMail");
		
		ABP_ScriptActor_C_OnCompletedMail_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		params.ErrorCode = ErrorCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.Retry
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::Retry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.Retry");
		
		ABP_ScriptActor_C_Retry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.CustomEvent_5
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::CustomEvent_5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.CustomEvent_5");
		
		ABP_ScriptActor_C_CustomEvent_5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowTutorialHelp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InId                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::BP_ShowTutorialHelp(const class FName& InId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowTutorialHelp");
		
		ABP_ScriptActor_C_BP_ShowTutorialHelp_Params params {};
		params.InId = InId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ForceNavi_ShowMask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        TableKeyName                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsNoWait                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ScriptActor_C::BP_ForceNavi_ShowMask(const class FName& TableKeyName, bool bIsNoWait)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ForceNavi_ShowMask");
		
		ABP_ScriptActor_C_BP_ForceNavi_ShowMask_Params params {};
		params.TableKeyName = TableKeyName;
		params.bIsNoWait = bIsNoWait;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnForceNaviMaskClosed
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::OnForceNaviMaskClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnForceNaviMaskClosed");
		
		ABP_ScriptActor_C_OnForceNaviMaskClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ForceNavi_CloseMask
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::BP_ForceNavi_CloseMask()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ForceNavi_CloseMask");
		
		ABP_ScriptActor_C_BP_ForceNavi_CloseMask_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ForceNavi_WaitEquipMountImagine
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::BP_ForceNavi_WaitEquipMountImagine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ForceNavi_WaitEquipMountImagine");
		
		ABP_ScriptActor_C_BP_ForceNavi_WaitEquipMountImagine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnSaveCharaImagineEquipsDelegate_イベント_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBCharaEquipType                                  EquipType                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      UniqueId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               IsEquip                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInIsExpiredStickerWeapons                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class FString>                              InExpiredStickerWeaponUniqueIds                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FSBExpiredEquipmentData                     InExpiredEquipmentData                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_ScriptActor_C::OnSaveCharaImagineEquipsDelegate__1(int32_t RetCode, ESBCharaEquipType EquipType, const class FString& UniqueId, bool IsEquip, bool bInIsExpiredStickerWeapons, TArray<class FString> InExpiredStickerWeaponUniqueIds, const struct FSBExpiredEquipmentData& InExpiredEquipmentData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnSaveCharaImagineEquipsDelegate_イベント_1");
		
		ABP_ScriptActor_C_OnSaveCharaImagineEquipsDelegate__1_Params params {};
		params.RetCode = RetCode;
		params.EquipType = EquipType;
		params.UniqueId = UniqueId;
		params.IsEquip = IsEquip;
		params.bInIsExpiredStickerWeapons = bInIsExpiredStickerWeapons;
		params.InExpiredStickerWeaponUniqueIds = InExpiredStickerWeaponUniqueIds;
		params.InExpiredEquipmentData = InExpiredEquipmentData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ForceNavi_Delay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InDelayTime                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::BP_ForceNavi_Delay(float InDelayTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ForceNavi_Delay");
		
		ABP_ScriptActor_C_BP_ForceNavi_Delay_Params params {};
		params.InDelayTime = InDelayTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.ForceNaviCloseMask_Internal
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::ForceNaviCloseMask_Internal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.ForceNaviCloseMask_Internal");
		
		ABP_ScriptActor_C_ForceNaviCloseMask_Internal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.ForceNaviShowMask_Internal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InKeyName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InNoWait                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ScriptActor_C::ForceNaviShowMask_Internal(const class FName& InKeyName, bool InNoWait)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.ForceNaviShowMask_Internal");
		
		ABP_ScriptActor_C_ForceNaviShowMask_Internal_Params params {};
		params.InKeyName = InKeyName;
		params.InNoWait = InNoWait;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ForceNavi_Mask_DebugExit
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::BP_ForceNavi_Mask_DebugExit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ForceNavi_Mask_DebugExit");
		
		ABP_ScriptActor_C_BP_ForceNavi_Mask_DebugExit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ApplyDofSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InSettingId                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InTransitionTime                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::BP_ApplyDofSettings(const class FName& InSettingId, float InTransitionTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ApplyDofSettings");
		
		ABP_ScriptActor_C_BP_ApplyDofSettings_Params params {};
		params.InSettingId = InSettingId;
		params.InTransitionTime = InTransitionTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnDofTransitionFinishe
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::OnDofTransitionFinishe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnDofTransitionFinishe");
		
		ABP_ScriptActor_C_OnDofTransitionFinishe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_PlayParticleFromActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InTargetActor                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        InParticleId                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        InAttachSocketId                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     InOffsetLocation                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::BP_PlayParticleFromActor(class AActor* InTargetActor, const class FName& InParticleId, const class FName& InAttachSocketId, const struct FVector& InOffsetLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_PlayParticleFromActor");
		
		ABP_ScriptActor_C_BP_PlayParticleFromActor_Params params {};
		params.InTargetActor = InTargetActor;
		params.InParticleId = InParticleId;
		params.InAttachSocketId = InAttachSocketId;
		params.InOffsetLocation = InOffsetLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowChoiceDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InQuestion                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class FText>                                InItems                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_ScriptActor_C::BP_ShowChoiceDialog(const class FText& InQuestion, TArray<class FText> InItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowChoiceDialog");
		
		ABP_ScriptActor_C_BP_ShowChoiceDialog_Params params {};
		params.InQuestion = InQuestion;
		params.InItems = InItems;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnSelectItem_イベント_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSelectItemIndex                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::OnSelectItem__1(int32_t InSelectItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnSelectItem_イベント_1");
		
		ABP_ScriptActor_C_OnSelectItem__1_Params params {};
		params.InSelectItemIndex = InSelectItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_SpawnSubActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InCharacterId                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::BP_SpawnSubActor(const class FName& InCharacterId, const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_SpawnSubActor");
		
		ABP_ScriptActor_C_BP_SpawnSubActor_Params params {};
		params.InCharacterId = InCharacterId;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_LookAtLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     InTargetLocation                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::BP_LookAtLocation(class AActor* InActor, const struct FVector& InTargetLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_LookAtLocation");
		
		ABP_ScriptActor_C_BP_LookAtLocation_Params params {};
		params.InActor = InActor;
		params.InTargetLocation = InTargetLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_LookAtActorForPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      SourceActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DestinationActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsMount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ScriptActor_C::BP_LookAtActorForPlayer(class AActor* SourceActor, class AActor* DestinationActor, bool bIsMount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_LookAtActorForPlayer");
		
		ABP_ScriptActor_C_BP_LookAtActorForPlayer_Params params {};
		params.SourceActor = SourceActor;
		params.DestinationActor = DestinationActor;
		params.bIsMount = bIsMount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.LookAtLocation_Internal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InActor                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     InTargetLocation                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::LookAtLocation_Internal(class AActor* InActor, const struct FVector& InTargetLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.LookAtLocation_Internal");
		
		ABP_ScriptActor_C_LookAtLocation_Internal_Params params {};
		params.InActor = InActor;
		params.InTargetLocation = InTargetLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_SetContentLock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBContentLockType                                 InContentLockType                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInLock                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ScriptActor_C::BP_SetContentLock(ESBContentLockType InContentLockType, bool bInLock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_SetContentLock");
		
		ABP_ScriptActor_C_BP_SetContentLock_Params params {};
		params.InContentLockType = InContentLockType;
		params.bInLock = bInLock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnSetKeyValueDelegate_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ScriptActor_C::OnSetKeyValueDelegate_Event_1(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnSetKeyValueDelegate_Event_1");
		
		ABP_ScriptActor_C_OnSetKeyValueDelegate_Event_1_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_GetEmote
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InEmoteId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::BP_GetEmote(const class FName& InEmoteId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_GetEmote");
		
		ABP_ScriptActor_C_BP_GetEmote_Params params {};
		params.InEmoteId = InEmoteId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.CustomEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ScriptActor_C::CustomEvent(bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.CustomEvent");
		
		ABP_ScriptActor_C_CustomEvent_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.Event_OnSetKeyValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ScriptActor_C::Event_OnSetKeyValue(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.Event_OnSetKeyValue");
		
		ABP_ScriptActor_C_Event_OnSetKeyValue_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_SetUserData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InKey                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::BP_SetUserData(const class FName& InKey, const class FString& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_SetUserData");
		
		ABP_ScriptActor_C_BP_SetUserData_Params params {};
		params.InKey = InKey;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnAddActivate_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        DungeonId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::OnAddActivate_Event_1(const class FName& DungeonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnAddActivate_Event_1");
		
		ABP_ScriptActor_C_OnAddActivate_Event_1_Params params {};
		params.DungeonId = DungeonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ActivateContent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InContentId                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsStartMatching                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ScriptActor_C::BP_ActivateContent(const class FName& InContentId, bool bIsStartMatching)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ActivateContent");
		
		ABP_ScriptActor_C_BP_ActivateContent_Params params {};
		params.InContentId = InContentId;
		params.bIsStartMatching = bIsStartMatching;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnClose_Event_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUMG_MatchingMenu_C*                         Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::OnClose_Event_3(class UUMG_MatchingMenu_C* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnClose_Event_3");
		
		ABP_ScriptActor_C_OnClose_Event_3_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowMoneyUI
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::BP_ShowMoneyUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowMoneyUI");
		
		ABP_ScriptActor_C_BP_ShowMoneyUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_HideMoneyUI
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::BP_HideMoneyUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_HideMoneyUI");
		
		ABP_ScriptActor_C_BP_HideMoneyUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_GetValidSubEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                InSubEvents                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_ScriptActor_C::BP_GetValidSubEvent(TArray<class FName> InSubEvents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_GetValidSubEvent");
		
		ABP_ScriptActor_C_BP_GetValidSubEvent_Params params {};
		params.InSubEvents = InSubEvents;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnSelectItem_Event_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSelectItemIndex                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::OnSelectItem_Event_3(int32_t InSelectItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnSelectItem_Event_3");
		
		ABP_ScriptActor_C_OnSelectItem_Event_3_Params params {};
		params.InSelectItemIndex = InSelectItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowEngramUI
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::BP_ShowEngramUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowEngramUI");
		
		ABP_ScriptActor_C_BP_ShowEngramUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_HideEngramUI
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::BP_HideEngramUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_HideEngramUI");
		
		ABP_ScriptActor_C_BP_HideEngramUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowHudLayoutSelectPreset
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::BP_ShowHudLayoutSelectPreset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowHudLayoutSelectPreset");
		
		ABP_ScriptActor_C_BP_ShowHudLayoutSelectPreset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.カスタムイベント_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELayoutPresetTypes                                 Preset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::_2(ELayoutPresetTypes Preset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.カスタムイベント_2");
		
		ABP_ScriptActor_C__2_Params params {};
		params.Preset = Preset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.カスタムイベント_3
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::_3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.カスタムイベント_3");
		
		ABP_ScriptActor_C__3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowTitle2ndUI
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::BP_ShowTitle2ndUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowTitle2ndUI");
		
		ABP_ScriptActor_C_BP_ShowTitle2ndUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.カスタムイベント_4
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::_4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.カスタムイベント_4");
		
		ABP_ScriptActor_C__4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowConnectToServerError
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::BP_ShowConnectToServerError(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowConnectToServerError");
		
		ABP_ScriptActor_C_BP_ShowConnectToServerError_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowFmMenu
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::BP_ShowFmMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowFmMenu");
		
		ABP_ScriptActor_C_BP_ShowFmMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnCloseFmMenu
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::OnCloseFmMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnCloseFmMenu");
		
		ABP_ScriptActor_C_OnCloseFmMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_Delay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InDelayTime                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::BP_Delay(float InDelayTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_Delay");
		
		ABP_ScriptActor_C_BP_Delay_Params params {};
		params.InDelayTime = InDelayTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_FadeOut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InDuration                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInWait                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ScriptActor_C::BP_FadeOut(float InDuration, bool bInWait)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_FadeOut");
		
		ABP_ScriptActor_C_BP_FadeOut_Params params {};
		params.InDuration = InDuration;
		params.bInWait = bInWait;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_FadeIn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InDuration                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInWait                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ScriptActor_C::BP_FadeIn(float InDuration, bool bInWait)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_FadeIn");
		
		ABP_ScriptActor_C_BP_FadeIn_Params params {};
		params.InDuration = InDuration;
		params.bInWait = bInWait;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_WaitToIdlePlayer
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::BP_WaitToIdlePlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_WaitToIdlePlayer");
		
		ABP_ScriptActor_C_BP_WaitToIdlePlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.WaitToIdlePlayer_Internal
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::WaitToIdlePlayer_Internal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.WaitToIdlePlayer_Internal");
		
		ABP_ScriptActor_C_WaitToIdlePlayer_Internal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_SetColorFilter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                InColor                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InDuration                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::BP_SetColorFilter(const struct FLinearColor& InColor, float InDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_SetColorFilter");
		
		ABP_ScriptActor_C_BP_SetColorFilter_Params params {};
		params.InColor = InColor;
		params.InDuration = InDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnColorFilterFadeEnd
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::OnColorFilterFadeEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnColorFilterFadeEnd");
		
		ABP_ScriptActor_C_OnColorFilterFadeEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ResetColorFilter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InDuration                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::BP_ResetColorFilter(float InDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ResetColorFilter");
		
		ABP_ScriptActor_C_BP_ResetColorFilter_Params params {};
		params.InDuration = InDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_IsMatchingCanselMenu
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::BP_IsMatchingCanselMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_IsMatchingCanselMenu");
		
		ABP_ScriptActor_C_BP_IsMatchingCanselMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnCheckMatcheCancel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EYesNoDialogResult                                 Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::OnCheckMatcheCancel(EYesNoDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnCheckMatcheCancel");
		
		ABP_ScriptActor_C_OnCheckMatcheCancel_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.RetrySystemMessageWait Matching
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::RetrySystemMessageWaitMatching()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.RetrySystemMessageWait Matching");
		
		ABP_ScriptActor_C_RetrySystemMessageWaitMatching_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_SetViewTargetActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InNewTarget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInRelative                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ScriptActor_C::BP_SetViewTargetActor(class AActor* InNewTarget, bool bInRelative)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_SetViewTargetActor");
		
		ABP_ScriptActor_C_BP_SetViewTargetActor_Params params {};
		params.InNewTarget = InNewTarget;
		params.bInRelative = bInRelative;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ResetViewTarget
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::BP_ResetViewTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ResetViewTarget");
		
		ABP_ScriptActor_C_BP_ResetViewTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_SetTalkMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InOtherActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InDistancePlayer                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsNoCheckAtTeleportPlayer                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              InCameraZOffset                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::BP_SetTalkMode(class AActor* InOtherActor, float InDistancePlayer, bool bIsNoCheckAtTeleportPlayer, float InCameraZOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_SetTalkMode");
		
		ABP_ScriptActor_C_BP_SetTalkMode_Params params {};
		params.InOtherActor = InOtherActor;
		params.InDistancePlayer = InDistancePlayer;
		params.bIsNoCheckAtTeleportPlayer = bIsNoCheckAtTeleportPlayer;
		params.InCameraZOffset = InCameraZOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.SetTalkModeFilterEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInEnable                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ScriptActor_C::SetTalkModeFilterEnable(bool bInEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.SetTalkModeFilterEnable");
		
		ABP_ScriptActor_C_SetTalkModeFilterEnable_Params params {};
		params.bInEnable = bInEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_SetViewTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     InTargetLocation                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    InTargetRotation                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              InBlendTime                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::BP_SetViewTarget(const struct FVector& InTargetLocation, const struct FRotator& InTargetRotation, float InBlendTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_SetViewTarget");
		
		ABP_ScriptActor_C_BP_SetViewTarget_Params params {};
		params.InTargetLocation = InTargetLocation;
		params.InTargetRotation = InTargetRotation;
		params.InBlendTime = InBlendTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_SetViewTargetPreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InCameraId                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     InOffsetLocation                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InBlendTime                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::BP_SetViewTargetPreset(const class FName& InCameraId, const struct FVector& InOffsetLocation, float InBlendTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_SetViewTargetPreset");
		
		ABP_ScriptActor_C_BP_SetViewTargetPreset_Params params {};
		params.InCameraId = InCameraId;
		params.InOffsetLocation = InOffsetLocation;
		params.InBlendTime = InBlendTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_SetDemoModeWait
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::BP_SetDemoModeWait()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_SetDemoModeWait");
		
		ABP_ScriptActor_C_BP_SetDemoModeWait_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.SetDemoModeWait_Internal_
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::SetDemoModeWait_Internal_()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.SetDemoModeWait_Internal_");
		
		ABP_ScriptActor_C_SetDemoModeWait_Internal__Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_PlayCameraShake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InId                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::BP_PlayCameraShake(const class FName& InId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_PlayCameraShake");
		
		ABP_ScriptActor_C_BP_PlayCameraShake_Params params {};
		params.InId = InId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_StopCameraShake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InId                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::BP_StopCameraShake(const class FName& InId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_StopCameraShake");
		
		ABP_ScriptActor_C_BP_StopCameraShake_Params params {};
		params.InId = InId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_SetQuestEventMode
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::BP_SetQuestEventMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_SetQuestEventMode");
		
		ABP_ScriptActor_C_BP_SetQuestEventMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_PlaySubTitle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InId                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::BP_PlaySubTitle(const class FName& InId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_PlaySubTitle");
		
		ABP_ScriptActor_C_BP_PlaySubTitle_Params params {};
		params.InId = InId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnFinish_Event_1
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::OnFinish_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnFinish_Event_1");
		
		ABP_ScriptActor_C_OnFinish_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_PlayDemo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InDemoName                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::BP_PlayDemo(const class FName& InDemoName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_PlayDemo");
		
		ABP_ScriptActor_C_BP_PlayDemo_Params params {};
		params.InDemoName = InDemoName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.Event_OnSaveDemoBrowsed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        DemoId                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::Event_OnSaveDemoBrowsed(bool Result, int32_t RetCode, const class FName& DemoId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.Event_OnSaveDemoBrowsed");
		
		ABP_ScriptActor_C_Event_OnSaveDemoBrowsed_Params params {};
		params.Result = Result;
		params.RetCode = RetCode;
		params.DemoId = DemoId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_SaveDemoBrowsedFlag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InDemoName                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::BP_SaveDemoBrowsedFlag(const class FName& InDemoName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_SaveDemoBrowsedFlag");
		
		ABP_ScriptActor_C_BP_SaveDemoBrowsedFlag_Params params {};
		params.InDemoName = InDemoName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.カスタムイベント_5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        DemoId                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::_5(bool Result, int32_t RetCode, const class FName& DemoId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.カスタムイベント_5");
		
		ABP_ScriptActor_C__5_Params params {};
		params.Result = Result;
		params.RetCode = RetCode;
		params.DemoId = DemoId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_PlayDemo_SkipSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InDemoName                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::BP_PlayDemo_SkipSave(const class FName& InDemoName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_PlayDemo_SkipSave");
		
		ABP_ScriptActor_C_BP_PlayDemo_SkipSave_Params params {};
		params.InDemoName = InDemoName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.PlayDemo_Internal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InDemoId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::PlayDemo_Internal(const class FName& InDemoId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.PlayDemo_Internal");
		
		ABP_ScriptActor_C_PlayDemo_Internal_Params params {};
		params.InDemoId = InDemoId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.Event_OnDemoPlayEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBLevelSequenceActor*                       SequencerActor                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::Event_OnDemoPlayEnd(class ASBLevelSequenceActor* SequencerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.Event_OnDemoPlayEnd");
		
		ABP_ScriptActor_C_Event_OnDemoPlayEnd_Params params {};
		params.SequencerActor = SequencerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_SetTalkModeFixed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InOtherActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ViewParamId                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsNoCheckAtTeleportPlayer                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              InCameraZOffset                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::BP_SetTalkModeFixed(class AActor* InOtherActor, const class FName& ViewParamId, bool bIsNoCheckAtTeleportPlayer, float InCameraZOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_SetTalkModeFixed");
		
		ABP_ScriptActor_C_BP_SetTalkModeFixed_Params params {};
		params.InOtherActor = InOtherActor;
		params.ViewParamId = ViewParamId;
		params.bIsNoCheckAtTeleportPlayer = bIsNoCheckAtTeleportPlayer;
		params.InCameraZOffset = InCameraZOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_WaitMusicCue
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::BP_WaitMusicCue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_WaitMusicCue");
		
		ABP_ScriptActor_C_BP_WaitMusicCue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnSBSoundMusicCueFinished
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::OnSBSoundMusicCueFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnSBSoundMusicCueFinished");
		
		ABP_ScriptActor_C_OnSBSoundMusicCueFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowStorageMenu
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::BP_ShowStorageMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowStorageMenu");
		
		ABP_ScriptActor_C_BP_ShowStorageMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowWarpMenu
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::BP_ShowWarpMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowWarpMenu");
		
		ABP_ScriptActor_C_BP_ShowWarpMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowEstheMenu
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::BP_ShowEstheMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowEstheMenu");
		
		ABP_ScriptActor_C_BP_ShowEstheMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowShopMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EShopType                                          InShopType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        InProductListId                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::BP_ShowShopMenu(EShopType InShopType, const class FName& InProductListId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowShopMenu");
		
		ABP_ScriptActor_C_BP_ShowShopMenu_Params params {};
		params.InShopType = InShopType;
		params.InProductListId = InProductListId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnClose_Event_2
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::OnClose_Event_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnClose_Event_2");
		
		ABP_ScriptActor_C_OnClose_Event_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.CustomEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::CustomEvent_4(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.CustomEvent_4");
		
		ABP_ScriptActor_C_CustomEvent_4_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowColosseumMenu
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::BP_ShowColosseumMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowColosseumMenu");
		
		ABP_ScriptActor_C_BP_ShowColosseumMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowPlayerCraftMenu
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::BP_ShowPlayerCraftMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowPlayerCraftMenu");
		
		ABP_ScriptActor_C_BP_ShowPlayerCraftMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnCloseEvnet_Storage
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::OnCloseEvnet_Storage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnCloseEvnet_Storage");
		
		ABP_ScriptActor_C_OnCloseEvnet_Storage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnClose_Event
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::OnClose_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnClose_Event");
		
		ABP_ScriptActor_C_OnClose_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowImaginCraft
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsBattleImagine                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ScriptActor_C::BP_ShowImaginCraft(bool bIsBattleImagine)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowImaginCraft");
		
		ABP_ScriptActor_C_BP_ShowImaginCraft_Params params {};
		params.bIsBattleImagine = bIsBattleImagine;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnCloseImagineCraft
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::OnCloseImagineCraft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnCloseImagineCraft");
		
		ABP_ScriptActor_C_OnCloseImagineCraft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowColoringShop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsCostumeChange                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InIsColorSVEnabled                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ScriptActor_C::BP_ShowColoringShop(bool InIsCostumeChange, bool InIsColorSVEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowColoringShop");
		
		ABP_ScriptActor_C_BP_ShowColoringShop_Params params {};
		params.InIsCostumeChange = InIsCostumeChange;
		params.InIsColorSVEnabled = InIsColorSVEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowWeaponSyntheMenu
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::BP_ShowWeaponSyntheMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowWeaponSyntheMenu");
		
		ABP_ScriptActor_C_BP_ShowWeaponSyntheMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowLiquidMemoryShopMenu
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::BP_ShowLiquidMemoryShopMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowLiquidMemoryShopMenu");
		
		ABP_ScriptActor_C_BP_ShowLiquidMemoryShopMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnClose_LiquidMemoryShop_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsLiquidMemoryUsed                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ScriptActor_C::OnClose_LiquidMemoryShop_Event(bool IsLiquidMemoryUsed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnClose_LiquidMemoryShop_Event");
		
		ABP_ScriptActor_C_OnClose_LiquidMemoryShop_Event_Params params {};
		params.IsLiquidMemoryUsed = IsLiquidMemoryUsed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowWeaponAbilityExtender
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::BP_ShowWeaponAbilityExtender()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowWeaponAbilityExtender");
		
		ABP_ScriptActor_C_BP_ShowWeaponAbilityExtender_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowWeaponAbilityRemover
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::BP_ShowWeaponAbilityRemover()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowWeaponAbilityRemover");
		
		ABP_ScriptActor_C_BP_ShowWeaponAbilityRemover_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowEventShopMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EShopType                                          InShopType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::BP_ShowEventShopMenu(EShopType InShopType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowEventShopMenu");
		
		ABP_ScriptActor_C_BP_ShowEventShopMenu_Params params {};
		params.InShopType = InShopType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnClose_EventShop_Event
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::OnClose_EventShop_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnClose_EventShop_Event");
		
		ABP_ScriptActor_C_OnClose_EventShop_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnFinish_Event_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::OnFinish_Event_4(const class FString& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnFinish_Event_4");
		
		ABP_ScriptActor_C_OnFinish_Event_4_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowCashExchangeShopMenu
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::BP_ShowCashExchangeShopMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowCashExchangeShopMenu");
		
		ABP_ScriptActor_C_BP_ShowCashExchangeShopMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnClose_CashExchangeShop_Event
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::OnClose_CashExchangeShop_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnClose_CashExchangeShop_Event");
		
		ABP_ScriptActor_C_OnClose_CashExchangeShop_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowAdventurerRankShopMenu
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::BP_ShowAdventurerRankShopMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowAdventurerRankShopMenu");
		
		ABP_ScriptActor_C_BP_ShowAdventurerRankShopMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnAdventureRankShopClosed
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::OnAdventureRankShopClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnAdventureRankShopClosed");
		
		ABP_ScriptActor_C_OnAdventureRankShopClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowRankingBoard
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::BP_ShowRankingBoard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowRankingBoard");
		
		ABP_ScriptActor_C_BP_ShowRankingBoard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnClose_Event_4
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::OnClose_Event_4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnClose_Event_4");
		
		ABP_ScriptActor_C_OnClose_Event_4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.StoratgeEquipSet_OnCloseEvent
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::StoratgeEquipSet_OnCloseEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.StoratgeEquipSet_OnCloseEvent");
		
		ABP_ScriptActor_C_StoratgeEquipSet_OnCloseEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowStoragePresetEquipSetMenu
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::BP_ShowStoragePresetEquipSetMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowStoragePresetEquipSetMenu");
		
		ABP_ScriptActor_C_BP_ShowStoragePresetEquipSetMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowWeaponAbilityReconditioner
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::BP_ShowWeaponAbilityReconditioner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowWeaponAbilityReconditioner");
		
		ABP_ScriptActor_C_BP_ShowWeaponAbilityReconditioner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowAdventurerRankUp
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::BP_ShowAdventurerRankUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowAdventurerRankUp");
		
		ABP_ScriptActor_C_BP_ShowAdventurerRankUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnAdventureRankUpClosed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSuccess                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ScriptActor_C::OnAdventureRankUpClosed(bool IsSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnAdventureRankUpClosed");
		
		ABP_ScriptActor_C_OnAdventureRankUpClosed_Params params {};
		params.IsSuccess = IsSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowTAbilityShopMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EShopType                                          InShopType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::BP_ShowTAbilityShopMenu(EShopType InShopType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowTAbilityShopMenu");
		
		ABP_ScriptActor_C_BP_ShowTAbilityShopMenu_Params params {};
		params.InShopType = InShopType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnClosed_WeaponSynthe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsUsed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ScriptActor_C::OnClosed_WeaponSynthe(bool IsUsed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnClosed_WeaponSynthe");
		
		ABP_ScriptActor_C_OnClosed_WeaponSynthe_Params params {};
		params.IsUsed = IsUsed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnClosed_WeaponTuning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsUsed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ScriptActor_C::OnClosed_WeaponTuning(bool IsUsed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnClosed_WeaponTuning");
		
		ABP_ScriptActor_C_OnClosed_WeaponTuning_Params params {};
		params.IsUsed = IsUsed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnClosed_WeaponAbilityRemove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsUsed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ScriptActor_C::OnClosed_WeaponAbilityRemove(bool IsUsed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnClosed_WeaponAbilityRemove");
		
		ABP_ScriptActor_C_OnClosed_WeaponAbilityRemove_Params params {};
		params.IsUsed = IsUsed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnClosed_WeaponExtender
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsUsed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ScriptActor_C::OnClosed_WeaponExtender(bool IsUsed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnClosed_WeaponExtender");
		
		ABP_ScriptActor_C_OnClosed_WeaponExtender_Params params {};
		params.IsUsed = IsUsed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnColoringShopWarpFailedDelegate
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::OnColoringShopWarpFailedDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnColoringShopWarpFailedDelegate");
		
		ABP_ScriptActor_C_OnColoringShopWarpFailedDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowImagineStackB
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::BP_ShowImagineStackB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowImagineStackB");
		
		ABP_ScriptActor_C_BP_ShowImagineStackB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnCloseStackBImagineMenu
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::OnCloseStackBImagineMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnCloseStackBImagineMenu");
		
		ABP_ScriptActor_C_OnCloseStackBImagineMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowDhcUIMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDhcMapMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ScriptActor_C::BP_ShowDhcUIMenu(bool IsDhcMapMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowDhcUIMenu");
		
		ABP_ScriptActor_C_BP_ShowDhcUIMenu_Params params {};
		params.IsDhcMapMode = IsDhcMapMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnClose_イベント_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InGoToNext                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ScriptActor_C::OnClose__1(bool InGoToNext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnClose_イベント_1");
		
		ABP_ScriptActor_C_OnClose__1_Params params {};
		params.InGoToNext = InGoToNext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowCommandMenuAdventureBoard
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::BP_ShowCommandMenuAdventureBoard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowCommandMenuAdventureBoard");
		
		ABP_ScriptActor_C_BP_ShowCommandMenuAdventureBoard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.CustomEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::CustomEvent_2(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.CustomEvent_2");
		
		ABP_ScriptActor_C_CustomEvent_2_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_RequestMyRoom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRoomId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::BP_RequestMyRoom(int32_t InRoomId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_RequestMyRoom");
		
		ABP_ScriptActor_C_BP_RequestMyRoom_Params params {};
		params.InRoomId = InRoomId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnCompleteRoomInfoDelegate_イベント_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::OnCompleteRoomInfoDelegate__1(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnCompleteRoomInfoDelegate_イベント_1");
		
		ABP_ScriptActor_C_OnCompleteRoomInfoDelegate__1_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowTApartMenu
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::BP_ShowTApartMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowTApartMenu");
		
		ABP_ScriptActor_C_BP_ShowTApartMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.CustomEvent_6
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::CustomEvent_6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.CustomEvent_6");
		
		ABP_ScriptActor_C_CustomEvent_6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowImagineTypeSelector
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::BP_ShowImagineTypeSelector()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowImagineTypeSelector");
		
		ABP_ScriptActor_C_BP_ShowImagineTypeSelector_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnCloseImagineTypeSelector
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::OnCloseImagineTypeSelector()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnCloseImagineTypeSelector");
		
		ABP_ScriptActor_C_OnCloseImagineTypeSelector_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.CustomEvent_7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsUsed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ScriptActor_C::CustomEvent_7(bool IsUsed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.CustomEvent_7");
		
		ABP_ScriptActor_C_CustomEvent_7_Params params {};
		params.IsUsed = IsUsed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowWeaponAbilityBuildup
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::BP_ShowWeaponAbilityBuildup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowWeaponAbilityBuildup");
		
		ABP_ScriptActor_C_BP_ShowWeaponAbilityBuildup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnEstheWarpFailedDelegate
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::OnEstheWarpFailedDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnEstheWarpFailedDelegate");
		
		ABP_ScriptActor_C_OnEstheWarpFailedDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnCloseAestheShopMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsCourseDecided                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            InCourseId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InTicketTokenId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InUseTicketNum                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::OnCloseAestheShopMenu(bool InIsCourseDecided, int32_t InCourseId, int32_t InTicketTokenId, int32_t InUseTicketNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnCloseAestheShopMenu");
		
		ABP_ScriptActor_C_OnCloseAestheShopMenu_Params params {};
		params.InIsCourseDecided = InIsCourseDecided;
		params.InCourseId = InCourseId;
		params.InTicketTokenId = InTicketTokenId;
		params.InUseTicketNum = InUseTicketNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ReportQuest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            QuestIndex                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::BP_ReportQuest(int32_t QuestIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ReportQuest");
		
		ABP_ScriptActor_C_BP_ReportQuest_Params params {};
		params.QuestIndex = QuestIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowQuestRequestMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InQuestIndex                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::BP_ShowQuestRequestMenu(int32_t InQuestIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowQuestRequestMenu");
		
		ABP_ScriptActor_C_BP_ShowQuestRequestMenu_Params params {};
		params.InQuestIndex = InQuestIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnFinish_Event_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bReported                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ScriptActor_C::OnFinish_Event_2(bool bReported)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnFinish_Event_2");
		
		ABP_ScriptActor_C_OnFinish_Event_2_Params params {};
		params.bReported = bReported;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_PickQuest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InClientId                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::BP_PickQuest(const class FName& InClientId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_PickQuest");
		
		ABP_ScriptActor_C_BP_PickQuest_Params params {};
		params.InClientId = InClientId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnSelectItem_Event_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SelectItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::OnSelectItem_Event_2(int32_t SelectItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnSelectItem_Event_2");
		
		ABP_ScriptActor_C_OnSelectItem_Event_2_Params params {};
		params.SelectItem = SelectItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowQuestBoard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InQuestBoardId                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::BP_ShowQuestBoard(const class FName& InQuestBoardId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowQuestBoard");
		
		ABP_ScriptActor_C_BP_ShowQuestBoard_Params params {};
		params.InQuestBoardId = InQuestBoardId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnClose_Event_1
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::OnClose_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnClose_Event_1");
		
		ABP_ScriptActor_C_OnClose_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_QuestAccept
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            QuestIndex                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::BP_QuestAccept(int32_t QuestIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_QuestAccept");
		
		ABP_ScriptActor_C_BP_QuestAccept_Params params {};
		params.QuestIndex = QuestIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnAcceptQuestDelegate_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EAcceptedQuestErrorCode                            ErrorCode                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAcceptedQuestInfo                          AcceptedQuestInfo                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_ScriptActor_C::OnAcceptQuestDelegate_Event_1(bool Result, EAcceptedQuestErrorCode ErrorCode, int32_t RetCode, const struct FAcceptedQuestInfo& AcceptedQuestInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnAcceptQuestDelegate_Event_1");
		
		ABP_ScriptActor_C_OnAcceptQuestDelegate_Event_1_Params params {};
		params.Result = Result;
		params.ErrorCode = ErrorCode;
		params.RetCode = RetCode;
		params.AcceptedQuestInfo = AcceptedQuestInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowQuestCompleteJingle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InQuestIndex                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::BP_ShowQuestCompleteJingle(int32_t InQuestIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowQuestCompleteJingle");
		
		ABP_ScriptActor_C_BP_ShowQuestCompleteJingle_Params params {};
		params.InQuestIndex = InQuestIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnFinish_Event_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EQuestDetail_FinishStatus                          FinishStatus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            QuestIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::OnFinish_Event_3(EQuestDetail_FinishStatus FinishStatus, int32_t QuestIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnFinish_Event_3");
		
		ABP_ScriptActor_C_OnFinish_Event_3_Params params {};
		params.FinishStatus = FinishStatus;
		params.QuestIndex = QuestIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnQuestConfirmFinish_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EQuestDetail_FinishStatus                          FinishStatus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            QuestIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::OnQuestConfirmFinish_2(EQuestDetail_FinishStatus FinishStatus, int32_t QuestIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnQuestConfirmFinish_2");
		
		ABP_ScriptActor_C_OnQuestConfirmFinish_2_Params params {};
		params.FinishStatus = FinishStatus;
		params.QuestIndex = QuestIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowQuestConfirm
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InQuestIndex                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::BP_ShowQuestConfirm(int32_t InQuestIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowQuestConfirm");
		
		ABP_ScriptActor_C_BP_ShowQuestConfirm_Params params {};
		params.InQuestIndex = InQuestIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_CompleteQuestStep
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InQuestIndex                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InStepIndex                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InConditionDataId                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::BP_CompleteQuestStep(int32_t InQuestIndex, int32_t InStepIndex, int32_t InConditionDataId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_CompleteQuestStep");
		
		ABP_ScriptActor_C_BP_CompleteQuestStep_Params params {};
		params.InQuestIndex = InQuestIndex;
		params.InStepIndex = InStepIndex;
		params.InConditionDataId = InConditionDataId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnCompleteQuestStep_Completed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            RetCode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAcceptedQuestInfo                          PrevAcceptedQuestInfo                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_ScriptActor_C::OnCompleteQuestStep_Completed(bool Result, int32_t RetCode, const struct FAcceptedQuestInfo& PrevAcceptedQuestInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnCompleteQuestStep_Completed");
		
		ABP_ScriptActor_C_OnCompleteQuestStep_Completed_Params params {};
		params.Result = Result;
		params.RetCode = RetCode;
		params.PrevAcceptedQuestInfo = PrevAcceptedQuestInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_UpdateQuestProgressByTalkNpc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InQuestIndex                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        NpcId                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::BP_UpdateQuestProgressByTalkNpc(int32_t InQuestIndex, const class FName& NpcId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_UpdateQuestProgressByTalkNpc");
		
		ABP_ScriptActor_C_BP_UpdateQuestProgressByTalkNpc_Params params {};
		params.InQuestIndex = InQuestIndex;
		params.NpcId = NpcId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnUpdateQuestProgressCompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            RetCode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAcceptedQuestInfo                          PrevAcceptedQuestInfo                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_ScriptActor_C::OnUpdateQuestProgressCompleted(bool Result, int32_t RetCode, const struct FAcceptedQuestInfo& PrevAcceptedQuestInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnUpdateQuestProgressCompleted");
		
		ABP_ScriptActor_C_OnUpdateQuestProgressCompleted_Params params {};
		params.Result = Result;
		params.RetCode = RetCode;
		params.PrevAcceptedQuestInfo = PrevAcceptedQuestInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowSelectMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FText>                                InItems                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		float                                              YOffset                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::BP_ShowSelectMenu(TArray<class FText> InItems, float YOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowSelectMenu");
		
		ABP_ScriptActor_C_BP_ShowSelectMenu_Params params {};
		params.InItems = InItems;
		params.YOffset = YOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowMessageDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        MessageText                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_ScriptActor_C::BP_ShowMessageDialog(const class FText& MessageText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowMessageDialog");
		
		ABP_ScriptActor_C_BP_ShowMessageDialog_Params params {};
		params.MessageText = MessageText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.CustomEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::CustomEvent_1(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.CustomEvent_1");
		
		ABP_ScriptActor_C_CustomEvent_1_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowYesNoDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        MessageText                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_ScriptActor_C::BP_ShowYesNoDialog(const class FText& MessageText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowYesNoDialog");
		
		ABP_ScriptActor_C_BP_ShowYesNoDialog_Params params {};
		params.MessageText = MessageText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.CustomEvent_0_Copy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::CustomEvent_0_Copy(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.CustomEvent_0_Copy");
		
		ABP_ScriptActor_C_CustomEvent_0_Copy_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowYesNoPopup
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::BP_ShowYesNoPopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowYesNoPopup");
		
		ABP_ScriptActor_C_BP_ShowYesNoPopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowTextWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bWaitUserInput                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ScriptActor_C::BP_ShowTextWindow(const class FText& InText, bool bWaitUserInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowTextWindow");
		
		ABP_ScriptActor_C_BP_ShowTextWindow_Params params {};
		params.InText = InText;
		params.bWaitUserInput = bWaitUserInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowBalloonWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACharacter*                                  InAttachCharacter                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        InText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_ScriptActor_C::BP_ShowBalloonWindow(class ACharacter* InAttachCharacter, const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowBalloonWindow");
		
		ABP_ScriptActor_C_BP_ShowBalloonWindow_Params params {};
		params.InAttachCharacter = InAttachCharacter;
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnItemSelected_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SelectItemIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::OnItemSelected_Event_1(int32_t SelectItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnItemSelected_Event_1");
		
		ABP_ScriptActor_C_OnItemSelected_Event_1_Params params {};
		params.SelectItemIndex = SelectItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ResumeChange
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::BP_ResumeChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ResumeChange");
		
		ABP_ScriptActor_C_BP_ResumeChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_OnStart
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::BP_OnStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_OnStart");
		
		ABP_ScriptActor_C_BP_OnStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.ShowTextAllDelegate_Event_1
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::ShowTextAllDelegate_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.ShowTextAllDelegate_Event_1");
		
		ABP_ScriptActor_C_ShowTextAllDelegate_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.TurnTextDelegate_Event_1
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::TurnTextDelegate_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.TurnTextDelegate_Event_1");
		
		ABP_ScriptActor_C_TurnTextDelegate_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_SetSpeaker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InName                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::BP_SetSpeaker(const class FName& InName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_SetSpeaker");
		
		ABP_ScriptActor_C_BP_SetSpeaker_Params params {};
		params.InName = InName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ActivateContentsOnComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bAll                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ScriptActor_C::BP_ActivateContentsOnComplete(bool bAll)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ActivateContentsOnComplete");
		
		ABP_ScriptActor_C_BP_ActivateContentsOnComplete_Params params {};
		params.bAll = bAll;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.ContentsActivated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        DungeonId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::ContentsActivated(const class FName& DungeonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.ContentsActivated");
		
		ABP_ScriptActor_C_ContentsActivated_Params params {};
		params.DungeonId = DungeonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_InteractNappo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      NappoId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::BP_InteractNappo(const class FString& NappoId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_InteractNappo");
		
		ABP_ScriptActor_C_BP_InteractNappo_Params params {};
		params.NappoId = NappoId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_CloseNappoUIAndCheckComplete
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::BP_CloseNappoUIAndCheckComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_CloseNappoUIAndCheckComplete");
		
		ABP_ScriptActor_C_BP_CloseNappoUIAndCheckComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.EndnappoUI
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::EndnappoUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.EndnappoUI");
		
		ABP_ScriptActor_C_EndnappoUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnInteractAPI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               is_new                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<int32_t>                                    gained_achievement_ids                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_ScriptActor_C::OnInteractAPI(int32_t RetCode, bool is_new, TArray<int32_t> gained_achievement_ids)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnInteractAPI");
		
		ABP_ScriptActor_C_OnInteractAPI_Params params {};
		params.RetCode = RetCode;
		params.is_new = is_new;
		params.gained_achievement_ids = gained_achievement_ids;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.ReRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FString>                              NappoIds                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_ScriptActor_C::ReRequest(int32_t RetCode, TArray<class FString> NappoIds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.ReRequest");
		
		ABP_ScriptActor_C_ReRequest_Params params {};
		params.RetCode = RetCode;
		params.NappoIds = NappoIds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowTextWindowHigh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		EUIZOrder                                          InZOrder                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InYOffset                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::BP_ShowTextWindowHigh(const class FText& InText, EUIZOrder InZOrder, float InYOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_ShowTextWindowHigh");
		
		ABP_ScriptActor_C_BP_ShowTextWindowHigh_Params params {};
		params.InText = InText;
		params.InZOrder = InZOrder;
		params.InYOffset = InYOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.OnTurnText_High
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::OnTurnText_High()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.OnTurnText_High");
		
		ABP_ScriptActor_C_OnTurnText_High_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.BP_CloseTextWindowHigh
	 * 		Flags  -> ()
	 */
	void ABP_ScriptActor_C::BP_CloseTextWindowHigh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.BP_CloseTextWindowHigh");
		
		ABP_ScriptActor_C_BP_CloseTextWindowHigh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ScriptActor.BP_ScriptActor_C.ExecuteUbergraph_BP_ScriptActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ScriptActor_C::ExecuteUbergraph_BP_ScriptActor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ScriptActor.BP_ScriptActor_C.ExecuteUbergraph_BP_ScriptActor");
		
		ABP_ScriptActor_C_ExecuteUbergraph_BP_ScriptActor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ScriptActor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ScriptActor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ScriptActor.BP_ScriptActor_C");
		return ptr;
	}

}


