#pragma once

 

// Package: Attribute

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Attribute.Attribute_C
// 0x0010 (0x0288 - 0x0278)
class UAttribute_C final : public UUserWidget
{
public:
	class USBRuntimeTextBlock*                    AttributeHeadingTxt;                               // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAttributeIcon_C*                       AttributeIcon;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetAttribute(int32 ImagineId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Attribute_C">();
	}
	static class UAttribute_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAttribute_C>();
	}
};
static_assert(alignof(UAttribute_C) == 0x000008, "Wrong alignment on UAttribute_C");
static_assert(sizeof(UAttribute_C) == 0x000288, "Wrong size on UAttribute_C");
static_assert(offsetof(UAttribute_C, AttributeHeadingTxt) == 0x000278, "Member 'UAttribute_C::AttributeHeadingTxt' has a wrong offset!");
static_assert(offsetof(UAttribute_C, AttributeIcon) == 0x000280, "Member 'UAttribute_C::AttributeIcon' has a wrong offset!");

}

