#pragma once

 

// Package: MeshClimbingGuideComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MeshClimbingGuideComponent.MeshClimbingGuideComponent_C
// 0x0018 (0x00D0 - 0x00B8)
class UMeshClimbingGuideComponent_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointClimbingClimbingPoint_C*          PointIconWidget;                                   // 0x00C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMeshClimbingComponent*               _____;                                             // 0x00C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MeshClimbingGuideComponent(int32 EntryPoint);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void UpdateIcon();
	void UpdateIcon_Climbing();
	void RemoveWidgets();
	void InitializeAtFirstLoadingComplete();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MeshClimbingGuideComponent_C">();
	}
	static class UMeshClimbingGuideComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMeshClimbingGuideComponent_C>();
	}
};
static_assert(alignof(UMeshClimbingGuideComponent_C) == 0x000008, "Wrong alignment on UMeshClimbingGuideComponent_C");
static_assert(sizeof(UMeshClimbingGuideComponent_C) == 0x0000D0, "Wrong size on UMeshClimbingGuideComponent_C");
static_assert(offsetof(UMeshClimbingGuideComponent_C, UberGraphFrame) == 0x0000B8, "Member 'UMeshClimbingGuideComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMeshClimbingGuideComponent_C, PointIconWidget) == 0x0000C0, "Member 'UMeshClimbingGuideComponent_C::PointIconWidget' has a wrong offset!");
static_assert(offsetof(UMeshClimbingGuideComponent_C, _____) == 0x0000C8, "Member 'UMeshClimbingGuideComponent_C::_____' has a wrong offset!");

}

