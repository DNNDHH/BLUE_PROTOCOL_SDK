#pragma once

 

// Package: ResultMenuBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "InputCore_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ResultMenuBase.ResultMenuBase_C
// 0x0030 (0x0328 - 0x02F8)
class UResultMenuBase_C final : public USBResultBaseWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          IsEndAnimInPanel_;                                 // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsEndAnimInFooter_;                                // 0x0301(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsKeyDownShortcutRing_;                            // 0x0302(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsKeyReleaseShortcutRing_;                         // 0x0303(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsKeyDownGamepadFaceButtonRight_;                  // 0x0304(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9CFF[0x3];                                     // 0x0305(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   GamepadFaceButtonRight_;                           // 0x0308(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          IsEndPendingReward_;                               // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ResultMenuBase(int32 EntryPoint);
	void EventEndPendingReward();
	void EventCloseEnd();
	void EventEndAnimOutResultFooter();
	void EventEndAnimOutDialogLetter();
	void EventEndCloseResultPanel();
	void EventClose();
	void EventEndAnimOutDialogAbility();
	void EventOpenEnd();
	void EventEndAnimInResultFooter();
	void EventEndOpenResultPanel();
	void EventOpen();
	void EventTelopWait();
	void EventTelopStart();
	void UnbindShortcutRing(class USBShortcutRingWidget* InShortcutRing);
	void BindShortcutRing(class USBShortcutRingWidget* InShortcutRing);
	void CustomEvent_0();
	void OnEventKeyUp(const struct FKeyEvent& Event);
	void OnEventKeyDown(const struct FKeyEvent& Event);
	void EnableControl();
	void DisableControl();
	void OnInitializeKeyGuide();
	void OpenDialogAbility();
	void IsKeyDownShortcutRing(bool* Result);
	void SetVisibleScreenOver(bool Param_IsVisible);
	void SetActiveScreenOver(int32 InIndex);
	void OnInitialize();
	void OnTerminate();
	void OnEnd();
	void ExecuteShortcutRing();
	void ExecuteMenu();
	void SetVisibleMouseCursor(bool Param_IsVisible);
	void OpenDialogLetter();

	void IsKeyDownMenu(bool* Result) const;
	const struct FKey GetKeyMenu() const;
	void GetScreenOverWidget(class UWidgetSwitcher** OutWidget) const;
	void GetDialogLetter(class UResultDialog_Letter_C** OutDialog) const;
	void GetDialogAbility(class UDialog_TacticalAbilityLearning_C** OutDialog) const;
	void IsKeyDownAll(TArray<struct FKey>& InKeyList, bool* Result) const;
	void IsSimpleMode(bool* Result) const;
	void IsKeyDownJust(const struct FKey& Key, bool* Result) const;
	class USBShortcutRingWidget* GetResultShortcutRing() const;
	class USBResultKeyGuide* GetResultKeyGuide() const;
	class USBResultPanelBaseWidget* GetResultWidget() const;
	class USBResultFooter* GetFooter() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ResultMenuBase_C">();
	}
	static class UResultMenuBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UResultMenuBase_C>();
	}
};
static_assert(alignof(UResultMenuBase_C) == 0x000008, "Wrong alignment on UResultMenuBase_C");
static_assert(sizeof(UResultMenuBase_C) == 0x000328, "Wrong size on UResultMenuBase_C");
static_assert(offsetof(UResultMenuBase_C, UberGraphFrame) == 0x0002F8, "Member 'UResultMenuBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UResultMenuBase_C, IsEndAnimInPanel_) == 0x000300, "Member 'UResultMenuBase_C::IsEndAnimInPanel_' has a wrong offset!");
static_assert(offsetof(UResultMenuBase_C, IsEndAnimInFooter_) == 0x000301, "Member 'UResultMenuBase_C::IsEndAnimInFooter_' has a wrong offset!");
static_assert(offsetof(UResultMenuBase_C, IsKeyDownShortcutRing_) == 0x000302, "Member 'UResultMenuBase_C::IsKeyDownShortcutRing_' has a wrong offset!");
static_assert(offsetof(UResultMenuBase_C, IsKeyReleaseShortcutRing_) == 0x000303, "Member 'UResultMenuBase_C::IsKeyReleaseShortcutRing_' has a wrong offset!");
static_assert(offsetof(UResultMenuBase_C, IsKeyDownGamepadFaceButtonRight_) == 0x000304, "Member 'UResultMenuBase_C::IsKeyDownGamepadFaceButtonRight_' has a wrong offset!");
static_assert(offsetof(UResultMenuBase_C, GamepadFaceButtonRight_) == 0x000308, "Member 'UResultMenuBase_C::GamepadFaceButtonRight_' has a wrong offset!");
static_assert(offsetof(UResultMenuBase_C, IsEndPendingReward_) == 0x000320, "Member 'UResultMenuBase_C::IsEndPendingReward_' has a wrong offset!");

}

