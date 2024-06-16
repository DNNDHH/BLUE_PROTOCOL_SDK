#pragma once

 

// Package: ShopMenu_Craft_InAnime

#include "Basic.hpp"


namespace SDK::Params
{

// Function ShopMenu_Craft_InAnime.ShopMenu_Craft_InAnime_C.ExecuteUbergraph_ShopMenu_Craft_InAnime
// 0x0004 (0x0004 - 0x0000)
struct ShopMenu_Craft_InAnime_C_ExecuteUbergraph_ShopMenu_Craft_InAnime final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenu_Craft_InAnime_C_ExecuteUbergraph_ShopMenu_Craft_InAnime) == 0x000004, "Wrong alignment on ShopMenu_Craft_InAnime_C_ExecuteUbergraph_ShopMenu_Craft_InAnime");
static_assert(sizeof(ShopMenu_Craft_InAnime_C_ExecuteUbergraph_ShopMenu_Craft_InAnime) == 0x000004, "Wrong size on ShopMenu_Craft_InAnime_C_ExecuteUbergraph_ShopMenu_Craft_InAnime");
static_assert(offsetof(ShopMenu_Craft_InAnime_C_ExecuteUbergraph_ShopMenu_Craft_InAnime, EntryPoint) == 0x000000, "Member 'ShopMenu_Craft_InAnime_C_ExecuteUbergraph_ShopMenu_Craft_InAnime::EntryPoint' has a wrong offset!");

// Function ShopMenu_Craft_InAnime.ShopMenu_Craft_InAnime_C.PlayInAnim
// 0x0008 (0x0008 - 0x0000)
struct ShopMenu_Craft_InAnime_C_PlayInAnim final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenu_Craft_InAnime_C_PlayInAnim) == 0x000008, "Wrong alignment on ShopMenu_Craft_InAnime_C_PlayInAnim");
static_assert(sizeof(ShopMenu_Craft_InAnime_C_PlayInAnim) == 0x000008, "Wrong size on ShopMenu_Craft_InAnime_C_PlayInAnim");
static_assert(offsetof(ShopMenu_Craft_InAnime_C_PlayInAnim, CallFunc_PlayAnimationForward_ReturnValue) == 0x000000, "Member 'ShopMenu_Craft_InAnime_C_PlayInAnim::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

}

