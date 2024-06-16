#pragma once

 

// Package: MyCharaMenu_AchievementList_Item_Tooltip

#include "Basic.hpp"


namespace SDK::Params
{

// Function MyCharaMenu_AchievementList_Item_Tooltip.MyCharaMenu_AchievementList_Item_Tooltip_C.SetText
// 0x0038 (0x0038 - 0x0000)
struct MyCharaMenu_AchievementList_Item_Tooltip_C_SetText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0018(0x0018)()
	bool                                          CallFunc_NotEqual_TextText_ReturnValue;            // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_AchievementList_Item_Tooltip_C_SetText) == 0x000008, "Wrong alignment on MyCharaMenu_AchievementList_Item_Tooltip_C_SetText");
static_assert(sizeof(MyCharaMenu_AchievementList_Item_Tooltip_C_SetText) == 0x000038, "Wrong size on MyCharaMenu_AchievementList_Item_Tooltip_C_SetText");
static_assert(offsetof(MyCharaMenu_AchievementList_Item_Tooltip_C_SetText, InText) == 0x000000, "Member 'MyCharaMenu_AchievementList_Item_Tooltip_C_SetText::InText' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_Item_Tooltip_C_SetText, CallFunc_GetText_ReturnValue) == 0x000018, "Member 'MyCharaMenu_AchievementList_Item_Tooltip_C_SetText::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_Item_Tooltip_C_SetText, CallFunc_NotEqual_TextText_ReturnValue) == 0x000030, "Member 'MyCharaMenu_AchievementList_Item_Tooltip_C_SetText::CallFunc_NotEqual_TextText_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_AchievementList_Item_Tooltip.MyCharaMenu_AchievementList_Item_Tooltip_C.GetText
// 0x0030 (0x0030 - 0x0000)
struct MyCharaMenu_AchievementList_Item_Tooltip_C_GetText final
{
public:
	class FText                                   OutText;                                           // 0x0000(0x0018)(Parm, OutParm)
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0018(0x0018)()
};
static_assert(alignof(MyCharaMenu_AchievementList_Item_Tooltip_C_GetText) == 0x000008, "Wrong alignment on MyCharaMenu_AchievementList_Item_Tooltip_C_GetText");
static_assert(sizeof(MyCharaMenu_AchievementList_Item_Tooltip_C_GetText) == 0x000030, "Wrong size on MyCharaMenu_AchievementList_Item_Tooltip_C_GetText");
static_assert(offsetof(MyCharaMenu_AchievementList_Item_Tooltip_C_GetText, OutText) == 0x000000, "Member 'MyCharaMenu_AchievementList_Item_Tooltip_C_GetText::OutText' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_Item_Tooltip_C_GetText, CallFunc_GetText_ReturnValue) == 0x000018, "Member 'MyCharaMenu_AchievementList_Item_Tooltip_C_GetText::CallFunc_GetText_ReturnValue' has a wrong offset!");

}

