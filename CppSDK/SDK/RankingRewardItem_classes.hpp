#pragma once

 

// Package: RankingRewardItem

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass RankingRewardItem.RankingRewardItem_C
// 0x00B0 (0x0328 - 0x0278)
class URankingRewardItem_C final : public UUserWidget
{
public:
	class UImage*                                 BG_3;                                              // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Trophy;                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Trophy;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line;                                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestRewardIcon_C*                     QuestRewardIcon_1;                                 // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestRewardIcon_C*                     QuestRewardIcon_2;                                 // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestRewardIcon_C*                     QuestRewardIcon_3;                                 // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestRewardIcon_C*                     QuestRewardIcon_4;                                 // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestRewardIcon_C*                     QuestRewardIcon_5;                                 // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestRewardIcon_C*                     QuestRewardIcon_6;                                 // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestRewardIcon_C*                     QuestRewardIcon_7;                                 // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestRewardIcon_C*                     QuestRewardIcon_8;                                 // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestRewardIcon_C*                     QuestRewardIcon_9;                                 // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             RankNum_1;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             RankNum_2;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             RankNum_3;                                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Top;                                               // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Top_1;                                             // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Top_2;                                             // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Top_3;                                             // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Bg_1;                               // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Num;                                // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetData(const struct FRankingRewardData& RankingRewardData, bool TotallingEnd, bool Trophy);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RankingRewardItem_C">();
	}
	static class URankingRewardItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URankingRewardItem_C>();
	}
};
static_assert(alignof(URankingRewardItem_C) == 0x000008, "Wrong alignment on URankingRewardItem_C");
static_assert(sizeof(URankingRewardItem_C) == 0x000328, "Wrong size on URankingRewardItem_C");
static_assert(offsetof(URankingRewardItem_C, BG_3) == 0x000278, "Member 'URankingRewardItem_C::BG_3' has a wrong offset!");
static_assert(offsetof(URankingRewardItem_C, CanvasPanel_Trophy) == 0x000280, "Member 'URankingRewardItem_C::CanvasPanel_Trophy' has a wrong offset!");
static_assert(offsetof(URankingRewardItem_C, Image_Trophy) == 0x000288, "Member 'URankingRewardItem_C::Image_Trophy' has a wrong offset!");
static_assert(offsetof(URankingRewardItem_C, Line) == 0x000290, "Member 'URankingRewardItem_C::Line' has a wrong offset!");
static_assert(offsetof(URankingRewardItem_C, QuestRewardIcon_1) == 0x000298, "Member 'URankingRewardItem_C::QuestRewardIcon_1' has a wrong offset!");
static_assert(offsetof(URankingRewardItem_C, QuestRewardIcon_2) == 0x0002A0, "Member 'URankingRewardItem_C::QuestRewardIcon_2' has a wrong offset!");
static_assert(offsetof(URankingRewardItem_C, QuestRewardIcon_3) == 0x0002A8, "Member 'URankingRewardItem_C::QuestRewardIcon_3' has a wrong offset!");
static_assert(offsetof(URankingRewardItem_C, QuestRewardIcon_4) == 0x0002B0, "Member 'URankingRewardItem_C::QuestRewardIcon_4' has a wrong offset!");
static_assert(offsetof(URankingRewardItem_C, QuestRewardIcon_5) == 0x0002B8, "Member 'URankingRewardItem_C::QuestRewardIcon_5' has a wrong offset!");
static_assert(offsetof(URankingRewardItem_C, QuestRewardIcon_6) == 0x0002C0, "Member 'URankingRewardItem_C::QuestRewardIcon_6' has a wrong offset!");
static_assert(offsetof(URankingRewardItem_C, QuestRewardIcon_7) == 0x0002C8, "Member 'URankingRewardItem_C::QuestRewardIcon_7' has a wrong offset!");
static_assert(offsetof(URankingRewardItem_C, QuestRewardIcon_8) == 0x0002D0, "Member 'URankingRewardItem_C::QuestRewardIcon_8' has a wrong offset!");
static_assert(offsetof(URankingRewardItem_C, QuestRewardIcon_9) == 0x0002D8, "Member 'URankingRewardItem_C::QuestRewardIcon_9' has a wrong offset!");
static_assert(offsetof(URankingRewardItem_C, RankNum_1) == 0x0002E0, "Member 'URankingRewardItem_C::RankNum_1' has a wrong offset!");
static_assert(offsetof(URankingRewardItem_C, RankNum_2) == 0x0002E8, "Member 'URankingRewardItem_C::RankNum_2' has a wrong offset!");
static_assert(offsetof(URankingRewardItem_C, RankNum_3) == 0x0002F0, "Member 'URankingRewardItem_C::RankNum_3' has a wrong offset!");
static_assert(offsetof(URankingRewardItem_C, Top) == 0x0002F8, "Member 'URankingRewardItem_C::Top' has a wrong offset!");
static_assert(offsetof(URankingRewardItem_C, Top_1) == 0x000300, "Member 'URankingRewardItem_C::Top_1' has a wrong offset!");
static_assert(offsetof(URankingRewardItem_C, Top_2) == 0x000308, "Member 'URankingRewardItem_C::Top_2' has a wrong offset!");
static_assert(offsetof(URankingRewardItem_C, Top_3) == 0x000310, "Member 'URankingRewardItem_C::Top_3' has a wrong offset!");
static_assert(offsetof(URankingRewardItem_C, WidgetSwitcher_Bg_1) == 0x000318, "Member 'URankingRewardItem_C::WidgetSwitcher_Bg_1' has a wrong offset!");
static_assert(offsetof(URankingRewardItem_C, WidgetSwitcher_Num) == 0x000320, "Member 'URankingRewardItem_C::WidgetSwitcher_Num' has a wrong offset!");

}

