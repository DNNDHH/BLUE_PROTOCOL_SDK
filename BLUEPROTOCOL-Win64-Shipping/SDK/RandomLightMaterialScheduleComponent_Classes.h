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
	 * BlueprintGeneratedClass RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C
	 * Size -> 0x013A (FullSize[0x01F2] - InheritedSize[0x00B8])
	 */
	class URandomLightMaterialScheduleComponent_C : public USBRandomLightMaterialComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class UMaterialInstance*>                           SourceMaterial;                                          // 0x00C0(0x0010) Edit, BlueprintVisible
		TArray<struct FRandomLightMaterialScheduleParam>           ScheduleParam;                                           // 0x00D0(0x0010) Edit, BlueprintVisible, Net, DisableEditOnInstance
		TArray<class ABP_SchedulableMaterialParam_C*>              ScheduledMaterialLight;                                  // 0x00E0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		class FName                                                ParameterName;                                           // 0x00F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RandomCount;                                             // 0x00F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Intensity;                                               // 0x00FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RandomIntencity;                                         // 0x0100(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FadeDuration;                                            // 0x0104(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LightOnTime;                                             // 0x0108(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OnRandomDelayMinutes;                                    // 0x010C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LightOffTime;                                            // 0x0110(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OffRandomDelayMinutes;                                   // 0x0114(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NoLightRatio;                                            // 0x0118(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaterialCountWithNoLight;                                // 0x011C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RandomOffset;                                            // 0x0120(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_X10G[0x4];                                   // 0x0124(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             LoopUp;                                                  // 0x0128(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class UMaterialInstanceDynamic*>                    PreviewMaterials;                                        // 0x0138(0x0010) Edit, BlueprintVisible, Transient, DisableEditOnInstance
		bool                                                       EditorPreviewF;                                          // 0x0148(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_O54Q[0x7];                                   // 0x0149(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UMaterialInterface*, int32_t>                   PreviewIndex;                                            // 0x0150(0x0050) Edit, BlueprintVisible, Transient, DisableEditOnInstance
		TMap<int32_t, struct FRandomLightMaterialPreviewParams>    PreviewParameters;                                       // 0x01A0(0x0050) Edit, BlueprintVisible, Transient, DisableEditOnInstance
		bool                                                       DebugDraw;                                               // 0x01F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Initialized;                                             // 0x01F1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		class UMaterialInstanceDynamic* FindDecalsMaterial(class UDecalComponent* DecalComp, class UMaterialInstance* TargetMaterial, int32_t Idx);
		void CalcPreviewFade(float NowTime, float FadeStart, float Duration, bool Sw, bool* Available, float* Rate);
		void InitEditorPreview(bool Sw);
		int32_t EditorPreview(float TimeRate, bool Preview);
		void OnRep_ScheduledMaterialLight();
		void ReceiveBeginPlay();
		void SpawnScheduledMaterialActors();
		void RewriteMaterials();
		void SetRandomSchedule();
		void RewriteMaterialsCore(class UStaticMeshComponent* MeshComp, class UMaterialInstance* TargetMaterial, int32_t Idx);
		void InitializeRandomLightMaterials();
		void ExecuteUbergraph_RandomLightMaterialScheduleComponent(int32_t EntryPoint);
		void LoopUp__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
