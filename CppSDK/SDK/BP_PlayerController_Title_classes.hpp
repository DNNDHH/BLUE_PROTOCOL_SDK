#pragma once

 

// Package: BP_PlayerController_Title

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerController_Title.BP_PlayerController_Title_C
// 0x0000 (0x0670 - 0x0670)
class ABP_PlayerController_Title_C final : public ASBPlayerControllerBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerController_Title_C">();
	}
	static class ABP_PlayerController_Title_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PlayerController_Title_C>();
	}
};
static_assert(alignof(ABP_PlayerController_Title_C) == 0x000008, "Wrong alignment on ABP_PlayerController_Title_C");
static_assert(sizeof(ABP_PlayerController_Title_C) == 0x000670, "Wrong size on ABP_PlayerController_Title_C");

}

