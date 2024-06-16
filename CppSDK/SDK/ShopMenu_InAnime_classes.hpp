#pragma once

 

// Package: ShopMenu_InAnime

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ShopMenu_InAnime.ShopMenu_InAnime_C
// 0x0010 (0x0288 - 0x0278)
class UShopMenu_InAnime_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       NewAnimation;                                      // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ShopMenu_InAnime(int32 EntryPoint);
	void PlayInAnim();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShopMenu_InAnime_C">();
	}
	static class UShopMenu_InAnime_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShopMenu_InAnime_C>();
	}
};
static_assert(alignof(UShopMenu_InAnime_C) == 0x000008, "Wrong alignment on UShopMenu_InAnime_C");
static_assert(sizeof(UShopMenu_InAnime_C) == 0x000288, "Wrong size on UShopMenu_InAnime_C");
static_assert(offsetof(UShopMenu_InAnime_C, UberGraphFrame) == 0x000278, "Member 'UShopMenu_InAnime_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UShopMenu_InAnime_C, NewAnimation) == 0x000280, "Member 'UShopMenu_InAnime_C::NewAnimation' has a wrong offset!");

}

