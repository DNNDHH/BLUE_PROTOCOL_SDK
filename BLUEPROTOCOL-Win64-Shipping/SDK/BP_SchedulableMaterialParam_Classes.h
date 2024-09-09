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
	 * BlueprintGeneratedClass BP_SchedulableMaterialParam.BP_SchedulableMaterialParam_C
	 * Size -> 0x0069 (FullSize[0x0291] - InheritedSize[0x0228])
	 */
	class ABP_SchedulableMaterialParam_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ULightScheduleComponent_C*                           LightScheduleComponent;                                  // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TMap<class UMaterialInstance*, int32_t>                    MaterialInstances;                                       // 0x0240(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       DebugDraw;                                               // 0x0290(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		void GetVariableMaterialInstance(class UMaterialInstance* SourceMaterial, class UMaterialInstanceDynamic** MaterialInstanceDynamic);
		void StartRoutine(TArray<class UMaterialInstance*>* SourceMaterial, const class FName& ParameterName, float Intencity, float Duration, int32_t SwitchOnTime, int32_t SwitchOffTime);
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_BP_SchedulableMaterialParam(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
