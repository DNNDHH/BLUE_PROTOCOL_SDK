#pragma once

 

// Package: MyCharaMenu_EffectDetailsListItem

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MyCharaMenu_EffectDetailsListItem.MyCharaMenu_EffectDetailsListItem_C
// 0x0010 (0x0288 - 0x0278)
class UMyCharaMenu_EffectDetailsListItem_C final : public UUserWidget
{
public:
	class UTextBlock*                             TxtDesc;                                           // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtName;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetEffectNameText(const class FText& InText);
	void SetEffectDescText(const class FText& InText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MyCharaMenu_EffectDetailsListItem_C">();
	}
	static class UMyCharaMenu_EffectDetailsListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMyCharaMenu_EffectDetailsListItem_C>();
	}
};
static_assert(alignof(UMyCharaMenu_EffectDetailsListItem_C) == 0x000008, "Wrong alignment on UMyCharaMenu_EffectDetailsListItem_C");
static_assert(sizeof(UMyCharaMenu_EffectDetailsListItem_C) == 0x000288, "Wrong size on UMyCharaMenu_EffectDetailsListItem_C");
static_assert(offsetof(UMyCharaMenu_EffectDetailsListItem_C, TxtDesc) == 0x000278, "Member 'UMyCharaMenu_EffectDetailsListItem_C::TxtDesc' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_EffectDetailsListItem_C, TxtName) == 0x000280, "Member 'UMyCharaMenu_EffectDetailsListItem_C::TxtName' has a wrong offset!");

}

