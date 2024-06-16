#pragma once

 

// Package: ClassIconL

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ClassIconL.ClassIconL_C
// 0x0010 (0x02A0 - 0x0290)
class UClassIconL_C final : public USBClassIcon
{
public:
	class UImage*                                 Image_Shadow;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bWithoutText;                                      // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bEnableShadow;                                     // 0x0299(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void UpdateShadow();
	void OnUpdateClassIcon();

	class UTexture2D* GetIconTexture() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ClassIconL_C">();
	}
	static class UClassIconL_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClassIconL_C>();
	}
};
static_assert(alignof(UClassIconL_C) == 0x000008, "Wrong alignment on UClassIconL_C");
static_assert(sizeof(UClassIconL_C) == 0x0002A0, "Wrong size on UClassIconL_C");
static_assert(offsetof(UClassIconL_C, Image_Shadow) == 0x000290, "Member 'UClassIconL_C::Image_Shadow' has a wrong offset!");
static_assert(offsetof(UClassIconL_C, bWithoutText) == 0x000298, "Member 'UClassIconL_C::bWithoutText' has a wrong offset!");
static_assert(offsetof(UClassIconL_C, bEnableShadow) == 0x000299, "Member 'UClassIconL_C::bEnableShadow' has a wrong offset!");

}

