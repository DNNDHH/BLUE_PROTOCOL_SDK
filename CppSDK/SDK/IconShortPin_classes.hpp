#pragma once

 

// Package: IconShortPin

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass IconShortPin.IconShortPin_C
// 0x0008 (0x02F8 - 0x02F0)
class UIconShortPin_C final : public USBMapShortPinIcon
{
public:
	class UWidgetSwitcher*                        Root;                                              // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void OnSetInside(bool IsInSide);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IconShortPin_C">();
	}
	static class UIconShortPin_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIconShortPin_C>();
	}
};
static_assert(alignof(UIconShortPin_C) == 0x000008, "Wrong alignment on UIconShortPin_C");
static_assert(sizeof(UIconShortPin_C) == 0x0002F8, "Wrong size on UIconShortPin_C");
static_assert(offsetof(UIconShortPin_C, Root) == 0x0002F0, "Member 'UIconShortPin_C::Root' has a wrong offset!");

}

