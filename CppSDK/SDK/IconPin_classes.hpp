#pragma once

 

// Package: IconPin

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass IconPin.IconPin_C
// 0x0008 (0x02E8 - 0x02E0)
class UIconPin_C final : public USBMapPinIcon
{
public:
	class UImage*                                 Icon;                                              // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void OnSetup();
	void OnSetInside(bool IsInSide);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IconPin_C">();
	}
	static class UIconPin_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIconPin_C>();
	}
};
static_assert(alignof(UIconPin_C) == 0x000008, "Wrong alignment on UIconPin_C");
static_assert(sizeof(UIconPin_C) == 0x0002E8, "Wrong size on UIconPin_C");
static_assert(offsetof(UIconPin_C, Icon) == 0x0002E0, "Member 'UIconPin_C::Icon' has a wrong offset!");

}

