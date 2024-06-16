#pragma once

 

// Package: BP_IndoorLightSchedule

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_IndoorLightSchedule.BP_IndoorLightSchedule_C
// 0x0040 (0x0268 - 0x0228)
class ABP_IndoorLightSchedule_C final : public ASBIndoorLightSchedule
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0228(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_IndoorLightScheduleComponent_C*     BP_IndoorLightScheduleComponent;                   // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         PreviewTestTime;                                   // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_997D[0x4];                                     // 0x024C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMeshComponent*>                 MeshComponents;                                    // 0x0250(0x0010)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          EditorPreviewF;                                    // 0x0260(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_IndoorLightSchedule(int32 EntryPoint);
	void InitTickInterval();
	void InDoorTickIntervalSet(ESBDebugMenuType MenuType, class FName RowName);
	void InitEditorPreview(bool Sw);
	void PreviewTest();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_IndoorLightSchedule_C">();
	}
	static class ABP_IndoorLightSchedule_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_IndoorLightSchedule_C>();
	}
};
static_assert(alignof(ABP_IndoorLightSchedule_C) == 0x000008, "Wrong alignment on ABP_IndoorLightSchedule_C");
static_assert(sizeof(ABP_IndoorLightSchedule_C) == 0x000268, "Wrong size on ABP_IndoorLightSchedule_C");
static_assert(offsetof(ABP_IndoorLightSchedule_C, UberGraphFrame) == 0x000228, "Member 'ABP_IndoorLightSchedule_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_IndoorLightSchedule_C, BP_IndoorLightScheduleComponent) == 0x000230, "Member 'ABP_IndoorLightSchedule_C::BP_IndoorLightScheduleComponent' has a wrong offset!");
static_assert(offsetof(ABP_IndoorLightSchedule_C, Box) == 0x000238, "Member 'ABP_IndoorLightSchedule_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_IndoorLightSchedule_C, DefaultSceneRoot) == 0x000240, "Member 'ABP_IndoorLightSchedule_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_IndoorLightSchedule_C, PreviewTestTime) == 0x000248, "Member 'ABP_IndoorLightSchedule_C::PreviewTestTime' has a wrong offset!");
static_assert(offsetof(ABP_IndoorLightSchedule_C, MeshComponents) == 0x000250, "Member 'ABP_IndoorLightSchedule_C::MeshComponents' has a wrong offset!");
static_assert(offsetof(ABP_IndoorLightSchedule_C, EditorPreviewF) == 0x000260, "Member 'ABP_IndoorLightSchedule_C::EditorPreviewF' has a wrong offset!");

}

