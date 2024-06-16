#pragma once

 

// Package: ShopMenu_InAnime

#include "Basic.hpp"


namespace SDK::Params
{

// Function ShopMenu_InAnime.ShopMenu_InAnime_C.ExecuteUbergraph_ShopMenu_InAnime
// 0x0010 (0x0010 - 0x0000)
struct ShopMenu_InAnime_C_ExecuteUbergraph_ShopMenu_InAnime final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_791D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenu_InAnime_C_ExecuteUbergraph_ShopMenu_InAnime) == 0x000008, "Wrong alignment on ShopMenu_InAnime_C_ExecuteUbergraph_ShopMenu_InAnime");
static_assert(sizeof(ShopMenu_InAnime_C_ExecuteUbergraph_ShopMenu_InAnime) == 0x000010, "Wrong size on ShopMenu_InAnime_C_ExecuteUbergraph_ShopMenu_InAnime");
static_assert(offsetof(ShopMenu_InAnime_C_ExecuteUbergraph_ShopMenu_InAnime, EntryPoint) == 0x000000, "Member 'ShopMenu_InAnime_C_ExecuteUbergraph_ShopMenu_InAnime::EntryPoint' has a wrong offset!");
static_assert(offsetof(ShopMenu_InAnime_C_ExecuteUbergraph_ShopMenu_InAnime, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'ShopMenu_InAnime_C_ExecuteUbergraph_ShopMenu_InAnime::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

}

