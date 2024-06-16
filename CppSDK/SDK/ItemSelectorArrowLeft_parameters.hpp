#pragma once

 

// Package: ItemSelectorArrowLeft

#include "Basic.hpp"


namespace SDK::Params
{

// Function ItemSelectorArrowLeft.ItemSelectorArrowLeft_C.PlayAnim
// 0x0008 (0x0008 - 0x0000)
struct ItemSelectorArrowLeft_C_PlayAnim final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemSelectorArrowLeft_C_PlayAnim) == 0x000008, "Wrong alignment on ItemSelectorArrowLeft_C_PlayAnim");
static_assert(sizeof(ItemSelectorArrowLeft_C_PlayAnim) == 0x000008, "Wrong size on ItemSelectorArrowLeft_C_PlayAnim");
static_assert(offsetof(ItemSelectorArrowLeft_C_PlayAnim, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'ItemSelectorArrowLeft_C_PlayAnim::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

