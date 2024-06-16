#pragma once

 

// Package: BP_ImagineForCapture

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ImagineForCapture.BP_ImagineForCapture_C
// 0x0150 (0x0680 - 0x0530)
class ABP_ImagineForCapture_C final : public ASBCaptureStudioCreationCharacter
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0530(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               Effect;                                            // 0x0538(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USBSkeletalMeshComponent*               Weapon2;                                           // 0x0540(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USBSkeletalMeshComponent*               Weapon1;                                           // 0x0548(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USBSkeletalMeshComponent*               SBSkeletalMeshComp;                                // 0x0550(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SkeletalMeshDefaultLocation;                       // 0x0558(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_90D7[0x4];                                     // 0x0564(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCaptureStudioImagineData            ImagineData;                                       // 0x0568(0x00D8)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnSetImagineData;                                  // 0x0640(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class USBSkeletalMeshComponent*>       WeaponMeshes;                                      // 0x0650(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class USBSkeletalMeshComponent*>       LoadedModelList;                                   // 0x0660(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          ImagineVisible;                                    // 0x0670(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90D8[0x3];                                     // 0x0671(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AllMipLoadedWaitSeconds;                           // 0x0674(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseCharaCreate;                                    // 0x0678(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          EnableReceiveTick;                                 // 0x0679(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnSetImagineData__DelegateSignature(bool bResult);
	void ExecuteUbergraph_BP_ImagineForCapture(int32 EntryPoint);
	void OnCreateLoaded(const bool bInResult);
	void ReceiveTick(float DeltaSeconds);
	void OnAssetLoaded(const bool bInResult);
	void SetImagineData(int32 InImagineId);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void SetWeapons();
	void FindCaptureImagineData(int32 InImagineId, struct FSBCaptureStudioImagineData* Param_ImagineData, bool* bExist);
	void ApplyImagineData();
	class USBSkeletalMeshComponent* GetTargetBodyMesh();
	bool Update_Chara_Create_Component();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ImagineForCapture_C">();
	}
	static class ABP_ImagineForCapture_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ImagineForCapture_C>();
	}
};
static_assert(alignof(ABP_ImagineForCapture_C) == 0x000010, "Wrong alignment on ABP_ImagineForCapture_C");
static_assert(sizeof(ABP_ImagineForCapture_C) == 0x000680, "Wrong size on ABP_ImagineForCapture_C");
static_assert(offsetof(ABP_ImagineForCapture_C, UberGraphFrame) == 0x000530, "Member 'ABP_ImagineForCapture_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ImagineForCapture_C, Effect) == 0x000538, "Member 'ABP_ImagineForCapture_C::Effect' has a wrong offset!");
static_assert(offsetof(ABP_ImagineForCapture_C, Weapon2) == 0x000540, "Member 'ABP_ImagineForCapture_C::Weapon2' has a wrong offset!");
static_assert(offsetof(ABP_ImagineForCapture_C, Weapon1) == 0x000548, "Member 'ABP_ImagineForCapture_C::Weapon1' has a wrong offset!");
static_assert(offsetof(ABP_ImagineForCapture_C, SBSkeletalMeshComp) == 0x000550, "Member 'ABP_ImagineForCapture_C::SBSkeletalMeshComp' has a wrong offset!");
static_assert(offsetof(ABP_ImagineForCapture_C, SkeletalMeshDefaultLocation) == 0x000558, "Member 'ABP_ImagineForCapture_C::SkeletalMeshDefaultLocation' has a wrong offset!");
static_assert(offsetof(ABP_ImagineForCapture_C, ImagineData) == 0x000568, "Member 'ABP_ImagineForCapture_C::ImagineData' has a wrong offset!");
static_assert(offsetof(ABP_ImagineForCapture_C, OnSetImagineData) == 0x000640, "Member 'ABP_ImagineForCapture_C::OnSetImagineData' has a wrong offset!");
static_assert(offsetof(ABP_ImagineForCapture_C, WeaponMeshes) == 0x000650, "Member 'ABP_ImagineForCapture_C::WeaponMeshes' has a wrong offset!");
static_assert(offsetof(ABP_ImagineForCapture_C, LoadedModelList) == 0x000660, "Member 'ABP_ImagineForCapture_C::LoadedModelList' has a wrong offset!");
static_assert(offsetof(ABP_ImagineForCapture_C, ImagineVisible) == 0x000670, "Member 'ABP_ImagineForCapture_C::ImagineVisible' has a wrong offset!");
static_assert(offsetof(ABP_ImagineForCapture_C, AllMipLoadedWaitSeconds) == 0x000674, "Member 'ABP_ImagineForCapture_C::AllMipLoadedWaitSeconds' has a wrong offset!");
static_assert(offsetof(ABP_ImagineForCapture_C, UseCharaCreate) == 0x000678, "Member 'ABP_ImagineForCapture_C::UseCharaCreate' has a wrong offset!");
static_assert(offsetof(ABP_ImagineForCapture_C, EnableReceiveTick) == 0x000679, "Member 'ABP_ImagineForCapture_C::EnableReceiveTick' has a wrong offset!");

}

