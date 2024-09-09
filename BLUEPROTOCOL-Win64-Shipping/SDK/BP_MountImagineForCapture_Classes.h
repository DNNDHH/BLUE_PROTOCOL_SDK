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
	 * BlueprintGeneratedClass BP_MountImagineForCapture.BP_MountImagineForCapture_C
	 * Size -> 0x0150 (FullSize[0x0670] - InheritedSize[0x0520])
	 */
	class ABP_MountImagineForCapture_C : public ASBCaptureStudioBaseActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0520(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USBSkeletalMeshComponent*                            Weapon2;                                                 // 0x0528(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USBSkeletalMeshComponent*                            Weapon1;                                                 // 0x0530(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USBSkeletalMeshComponent*                            SBSkeletalMeshComp;                                      // 0x0538(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Effect;                                                  // 0x0540(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Pivot;                                                   // 0x0548(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SkeletalMeshDefaultLocation;                             // 0x0550(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LNFN[0x4];                                   // 0x055C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSBCaptureStudioImagineData                         ImagineData;                                             // 0x0560(0x00D8) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnSetImagineData;                                        // 0x0638(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      AllMipLoadedWaitSeconds;                                 // 0x0648(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ImagineVisible;                                          // 0x064C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K03D[0x3];                                   // 0x064D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USBSkeletalMeshComponent*>                    WeaponMeshes;                                            // 0x0650(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class USBSkeletalMeshComponent*>                    LoadedModelList;                                         // 0x0660(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void ApplyImagineData();
		void FindCaptureImagineData(int32_t InImagineId, struct FSBCaptureStudioImagineData* ImagineData, bool* bExist);
		void SetWeapons();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void SetImagineData(int32_t InImagineId);
		void OnAssetLoaded(bool bInResult);
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_BP_MountImagineForCapture(int32_t EntryPoint);
		void OnSetImagineData__DelegateSignature(bool bResult);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
