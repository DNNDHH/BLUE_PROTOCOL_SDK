#pragma once

 

// Package: BP_ExtraFoothold

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ExtraFoothold.BP_ExtraFoothold_C
// 0x0070 (0x0298 - 0x0228)
class ABP_ExtraFoothold_C final : public ASBExtraFootHold
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0228(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   StepComp;                                          // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Step;                                              // 0x0238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerCharacter_C*                  TmpLocalPlayer;                                    // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TmpDeltaTime;                                      // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         GroundTimer;                                       // 0x024C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ZeroFallTimer;                                     // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HeightRecordTimer;                                 // 0x0254(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PlayerHeight;                                      // 0x0258(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Falling;                                           // 0x025C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4567[0x3];                                     // 0x025D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector2D>                      PlayerHeightHist;                                  // 0x0260(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          DebugDraw;                                         // 0x0270(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_4568[0x3];                                     // 0x0271(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         BadFallCheckCount;                                 // 0x0274(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BadFallCheckTime;                                  // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BadFallThreshold;                                  // 0x027C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ZeroFallCheckTime;                                 // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DebugFlyMode;                                      // 0x0284(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4569[0x3];                                     // 0x0285(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FallAttackInterval;                                // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DbgF;                                              // 0x028C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_456A[0x3];                                     // 0x028D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         HeightScale;                                       // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ExtraFoothold(int32 EntryPoint);
	void ReceiveBeginPlay();
	void DebugFlyinStatusChange();
	void ReceiveTick(float DeltaSeconds);
	void CheckWarning();
	void SetStep();
	void HideStep();
	void GetLocalPlayer(class ABP_PlayerCharacter_C** LocalPlayerCharacter);
	void BadFallingSurvey(bool* SetStep);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ExtraFoothold_C">();
	}
	static class ABP_ExtraFoothold_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ExtraFoothold_C>();
	}
};
static_assert(alignof(ABP_ExtraFoothold_C) == 0x000008, "Wrong alignment on ABP_ExtraFoothold_C");
static_assert(sizeof(ABP_ExtraFoothold_C) == 0x000298, "Wrong size on ABP_ExtraFoothold_C");
static_assert(offsetof(ABP_ExtraFoothold_C, UberGraphFrame) == 0x000228, "Member 'ABP_ExtraFoothold_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ExtraFoothold_C, StepComp) == 0x000230, "Member 'ABP_ExtraFoothold_C::StepComp' has a wrong offset!");
static_assert(offsetof(ABP_ExtraFoothold_C, Step) == 0x000238, "Member 'ABP_ExtraFoothold_C::Step' has a wrong offset!");
static_assert(offsetof(ABP_ExtraFoothold_C, TmpLocalPlayer) == 0x000240, "Member 'ABP_ExtraFoothold_C::TmpLocalPlayer' has a wrong offset!");
static_assert(offsetof(ABP_ExtraFoothold_C, TmpDeltaTime) == 0x000248, "Member 'ABP_ExtraFoothold_C::TmpDeltaTime' has a wrong offset!");
static_assert(offsetof(ABP_ExtraFoothold_C, GroundTimer) == 0x00024C, "Member 'ABP_ExtraFoothold_C::GroundTimer' has a wrong offset!");
static_assert(offsetof(ABP_ExtraFoothold_C, ZeroFallTimer) == 0x000250, "Member 'ABP_ExtraFoothold_C::ZeroFallTimer' has a wrong offset!");
static_assert(offsetof(ABP_ExtraFoothold_C, HeightRecordTimer) == 0x000254, "Member 'ABP_ExtraFoothold_C::HeightRecordTimer' has a wrong offset!");
static_assert(offsetof(ABP_ExtraFoothold_C, PlayerHeight) == 0x000258, "Member 'ABP_ExtraFoothold_C::PlayerHeight' has a wrong offset!");
static_assert(offsetof(ABP_ExtraFoothold_C, Falling) == 0x00025C, "Member 'ABP_ExtraFoothold_C::Falling' has a wrong offset!");
static_assert(offsetof(ABP_ExtraFoothold_C, PlayerHeightHist) == 0x000260, "Member 'ABP_ExtraFoothold_C::PlayerHeightHist' has a wrong offset!");
static_assert(offsetof(ABP_ExtraFoothold_C, DebugDraw) == 0x000270, "Member 'ABP_ExtraFoothold_C::DebugDraw' has a wrong offset!");
static_assert(offsetof(ABP_ExtraFoothold_C, BadFallCheckCount) == 0x000274, "Member 'ABP_ExtraFoothold_C::BadFallCheckCount' has a wrong offset!");
static_assert(offsetof(ABP_ExtraFoothold_C, BadFallCheckTime) == 0x000278, "Member 'ABP_ExtraFoothold_C::BadFallCheckTime' has a wrong offset!");
static_assert(offsetof(ABP_ExtraFoothold_C, BadFallThreshold) == 0x00027C, "Member 'ABP_ExtraFoothold_C::BadFallThreshold' has a wrong offset!");
static_assert(offsetof(ABP_ExtraFoothold_C, ZeroFallCheckTime) == 0x000280, "Member 'ABP_ExtraFoothold_C::ZeroFallCheckTime' has a wrong offset!");
static_assert(offsetof(ABP_ExtraFoothold_C, DebugFlyMode) == 0x000284, "Member 'ABP_ExtraFoothold_C::DebugFlyMode' has a wrong offset!");
static_assert(offsetof(ABP_ExtraFoothold_C, FallAttackInterval) == 0x000288, "Member 'ABP_ExtraFoothold_C::FallAttackInterval' has a wrong offset!");
static_assert(offsetof(ABP_ExtraFoothold_C, DbgF) == 0x00028C, "Member 'ABP_ExtraFoothold_C::DbgF' has a wrong offset!");
static_assert(offsetof(ABP_ExtraFoothold_C, HeightScale) == 0x000290, "Member 'ABP_ExtraFoothold_C::HeightScale' has a wrong offset!");

}

