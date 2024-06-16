#pragma once

 

// Package: BP_DirectionalLightControlVolume

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C
// 0x00A8 (0x02D0 - 0x0228)
class ABP_DirectionalLightControlVolume_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0228(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Box;                                               // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            LightIntensityCurve;                               // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                      LightColorCurve;                                   // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           LightColor;                                        // 0x0250(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LightIntensity;                                    // 0x0260(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9835[0x4];                                     // 0x0264(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            ToonIntensityScaleCurve;                           // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ToonIntensityScale;                                // 0x0270(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BlendValue;                                        // 0x0274(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ReflectedBlendValue;                               // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SkyLight;                                          // 0x027C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9836[0x3];                                     // 0x027D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_DynamicSky_C*                       DynamicSky;                                        // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BaseLightIntensity;                                // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BaseToonIntensityScale;                            // 0x028C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           BaseLightColor;                                    // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADirectionalLight*                      TargetLight;                                       // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BlendRadius;                                       // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BlendWeight;                                       // 0x02AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseCurve;                                          // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          EditorPreview;                                     // 0x02B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	bool                                          DebugDraw;                                         // 0x02B2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9837[0x5];                                     // 0x02B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_CameraLocationChecker_C*            CamLocActor;                                       // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UShapeComponent*>                ShapeComponents;                                   // 0x02C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void ExecuteUbergraph_BP_DirectionalLightControlVolume(int32 EntryPoint);
	void VolumeDebugDraw();
	void UpdateLightParams(float Blend, float Time);
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void GetNowTimeParam(float TimeRate, float* NowLightIntensity, float* NowToonIntensityScale, struct FLinearColor* NowLightColor);
	void CreateOutArea();
	void UpdateBlendValue();
	void UpdateEditorPreview();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DirectionalLightControlVolume_C">();
	}
	static class ABP_DirectionalLightControlVolume_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DirectionalLightControlVolume_C>();
	}
};
static_assert(alignof(ABP_DirectionalLightControlVolume_C) == 0x000008, "Wrong alignment on ABP_DirectionalLightControlVolume_C");
static_assert(sizeof(ABP_DirectionalLightControlVolume_C) == 0x0002D0, "Wrong size on ABP_DirectionalLightControlVolume_C");
static_assert(offsetof(ABP_DirectionalLightControlVolume_C, UberGraphFrame) == 0x000228, "Member 'ABP_DirectionalLightControlVolume_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_DirectionalLightControlVolume_C, Box) == 0x000230, "Member 'ABP_DirectionalLightControlVolume_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_DirectionalLightControlVolume_C, DefaultSceneRoot) == 0x000238, "Member 'ABP_DirectionalLightControlVolume_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_DirectionalLightControlVolume_C, LightIntensityCurve) == 0x000240, "Member 'ABP_DirectionalLightControlVolume_C::LightIntensityCurve' has a wrong offset!");
static_assert(offsetof(ABP_DirectionalLightControlVolume_C, LightColorCurve) == 0x000248, "Member 'ABP_DirectionalLightControlVolume_C::LightColorCurve' has a wrong offset!");
static_assert(offsetof(ABP_DirectionalLightControlVolume_C, LightColor) == 0x000250, "Member 'ABP_DirectionalLightControlVolume_C::LightColor' has a wrong offset!");
static_assert(offsetof(ABP_DirectionalLightControlVolume_C, LightIntensity) == 0x000260, "Member 'ABP_DirectionalLightControlVolume_C::LightIntensity' has a wrong offset!");
static_assert(offsetof(ABP_DirectionalLightControlVolume_C, ToonIntensityScaleCurve) == 0x000268, "Member 'ABP_DirectionalLightControlVolume_C::ToonIntensityScaleCurve' has a wrong offset!");
static_assert(offsetof(ABP_DirectionalLightControlVolume_C, ToonIntensityScale) == 0x000270, "Member 'ABP_DirectionalLightControlVolume_C::ToonIntensityScale' has a wrong offset!");
static_assert(offsetof(ABP_DirectionalLightControlVolume_C, BlendValue) == 0x000274, "Member 'ABP_DirectionalLightControlVolume_C::BlendValue' has a wrong offset!");
static_assert(offsetof(ABP_DirectionalLightControlVolume_C, ReflectedBlendValue) == 0x000278, "Member 'ABP_DirectionalLightControlVolume_C::ReflectedBlendValue' has a wrong offset!");
static_assert(offsetof(ABP_DirectionalLightControlVolume_C, SkyLight) == 0x00027C, "Member 'ABP_DirectionalLightControlVolume_C::SkyLight' has a wrong offset!");
static_assert(offsetof(ABP_DirectionalLightControlVolume_C, DynamicSky) == 0x000280, "Member 'ABP_DirectionalLightControlVolume_C::DynamicSky' has a wrong offset!");
static_assert(offsetof(ABP_DirectionalLightControlVolume_C, BaseLightIntensity) == 0x000288, "Member 'ABP_DirectionalLightControlVolume_C::BaseLightIntensity' has a wrong offset!");
static_assert(offsetof(ABP_DirectionalLightControlVolume_C, BaseToonIntensityScale) == 0x00028C, "Member 'ABP_DirectionalLightControlVolume_C::BaseToonIntensityScale' has a wrong offset!");
static_assert(offsetof(ABP_DirectionalLightControlVolume_C, BaseLightColor) == 0x000290, "Member 'ABP_DirectionalLightControlVolume_C::BaseLightColor' has a wrong offset!");
static_assert(offsetof(ABP_DirectionalLightControlVolume_C, TargetLight) == 0x0002A0, "Member 'ABP_DirectionalLightControlVolume_C::TargetLight' has a wrong offset!");
static_assert(offsetof(ABP_DirectionalLightControlVolume_C, BlendRadius) == 0x0002A8, "Member 'ABP_DirectionalLightControlVolume_C::BlendRadius' has a wrong offset!");
static_assert(offsetof(ABP_DirectionalLightControlVolume_C, BlendWeight) == 0x0002AC, "Member 'ABP_DirectionalLightControlVolume_C::BlendWeight' has a wrong offset!");
static_assert(offsetof(ABP_DirectionalLightControlVolume_C, UseCurve) == 0x0002B0, "Member 'ABP_DirectionalLightControlVolume_C::UseCurve' has a wrong offset!");
static_assert(offsetof(ABP_DirectionalLightControlVolume_C, EditorPreview) == 0x0002B1, "Member 'ABP_DirectionalLightControlVolume_C::EditorPreview' has a wrong offset!");
static_assert(offsetof(ABP_DirectionalLightControlVolume_C, DebugDraw) == 0x0002B2, "Member 'ABP_DirectionalLightControlVolume_C::DebugDraw' has a wrong offset!");
static_assert(offsetof(ABP_DirectionalLightControlVolume_C, CamLocActor) == 0x0002B8, "Member 'ABP_DirectionalLightControlVolume_C::CamLocActor' has a wrong offset!");
static_assert(offsetof(ABP_DirectionalLightControlVolume_C, ShapeComponents) == 0x0002C0, "Member 'ABP_DirectionalLightControlVolume_C::ShapeComponents' has a wrong offset!");

}

