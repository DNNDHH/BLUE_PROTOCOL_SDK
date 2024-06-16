#pragma once

 

// Package: ItemSelectorArrowRight

#include "Basic.hpp"


namespace SDK::Params
{

// Function ItemSelectorArrowRight.ItemSelectorArrowRight_C.PlayAnim
// 0x0008 (0x0008 - 0x0000)
struct ItemSelectorArrowRight_C_PlayAnim final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemSelectorArrowRight_C_PlayAnim) == 0x000008, "Wrong alignment on ItemSelectorArrowRight_C_PlayAnim");
static_assert(sizeof(ItemSelectorArrowRight_C_PlayAnim) == 0x000008, "Wrong size on ItemSelectorArrowRight_C_PlayAnim");
static_assert(offsetof(ItemSelectorArrowRight_C_PlayAnim, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'ItemSelectorArrowRight_C_PlayAnim::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

