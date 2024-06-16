#pragma once

 

// Package: WeaponSynthePart_MoneyWindow

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WeaponSynthePart_MoneyWindow.WeaponSynthePart_MoneyWindow_C
// 0x0010 (0x0288 - 0x0278)
class UWeaponSynthePart_MoneyWindow_C final : public UUserWidget
{
public:
	class USBRuntimeTextBlock*                    Txt_Money;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bIsChangeColor;                                    // 0x0280(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void SetMoney(int32 InValue);
	void SetColorMode(bool bIsLackChangeColor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeaponSynthePart_MoneyWindow_C">();
	}
	static class UWeaponSynthePart_MoneyWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponSynthePart_MoneyWindow_C>();
	}
};
static_assert(alignof(UWeaponSynthePart_MoneyWindow_C) == 0x000008, "Wrong alignment on UWeaponSynthePart_MoneyWindow_C");
static_assert(sizeof(UWeaponSynthePart_MoneyWindow_C) == 0x000288, "Wrong size on UWeaponSynthePart_MoneyWindow_C");
static_assert(offsetof(UWeaponSynthePart_MoneyWindow_C, Txt_Money) == 0x000278, "Member 'UWeaponSynthePart_MoneyWindow_C::Txt_Money' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_MoneyWindow_C, bIsChangeColor) == 0x000280, "Member 'UWeaponSynthePart_MoneyWindow_C::bIsChangeColor' has a wrong offset!");

}

