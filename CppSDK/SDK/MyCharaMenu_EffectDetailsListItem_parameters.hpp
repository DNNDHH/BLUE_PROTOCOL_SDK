#pragma once

 

// Package: MyCharaMenu_EffectDetailsListItem

#include "Basic.hpp"


namespace SDK::Params
{

// Function MyCharaMenu_EffectDetailsListItem.MyCharaMenu_EffectDetailsListItem_C.SetEffectNameText
// 0x0018 (0x0018 - 0x0000)
struct MyCharaMenu_EffectDetailsListItem_C_SetEffectNameText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(MyCharaMenu_EffectDetailsListItem_C_SetEffectNameText) == 0x000008, "Wrong alignment on MyCharaMenu_EffectDetailsListItem_C_SetEffectNameText");
static_assert(sizeof(MyCharaMenu_EffectDetailsListItem_C_SetEffectNameText) == 0x000018, "Wrong size on MyCharaMenu_EffectDetailsListItem_C_SetEffectNameText");
static_assert(offsetof(MyCharaMenu_EffectDetailsListItem_C_SetEffectNameText, InText) == 0x000000, "Member 'MyCharaMenu_EffectDetailsListItem_C_SetEffectNameText::InText' has a wrong offset!");

// Function MyCharaMenu_EffectDetailsListItem.MyCharaMenu_EffectDetailsListItem_C.SetEffectDescText
// 0x0018 (0x0018 - 0x0000)
struct MyCharaMenu_EffectDetailsListItem_C_SetEffectDescText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(MyCharaMenu_EffectDetailsListItem_C_SetEffectDescText) == 0x000008, "Wrong alignment on MyCharaMenu_EffectDetailsListItem_C_SetEffectDescText");
static_assert(sizeof(MyCharaMenu_EffectDetailsListItem_C_SetEffectDescText) == 0x000018, "Wrong size on MyCharaMenu_EffectDetailsListItem_C_SetEffectDescText");
static_assert(offsetof(MyCharaMenu_EffectDetailsListItem_C_SetEffectDescText, InText) == 0x000000, "Member 'MyCharaMenu_EffectDetailsListItem_C_SetEffectDescText::InText' has a wrong offset!");

}

