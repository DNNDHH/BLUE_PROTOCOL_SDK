#pragma once

 

// Package: BP_IndoorLightScheduleComponent

#include "Basic.hpp"

#include "BP_IndoorLightParam_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BP_IndoorMaterialParam_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C
// 0x00F0 (0x0208 - 0x0118)
class UBP_IndoorLightScheduleComponent_C final : public USBIndoorLightScheduleComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0118(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TMap<class UMaterialInstanceDynamic*, struct FBP_IndoorMaterialParam> MaterialParamsList;                                // 0x0120(0x0050)(Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	struct FLinearColor                           CurrentColor;                                      // 0x0170(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentIntensity;                                  // 0x0180(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentEmissiveScale;                              // 0x0184(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentGameTime;                                   // 0x0188(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NewGameTime;                                       // 0x018C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FullFadeTime;                                      // 0x0190(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentFadeTime;                                   // 0x0194(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           StartColor;                                        // 0x0198(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StartIntensity;                                    // 0x01A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StartEmissiveScale;                                // 0x01AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           TargetColor;                                       // 0x01B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TargetIntensity;                                   // 0x01C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TargetEmissiveScale;                               // 0x01C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FadeAlpha;                                         // 0x01C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   TargetLightTag;                                    // 0x01CC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9936[0x4];                                     // 0x01D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FBP_IndoorMaterialParam>        TargetMaterials;                                   // 0x01D8(0x0010)(Edit, BlueprintVisible)
	TArray<struct FBP_IndoorLightParam>           LightSchedule;                                     // 0x01E8(0x0010)(Edit, BlueprintVisible)
	class ABP_DynamicSky_C*                       DynamicSky;                                        // 0x01F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentFadeId;                                     // 0x0200(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_IndoorLightScheduleComponent(int32 EntryPoint);
	void SetLightValueByMinOfDay(int32 MinOfday);
	void UpdateEditorPreview(float TimeRate, bool Sw);
	void ClearArrays();
	void ReceiveBeginPlay();
	void FadeStart(int32 Param_Index, float NowRate);
	void UpdateLightSchedule();
	void InitMaterialSchedule(const TArray<class UMeshComponent*>& MeshComponents, bool Sw);
	void ReceiveTick(float DeltaSeconds);
	void GetNewFadeParam(int32 Start, int32 End, int32* Param_Index);
	void GetNowMinOfDay(int32* MinOfday);
	void CalcFadeColorAndTime(int32 CurrentTimeOfDay, int32* CurrentId, int32* Param_CurrentFadeId, float* Rate, struct FLinearColor* Param_CurrentColor, float* Param_CurrentIntensity, float* CurrentEmmisiveScale);
	void SetIndoorLightWithCurrentValue();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_IndoorLightScheduleComponent_C">();
	}
	static class UBP_IndoorLightScheduleComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_IndoorLightScheduleComponent_C>();
	}
};
static_assert(alignof(UBP_IndoorLightScheduleComponent_C) == 0x000008, "Wrong alignment on UBP_IndoorLightScheduleComponent_C");
static_assert(sizeof(UBP_IndoorLightScheduleComponent_C) == 0x000208, "Wrong size on UBP_IndoorLightScheduleComponent_C");
static_assert(offsetof(UBP_IndoorLightScheduleComponent_C, UberGraphFrame) == 0x000118, "Member 'UBP_IndoorLightScheduleComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_IndoorLightScheduleComponent_C, MaterialParamsList) == 0x000120, "Member 'UBP_IndoorLightScheduleComponent_C::MaterialParamsList' has a wrong offset!");
static_assert(offsetof(UBP_IndoorLightScheduleComponent_C, CurrentColor) == 0x000170, "Member 'UBP_IndoorLightScheduleComponent_C::CurrentColor' has a wrong offset!");
static_assert(offsetof(UBP_IndoorLightScheduleComponent_C, CurrentIntensity) == 0x000180, "Member 'UBP_IndoorLightScheduleComponent_C::CurrentIntensity' has a wrong offset!");
static_assert(offsetof(UBP_IndoorLightScheduleComponent_C, CurrentEmissiveScale) == 0x000184, "Member 'UBP_IndoorLightScheduleComponent_C::CurrentEmissiveScale' has a wrong offset!");
static_assert(offsetof(UBP_IndoorLightScheduleComponent_C, CurrentGameTime) == 0x000188, "Member 'UBP_IndoorLightScheduleComponent_C::CurrentGameTime' has a wrong offset!");
static_assert(offsetof(UBP_IndoorLightScheduleComponent_C, NewGameTime) == 0x00018C, "Member 'UBP_IndoorLightScheduleComponent_C::NewGameTime' has a wrong offset!");
static_assert(offsetof(UBP_IndoorLightScheduleComponent_C, FullFadeTime) == 0x000190, "Member 'UBP_IndoorLightScheduleComponent_C::FullFadeTime' has a wrong offset!");
static_assert(offsetof(UBP_IndoorLightScheduleComponent_C, CurrentFadeTime) == 0x000194, "Member 'UBP_IndoorLightScheduleComponent_C::CurrentFadeTime' has a wrong offset!");
static_assert(offsetof(UBP_IndoorLightScheduleComponent_C, StartColor) == 0x000198, "Member 'UBP_IndoorLightScheduleComponent_C::StartColor' has a wrong offset!");
static_assert(offsetof(UBP_IndoorLightScheduleComponent_C, StartIntensity) == 0x0001A8, "Member 'UBP_IndoorLightScheduleComponent_C::StartIntensity' has a wrong offset!");
static_assert(offsetof(UBP_IndoorLightScheduleComponent_C, StartEmissiveScale) == 0x0001AC, "Member 'UBP_IndoorLightScheduleComponent_C::StartEmissiveScale' has a wrong offset!");
static_assert(offsetof(UBP_IndoorLightScheduleComponent_C, TargetColor) == 0x0001B0, "Member 'UBP_IndoorLightScheduleComponent_C::TargetColor' has a wrong offset!");
static_assert(offsetof(UBP_IndoorLightScheduleComponent_C, TargetIntensity) == 0x0001C0, "Member 'UBP_IndoorLightScheduleComponent_C::TargetIntensity' has a wrong offset!");
static_assert(offsetof(UBP_IndoorLightScheduleComponent_C, TargetEmissiveScale) == 0x0001C4, "Member 'UBP_IndoorLightScheduleComponent_C::TargetEmissiveScale' has a wrong offset!");
static_assert(offsetof(UBP_IndoorLightScheduleComponent_C, FadeAlpha) == 0x0001C8, "Member 'UBP_IndoorLightScheduleComponent_C::FadeAlpha' has a wrong offset!");
static_assert(offsetof(UBP_IndoorLightScheduleComponent_C, TargetLightTag) == 0x0001CC, "Member 'UBP_IndoorLightScheduleComponent_C::TargetLightTag' has a wrong offset!");
static_assert(offsetof(UBP_IndoorLightScheduleComponent_C, TargetMaterials) == 0x0001D8, "Member 'UBP_IndoorLightScheduleComponent_C::TargetMaterials' has a wrong offset!");
static_assert(offsetof(UBP_IndoorLightScheduleComponent_C, LightSchedule) == 0x0001E8, "Member 'UBP_IndoorLightScheduleComponent_C::LightSchedule' has a wrong offset!");
static_assert(offsetof(UBP_IndoorLightScheduleComponent_C, DynamicSky) == 0x0001F8, "Member 'UBP_IndoorLightScheduleComponent_C::DynamicSky' has a wrong offset!");
static_assert(offsetof(UBP_IndoorLightScheduleComponent_C, CurrentFadeId) == 0x000200, "Member 'UBP_IndoorLightScheduleComponent_C::CurrentFadeId' has a wrong offset!");

}

