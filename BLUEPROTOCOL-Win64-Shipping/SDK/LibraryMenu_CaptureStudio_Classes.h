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
	 * BlueprintGeneratedClass LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C
	 * Size -> 0x0079 (FullSize[0x0418] - InheritedSize[0x039F])
	 */
	class ALibraryMenu_CaptureStudio_C : public ABP_CaptureStudioBase_C
	{
	public:
		unsigned char                                              UnknownData_PWOG[0x1];                                   // 0x039F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UChildActorComponent*                                ModelActor;                                              // 0x03A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnModelLoadedDelegate;                                   // 0x03B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UBP_EF_Avaritelia_C*                                 CheckAvariteliaComponent;                                // 0x03C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UParticleSystemComponent*>                    ParticleCompList;                                        // 0x03C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class USBParticleSystemComponent*>                  ParticleComponent;                                       // 0x03D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class USBParticleSystemComponent*>                  RegistEffectCompList;                                    // 0x03E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class ASBWeapon*>                                   WeaponList;                                              // 0x03F8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnModelLoadedAllMipDelegate;                             // 0x0408(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void NormalEffectCheck();
		void AvariteliaEffectCheck();
		void SetCameraPosition(float Scale, float Rotate, float CameraHeight, float SideOffset);
		void ModelDelete();
		void SetupCameraPosition();
		void GetCaptureModel(class ASBEnemyCharacter** EnemyCharacter);
		void WeaponSetup(class ASBEnemyCharacter* EnemyCharacter);
		void RegistShowActorModel();
		void ResetModel();
		void ReceiveBeginPlay();
		void OnSetModelDataEvent(bool Result);
		void LoadModelAsset(const class FString& EnemyCharacterId, ESBLibraryEnemyViewSetting ViewSetting, ESBLibraryEnemyWeaponSetting WeaponSetting);
		void ModelStateUpdate();
		void OnSetWeaponEvent(class ASBEnemyCharacter* EnemyActor);
		void OnLoadedModelAllMipEvent();
		void ExecuteUbergraph_LibraryMenu_CaptureStudio(int32_t EntryPoint);
		void OnModelLoadedAllMipDelegate__DelegateSignature();
		void OnModelLoadedDelegate__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
