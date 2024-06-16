#pragma once

 

// Package: BP_MannequinForCapture_Studio

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ST_MannequinForCapture_Info_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "CharaParts_structs.hpp"
#include "BP_CaptureStudioBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C
// 0x00F0 (0x0490 - 0x03A0)
class ABP_MannequinForCapture_Studio_C final : public ABP_CaptureStudioBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_MannequinForCapture_Studio_C;    // 0x03A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                   MaleMannequinComp;                                 // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   FemaleMannequinComp;                               // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               MannequinDefaultRotation;                          // 0x03B8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsMaleActive;                                      // 0x03C4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DE6[0xB];                                     // 0x03C5(0x000B)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             MannequinDefaultTransform;                         // 0x03D0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                         NextCostumeItemId;                                 // 0x0400(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NextIsOwnItem;                                     // 0x0404(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DE7[0x3];                                     // 0x0405(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NextOwnCostumeColorId;                             // 0x0408(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_MannequinForCapture_Info           CurrCostumeMannequinInfo;                          // 0x040C(0x0030)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                MannequinDefaultLocation;                          // 0x043C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NextOwnCostumeColorS;                              // 0x0448(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NextOwnCostumeColorV;                              // 0x044C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           HeightGradColor_Default;                           // 0x0450(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           HeightGradColorSkin_Default;                       // 0x0460(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnCostumeLoadedDelegete;                           // 0x0470(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	EProtectorCategory                            ProtectorCategory;                                 // 0x0480(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7DE8[0x3];                                     // 0x0481(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CostumeItemId;                                     // 0x0484(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NoResetLocAndRot;                                  // 0x0488(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DE9[0x3];                                     // 0x0489(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NextOwnCostumeMaterialId;                          // 0x048C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnCostumeLoadedDelegete__DelegateSignature();
	void ExecuteUbergraph_BP_MannequinForCapture_Studio(int32 EntryPoint);
	void CostumeLoaded();
	void SwitchActiveMannequin_LoadAssetAfter(bool Param_IsMaleActive, EProtectorCategory InProtectorCategory, int32 InCostumeItemId, bool InIsNoResetLocAndRot);
	void CostumeFemaleLoadEnd(bool Result);
	void CostumeMaleLoadEnd(bool Result);
	void ResetModelAndCameraTransform();
	void ResetMannequin();
	void SetCostumeToMannequin(int32 InCostumeItemIndex, bool IsOwnItem, int32 InOwnCostumeColorId, const int32 InOwnCostumeColorS, int32 InOwnCostumeColorV, int32 InOwnCostumeMaterialId);
	void SwitchActiveMannequin(bool Param_IsMaleActive, EProtectorCategory InProtectorCategory, int32 InCostumeItemId, bool InIsNoResetLocAndRot);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void SetMannequinVisibility(bool IsVisible);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void ResetMannequinAndCameraToDefaultTrans();
	void DestroyAllChildComponents();
	void GetMannequinCameraSettingInfoFromType(EProtectorCategory InCostumType, bool InIsMale, struct FST_MannequinForCapture_Info* OutCostumeMannequinInfo);
	void SetMannequinAndCameraByCostumeType(EProtectorCategory InCostumeType, int32 InCostumeId);
	void SetMannequinGradationEnable(bool InIsEnable);
	void IsPartsLoaded(class UChildActorComponent* Target, bool* Result);
	void GetMannequinArrangementCameraSettingInfo(int32 InCostumeId, bool InIsMale, bool* IsValid, struct FST_MannequinForCapture_CameraSettingInfo* OutArrangementCameraSettingInfo);
	void GetActiveMannequin(class ASBCharaCreateCharacter** AsSBChara_Create_Character);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MannequinForCapture_Studio_C">();
	}
	static class ABP_MannequinForCapture_Studio_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MannequinForCapture_Studio_C>();
	}
};
static_assert(alignof(ABP_MannequinForCapture_Studio_C) == 0x000010, "Wrong alignment on ABP_MannequinForCapture_Studio_C");
static_assert(sizeof(ABP_MannequinForCapture_Studio_C) == 0x000490, "Wrong size on ABP_MannequinForCapture_Studio_C");
static_assert(offsetof(ABP_MannequinForCapture_Studio_C, UberGraphFrame_BP_MannequinForCapture_Studio_C) == 0x0003A0, "Member 'ABP_MannequinForCapture_Studio_C::UberGraphFrame_BP_MannequinForCapture_Studio_C' has a wrong offset!");
static_assert(offsetof(ABP_MannequinForCapture_Studio_C, MaleMannequinComp) == 0x0003A8, "Member 'ABP_MannequinForCapture_Studio_C::MaleMannequinComp' has a wrong offset!");
static_assert(offsetof(ABP_MannequinForCapture_Studio_C, FemaleMannequinComp) == 0x0003B0, "Member 'ABP_MannequinForCapture_Studio_C::FemaleMannequinComp' has a wrong offset!");
static_assert(offsetof(ABP_MannequinForCapture_Studio_C, MannequinDefaultRotation) == 0x0003B8, "Member 'ABP_MannequinForCapture_Studio_C::MannequinDefaultRotation' has a wrong offset!");
static_assert(offsetof(ABP_MannequinForCapture_Studio_C, IsMaleActive) == 0x0003C4, "Member 'ABP_MannequinForCapture_Studio_C::IsMaleActive' has a wrong offset!");
static_assert(offsetof(ABP_MannequinForCapture_Studio_C, MannequinDefaultTransform) == 0x0003D0, "Member 'ABP_MannequinForCapture_Studio_C::MannequinDefaultTransform' has a wrong offset!");
static_assert(offsetof(ABP_MannequinForCapture_Studio_C, NextCostumeItemId) == 0x000400, "Member 'ABP_MannequinForCapture_Studio_C::NextCostumeItemId' has a wrong offset!");
static_assert(offsetof(ABP_MannequinForCapture_Studio_C, NextIsOwnItem) == 0x000404, "Member 'ABP_MannequinForCapture_Studio_C::NextIsOwnItem' has a wrong offset!");
static_assert(offsetof(ABP_MannequinForCapture_Studio_C, NextOwnCostumeColorId) == 0x000408, "Member 'ABP_MannequinForCapture_Studio_C::NextOwnCostumeColorId' has a wrong offset!");
static_assert(offsetof(ABP_MannequinForCapture_Studio_C, CurrCostumeMannequinInfo) == 0x00040C, "Member 'ABP_MannequinForCapture_Studio_C::CurrCostumeMannequinInfo' has a wrong offset!");
static_assert(offsetof(ABP_MannequinForCapture_Studio_C, MannequinDefaultLocation) == 0x00043C, "Member 'ABP_MannequinForCapture_Studio_C::MannequinDefaultLocation' has a wrong offset!");
static_assert(offsetof(ABP_MannequinForCapture_Studio_C, NextOwnCostumeColorS) == 0x000448, "Member 'ABP_MannequinForCapture_Studio_C::NextOwnCostumeColorS' has a wrong offset!");
static_assert(offsetof(ABP_MannequinForCapture_Studio_C, NextOwnCostumeColorV) == 0x00044C, "Member 'ABP_MannequinForCapture_Studio_C::NextOwnCostumeColorV' has a wrong offset!");
static_assert(offsetof(ABP_MannequinForCapture_Studio_C, HeightGradColor_Default) == 0x000450, "Member 'ABP_MannequinForCapture_Studio_C::HeightGradColor_Default' has a wrong offset!");
static_assert(offsetof(ABP_MannequinForCapture_Studio_C, HeightGradColorSkin_Default) == 0x000460, "Member 'ABP_MannequinForCapture_Studio_C::HeightGradColorSkin_Default' has a wrong offset!");
static_assert(offsetof(ABP_MannequinForCapture_Studio_C, OnCostumeLoadedDelegete) == 0x000470, "Member 'ABP_MannequinForCapture_Studio_C::OnCostumeLoadedDelegete' has a wrong offset!");
static_assert(offsetof(ABP_MannequinForCapture_Studio_C, ProtectorCategory) == 0x000480, "Member 'ABP_MannequinForCapture_Studio_C::ProtectorCategory' has a wrong offset!");
static_assert(offsetof(ABP_MannequinForCapture_Studio_C, CostumeItemId) == 0x000484, "Member 'ABP_MannequinForCapture_Studio_C::CostumeItemId' has a wrong offset!");
static_assert(offsetof(ABP_MannequinForCapture_Studio_C, NoResetLocAndRot) == 0x000488, "Member 'ABP_MannequinForCapture_Studio_C::NoResetLocAndRot' has a wrong offset!");
static_assert(offsetof(ABP_MannequinForCapture_Studio_C, NextOwnCostumeMaterialId) == 0x00048C, "Member 'ABP_MannequinForCapture_Studio_C::NextOwnCostumeMaterialId' has a wrong offset!");

}

