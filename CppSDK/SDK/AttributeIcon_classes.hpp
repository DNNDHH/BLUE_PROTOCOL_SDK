#pragma once

 

// Package: AttributeIcon

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AttributeIcon.AttributeIcon_C
// 0x0020 (0x0298 - 0x0278)
class UAttributeIcon_C final : public UUserWidget
{
public:
	class UImage*                                 IconEmpty;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchIcon;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<ESBAttribute>                          AttributeSortOrderList;                            // 0x0288(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void SetAttribute(ESBAttribute InAttribute);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AttributeIcon_C">();
	}
	static class UAttributeIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAttributeIcon_C>();
	}
};
static_assert(alignof(UAttributeIcon_C) == 0x000008, "Wrong alignment on UAttributeIcon_C");
static_assert(sizeof(UAttributeIcon_C) == 0x000298, "Wrong size on UAttributeIcon_C");
static_assert(offsetof(UAttributeIcon_C, IconEmpty) == 0x000278, "Member 'UAttributeIcon_C::IconEmpty' has a wrong offset!");
static_assert(offsetof(UAttributeIcon_C, SwitchIcon) == 0x000280, "Member 'UAttributeIcon_C::SwitchIcon' has a wrong offset!");
static_assert(offsetof(UAttributeIcon_C, AttributeSortOrderList) == 0x000288, "Member 'UAttributeIcon_C::AttributeSortOrderList' has a wrong offset!");

}

