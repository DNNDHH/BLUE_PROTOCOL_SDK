#pragma once

 

// Package: IconFacility

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass IconFacility.IconFacility_C
// 0x0008 (0x02F8 - 0x02F0)
class UIconFacility_C final : public USBMapFacilityIcon
{
public:
	class UImage*                                 Icon;                                              // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void OnSetup();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IconFacility_C">();
	}
	static class UIconFacility_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIconFacility_C>();
	}
};
static_assert(alignof(UIconFacility_C) == 0x000008, "Wrong alignment on UIconFacility_C");
static_assert(sizeof(UIconFacility_C) == 0x0002F8, "Wrong size on UIconFacility_C");
static_assert(offsetof(UIconFacility_C, Icon) == 0x0002F0, "Member 'UIconFacility_C::Icon' has a wrong offset!");

}

