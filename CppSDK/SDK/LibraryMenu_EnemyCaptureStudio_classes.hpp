#pragma once

 

// Package: LibraryMenu_EnemyCaptureStudio

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C
// 0x0060 (0x02D8 - 0x0278)
class ULibraryMenu_EnemyCaptureStudio_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Captured_Enemy;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ALibraryMenu_CaptureStudio_C*           CaptureStudio;                                     // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnCaptureStudioConstructed;                        // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          ActiveRotate;                                      // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ActiveMove;                                        // 0x02A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ActiveZoom;                                        // 0x02A2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BDD[0x5];                                     // 0x02A3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnLoadAssetComplete;                               // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 TargetEnemy;                                       // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnModelLoadedAllMip;                               // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnCaptureStudioConstructed__DelegateSignature(class ABP_CaptureStudioBase_C* InConstructedCaptureStudio);
	void OnLoadAssetComplete__DelegateSignature();
	void OnModelLoadedAllMip__DelegateSignature();
	void ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio(int32 EntryPoint);
	void OnModelLoadedAllMipDelegate();
	void ModelStateUpdate();
	void SetExternalDirectionalLightRotation(const struct FRotator& Rotation);
	void SetEnableCaptureStudio(bool Enable);
	void DoEnableCaptureStudio();
	void DoDisableCaptureStudio();
	void Destruct();
	void OnModelLoaded();
	void LoadAsset(const class FString& EnemyCharacterId, ESBLibraryEnemyViewSetting ViewSetting, ESBLibraryEnemyWeaponSetting WeaponSetting);
	void ApplyExternalDirectionalLightRotation();
	void Construct_Studio();
	void Construct();
	void SetCaptureMoveActive(bool Param_ActiveMove);
	void SetCaptureRotateActive(bool Param_ActiveRotate);
	void SetCaptureZoomActive(bool Param_ActiveZoom);
	void SetStudioVisibility(bool InIsVisible);
	void Setup_and_Load_Asset(const TDelegate<void()>& LoadCompleteEvent, const struct FSBLibraryEnemyAppearanceData& EnemyData);
	void SetStudioHidden(bool InIsHidden);
	void GetCaptureModel(class ASBEnemyCharacter** EnemyCharacter);
	void ModelDelete();
	void SetEnemyModelCameraState(float Scale, float Rotate, float CameraHeight, float SideOffset);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LibraryMenu_EnemyCaptureStudio_C">();
	}
	static class ULibraryMenu_EnemyCaptureStudio_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULibraryMenu_EnemyCaptureStudio_C>();
	}
};
static_assert(alignof(ULibraryMenu_EnemyCaptureStudio_C) == 0x000008, "Wrong alignment on ULibraryMenu_EnemyCaptureStudio_C");
static_assert(sizeof(ULibraryMenu_EnemyCaptureStudio_C) == 0x0002D8, "Wrong size on ULibraryMenu_EnemyCaptureStudio_C");
static_assert(offsetof(ULibraryMenu_EnemyCaptureStudio_C, UberGraphFrame) == 0x000278, "Member 'ULibraryMenu_EnemyCaptureStudio_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_EnemyCaptureStudio_C, Captured_Enemy) == 0x000280, "Member 'ULibraryMenu_EnemyCaptureStudio_C::Captured_Enemy' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_EnemyCaptureStudio_C, CaptureStudio) == 0x000288, "Member 'ULibraryMenu_EnemyCaptureStudio_C::CaptureStudio' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_EnemyCaptureStudio_C, OnCaptureStudioConstructed) == 0x000290, "Member 'ULibraryMenu_EnemyCaptureStudio_C::OnCaptureStudioConstructed' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_EnemyCaptureStudio_C, ActiveRotate) == 0x0002A0, "Member 'ULibraryMenu_EnemyCaptureStudio_C::ActiveRotate' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_EnemyCaptureStudio_C, ActiveMove) == 0x0002A1, "Member 'ULibraryMenu_EnemyCaptureStudio_C::ActiveMove' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_EnemyCaptureStudio_C, ActiveZoom) == 0x0002A2, "Member 'ULibraryMenu_EnemyCaptureStudio_C::ActiveZoom' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_EnemyCaptureStudio_C, OnLoadAssetComplete) == 0x0002A8, "Member 'ULibraryMenu_EnemyCaptureStudio_C::OnLoadAssetComplete' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_EnemyCaptureStudio_C, TargetEnemy) == 0x0002B8, "Member 'ULibraryMenu_EnemyCaptureStudio_C::TargetEnemy' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_EnemyCaptureStudio_C, OnModelLoadedAllMip) == 0x0002C8, "Member 'ULibraryMenu_EnemyCaptureStudio_C::OnModelLoadedAllMip' has a wrong offset!");

}

