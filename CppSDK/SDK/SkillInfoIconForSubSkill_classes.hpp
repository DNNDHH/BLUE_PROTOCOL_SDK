#pragma once

 

// Package: SkillInfoIconForSubSkill

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SkillInfoIconForSubSkill.SkillInfoIconForSubSkill_C
// 0x0030 (0x02A8 - 0x0278)
class USkillInfoIconForSubSkill_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            BtnForPadCursorMove;                               // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillInfoItem_C*                       SubSkill;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillLevelInfoForBattleSet_C*          SubSkillLevel;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUserWidget*                            CachedToolTipWidget;                               // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SkillId;                                           // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SkillLevel;                                        // 0x02A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SkillInfoIconForSubSkill(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void CreateTooltip(bool InIsNotUseTooltip);
	void SetSkillInfo(int32 InSkillId, int32 InSkillLevel, bool InIsInformationHidden, bool InIsSkillMastery);
	void SetLevel(int32 InLevel);
	void SetIsSkillEmpty(bool InIsEmpty);
	void InitSkillEmptyColor();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SkillInfoIconForSubSkill_C">();
	}
	static class USkillInfoIconForSubSkill_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkillInfoIconForSubSkill_C>();
	}
};
static_assert(alignof(USkillInfoIconForSubSkill_C) == 0x000008, "Wrong alignment on USkillInfoIconForSubSkill_C");
static_assert(sizeof(USkillInfoIconForSubSkill_C) == 0x0002A8, "Wrong size on USkillInfoIconForSubSkill_C");
static_assert(offsetof(USkillInfoIconForSubSkill_C, UberGraphFrame) == 0x000278, "Member 'USkillInfoIconForSubSkill_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USkillInfoIconForSubSkill_C, BtnForPadCursorMove) == 0x000280, "Member 'USkillInfoIconForSubSkill_C::BtnForPadCursorMove' has a wrong offset!");
static_assert(offsetof(USkillInfoIconForSubSkill_C, SubSkill) == 0x000288, "Member 'USkillInfoIconForSubSkill_C::SubSkill' has a wrong offset!");
static_assert(offsetof(USkillInfoIconForSubSkill_C, SubSkillLevel) == 0x000290, "Member 'USkillInfoIconForSubSkill_C::SubSkillLevel' has a wrong offset!");
static_assert(offsetof(USkillInfoIconForSubSkill_C, CachedToolTipWidget) == 0x000298, "Member 'USkillInfoIconForSubSkill_C::CachedToolTipWidget' has a wrong offset!");
static_assert(offsetof(USkillInfoIconForSubSkill_C, SkillId) == 0x0002A0, "Member 'USkillInfoIconForSubSkill_C::SkillId' has a wrong offset!");
static_assert(offsetof(USkillInfoIconForSubSkill_C, SkillLevel) == 0x0002A4, "Member 'USkillInfoIconForSubSkill_C::SkillLevel' has a wrong offset!");

}

