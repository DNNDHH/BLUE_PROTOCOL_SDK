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
	 * BlueprintGeneratedClass BP_LightSchedule.BP_LightSchedule_C
	 * Size -> 0x0060 (FullSize[0x0288] - InheritedSize[0x0228])
	 */
	class ABP_LightSchedule_C : public ASBLightSchedule
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FRandomLightScheduleParam>                   RandomLightScheduleParam;                                // 0x0238(0x0010) Edit, BlueprintVisible
		int32_t                                                    RandomOffsetOn;                                          // 0x0248(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RandomOffsetOff;                                         // 0x024C(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ULightScheduleComponent_C*>                   LightScheduleComponents;                                 // 0x0250(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		int32_t                                                    LightScheduleUpdateNum;                                  // 0x0260(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LightScheduleUpdateCounter;                              // 0x0264(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LightScheduleUpdateLength;                               // 0x0268(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_I6Q2[0x4];                                   // 0x026C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class URandomLightMaterialScheduleComponent_C*>     RandomLightMaterialComps;                                // 0x0270(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class ABP_DynamicSky_C*                                    DynamicSky;                                              // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void IsRandomLightMaterialCompInitialized();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void SetLightSchedule();
		void ReceiveTick(float DeltaSeconds);
		void LightScheduleCompInitialize();
		void InitEditorPreview(bool Sw);
		void ExecuteUbergraph_BP_LightSchedule(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
