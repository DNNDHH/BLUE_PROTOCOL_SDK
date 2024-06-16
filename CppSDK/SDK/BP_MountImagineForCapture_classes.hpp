#pragma once

 

// Package: BP_MountImagineForCapture

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MountImagineForCapture.BP_MountImagineForCapture_C
// 0x0150 (0x0670 - 0x0520)
class ABP_MountImagineForCapture_C final : public ASBCaptureStudioBaseActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0520(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBSkeletalMeshComponent*               Weapon2;                                           // 0x0528(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USBSkeletalMeshComponent*               Weapon1;                                           // 0x0530(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USBSkeletalMeshComponent*               SBSkeletalMeshComp;                                // 0x0538(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Effect;                                            // 0x0540(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Pivot;                                             // 0x0548(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SkeletalMeshDefaultLocation;                       // 0x0550(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9B16[0x4];                                     // 0x055C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCaptureStudioImagineData            ImagineData;                                       // 0x0560(0x00D8)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnSetImagineData;                                  // 0x0638(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                         AllMipLoadedWaitSeconds;                           // 0x0648(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ImagineVisible;                                    // 0x064C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B17[0x3];                                     // 0x064D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USBSkeletalMeshComponent*>       WeaponMeshes;                                      // 0x0650(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class USBSkeletalMeshComponent*>       LoadedModelList;                                   // 0x0660(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void OnSetImagineData__DelegateSignature(bool bResult);
	void ExecuteUbergraph_BP_MountImagineForCapture(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void OnAssetLoaded(const bool bInResult);
	void SetImagineData(int32 InImagineId);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void Set_Weapons();
	void FindCaptureImagineData(int32 InImagineId, struct FSBCaptureStudioImagineData* Param_ImagineData, bool* bExist);
	void ApplyImagineData();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MountImagineForCapture_C">();
	}
	static class ABP_MountImagineForCapture_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MountImagineForCapture_C>();
	}
};
static_assert(alignof(ABP_MountImagineForCapture_C) == 0x000010, "Wrong alignment on ABP_MountImagineForCapture_C");
static_assert(sizeof(ABP_MountImagineForCapture_C) == 0x000670, "Wrong size on ABP_MountImagineForCapture_C");
static_assert(offsetof(ABP_MountImagineForCapture_C, UberGraphFrame) == 0x000520, "Member 'ABP_MountImagineForCapture_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_MountImagineForCapture_C, Weapon2) == 0x000528, "Member 'ABP_MountImagineForCapture_C::Weapon2' has a wrong offset!");
static_assert(offsetof(ABP_MountImagineForCapture_C, Weapon1) == 0x000530, "Member 'ABP_MountImagineForCapture_C::Weapon1' has a wrong offset!");
static_assert(offsetof(ABP_MountImagineForCapture_C, SBSkeletalMeshComp) == 0x000538, "Member 'ABP_MountImagineForCapture_C::SBSkeletalMeshComp' has a wrong offset!");
static_assert(offsetof(ABP_MountImagineForCapture_C, Effect) == 0x000540, "Member 'ABP_MountImagineForCapture_C::Effect' has a wrong offset!");
static_assert(offsetof(ABP_MountImagineForCapture_C, Pivot) == 0x000548, "Member 'ABP_MountImagineForCapture_C::Pivot' has a wrong offset!");
static_assert(offsetof(ABP_MountImagineForCapture_C, SkeletalMeshDefaultLocation) == 0x000550, "Member 'ABP_MountImagineForCapture_C::SkeletalMeshDefaultLocation' has a wrong offset!");
static_assert(offsetof(ABP_MountImagineForCapture_C, ImagineData) == 0x000560, "Member 'ABP_MountImagineForCapture_C::ImagineData' has a wrong offset!");
static_assert(offsetof(ABP_MountImagineForCapture_C, OnSetImagineData) == 0x000638, "Member 'ABP_MountImagineForCapture_C::OnSetImagineData' has a wrong offset!");
static_assert(offsetof(ABP_MountImagineForCapture_C, AllMipLoadedWaitSeconds) == 0x000648, "Member 'ABP_MountImagineForCapture_C::AllMipLoadedWaitSeconds' has a wrong offset!");
static_assert(offsetof(ABP_MountImagineForCapture_C, ImagineVisible) == 0x00064C, "Member 'ABP_MountImagineForCapture_C::ImagineVisible' has a wrong offset!");
static_assert(offsetof(ABP_MountImagineForCapture_C, WeaponMeshes) == 0x000650, "Member 'ABP_MountImagineForCapture_C::WeaponMeshes' has a wrong offset!");
static_assert(offsetof(ABP_MountImagineForCapture_C, LoadedModelList) == 0x000660, "Member 'ABP_MountImagineForCapture_C::LoadedModelList' has a wrong offset!");

}

