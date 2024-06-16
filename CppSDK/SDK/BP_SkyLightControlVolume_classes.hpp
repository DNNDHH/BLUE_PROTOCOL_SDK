#pragma once

 

// Package: BP_SkyLightControlVolume

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SkyLightControlVolume.BP_SkyLightControlVolume_C
// 0x0058 (0x0280 - 0x0228)
class ABP_SkyLightControlVolume_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0228(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Box;                                               // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_DynamicSky_C*                       DynamicSky;                                        // 0x0238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DefaultSet;                                        // 0x0240(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          UseCurveF;                                         // 0x0241(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8939[0x2];                                     // 0x0242(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LerpTime;                                          // 0x0244(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LightIntensityScale;                               // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LightColorScale;                                   // 0x024C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ToonIntensityScaleOverride;                        // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ToonSaturationScaleOverride;                       // 0x0254(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EditorPreview;                                     // 0x0258(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_893A[0x7];                                     // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveLinearColor*                      SkyLightColorOverride;                             // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            SkyLightIntensityOverride;                         // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            SkyLightToonIntensityScaleOverride;                // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            SkyLightToonSaturationScaleOverride;               // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SkyLightControlVolume(int32 EntryPoint);
	void SkyLightControlEnable();
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void SetAllPrimCollisions(class FName CollisionProfileName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkyLightControlVolume_C">();
	}
	static class ABP_SkyLightControlVolume_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkyLightControlVolume_C>();
	}
};
static_assert(alignof(ABP_SkyLightControlVolume_C) == 0x000008, "Wrong alignment on ABP_SkyLightControlVolume_C");
static_assert(sizeof(ABP_SkyLightControlVolume_C) == 0x000280, "Wrong size on ABP_SkyLightControlVolume_C");
static_assert(offsetof(ABP_SkyLightControlVolume_C, UberGraphFrame) == 0x000228, "Member 'ABP_SkyLightControlVolume_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_SkyLightControlVolume_C, Box) == 0x000230, "Member 'ABP_SkyLightControlVolume_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_SkyLightControlVolume_C, DynamicSky) == 0x000238, "Member 'ABP_SkyLightControlVolume_C::DynamicSky' has a wrong offset!");
static_assert(offsetof(ABP_SkyLightControlVolume_C, DefaultSet) == 0x000240, "Member 'ABP_SkyLightControlVolume_C::DefaultSet' has a wrong offset!");
static_assert(offsetof(ABP_SkyLightControlVolume_C, UseCurveF) == 0x000241, "Member 'ABP_SkyLightControlVolume_C::UseCurveF' has a wrong offset!");
static_assert(offsetof(ABP_SkyLightControlVolume_C, LerpTime) == 0x000244, "Member 'ABP_SkyLightControlVolume_C::LerpTime' has a wrong offset!");
static_assert(offsetof(ABP_SkyLightControlVolume_C, LightIntensityScale) == 0x000248, "Member 'ABP_SkyLightControlVolume_C::LightIntensityScale' has a wrong offset!");
static_assert(offsetof(ABP_SkyLightControlVolume_C, LightColorScale) == 0x00024C, "Member 'ABP_SkyLightControlVolume_C::LightColorScale' has a wrong offset!");
static_assert(offsetof(ABP_SkyLightControlVolume_C, ToonIntensityScaleOverride) == 0x000250, "Member 'ABP_SkyLightControlVolume_C::ToonIntensityScaleOverride' has a wrong offset!");
static_assert(offsetof(ABP_SkyLightControlVolume_C, ToonSaturationScaleOverride) == 0x000254, "Member 'ABP_SkyLightControlVolume_C::ToonSaturationScaleOverride' has a wrong offset!");
static_assert(offsetof(ABP_SkyLightControlVolume_C, EditorPreview) == 0x000258, "Member 'ABP_SkyLightControlVolume_C::EditorPreview' has a wrong offset!");
static_assert(offsetof(ABP_SkyLightControlVolume_C, SkyLightColorOverride) == 0x000260, "Member 'ABP_SkyLightControlVolume_C::SkyLightColorOverride' has a wrong offset!");
static_assert(offsetof(ABP_SkyLightControlVolume_C, SkyLightIntensityOverride) == 0x000268, "Member 'ABP_SkyLightControlVolume_C::SkyLightIntensityOverride' has a wrong offset!");
static_assert(offsetof(ABP_SkyLightControlVolume_C, SkyLightToonIntensityScaleOverride) == 0x000270, "Member 'ABP_SkyLightControlVolume_C::SkyLightToonIntensityScaleOverride' has a wrong offset!");
static_assert(offsetof(ABP_SkyLightControlVolume_C, SkyLightToonSaturationScaleOverride) == 0x000278, "Member 'ABP_SkyLightControlVolume_C::SkyLightToonSaturationScaleOverride' has a wrong offset!");

}

