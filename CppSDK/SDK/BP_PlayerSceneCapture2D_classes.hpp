#pragma once

 

// Package: BP_PlayerSceneCapture2D

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "CharaParts_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C
// 0x0080 (0x1550 - 0x14D0)
class ABP_PlayerSceneCapture2D_C final : public ASBCharaCreateCharacter
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x14D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBCharaPartsTickComponent*             SBCharaParts_1;                                    // 0x14D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USBCharaPartsTickComponent*             SBCharaParts_0;                                    // 0x14E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FString                                 CurrAvatarPosingAnimStateName;                     // 0x14E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnChangeState;                                     // 0x14F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 StateMachineName;                                  // 0x1508(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class FString>                         StateNameList;                                     // 0x1518(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bIsViewWeapon;                                     // 0x1528(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CE5[0x7];                                     // 0x1529(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             TestShowAvatarEquipWeapon;                         // 0x1530(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsCheckSheathe;                                   // 0x1540(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Is_Copy_Animation;                                 // 0x1541(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CE6[0x6];                                     // 0x1542(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     BasePlayerCharacter;                               // 0x1548(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void OnChangeState__DelegateSignature(const class FString& InPrevStateName, const class FString& InNextStateName);
	void TestShowAvatarEquipWeapon__DelegateSignature(bool bIsShowWeapon, bool Param_bIsCheckSheathe, bool bIsCopyAnimation);
	void ExecuteUbergraph_BP_PlayerSceneCapture2D(int32 EntryPoint);
	void ShowWeapon_Debug(bool bShow);
	void TestShowAvatarEquipWeapon_Event(bool bIsShowWeapon, bool Param_bIsCheckSheathe, bool bIsCopyAnimation);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void OnChangeState_____(const class FString& InPrevStateName, const class FString& InNextStateName);
	void ReceiveBeginPlay();
	void UpdateAvatar(const struct FSBCharaCreateParameter& InNewCharaCreateParameter);
	void UpdateAvatarFromPlayerCharacter();
	void RefreshAvatar();
	void GetCurrentAvatarPosingAnimStateName(class FString* OutAnimStateName);
	void Get_State_Machine_Name(class FString* OutName);
	void Get_State_Name(int32 InStateNameNo, bool* IsValid, class FString* OutStateName);
	void GetStateNum(int32* OutNum);
	void FindStateName(const class FString& InStateName, int32* OutNo);
	void SetIsAvatarNaked(bool InIsNaked);
	void SetCostumePartsData(const struct FSBMasterCostume& CostumeData);
	void SetCostumePartsDataByUniqueId(const struct FSBMasterCostume& CostumeData, const class FString& InUniqueId);
	void SetCostumePartsDataMain(const struct FSBMasterCostume& CostumeData, int32 ColorIndex, int32 ColorSaturation, int32 ColorValue, int32 InMaterialIndex);
	void SetCharaCreateParameterOnly(const struct FSBCharaCreateParameter& Param_CharaCreateParameter);
	void Get_Fidget_State_Name(bool* IsValid, class FString* OutStateName);
	void UpdateWeapon();
	void Show_Weapon(bool Param_bIsViewWeapon, bool Param_bIsCheckSheathe, bool bIsCopyAnimation);
	void InitPhotoMode(class ASBPlayerCharacter* Param_BasePlayerCharacter);
	void InitCopyPose(class USkeletalMeshComponent* SourceCharacter);
	void UnuseCopyPose();
	TArray<class USBCharaPartsComponent*> GetExtraCharaPartsComponentList();
	void SetFacialType(const ESBFacialType InFacialType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerSceneCapture2D_C">();
	}
	static class ABP_PlayerSceneCapture2D_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PlayerSceneCapture2D_C>();
	}
};
static_assert(alignof(ABP_PlayerSceneCapture2D_C) == 0x000010, "Wrong alignment on ABP_PlayerSceneCapture2D_C");
static_assert(sizeof(ABP_PlayerSceneCapture2D_C) == 0x001550, "Wrong size on ABP_PlayerSceneCapture2D_C");
static_assert(offsetof(ABP_PlayerSceneCapture2D_C, UberGraphFrame) == 0x0014D0, "Member 'ABP_PlayerSceneCapture2D_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_C, SBCharaParts_1) == 0x0014D8, "Member 'ABP_PlayerSceneCapture2D_C::SBCharaParts_1' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_C, SBCharaParts_0) == 0x0014E0, "Member 'ABP_PlayerSceneCapture2D_C::SBCharaParts_0' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_C, CurrAvatarPosingAnimStateName) == 0x0014E8, "Member 'ABP_PlayerSceneCapture2D_C::CurrAvatarPosingAnimStateName' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_C, OnChangeState) == 0x0014F8, "Member 'ABP_PlayerSceneCapture2D_C::OnChangeState' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_C, StateMachineName) == 0x001508, "Member 'ABP_PlayerSceneCapture2D_C::StateMachineName' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_C, StateNameList) == 0x001518, "Member 'ABP_PlayerSceneCapture2D_C::StateNameList' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_C, bIsViewWeapon) == 0x001528, "Member 'ABP_PlayerSceneCapture2D_C::bIsViewWeapon' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_C, TestShowAvatarEquipWeapon) == 0x001530, "Member 'ABP_PlayerSceneCapture2D_C::TestShowAvatarEquipWeapon' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_C, bIsCheckSheathe) == 0x001540, "Member 'ABP_PlayerSceneCapture2D_C::bIsCheckSheathe' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_C, Is_Copy_Animation) == 0x001541, "Member 'ABP_PlayerSceneCapture2D_C::Is_Copy_Animation' has a wrong offset!");
static_assert(offsetof(ABP_PlayerSceneCapture2D_C, BasePlayerCharacter) == 0x001548, "Member 'ABP_PlayerSceneCapture2D_C::BasePlayerCharacter' has a wrong offset!");

}

