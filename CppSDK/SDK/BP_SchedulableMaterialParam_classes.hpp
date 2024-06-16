#pragma once

 

// Package: BP_SchedulableMaterialParam

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SchedulableMaterialParam.BP_SchedulableMaterialParam_C
// 0x0070 (0x0298 - 0x0228)
class ABP_SchedulableMaterialParam_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0228(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ULightScheduleComponent_C*              LightScheduleComponent;                            // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TMap<class UMaterialInstance*, int32>         MaterialInstances;                                 // 0x0240(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          DebugDraw;                                         // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_BP_SchedulableMaterialParam(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void StartRoutine(TArray<class UMaterialInstance*>& SourceMaterial, class FName ParameterName, float Intencity, float Duration, int32 SwitchOnTime, int32 SwitchOffTime);
	void GetVariableMaterialInstance(class UMaterialInstance* SourceMaterial, class UMaterialInstanceDynamic** MaterialInstanceDynamic);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SchedulableMaterialParam_C">();
	}
	static class ABP_SchedulableMaterialParam_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SchedulableMaterialParam_C>();
	}
};
static_assert(alignof(ABP_SchedulableMaterialParam_C) == 0x000008, "Wrong alignment on ABP_SchedulableMaterialParam_C");
static_assert(sizeof(ABP_SchedulableMaterialParam_C) == 0x000298, "Wrong size on ABP_SchedulableMaterialParam_C");
static_assert(offsetof(ABP_SchedulableMaterialParam_C, UberGraphFrame) == 0x000228, "Member 'ABP_SchedulableMaterialParam_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_SchedulableMaterialParam_C, LightScheduleComponent) == 0x000230, "Member 'ABP_SchedulableMaterialParam_C::LightScheduleComponent' has a wrong offset!");
static_assert(offsetof(ABP_SchedulableMaterialParam_C, DefaultSceneRoot) == 0x000238, "Member 'ABP_SchedulableMaterialParam_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_SchedulableMaterialParam_C, MaterialInstances) == 0x000240, "Member 'ABP_SchedulableMaterialParam_C::MaterialInstances' has a wrong offset!");
static_assert(offsetof(ABP_SchedulableMaterialParam_C, DebugDraw) == 0x000290, "Member 'ABP_SchedulableMaterialParam_C::DebugDraw' has a wrong offset!");

}

