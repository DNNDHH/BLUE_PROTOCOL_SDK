#pragma once

 

// Package: BP_TreasureBoxAuthor

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TreasureBoxAuthor.BP_TreasureBoxAuthor_C
// 0x0010 (0x02A0 - 0x0290)
class ABP_TreasureBoxAuthor_C : public ASBTreasureSpot
{
public:
	class UStaticMeshComponent*                   Preview_TreasureBox1;                              // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Preview_TreasureBox;                               // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TreasureBoxAuthor_C">();
	}
	static class ABP_TreasureBoxAuthor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_TreasureBoxAuthor_C>();
	}
};
static_assert(alignof(ABP_TreasureBoxAuthor_C) == 0x000008, "Wrong alignment on ABP_TreasureBoxAuthor_C");
static_assert(sizeof(ABP_TreasureBoxAuthor_C) == 0x0002A0, "Wrong size on ABP_TreasureBoxAuthor_C");
static_assert(offsetof(ABP_TreasureBoxAuthor_C, Preview_TreasureBox1) == 0x000290, "Member 'ABP_TreasureBoxAuthor_C::Preview_TreasureBox1' has a wrong offset!");
static_assert(offsetof(ABP_TreasureBoxAuthor_C, Preview_TreasureBox) == 0x000298, "Member 'ABP_TreasureBoxAuthor_C::Preview_TreasureBox' has a wrong offset!");

}

