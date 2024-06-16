#pragma once

 

// Package: BP_EF_ClassLvup

#include "Basic.hpp"

#include "BP_EF_Set_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EF_ClassLvup.BP_EF_ClassLvup_C
// 0x0000 (0x0498 - 0x0498)
class ABP_EF_ClassLvup_C final : public ABP_EF_Set_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EF_ClassLvup_C">();
	}
	static class ABP_EF_ClassLvup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_EF_ClassLvup_C>();
	}
};
static_assert(alignof(ABP_EF_ClassLvup_C) == 0x000008, "Wrong alignment on ABP_EF_ClassLvup_C");
static_assert(sizeof(ABP_EF_ClassLvup_C) == 0x000498, "Wrong size on ABP_EF_ClassLvup_C");

}

