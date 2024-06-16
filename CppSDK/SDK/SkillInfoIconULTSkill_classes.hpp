#pragma once

 

// Package: SkillInfoIconULTSkill

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SkillInfoIconULTSkill.SkillInfoIconULTSkill_C
// 0x0038 (0x02B0 - 0x0278)
class USkillInfoIconULTSkill_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            BtnForPadCursorMove;                               // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillInfoItem_C*                       ULTSkill;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillLevelInfoForBattleSet_C*          ULTSkillLevel;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUserWidget*                            CachedToolTipWidget;                               // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SkillId;                                           // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SkillLevel;                                        // 0x02A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  ClassType;                                         // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SkillInfoIconULTSkill(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void CreateTooltip(bool InIsNotUseTooltip, bool InIsSkillMastered);
	void SetSkillInfo(int32 InSkillId, int32 InSkillLevel, ESBClassType InClassType, bool InIsSkillMastery, bool InIsInformationHidden);
	void SetLevel(int32 InLevel);
	void SetIsSkillEmpty(bool InIsEmpty);
	void InitSkillStopUpdate();
	void UpdateSkillIcon(bool InIsMastery);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SkillInfoIconULTSkill_C">();
	}
	static class USkillInfoIconULTSkill_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkillInfoIconULTSkill_C>();
	}
};
static_assert(alignof(USkillInfoIconULTSkill_C) == 0x000008, "Wrong alignment on USkillInfoIconULTSkill_C");
static_assert(sizeof(USkillInfoIconULTSkill_C) == 0x0002B0, "Wrong size on USkillInfoIconULTSkill_C");
static_assert(offsetof(USkillInfoIconULTSkill_C, UberGraphFrame) == 0x000278, "Member 'USkillInfoIconULTSkill_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USkillInfoIconULTSkill_C, BtnForPadCursorMove) == 0x000280, "Member 'USkillInfoIconULTSkill_C::BtnForPadCursorMove' has a wrong offset!");
static_assert(offsetof(USkillInfoIconULTSkill_C, ULTSkill) == 0x000288, "Member 'USkillInfoIconULTSkill_C::ULTSkill' has a wrong offset!");
static_assert(offsetof(USkillInfoIconULTSkill_C, ULTSkillLevel) == 0x000290, "Member 'USkillInfoIconULTSkill_C::ULTSkillLevel' has a wrong offset!");
static_assert(offsetof(USkillInfoIconULTSkill_C, CachedToolTipWidget) == 0x000298, "Member 'USkillInfoIconULTSkill_C::CachedToolTipWidget' has a wrong offset!");
static_assert(offsetof(USkillInfoIconULTSkill_C, SkillId) == 0x0002A0, "Member 'USkillInfoIconULTSkill_C::SkillId' has a wrong offset!");
static_assert(offsetof(USkillInfoIconULTSkill_C, SkillLevel) == 0x0002A4, "Member 'USkillInfoIconULTSkill_C::SkillLevel' has a wrong offset!");
static_assert(offsetof(USkillInfoIconULTSkill_C, ClassType) == 0x0002A8, "Member 'USkillInfoIconULTSkill_C::ClassType' has a wrong offset!");

}

