#pragma once

 

// Package: ClassIconXL

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ClassIconXL.ClassIconXL_C
// 0x0008 (0x0298 - 0x0290)
class UClassIconXL_C final : public USBClassIcon
{
public:
	bool                                          bWithoutText;                                      // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	class UTexture2D* GetIconTexture() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ClassIconXL_C">();
	}
	static class UClassIconXL_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClassIconXL_C>();
	}
};
static_assert(alignof(UClassIconXL_C) == 0x000008, "Wrong alignment on UClassIconXL_C");
static_assert(sizeof(UClassIconXL_C) == 0x000298, "Wrong size on UClassIconXL_C");
static_assert(offsetof(UClassIconXL_C, bWithoutText) == 0x000290, "Member 'UClassIconXL_C::bWithoutText' has a wrong offset!");

}

