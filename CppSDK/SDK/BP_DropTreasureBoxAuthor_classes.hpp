#pragma once

 

// Package: BP_DropTreasureBoxAuthor

#include "Basic.hpp"

#include "BP_TreasureBoxAuthor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DropTreasureBoxAuthor.BP_DropTreasureBoxAuthor_C
// 0x0000 (0x02A0 - 0x02A0)
class ABP_DropTreasureBoxAuthor_C final : public ABP_TreasureBoxAuthor_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DropTreasureBoxAuthor_C">();
	}
	static class ABP_DropTreasureBoxAuthor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DropTreasureBoxAuthor_C>();
	}
};
static_assert(alignof(ABP_DropTreasureBoxAuthor_C) == 0x000008, "Wrong alignment on ABP_DropTreasureBoxAuthor_C");
static_assert(sizeof(ABP_DropTreasureBoxAuthor_C) == 0x0002A0, "Wrong size on ABP_DropTreasureBoxAuthor_C");

}

