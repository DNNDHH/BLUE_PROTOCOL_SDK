#pragma once

 

// Package: UMG_LiquidMemoryItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_LiquidMemoryItem.UMG_LiquidMemoryItem_C
// 0x00A8 (0x0320 - 0x0278)
class UUMG_LiquidMemoryItem_C final : public UUserWidget
{
public:
	class UImage*                                 ActivateOn;                                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_LiquidMemoryBottleStatus_C*        BottleStatus;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBonusSmall_C*                       CmnBonus;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_RemainingUseTime;                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_1;                                            // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_2;                                            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineImage;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Activated;                                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_ActivateLevel;                                 // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_Condition_1;                                   // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_Condition_2;                                   // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_EfficacyTitle;                                 // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_EfficacyType;                                  // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_RemainingUseCount;                             // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBDateTimeTextBlock*                   Txt_RemainingUseTime;                              // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_AccumulateConditions;                  // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_ActivateInfo;                          // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_63;                                 // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FSBTextTableHash>               ConditionTypeNameTextIds;                          // 0x0308(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UUMG_RewardBoostTooltip_C*              BonusToolTip;                                      // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetEfficacyTypeText(const struct FSBTextTableHash& InNameTextId, const struct FSBTextTableHash& InDescTextId);
	void SetBottleStatus(bool InIsLiquidMemoryInfoValid, const struct FSBLiquidMemoryInfo& InLiquidMemoryInfo);
	void SetAccumulateConditionText(TArray<struct FSBTextTableHash>& InTextID);
	void Setup_Tooltip_Widget(TArray<struct FSBRewardBoostTooltipData>& DataList);
	void UpdateBonusStatus(int32 LiquidMemoryId, bool* Visible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_LiquidMemoryItem_C">();
	}
	static class UUMG_LiquidMemoryItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_LiquidMemoryItem_C>();
	}
};
static_assert(alignof(UUMG_LiquidMemoryItem_C) == 0x000008, "Wrong alignment on UUMG_LiquidMemoryItem_C");
static_assert(sizeof(UUMG_LiquidMemoryItem_C) == 0x000320, "Wrong size on UUMG_LiquidMemoryItem_C");
static_assert(offsetof(UUMG_LiquidMemoryItem_C, ActivateOn) == 0x000278, "Member 'UUMG_LiquidMemoryItem_C::ActivateOn' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryItem_C, BottleStatus) == 0x000280, "Member 'UUMG_LiquidMemoryItem_C::BottleStatus' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryItem_C, CmnBonus) == 0x000288, "Member 'UUMG_LiquidMemoryItem_C::CmnBonus' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryItem_C, HorizontalBox_RemainingUseTime) == 0x000290, "Member 'UUMG_LiquidMemoryItem_C::HorizontalBox_RemainingUseTime' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryItem_C, Line_1) == 0x000298, "Member 'UUMG_LiquidMemoryItem_C::Line_1' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryItem_C, Line_2) == 0x0002A0, "Member 'UUMG_LiquidMemoryItem_C::Line_2' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryItem_C, LineImage) == 0x0002A8, "Member 'UUMG_LiquidMemoryItem_C::LineImage' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryItem_C, Txt_Activated) == 0x0002B0, "Member 'UUMG_LiquidMemoryItem_C::Txt_Activated' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryItem_C, Txt_ActivateLevel) == 0x0002B8, "Member 'UUMG_LiquidMemoryItem_C::Txt_ActivateLevel' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryItem_C, Txt_Condition_1) == 0x0002C0, "Member 'UUMG_LiquidMemoryItem_C::Txt_Condition_1' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryItem_C, Txt_Condition_2) == 0x0002C8, "Member 'UUMG_LiquidMemoryItem_C::Txt_Condition_2' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryItem_C, Txt_EfficacyTitle) == 0x0002D0, "Member 'UUMG_LiquidMemoryItem_C::Txt_EfficacyTitle' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryItem_C, Txt_EfficacyType) == 0x0002D8, "Member 'UUMG_LiquidMemoryItem_C::Txt_EfficacyType' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryItem_C, Txt_RemainingUseCount) == 0x0002E0, "Member 'UUMG_LiquidMemoryItem_C::Txt_RemainingUseCount' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryItem_C, Txt_RemainingUseTime) == 0x0002E8, "Member 'UUMG_LiquidMemoryItem_C::Txt_RemainingUseTime' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryItem_C, VerticalBox_AccumulateConditions) == 0x0002F0, "Member 'UUMG_LiquidMemoryItem_C::VerticalBox_AccumulateConditions' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryItem_C, VerticalBox_ActivateInfo) == 0x0002F8, "Member 'UUMG_LiquidMemoryItem_C::VerticalBox_ActivateInfo' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryItem_C, WidgetSwitcher_63) == 0x000300, "Member 'UUMG_LiquidMemoryItem_C::WidgetSwitcher_63' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryItem_C, ConditionTypeNameTextIds) == 0x000308, "Member 'UUMG_LiquidMemoryItem_C::ConditionTypeNameTextIds' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryItem_C, BonusToolTip) == 0x000318, "Member 'UUMG_LiquidMemoryItem_C::BonusToolTip' has a wrong offset!");

}

