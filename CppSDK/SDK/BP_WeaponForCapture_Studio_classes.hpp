#pragma once

 

// Package: BP_WeaponForCapture_Studio

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "BP_CaptureStudioBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C
// 0x0120 (0x04C0 - 0x03A0)
class ABP_WeaponForCapture_Studio_C final : public ABP_CaptureStudioBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_WeaponForCapture_Studio_C;       // 0x03A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                   MainWeaponMesh;                                    // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   SubWeaponMesh;                                     // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   MainWeaponMesh_3;                                  // 0x03B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   MainWeaponMesh_2;                                  // 0x03C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         MainWeaponNum;                                     // 0x03C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MainWeaponNumMax;                                  // 0x03CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UChildActorComponent*>           MainWeapons;                                       // 0x03D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          IsMainWeaponLoaded;                                // 0x03E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsSubWeaponLoaded;                                 // 0x03E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B5B[0x6];                                     // 0x03E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CurrWeaponMasterData;                              // 0x03E8(0x00B0)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          HasSubWeapon;                                      // 0x0498(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B5C[0x7];                                     // 0x0499(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnWeaponLoadedDelegete;                            // 0x04A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         LoadCnt;                                           // 0x04B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnWeaponLoadedDelegete__DelegateSignature();
	void ExecuteUbergraph_BP_WeaponForCapture_Studio(int32 EntryPoint);
	void SetAllWeaponVisibility(bool IsVisible);
	void OnLoadWeaponAssetDelegate_____(const int32 WeaponID, const bool IsMain, const TArray<class ASBWeapon*>& Weapons);
	void LoadWeaponAsset(int32 InWeaponItemId);
	void SetSubWeaponVisibility(bool IsVisible);
	void SetWeaponVisibility(bool IsVisible);
	void DestroyAllChildComponents();
	void SetMainWeaponNum(int32 InWeaponNum);
	void ResetWeapon();
	void GetWeaponInfoFromType(ESBWeaponType InWeaponType, struct FST_WeaponForCapture_Info* OutWeaponInfo);
	void SetMainWeapon(int32 InWeaponID, TArray<class ASBWeapon*>& InWeaponAssets);
	void SetSubWeapon(int32 InWeaponID, TArray<class ASBWeapon*>& InWeaponAssets);
	void SetSceneCaptureEveryFrameFlag(bool InIsCaptureEveryFrame);
	void CaptureScene();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_WeaponForCapture_Studio_C">();
	}
	static class ABP_WeaponForCapture_Studio_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_WeaponForCapture_Studio_C>();
	}
};
static_assert(alignof(ABP_WeaponForCapture_Studio_C) == 0x000010, "Wrong alignment on ABP_WeaponForCapture_Studio_C");
static_assert(sizeof(ABP_WeaponForCapture_Studio_C) == 0x0004C0, "Wrong size on ABP_WeaponForCapture_Studio_C");
static_assert(offsetof(ABP_WeaponForCapture_Studio_C, UberGraphFrame_BP_WeaponForCapture_Studio_C) == 0x0003A0, "Member 'ABP_WeaponForCapture_Studio_C::UberGraphFrame_BP_WeaponForCapture_Studio_C' has a wrong offset!");
static_assert(offsetof(ABP_WeaponForCapture_Studio_C, MainWeaponMesh) == 0x0003A8, "Member 'ABP_WeaponForCapture_Studio_C::MainWeaponMesh' has a wrong offset!");
static_assert(offsetof(ABP_WeaponForCapture_Studio_C, SubWeaponMesh) == 0x0003B0, "Member 'ABP_WeaponForCapture_Studio_C::SubWeaponMesh' has a wrong offset!");
static_assert(offsetof(ABP_WeaponForCapture_Studio_C, MainWeaponMesh_3) == 0x0003B8, "Member 'ABP_WeaponForCapture_Studio_C::MainWeaponMesh_3' has a wrong offset!");
static_assert(offsetof(ABP_WeaponForCapture_Studio_C, MainWeaponMesh_2) == 0x0003C0, "Member 'ABP_WeaponForCapture_Studio_C::MainWeaponMesh_2' has a wrong offset!");
static_assert(offsetof(ABP_WeaponForCapture_Studio_C, MainWeaponNum) == 0x0003C8, "Member 'ABP_WeaponForCapture_Studio_C::MainWeaponNum' has a wrong offset!");
static_assert(offsetof(ABP_WeaponForCapture_Studio_C, MainWeaponNumMax) == 0x0003CC, "Member 'ABP_WeaponForCapture_Studio_C::MainWeaponNumMax' has a wrong offset!");
static_assert(offsetof(ABP_WeaponForCapture_Studio_C, MainWeapons) == 0x0003D0, "Member 'ABP_WeaponForCapture_Studio_C::MainWeapons' has a wrong offset!");
static_assert(offsetof(ABP_WeaponForCapture_Studio_C, IsMainWeaponLoaded) == 0x0003E0, "Member 'ABP_WeaponForCapture_Studio_C::IsMainWeaponLoaded' has a wrong offset!");
static_assert(offsetof(ABP_WeaponForCapture_Studio_C, IsSubWeaponLoaded) == 0x0003E1, "Member 'ABP_WeaponForCapture_Studio_C::IsSubWeaponLoaded' has a wrong offset!");
static_assert(offsetof(ABP_WeaponForCapture_Studio_C, CurrWeaponMasterData) == 0x0003E8, "Member 'ABP_WeaponForCapture_Studio_C::CurrWeaponMasterData' has a wrong offset!");
static_assert(offsetof(ABP_WeaponForCapture_Studio_C, HasSubWeapon) == 0x000498, "Member 'ABP_WeaponForCapture_Studio_C::HasSubWeapon' has a wrong offset!");
static_assert(offsetof(ABP_WeaponForCapture_Studio_C, OnWeaponLoadedDelegete) == 0x0004A0, "Member 'ABP_WeaponForCapture_Studio_C::OnWeaponLoadedDelegete' has a wrong offset!");
static_assert(offsetof(ABP_WeaponForCapture_Studio_C, LoadCnt) == 0x0004B0, "Member 'ABP_WeaponForCapture_Studio_C::LoadCnt' has a wrong offset!");

}

