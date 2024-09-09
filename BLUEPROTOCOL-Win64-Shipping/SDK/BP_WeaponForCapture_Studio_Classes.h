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
	 * BlueprintGeneratedClass BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C
	 * Size -> 0x012D (FullSize[0x04CC] - InheritedSize[0x039F])
	 */
	class ABP_WeaponForCapture_Studio_C : public ABP_CaptureStudioBase_C
	{
	public:
		unsigned char                                              UnknownData_TSIS[0x1];                                   // 0x039F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UChildActorComponent*                                MainWeaponMesh;                                          // 0x03A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                SubWeaponMesh;                                           // 0x03B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                MainWeaponMesh_4;                                        // 0x03B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                MainWeaponMesh_3;                                        // 0x03C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MainWeaponNum;                                           // 0x03C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MainWeaponNumMax;                                        // 0x03CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UChildActorComponent*>                        MainWeapons;                                             // 0x03D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       IsMainWeaponLoaded;                                      // 0x03E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsSubWeaponLoaded;                                       // 0x03E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_71C5[0x6];                                   // 0x03E2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSBWeaponMasterData                                 CurrWeaponMasterData;                                    // 0x03E8(0x00C8) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       HasSubWeapon;                                            // 0x04B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_46NJ[0x7];                                   // 0x04B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnWeaponLoadedDelegete;                                  // 0x04B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    LoadCnt;                                                 // 0x04C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CaptureScene();
		void SetSceneCaptureEveryFrameFlag(bool InIsCaptureEveryFrame);
		void SetSubWeapon(int32_t InWeaponID, TArray<class ASBWeapon*>* InWeaponAssets);
		void SetMainWeapon(int32_t InWeaponID, TArray<class ASBWeapon*>* InWeaponAssets);
		void GetWeaponInfoFromType(ESBWeaponType InWeaponType, struct FST_WeaponForCapture_Info* OutWeaponInfo);
		void ResetWeapon();
		void SetMainWeaponNum(int32_t InWeaponNum);
		void DestroyAllChildComponents();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void SetWeaponVisibility(bool IsVisible);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void SetSubWeaponVisibility(bool IsVisible);
		void LoadWeaponAsset(int32_t InWeaponItemId);
		void OnLoadWeaponAssetDelegate_(int32_t WeaponID, bool IsMain, TArray<class ASBWeapon*> Weapons);
		void SetAllWeaponVisibility(bool IsVisible);
		void ExecuteUbergraph_BP_WeaponForCapture_Studio(int32_t EntryPoint);
		void OnWeaponLoadedDelegete__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
