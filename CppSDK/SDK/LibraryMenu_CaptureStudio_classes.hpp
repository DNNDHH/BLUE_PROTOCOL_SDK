#pragma once

 

// Package: LibraryMenu_CaptureStudio

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_CaptureStudioBase_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C
// 0x0080 (0x0420 - 0x03A0)
class ALibraryMenu_CaptureStudio_C final : public ABP_CaptureStudioBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_LibraryMenu_CaptureStudio_C;        // 0x03A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                   ModelActor;                                        // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnModelLoadedDelegate;                             // 0x03B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UBP_EF_Avaritelia_C*                    CheckAvariteliaComponent;                          // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UParticleSystemComponent*>       ParticleCompList;                                  // 0x03C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class USBParticleSystemComponent*>     ParticleComponent;                                 // 0x03D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class USBParticleSystemComponent*>     RegistEffectCompList;                              // 0x03E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class ASBWeapon*>                      WeaponList;                                        // 0x03F8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnModelLoadedAllMipDelegate;                       // 0x0408(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnModelLoadedDelegate__DelegateSignature();
	void OnModelLoadedAllMipDelegate__DelegateSignature();
	void ExecuteUbergraph_LibraryMenu_CaptureStudio(int32 EntryPoint);
	void OnLoadedModelAllMipEvent();
	void OnSetWeaponEvent(class ASBEnemyCharacter* EnemyActor);
	void ModelStateUpdate();
	void LoadModelAsset(const class FString& EnemyCharacterId, ESBLibraryEnemyViewSetting ViewSetting, ESBLibraryEnemyWeaponSetting WeaponSetting);
	void OnSetModelDataEvent(bool Result);
	void ResetModel();
	void RegistShowActorModel();
	void WeaponSetup(class ASBEnemyCharacter* EnemyCharacter);
	void GetCaptureModel(class ASBEnemyCharacter** EnemyCharacter);
	void SetupCameraPosition();
	void ModelDelete();
	void SetCameraPosition(float Scale, float Rotate, float CameraHeight, float SideOffset);
	void AvariteliaEffectCheck();
	void NormalEffectCheck();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LibraryMenu_CaptureStudio_C">();
	}
	static class ALibraryMenu_CaptureStudio_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALibraryMenu_CaptureStudio_C>();
	}
};
static_assert(alignof(ALibraryMenu_CaptureStudio_C) == 0x000010, "Wrong alignment on ALibraryMenu_CaptureStudio_C");
static_assert(sizeof(ALibraryMenu_CaptureStudio_C) == 0x000420, "Wrong size on ALibraryMenu_CaptureStudio_C");
static_assert(offsetof(ALibraryMenu_CaptureStudio_C, UberGraphFrame_LibraryMenu_CaptureStudio_C) == 0x0003A0, "Member 'ALibraryMenu_CaptureStudio_C::UberGraphFrame_LibraryMenu_CaptureStudio_C' has a wrong offset!");
static_assert(offsetof(ALibraryMenu_CaptureStudio_C, ModelActor) == 0x0003A8, "Member 'ALibraryMenu_CaptureStudio_C::ModelActor' has a wrong offset!");
static_assert(offsetof(ALibraryMenu_CaptureStudio_C, OnModelLoadedDelegate) == 0x0003B0, "Member 'ALibraryMenu_CaptureStudio_C::OnModelLoadedDelegate' has a wrong offset!");
static_assert(offsetof(ALibraryMenu_CaptureStudio_C, CheckAvariteliaComponent) == 0x0003C0, "Member 'ALibraryMenu_CaptureStudio_C::CheckAvariteliaComponent' has a wrong offset!");
static_assert(offsetof(ALibraryMenu_CaptureStudio_C, ParticleCompList) == 0x0003C8, "Member 'ALibraryMenu_CaptureStudio_C::ParticleCompList' has a wrong offset!");
static_assert(offsetof(ALibraryMenu_CaptureStudio_C, ParticleComponent) == 0x0003D8, "Member 'ALibraryMenu_CaptureStudio_C::ParticleComponent' has a wrong offset!");
static_assert(offsetof(ALibraryMenu_CaptureStudio_C, RegistEffectCompList) == 0x0003E8, "Member 'ALibraryMenu_CaptureStudio_C::RegistEffectCompList' has a wrong offset!");
static_assert(offsetof(ALibraryMenu_CaptureStudio_C, WeaponList) == 0x0003F8, "Member 'ALibraryMenu_CaptureStudio_C::WeaponList' has a wrong offset!");
static_assert(offsetof(ALibraryMenu_CaptureStudio_C, OnModelLoadedAllMipDelegate) == 0x000408, "Member 'ALibraryMenu_CaptureStudio_C::OnModelLoadedAllMipDelegate' has a wrong offset!");

}

