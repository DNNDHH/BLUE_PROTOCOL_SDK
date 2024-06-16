#pragma once

 

// Package: IconLuminousImage

#include "Basic.hpp"


namespace SDK::Params
{

// Function IconLuminousImage.IconLuminousImage_C.PlayAnimIn
// 0x0008 (0x0008 - 0x0000)
struct IconLuminousImage_C_PlayAnimIn final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IconLuminousImage_C_PlayAnimIn) == 0x000008, "Wrong alignment on IconLuminousImage_C_PlayAnimIn");
static_assert(sizeof(IconLuminousImage_C_PlayAnimIn) == 0x000008, "Wrong size on IconLuminousImage_C_PlayAnimIn");
static_assert(offsetof(IconLuminousImage_C_PlayAnimIn, CallFunc_PlayAnimationForward_ReturnValue) == 0x000000, "Member 'IconLuminousImage_C_PlayAnimIn::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

}

