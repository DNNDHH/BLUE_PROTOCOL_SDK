#pragma once

 

// Package: ProbabilityDisplay_ItemCraftTopItem

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ProbabilityDisplay_ItemCraftTopItem.ProbabilityDisplay_ItemCraftTopItem_C
// 0x0010 (0x0288 - 0x0278)
class UProbabilityDisplay_ItemCraftTopItem_C final : public UUserWidget
{
public:
	class UImage*                                 Base1;                                             // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base2;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ProbabilityDisplay_ItemCraftTopItem_C">();
	}
	static class UProbabilityDisplay_ItemCraftTopItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProbabilityDisplay_ItemCraftTopItem_C>();
	}
};
static_assert(alignof(UProbabilityDisplay_ItemCraftTopItem_C) == 0x000008, "Wrong alignment on UProbabilityDisplay_ItemCraftTopItem_C");
static_assert(sizeof(UProbabilityDisplay_ItemCraftTopItem_C) == 0x000288, "Wrong size on UProbabilityDisplay_ItemCraftTopItem_C");
static_assert(offsetof(UProbabilityDisplay_ItemCraftTopItem_C, Base1) == 0x000278, "Member 'UProbabilityDisplay_ItemCraftTopItem_C::Base1' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_ItemCraftTopItem_C, Base2) == 0x000280, "Member 'UProbabilityDisplay_ItemCraftTopItem_C::Base2' has a wrong offset!");

}

