#pragma once

 

// Package: LicenseSTRIXLogoWidget

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LicenseSTRIXLogoWidget.LicenseSTRIXLogoWidget_C
// 0x0008 (0x0280 - 0x0278)
class ULicenseSTRIXLogoWidget_C final : public UUserWidget
{
public:
	class UImage*                                 ImageBNO;                                          // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LicenseSTRIXLogoWidget_C">();
	}
	static class ULicenseSTRIXLogoWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULicenseSTRIXLogoWidget_C>();
	}
};
static_assert(alignof(ULicenseSTRIXLogoWidget_C) == 0x000008, "Wrong alignment on ULicenseSTRIXLogoWidget_C");
static_assert(sizeof(ULicenseSTRIXLogoWidget_C) == 0x000280, "Wrong size on ULicenseSTRIXLogoWidget_C");
static_assert(offsetof(ULicenseSTRIXLogoWidget_C, ImageBNO) == 0x000278, "Member 'ULicenseSTRIXLogoWidget_C::ImageBNO' has a wrong offset!");

}

