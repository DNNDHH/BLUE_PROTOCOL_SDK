#pragma once

 

// Package: BP_FogControl

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "FogControlParam_structs.hpp"
#include "VolumetricFogControlParam_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FogControl.BP_FogControl_C
// 0x01B8 (0x03E0 - 0x0228)
class ABP_FogControl_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0228(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Lerp_lerp_0137B76D4433A6D16A5A39AD74210D4B;        // 0x0238(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Lerp__Direction_0137B76D4433A6D16A5A39AD74210D4B;  // 0x023C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_989A[0x3];                                     // 0x023D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Lerp;                                              // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_DynamicSky_C*                       DynamicSky;                                        // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AExponentialHeightFog*                  Fog;                                               // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SkyUseCurve_F;                                     // 0x0258(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          UseCurve_F;                                        // 0x0259(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_989B[0x2];                                     // 0x025A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFogControlParam                       FogControlParamDefault;                            // 0x025C(0x0040)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFogControlParam                       FogControlParamSource;                             // 0x029C(0x0040)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_989C[0x4];                                     // 0x02DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_FogControlVolume_C*                 CurrentFogControlVolume;                           // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Alpha;                                             // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Changing;                                          // 0x02EC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_989D[0x3];                                     // 0x02ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFogControlParam                       FogControlParamTarget;                             // 0x02F0(0x0040)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Initialized;                                       // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_989E[0x3];                                     // 0x0331(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVolumetricFogControlParam             VolumetricFogControlParamDefault;                  // 0x0334(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVolumetricFogControlParam             VolumetricFogControlParamSource;                   // 0x035C(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVolumetricFogControlParam             VolumetricFogControlParamTarget;                   // 0x0384(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FogHeightDefalut;                                  // 0x03AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FogHeightSource;                                   // 0x03B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FogHeightTarget;                                   // 0x03B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_FogControlVolume_C*>         FogControlVolumes;                                 // 0x03B8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	float                                         ShadowDistanceDefault;                             // 0x03C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ShadowDistanceSource;                              // 0x03CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ShadowDistanceTarget;                              // 0x03D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FogFollowingPlayerHeight;                          // 0x03D4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_989F[0x3];                                     // 0x03D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FogFollowingPlayerHeightOffset;                    // 0x03D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_FogControl(int32 EntryPoint);
	void SetCurrentParam();
	void StartFogControl(class ABP_FogControlVolume_C* ControlVolume, float Time);
	void ReceiveBeginPlay();
	void Lerp__UpdateFunc();
	void Lerp__FinishedFunc();
	void UpdateFogForDynamicSky(float InTime, const struct FFogControlCurveParam& CurveParam, const struct FVolumetricFogControlParam& VolumetricParam, float HueShift, float Saturation_Scale, float Color_Value_Scale);
	void AddActivatedVolume(class ABP_FogControlVolume_C* FogControlVolume);
	void RemoveVolume(class ABP_FogControlVolume_C* FogControlVolume, class ABP_FogControlVolume_C** PrimeVolume);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FogControl_C">();
	}
	static class ABP_FogControl_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FogControl_C>();
	}
};
static_assert(alignof(ABP_FogControl_C) == 0x000008, "Wrong alignment on ABP_FogControl_C");
static_assert(sizeof(ABP_FogControl_C) == 0x0003E0, "Wrong size on ABP_FogControl_C");
static_assert(offsetof(ABP_FogControl_C, UberGraphFrame) == 0x000228, "Member 'ABP_FogControl_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_FogControl_C, DefaultSceneRoot) == 0x000230, "Member 'ABP_FogControl_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_FogControl_C, Lerp_lerp_0137B76D4433A6D16A5A39AD74210D4B) == 0x000238, "Member 'ABP_FogControl_C::Lerp_lerp_0137B76D4433A6D16A5A39AD74210D4B' has a wrong offset!");
static_assert(offsetof(ABP_FogControl_C, Lerp__Direction_0137B76D4433A6D16A5A39AD74210D4B) == 0x00023C, "Member 'ABP_FogControl_C::Lerp__Direction_0137B76D4433A6D16A5A39AD74210D4B' has a wrong offset!");
static_assert(offsetof(ABP_FogControl_C, Lerp) == 0x000240, "Member 'ABP_FogControl_C::Lerp' has a wrong offset!");
static_assert(offsetof(ABP_FogControl_C, DynamicSky) == 0x000248, "Member 'ABP_FogControl_C::DynamicSky' has a wrong offset!");
static_assert(offsetof(ABP_FogControl_C, Fog) == 0x000250, "Member 'ABP_FogControl_C::Fog' has a wrong offset!");
static_assert(offsetof(ABP_FogControl_C, SkyUseCurve_F) == 0x000258, "Member 'ABP_FogControl_C::SkyUseCurve_F' has a wrong offset!");
static_assert(offsetof(ABP_FogControl_C, UseCurve_F) == 0x000259, "Member 'ABP_FogControl_C::UseCurve_F' has a wrong offset!");
static_assert(offsetof(ABP_FogControl_C, FogControlParamDefault) == 0x00025C, "Member 'ABP_FogControl_C::FogControlParamDefault' has a wrong offset!");
static_assert(offsetof(ABP_FogControl_C, FogControlParamSource) == 0x00029C, "Member 'ABP_FogControl_C::FogControlParamSource' has a wrong offset!");
static_assert(offsetof(ABP_FogControl_C, CurrentFogControlVolume) == 0x0002E0, "Member 'ABP_FogControl_C::CurrentFogControlVolume' has a wrong offset!");
static_assert(offsetof(ABP_FogControl_C, Alpha) == 0x0002E8, "Member 'ABP_FogControl_C::Alpha' has a wrong offset!");
static_assert(offsetof(ABP_FogControl_C, Changing) == 0x0002EC, "Member 'ABP_FogControl_C::Changing' has a wrong offset!");
static_assert(offsetof(ABP_FogControl_C, FogControlParamTarget) == 0x0002F0, "Member 'ABP_FogControl_C::FogControlParamTarget' has a wrong offset!");
static_assert(offsetof(ABP_FogControl_C, Initialized) == 0x000330, "Member 'ABP_FogControl_C::Initialized' has a wrong offset!");
static_assert(offsetof(ABP_FogControl_C, VolumetricFogControlParamDefault) == 0x000334, "Member 'ABP_FogControl_C::VolumetricFogControlParamDefault' has a wrong offset!");
static_assert(offsetof(ABP_FogControl_C, VolumetricFogControlParamSource) == 0x00035C, "Member 'ABP_FogControl_C::VolumetricFogControlParamSource' has a wrong offset!");
static_assert(offsetof(ABP_FogControl_C, VolumetricFogControlParamTarget) == 0x000384, "Member 'ABP_FogControl_C::VolumetricFogControlParamTarget' has a wrong offset!");
static_assert(offsetof(ABP_FogControl_C, FogHeightDefalut) == 0x0003AC, "Member 'ABP_FogControl_C::FogHeightDefalut' has a wrong offset!");
static_assert(offsetof(ABP_FogControl_C, FogHeightSource) == 0x0003B0, "Member 'ABP_FogControl_C::FogHeightSource' has a wrong offset!");
static_assert(offsetof(ABP_FogControl_C, FogHeightTarget) == 0x0003B4, "Member 'ABP_FogControl_C::FogHeightTarget' has a wrong offset!");
static_assert(offsetof(ABP_FogControl_C, FogControlVolumes) == 0x0003B8, "Member 'ABP_FogControl_C::FogControlVolumes' has a wrong offset!");
static_assert(offsetof(ABP_FogControl_C, ShadowDistanceDefault) == 0x0003C8, "Member 'ABP_FogControl_C::ShadowDistanceDefault' has a wrong offset!");
static_assert(offsetof(ABP_FogControl_C, ShadowDistanceSource) == 0x0003CC, "Member 'ABP_FogControl_C::ShadowDistanceSource' has a wrong offset!");
static_assert(offsetof(ABP_FogControl_C, ShadowDistanceTarget) == 0x0003D0, "Member 'ABP_FogControl_C::ShadowDistanceTarget' has a wrong offset!");
static_assert(offsetof(ABP_FogControl_C, FogFollowingPlayerHeight) == 0x0003D4, "Member 'ABP_FogControl_C::FogFollowingPlayerHeight' has a wrong offset!");
static_assert(offsetof(ABP_FogControl_C, FogFollowingPlayerHeightOffset) == 0x0003D8, "Member 'ABP_FogControl_C::FogFollowingPlayerHeightOffset' has a wrong offset!");

}

