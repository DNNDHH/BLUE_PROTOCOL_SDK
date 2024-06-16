#pragma once

 

// Package: ShortcutRingIcon_Warp

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ShortcutRingIcon_Warp.ShortcutRingIcon_Warp_C
// 0x0020 (0x0398 - 0x0378)
class UShortcutRingIcon_Warp_C final : public USBShortcutRingIconWarp
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0378(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimPressed;                                       // 0x0380(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0388(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandIcon_Tooltip_C*                 ToolTip;                                           // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ShortcutRingIcon_Warp(int32 EntryPoint);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void PlayAnimPressed();
	class UWidget* GetToolTip();
	void OnSetEnableToolTip(bool InEnable);
	void OnExecuteError();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShortcutRingIcon_Warp_C">();
	}
	static class UShortcutRingIcon_Warp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShortcutRingIcon_Warp_C>();
	}
};
static_assert(alignof(UShortcutRingIcon_Warp_C) == 0x000008, "Wrong alignment on UShortcutRingIcon_Warp_C");
static_assert(sizeof(UShortcutRingIcon_Warp_C) == 0x000398, "Wrong size on UShortcutRingIcon_Warp_C");
static_assert(offsetof(UShortcutRingIcon_Warp_C, UberGraphFrame) == 0x000378, "Member 'UShortcutRingIcon_Warp_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UShortcutRingIcon_Warp_C, AnimPressed) == 0x000380, "Member 'UShortcutRingIcon_Warp_C::AnimPressed' has a wrong offset!");
static_assert(offsetof(UShortcutRingIcon_Warp_C, CanvasPanel_0) == 0x000388, "Member 'UShortcutRingIcon_Warp_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UShortcutRingIcon_Warp_C, ToolTip) == 0x000390, "Member 'UShortcutRingIcon_Warp_C::ToolTip' has a wrong offset!");

}

