#pragma once

 

// Package: NiagaraAnimNotifies

#include "Basic.hpp"

#include "NiagaraAnimNotifies_classes.hpp"
#include "NiagaraAnimNotifies_parameters.hpp"


namespace SDK
{

// Function NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect.GetSpawnedEffect
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UFXSystemComponent*               ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFXSystemComponent* UAnimNotify_PlayNiagaraEffect::GetSpawnedEffect() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotify_PlayNiagaraEffect", "GetSpawnedEffect");

	Params::AnimNotify_PlayNiagaraEffect_GetSpawnedEffect Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect.GetSpawnedEffect
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UMeshComponent*                   MeshComp                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFXSystemComponent*               ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFXSystemComponent* UAnimNotifyState_TimedNiagaraEffect::GetSpawnedEffect(class UMeshComponent* MeshComp) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotifyState_TimedNiagaraEffect", "GetSpawnedEffect");

	Params::AnimNotifyState_TimedNiagaraEffect_GetSpawnedEffect Parms{};

	Parms.MeshComp = MeshComp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced.GetNotifyProgress
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UMeshComponent*                   MeshComp                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAnimNotifyState_TimedNiagaraEffectAdvanced::GetNotifyProgress(class UMeshComponent* MeshComp) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotifyState_TimedNiagaraEffectAdvanced", "GetNotifyProgress");

	Params::AnimNotifyState_TimedNiagaraEffectAdvanced_GetNotifyProgress Parms{};

	Parms.MeshComp = MeshComp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
