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
	 * BlueprintGeneratedClass LightScheduleComponent.LightScheduleComponent_C
	 * Size -> 0x0110 (FullSize[0x01C8] - InheritedSize[0x00B8])
	 */
	class ULightScheduleComponent_C : public USBLightScheduleComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      FadeDuration;                                            // 0x00C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TempFadeTime;                                            // 0x00C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FadeRealTime;                                            // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrTime;                                                // 0x00CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StartIntensity;                                          // 0x00D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EndIntensity;                                            // 0x00D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FadeStartRate;                                           // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_55L6[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            LightOnTime;                                             // 0x00E0(0x0010) Edit, BlueprintVisible
		TArray<int32_t>                                            LightOffTime;                                            // 0x00F0(0x0010) Edit, BlueprintVisible
		int32_t                                                    UpdatedTime;                                             // 0x0100(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PreviousTime;                                            // 0x0104(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PreviewTime;                                             // 0x0108(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TRA6[0x4];                                   // 0x010C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class ULightComponent*, float>                        LightComponents;                                         // 0x0110(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<struct FSBLightMaterialSchedule>                    MaterialInstances;                                       // 0x0160(0x0010) Edit, BlueprintVisible, Transient, DisableEditOnInstance
		class FScriptMulticastDelegate                             LightOnEvent;                                            // 0x0170(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             LightOffEvent;                                           // 0x0180(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       TimerOverwrite;                                          // 0x0190(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_R0GP[0x7];                                   // 0x0191(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              TimerOverwriteTag;                                       // 0x0198(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class ABP_DynamicSky_C*                                    DynamicSky;                                              // 0x01A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DebugDraw;                                               // 0x01B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       PreviewLightOff;                                         // 0x01B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsLightSwitch;                                           // 0x01B2(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DIVR[0x5];                                   // 0x01B3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     SchedulableSceneComponent;                               // 0x01B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDateTime                                           FadeStartDate;                                           // 0x01C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		bool EditorPreview(float TimeRate, bool Sw);
		void ClearVariableMaterials();
		void GetVariableMaterial(int32_t Index, class UMaterialInstanceDynamic** NewParam);
		void SetVariableLightAll();
		void SetVariableMaterial(class UMaterialInstanceDynamic* MaterialInstance, const class FName& ParameterName, float Intencity, int32_t* ArrayIndex);
		void SetVariableLight(class ULightComponent* LightComponent);
		void CheckTime(TArray<int32_t>* Array, int32_t PrevTime, int32_t CurrTime, int32_t* CheckedTime);
		void ReceiveBeginPlay();
		void StartFadeOut();
		void StartFadeIn();
		void UpdateTimeSchedule();
		void StartTimeSchedule(int32_t SetGameTime);
		void ExecuteUbergraph_LightScheduleComponent(int32_t EntryPoint);
		void LightOffEvent__DelegateSignature();
		void LightOnEvent__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
