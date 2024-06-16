#pragma once

 

// Package: TacticalSkillInfoForBattleSet

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TacticalSkillInfoForBattleSet.TacticalSkillInfoForBattleSet_C
// 0x0070 (0x02E8 - 0x0278)
class UTacticalSkillInfoForBattleSet_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Bg01;                                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HBoxForSkillTypeRadionBtn;                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_TacticalSkillLargeIcon_C*  SkillIcon;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           SkillTypeGrp;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTacticalSkillTypeRadioBtn_C*           SkillTypeRadioBtnA;                                // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTacticalSkillTypeRadioBtn_C*           SkillTypeRadioBtnB;                                // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTacticalSkillTypeRadioBtn_C*           SkillTypeRadioBtnN;                                // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SkillTypeSelectMessageTxt;                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         SkillId;                                           // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SkillLevel;                                        // 0x02C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectedSkillTypeId;                               // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SkillProficiencyLevelForTypeSelect;                // 0x02CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSkillTypeRadioBtnSelected;                       // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         AbilityAlphaSkillId;                               // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AbilityBetaSkillId;                                // 0x02E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnSkillTypeRadioBtnSelected__DelegateSignature(int32 InSelectedSkillTypeId, int32 InSelectedSkillId);
	void ExecuteUbergraph_TacticalSkillInfoForBattleSet(int32 EntryPoint);
	void OnRadioBtnSelected(int32 InSkillTypeId);
	void Destruct();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void SetSKill(int32 InSkillId, int32 InSkillLevel, bool InIsSkillTypeSelectableLevel, bool InIsSkillTypeSelectMode, int32 InEquippedSkillTypeId, int32 InSelectedSkillTypeId);
	void SetInfoType(bool InIsSkillTypeSelectableLevel, bool InIsSkillTypeSelectMode, int32 InEquippedSkillTypeId);
	void UpdateSkillTypeRadioBtn(int32 InSkillTypeId);
	void SetSkillTypeSelectMode(bool InIsSelectMode, int32 InEquippedSkillTypeId);
	void GetAbilitySkillId(int32 InBaseSkillId, int32* OutAbilityAlphaSkillId, int32* OutAbilityBetaSkillId);
	void CheckAbilityMastery(int32 InAbilitySkillId, bool* OutIsMastery);
	void SetSkillTypeRadioBtnEnable(class UTacticalSkillTypeRadioBtn_C* InSkillTypeRadioBtn, bool InIsEnabled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TacticalSkillInfoForBattleSet_C">();
	}
	static class UTacticalSkillInfoForBattleSet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTacticalSkillInfoForBattleSet_C>();
	}
};
static_assert(alignof(UTacticalSkillInfoForBattleSet_C) == 0x000008, "Wrong alignment on UTacticalSkillInfoForBattleSet_C");
static_assert(sizeof(UTacticalSkillInfoForBattleSet_C) == 0x0002E8, "Wrong size on UTacticalSkillInfoForBattleSet_C");
static_assert(offsetof(UTacticalSkillInfoForBattleSet_C, UberGraphFrame) == 0x000278, "Member 'UTacticalSkillInfoForBattleSet_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTacticalSkillInfoForBattleSet_C, Bg01) == 0x000280, "Member 'UTacticalSkillInfoForBattleSet_C::Bg01' has a wrong offset!");
static_assert(offsetof(UTacticalSkillInfoForBattleSet_C, HBoxForSkillTypeRadionBtn) == 0x000288, "Member 'UTacticalSkillInfoForBattleSet_C::HBoxForSkillTypeRadionBtn' has a wrong offset!");
static_assert(offsetof(UTacticalSkillInfoForBattleSet_C, SkillIcon) == 0x000290, "Member 'UTacticalSkillInfoForBattleSet_C::SkillIcon' has a wrong offset!");
static_assert(offsetof(UTacticalSkillInfoForBattleSet_C, SkillTypeGrp) == 0x000298, "Member 'UTacticalSkillInfoForBattleSet_C::SkillTypeGrp' has a wrong offset!");
static_assert(offsetof(UTacticalSkillInfoForBattleSet_C, SkillTypeRadioBtnA) == 0x0002A0, "Member 'UTacticalSkillInfoForBattleSet_C::SkillTypeRadioBtnA' has a wrong offset!");
static_assert(offsetof(UTacticalSkillInfoForBattleSet_C, SkillTypeRadioBtnB) == 0x0002A8, "Member 'UTacticalSkillInfoForBattleSet_C::SkillTypeRadioBtnB' has a wrong offset!");
static_assert(offsetof(UTacticalSkillInfoForBattleSet_C, SkillTypeRadioBtnN) == 0x0002B0, "Member 'UTacticalSkillInfoForBattleSet_C::SkillTypeRadioBtnN' has a wrong offset!");
static_assert(offsetof(UTacticalSkillInfoForBattleSet_C, SkillTypeSelectMessageTxt) == 0x0002B8, "Member 'UTacticalSkillInfoForBattleSet_C::SkillTypeSelectMessageTxt' has a wrong offset!");
static_assert(offsetof(UTacticalSkillInfoForBattleSet_C, SkillId) == 0x0002C0, "Member 'UTacticalSkillInfoForBattleSet_C::SkillId' has a wrong offset!");
static_assert(offsetof(UTacticalSkillInfoForBattleSet_C, SkillLevel) == 0x0002C4, "Member 'UTacticalSkillInfoForBattleSet_C::SkillLevel' has a wrong offset!");
static_assert(offsetof(UTacticalSkillInfoForBattleSet_C, SelectedSkillTypeId) == 0x0002C8, "Member 'UTacticalSkillInfoForBattleSet_C::SelectedSkillTypeId' has a wrong offset!");
static_assert(offsetof(UTacticalSkillInfoForBattleSet_C, SkillProficiencyLevelForTypeSelect) == 0x0002CC, "Member 'UTacticalSkillInfoForBattleSet_C::SkillProficiencyLevelForTypeSelect' has a wrong offset!");
static_assert(offsetof(UTacticalSkillInfoForBattleSet_C, OnSkillTypeRadioBtnSelected) == 0x0002D0, "Member 'UTacticalSkillInfoForBattleSet_C::OnSkillTypeRadioBtnSelected' has a wrong offset!");
static_assert(offsetof(UTacticalSkillInfoForBattleSet_C, AbilityAlphaSkillId) == 0x0002E0, "Member 'UTacticalSkillInfoForBattleSet_C::AbilityAlphaSkillId' has a wrong offset!");
static_assert(offsetof(UTacticalSkillInfoForBattleSet_C, AbilityBetaSkillId) == 0x0002E4, "Member 'UTacticalSkillInfoForBattleSet_C::AbilityBetaSkillId' has a wrong offset!");

}

