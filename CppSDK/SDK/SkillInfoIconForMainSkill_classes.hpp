#pragma once

 

// Package: SkillInfoIconForMainSkill

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SkillInfoIconForMainSkill.SkillInfoIconForMainSkill_C
// 0x0030 (0x02A8 - 0x0278)
class USkillInfoIconForMainSkill_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            BtnForPadCursorMove;                               // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillInfoItem_C*                       MainSkill;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillLevelInfoForBattleSet_C*          MainSkillLevel;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUserWidget*                            CachedToolTipWidget;                               // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SkillId;                                           // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SkillLevel;                                        // 0x02A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SkillInfoIconForMainSkill(int32 EntryPoint);
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
		return StaticBPGeneratedClassImpl<"SkillInfoIconForMainSkill_C">();
	}
	static class USkillInfoIconForMainSkill_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkillInfoIconForMainSkill_C>();
	}
};
static_assert(alignof(USkillInfoIconForMainSkill_C) == 0x000008, "Wrong alignment on USkillInfoIconForMainSkill_C");
static_assert(sizeof(USkillInfoIconForMainSkill_C) == 0x0002A8, "Wrong size on USkillInfoIconForMainSkill_C");
static_assert(offsetof(USkillInfoIconForMainSkill_C, UberGraphFrame) == 0x000278, "Member 'USkillInfoIconForMainSkill_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USkillInfoIconForMainSkill_C, BtnForPadCursorMove) == 0x000280, "Member 'USkillInfoIconForMainSkill_C::BtnForPadCursorMove' has a wrong offset!");
static_assert(offsetof(USkillInfoIconForMainSkill_C, MainSkill) == 0x000288, "Member 'USkillInfoIconForMainSkill_C::MainSkill' has a wrong offset!");
static_assert(offsetof(USkillInfoIconForMainSkill_C, MainSkillLevel) == 0x000290, "Member 'USkillInfoIconForMainSkill_C::MainSkillLevel' has a wrong offset!");
static_assert(offsetof(USkillInfoIconForMainSkill_C, CachedToolTipWidget) == 0x000298, "Member 'USkillInfoIconForMainSkill_C::CachedToolTipWidget' has a wrong offset!");
static_assert(offsetof(USkillInfoIconForMainSkill_C, SkillId) == 0x0002A0, "Member 'USkillInfoIconForMainSkill_C::SkillId' has a wrong offset!");
static_assert(offsetof(USkillInfoIconForMainSkill_C, SkillLevel) == 0x0002A4, "Member 'USkillInfoIconForMainSkill_C::SkillLevel' has a wrong offset!");

}

