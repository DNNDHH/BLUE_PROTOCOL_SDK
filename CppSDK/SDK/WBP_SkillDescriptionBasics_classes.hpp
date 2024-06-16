#pragma once

 

// Package: WBP_SkillDescriptionBasics

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SkillDescriptionBasics.WBP_SkillDescriptionBasics_C
// 0x00A8 (0x0320 - 0x0278)
class UWBP_SkillDescriptionBasics_C final : public UUserWidget
{
public:
	class UCanvasPanel*                           BuffIconGrp;                                       // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ClassLevelGrp;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             GridPanel_Fuff;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_3;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 InfoBtn01;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       LabelDescription;                                  // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           RecastTimeGrp;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_5;                              // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_14;                             // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtLv;                                             // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtRecast_1;                                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_262;                                // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWPB_BuffIcon_C*                        WPB_BuffIcon_1;                                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWPB_BuffIcon_C*                        WPB_BuffIcon_2;                                    // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWPB_BuffIcon_C*                        WPB_BuffIcon_3;                                    // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWPB_BuffIcon_C*                        WPB_BuffIcon_4;                                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWPB_BuffIcon_C*                        WPB_BuffIcon_5;                                    // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWPB_BuffIcon_C*                        WPB_BuffIcon_6;                                    // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWPB_BuffIcon_C*                        WPB_BuffIcon_7;                                    // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWPB_BuffIcon_C*                        WPB_BuffIcon_8;                                    // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonToolTip_AbilityPerk_C*           ToolTip;                                           // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Set_Skill(int32 SkillId, int32 SkillLevel);
	void BuffIconsCollapsed();
	class UWidget* GetToolTipWidget_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_SkillDescriptionBasics_C">();
	}
	static class UWBP_SkillDescriptionBasics_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SkillDescriptionBasics_C>();
	}
};
static_assert(alignof(UWBP_SkillDescriptionBasics_C) == 0x000008, "Wrong alignment on UWBP_SkillDescriptionBasics_C");
static_assert(sizeof(UWBP_SkillDescriptionBasics_C) == 0x000320, "Wrong size on UWBP_SkillDescriptionBasics_C");
static_assert(offsetof(UWBP_SkillDescriptionBasics_C, BuffIconGrp) == 0x000278, "Member 'UWBP_SkillDescriptionBasics_C::BuffIconGrp' has a wrong offset!");
static_assert(offsetof(UWBP_SkillDescriptionBasics_C, ClassLevelGrp) == 0x000280, "Member 'UWBP_SkillDescriptionBasics_C::ClassLevelGrp' has a wrong offset!");
static_assert(offsetof(UWBP_SkillDescriptionBasics_C, GridPanel_Fuff) == 0x000288, "Member 'UWBP_SkillDescriptionBasics_C::GridPanel_Fuff' has a wrong offset!");
static_assert(offsetof(UWBP_SkillDescriptionBasics_C, HorizontalBox_3) == 0x000290, "Member 'UWBP_SkillDescriptionBasics_C::HorizontalBox_3' has a wrong offset!");
static_assert(offsetof(UWBP_SkillDescriptionBasics_C, InfoBtn01) == 0x000298, "Member 'UWBP_SkillDescriptionBasics_C::InfoBtn01' has a wrong offset!");
static_assert(offsetof(UWBP_SkillDescriptionBasics_C, LabelDescription) == 0x0002A0, "Member 'UWBP_SkillDescriptionBasics_C::LabelDescription' has a wrong offset!");
static_assert(offsetof(UWBP_SkillDescriptionBasics_C, RecastTimeGrp) == 0x0002A8, "Member 'UWBP_SkillDescriptionBasics_C::RecastTimeGrp' has a wrong offset!");
static_assert(offsetof(UWBP_SkillDescriptionBasics_C, SBRuntimeTextBlock_5) == 0x0002B0, "Member 'UWBP_SkillDescriptionBasics_C::SBRuntimeTextBlock_5' has a wrong offset!");
static_assert(offsetof(UWBP_SkillDescriptionBasics_C, SBRuntimeTextBlock_14) == 0x0002B8, "Member 'UWBP_SkillDescriptionBasics_C::SBRuntimeTextBlock_14' has a wrong offset!");
static_assert(offsetof(UWBP_SkillDescriptionBasics_C, TxtLv) == 0x0002C0, "Member 'UWBP_SkillDescriptionBasics_C::TxtLv' has a wrong offset!");
static_assert(offsetof(UWBP_SkillDescriptionBasics_C, TxtRecast_1) == 0x0002C8, "Member 'UWBP_SkillDescriptionBasics_C::TxtRecast_1' has a wrong offset!");
static_assert(offsetof(UWBP_SkillDescriptionBasics_C, WidgetSwitcher_262) == 0x0002D0, "Member 'UWBP_SkillDescriptionBasics_C::WidgetSwitcher_262' has a wrong offset!");
static_assert(offsetof(UWBP_SkillDescriptionBasics_C, WPB_BuffIcon_1) == 0x0002D8, "Member 'UWBP_SkillDescriptionBasics_C::WPB_BuffIcon_1' has a wrong offset!");
static_assert(offsetof(UWBP_SkillDescriptionBasics_C, WPB_BuffIcon_2) == 0x0002E0, "Member 'UWBP_SkillDescriptionBasics_C::WPB_BuffIcon_2' has a wrong offset!");
static_assert(offsetof(UWBP_SkillDescriptionBasics_C, WPB_BuffIcon_3) == 0x0002E8, "Member 'UWBP_SkillDescriptionBasics_C::WPB_BuffIcon_3' has a wrong offset!");
static_assert(offsetof(UWBP_SkillDescriptionBasics_C, WPB_BuffIcon_4) == 0x0002F0, "Member 'UWBP_SkillDescriptionBasics_C::WPB_BuffIcon_4' has a wrong offset!");
static_assert(offsetof(UWBP_SkillDescriptionBasics_C, WPB_BuffIcon_5) == 0x0002F8, "Member 'UWBP_SkillDescriptionBasics_C::WPB_BuffIcon_5' has a wrong offset!");
static_assert(offsetof(UWBP_SkillDescriptionBasics_C, WPB_BuffIcon_6) == 0x000300, "Member 'UWBP_SkillDescriptionBasics_C::WPB_BuffIcon_6' has a wrong offset!");
static_assert(offsetof(UWBP_SkillDescriptionBasics_C, WPB_BuffIcon_7) == 0x000308, "Member 'UWBP_SkillDescriptionBasics_C::WPB_BuffIcon_7' has a wrong offset!");
static_assert(offsetof(UWBP_SkillDescriptionBasics_C, WPB_BuffIcon_8) == 0x000310, "Member 'UWBP_SkillDescriptionBasics_C::WPB_BuffIcon_8' has a wrong offset!");
static_assert(offsetof(UWBP_SkillDescriptionBasics_C, ToolTip) == 0x000318, "Member 'UWBP_SkillDescriptionBasics_C::ToolTip' has a wrong offset!");

}

