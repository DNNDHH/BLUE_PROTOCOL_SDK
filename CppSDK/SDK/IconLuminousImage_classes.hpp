#pragma once

 

// Package: IconLuminousImage

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass IconLuminousImage.IconLuminousImage_C
// 0x0010 (0x0288 - 0x0278)
class UIconLuminousImage_C final : public UUserWidget
{
public:
	class UWidgetAnimation*                       AnimIn;                                            // 0x0278(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_Luminous;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void PlayAnimIn();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IconLuminousImage_C">();
	}
	static class UIconLuminousImage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIconLuminousImage_C>();
	}
};
static_assert(alignof(UIconLuminousImage_C) == 0x000008, "Wrong alignment on UIconLuminousImage_C");
static_assert(sizeof(UIconLuminousImage_C) == 0x000288, "Wrong size on UIconLuminousImage_C");
static_assert(offsetof(UIconLuminousImage_C, AnimIn) == 0x000278, "Member 'UIconLuminousImage_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UIconLuminousImage_C, Image_Luminous) == 0x000280, "Member 'UIconLuminousImage_C::Image_Luminous' has a wrong offset!");

}

