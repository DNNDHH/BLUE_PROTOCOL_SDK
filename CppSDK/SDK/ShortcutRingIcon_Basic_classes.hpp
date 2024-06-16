#pragma once

 

// Package: ShortcutRingIcon_Basic

#include "Basic.hpp"

#include "UseItemWindowType_structs.hpp"
#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ShortcutRingIcon_Basic.ShortcutRingIcon_Basic_C
// 0x0020 (0x0320 - 0x0300)
class UShortcutRingIcon_Basic_C final : public USBShortcutRingIconBasic
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0300(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimPressed;                                       // 0x0308(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonIcon_C*                          CommonIcon;                                        // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShortcutCoolTime_C*                    ShortcutCoolTime;                                  // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ShortcutRingIcon_Basic(int32 EntryPoint);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void UnbindOnSaveItemStorage();
	void BindOnSaveItemStorage();
	void ItemUseAfter(const int32 InRetCode, const TArray<struct FOwnItemInfo>& InDirtyItems);
	void PlayAnimPressed();
	void OnClearBP();
	void OnSetOwnItem(int32 InItemIndex);
	void OnSetEmotion(const class FString& InEmotionId);
	void OnSetStamp(const class FString& InStampId);
	void OnSetSupply(int32 InItemIndex, int32 InItemAmount);
	void OnExecuteOwnItem(const class FString& InUniqueId, int32 InItemIndex, ESBItemUseStatus InItemUseStatus);
	void OnExecuteSupply(int32 InItemIndex, ESBItemUseStatus InItemUseStatus);
	void OnSetGrayOut(bool InGrayOut);
	void OnSetCoolTime(bool InIsShow);
	void OnSetEnableToolTip(bool InEnable);
	void OnSetVisibleShortcutIcon(bool InVisible);
	void OnExecuteError();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShortcutRingIcon_Basic_C">();
	}
	static class UShortcutRingIcon_Basic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShortcutRingIcon_Basic_C>();
	}
};
static_assert(alignof(UShortcutRingIcon_Basic_C) == 0x000008, "Wrong alignment on UShortcutRingIcon_Basic_C");
static_assert(sizeof(UShortcutRingIcon_Basic_C) == 0x000320, "Wrong size on UShortcutRingIcon_Basic_C");
static_assert(offsetof(UShortcutRingIcon_Basic_C, UberGraphFrame) == 0x000300, "Member 'UShortcutRingIcon_Basic_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UShortcutRingIcon_Basic_C, AnimPressed) == 0x000308, "Member 'UShortcutRingIcon_Basic_C::AnimPressed' has a wrong offset!");
static_assert(offsetof(UShortcutRingIcon_Basic_C, CommonIcon) == 0x000310, "Member 'UShortcutRingIcon_Basic_C::CommonIcon' has a wrong offset!");
static_assert(offsetof(UShortcutRingIcon_Basic_C, ShortcutCoolTime) == 0x000318, "Member 'UShortcutRingIcon_Basic_C::ShortcutCoolTime' has a wrong offset!");

}

