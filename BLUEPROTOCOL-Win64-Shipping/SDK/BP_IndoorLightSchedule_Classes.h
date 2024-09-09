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
	 * BlueprintGeneratedClass BP_IndoorLightSchedule.BP_IndoorLightSchedule_C
	 * Size -> 0x0039 (FullSize[0x0261] - InheritedSize[0x0228])
	 */
	class ABP_IndoorLightSchedule_C : public ASBIndoorLightSchedule
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_IndoorLightScheduleComponent_C*                  BP_IndoorLightScheduleComponent;                         // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Box;                                                     // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      PreviewTestTime;                                         // 0x0248(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BJ2B[0x4];                                   // 0x024C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMeshComponent*>                              MeshComponents;                                          // 0x0250(0x0010) Edit, BlueprintVisible, Transient, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       EditorPreviewF;                                          // 0x0260(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void PreviewTest();
		void InitEditorPreview(bool Sw);
		void InDoorTickIntervalSet(ESBDebugMenuType MenuType, const class FName& RowName);
		void InitTickInterval();
		void ExecuteUbergraph_BP_IndoorLightSchedule(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
