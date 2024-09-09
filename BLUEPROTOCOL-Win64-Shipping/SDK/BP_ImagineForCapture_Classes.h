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
	 * BlueprintGeneratedClass BP_ImagineForCapture.BP_ImagineForCapture_C
	 * Size -> 0x014A (FullSize[0x068A] - InheritedSize[0x0540])
	 */
	class ABP_ImagineForCapture_C : public ASBCaptureStudioCreationCharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0540(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystemComponent*                            Effect;                                                  // 0x0548(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USBSkeletalMeshComponent*                            Weapon2;                                                 // 0x0550(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USBSkeletalMeshComponent*                            Weapon1;                                                 // 0x0558(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USBSkeletalMeshComponent*                            SBSkeletalMeshComp;                                      // 0x0560(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SkeletalMeshDefaultLocation;                             // 0x0568(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2TOI[0x4];                                   // 0x0574(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSBCaptureStudioImagineData                         ImagineData;                                             // 0x0578(0x00D8) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnSetImagineData;                                        // 0x0650(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class USBSkeletalMeshComponent*>                    WeaponMeshes;                                            // 0x0660(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class USBSkeletalMeshComponent*>                    LoadedModelList;                                         // 0x0670(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       ImagineVisible;                                          // 0x0680(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SVZS[0x3];                                   // 0x0681(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AllMipLoadedWaitSeconds;                                 // 0x0684(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseCharaCreate;                                          // 0x0688(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       EnableReceiveTick;                                       // 0x0689(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool UpdateCharaCreateComponent();
		class USBSkeletalMeshComponent* GetTargetBodyMesh();
		void ApplyImagineData();
		void FindCaptureImagineData(int32_t InImagineId, struct FSBCaptureStudioImagineData* ImagineData, bool* bExist);
		void SetWeapons();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void SetImagineData(int32_t InImagineId);
		void OnAssetLoaded(bool bInResult);
		void ReceiveTick(float DeltaSeconds);
		void OnCreateLoaded(bool bInResult);
		void ExecuteUbergraph_BP_ImagineForCapture(int32_t EntryPoint);
		void OnSetImagineData__DelegateSignature(bool bResult);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
