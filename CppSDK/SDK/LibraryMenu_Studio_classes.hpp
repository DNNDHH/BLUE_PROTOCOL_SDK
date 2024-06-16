#pragma once

 

// Package: LibraryMenu_Studio

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass LibraryMenu_Studio.LibraryMenu_Studio_C
// 0x0080 (0x05A0 - 0x0520)
class ALibraryMenu_Studio_C final : public ASBCaptureStudioBaseActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0520(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        Pivot;                                             // 0x0528(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FString                                 ModelId;                                           // 0x0530(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class ASBEnemyCharacter*                      ModelActor;                                        // 0x0540(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSetModelData;                                    // 0x0548(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FRotator                               BaseRotation;                                      // 0x0558(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D56[0x4];                                     // 0x0564(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBLibraryEnemyLoadCheck*               CheckActor;                                        // 0x0568(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnWeaponSetup;                                     // 0x0570(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsRequest;                                         // 0x0580(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsLoading;                                         // 0x0581(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DelayWait;                                         // 0x0582(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsForceMipLoaded;                                 // 0x0583(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D57[0x4];                                     // 0x0584(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnLoadedModelAllMip;                               // 0x0588(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnSetModelData__DelegateSignature(bool Result);
	void OnWeaponSetup__DelegateSignature(class ASBEnemyCharacter* EnemyActor);
	void OnLoadedModelAllMip__DelegateSignature();
	void ExecuteUbergraph_LibraryMenu_Studio(int32 EntryPoint);
	void OnWeaponEquip(class ASBEnemyCharacter* EnemyCharacter);
	void ReceiveDestroyed();
	void OnLoadEvent();
	void SetEnemyModelId(const class FString& ID, ESBLibraryEnemyViewSetting ViewSetting, ESBLibraryEnemyWeaponSetting WeaponSetting);
	void OnAssetLoaded(const bool bInResult);
	void ReceiveTick(float DeltaSeconds);
	void LoadEnemyAsset();
	void ModelSetup();
	void GetModelActor(class AActor** Actor);
	void WeaponSetup(bool* IsComplete);
	void ModelDelete();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LibraryMenu_Studio_C">();
	}
	static class ALibraryMenu_Studio_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALibraryMenu_Studio_C>();
	}
};
static_assert(alignof(ALibraryMenu_Studio_C) == 0x000010, "Wrong alignment on ALibraryMenu_Studio_C");
static_assert(sizeof(ALibraryMenu_Studio_C) == 0x0005A0, "Wrong size on ALibraryMenu_Studio_C");
static_assert(offsetof(ALibraryMenu_Studio_C, UberGraphFrame) == 0x000520, "Member 'ALibraryMenu_Studio_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ALibraryMenu_Studio_C, Pivot) == 0x000528, "Member 'ALibraryMenu_Studio_C::Pivot' has a wrong offset!");
static_assert(offsetof(ALibraryMenu_Studio_C, ModelId) == 0x000530, "Member 'ALibraryMenu_Studio_C::ModelId' has a wrong offset!");
static_assert(offsetof(ALibraryMenu_Studio_C, ModelActor) == 0x000540, "Member 'ALibraryMenu_Studio_C::ModelActor' has a wrong offset!");
static_assert(offsetof(ALibraryMenu_Studio_C, OnSetModelData) == 0x000548, "Member 'ALibraryMenu_Studio_C::OnSetModelData' has a wrong offset!");
static_assert(offsetof(ALibraryMenu_Studio_C, BaseRotation) == 0x000558, "Member 'ALibraryMenu_Studio_C::BaseRotation' has a wrong offset!");
static_assert(offsetof(ALibraryMenu_Studio_C, CheckActor) == 0x000568, "Member 'ALibraryMenu_Studio_C::CheckActor' has a wrong offset!");
static_assert(offsetof(ALibraryMenu_Studio_C, OnWeaponSetup) == 0x000570, "Member 'ALibraryMenu_Studio_C::OnWeaponSetup' has a wrong offset!");
static_assert(offsetof(ALibraryMenu_Studio_C, IsRequest) == 0x000580, "Member 'ALibraryMenu_Studio_C::IsRequest' has a wrong offset!");
static_assert(offsetof(ALibraryMenu_Studio_C, IsLoading) == 0x000581, "Member 'ALibraryMenu_Studio_C::IsLoading' has a wrong offset!");
static_assert(offsetof(ALibraryMenu_Studio_C, DelayWait) == 0x000582, "Member 'ALibraryMenu_Studio_C::DelayWait' has a wrong offset!");
static_assert(offsetof(ALibraryMenu_Studio_C, bIsForceMipLoaded) == 0x000583, "Member 'ALibraryMenu_Studio_C::bIsForceMipLoaded' has a wrong offset!");
static_assert(offsetof(ALibraryMenu_Studio_C, OnLoadedModelAllMip) == 0x000588, "Member 'ALibraryMenu_Studio_C::OnLoadedModelAllMip' has a wrong offset!");

}

