#pragma once

 

// Package: LibraryMenu_Monster_ExplainTabMenu

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LibraryMenu_Monster_ExplainTabMenu.LibraryMenu_Monster_ExplainTabMenu_C
// 0x0168 (0x03E0 - 0x0278)
class ULibraryMenu_Monster_ExplainTabMenu_C final : public UUserWidget
{
public:
	class USBRichTextBlock*                       AttackText;                                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             AttackValueText;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 AttributeBG;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 AttributeInfoIcon;                                 // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 AttributeNewIcon;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 AttributePanelLine;                                // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        AttributeSwitcher_150;                             // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             AttributeValueText;                                // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             CommentBox;                                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CommentInfoIcon;                                   // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CommentNewIcon;                                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             CommentValueText;                                  // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       DisableAttrText5;                                  // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line;                                              // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       PhysicalText;                                      // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PhysicalValueText;                                 // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       SBRichTextBlock_555;                               // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 StatusBG;                                          // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 StatusInfoIcon;                                    // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 StatusNewIcon;                                     // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 StatusPanelLine_H;                                 // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 StatusPanelLine_V1;                                // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 StatusPanelLine_V2;                                // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TypeBG;                                            // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TypeInfoIcon;                                      // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TypeNewIcon;                                       // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TypePanelLine;                                     // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       TypeText;                                          // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TypeValueText;                                     // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSBLibraryEnemyData                    ViewEnemyData;                                     // 0x0368(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         SelectEnemyType;                                   // 0x0390(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectEnemyIndex;                                  // 0x0394(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBLibraryEnemyDetailOpenSetting       DetailOpenSetting;                                 // 0x0398(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWBP_CommonToolTipDetail_Variable_C*    AttributeTooltip;                                  // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_CommonToolTipDetail_Variable_C*    StatusTooltip;                                     // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_CommonToolTipDetail_Variable_C*    CommentTooltip;                                    // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_CommonToolTipDetail_Variable_C*    RaceTooltip;                                       // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         EnemyKillCount;                                    // 0x03D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NewIconCheckCount;                                 // 0x03DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetEnemyData(const struct FSBLibraryEnemyData& EnemyData);
	void ChangeEnemyData(int32 Param_Index, int32 Type);
	void UpdateDetailOpenSetting(class FName CheckType);
	void Set_Info_Tooltip(class UImage* TargetIcon, class UWBP_CommonToolTipDetail_Variable_C*& TipWidget, int32 TotalCount, int32 NowCount);
	void ChangeEnemyDataFromId(class FName EnemyId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LibraryMenu_Monster_ExplainTabMenu_C">();
	}
	static class ULibraryMenu_Monster_ExplainTabMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULibraryMenu_Monster_ExplainTabMenu_C>();
	}
};
static_assert(alignof(ULibraryMenu_Monster_ExplainTabMenu_C) == 0x000008, "Wrong alignment on ULibraryMenu_Monster_ExplainTabMenu_C");
static_assert(sizeof(ULibraryMenu_Monster_ExplainTabMenu_C) == 0x0003E0, "Wrong size on ULibraryMenu_Monster_ExplainTabMenu_C");
static_assert(offsetof(ULibraryMenu_Monster_ExplainTabMenu_C, AttackText) == 0x000278, "Member 'ULibraryMenu_Monster_ExplainTabMenu_C::AttackText' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ExplainTabMenu_C, AttackValueText) == 0x000280, "Member 'ULibraryMenu_Monster_ExplainTabMenu_C::AttackValueText' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ExplainTabMenu_C, AttributeBG) == 0x000288, "Member 'ULibraryMenu_Monster_ExplainTabMenu_C::AttributeBG' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ExplainTabMenu_C, AttributeInfoIcon) == 0x000290, "Member 'ULibraryMenu_Monster_ExplainTabMenu_C::AttributeInfoIcon' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ExplainTabMenu_C, AttributeNewIcon) == 0x000298, "Member 'ULibraryMenu_Monster_ExplainTabMenu_C::AttributeNewIcon' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ExplainTabMenu_C, AttributePanelLine) == 0x0002A0, "Member 'ULibraryMenu_Monster_ExplainTabMenu_C::AttributePanelLine' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ExplainTabMenu_C, AttributeSwitcher_150) == 0x0002A8, "Member 'ULibraryMenu_Monster_ExplainTabMenu_C::AttributeSwitcher_150' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ExplainTabMenu_C, AttributeValueText) == 0x0002B0, "Member 'ULibraryMenu_Monster_ExplainTabMenu_C::AttributeValueText' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ExplainTabMenu_C, BG) == 0x0002B8, "Member 'ULibraryMenu_Monster_ExplainTabMenu_C::BG' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ExplainTabMenu_C, CommentBox) == 0x0002C0, "Member 'ULibraryMenu_Monster_ExplainTabMenu_C::CommentBox' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ExplainTabMenu_C, CommentInfoIcon) == 0x0002C8, "Member 'ULibraryMenu_Monster_ExplainTabMenu_C::CommentInfoIcon' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ExplainTabMenu_C, CommentNewIcon) == 0x0002D0, "Member 'ULibraryMenu_Monster_ExplainTabMenu_C::CommentNewIcon' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ExplainTabMenu_C, CommentValueText) == 0x0002D8, "Member 'ULibraryMenu_Monster_ExplainTabMenu_C::CommentValueText' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ExplainTabMenu_C, DisableAttrText5) == 0x0002E0, "Member 'ULibraryMenu_Monster_ExplainTabMenu_C::DisableAttrText5' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ExplainTabMenu_C, Line) == 0x0002E8, "Member 'ULibraryMenu_Monster_ExplainTabMenu_C::Line' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ExplainTabMenu_C, PhysicalText) == 0x0002F0, "Member 'ULibraryMenu_Monster_ExplainTabMenu_C::PhysicalText' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ExplainTabMenu_C, PhysicalValueText) == 0x0002F8, "Member 'ULibraryMenu_Monster_ExplainTabMenu_C::PhysicalValueText' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ExplainTabMenu_C, SBRichTextBlock_555) == 0x000300, "Member 'ULibraryMenu_Monster_ExplainTabMenu_C::SBRichTextBlock_555' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ExplainTabMenu_C, StatusBG) == 0x000308, "Member 'ULibraryMenu_Monster_ExplainTabMenu_C::StatusBG' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ExplainTabMenu_C, StatusInfoIcon) == 0x000310, "Member 'ULibraryMenu_Monster_ExplainTabMenu_C::StatusInfoIcon' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ExplainTabMenu_C, StatusNewIcon) == 0x000318, "Member 'ULibraryMenu_Monster_ExplainTabMenu_C::StatusNewIcon' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ExplainTabMenu_C, StatusPanelLine_H) == 0x000320, "Member 'ULibraryMenu_Monster_ExplainTabMenu_C::StatusPanelLine_H' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ExplainTabMenu_C, StatusPanelLine_V1) == 0x000328, "Member 'ULibraryMenu_Monster_ExplainTabMenu_C::StatusPanelLine_V1' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ExplainTabMenu_C, StatusPanelLine_V2) == 0x000330, "Member 'ULibraryMenu_Monster_ExplainTabMenu_C::StatusPanelLine_V2' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ExplainTabMenu_C, TypeBG) == 0x000338, "Member 'ULibraryMenu_Monster_ExplainTabMenu_C::TypeBG' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ExplainTabMenu_C, TypeInfoIcon) == 0x000340, "Member 'ULibraryMenu_Monster_ExplainTabMenu_C::TypeInfoIcon' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ExplainTabMenu_C, TypeNewIcon) == 0x000348, "Member 'ULibraryMenu_Monster_ExplainTabMenu_C::TypeNewIcon' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ExplainTabMenu_C, TypePanelLine) == 0x000350, "Member 'ULibraryMenu_Monster_ExplainTabMenu_C::TypePanelLine' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ExplainTabMenu_C, TypeText) == 0x000358, "Member 'ULibraryMenu_Monster_ExplainTabMenu_C::TypeText' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ExplainTabMenu_C, TypeValueText) == 0x000360, "Member 'ULibraryMenu_Monster_ExplainTabMenu_C::TypeValueText' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ExplainTabMenu_C, ViewEnemyData) == 0x000368, "Member 'ULibraryMenu_Monster_ExplainTabMenu_C::ViewEnemyData' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ExplainTabMenu_C, SelectEnemyType) == 0x000390, "Member 'ULibraryMenu_Monster_ExplainTabMenu_C::SelectEnemyType' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ExplainTabMenu_C, SelectEnemyIndex) == 0x000394, "Member 'ULibraryMenu_Monster_ExplainTabMenu_C::SelectEnemyIndex' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ExplainTabMenu_C, DetailOpenSetting) == 0x000398, "Member 'ULibraryMenu_Monster_ExplainTabMenu_C::DetailOpenSetting' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ExplainTabMenu_C, AttributeTooltip) == 0x0003B8, "Member 'ULibraryMenu_Monster_ExplainTabMenu_C::AttributeTooltip' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ExplainTabMenu_C, StatusTooltip) == 0x0003C0, "Member 'ULibraryMenu_Monster_ExplainTabMenu_C::StatusTooltip' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ExplainTabMenu_C, CommentTooltip) == 0x0003C8, "Member 'ULibraryMenu_Monster_ExplainTabMenu_C::CommentTooltip' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ExplainTabMenu_C, RaceTooltip) == 0x0003D0, "Member 'ULibraryMenu_Monster_ExplainTabMenu_C::RaceTooltip' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ExplainTabMenu_C, EnemyKillCount) == 0x0003D8, "Member 'ULibraryMenu_Monster_ExplainTabMenu_C::EnemyKillCount' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ExplainTabMenu_C, NewIconCheckCount) == 0x0003DC, "Member 'ULibraryMenu_Monster_ExplainTabMenu_C::NewIconCheckCount' has a wrong offset!");

}

