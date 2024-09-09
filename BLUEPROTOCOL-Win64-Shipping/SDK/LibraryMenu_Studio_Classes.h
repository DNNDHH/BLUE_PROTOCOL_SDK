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
	 * BlueprintGeneratedClass LibraryMenu_Studio.LibraryMenu_Studio_C
	 * Size -> 0x0070 (FullSize[0x0590] - InheritedSize[0x0520])
	 */
	class ALibraryMenu_Studio_C : public ASBCaptureStudioBaseActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0520(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     Pivot;                                                   // 0x0528(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FString                                              ModelId;                                                 // 0x0530(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSetModelData;                                          // 0x0540(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FRotator                                            BaseRotation;                                            // 0x0550(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OGAC[0x4];                                   // 0x055C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASBLibraryEnemyLoadCheck*                            CheckActor;                                              // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnWeaponSetup;                                           // 0x0568(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsRequest;                                               // 0x0578(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsLoading;                                               // 0x0579(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DelayWait;                                               // 0x057A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsForceMipLoaded;                                       // 0x057B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EM5B[0x4];                                   // 0x057C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnLoadedModelAllMip;                                     // 0x0580(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void ModelDelete();
		void WeaponSetup(bool* IsComplete);
		void GetModelActor(class AActor** Actor);
		void ModelSetup();
		void LoadEnemyAsset();
		void ReceiveTick(float DeltaSeconds);
		void OnAssetLoaded(bool bInResult);
		void SetEnemyModelId(const class FString& ID, ESBLibraryEnemyViewSetting ViewSetting, ESBLibraryEnemyWeaponSetting WeaponSetting);
		void OnLoadEvent();
		void ReceiveDestroyed();
		void OnWeaponEquip(class ASBEnemyCharacter* EnemyCharacter);
		void OnSpawnWeapon(class ASBEnemyCharacter* EnemyCharacter);
		void ExecuteUbergraph_LibraryMenu_Studio(int32_t EntryPoint);
		void OnLoadedModelAllMip__DelegateSignature();
		void OnWeaponSetup__DelegateSignature(class ASBEnemyCharacter* EnemyActor);
		void OnSetModelData__DelegateSignature(bool Result);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
