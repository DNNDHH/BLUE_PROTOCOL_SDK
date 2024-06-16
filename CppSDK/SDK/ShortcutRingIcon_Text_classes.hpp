#pragma once

 

// Package: ShortcutRingIcon_Text

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ShortcutRingIcon_Text.ShortcutRingIcon_Text_C
// 0x0010 (0x0320 - 0x0310)
class UShortcutRingIcon_Text_C final : public USBShortcutRingIconText
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0310(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimPressed;                                       // 0x0318(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ShortcutRingIcon_Text(int32 EntryPoint);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void PlayAnimPressed();
	void OnExecuteError();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShortcutRingIcon_Text_C">();
	}
	static class UShortcutRingIcon_Text_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShortcutRingIcon_Text_C>();
	}
};
static_assert(alignof(UShortcutRingIcon_Text_C) == 0x000008, "Wrong alignment on UShortcutRingIcon_Text_C");
static_assert(sizeof(UShortcutRingIcon_Text_C) == 0x000320, "Wrong size on UShortcutRingIcon_Text_C");
static_assert(offsetof(UShortcutRingIcon_Text_C, UberGraphFrame) == 0x000310, "Member 'UShortcutRingIcon_Text_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UShortcutRingIcon_Text_C, AnimPressed) == 0x000318, "Member 'UShortcutRingIcon_Text_C::AnimPressed' has a wrong offset!");

}

