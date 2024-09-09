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
	 * BlueprintGeneratedClass BP_FogControlVolume.BP_FogControlVolume_C
	 * Size -> 0x0108 (FullSize[0x0330] - InheritedSize[0x0228])
	 */
	class ABP_FogControlVolume_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       Box;                                                     // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       UseCurve_F;                                              // 0x0238(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_L4S2[0x3];                                   // 0x0239(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LerpTime;                                                // 0x023C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_FogControl_C*                                    FogControl;                                              // 0x0240(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FFogControlParam                                    FogParam;                                                // 0x0248(0x0040) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FFogControlCurveParam                               FogParamCurve;                                           // 0x0288(0x0050) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       EditorPreview;                                           // 0x02D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RPTE[0x7];                                   // 0x02D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AExponentialHeightFog*                               HeightFog;                                               // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_DynamicSky_C*                                    EditDynamicSky;                                          // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_FogControlVolume_C*                              DefaultFogControl;                                       // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVolumetricFogControlParam                          VolumetricFogParam;                                      // 0x02F8(0x0028) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FogHeightOffset;                                         // 0x0320(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ActivatedTime;                                           // 0x0324(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShadowDistanceControl;                                   // 0x0328(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GT6P[0x3];                                   // 0x0329(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ShadowDistance;                                          // 0x032C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetDefaultFogParam();
		void UpdateEditorPreviewFlag(bool* NowStatus, bool* StatusChange);
		void SetAllPrimCollisions(const class FName& CollisionProfileName);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void ReceiveActorBeginOverlap(class AActor* OtherActor);
		void ReceiveActorEndOverlap(class AActor* OtherActor);
		void FogUpdateInEditor(class ABP_FogControlVolume_C* ControlActor);
		void SetFog(class ABP_FogControlVolume_C* FogControlVolume);
		void SetFogToDefault();
		void ExecuteUbergraph_BP_FogControlVolume(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
