#pragma once

 

// Package: LightScheduleComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass LightScheduleComponent.LightScheduleComponent_C
// 0x0110 (0x01C8 - 0x00B8)
class ULightScheduleComponent_C final : public USBLightScheduleComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         FadeDuration;                                      // 0x00C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TempFadeTime;                                      // 0x00C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FadeRealTime;                                      // 0x00C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrTime;                                          // 0x00CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StartIntensity;                                    // 0x00D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EndIntensity;                                      // 0x00D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FadeStartRate;                                     // 0x00D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9914[0x4];                                     // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 LightOnTime;                                       // 0x00E0(0x0010)(Edit, BlueprintVisible)
	TArray<int32>                                 LightOffTime;                                      // 0x00F0(0x0010)(Edit, BlueprintVisible)
	int32                                         UpdatedTime;                                       // 0x0100(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PreviousTime;                                      // 0x0104(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PreviewTime;                                       // 0x0108(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9915[0x4];                                     // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class ULightComponent*, float>           LightComponents;                                   // 0x0110(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FSBLightMaterialSchedule>       MaterialInstances;                                 // 0x0160(0x0010)(Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             LightOnEvent;                                      // 0x0170(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             LightOffEvent;                                     // 0x0180(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          TimerOverwrite;                                    // 0x0190(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9916[0x7];                                     // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TimerOverwriteTag;                                 // 0x0198(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class ABP_DynamicSky_C*                       DynamicSky;                                        // 0x01A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DebugDraw;                                         // 0x01B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          PreviewLightOff;                                   // 0x01B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsLightSwitch;                                     // 0x01B2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9917[0x5];                                     // 0x01B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        SchedulableSceneComponent;                         // 0x01B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              FadeStartDate;                                     // 0x01C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void LightOnEvent__DelegateSignature();
	void LightOffEvent__DelegateSignature();
	void ExecuteUbergraph_LightScheduleComponent(int32 EntryPoint);
	void StartTimeSchedule(int32 SetGameTime);
	void UpdateTimeSchedule();
	void StartFadeIn();
	void StartFadeOut();
	void ReceiveBeginPlay();
	void CheckTime(TArray<int32>& Array, int32 PrevTime, int32 Param_CurrTime, int32* CheckedTime);
	void SetVariableLight(class ULightComponent* LightComponent);
	void SetVariableMaterial(class UMaterialInstanceDynamic* MaterialInstance, class FName ParameterName, float Intencity, int32* ArrayIndex);
	void Set_Variable_Light_All();
	void GetVariableMaterial(int32 Param_Index, class UMaterialInstanceDynamic** NewParam);
	void ClearVariableMaterials();
	bool EditorPreview(float TimeRate, bool Sw);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LightScheduleComponent_C">();
	}
	static class ULightScheduleComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULightScheduleComponent_C>();
	}
};
static_assert(alignof(ULightScheduleComponent_C) == 0x000008, "Wrong alignment on ULightScheduleComponent_C");
static_assert(sizeof(ULightScheduleComponent_C) == 0x0001C8, "Wrong size on ULightScheduleComponent_C");
static_assert(offsetof(ULightScheduleComponent_C, UberGraphFrame) == 0x0000B8, "Member 'ULightScheduleComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULightScheduleComponent_C, FadeDuration) == 0x0000C0, "Member 'ULightScheduleComponent_C::FadeDuration' has a wrong offset!");
static_assert(offsetof(ULightScheduleComponent_C, TempFadeTime) == 0x0000C4, "Member 'ULightScheduleComponent_C::TempFadeTime' has a wrong offset!");
static_assert(offsetof(ULightScheduleComponent_C, FadeRealTime) == 0x0000C8, "Member 'ULightScheduleComponent_C::FadeRealTime' has a wrong offset!");
static_assert(offsetof(ULightScheduleComponent_C, CurrTime) == 0x0000CC, "Member 'ULightScheduleComponent_C::CurrTime' has a wrong offset!");
static_assert(offsetof(ULightScheduleComponent_C, StartIntensity) == 0x0000D0, "Member 'ULightScheduleComponent_C::StartIntensity' has a wrong offset!");
static_assert(offsetof(ULightScheduleComponent_C, EndIntensity) == 0x0000D4, "Member 'ULightScheduleComponent_C::EndIntensity' has a wrong offset!");
static_assert(offsetof(ULightScheduleComponent_C, FadeStartRate) == 0x0000D8, "Member 'ULightScheduleComponent_C::FadeStartRate' has a wrong offset!");
static_assert(offsetof(ULightScheduleComponent_C, LightOnTime) == 0x0000E0, "Member 'ULightScheduleComponent_C::LightOnTime' has a wrong offset!");
static_assert(offsetof(ULightScheduleComponent_C, LightOffTime) == 0x0000F0, "Member 'ULightScheduleComponent_C::LightOffTime' has a wrong offset!");
static_assert(offsetof(ULightScheduleComponent_C, UpdatedTime) == 0x000100, "Member 'ULightScheduleComponent_C::UpdatedTime' has a wrong offset!");
static_assert(offsetof(ULightScheduleComponent_C, PreviousTime) == 0x000104, "Member 'ULightScheduleComponent_C::PreviousTime' has a wrong offset!");
static_assert(offsetof(ULightScheduleComponent_C, PreviewTime) == 0x000108, "Member 'ULightScheduleComponent_C::PreviewTime' has a wrong offset!");
static_assert(offsetof(ULightScheduleComponent_C, LightComponents) == 0x000110, "Member 'ULightScheduleComponent_C::LightComponents' has a wrong offset!");
static_assert(offsetof(ULightScheduleComponent_C, MaterialInstances) == 0x000160, "Member 'ULightScheduleComponent_C::MaterialInstances' has a wrong offset!");
static_assert(offsetof(ULightScheduleComponent_C, LightOnEvent) == 0x000170, "Member 'ULightScheduleComponent_C::LightOnEvent' has a wrong offset!");
static_assert(offsetof(ULightScheduleComponent_C, LightOffEvent) == 0x000180, "Member 'ULightScheduleComponent_C::LightOffEvent' has a wrong offset!");
static_assert(offsetof(ULightScheduleComponent_C, TimerOverwrite) == 0x000190, "Member 'ULightScheduleComponent_C::TimerOverwrite' has a wrong offset!");
static_assert(offsetof(ULightScheduleComponent_C, TimerOverwriteTag) == 0x000198, "Member 'ULightScheduleComponent_C::TimerOverwriteTag' has a wrong offset!");
static_assert(offsetof(ULightScheduleComponent_C, DynamicSky) == 0x0001A8, "Member 'ULightScheduleComponent_C::DynamicSky' has a wrong offset!");
static_assert(offsetof(ULightScheduleComponent_C, DebugDraw) == 0x0001B0, "Member 'ULightScheduleComponent_C::DebugDraw' has a wrong offset!");
static_assert(offsetof(ULightScheduleComponent_C, PreviewLightOff) == 0x0001B1, "Member 'ULightScheduleComponent_C::PreviewLightOff' has a wrong offset!");
static_assert(offsetof(ULightScheduleComponent_C, IsLightSwitch) == 0x0001B2, "Member 'ULightScheduleComponent_C::IsLightSwitch' has a wrong offset!");
static_assert(offsetof(ULightScheduleComponent_C, SchedulableSceneComponent) == 0x0001B8, "Member 'ULightScheduleComponent_C::SchedulableSceneComponent' has a wrong offset!");
static_assert(offsetof(ULightScheduleComponent_C, FadeStartDate) == 0x0001C0, "Member 'ULightScheduleComponent_C::FadeStartDate' has a wrong offset!");

}

