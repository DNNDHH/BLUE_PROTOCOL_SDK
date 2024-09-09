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
	 * WidgetBlueprintGeneratedClass LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C
	 * Size -> 0x0060 (FullSize[0x02D8] - InheritedSize[0x0278])
	 */
	class ULibraryMenu_EnemyCaptureStudio_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Captured_Enemy;                                          // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ALibraryMenu_CaptureStudio_C*                        CaptureStudio;                                           // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnCaptureStudioConstructed;                              // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       ActiveRotate;                                            // 0x02A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ActiveMove;                                              // 0x02A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ActiveZoom;                                              // 0x02A2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_W2ED[0x5];                                   // 0x02A3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnLoadAssetComplete;                                     // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FString                                              TargetEnemy;                                             // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnModelLoadedAllMip;                                     // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void SetEnemyModelCameraState(float Scale, float Rotate, float CameraHeight, float SideOffset);
		void ModelDelete();
		void GetCaptureModel(class ASBEnemyCharacter** EnemyCharacter);
		void SetStudioHidden(bool InIsHidden);
		void SetupandLoadAsset(const class FScriptDelegate& LoadCompleteEvent, const struct FSBLibraryEnemyAppearanceData& EnemyData);
		void SetStudioVisibility(bool InIsVisible);
		void SetCaptureZoomActive(bool ActiveZoom);
		void SetCaptureRotateActive(bool ActiveRotate);
		void SetCaptureMoveActive(bool ActiveMove);
		void Construct();
		void Construct_Studio();
		void ApplyExternalDirectionalLightRotation();
		void LoadAsset(const class FString& EnemyCharacterId, ESBLibraryEnemyViewSetting ViewSetting, ESBLibraryEnemyWeaponSetting WeaponSetting);
		void OnModelLoaded();
		void Destruct();
		void DoDisableCaptureStudio();
		void DoEnableCaptureStudio();
		void SetEnableCaptureStudio(bool enable);
		void SetExternalDirectionalLightRotation(const struct FRotator& Rotation);
		void ModelStateUpdate();
		void OnModelLoadedAllMipDelegate();
		void ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio(int32_t EntryPoint);
		void OnModelLoadedAllMip__DelegateSignature();
		void OnLoadAssetComplete__DelegateSignature();
		void OnCaptureStudioConstructed__DelegateSignature(class ABP_CaptureStudioBase_C* InConstructedCaptureStudio);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
