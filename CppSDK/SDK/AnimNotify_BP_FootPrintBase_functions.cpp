#pragma once

 

// Package: AnimNotify_BP_FootPrintBase

#include "Basic.hpp"

#include "AnimNotify_BP_FootPrintBase_classes.hpp"
#include "AnimNotify_BP_FootPrintBase_parameters.hpp"


namespace SDK
{

// Function AnimNotify_BP_FootPrintBase.AnimNotify_BP_FootPrintBase_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*           MeshComp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*                Animation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UAnimNotify_BP_FootPrintBase_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotify_BP_FootPrintBase_C", "Received_Notify");

	Params::AnimNotify_BP_FootPrintBase_C_Received_Notify Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function AnimNotify_BP_FootPrintBase.AnimNotify_BP_FootPrintBase_C.CreateFootprint
// (Private, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USBSurfaceFootprintSetting*       FootprintSetting                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USBFootprintComponent*            FPComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                                   SurfaceType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Rotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAnimNotify_BP_FootPrintBase_C::CreateFootprint(class USBSurfaceFootprintSetting* FootprintSetting, class AActor* Actor, class USBFootprintComponent* FPComponent, uint8 SurfaceType, const struct FVector& Location, const struct FRotator& Rotation) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotify_BP_FootPrintBase_C", "CreateFootprint");

	Params::AnimNotify_BP_FootPrintBase_C_CreateFootprint Parms{};

	Parms.FootprintSetting = FootprintSetting;
	Parms.Actor = Actor;
	Parms.FPComponent = FPComponent;
	Parms.SurfaceType = SurfaceType;
	Parms.Location = std::move(Location);
	Parms.Rotation = std::move(Rotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AnimNotify_BP_FootPrintBase.AnimNotify_BP_FootPrintBase_C.Proc
// (Protected, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*           MeshComp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*                Animation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimNotify_BP_FootPrintBase_C::Proc(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotify_BP_FootPrintBase_C", "Proc");

	Params::AnimNotify_BP_FootPrintBase_C_Proc Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AnimNotify_BP_FootPrintBase.AnimNotify_BP_FootPrintBase_C.GetFootprintType
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USBFootprintComponent*            FPComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFootPrintType                          FootPrintType                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimNotify_BP_FootPrintBase_C::GetFootprintType(class USBFootprintComponent* FPComponent, EFootPrintType* FootPrintType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotify_BP_FootPrintBase_C", "GetFootprintType");

	Params::AnimNotify_BP_FootPrintBase_C_GetFootprintType Parms{};

	Parms.FPComponent = FPComponent;

	UObject::ProcessEvent(Func, &Parms);

	if (FootPrintType != nullptr)
		*FootPrintType = Parms.FootPrintType;
}


// Function AnimNotify_BP_FootPrintBase.AnimNotify_BP_FootPrintBase_C.GetSocketName
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USBFootprintComponent*            FPComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             SocketName                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimNotify_BP_FootPrintBase_C::GetSocketName(class USBFootprintComponent* FPComponent, class FName* SocketName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotify_BP_FootPrintBase_C", "GetSocketName");

	Params::AnimNotify_BP_FootPrintBase_C_GetSocketName Parms{};

	Parms.FPComponent = FPComponent;

	UObject::ProcessEvent(Func, &Parms);

	if (SocketName != nullptr)
		*SocketName = Parms.SocketName;
}


// Function AnimNotify_BP_FootPrintBase.AnimNotify_BP_FootPrintBase_C.IsDisableEffect
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UAnimNotify_BP_FootPrintBase_C::IsDisableEffect() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotify_BP_FootPrintBase_C", "IsDisableEffect");

	Params::AnimNotify_BP_FootPrintBase_C_IsDisableEffect Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function AnimNotify_BP_FootPrintBase.AnimNotify_BP_FootPrintBase_C.IsDisableSound
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UAnimNotify_BP_FootPrintBase_C::IsDisableSound() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotify_BP_FootPrintBase_C", "IsDisableSound");

	Params::AnimNotify_BP_FootPrintBase_C_IsDisableSound Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function AnimNotify_BP_FootPrintBase.AnimNotify_BP_FootPrintBase_C.IsLocomotion
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UAnimNotify_BP_FootPrintBase_C::IsLocomotion() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotify_BP_FootPrintBase_C", "IsLocomotion");

	Params::AnimNotify_BP_FootPrintBase_C_IsLocomotion Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

