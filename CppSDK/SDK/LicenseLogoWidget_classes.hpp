#pragma once

 

// Package: LicenseLogoWidget

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LicenseLogoWidget.LicenseLogoWidget_C
// 0x0008 (0x0280 - 0x0278)
class ULicenseLogoWidget_C final : public UUserWidget
{
public:
	class UImage*                                 ImageBNO;                                          // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LicenseLogoWidget_C">();
	}
	static class ULicenseLogoWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULicenseLogoWidget_C>();
	}
};
static_assert(alignof(ULicenseLogoWidget_C) == 0x000008, "Wrong alignment on ULicenseLogoWidget_C");
static_assert(sizeof(ULicenseLogoWidget_C) == 0x000280, "Wrong size on ULicenseLogoWidget_C");
static_assert(offsetof(ULicenseLogoWidget_C, ImageBNO) == 0x000278, "Member 'ULicenseLogoWidget_C::ImageBNO' has a wrong offset!");

}

