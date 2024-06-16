#pragma once

 

// Package: ComboHUD

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ComboHUD.ComboHUD_C
// 0x0028 (0x02A0 - 0x0278)
class UComboHUD_C final : public UUserWidget
{
public:
	class UWidgetAnimation*                       ComboAnime;                                        // 0x0278(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             ComboLabel;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ComboText;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SubscriptLabel;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bVisible;                                          // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ShowCombo(int32 Combo, ESBClassType ClassType);
	void SetColor(const struct FSlateColor& InColor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ComboHUD_C">();
	}
	static class UComboHUD_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UComboHUD_C>();
	}
};
static_assert(alignof(UComboHUD_C) == 0x000008, "Wrong alignment on UComboHUD_C");
static_assert(sizeof(UComboHUD_C) == 0x0002A0, "Wrong size on UComboHUD_C");
static_assert(offsetof(UComboHUD_C, ComboAnime) == 0x000278, "Member 'UComboHUD_C::ComboAnime' has a wrong offset!");
static_assert(offsetof(UComboHUD_C, ComboLabel) == 0x000280, "Member 'UComboHUD_C::ComboLabel' has a wrong offset!");
static_assert(offsetof(UComboHUD_C, ComboText) == 0x000288, "Member 'UComboHUD_C::ComboText' has a wrong offset!");
static_assert(offsetof(UComboHUD_C, SubscriptLabel) == 0x000290, "Member 'UComboHUD_C::SubscriptLabel' has a wrong offset!");
static_assert(offsetof(UComboHUD_C, bVisible) == 0x000298, "Member 'UComboHUD_C::bVisible' has a wrong offset!");

}

