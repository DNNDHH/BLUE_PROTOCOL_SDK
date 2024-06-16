#pragma once

 

// Package: MapTraverseList

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MapTraverseList.MapTraverseList_C
// 0x0008 (0x0280 - 0x0278)
class UMapTraverseList_C final : public UUserWidget
{
public:
	class UScrollBox*                             ScrollBox;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Setup();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MapTraverseList_C">();
	}
	static class UMapTraverseList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMapTraverseList_C>();
	}
};
static_assert(alignof(UMapTraverseList_C) == 0x000008, "Wrong alignment on UMapTraverseList_C");
static_assert(sizeof(UMapTraverseList_C) == 0x000280, "Wrong size on UMapTraverseList_C");
static_assert(offsetof(UMapTraverseList_C, ScrollBox) == 0x000278, "Member 'UMapTraverseList_C::ScrollBox' has a wrong offset!");

}

