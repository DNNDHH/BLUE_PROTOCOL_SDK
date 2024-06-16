#pragma once

 

// Package: ShortcutRingIcon_None

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ShortcutRingIcon_None.ShortcutRingIcon_None_C
// 0x0010 (0x0310 - 0x0300)
class UShortcutRingIcon_None_C final : public USBShortcutRingIconNone
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0300(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimPressed;                                       // 0x0308(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ShortcutRingIcon_None(int32 EntryPoint);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void PlayAnimPressed();
	void OnExecuteError();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShortcutRingIcon_None_C">();
	}
	static class UShortcutRingIcon_None_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShortcutRingIcon_None_C>();
	}
};
static_assert(alignof(UShortcutRingIcon_None_C) == 0x000008, "Wrong alignment on UShortcutRingIcon_None_C");
static_assert(sizeof(UShortcutRingIcon_None_C) == 0x000310, "Wrong size on UShortcutRingIcon_None_C");
static_assert(offsetof(UShortcutRingIcon_None_C, UberGraphFrame) == 0x000300, "Member 'UShortcutRingIcon_None_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UShortcutRingIcon_None_C, AnimPressed) == 0x000308, "Member 'UShortcutRingIcon_None_C::AnimPressed' has a wrong offset!");

}

