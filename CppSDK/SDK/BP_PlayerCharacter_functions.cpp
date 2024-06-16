#pragma once

 

// Package: BP_PlayerCharacter

#include "Basic.hpp"

#include "BP_PlayerCharacter_classes.hpp"
#include "BP_PlayerCharacter_parameters.hpp"


namespace SDK
{

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ExecuteUbergraph_BP_PlayerCharacter
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerCharacter_C::ExecuteUbergraph_BP_PlayerCharacter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "ExecuteUbergraph_BP_PlayerCharacter");

	Params::BP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_PlayerCharacter_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnPlayerDeactivateGodMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerCharacter_C::OnPlayerDeactivateGodMode(bool Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "OnPlayerDeactivateGodMode");

	Params::BP_PlayerCharacter_C_OnPlayerDeactivateGodMode Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnLossByEnemyLast
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::OnLossByEnemyLast()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "OnLossByEnemyLast");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnFindByEnemyFirst
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::OnFindByEnemyFirst()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "OnFindByEnemyFirst");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.EndDemoTeleport
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::EndDemoTeleport()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "EndDemoTeleport");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TeleportWithDelay
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Rotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bWithFade                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   DelayTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerCharacter_C::TeleportWithDelay(const struct FVector& Location, const struct FRotator& Rotation, bool bWithFade, float DelayTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "TeleportWithDelay");

	Params::BP_PlayerCharacter_C_TeleportWithDelay Parms{};

	Parms.Location = std::move(Location);
	Parms.Rotation = std::move(Rotation);
	Parms.bWithFade = bWithFade;
	Parms.DelayTime = DelayTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TeleportWithDelayImpl
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Rotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    WithFade                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   Delay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerCharacter_C::TeleportWithDelayImpl(const struct FVector& Location, const struct FRotator& Rotation, bool WithFade, float Delay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "TeleportWithDelayImpl");

	Params::BP_PlayerCharacter_C_TeleportWithDelayImpl Parms{};

	Parms.Location = std::move(Location);
	Parms.Rotation = std::move(Rotation);
	Parms.WithFade = WithFade;
	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsVisible                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerCharacter_C::CustomEvent(bool bIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "CustomEvent");

	Params::BP_PlayerCharacter_C_CustomEvent Parms{};

	Parms.bIsVisible = bIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetDamageCollisionTransformType
// (Event, Protected, BlueprintEvent)
// Parameters:
// ESBPlayerDamageCollisionTransformType   TransformType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerCharacter_C::SetDamageCollisionTransformType(ESBPlayerDamageCollisionTransformType TransformType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "SetDamageCollisionTransformType");

	Params::BP_PlayerCharacter_C_SetDamageCollisionTransformType Parms{};

	Parms.TransformType = TransformType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnLastHitActorInfo
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                           HitActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerCharacter_C::OnLastHitActorInfo(class AActor* HitActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "OnLastHitActorInfo");

	Params::BP_PlayerCharacter_C_OnLastHitActorInfo Parms{};

	Parms.HitActor = HitActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveUnsheatheByEquipType
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBWeaponEquipType                      EquipType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerCharacter_C::ReceiveUnsheatheByEquipType(ESBWeaponEquipType EquipType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "ReceiveUnsheatheByEquipType");

	Params::BP_PlayerCharacter_C_ReceiveUnsheatheByEquipType Parms{};

	Parms.EquipType = EquipType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveUnsheathe
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::ReceiveUnsheathe()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "ReceiveUnsheathe");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveSheathe
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::ReceiveSheathe()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "ReceiveSheathe");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnOtherPCMenuTargetLost
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::OnOtherPCMenuTargetLost()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "OnOtherPCMenuTargetLost");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ForceCloseOtherPCMenu
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::ForceCloseOtherPCMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "ForceCloseOtherPCMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnDead
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::OnDead()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "OnDead");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCloseOtherPCMenu
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::OnCloseOtherPCMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "OnCloseOtherPCMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TickMovingNoise
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerCharacter_C::TickMovingNoise(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "TickMovingNoise");

	Params::BP_PlayerCharacter_C_TickMovingNoise Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveEndInitialLoad
// (Event, Protected, BlueprintEvent)

void ABP_PlayerCharacter_C::ReceiveEndInitialLoad()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "ReceiveEndInitialLoad");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                      DamageType                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                      InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerCharacter_C::ReceiveAnyDamage(float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "ReceiveAnyDamage");

	Params::BP_PlayerCharacter_C_ReceiveAnyDamage Parms{};

	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerCharacter_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "ReceiveTick");

	Params::BP_PlayerCharacter_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCastSkill
// (Event, Protected, BlueprintEvent)
// Parameters:
// ESkillActionPosition                    Position                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerCharacter_C::OnCastSkill(const ESkillActionPosition Position)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "OnCastSkill");

	Params::BP_PlayerCharacter_C_OnCastSkill Parms{};

	Parms.Position = Position;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              HitComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_PlayerCharacter_C::BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	Params::BP_PlayerCharacter_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TryClientTravelWithFadeout
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           URL                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           Portal                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_PlayerCharacter_C::TryClientTravelWithFadeout(const class FString& URL, const class FString& Portal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "TryClientTravelWithFadeout");

	Params::BP_PlayerCharacter_C_TryClientTravelWithFadeout Parms{};

	Parms.URL = std::move(URL);
	Parms.Portal = std::move(Portal);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisEvt_DebugCameraMoveUp_K2Node_InputAxisEvent_20
// (BlueprintEvent)
// Parameters:
// float                                   AxisValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerCharacter_C::InpAxisEvt_DebugCameraMoveUp_K2Node_InputAxisEvent_20(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "InpAxisEvt_DebugCameraMoveUp_K2Node_InputAxisEvent_20");

	Params::BP_PlayerCharacter_C_InpAxisEvt_DebugCameraMoveUp_K2Node_InputAxisEvent_20 Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisEvt_DebugCameraMoveRight_K2Node_InputAxisEvent_17
// (BlueprintEvent)
// Parameters:
// float                                   AxisValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerCharacter_C::InpAxisEvt_DebugCameraMoveRight_K2Node_InputAxisEvent_17(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "InpAxisEvt_DebugCameraMoveRight_K2Node_InputAxisEvent_17");

	Params::BP_PlayerCharacter_C_InpAxisEvt_DebugCameraMoveRight_K2Node_InputAxisEvent_17 Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisEvt_DebugCameraMoveForWard_K2Node_InputAxisEvent_12
// (BlueprintEvent)
// Parameters:
// float                                   AxisValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerCharacter_C::InpAxisEvt_DebugCameraMoveForWard_K2Node_InputAxisEvent_12(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "InpAxisEvt_DebugCameraMoveForWard_K2Node_InputAxisEvent_12");

	Params::BP_PlayerCharacter_C_InpAxisEvt_DebugCameraMoveForWard_K2Node_InputAxisEvent_12 Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisEvt_DebugCameraLookUp_K2Node_InputAxisEvent_8
// (BlueprintEvent)
// Parameters:
// float                                   AxisValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerCharacter_C::InpAxisEvt_DebugCameraLookUp_K2Node_InputAxisEvent_8(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "InpAxisEvt_DebugCameraLookUp_K2Node_InputAxisEvent_8");

	Params::BP_PlayerCharacter_C_InpAxisEvt_DebugCameraLookUp_K2Node_InputAxisEvent_8 Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisEvt_DebugCameraLookRight_K2Node_InputAxisEvent_5
// (BlueprintEvent)
// Parameters:
// float                                   AxisValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerCharacter_C::InpAxisEvt_DebugCameraLookRight_K2Node_InputAxisEvent_5(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "InpAxisEvt_DebugCameraLookRight_K2Node_InputAxisEvent_5");

	Params::BP_PlayerCharacter_C_InpAxisEvt_DebugCameraLookRight_K2Node_InputAxisEvent_5 Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnDeadNotifyMessage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Param_Name                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_PlayerCharacter_C::OnDeadNotifyMessage(const class FText& Param_Name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "OnDeadNotifyMessage");

	Params::BP_PlayerCharacter_C_OnDeadNotifyMessage Parms{};

	Parms.Param_Name = std::move(Param_Name);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnSetInitialMiniMapInfo
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FSBPlayerMiniMapInfo             Info                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void ABP_PlayerCharacter_C::OnSetInitialMiniMapInfo(const struct FSBPlayerMiniMapInfo& Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "OnSetInitialMiniMapInfo");

	Params::BP_PlayerCharacter_C_OnSetInitialMiniMapInfo Parms{};

	Parms.Info = std::move(Info);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ShowHitIndicator
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVector                          InHitPosition                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           InDamageCauser                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerCharacter_C::ShowHitIndicator(const struct FVector& InHitPosition, class AActor* InDamageCauser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "ShowHitIndicator");

	Params::BP_PlayerCharacter_C_ShowHitIndicator Parms{};

	Parms.InHitPosition = std::move(InHitPosition);
	Parms.InDamageCauser = InDamageCauser;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveStateChange
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                           PreviousStateName                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           NextStateName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_PlayerCharacter_C::ReceiveStateChange(const class FString& PreviousStateName, const class FString& NextStateName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "ReceiveStateChange");

	Params::BP_PlayerCharacter_C_ReceiveStateChange Parms{};

	Parms.PreviousStateName = std::move(PreviousStateName);
	Parms.NextStateName = std::move(NextStateName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetOtherPCMenu
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::SetOtherPCMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "SetOtherPCMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnInteraction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           InOtherActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         ViewRotation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerCharacter_C::OnInteraction(class AActor* InOtherActor, const struct FRotator& ViewRotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "OnInteraction");

	Params::BP_PlayerCharacter_C_OnInteraction Parms{};

	Parms.InOtherActor = InOtherActor;
	Parms.ViewRotation = std::move(ViewRotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PlayerCharacter_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnDeathDelegate_����
// (BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::OnDeathDelegate_____()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "OnDeathDelegate_����");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_PlayerSpawnToDebugCamera_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PlayerCharacter_C::InpActEvt_PlayerSpawnToDebugCamera_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "InpActEvt_PlayerSpawnToDebugCamera_K2Node_InputActionEvent_0");

	Params::BP_PlayerCharacter_C_InpActEvt_PlayerSpawnToDebugCamera_K2Node_InputActionEvent_0 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_DebugMenu_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PlayerCharacter_C::InpActEvt_DebugMenu_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "InpActEvt_DebugMenu_K2Node_InputActionEvent_1");

	Params::BP_PlayerCharacter_C_InpActEvt_DebugMenu_K2Node_InputActionEvent_1 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_NumPadOne_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PlayerCharacter_C::InpActEvt_NumPadOne_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "InpActEvt_NumPadOne_K2Node_InputKeyEvent_0");

	Params::BP_PlayerCharacter_C_InpActEvt_NumPadOne_K2Node_InputKeyEvent_0 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_NumPadTwo_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PlayerCharacter_C::InpActEvt_NumPadTwo_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "InpActEvt_NumPadTwo_K2Node_InputKeyEvent_1");

	Params::BP_PlayerCharacter_C_InpActEvt_NumPadTwo_K2Node_InputKeyEvent_1 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_NumPadThree_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PlayerCharacter_C::InpActEvt_NumPadThree_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "InpActEvt_NumPadThree_K2Node_InputKeyEvent_2");

	Params::BP_PlayerCharacter_C_InpActEvt_NumPadThree_K2Node_InputKeyEvent_2 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_ReturnToPortalMap_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PlayerCharacter_C::InpActEvt_ReturnToPortalMap_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "InpActEvt_ReturnToPortalMap_K2Node_InputActionEvent_2");

	Params::BP_PlayerCharacter_C_InpActEvt_ReturnToPortalMap_K2Node_InputActionEvent_2 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_ReturnToPortalMap_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PlayerCharacter_C::InpActEvt_ReturnToPortalMap_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "InpActEvt_ReturnToPortalMap_K2Node_InputActionEvent_3");

	Params::BP_PlayerCharacter_C_InpActEvt_ReturnToPortalMap_K2Node_InputActionEvent_3 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateHairMaterial
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::UpdateHairMaterial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "UpdateHairMaterial");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Sheathe
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::Sheathe()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "Sheathe");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateAtGatheringPopup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::UpdateAtGatheringPopup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "UpdateAtGatheringPopup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.EnableAtGatheringPopup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnabled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerCharacter_C::EnableAtGatheringPopup(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "EnableAtGatheringPopup");

	Params::BP_PlayerCharacter_C_EnableAtGatheringPopup Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChangeLifeGaugeColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsHealChainColor                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerCharacter_C::ChangeLifeGaugeColor(bool IsHealChainColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "ChangeLifeGaugeColor");

	Params::BP_PlayerCharacter_C_ChangeLifeGaugeColor Parms{};

	Parms.IsHealChainColor = IsHealChainColor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OpenOtherPCMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBPlayerCharacter*               InOtherPC                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerCharacter_C::OpenOtherPCMenu(class ASBPlayerCharacter* InOtherPC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "OpenOtherPCMenu");

	Params::BP_PlayerCharacter_C_OpenOtherPCMenu Parms{};

	Parms.InOtherPC = InOtherPC;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.WeaponAnimationSheathe
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::WeaponAnimationSheathe()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "WeaponAnimationSheathe");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.WeaponAnimationUnsheathe
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::WeaponAnimationUnsheathe()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "WeaponAnimationUnsheathe");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DebugPrintEquipWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::DebugPrintEquipWeapon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "DebugPrintEquipWeapon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetSocketOffset
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             SocketName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Offset                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerCharacter_C::GetSocketOffset(class FName SocketName, struct FVector* Offset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "GetSocketOffset");

	Params::BP_PlayerCharacter_C_GetSocketOffset Parms{};

	Parms.SocketName = SocketName;

	UObject::ProcessEvent(Func, &Parms);

	if (Offset != nullptr)
		*Offset = std::move(Parms.Offset);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetWeaponSocketOffset
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             SocketName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Offset                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerCharacter_C::GetWeaponSocketOffset(class FName SocketName, struct FVector* Offset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "GetWeaponSocketOffset");

	Params::BP_PlayerCharacter_C_GetWeaponSocketOffset Parms{};

	Parms.SocketName = SocketName;

	UObject::ProcessEvent(Func, &Parms);

	if (Offset != nullptr)
		*Offset = std::move(Parms.Offset);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UnSheathe
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBWeaponEquipType                      EquipType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerCharacter_C::UnSheathe(ESBWeaponEquipType EquipType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "UnSheathe");

	Params::BP_PlayerCharacter_C_UnSheathe Parms{};

	Parms.EquipType = EquipType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InitEquipWeaponStatus
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                           OutEquipWeaponStatus                                   (Parm, OutParm)

void ABP_PlayerCharacter_C::InitEquipWeaponStatus(TArray<int32>* OutEquipWeaponStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "InitEquipWeaponStatus");

	Params::BP_PlayerCharacter_C_InitEquipWeaponStatus Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutEquipWeaponStatus != nullptr)
		*OutEquipWeaponStatus = std::move(Parms.OutEquipWeaponStatus);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Get Imagine Arts Voice Event
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*                    Event                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBAkEventLOD                           LOD                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerCharacter_C::Get_Imagine_Arts_Voice_Event(class UAkAudioEvent** Event, ESBAkEventLOD* LOD)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "Get Imagine Arts Voice Event");

	Params::BP_PlayerCharacter_C_Get_Imagine_Arts_Voice_Event Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Event != nullptr)
		*Event = Parms.Event;

	if (LOD != nullptr)
		*LOD = Parms.LOD;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CreateClassHUD
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerCharacter_C::CreateClassHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "CreateClassHUD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OffsetNamePlateLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsOffset                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   OffsetDistance                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerCharacter_C::OffsetNamePlateLocation(bool IsOffset, float OffsetDistance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "OffsetNamePlateLocation");

	Params::BP_PlayerCharacter_C_OffsetNamePlateLocation Parms{};

	Parms.IsOffset = IsOffset;
	Parms.OffsetDistance = OffsetDistance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DeadNotifyMessage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             DeadCharacterName                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_PlayerCharacter_C::DeadNotifyMessage(const class FText& DeadCharacterName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "DeadNotifyMessage");

	Params::BP_PlayerCharacter_C_DeadNotifyMessage Parms{};

	Parms.DeadCharacterName = std::move(DeadCharacterName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetDamageReaction
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FSBStunInfo                      StunInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// E_DamageReaction                        DamageReaction                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerCharacter_C::GetDamageReaction(const struct FSBStunInfo& StunInfo, E_DamageReaction* DamageReaction) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "GetDamageReaction");

	Params::BP_PlayerCharacter_C_GetDamageReaction Parms{};

	Parms.StunInfo = std::move(StunInfo);

	UObject::ProcessEvent(Func, &Parms);

	if (DamageReaction != nullptr)
		*DamageReaction = Parms.DamageReaction;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetEnemyStepJumpCollisionComponent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USphereComponent*                 ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USphereComponent* ABP_PlayerCharacter_C::GetEnemyStepJumpCollisionComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerCharacter_C", "GetEnemyStepJumpCollisionComponent");

	Params::BP_PlayerCharacter_C_GetEnemyStepJumpCollisionComponent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

