#pragma once

 

// Package: WBP_ToolTip_Skill

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ToolTip_Skill.WBP_ToolTip_Skill_C
// 0x00C0 (0x0338 - 0x0278)
class UWBP_ToolTip_Skill_C final : public UUserWidget
{
public:
	class UTextBlock*                             AbilityType;                                       // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BuffIcon_1;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BuffIcon_2;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BuffIcon_3;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BuffIcon_4;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BuffIcon_5;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BuffIcon_6;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BuffIcon_7;                                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BuffIcon_8;                                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ClassType;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             GridPanel_93;                                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageLine1;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ImagineGrp2;                                       // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       LabelDescription;                                  // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    LevelMark;                                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ReleaseLevel;                                      // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_14;                             // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_248;                            // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SkillType;                                         // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtName;                                           // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtName_Class;                                     // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtRecast_1;                                       // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_117;                                // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Set_Skill(int32 SkillId, int32 SkillLevel);
	void BuffIconsCollapsed();
	void SetUnleashedSkill(ESBSkillType InSkillIType, ESBSkillAbilityType InSkillAbilityType, ESBClassType InClassType, int32 InReleaseLevel);
	void GetTacticalSkillBaseInfo(const struct FSBSkillDataMasterData& InSkillMasterData, bool* IsTacticalSkill, int32* OutBaseSkillId, int32* OutBaseSkillLevel);
	void SetSkillActiveAbilityLvReference(int32 SkillId, int32 SkillLevel, int32 ConditionSkillLevel);
	void SetDescription(const struct FSBSkillDataMasterData& SBSkillDataMasterData, int32 DisplaySkillLV1);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ToolTip_Skill_C">();
	}
	static class UWBP_ToolTip_Skill_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ToolTip_Skill_C>();
	}
};
static_assert(alignof(UWBP_ToolTip_Skill_C) == 0x000008, "Wrong alignment on UWBP_ToolTip_Skill_C");
static_assert(sizeof(UWBP_ToolTip_Skill_C) == 0x000338, "Wrong size on UWBP_ToolTip_Skill_C");
static_assert(offsetof(UWBP_ToolTip_Skill_C, AbilityType) == 0x000278, "Member 'UWBP_ToolTip_Skill_C::AbilityType' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTip_Skill_C, BG) == 0x000280, "Member 'UWBP_ToolTip_Skill_C::BG' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTip_Skill_C, BuffIcon_1) == 0x000288, "Member 'UWBP_ToolTip_Skill_C::BuffIcon_1' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTip_Skill_C, BuffIcon_2) == 0x000290, "Member 'UWBP_ToolTip_Skill_C::BuffIcon_2' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTip_Skill_C, BuffIcon_3) == 0x000298, "Member 'UWBP_ToolTip_Skill_C::BuffIcon_3' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTip_Skill_C, BuffIcon_4) == 0x0002A0, "Member 'UWBP_ToolTip_Skill_C::BuffIcon_4' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTip_Skill_C, BuffIcon_5) == 0x0002A8, "Member 'UWBP_ToolTip_Skill_C::BuffIcon_5' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTip_Skill_C, BuffIcon_6) == 0x0002B0, "Member 'UWBP_ToolTip_Skill_C::BuffIcon_6' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTip_Skill_C, BuffIcon_7) == 0x0002B8, "Member 'UWBP_ToolTip_Skill_C::BuffIcon_7' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTip_Skill_C, BuffIcon_8) == 0x0002C0, "Member 'UWBP_ToolTip_Skill_C::BuffIcon_8' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTip_Skill_C, ClassType) == 0x0002C8, "Member 'UWBP_ToolTip_Skill_C::ClassType' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTip_Skill_C, GridPanel_93) == 0x0002D0, "Member 'UWBP_ToolTip_Skill_C::GridPanel_93' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTip_Skill_C, ImageLine1) == 0x0002D8, "Member 'UWBP_ToolTip_Skill_C::ImageLine1' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTip_Skill_C, ImagineGrp2) == 0x0002E0, "Member 'UWBP_ToolTip_Skill_C::ImagineGrp2' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTip_Skill_C, LabelDescription) == 0x0002E8, "Member 'UWBP_ToolTip_Skill_C::LabelDescription' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTip_Skill_C, LevelMark) == 0x0002F0, "Member 'UWBP_ToolTip_Skill_C::LevelMark' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTip_Skill_C, ReleaseLevel) == 0x0002F8, "Member 'UWBP_ToolTip_Skill_C::ReleaseLevel' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTip_Skill_C, SBRuntimeTextBlock_14) == 0x000300, "Member 'UWBP_ToolTip_Skill_C::SBRuntimeTextBlock_14' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTip_Skill_C, SBRuntimeTextBlock_248) == 0x000308, "Member 'UWBP_ToolTip_Skill_C::SBRuntimeTextBlock_248' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTip_Skill_C, SkillType) == 0x000310, "Member 'UWBP_ToolTip_Skill_C::SkillType' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTip_Skill_C, TxtName) == 0x000318, "Member 'UWBP_ToolTip_Skill_C::TxtName' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTip_Skill_C, TxtName_Class) == 0x000320, "Member 'UWBP_ToolTip_Skill_C::TxtName_Class' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTip_Skill_C, TxtRecast_1) == 0x000328, "Member 'UWBP_ToolTip_Skill_C::TxtRecast_1' has a wrong offset!");
static_assert(offsetof(UWBP_ToolTip_Skill_C, WidgetSwitcher_117) == 0x000330, "Member 'UWBP_ToolTip_Skill_C::WidgetSwitcher_117' has a wrong offset!");

}

