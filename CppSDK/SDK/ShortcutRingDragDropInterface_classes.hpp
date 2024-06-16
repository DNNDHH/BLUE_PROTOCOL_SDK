#pragma once

 

// Package: ShortcutRingDragDropInterface

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ShortcutRingDragDropInterface.ShortcutRingDragDropInterface_C
// 0x0000 (0x0028 - 0x0028)
class IShortcutRingDragDropInterface_C final : public IInterface
{
public:
	void GetShortcutItemInfo(struct FShortcutItemInfo* OutShortcutItemInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShortcutRingDragDropInterface_C">();
	}
	static class IShortcutRingDragDropInterface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IShortcutRingDragDropInterface_C>();
	}
};
static_assert(alignof(IShortcutRingDragDropInterface_C) == 0x000008, "Wrong alignment on IShortcutRingDragDropInterface_C");
static_assert(sizeof(IShortcutRingDragDropInterface_C) == 0x000028, "Wrong size on IShortcutRingDragDropInterface_C");

}

