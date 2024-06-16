#pragma once

 

// Package: FallDeadTriggerBox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FallDeadTriggerBox.FallDeadTriggerBox_C
// 0x0020 (0x0250 - 0x0230)
class AFallDeadTriggerBox_C final : public ATriggerBox
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         MeshSize;                                          // 0x0240(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9A63[0x4];                                     // 0x0244(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerStart*                           BuddyStartPoint;                                   // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_FallDeadTriggerBox(int32 EntryPoint);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void UserConstructionScript();
	void SetStaticMeshScale();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FallDeadTriggerBox_C">();
	}
	static class AFallDeadTriggerBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFallDeadTriggerBox_C>();
	}
};
static_assert(alignof(AFallDeadTriggerBox_C) == 0x000008, "Wrong alignment on AFallDeadTriggerBox_C");
static_assert(sizeof(AFallDeadTriggerBox_C) == 0x000250, "Wrong size on AFallDeadTriggerBox_C");
static_assert(offsetof(AFallDeadTriggerBox_C, UberGraphFrame) == 0x000230, "Member 'AFallDeadTriggerBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AFallDeadTriggerBox_C, StaticMesh) == 0x000238, "Member 'AFallDeadTriggerBox_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(AFallDeadTriggerBox_C, MeshSize) == 0x000240, "Member 'AFallDeadTriggerBox_C::MeshSize' has a wrong offset!");
static_assert(offsetof(AFallDeadTriggerBox_C, BuddyStartPoint) == 0x000248, "Member 'AFallDeadTriggerBox_C::BuddyStartPoint' has a wrong offset!");

}

