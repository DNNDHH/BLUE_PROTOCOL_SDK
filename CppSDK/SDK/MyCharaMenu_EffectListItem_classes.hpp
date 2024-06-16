#pragma once

 

// Package: MyCharaMenu_EffectListItem

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MyCharaMenu_EffectListItem.MyCharaMenu_EffectListItem_C
// 0x0008 (0x0280 - 0x0278)
class UMyCharaMenu_EffectListItem_C final : public UUserWidget
{
public:
	class UTextBlock*                             TxtName;                                           // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetNameText(const class FText& InText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MyCharaMenu_EffectListItem_C">();
	}
	static class UMyCharaMenu_EffectListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMyCharaMenu_EffectListItem_C>();
	}
};
static_assert(alignof(UMyCharaMenu_EffectListItem_C) == 0x000008, "Wrong alignment on UMyCharaMenu_EffectListItem_C");
static_assert(sizeof(UMyCharaMenu_EffectListItem_C) == 0x000280, "Wrong size on UMyCharaMenu_EffectListItem_C");
static_assert(offsetof(UMyCharaMenu_EffectListItem_C, TxtName) == 0x000278, "Member 'UMyCharaMenu_EffectListItem_C::TxtName' has a wrong offset!");

}

