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
	 * BlueprintGeneratedClass BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C
	 * Size -> 0x00F1 (FullSize[0x0490] - InheritedSize[0x039F])
	 */
	class ABP_MannequinForCapture_Studio_C : public ABP_CaptureStudioBase_C
	{
	public:
		unsigned char                                              UnknownData_1BSA[0x1];                                   // 0x039F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UChildActorComponent*                                MaleMannequinComp;                                       // 0x03A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                FemaleMannequinComp;                                     // 0x03B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            MannequinDefaultRotation;                                // 0x03B8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsMaleActive;                                            // 0x03C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2NFP[0xB];                                   // 0x03C5(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          MannequinDefaultTransform;                               // 0x03D0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    NextCostumeItemId;                                       // 0x0400(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       NextIsOwnItem;                                           // 0x0404(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CPE2[0x3];                                   // 0x0405(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NextOwnCostumeColorId;                                   // 0x0408(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FST_MannequinForCapture_Info                        CurrCostumeMannequinInfo;                                // 0x040C(0x0030) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             MannequinDefaultLocation;                                // 0x043C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NextOwnCostumeColorS;                                    // 0x0448(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NextOwnCostumeColorV;                                    // 0x044C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        HeightGradColor_Default;                                 // 0x0450(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        HeightGradColorSkin_Default;                             // 0x0460(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnCostumeLoadedDelegete;                                 // 0x0470(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		EProtectorCategory                                         ProtectorCategory;                                       // 0x0480(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WJYI[0x3];                                   // 0x0481(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CostumeItemId;                                           // 0x0484(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       NoResetLocAndRot;                                        // 0x0488(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZWJQ[0x3];                                   // 0x0489(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NextOwnCostumeMaterialId;                                // 0x048C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetActiveMannequin(class ASBCharaCreateCharacter** AsSBCharaCreateCharacter);
		void GetMannequinArrangementCameraSettingInfo(int32_t InCostumeId, bool InIsMale, bool* IsValid, struct FST_MannequinForCapture_CameraSettingInfo* OutArrangementCameraSettingInfo);
		void IsPartsLoaded(class UChildActorComponent* Target, bool* Result);
		void SetMannequinGradationEnable(bool InIsEnable);
		void SetMannequinAndCameraByCostumeType(EProtectorCategory InCostumeType, int32_t InCostumeId);
		void GetMannequinCameraSettingInfoFromType(EProtectorCategory InCostumType, bool InIsMale, struct FST_MannequinForCapture_Info* OutCostumeMannequinInfo);
		void DestroyAllChildComponents();
		void ResetMannequinAndCameraToDefaultTrans();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void SetMannequinVisibility(bool IsVisible);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void SwitchActiveMannequin(bool IsMaleActive, EProtectorCategory InProtectorCategory, int32_t InCostumeItemId, bool InIsNoResetLocAndRot);
		void SetCostumeToMannequin(int32_t InCostumeItemIndex, bool IsOwnItem, int32_t InOwnCostumeColorId, int32_t InOwnCostumeColorS, int32_t InOwnCostumeColorV, int32_t InOwnCostumeMaterialId);
		void ResetMannequin();
		void ResetModelAndCameraTransform();
		void CostumeMaleLoadEnd(bool Result);
		void CostumeFemaleLoadEnd(bool Result);
		void SwitchActiveMannequin_LoadAssetAfter(bool IsMaleActive, EProtectorCategory InProtectorCategory, int32_t InCostumeItemId, bool InIsNoResetLocAndRot);
		void CostumeLoaded();
		void ExecuteUbergraph_BP_MannequinForCapture_Studio(int32_t EntryPoint);
		void OnCostumeLoadedDelegete__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
