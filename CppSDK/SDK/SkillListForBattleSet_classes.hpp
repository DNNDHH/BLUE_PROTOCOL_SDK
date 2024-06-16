#pragma once

 

// Package: SkillListForBattleSet

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_BattleSetInfoType_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SkillListForBattleSet.SkillListForBattleSet_C
// 0x00C8 (0x0340 - 0x0278)
class USkillListForBattleSet_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimListIn;                                        // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCmnBtn16_C*                            CancelBtn;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            EquipChangeBtn;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             GridForSkillInfoItem;                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             HeadingTxt;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ListBodyGrp;                                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    NoSkillMsgTxt;                                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitcherForSkillIcons;                             // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	E_BattleSetInfoType                           BattleSetInfoType;                                 // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  SkillClassType;                                    // 0x02C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5058[0x2];                                     // 0x02C2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SkillSlotId;                                       // 0x02C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ClassAbilityTypeId;                                // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSkillType                                  SkillType;                                         // 0x02CC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBPlayerActiveArtsSlotType                   TacticalSkillSlotType;                             // 0x02CD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5059[0x2];                                     // 0x02CE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnInfoItemSelected;                                // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnCancelBtnPressed;                                // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnSkillChangeBtnPressed;                           // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         SelectedSkillId;                                   // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_505A[0x4];                                     // 0x0304(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USkillInfoItemForBattleSet_C*           SelectedInfoItem;                                  // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TempSkillId;                                       // 0x0310(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TempSlotEquippedSkillId;                           // 0x0314(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBPlayerSkillData>             SelectableTacticalSkillDatas;                      // 0x0318(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FSBPlayerPassiveSkillData>      SelectableClassAbilityDatas;                       // 0x0328(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	ESBPlayerArtsType                             ArtsType;                                          // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnInfoItemSelected__DelegateSignature(class USkillInfoItemForBattleSet_C* InSelectedInfoItem);
	void OnSkillChangeBtnPressed__DelegateSignature(E_BattleSetInfoType InInfoType, int32 InSkillId);
	void OnCancelBtnPressed__DelegateSignature();
	void ExecuteUbergraph_SkillListForBattleSet(int32 EntryPoint);
	void Construct();
	void OnSkillInfoItemPressed(class USkillInfoItemForBattleSet_C* InInfoItem);
	void BndEvt__SkillListForBattleSet_CancelBtn_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature();
	void BndEvt__EquipmentListForBattleSet_BtnEquipChange_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature();
	void Destruct();
	void InitList(E_BattleSetInfoType InBattleSetInfoType, ESBClassType InSkillClassType, int32 InSkillSlotId, int32 InClassAbilityTypeId);
	void UpdateList();
	void PlayListInAnimForward();
	void PlayListInAnimReverse();
	void HideInfoItemAll();
	void ResetSelectedInfoItemAll();
	void SetIsEquipChangeBtnEnabled(bool InIsEnabled);
	void SetListVisibility(ESlateVisibility InVisibility);
	void SetInfoType(E_BattleSetInfoType InInfoType);
	void SwitchEquipmentIconListBody(bool InIsEquipmentIconListBodyEmpty);
	void SetSkillListItemSelectedBySkillId(int32 InSkillId);
	void SetTacticalSkillSlotType(ESBPlayerActiveArtsSlotType InSlotType);
	void GetTacticalSkillDatas(ESBClassType InClassType, TArray<struct FSBPlayerSkillData>* OutDataArray);
	void GetClassAbilityDatas(ESBClassType InClassType, ESBPlayerArtsType InArtsType, TArray<struct FSBPlayerPassiveSkillData>* OutDataArray);
	void UISupportRefresh();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SkillListForBattleSet_C">();
	}
	static class USkillListForBattleSet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkillListForBattleSet_C>();
	}
};
static_assert(alignof(USkillListForBattleSet_C) == 0x000008, "Wrong alignment on USkillListForBattleSet_C");
static_assert(sizeof(USkillListForBattleSet_C) == 0x000340, "Wrong size on USkillListForBattleSet_C");
static_assert(offsetof(USkillListForBattleSet_C, UberGraphFrame) == 0x000278, "Member 'USkillListForBattleSet_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USkillListForBattleSet_C, AnimListIn) == 0x000280, "Member 'USkillListForBattleSet_C::AnimListIn' has a wrong offset!");
static_assert(offsetof(USkillListForBattleSet_C, CancelBtn) == 0x000288, "Member 'USkillListForBattleSet_C::CancelBtn' has a wrong offset!");
static_assert(offsetof(USkillListForBattleSet_C, EquipChangeBtn) == 0x000290, "Member 'USkillListForBattleSet_C::EquipChangeBtn' has a wrong offset!");
static_assert(offsetof(USkillListForBattleSet_C, GridForSkillInfoItem) == 0x000298, "Member 'USkillListForBattleSet_C::GridForSkillInfoItem' has a wrong offset!");
static_assert(offsetof(USkillListForBattleSet_C, HeadingTxt) == 0x0002A0, "Member 'USkillListForBattleSet_C::HeadingTxt' has a wrong offset!");
static_assert(offsetof(USkillListForBattleSet_C, ListBodyGrp) == 0x0002A8, "Member 'USkillListForBattleSet_C::ListBodyGrp' has a wrong offset!");
static_assert(offsetof(USkillListForBattleSet_C, NoSkillMsgTxt) == 0x0002B0, "Member 'USkillListForBattleSet_C::NoSkillMsgTxt' has a wrong offset!");
static_assert(offsetof(USkillListForBattleSet_C, SwitcherForSkillIcons) == 0x0002B8, "Member 'USkillListForBattleSet_C::SwitcherForSkillIcons' has a wrong offset!");
static_assert(offsetof(USkillListForBattleSet_C, BattleSetInfoType) == 0x0002C0, "Member 'USkillListForBattleSet_C::BattleSetInfoType' has a wrong offset!");
static_assert(offsetof(USkillListForBattleSet_C, SkillClassType) == 0x0002C1, "Member 'USkillListForBattleSet_C::SkillClassType' has a wrong offset!");
static_assert(offsetof(USkillListForBattleSet_C, SkillSlotId) == 0x0002C4, "Member 'USkillListForBattleSet_C::SkillSlotId' has a wrong offset!");
static_assert(offsetof(USkillListForBattleSet_C, ClassAbilityTypeId) == 0x0002C8, "Member 'USkillListForBattleSet_C::ClassAbilityTypeId' has a wrong offset!");
static_assert(offsetof(USkillListForBattleSet_C, SkillType) == 0x0002CC, "Member 'USkillListForBattleSet_C::SkillType' has a wrong offset!");
static_assert(offsetof(USkillListForBattleSet_C, TacticalSkillSlotType) == 0x0002CD, "Member 'USkillListForBattleSet_C::TacticalSkillSlotType' has a wrong offset!");
static_assert(offsetof(USkillListForBattleSet_C, OnInfoItemSelected) == 0x0002D0, "Member 'USkillListForBattleSet_C::OnInfoItemSelected' has a wrong offset!");
static_assert(offsetof(USkillListForBattleSet_C, OnCancelBtnPressed) == 0x0002E0, "Member 'USkillListForBattleSet_C::OnCancelBtnPressed' has a wrong offset!");
static_assert(offsetof(USkillListForBattleSet_C, OnSkillChangeBtnPressed) == 0x0002F0, "Member 'USkillListForBattleSet_C::OnSkillChangeBtnPressed' has a wrong offset!");
static_assert(offsetof(USkillListForBattleSet_C, SelectedSkillId) == 0x000300, "Member 'USkillListForBattleSet_C::SelectedSkillId' has a wrong offset!");
static_assert(offsetof(USkillListForBattleSet_C, SelectedInfoItem) == 0x000308, "Member 'USkillListForBattleSet_C::SelectedInfoItem' has a wrong offset!");
static_assert(offsetof(USkillListForBattleSet_C, TempSkillId) == 0x000310, "Member 'USkillListForBattleSet_C::TempSkillId' has a wrong offset!");
static_assert(offsetof(USkillListForBattleSet_C, TempSlotEquippedSkillId) == 0x000314, "Member 'USkillListForBattleSet_C::TempSlotEquippedSkillId' has a wrong offset!");
static_assert(offsetof(USkillListForBattleSet_C, SelectableTacticalSkillDatas) == 0x000318, "Member 'USkillListForBattleSet_C::SelectableTacticalSkillDatas' has a wrong offset!");
static_assert(offsetof(USkillListForBattleSet_C, SelectableClassAbilityDatas) == 0x000328, "Member 'USkillListForBattleSet_C::SelectableClassAbilityDatas' has a wrong offset!");
static_assert(offsetof(USkillListForBattleSet_C, ArtsType) == 0x000338, "Member 'USkillListForBattleSet_C::ArtsType' has a wrong offset!");

}

