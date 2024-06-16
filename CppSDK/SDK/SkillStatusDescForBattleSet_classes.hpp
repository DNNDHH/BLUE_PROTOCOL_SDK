#pragma once

 

// Package: SkillStatusDescForBattleSet

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_BattleSetInfoType_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C
// 0x0108 (0x0380 - 0x0278)
class USkillStatusDescForBattleSet_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkillBuffInfoList_C*                   AdditionalEffectInfoList;                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonSkillStatusDescBase_C*           Base;                                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyChara_AbilityLargeIcon_C*            ClassAbilityIcon;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            ClassAbilityRemoveBtn;                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DefaultMessageText;                                // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    ExplanationMessageTxt;                             // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillDescriptionBasics_C*          SkillDesc;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitcherForSkillIcon;                              // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitcherForStatusType;                             // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTacticalSkillInfoForBattleSet_C*       TacticalSkillInfo;                                 // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VBoxForClassAbilityRemoveBtnGrp;                   // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcherForDesc;                             // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	E_BattleSetInfoType                           InfoType;                                          // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSkillType                                  SkillType;                                         // 0x02E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsBaseBgNormalType;                               // 0x02E2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_845C[0x1];                                     // 0x02E3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         StatusTypeId;                                      // 0x02E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnTacticalSkillTypeSelected;                       // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClassAbilityRemoveBtnPressed;                    // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         SkillId;                                           // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SkillLevel;                                        // 0x030C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsSkillTypeSelectMode;                            // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_845D[0x7];                                     // 0x0311(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 SkillMasterData;                                   // 0x0318(0x0058)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector2D                              WindowSize;                                        // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         SelectedSkillTypeId;                               // 0x0378(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         EquippedSkillTypeId;                               // 0x037C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClassAbilityRemoveBtnPressed__DelegateSignature();
	void OnTacticalSkillTypeSelected__DelegateSignature(int32 InSelectedSkillTypeId, int32 InSelectedSkillId);
	void ExecuteUbergraph_SkillStatusDescForBattleSet(int32 EntryPoint);
	void BndEvt__SkillStatusDescForBattleSet_TacticalSkillInfo_K2Node_ComponentBoundEvent_1_OnSkillTypeRadioBtnSelected__DelegateSignature(int32 InSelectedSkillTypeId, int32 InSelectedSkillId);
	void BndEvt__EquipmentStatusDescForBattleSet_ImagineRemoveBtn_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void SetSKill(int32 InSkillId);
	void SwitchDescType(bool InIsDescDefault);
	void SetInfoType(E_BattleSetInfoType InInfoType);
	void SetDefaultDescType(E_BattleSetInfoType InInfoType, bool InIsSharedAbility);
	void SetDescBlank(bool InIsDescBlank);
	void SwitchBaseBgType(bool InIsNormalType);
	void SetClassAbilityRemoveBtnVisibility(bool InIsVisible);
	void SwitchStatusType(int32 InStatusTypeId);
	void SetWindowSize(const struct FVector2D& InWindowSize);
	void CheckIfTacticalSkillIsEquppedAndItsSkillType(int32 InSkillId, bool* OutIsEquipped, int32* OutSkillType);
	void GetTacticalSkillBaseInfo(const struct FSBSkillDataMasterData& InSkillMasterData, bool* IsTacticalSkill, int32* OutBaseSkillId, int32* OutBaseSkillLevel);
	void CheckIsSkillTypeSelectable(int32 InSkillId, int32 InSkillLevel, bool* OutIsSkillTypeSelectable);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SkillStatusDescForBattleSet_C">();
	}
	static class USkillStatusDescForBattleSet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkillStatusDescForBattleSet_C>();
	}
};
static_assert(alignof(USkillStatusDescForBattleSet_C) == 0x000008, "Wrong alignment on USkillStatusDescForBattleSet_C");
static_assert(sizeof(USkillStatusDescForBattleSet_C) == 0x000380, "Wrong size on USkillStatusDescForBattleSet_C");
static_assert(offsetof(USkillStatusDescForBattleSet_C, UberGraphFrame) == 0x000278, "Member 'USkillStatusDescForBattleSet_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USkillStatusDescForBattleSet_C, AdditionalEffectInfoList) == 0x000280, "Member 'USkillStatusDescForBattleSet_C::AdditionalEffectInfoList' has a wrong offset!");
static_assert(offsetof(USkillStatusDescForBattleSet_C, Base) == 0x000288, "Member 'USkillStatusDescForBattleSet_C::Base' has a wrong offset!");
static_assert(offsetof(USkillStatusDescForBattleSet_C, ClassAbilityIcon) == 0x000290, "Member 'USkillStatusDescForBattleSet_C::ClassAbilityIcon' has a wrong offset!");
static_assert(offsetof(USkillStatusDescForBattleSet_C, ClassAbilityRemoveBtn) == 0x000298, "Member 'USkillStatusDescForBattleSet_C::ClassAbilityRemoveBtn' has a wrong offset!");
static_assert(offsetof(USkillStatusDescForBattleSet_C, DefaultMessageText) == 0x0002A0, "Member 'USkillStatusDescForBattleSet_C::DefaultMessageText' has a wrong offset!");
static_assert(offsetof(USkillStatusDescForBattleSet_C, ExplanationMessageTxt) == 0x0002A8, "Member 'USkillStatusDescForBattleSet_C::ExplanationMessageTxt' has a wrong offset!");
static_assert(offsetof(USkillStatusDescForBattleSet_C, SkillDesc) == 0x0002B0, "Member 'USkillStatusDescForBattleSet_C::SkillDesc' has a wrong offset!");
static_assert(offsetof(USkillStatusDescForBattleSet_C, SwitcherForSkillIcon) == 0x0002B8, "Member 'USkillStatusDescForBattleSet_C::SwitcherForSkillIcon' has a wrong offset!");
static_assert(offsetof(USkillStatusDescForBattleSet_C, SwitcherForStatusType) == 0x0002C0, "Member 'USkillStatusDescForBattleSet_C::SwitcherForStatusType' has a wrong offset!");
static_assert(offsetof(USkillStatusDescForBattleSet_C, TacticalSkillInfo) == 0x0002C8, "Member 'USkillStatusDescForBattleSet_C::TacticalSkillInfo' has a wrong offset!");
static_assert(offsetof(USkillStatusDescForBattleSet_C, VBoxForClassAbilityRemoveBtnGrp) == 0x0002D0, "Member 'USkillStatusDescForBattleSet_C::VBoxForClassAbilityRemoveBtnGrp' has a wrong offset!");
static_assert(offsetof(USkillStatusDescForBattleSet_C, WidgetSwitcherForDesc) == 0x0002D8, "Member 'USkillStatusDescForBattleSet_C::WidgetSwitcherForDesc' has a wrong offset!");
static_assert(offsetof(USkillStatusDescForBattleSet_C, InfoType) == 0x0002E0, "Member 'USkillStatusDescForBattleSet_C::InfoType' has a wrong offset!");
static_assert(offsetof(USkillStatusDescForBattleSet_C, SkillType) == 0x0002E1, "Member 'USkillStatusDescForBattleSet_C::SkillType' has a wrong offset!");
static_assert(offsetof(USkillStatusDescForBattleSet_C, bIsBaseBgNormalType) == 0x0002E2, "Member 'USkillStatusDescForBattleSet_C::bIsBaseBgNormalType' has a wrong offset!");
static_assert(offsetof(USkillStatusDescForBattleSet_C, StatusTypeId) == 0x0002E4, "Member 'USkillStatusDescForBattleSet_C::StatusTypeId' has a wrong offset!");
static_assert(offsetof(USkillStatusDescForBattleSet_C, OnTacticalSkillTypeSelected) == 0x0002E8, "Member 'USkillStatusDescForBattleSet_C::OnTacticalSkillTypeSelected' has a wrong offset!");
static_assert(offsetof(USkillStatusDescForBattleSet_C, OnClassAbilityRemoveBtnPressed) == 0x0002F8, "Member 'USkillStatusDescForBattleSet_C::OnClassAbilityRemoveBtnPressed' has a wrong offset!");
static_assert(offsetof(USkillStatusDescForBattleSet_C, SkillId) == 0x000308, "Member 'USkillStatusDescForBattleSet_C::SkillId' has a wrong offset!");
static_assert(offsetof(USkillStatusDescForBattleSet_C, SkillLevel) == 0x00030C, "Member 'USkillStatusDescForBattleSet_C::SkillLevel' has a wrong offset!");
static_assert(offsetof(USkillStatusDescForBattleSet_C, bIsSkillTypeSelectMode) == 0x000310, "Member 'USkillStatusDescForBattleSet_C::bIsSkillTypeSelectMode' has a wrong offset!");
static_assert(offsetof(USkillStatusDescForBattleSet_C, SkillMasterData) == 0x000318, "Member 'USkillStatusDescForBattleSet_C::SkillMasterData' has a wrong offset!");
static_assert(offsetof(USkillStatusDescForBattleSet_C, WindowSize) == 0x000370, "Member 'USkillStatusDescForBattleSet_C::WindowSize' has a wrong offset!");
static_assert(offsetof(USkillStatusDescForBattleSet_C, SelectedSkillTypeId) == 0x000378, "Member 'USkillStatusDescForBattleSet_C::SelectedSkillTypeId' has a wrong offset!");
static_assert(offsetof(USkillStatusDescForBattleSet_C, EquippedSkillTypeId) == 0x00037C, "Member 'USkillStatusDescForBattleSet_C::EquippedSkillTypeId' has a wrong offset!");

}

