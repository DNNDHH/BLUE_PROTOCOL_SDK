#pragma once

 

// Package: BP_LightSchedule

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "RandomLightScheduleParam_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LightSchedule.BP_LightSchedule_C
// 0x0060 (0x0288 - 0x0228)
class ABP_LightSchedule_C final : public ASBLightSchedule
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0228(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FRandomLightScheduleParam>      RandomLightScheduleParam;                          // 0x0238(0x0010)(Edit, BlueprintVisible)
	int32                                         RandomOffsetOn;                                    // 0x0248(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RandomOffsetOff;                                   // 0x024C(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ULightScheduleComponent_C*>      LightScheduleComponents;                           // 0x0250(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                         LightScheduleUpdateNum;                            // 0x0260(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LightScheduleUpdateCounter;                        // 0x0264(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LightScheduleUpdateLength;                         // 0x0268(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_97AD[0x4];                                     // 0x026C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class URandomLightMaterialScheduleComponent_C*> RandomLightMaterialComps;                          // 0x0270(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class ABP_DynamicSky_C*                       DynamicSky;                                        // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_LightSchedule(int32 EntryPoint);
	void InitEditorPreview(bool Sw);
	void LightScheduleCompInitialize();
	void ReceiveTick(float DeltaSeconds);
	void SetLightSchedule();
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void IsRandomLightMaterialCompInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LightSchedule_C">();
	}
	static class ABP_LightSchedule_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LightSchedule_C>();
	}
};
static_assert(alignof(ABP_LightSchedule_C) == 0x000008, "Wrong alignment on ABP_LightSchedule_C");
static_assert(sizeof(ABP_LightSchedule_C) == 0x000288, "Wrong size on ABP_LightSchedule_C");
static_assert(offsetof(ABP_LightSchedule_C, UberGraphFrame) == 0x000228, "Member 'ABP_LightSchedule_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_LightSchedule_C, DefaultSceneRoot) == 0x000230, "Member 'ABP_LightSchedule_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_LightSchedule_C, RandomLightScheduleParam) == 0x000238, "Member 'ABP_LightSchedule_C::RandomLightScheduleParam' has a wrong offset!");
static_assert(offsetof(ABP_LightSchedule_C, RandomOffsetOn) == 0x000248, "Member 'ABP_LightSchedule_C::RandomOffsetOn' has a wrong offset!");
static_assert(offsetof(ABP_LightSchedule_C, RandomOffsetOff) == 0x00024C, "Member 'ABP_LightSchedule_C::RandomOffsetOff' has a wrong offset!");
static_assert(offsetof(ABP_LightSchedule_C, LightScheduleComponents) == 0x000250, "Member 'ABP_LightSchedule_C::LightScheduleComponents' has a wrong offset!");
static_assert(offsetof(ABP_LightSchedule_C, LightScheduleUpdateNum) == 0x000260, "Member 'ABP_LightSchedule_C::LightScheduleUpdateNum' has a wrong offset!");
static_assert(offsetof(ABP_LightSchedule_C, LightScheduleUpdateCounter) == 0x000264, "Member 'ABP_LightSchedule_C::LightScheduleUpdateCounter' has a wrong offset!");
static_assert(offsetof(ABP_LightSchedule_C, LightScheduleUpdateLength) == 0x000268, "Member 'ABP_LightSchedule_C::LightScheduleUpdateLength' has a wrong offset!");
static_assert(offsetof(ABP_LightSchedule_C, RandomLightMaterialComps) == 0x000270, "Member 'ABP_LightSchedule_C::RandomLightMaterialComps' has a wrong offset!");
static_assert(offsetof(ABP_LightSchedule_C, DynamicSky) == 0x000280, "Member 'ABP_LightSchedule_C::DynamicSky' has a wrong offset!");

}

