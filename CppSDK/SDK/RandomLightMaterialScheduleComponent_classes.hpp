#pragma once

 

// Package: RandomLightMaterialScheduleComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "RandomLightMaterialScheduleParam_structs.hpp"
#include "RandomLightMaterialPreviewParams_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C
// 0x0140 (0x01F8 - 0x00B8)
class URandomLightMaterialScheduleComponent_C final : public USBRandomLightMaterialComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UMaterialInstance*>              SourceMaterial;                                    // 0x00C0(0x0010)(Edit, BlueprintVisible)
	TArray<struct FRandomLightMaterialScheduleParam> ScheduleParam;                                     // 0x00D0(0x0010)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	TArray<class ABP_SchedulableMaterialParam_C*> ScheduledMaterialLight;                            // 0x00E0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class FName                                   ParameterName;                                     // 0x00F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RandomCount;                                       // 0x00F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Intensity;                                         // 0x00FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RandomIntencity;                                   // 0x0100(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FadeDuration;                                      // 0x0104(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LightOnTime;                                       // 0x0108(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OnRandomDelayMinutes;                              // 0x010C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LightOffTime;                                      // 0x0110(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OffRandomDelayMinutes;                             // 0x0114(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NoLightRatio;                                      // 0x0118(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaterialCountWithNoLight;                          // 0x011C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RandomOffset;                                      // 0x0120(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_98D9[0x4];                                     // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             Loop_Up;                                           // 0x0128(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UMaterialInstanceDynamic*>       PreviewMaterials;                                  // 0x0138(0x0010)(Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	bool                                          EditorPreviewF;                                    // 0x0148(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98DA[0x7];                                     // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class UMaterialInterface*, int32>        PreviewIndex;                                      // 0x0150(0x0050)(Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	TMap<int32, struct FRandomLightMaterialPreviewParams> PreviewParameters;                                 // 0x01A0(0x0050)(Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	bool                                          DebugDraw;                                         // 0x01F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Initialized;                                       // 0x01F1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void Loop_Up__DelegateSignature();
	void ExecuteUbergraph_RandomLightMaterialScheduleComponent(int32 EntryPoint);
	void InitializeRandomLightMaterials();
	void RewriteMaterialsCore(class UStaticMeshComponent* MeshComp, class UMaterialInstance* TargetMaterial, int32 Idx);
	void SetRandomSchedule();
	void RewriteMaterials();
	void SpawnScheduledMaterialActors();
	void ReceiveBeginPlay();
	void OnRep_ScheduledMaterialLight();
	int32 EditorPreview(float TimeRate, bool Preview);
	void InitEditorPreview(bool Sw);
	void CalcPreviewFade(float NowTime, float FadeStart, float Duration, bool Sw, bool* Available, float* Rate);
	class UMaterialInstanceDynamic* FindDecalsMaterial(class UDecalComponent* DecalComp, class UMaterialInstance* TargetMaterial, int32 Idx);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RandomLightMaterialScheduleComponent_C">();
	}
	static class URandomLightMaterialScheduleComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URandomLightMaterialScheduleComponent_C>();
	}
};
static_assert(alignof(URandomLightMaterialScheduleComponent_C) == 0x000008, "Wrong alignment on URandomLightMaterialScheduleComponent_C");
static_assert(sizeof(URandomLightMaterialScheduleComponent_C) == 0x0001F8, "Wrong size on URandomLightMaterialScheduleComponent_C");
static_assert(offsetof(URandomLightMaterialScheduleComponent_C, UberGraphFrame) == 0x0000B8, "Member 'URandomLightMaterialScheduleComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(URandomLightMaterialScheduleComponent_C, SourceMaterial) == 0x0000C0, "Member 'URandomLightMaterialScheduleComponent_C::SourceMaterial' has a wrong offset!");
static_assert(offsetof(URandomLightMaterialScheduleComponent_C, ScheduleParam) == 0x0000D0, "Member 'URandomLightMaterialScheduleComponent_C::ScheduleParam' has a wrong offset!");
static_assert(offsetof(URandomLightMaterialScheduleComponent_C, ScheduledMaterialLight) == 0x0000E0, "Member 'URandomLightMaterialScheduleComponent_C::ScheduledMaterialLight' has a wrong offset!");
static_assert(offsetof(URandomLightMaterialScheduleComponent_C, ParameterName) == 0x0000F0, "Member 'URandomLightMaterialScheduleComponent_C::ParameterName' has a wrong offset!");
static_assert(offsetof(URandomLightMaterialScheduleComponent_C, RandomCount) == 0x0000F8, "Member 'URandomLightMaterialScheduleComponent_C::RandomCount' has a wrong offset!");
static_assert(offsetof(URandomLightMaterialScheduleComponent_C, Intensity) == 0x0000FC, "Member 'URandomLightMaterialScheduleComponent_C::Intensity' has a wrong offset!");
static_assert(offsetof(URandomLightMaterialScheduleComponent_C, RandomIntencity) == 0x000100, "Member 'URandomLightMaterialScheduleComponent_C::RandomIntencity' has a wrong offset!");
static_assert(offsetof(URandomLightMaterialScheduleComponent_C, FadeDuration) == 0x000104, "Member 'URandomLightMaterialScheduleComponent_C::FadeDuration' has a wrong offset!");
static_assert(offsetof(URandomLightMaterialScheduleComponent_C, LightOnTime) == 0x000108, "Member 'URandomLightMaterialScheduleComponent_C::LightOnTime' has a wrong offset!");
static_assert(offsetof(URandomLightMaterialScheduleComponent_C, OnRandomDelayMinutes) == 0x00010C, "Member 'URandomLightMaterialScheduleComponent_C::OnRandomDelayMinutes' has a wrong offset!");
static_assert(offsetof(URandomLightMaterialScheduleComponent_C, LightOffTime) == 0x000110, "Member 'URandomLightMaterialScheduleComponent_C::LightOffTime' has a wrong offset!");
static_assert(offsetof(URandomLightMaterialScheduleComponent_C, OffRandomDelayMinutes) == 0x000114, "Member 'URandomLightMaterialScheduleComponent_C::OffRandomDelayMinutes' has a wrong offset!");
static_assert(offsetof(URandomLightMaterialScheduleComponent_C, NoLightRatio) == 0x000118, "Member 'URandomLightMaterialScheduleComponent_C::NoLightRatio' has a wrong offset!");
static_assert(offsetof(URandomLightMaterialScheduleComponent_C, MaterialCountWithNoLight) == 0x00011C, "Member 'URandomLightMaterialScheduleComponent_C::MaterialCountWithNoLight' has a wrong offset!");
static_assert(offsetof(URandomLightMaterialScheduleComponent_C, RandomOffset) == 0x000120, "Member 'URandomLightMaterialScheduleComponent_C::RandomOffset' has a wrong offset!");
static_assert(offsetof(URandomLightMaterialScheduleComponent_C, Loop_Up) == 0x000128, "Member 'URandomLightMaterialScheduleComponent_C::Loop_Up' has a wrong offset!");
static_assert(offsetof(URandomLightMaterialScheduleComponent_C, PreviewMaterials) == 0x000138, "Member 'URandomLightMaterialScheduleComponent_C::PreviewMaterials' has a wrong offset!");
static_assert(offsetof(URandomLightMaterialScheduleComponent_C, EditorPreviewF) == 0x000148, "Member 'URandomLightMaterialScheduleComponent_C::EditorPreviewF' has a wrong offset!");
static_assert(offsetof(URandomLightMaterialScheduleComponent_C, PreviewIndex) == 0x000150, "Member 'URandomLightMaterialScheduleComponent_C::PreviewIndex' has a wrong offset!");
static_assert(offsetof(URandomLightMaterialScheduleComponent_C, PreviewParameters) == 0x0001A0, "Member 'URandomLightMaterialScheduleComponent_C::PreviewParameters' has a wrong offset!");
static_assert(offsetof(URandomLightMaterialScheduleComponent_C, DebugDraw) == 0x0001F0, "Member 'URandomLightMaterialScheduleComponent_C::DebugDraw' has a wrong offset!");
static_assert(offsetof(URandomLightMaterialScheduleComponent_C, Initialized) == 0x0001F1, "Member 'URandomLightMaterialScheduleComponent_C::Initialized' has a wrong offset!");

}

