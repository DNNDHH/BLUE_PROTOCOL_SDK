#pragma once

 

// Package: TokenTooltip

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TokenTooltip.TokenTooltip_C
// 0x0010 (0x0288 - 0x0278)
class UTokenTooltip_C final : public UUserWidget
{
public:
	class UImage*                                 Image_0;                                           // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextLabel;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetText(const class FText& InText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TokenTooltip_C">();
	}
	static class UTokenTooltip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTokenTooltip_C>();
	}
};
static_assert(alignof(UTokenTooltip_C) == 0x000008, "Wrong alignment on UTokenTooltip_C");
static_assert(sizeof(UTokenTooltip_C) == 0x000288, "Wrong size on UTokenTooltip_C");
static_assert(offsetof(UTokenTooltip_C, Image_0) == 0x000278, "Member 'UTokenTooltip_C::Image_0' has a wrong offset!");
static_assert(offsetof(UTokenTooltip_C, TextLabel) == 0x000280, "Member 'UTokenTooltip_C::TextLabel' has a wrong offset!");

}

