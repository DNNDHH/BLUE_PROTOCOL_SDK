#pragma once

 

// Package: ShortcutRing

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ShortcutRing.ShortcutRing_C
// 0x0010 (0x0338 - 0x0328)
class UShortcutRing_C final : public USBShortcutRingWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0328(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimInOut;                                         // 0x0330(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ShortcutRing(int32 EntryPoint);
	void OnDeleteEditWindow();
	void OnCreateEditWindow();
	void BndEvt__ShortcutRingBase_K2Node_ComponentBoundEvent_0_OnInOutFinished__DelegateSignature(float AnimationCurrentTime);
	void CustomEvent_1();
	void CustomEvent_0(class UObject* Sender, class UObject* Param);
	void UnbindClosedMenu();
	void BindClosedMenu();
	void OnCloseShortcutRingEdit();
	void UnbindEditWindow(class USBShortcutRingEdit* InShortcutRingEdit);
	void BindEditWindow(class USBShortcutRingEdit* InShortcutRingEdit);
	void UnbindUIVisibleSettingChange();
	void BindUIVisibleSettingChange();
	void UIVisibleSettingChangeDelegate_Event_0(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
	void UnbindUpdateItem();
	void BindUpdateItem();
	void OnUseSupply(const bool Result);
	void OnUpdateItems();
	void CustomEvent_16();
	void StopListeningForInputActionF12();
	void ListenForInputActionF12();
	void CustomEvent_13();
	void StopListeningForInputActionF11();
	void ListenForInputActionF11();
	void CustomEvent_10();
	void StopListeningForInputActionF10();
	void ListenForInputActionF10();
	void CustomEvent_7();
	void StopListeningForInputActionF9();
	void ListenForInputActionF9();
	void CustomEvent_6();
	void StopListeningForInputActionF8();
	void ListenForInputActionF8();
	void CustomEvent_5();
	void StopListeningForInputActionF7();
	void ListenForInputActionF7();
	void CustomEvent_4();
	void StopListeningForInputActionF6();
	void ListenForInputActionF6();
	void CustomEvent_2();
	void StopListeningForInputActionF5();
	void ListenForInputActionF5();
	void OnLoaded_E029D6484C901949947AB496CF5240E6(TSubclassOf<class UObject> Loaded);
	void OnBind();
	void OnUnbind();
	void PlayAnimIn();
	void PlayAnimOut();
	void PlaySESelectIcon();
	void PlaySEExecute();
	void RegistShortcutKey();
	void UnregistShortcutKey();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShortcutRing_C">();
	}
	static class UShortcutRing_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShortcutRing_C>();
	}
};
static_assert(alignof(UShortcutRing_C) == 0x000008, "Wrong alignment on UShortcutRing_C");
static_assert(sizeof(UShortcutRing_C) == 0x000338, "Wrong size on UShortcutRing_C");
static_assert(offsetof(UShortcutRing_C, UberGraphFrame) == 0x000328, "Member 'UShortcutRing_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UShortcutRing_C, AnimInOut) == 0x000330, "Member 'UShortcutRing_C::AnimInOut' has a wrong offset!");

}

