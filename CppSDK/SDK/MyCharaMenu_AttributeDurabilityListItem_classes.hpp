#pragma once

 

// Package: MyCharaMenu_AttributeDurabilityListItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MyCharaMenu_AttributeDurabilityListItem.MyCharaMenu_AttributeDurabilityListItem_C
// 0x0020 (0x0298 - 0x0278)
class UMyCharaMenu_AttributeDurabilityListItem_C final : public UUserWidget
{
public:
	class UImage*                                 ImgAttributeIcon;                                  // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtAttributeDurabilityValue;                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtAttributeName;                                  // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ESBAttribute                                  Attribute;                                         // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetAttribute(ESBAttribute InAttribute);
	void SetAttributeIconTexture(TSoftObjectPtr<class UTexture2D> InTexture);
	void SetAttributeNameByTextId(int32 InTextID);
	void SetAttributeDurabilityValue(int32 InValue);
	void GetAttribute(ESBAttribute* OutAttribute);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MyCharaMenu_AttributeDurabilityListItem_C">();
	}
	static class UMyCharaMenu_AttributeDurabilityListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMyCharaMenu_AttributeDurabilityListItem_C>();
	}
};
static_assert(alignof(UMyCharaMenu_AttributeDurabilityListItem_C) == 0x000008, "Wrong alignment on UMyCharaMenu_AttributeDurabilityListItem_C");
static_assert(sizeof(UMyCharaMenu_AttributeDurabilityListItem_C) == 0x000298, "Wrong size on UMyCharaMenu_AttributeDurabilityListItem_C");
static_assert(offsetof(UMyCharaMenu_AttributeDurabilityListItem_C, ImgAttributeIcon) == 0x000278, "Member 'UMyCharaMenu_AttributeDurabilityListItem_C::ImgAttributeIcon' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_AttributeDurabilityListItem_C, TxtAttributeDurabilityValue) == 0x000280, "Member 'UMyCharaMenu_AttributeDurabilityListItem_C::TxtAttributeDurabilityValue' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_AttributeDurabilityListItem_C, TxtAttributeName) == 0x000288, "Member 'UMyCharaMenu_AttributeDurabilityListItem_C::TxtAttributeName' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_AttributeDurabilityListItem_C, Attribute) == 0x000290, "Member 'UMyCharaMenu_AttributeDurabilityListItem_C::Attribute' has a wrong offset!");

}

