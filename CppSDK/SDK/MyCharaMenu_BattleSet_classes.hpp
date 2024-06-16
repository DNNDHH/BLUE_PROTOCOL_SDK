#pragma once

 

// Package: MyCharaMenu_BattleSet

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "E_BattleSetInfoType_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C
// 0x0158 (0x03D0 - 0x0278)
class UMyCharaMenu_BattleSet_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBattleCordeSetHeadingForBattleSet_C*   BattleCordeSetHeading;                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  BtnFullScreenForDetailedStatus;                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnOperationRotate_C*                  CmnOperationRotate;                                // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_DetailedStatus_C*          DetailedStatus;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_LeftSideParameters_C*      LeftSideParameters;                                // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           MoveAnim;                                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyWalletWidget_C*                      MyWalletWidget;                                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PlayerAvatarImage;                                 // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           PlayerAvatarImageGrp;                              // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           RightSideParameters;                               // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBattleSetTopInfoBase_C*                TopInfoBase;                                       // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlockerForDetailedStatus;                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlockerFrontRow;                                 // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             Close_Detail;                                      // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnSetPlayerCaptureStudioHidden;                    // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnSetPlayerAvatarRotateActive;                     // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 EquippedEquipmentUniqueId;                         // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 SelectedEquipmentUniqueId;                         // 0x0330(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnResetPlayerAvatarRotate;                         // 0x0340(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnPlayerCharacterEquippedCostumeChanged;           // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnIsCmnBackBtnVisible;                             // 0x0360(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnEquippedWeaponSpawned;                           // 0x0370(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         TempSkillSlotId;                                   // 0x0380(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         EquippedSkillId;                                   // 0x0384(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectedSkillId;                                   // 0x0388(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsStorageMode;                                    // 0x038C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_88FB[0x3];                                     // 0x038D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnIsChildWidgetOpened;                             // 0x0390(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bPlayerAvatarImageVisibility;                      // 0x03A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bExistPriorityCapture;                             // 0x03A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88FC[0x6];                                     // 0x03A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UEquipmentStatusDescAndListForBattleSet_C* EquipmentChangeUI;                                 // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_BattleSetInfoType                           EquipmentChangeUIInfoType;                         // 0x03B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             EquipmentChangeUIEquipType;                        // 0x03B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_88FD[0x6];                                     // 0x03B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USkillStatusDescAndListForBattleSet_C*  SkillOrAbilityChangeUI;                            // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_BattleSetInfoType                           SkillOrAbilityChangeUIInfoType;                    // 0x03C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_88FE[0x3];                                     // 0x03C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TempAbilityTypeId;                                 // 0x03C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBattleCordeEditForBattleSet_C*         BattleCordeEditUI;                                 // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Close_Detail__DelegateSignature();
	void OnSetPlayerCaptureStudioHidden__DelegateSignature(bool InIsHidden);
	void OnSetPlayerAvatarRotateActive__DelegateSignature(bool InIsRotateActive);
	void OnPlayerCharacterEquippedCostumeChanged__DelegateSignature();
	void OnIsCmnBackBtnVisible__DelegateSignature(bool InIsVisible);
	void OnEquippedWeaponSpawned__DelegateSignature();
	void OnResetPlayerAvatarRotate__DelegateSignature();
	void OnIsChildWidgetOpened__DelegateSignature(bool InIsChildWidgetOpened);
	void ExecuteUbergraph_MyCharaMenu_BattleSet(int32 EntryPoint);
	void BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_0_OnTopInfoWeaponIconPressed__DelegateSignature();
	void OnOpenMenu();
	void BndEvt__MyCharaMenu_BattleSet_BattleCordeSetHeadingForBattleSet_K2Node_ComponentBoundEvent_1_OnAdminOrEditBtnPressed__DelegateSignature();
	void BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_12_OnTopInfoInnerImagineIconPressed__DelegateSignature(ESBPlayerPassiveImagineSlotType InInnerImagineSlotType, int32 InImagineId);
	void BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_11_OnTopInfoClassAbilityIconPressed__DelegateSignature(int32 InSkillSlotId, int32 InSkillId);
	void BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_10_OnTopInfoBattleImagineIconPressed__DelegateSignature(ESkillActionPosition InBattleImagineSAP, const class FString& InBattleImagineUniqueId);
	void BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_9_OnTopInfoTacticalSkillIconPressed__DelegateSignature(ESkillActionPosition InTacticalSkillSAP, int32 InSkillId, int32 InSkillLevel);
	void StopListenInput();
	void EscDetailedStatus();
	void BndEvt__MyCharaMenu_BattleSet_LeftSideParameters_K2Node_ComponentBoundEvent_1_OnDetailedStatusClicked__DelegateSignature();
	void OnPlayerCharaCaptureCompleted();
	void CloseDetailedStatus();
	void BndEvt__MyCharaMenu_BattleSet_SBButtonFullScreen_DetailedStatus_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Destruct();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void OnBattleCordeSaveRequestCompleted();
	void OnSetLeftSideParamExpGaugeUpdateStopAtBattleCordeEditUI(bool InIsUpdateStop);
	void OnEquippedCostumeChangedAtBattleCordeEditUI();
	void OnSetPlayerAvatarRotateActiveAtBattleCordeEditUI(bool InIsRotateActive);
	void OnLeftSideParamStatUpdatedAtBattleCordeEditUI(E_BattleSetInfoType InInfoType, bool InIcludesClassInfo);
	void OnClassChangedAtBattleCordeEditUI();
	void OnEquippedWeaponSpawnedAtBattleCordeEditUI();
	void OnBattleCordeEditUIHideFinished();
	void OnBattleCordeEditUITermEnd();
	void OnBattleCordeDataReloaded();
	void OnBattleCordeDataReloadRequestedAtInit();
	void OnEquippedCostumeChanged();
	void OnEquipmentChangeUITermEnd();
	void OnEquippedInnerImagineChangeRequestCompleted();
	void OnEquippedBattleImagineChangeRequestCompleted();
	void OnEquippedWeaponChangeRequestCompleted();
	void OnSetLeftSideParamExpGaugeUpdateStopAtEquipmentChangeUI(bool InIsUpdateStop);
	void OnClassChangedAtEquipmentChangeUI();
	void OnEquippedWeaponSpawnedAtEquipmentChangeUI(E_BattleSetInfoType InBattleSetInfoType);
	void OnLeftSideParamStatUpdatedAtEquipmentChangeUI(E_BattleSetInfoType InBattleSetInfoType, bool InIncludesClassInfoUpdate);
	void OnEquipmentChangeUIListItemSelected(const class FString& InEquippedEquipmentUniqueId, const class FString& InSelectedEquipmentUniqueId);
	void OnEquipmentChangeUIHideFinished();
	void OnSkillOrAbilityChangeUITermEnd();
	void OnEquippedClassAbilityChanged();
	void OnEquippedTacticalSkillChanged();
	void OnLeftSideParamStatUpdatedAtSkillOrAbilityChangeUI(E_BattleSetInfoType InInfoType, bool InIncludesClassInfo);
	void OnSkillOrAbilityChangeUIListItemSelected(int32 InEquippedSkillId, int32 InSelectedSkillId);
	void OnSkillOrAbilityChangeUIHideFinished();
	void OnUnexistHigherPriorityCapture(class UObject* Sender, class UObject* Param);
	void OnExistHigherPriorityCapture(class UObject* Sender, class UObject* Param);
	void DestructPlayerAvatarImageGraph();
	void ConstructPlayerAvatarImageGraph();
	void UpdatePlayerAvatarVisibility_Internal();
	void SetPlayerAvatarImageVisibility(bool bVisibility);
	void In_Animation();
	void SetBtnFullScreenForDetailedStatusVisibility(ESlateVisibility InVisibility);
	void ImmediateCloseDetailedStatus();
	void SetTopInfoVisibility(bool InIsVisible, bool InIgnorePlayerCaptureStudio);
	void GetPlayerCharacterEquipStatusDiffRequestRetCode(const class FString& InCurrEquipmentUniqueId, const class FString& InNewEquipmentUniqueId, int32* OutRetCode);
	void SetStorageMode(bool InIsStorageMode);
	void UpdateLeftSideParameters(bool InIncludeClassInfo);
	void SetLeftSideParameterExpGaugeUpdateStop(bool InIsUpdateStop);
	void SetUIBlockerFrontRowVisibility(bool InIsVisible);
	void BindEventsOfEquipmentChangeUI();
	void UnbindEventsOfEquipmentChangeUI(bool InUnbindTermEnd);
	void BindEventsOfSkillOrAbilityChangeUI();
	void UnbindEventsOfSkillOrAbilityChangeUI(bool InUnbindTermEnd);
	void BindEventsOfBattleCordeEditUI();
	void UnbindEventsOfBattleCordeEditUI(bool InUnbindTermEnd);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MyCharaMenu_BattleSet_C">();
	}
	static class UMyCharaMenu_BattleSet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMyCharaMenu_BattleSet_C>();
	}
};
static_assert(alignof(UMyCharaMenu_BattleSet_C) == 0x000008, "Wrong alignment on UMyCharaMenu_BattleSet_C");
static_assert(sizeof(UMyCharaMenu_BattleSet_C) == 0x0003D0, "Wrong size on UMyCharaMenu_BattleSet_C");
static_assert(offsetof(UMyCharaMenu_BattleSet_C, UberGraphFrame) == 0x000278, "Member 'UMyCharaMenu_BattleSet_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_BattleSet_C, AnimIn) == 0x000280, "Member 'UMyCharaMenu_BattleSet_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_BattleSet_C, BattleCordeSetHeading) == 0x000288, "Member 'UMyCharaMenu_BattleSet_C::BattleCordeSetHeading' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_BattleSet_C, BtnFullScreenForDetailedStatus) == 0x000290, "Member 'UMyCharaMenu_BattleSet_C::BtnFullScreenForDetailedStatus' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_BattleSet_C, CmnOperationRotate) == 0x000298, "Member 'UMyCharaMenu_BattleSet_C::CmnOperationRotate' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_BattleSet_C, DetailedStatus) == 0x0002A0, "Member 'UMyCharaMenu_BattleSet_C::DetailedStatus' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_BattleSet_C, LeftSideParameters) == 0x0002A8, "Member 'UMyCharaMenu_BattleSet_C::LeftSideParameters' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_BattleSet_C, MoveAnim) == 0x0002B0, "Member 'UMyCharaMenu_BattleSet_C::MoveAnim' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_BattleSet_C, MyWalletWidget) == 0x0002B8, "Member 'UMyCharaMenu_BattleSet_C::MyWalletWidget' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_BattleSet_C, PlayerAvatarImage) == 0x0002C0, "Member 'UMyCharaMenu_BattleSet_C::PlayerAvatarImage' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_BattleSet_C, PlayerAvatarImageGrp) == 0x0002C8, "Member 'UMyCharaMenu_BattleSet_C::PlayerAvatarImageGrp' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_BattleSet_C, RightSideParameters) == 0x0002D0, "Member 'UMyCharaMenu_BattleSet_C::RightSideParameters' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_BattleSet_C, TopInfoBase) == 0x0002D8, "Member 'UMyCharaMenu_BattleSet_C::TopInfoBase' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_BattleSet_C, UIBlockerForDetailedStatus) == 0x0002E0, "Member 'UMyCharaMenu_BattleSet_C::UIBlockerForDetailedStatus' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_BattleSet_C, UIBlockerFrontRow) == 0x0002E8, "Member 'UMyCharaMenu_BattleSet_C::UIBlockerFrontRow' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_BattleSet_C, Close_Detail) == 0x0002F0, "Member 'UMyCharaMenu_BattleSet_C::Close_Detail' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_BattleSet_C, OnSetPlayerCaptureStudioHidden) == 0x000300, "Member 'UMyCharaMenu_BattleSet_C::OnSetPlayerCaptureStudioHidden' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_BattleSet_C, OnSetPlayerAvatarRotateActive) == 0x000310, "Member 'UMyCharaMenu_BattleSet_C::OnSetPlayerAvatarRotateActive' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_BattleSet_C, EquippedEquipmentUniqueId) == 0x000320, "Member 'UMyCharaMenu_BattleSet_C::EquippedEquipmentUniqueId' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_BattleSet_C, SelectedEquipmentUniqueId) == 0x000330, "Member 'UMyCharaMenu_BattleSet_C::SelectedEquipmentUniqueId' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_BattleSet_C, OnResetPlayerAvatarRotate) == 0x000340, "Member 'UMyCharaMenu_BattleSet_C::OnResetPlayerAvatarRotate' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_BattleSet_C, OnPlayerCharacterEquippedCostumeChanged) == 0x000350, "Member 'UMyCharaMenu_BattleSet_C::OnPlayerCharacterEquippedCostumeChanged' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_BattleSet_C, OnIsCmnBackBtnVisible) == 0x000360, "Member 'UMyCharaMenu_BattleSet_C::OnIsCmnBackBtnVisible' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_BattleSet_C, OnEquippedWeaponSpawned) == 0x000370, "Member 'UMyCharaMenu_BattleSet_C::OnEquippedWeaponSpawned' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_BattleSet_C, TempSkillSlotId) == 0x000380, "Member 'UMyCharaMenu_BattleSet_C::TempSkillSlotId' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_BattleSet_C, EquippedSkillId) == 0x000384, "Member 'UMyCharaMenu_BattleSet_C::EquippedSkillId' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_BattleSet_C, SelectedSkillId) == 0x000388, "Member 'UMyCharaMenu_BattleSet_C::SelectedSkillId' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_BattleSet_C, bIsStorageMode) == 0x00038C, "Member 'UMyCharaMenu_BattleSet_C::bIsStorageMode' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_BattleSet_C, OnIsChildWidgetOpened) == 0x000390, "Member 'UMyCharaMenu_BattleSet_C::OnIsChildWidgetOpened' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_BattleSet_C, bPlayerAvatarImageVisibility) == 0x0003A0, "Member 'UMyCharaMenu_BattleSet_C::bPlayerAvatarImageVisibility' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_BattleSet_C, bExistPriorityCapture) == 0x0003A1, "Member 'UMyCharaMenu_BattleSet_C::bExistPriorityCapture' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_BattleSet_C, EquipmentChangeUI) == 0x0003A8, "Member 'UMyCharaMenu_BattleSet_C::EquipmentChangeUI' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_BattleSet_C, EquipmentChangeUIInfoType) == 0x0003B0, "Member 'UMyCharaMenu_BattleSet_C::EquipmentChangeUIInfoType' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_BattleSet_C, EquipmentChangeUIEquipType) == 0x0003B1, "Member 'UMyCharaMenu_BattleSet_C::EquipmentChangeUIEquipType' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_BattleSet_C, SkillOrAbilityChangeUI) == 0x0003B8, "Member 'UMyCharaMenu_BattleSet_C::SkillOrAbilityChangeUI' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_BattleSet_C, SkillOrAbilityChangeUIInfoType) == 0x0003C0, "Member 'UMyCharaMenu_BattleSet_C::SkillOrAbilityChangeUIInfoType' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_BattleSet_C, TempAbilityTypeId) == 0x0003C4, "Member 'UMyCharaMenu_BattleSet_C::TempAbilityTypeId' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_BattleSet_C, BattleCordeEditUI) == 0x0003C8, "Member 'UMyCharaMenu_BattleSet_C::BattleCordeEditUI' has a wrong offset!");

}

