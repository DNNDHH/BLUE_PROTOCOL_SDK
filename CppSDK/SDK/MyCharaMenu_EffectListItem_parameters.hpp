#pragma once

 

// Package: MyCharaMenu_EffectListItem

#include "Basic.hpp"


namespace SDK::Params
{

// Function MyCharaMenu_EffectListItem.MyCharaMenu_EffectListItem_C.SetNameText
// 0x0018 (0x0018 - 0x0000)
struct MyCharaMenu_EffectListItem_C_SetNameText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(MyCharaMenu_EffectListItem_C_SetNameText) == 0x000008, "Wrong alignment on MyCharaMenu_EffectListItem_C_SetNameText");
static_assert(sizeof(MyCharaMenu_EffectListItem_C_SetNameText) == 0x000018, "Wrong size on MyCharaMenu_EffectListItem_C_SetNameText");
static_assert(offsetof(MyCharaMenu_EffectListItem_C_SetNameText, InText) == 0x000000, "Member 'MyCharaMenu_EffectListItem_C_SetNameText::InText' has a wrong offset!");

}

