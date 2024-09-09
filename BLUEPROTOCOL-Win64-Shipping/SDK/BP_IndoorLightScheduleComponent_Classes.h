#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C
	 * Size -> 0x00EC (FullSize[0x0204] - InheritedSize[0x0118])
	 */
	class UBP_IndoorLightScheduleComponent_C : public USBIndoorLightScheduleComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0118(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TMap<class UMaterialInstanceDynamic*, struct FBP_IndoorMaterialParam> MaterialParamsList;                                      // 0x0120(0x0050) Edit, BlueprintVisible, Transient, DisableEditOnInstance
		struct FLinearColor                                        CurrentColor;                                            // 0x0170(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentIntensity;                                        // 0x0180(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentEmissiveScale;                                    // 0x0184(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentGameTime;                                         // 0x0188(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NewGameTime;                                             // 0x018C(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FullFadeTime;                                            // 0x0190(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentFadeTime;                                         // 0x0194(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        StartColor;                                              // 0x0198(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StartIntensity;                                          // 0x01A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StartEmissiveScale;                                      // 0x01AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        TargetColor;                                             // 0x01B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TargetIntensity;                                         // 0x01C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TargetEmissiveScale;                                     // 0x01C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FadeAlpha;                                               // 0x01C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                TargetLightTag;                                          // 0x01CC(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6NIT[0x4];                                   // 0x01D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBP_IndoorMaterialParam>                     TargetMaterials;                                         // 0x01D8(0x0010) Edit, BlueprintVisible
		TArray<struct FBP_IndoorLightParam>                        LightSchedule;                                           // 0x01E8(0x0010) Edit, BlueprintVisible
		class ABP_DynamicSky_C*                                    DynamicSky;                                              // 0x01F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentFadeId;                                           // 0x0200(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetIndoorLightWithCurrentValue();
		void CalcFadeColorAndTime(int32_t CurrentTimeOfDay, int32_t* CurrentId, int32_t* CurrentFadeId, float* Rate, struct FLinearColor* CurrentColor, float* CurrentIntensity, float* CurrentEmmisiveScale);
		void GetNowMinOfDay(int32_t* MinOfday);
		void GetNewFadeParam(int32_t Start, int32_t End, int32_t* Index);
		void ReceiveTick(float DeltaSeconds);
		void InitMaterialSchedule(TArray<class UMeshComponent*> MeshComponents, bool Sw);
		void UpdateLightSchedule();
		void FadeStart(int32_t Index, float NowRate);
		void ReceiveBeginPlay();
		void ClearArrays();
		void UpdateEditorPreview(float TimeRate, bool Sw);
		void SetLightValueByMinOfDay(int32_t MinOfday);
		void ExecuteUbergraph_BP_IndoorLightScheduleComponent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
