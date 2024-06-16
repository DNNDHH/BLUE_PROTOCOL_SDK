#pragma once

 

// Package: RandomLightMaterialScheduleComponent

#include "Basic.hpp"

#include "RandomLightMaterialScheduleComponent_classes.hpp"
#include "RandomLightMaterialScheduleComponent_parameters.hpp"


namespace SDK
{

// Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.Loop Up__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void URandomLightMaterialScheduleComponent_C::Loop_Up__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RandomLightMaterialScheduleComponent_C", "Loop Up__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.ExecuteUbergraph_RandomLightMaterialScheduleComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URandomLightMaterialScheduleComponent_C::ExecuteUbergraph_RandomLightMaterialScheduleComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RandomLightMaterialScheduleComponent_C", "ExecuteUbergraph_RandomLightMaterialScheduleComponent");

	Params::RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.InitializeRandomLightMaterials
// (BlueprintCallable, BlueprintEvent)

void URandomLightMaterialScheduleComponent_C::InitializeRandomLightMaterials()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RandomLightMaterialScheduleComponent_C", "InitializeRandomLightMaterials");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.RewriteMaterialsCore
// (Event, Public, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*             MeshComp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*                TargetMaterial                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Idx                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URandomLightMaterialScheduleComponent_C::RewriteMaterialsCore(class UStaticMeshComponent* MeshComp, class UMaterialInstance* TargetMaterial, int32 Idx)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RandomLightMaterialScheduleComponent_C", "RewriteMaterialsCore");

	Params::RandomLightMaterialScheduleComponent_C_RewriteMaterialsCore Parms{};

	Parms.MeshComp = MeshComp;
	Parms.TargetMaterial = TargetMaterial;
	Parms.Idx = Idx;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.SetRandomSchedule
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void URandomLightMaterialScheduleComponent_C::SetRandomSchedule()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RandomLightMaterialScheduleComponent_C", "SetRandomSchedule");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.RewriteMaterials
// (BlueprintCallable, BlueprintEvent)

void URandomLightMaterialScheduleComponent_C::RewriteMaterials()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RandomLightMaterialScheduleComponent_C", "RewriteMaterials");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.SpawnScheduledMaterialActors
// (BlueprintCallable, BlueprintEvent)

void URandomLightMaterialScheduleComponent_C::SpawnScheduledMaterialActors()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RandomLightMaterialScheduleComponent_C", "SpawnScheduledMaterialActors");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void URandomLightMaterialScheduleComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RandomLightMaterialScheduleComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.OnRep_ScheduledMaterialLight
// (BlueprintCallable, BlueprintEvent)

void URandomLightMaterialScheduleComponent_C::OnRep_ScheduledMaterialLight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RandomLightMaterialScheduleComponent_C", "OnRep_ScheduledMaterialLight");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.EditorPreview
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   TimeRate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Preview                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 URandomLightMaterialScheduleComponent_C::EditorPreview(float TimeRate, bool Preview)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RandomLightMaterialScheduleComponent_C", "EditorPreview");

	Params::RandomLightMaterialScheduleComponent_C_EditorPreview Parms{};

	Parms.TimeRate = TimeRate;
	Parms.Preview = Preview;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.InitEditorPreview
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Sw                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URandomLightMaterialScheduleComponent_C::InitEditorPreview(bool Sw)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RandomLightMaterialScheduleComponent_C", "InitEditorPreview");

	Params::RandomLightMaterialScheduleComponent_C_InitEditorPreview Parms{};

	Parms.Sw = Sw;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.CalcPreviewFade
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   NowTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   FadeStart                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Duration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Sw                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Available                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   Rate                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URandomLightMaterialScheduleComponent_C::CalcPreviewFade(float NowTime, float FadeStart, float Duration, bool Sw, bool* Available, float* Rate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RandomLightMaterialScheduleComponent_C", "CalcPreviewFade");

	Params::RandomLightMaterialScheduleComponent_C_CalcPreviewFade Parms{};

	Parms.NowTime = NowTime;
	Parms.FadeStart = FadeStart;
	Parms.Duration = Duration;
	Parms.Sw = Sw;

	UObject::ProcessEvent(Func, &Parms);

	if (Available != nullptr)
		*Available = Parms.Available;

	if (Rate != nullptr)
		*Rate = Parms.Rate;
}


// Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.FindDecalsMaterial
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDecalComponent*                  DecalComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*                TargetMaterial                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Idx                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*         ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UMaterialInstanceDynamic* URandomLightMaterialScheduleComponent_C::FindDecalsMaterial(class UDecalComponent* DecalComp, class UMaterialInstance* TargetMaterial, int32 Idx)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RandomLightMaterialScheduleComponent_C", "FindDecalsMaterial");

	Params::RandomLightMaterialScheduleComponent_C_FindDecalsMaterial Parms{};

	Parms.DecalComp = DecalComp;
	Parms.TargetMaterial = TargetMaterial;
	Parms.Idx = Idx;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

