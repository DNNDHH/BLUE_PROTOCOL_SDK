#pragma once

 

// Package: ShopMenu_CommonAbility

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ShopMenu_CommonAbility.ShopMenu_CommonAbility_C
// 0x0020 (0x0298 - 0x0278)
class UShopMenu_CommonAbility_C final : public UUserWidget
{
public:
	class UHorizontalBox*                         Hbox_01;                                           // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt1;                                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_Ability;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         HeadingId;                                         // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         HeadingTextStartId;                                // 0x0294(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetPerkText(const class FString& InText);
	void SetPerkTextVisibility(bool InIsVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShopMenu_CommonAbility_C">();
	}
	static class UShopMenu_CommonAbility_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShopMenu_CommonAbility_C>();
	}
};
static_assert(alignof(UShopMenu_CommonAbility_C) == 0x000008, "Wrong alignment on UShopMenu_CommonAbility_C");
static_assert(sizeof(UShopMenu_CommonAbility_C) == 0x000298, "Wrong size on UShopMenu_CommonAbility_C");
static_assert(offsetof(UShopMenu_CommonAbility_C, Hbox_01) == 0x000278, "Member 'UShopMenu_CommonAbility_C::Hbox_01' has a wrong offset!");
static_assert(offsetof(UShopMenu_CommonAbility_C, Txt1) == 0x000280, "Member 'UShopMenu_CommonAbility_C::Txt1' has a wrong offset!");
static_assert(offsetof(UShopMenu_CommonAbility_C, Txt_Ability) == 0x000288, "Member 'UShopMenu_CommonAbility_C::Txt_Ability' has a wrong offset!");
static_assert(offsetof(UShopMenu_CommonAbility_C, HeadingId) == 0x000290, "Member 'UShopMenu_CommonAbility_C::HeadingId' has a wrong offset!");
static_assert(offsetof(UShopMenu_CommonAbility_C, HeadingTextStartId) == 0x000294, "Member 'UShopMenu_CommonAbility_C::HeadingTextStartId' has a wrong offset!");

}

