#pragma once

 

// Package: MyCharaMenu_EquippedCostumeInfoItem

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MyCharaMenu_EquippedCostumeInfoItem.MyCharaMenu_EquippedCostumeInfoItem_C
// 0x0008 (0x0280 - 0x0278)
class UMyCharaMenu_EquippedCostumeInfoItem_C final : public UUserWidget
{
public:
	class UTextBlock*                             TxtTitle;                                          // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetText(const class FText& InText);
	void SetIsGrayOut(bool InIsGrayOut);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MyCharaMenu_EquippedCostumeInfoItem_C">();
	}
	static class UMyCharaMenu_EquippedCostumeInfoItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMyCharaMenu_EquippedCostumeInfoItem_C>();
	}
};
static_assert(alignof(UMyCharaMenu_EquippedCostumeInfoItem_C) == 0x000008, "Wrong alignment on UMyCharaMenu_EquippedCostumeInfoItem_C");
static_assert(sizeof(UMyCharaMenu_EquippedCostumeInfoItem_C) == 0x000280, "Wrong size on UMyCharaMenu_EquippedCostumeInfoItem_C");
static_assert(offsetof(UMyCharaMenu_EquippedCostumeInfoItem_C, TxtTitle) == 0x000278, "Member 'UMyCharaMenu_EquippedCostumeInfoItem_C::TxtTitle' has a wrong offset!");

}

