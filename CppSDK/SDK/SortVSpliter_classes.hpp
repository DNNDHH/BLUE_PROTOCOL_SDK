#pragma once

 

// Package: SortVSpliter

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SortVSpliter.SortVSpliter_C
// 0x0008 (0x0280 - 0x0278)
class USortVSpliter_C final : public UUserWidget
{
public:
	class UImage*                                 Image_50;                                          // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SortVSpliter_C">();
	}
	static class USortVSpliter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USortVSpliter_C>();
	}
};
static_assert(alignof(USortVSpliter_C) == 0x000008, "Wrong alignment on USortVSpliter_C");
static_assert(sizeof(USortVSpliter_C) == 0x000280, "Wrong size on USortVSpliter_C");
static_assert(offsetof(USortVSpliter_C, Image_50) == 0x000278, "Member 'USortVSpliter_C::Image_50' has a wrong offset!");

}

