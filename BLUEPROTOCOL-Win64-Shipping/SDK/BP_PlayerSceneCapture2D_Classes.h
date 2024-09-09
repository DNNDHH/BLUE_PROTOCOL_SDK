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
	 * BlueprintGeneratedClass BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C
	 * Size -> 0x0080 (FullSize[0x1530] - InheritedSize[0x14B0])
	 */
	class ABP_PlayerSceneCapture2D_C : public ASBCharaCreateCharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x14B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USBCharaPartsTickComponent*                          SBCharaParts_2;                                          // 0x14B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USBCharaPartsTickComponent*                          SBCharaParts_1;                                          // 0x14C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FString                                              CurrAvatarPosingAnimStateName;                           // 0x14C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnChangeState;                                           // 0x14D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FString                                              StateMachineName;                                        // 0x14E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		TArray<class FString>                                      StateNameList;                                           // 0x14F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bIsViewWeapon;                                           // 0x1508(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SVXH[0x7];                                   // 0x1509(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             TestShowAvatarEquipWeapon;                               // 0x1510(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bIsCheckSheathe;                                         // 0x1520(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsCopyAnimation;                                         // 0x1521(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EKUC[0x6];                                   // 0x1522(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASBPlayerCharacter*                                  BasePlayerCharacter;                                     // 0x1528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void SetFacialType(ESBFacialType InFacialType);
		TArray<class USBCharaPartsComponent*> GetExtraCharaPartsComponentList();
		void UnuseCopyPose();
		void InitCopyPose(class USkeletalMeshComponent* SourceCharacter);
		void InitPhotoMode(class ASBPlayerCharacter* BasePlayerCharacter);
		void ShowWeapon(bool bIsViewWeapon, bool bIsCheckSheathe, bool bIsCopyAnimation);
		void UpdateWeapon();
		void GetFidgetStateName(bool* IsValid, class FString* OutStateName);
		void SetCharaCreateParameterOnly(const struct FSBCharaCreateParameter& CharaCreateParameter);
		void SetCostumePartsDataMain(const struct FSBMasterCostume& CostumeData, int32_t ColorIndex, int32_t ColorSaturation, int32_t ColorValue, int32_t InMaterialIndex);
		void SetCostumePartsDataByUniqueId(const struct FSBMasterCostume& CostumeData, const class FString& InUniqueId);
		void SetCostumePartsData(const struct FSBMasterCostume& CostumeData);
		void SetIsAvatarNaked(bool InIsNaked);
		void FindStateName(const class FString& InStateName, int32_t* OutNo);
		void GetStateNum(int32_t* OutNum);
		void GetStateName(int32_t InStateNameNo, bool* IsValid, class FString* OutStateName);
		void GetStateMachineName(class FString* OutName);
		void GetCurrentAvatarPosingAnimStateName(class FString* OutAnimStateName);
		void RefreshAvatar();
		void UpdateAvatarFromPlayerCharacter();
		void UpdateAvatar(const struct FSBCharaCreateParameter& InNewCharaCreateParameter);
		void ReceiveBeginPlay();
		void OnChangeState_(const class FString& InPrevStateName, const class FString& InNextStateName);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void TestShowAvatarEquipWeapon_Event(bool bIsShowWeapon, bool bIsCheckSheathe, bool bIsCopyAnimation);
		void ShowWeapon_Debug(bool bShow);
		void ExecuteUbergraph_BP_PlayerSceneCapture2D(int32_t EntryPoint);
		void TestShowAvatarEquipWeapon__DelegateSignature(bool bIsShowWeapon, bool bIsCheckSheathe, bool bIsCopyAnimation);
		void OnChangeState__DelegateSignature(const class FString& InPrevStateName, const class FString& InNextStateName);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
