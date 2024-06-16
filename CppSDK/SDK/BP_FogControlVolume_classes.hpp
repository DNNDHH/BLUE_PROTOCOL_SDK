#pragma once

 

// Package: BP_FogControlVolume

#include "Basic.hpp"

#include "FogControlCurveParam_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "FogControlParam_structs.hpp"
#include "VolumetricFogControlParam_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FogControlVolume.BP_FogControlVolume_C
// 0x0108 (0x0330 - 0x0228)
class ABP_FogControlVolume_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0228(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Box;                                               // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          UseCurve_F;                                        // 0x0238(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_985C[0x3];                                     // 0x0239(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LerpTime;                                          // 0x023C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_FogControl_C*                       FogControl;                                        // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFogControlParam                       FogParam;                                          // 0x0248(0x0040)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFogControlCurveParam                  FogParamCurve;                                     // 0x0288(0x0050)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EditorPreview;                                     // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_985D[0x7];                                     // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AExponentialHeightFog*                  HeightFog;                                         // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_DynamicSky_C*                       EditDynamicSky;                                    // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_FogControlVolume_C*                 DefaultFogControl;                                 // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVolumetricFogControlParam             VolumetricFogParam;                                // 0x02F8(0x0028)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FogHeightOffset;                                   // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ActivatedTime;                                     // 0x0324(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShadowDistanceControl;                             // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_985E[0x3];                                     // 0x0329(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ShadowDistance;                                    // 0x032C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_FogControlVolume(int32 EntryPoint);
	void SetFogToDefault();
	void SetFog(class ABP_FogControlVolume_C* FogControlVolume);
	void Fog_Update_In_Editor(class ABP_FogControlVolume_C* ControlActor);
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void SetAllPrimCollisions(class FName CollisionProfileName);
	void UpdateEditorPreviewFlag(bool* NowStatus, bool* StatusChange);
	void SetDefaultFogParam();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FogControlVolume_C">();
	}
	static class ABP_FogControlVolume_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FogControlVolume_C>();
	}
};
static_assert(alignof(ABP_FogControlVolume_C) == 0x000008, "Wrong alignment on ABP_FogControlVolume_C");
static_assert(sizeof(ABP_FogControlVolume_C) == 0x000330, "Wrong size on ABP_FogControlVolume_C");
static_assert(offsetof(ABP_FogControlVolume_C, UberGraphFrame) == 0x000228, "Member 'ABP_FogControlVolume_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_FogControlVolume_C, Box) == 0x000230, "Member 'ABP_FogControlVolume_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_FogControlVolume_C, UseCurve_F) == 0x000238, "Member 'ABP_FogControlVolume_C::UseCurve_F' has a wrong offset!");
static_assert(offsetof(ABP_FogControlVolume_C, LerpTime) == 0x00023C, "Member 'ABP_FogControlVolume_C::LerpTime' has a wrong offset!");
static_assert(offsetof(ABP_FogControlVolume_C, FogControl) == 0x000240, "Member 'ABP_FogControlVolume_C::FogControl' has a wrong offset!");
static_assert(offsetof(ABP_FogControlVolume_C, FogParam) == 0x000248, "Member 'ABP_FogControlVolume_C::FogParam' has a wrong offset!");
static_assert(offsetof(ABP_FogControlVolume_C, FogParamCurve) == 0x000288, "Member 'ABP_FogControlVolume_C::FogParamCurve' has a wrong offset!");
static_assert(offsetof(ABP_FogControlVolume_C, EditorPreview) == 0x0002D8, "Member 'ABP_FogControlVolume_C::EditorPreview' has a wrong offset!");
static_assert(offsetof(ABP_FogControlVolume_C, HeightFog) == 0x0002E0, "Member 'ABP_FogControlVolume_C::HeightFog' has a wrong offset!");
static_assert(offsetof(ABP_FogControlVolume_C, EditDynamicSky) == 0x0002E8, "Member 'ABP_FogControlVolume_C::EditDynamicSky' has a wrong offset!");
static_assert(offsetof(ABP_FogControlVolume_C, DefaultFogControl) == 0x0002F0, "Member 'ABP_FogControlVolume_C::DefaultFogControl' has a wrong offset!");
static_assert(offsetof(ABP_FogControlVolume_C, VolumetricFogParam) == 0x0002F8, "Member 'ABP_FogControlVolume_C::VolumetricFogParam' has a wrong offset!");
static_assert(offsetof(ABP_FogControlVolume_C, FogHeightOffset) == 0x000320, "Member 'ABP_FogControlVolume_C::FogHeightOffset' has a wrong offset!");
static_assert(offsetof(ABP_FogControlVolume_C, ActivatedTime) == 0x000324, "Member 'ABP_FogControlVolume_C::ActivatedTime' has a wrong offset!");
static_assert(offsetof(ABP_FogControlVolume_C, ShadowDistanceControl) == 0x000328, "Member 'ABP_FogControlVolume_C::ShadowDistanceControl' has a wrong offset!");
static_assert(offsetof(ABP_FogControlVolume_C, ShadowDistance) == 0x00032C, "Member 'ABP_FogControlVolume_C::ShadowDistance' has a wrong offset!");

}

