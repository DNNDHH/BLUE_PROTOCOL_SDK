#pragma once

 

// Package: MyCharaMenu_AchievementList_Item_Tooltip

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MyCharaMenu_AchievementList_Item_Tooltip.MyCharaMenu_AchievementList_Item_Tooltip_C
// 0x0010 (0x0288 - 0x0278)
class UMyCharaMenu_AchievementList_Item_Tooltip_C final : public UUserWidget
{
public:
	class UImage*                                 Bg1;                                               // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_Tooltip;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetText(const class FText& InText);
	void GetText(class FText* OutText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MyCharaMenu_AchievementList_Item_Tooltip_C">();
	}
	static class UMyCharaMenu_AchievementList_Item_Tooltip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMyCharaMenu_AchievementList_Item_Tooltip_C>();
	}
};
static_assert(alignof(UMyCharaMenu_AchievementList_Item_Tooltip_C) == 0x000008, "Wrong alignment on UMyCharaMenu_AchievementList_Item_Tooltip_C");
static_assert(sizeof(UMyCharaMenu_AchievementList_Item_Tooltip_C) == 0x000288, "Wrong size on UMyCharaMenu_AchievementList_Item_Tooltip_C");
static_assert(offsetof(UMyCharaMenu_AchievementList_Item_Tooltip_C, Bg1) == 0x000278, "Member 'UMyCharaMenu_AchievementList_Item_Tooltip_C::Bg1' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_AchievementList_Item_Tooltip_C, Txt_Tooltip) == 0x000280, "Member 'UMyCharaMenu_AchievementList_Item_Tooltip_C::Txt_Tooltip' has a wrong offset!");

}

