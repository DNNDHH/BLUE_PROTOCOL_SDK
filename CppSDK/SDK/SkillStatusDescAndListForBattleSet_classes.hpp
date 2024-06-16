#pragma once

 

// Package: SkillStatusDescAndListForBattleSet

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "Engine_structs.hpp"
#include "E_BattleSetInfoType_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SkillStatusDescAndListForBattleSet.SkillStatusDescAndListForBattleSet_C
// 0x01A0 (0x0450 - 0x02B0)
class USkillStatusDescAndListForBattleSet_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCmnBack01_C*                           BackToBattleSetTopLevelBtn;                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bg01;                                              // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BlackFilter;                                       // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  BtnFullScreenForCharaDetailedStatus;               // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  BtnScreen;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_DetailedStatus_C*          CharaDetailedStatus;                               // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 EquippedEquipmentStatusDescHeadingIcon;            // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillStatusDescForBattleSet_C*         EquippedSkillStatusDesc;                           // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    EquippedSkillStatusDescHeadingTxt;                 // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULeftSideParametersForBattleSetSecondLevel_C* LeftSideParametersForSecondLevel;                  // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillStatusDescForBattleSet_C*         SelectedSkillStatusDesc;                           // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillListForBattleSet_C*               SkillList;                                         // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStatusTypeSwitchBtnForBattleSet_C*     StatusTypeSwitchBtn;                               // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlockerFrontRow;                                 // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	E_BattleSetInfoType                           BattleSetInfoType;                                 // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  EquipClassType;                                    // 0x0341(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4236[0x2];                                     // 0x0342(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SkillSlotId;                                       // 0x0344(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ClassAbilityTypeId;                                // 0x0348(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               SortType;                                          // 0x034C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4237[0x3];                                     // 0x034D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SelectedStatusTypeId;                              // 0x0350(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4238[0x4];                                     // 0x0354(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         SelectedItemBtn;                                   // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnHideWindowFinished;                              // 0x0360(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         CurrEquippedSkillId;                               // 0x0370(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrSelectedSkillId;                               // 0x0374(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues EquipOrSkillChangeableRetValue;                    // 0x0378(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsSkillInfoItemSelected;                          // 0x0379(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsSkillChangeRequested;                           // 0x037A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsFilterSelectorOpen;                             // 0x037B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4239[0x4];                                     // 0x037C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFilterGroup>                   SortFilter;                                        // 0x0380(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ASBPlayerController*                    TempSBPlayerController;                            // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSkillInfoItemSelected;                           // 0x0398(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnSkillChangeBtnPressed;                           // 0x03A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                   TempUnchangableMessageDialogTargetText;            // 0x03B8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         TempRetCode;                                       // 0x03D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_423A[0x4];                                     // 0x03D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnLeftSideParameterStatusUpdated;                  // 0x03D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnResetLeftSideParameterDiffMark;                  // 0x03E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnEquippedTacticalSkillChanged;                    // 0x03F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnEquippedClassAbilityChanged;                     // 0x0408(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bTempIsSkillDisarm;                                // 0x0418(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_423B[0x7];                                     // 0x0419(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USkillInfoItemForBattleSet_C*           SelectedSkillInfoItem;                             // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerArtsComponent*                 PlayerArtsComp;                                    // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPCClassComponentBase*                PlayerCharacterClassComp;                          // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectedTacticalSkillTypeId;                       // 0x0438(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectedTacticalSkillId;                           // 0x043C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnTermEnd;                                         // 0x0440(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnHideWindowFinished__DelegateSignature();
	void OnSkillInfoItemSelected__DelegateSignature(int32 InEquippedSkillId, int32 InSelectedSkillId);
	void OnSkillChangeBtnPressed__DelegateSignature();
	void OnLeftSideParameterStatusUpdated__DelegateSignature(E_BattleSetInfoType InBattleSetInfoType, bool InIncludesClassInfoUpdate);
	void OnResetLeftSideParameterDiffMark__DelegateSignature();
	void OnEquippedTacticalSkillChanged__DelegateSignature();
	void OnEquippedClassAbilityChanged__DelegateSignature();
	void OnTermEnd__DelegateSignature();
	void ExecuteUbergraph_SkillStatusDescAndListForBattleSet(int32 EntryPoint);
	void BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_15_OnCancelBtnPressed__DelegateSignature();
	void BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_10_OnSkillChangeBtnPressed__DelegateSignature(E_BattleSetInfoType InInfoType, int32 InSkillId);
	void BndEvt__SkillStatusDescAndListForBattleSet_SkillList_K2Node_ComponentBoundEvent_0_OnInfoItemSelected__DelegateSignature(class USkillInfoItemForBattleSet_C* InSelectedInfoItem);
	void BndEvt__SkillStatusDescAndListForBattleSet_EquippedSkillStatusDesc_K2Node_ComponentBoundEvent_5_OnClassAbilityRemoveBtnPressed__DelegateSignature();
	void ChangeSkillResultProc(int32 InNewEquippedSkillId, bool InIsDisarm);
	void BndEvt__EquipmentStatusDescAndListForBattleSet_BtnFullScreenForDetailedStatus_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__EquipmentStatusDescAndListForBattleSet_LeftSideParametersForSecondLevel_K2Node_ComponentBoundEvent_6_OnDetailStatusBtnClicked__DelegateSignature();
	void CloseDetailedStatus();
	void BndEvt__EquipmentStatusDescAndListForBattleSet_BackToBattleSetTopLevelBtn_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__MyCharaMenu_WeaponDescAndListlForBattleSet_StatusTypeSwitchBtn_K2Node_ComponentBoundEvent_7_OnSwitchBtnPressed__DelegateSignature(int32 InPressedSwitchBtnId);
	void Destruct();
	void UIInputBlockForSkillChange(bool InIsBlock);
	void BndEvt__BtnScreen_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature();
	void UiInputBlock(bool InIsBlock);
	void OnPress_Cancel();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void Construct();
	void ShowUnchangeableMessageDialog(ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues InUnchangeableRetValue, E_BattleSetInfoType InBattleSetInfoType);
	void BndEvt__SkillStatusDescAndListForBattleSet_SelectedSkillStatusDesc_K2Node_ComponentBoundEvent_1_OnTacticalSkillTypeSelected__DelegateSignature(int32 InSelectedSkillTypeId, int32 InSelectedSkillId);
	void OnTacticalSkillChangeCompleted(const int32 RetCode, const bool IsArtsAssetLoadRequested);
	void TacticalSkillChangeProc(int32 InSkillId, bool InDisarm);
	void OnClassAbilityChangeCompleted(int32 RetCode);
	void ClassAbilityChangeProc(int32 InSkillId, bool InDisarm);
	void ShowWindow(E_BattleSetInfoType InInfoType, ESBClassType InEquipClassType, int32 InSkillSlotId, int32 InClassAbilityTypeId);
	void HideWindow();
	void UpdateEquippedSkillDesc(int32 InEquippedSkillId, bool InForceUpdate);
	void UpdateSelectedSkillDesc(int32 InSkillId, bool InForceUpdate, const class FString& InEquipmentUniqueId);
	void SwitchStatusType(int32 InStatusTypeId);
	void UpdateLeftSideParameterStatus(bool InIncludesClassInfoUpdate);
	void GetBattleSetInfoType(E_BattleSetInfoType* OutBattleSetInfoType);
	void IsCharaDetailedStatusOpen(bool* OutIsOpen);
	void IsHideWindowAnimePlaying(bool* OutIsPlaying);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SkillStatusDescAndListForBattleSet_C">();
	}
	static class USkillStatusDescAndListForBattleSet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkillStatusDescAndListForBattleSet_C>();
	}
};
static_assert(alignof(USkillStatusDescAndListForBattleSet_C) == 0x000008, "Wrong alignment on USkillStatusDescAndListForBattleSet_C");
static_assert(sizeof(USkillStatusDescAndListForBattleSet_C) == 0x000450, "Wrong size on USkillStatusDescAndListForBattleSet_C");
static_assert(offsetof(USkillStatusDescAndListForBattleSet_C, UberGraphFrame) == 0x0002B0, "Member 'USkillStatusDescAndListForBattleSet_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USkillStatusDescAndListForBattleSet_C, AnimOut) == 0x0002B8, "Member 'USkillStatusDescAndListForBattleSet_C::AnimOut' has a wrong offset!");
static_assert(offsetof(USkillStatusDescAndListForBattleSet_C, AnimIn) == 0x0002C0, "Member 'USkillStatusDescAndListForBattleSet_C::AnimIn' has a wrong offset!");
static_assert(offsetof(USkillStatusDescAndListForBattleSet_C, BackToBattleSetTopLevelBtn) == 0x0002C8, "Member 'USkillStatusDescAndListForBattleSet_C::BackToBattleSetTopLevelBtn' has a wrong offset!");
static_assert(offsetof(USkillStatusDescAndListForBattleSet_C, Bg01) == 0x0002D0, "Member 'USkillStatusDescAndListForBattleSet_C::Bg01' has a wrong offset!");
static_assert(offsetof(USkillStatusDescAndListForBattleSet_C, BlackFilter) == 0x0002D8, "Member 'USkillStatusDescAndListForBattleSet_C::BlackFilter' has a wrong offset!");
static_assert(offsetof(USkillStatusDescAndListForBattleSet_C, BtnFullScreenForCharaDetailedStatus) == 0x0002E0, "Member 'USkillStatusDescAndListForBattleSet_C::BtnFullScreenForCharaDetailedStatus' has a wrong offset!");
static_assert(offsetof(USkillStatusDescAndListForBattleSet_C, BtnScreen) == 0x0002E8, "Member 'USkillStatusDescAndListForBattleSet_C::BtnScreen' has a wrong offset!");
static_assert(offsetof(USkillStatusDescAndListForBattleSet_C, CharaDetailedStatus) == 0x0002F0, "Member 'USkillStatusDescAndListForBattleSet_C::CharaDetailedStatus' has a wrong offset!");
static_assert(offsetof(USkillStatusDescAndListForBattleSet_C, EquippedEquipmentStatusDescHeadingIcon) == 0x0002F8, "Member 'USkillStatusDescAndListForBattleSet_C::EquippedEquipmentStatusDescHeadingIcon' has a wrong offset!");
static_assert(offsetof(USkillStatusDescAndListForBattleSet_C, EquippedSkillStatusDesc) == 0x000300, "Member 'USkillStatusDescAndListForBattleSet_C::EquippedSkillStatusDesc' has a wrong offset!");
static_assert(offsetof(USkillStatusDescAndListForBattleSet_C, EquippedSkillStatusDescHeadingTxt) == 0x000308, "Member 'USkillStatusDescAndListForBattleSet_C::EquippedSkillStatusDescHeadingTxt' has a wrong offset!");
static_assert(offsetof(USkillStatusDescAndListForBattleSet_C, LeftSideParametersForSecondLevel) == 0x000310, "Member 'USkillStatusDescAndListForBattleSet_C::LeftSideParametersForSecondLevel' has a wrong offset!");
static_assert(offsetof(USkillStatusDescAndListForBattleSet_C, SelectedSkillStatusDesc) == 0x000318, "Member 'USkillStatusDescAndListForBattleSet_C::SelectedSkillStatusDesc' has a wrong offset!");
static_assert(offsetof(USkillStatusDescAndListForBattleSet_C, SkillList) == 0x000320, "Member 'USkillStatusDescAndListForBattleSet_C::SkillList' has a wrong offset!");
static_assert(offsetof(USkillStatusDescAndListForBattleSet_C, StatusTypeSwitchBtn) == 0x000328, "Member 'USkillStatusDescAndListForBattleSet_C::StatusTypeSwitchBtn' has a wrong offset!");
static_assert(offsetof(USkillStatusDescAndListForBattleSet_C, UIBlocker) == 0x000330, "Member 'USkillStatusDescAndListForBattleSet_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(USkillStatusDescAndListForBattleSet_C, UIBlockerFrontRow) == 0x000338, "Member 'USkillStatusDescAndListForBattleSet_C::UIBlockerFrontRow' has a wrong offset!");
static_assert(offsetof(USkillStatusDescAndListForBattleSet_C, BattleSetInfoType) == 0x000340, "Member 'USkillStatusDescAndListForBattleSet_C::BattleSetInfoType' has a wrong offset!");
static_assert(offsetof(USkillStatusDescAndListForBattleSet_C, EquipClassType) == 0x000341, "Member 'USkillStatusDescAndListForBattleSet_C::EquipClassType' has a wrong offset!");
static_assert(offsetof(USkillStatusDescAndListForBattleSet_C, SkillSlotId) == 0x000344, "Member 'USkillStatusDescAndListForBattleSet_C::SkillSlotId' has a wrong offset!");
static_assert(offsetof(USkillStatusDescAndListForBattleSet_C, ClassAbilityTypeId) == 0x000348, "Member 'USkillStatusDescAndListForBattleSet_C::ClassAbilityTypeId' has a wrong offset!");
static_assert(offsetof(USkillStatusDescAndListForBattleSet_C, SortType) == 0x00034C, "Member 'USkillStatusDescAndListForBattleSet_C::SortType' has a wrong offset!");
static_assert(offsetof(USkillStatusDescAndListForBattleSet_C, SelectedStatusTypeId) == 0x000350, "Member 'USkillStatusDescAndListForBattleSet_C::SelectedStatusTypeId' has a wrong offset!");
static_assert(offsetof(USkillStatusDescAndListForBattleSet_C, SelectedItemBtn) == 0x000358, "Member 'USkillStatusDescAndListForBattleSet_C::SelectedItemBtn' has a wrong offset!");
static_assert(offsetof(USkillStatusDescAndListForBattleSet_C, OnHideWindowFinished) == 0x000360, "Member 'USkillStatusDescAndListForBattleSet_C::OnHideWindowFinished' has a wrong offset!");
static_assert(offsetof(USkillStatusDescAndListForBattleSet_C, CurrEquippedSkillId) == 0x000370, "Member 'USkillStatusDescAndListForBattleSet_C::CurrEquippedSkillId' has a wrong offset!");
static_assert(offsetof(USkillStatusDescAndListForBattleSet_C, CurrSelectedSkillId) == 0x000374, "Member 'USkillStatusDescAndListForBattleSet_C::CurrSelectedSkillId' has a wrong offset!");
static_assert(offsetof(USkillStatusDescAndListForBattleSet_C, EquipOrSkillChangeableRetValue) == 0x000378, "Member 'USkillStatusDescAndListForBattleSet_C::EquipOrSkillChangeableRetValue' has a wrong offset!");
static_assert(offsetof(USkillStatusDescAndListForBattleSet_C, bIsSkillInfoItemSelected) == 0x000379, "Member 'USkillStatusDescAndListForBattleSet_C::bIsSkillInfoItemSelected' has a wrong offset!");
static_assert(offsetof(USkillStatusDescAndListForBattleSet_C, bIsSkillChangeRequested) == 0x00037A, "Member 'USkillStatusDescAndListForBattleSet_C::bIsSkillChangeRequested' has a wrong offset!");
static_assert(offsetof(USkillStatusDescAndListForBattleSet_C, bIsFilterSelectorOpen) == 0x00037B, "Member 'USkillStatusDescAndListForBattleSet_C::bIsFilterSelectorOpen' has a wrong offset!");
static_assert(offsetof(USkillStatusDescAndListForBattleSet_C, SortFilter) == 0x000380, "Member 'USkillStatusDescAndListForBattleSet_C::SortFilter' has a wrong offset!");
static_assert(offsetof(USkillStatusDescAndListForBattleSet_C, TempSBPlayerController) == 0x000390, "Member 'USkillStatusDescAndListForBattleSet_C::TempSBPlayerController' has a wrong offset!");
static_assert(offsetof(USkillStatusDescAndListForBattleSet_C, OnSkillInfoItemSelected) == 0x000398, "Member 'USkillStatusDescAndListForBattleSet_C::OnSkillInfoItemSelected' has a wrong offset!");
static_assert(offsetof(USkillStatusDescAndListForBattleSet_C, OnSkillChangeBtnPressed) == 0x0003A8, "Member 'USkillStatusDescAndListForBattleSet_C::OnSkillChangeBtnPressed' has a wrong offset!");
static_assert(offsetof(USkillStatusDescAndListForBattleSet_C, TempUnchangableMessageDialogTargetText) == 0x0003B8, "Member 'USkillStatusDescAndListForBattleSet_C::TempUnchangableMessageDialogTargetText' has a wrong offset!");
static_assert(offsetof(USkillStatusDescAndListForBattleSet_C, TempRetCode) == 0x0003D0, "Member 'USkillStatusDescAndListForBattleSet_C::TempRetCode' has a wrong offset!");
static_assert(offsetof(USkillStatusDescAndListForBattleSet_C, OnLeftSideParameterStatusUpdated) == 0x0003D8, "Member 'USkillStatusDescAndListForBattleSet_C::OnLeftSideParameterStatusUpdated' has a wrong offset!");
static_assert(offsetof(USkillStatusDescAndListForBattleSet_C, OnResetLeftSideParameterDiffMark) == 0x0003E8, "Member 'USkillStatusDescAndListForBattleSet_C::OnResetLeftSideParameterDiffMark' has a wrong offset!");
static_assert(offsetof(USkillStatusDescAndListForBattleSet_C, OnEquippedTacticalSkillChanged) == 0x0003F8, "Member 'USkillStatusDescAndListForBattleSet_C::OnEquippedTacticalSkillChanged' has a wrong offset!");
static_assert(offsetof(USkillStatusDescAndListForBattleSet_C, OnEquippedClassAbilityChanged) == 0x000408, "Member 'USkillStatusDescAndListForBattleSet_C::OnEquippedClassAbilityChanged' has a wrong offset!");
static_assert(offsetof(USkillStatusDescAndListForBattleSet_C, bTempIsSkillDisarm) == 0x000418, "Member 'USkillStatusDescAndListForBattleSet_C::bTempIsSkillDisarm' has a wrong offset!");
static_assert(offsetof(USkillStatusDescAndListForBattleSet_C, SelectedSkillInfoItem) == 0x000420, "Member 'USkillStatusDescAndListForBattleSet_C::SelectedSkillInfoItem' has a wrong offset!");
static_assert(offsetof(USkillStatusDescAndListForBattleSet_C, PlayerArtsComp) == 0x000428, "Member 'USkillStatusDescAndListForBattleSet_C::PlayerArtsComp' has a wrong offset!");
static_assert(offsetof(USkillStatusDescAndListForBattleSet_C, PlayerCharacterClassComp) == 0x000430, "Member 'USkillStatusDescAndListForBattleSet_C::PlayerCharacterClassComp' has a wrong offset!");
static_assert(offsetof(USkillStatusDescAndListForBattleSet_C, SelectedTacticalSkillTypeId) == 0x000438, "Member 'USkillStatusDescAndListForBattleSet_C::SelectedTacticalSkillTypeId' has a wrong offset!");
static_assert(offsetof(USkillStatusDescAndListForBattleSet_C, SelectedTacticalSkillId) == 0x00043C, "Member 'USkillStatusDescAndListForBattleSet_C::SelectedTacticalSkillId' has a wrong offset!");
static_assert(offsetof(USkillStatusDescAndListForBattleSet_C, OnTermEnd) == 0x000440, "Member 'USkillStatusDescAndListForBattleSet_C::OnTermEnd' has a wrong offset!");

}

