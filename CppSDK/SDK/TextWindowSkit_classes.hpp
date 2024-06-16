#pragma once

 

// Package: TextWindowSkit

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TextWindowSkit.TextWindowSkit_C
// 0x00A0 (0x0338 - 0x0298)
class UTextWindowSkit_C final : public USBTextWindow
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimIn_WithoutBg;                                  // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimOut_WithoutBg;                                 // 0x02A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimTextIn;                                        // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimWaitUserInputPressed;                          // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimWaitUserInputLoop;                             // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Bg1;                                               // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bg2;                                               // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgWaitUserInput;                                  // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgWaitUserInputPressed;                           // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LabelSpeaker;                                      // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line1;                                             // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line2;                                             // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line3;                                             // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       TextBox;                                           // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           TextWindowGrp;                                     // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          AutoCloseFlag;                                     // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bActive;                                           // 0x0331(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bSetText;                                          // 0x0332(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bShowAnimationEnd;                                 // 0x0333(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bWaitUserInputMarkEnable;                          // 0x0334(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bPressedAnimStarted;                               // 0x0335(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsHideWithoutBG;                                  // 0x0336(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_TextWindowSkit(int32 EntryPoint);
	void SetBGVisible(bool bVisible);
	void HideWithoutBG();
	void SetNextMarkVisibility(const bool bInVisibility);
	void SetSpeaker(const class FName& InProfileId);
	void Show();
	void Hide();
	void SetText(const class FText& InText);
	void Construct();
	void CustomEvent_3();
	void OnInputKey();
	void CustomEvent_2();
	void CustomEvent_1();
	void CustomEvent_0();
	void Destruct();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	bool IsShow();
	void SetBGOpacity(float Opacity);
	bool GetBGVisible();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TextWindowSkit_C">();
	}
	static class UTextWindowSkit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTextWindowSkit_C>();
	}
};
static_assert(alignof(UTextWindowSkit_C) == 0x000008, "Wrong alignment on UTextWindowSkit_C");
static_assert(sizeof(UTextWindowSkit_C) == 0x000338, "Wrong size on UTextWindowSkit_C");
static_assert(offsetof(UTextWindowSkit_C, UberGraphFrame) == 0x000298, "Member 'UTextWindowSkit_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTextWindowSkit_C, AnimIn_WithoutBg) == 0x0002A0, "Member 'UTextWindowSkit_C::AnimIn_WithoutBg' has a wrong offset!");
static_assert(offsetof(UTextWindowSkit_C, AnimOut_WithoutBg) == 0x0002A8, "Member 'UTextWindowSkit_C::AnimOut_WithoutBg' has a wrong offset!");
static_assert(offsetof(UTextWindowSkit_C, AnimTextIn) == 0x0002B0, "Member 'UTextWindowSkit_C::AnimTextIn' has a wrong offset!");
static_assert(offsetof(UTextWindowSkit_C, AnimWaitUserInputPressed) == 0x0002B8, "Member 'UTextWindowSkit_C::AnimWaitUserInputPressed' has a wrong offset!");
static_assert(offsetof(UTextWindowSkit_C, AnimWaitUserInputLoop) == 0x0002C0, "Member 'UTextWindowSkit_C::AnimWaitUserInputLoop' has a wrong offset!");
static_assert(offsetof(UTextWindowSkit_C, AnimOut) == 0x0002C8, "Member 'UTextWindowSkit_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UTextWindowSkit_C, AnimIn) == 0x0002D0, "Member 'UTextWindowSkit_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UTextWindowSkit_C, Bg1) == 0x0002D8, "Member 'UTextWindowSkit_C::Bg1' has a wrong offset!");
static_assert(offsetof(UTextWindowSkit_C, Bg2) == 0x0002E0, "Member 'UTextWindowSkit_C::Bg2' has a wrong offset!");
static_assert(offsetof(UTextWindowSkit_C, ImgWaitUserInput) == 0x0002E8, "Member 'UTextWindowSkit_C::ImgWaitUserInput' has a wrong offset!");
static_assert(offsetof(UTextWindowSkit_C, ImgWaitUserInputPressed) == 0x0002F0, "Member 'UTextWindowSkit_C::ImgWaitUserInputPressed' has a wrong offset!");
static_assert(offsetof(UTextWindowSkit_C, LabelSpeaker) == 0x0002F8, "Member 'UTextWindowSkit_C::LabelSpeaker' has a wrong offset!");
static_assert(offsetof(UTextWindowSkit_C, Line1) == 0x000300, "Member 'UTextWindowSkit_C::Line1' has a wrong offset!");
static_assert(offsetof(UTextWindowSkit_C, Line2) == 0x000308, "Member 'UTextWindowSkit_C::Line2' has a wrong offset!");
static_assert(offsetof(UTextWindowSkit_C, Line3) == 0x000310, "Member 'UTextWindowSkit_C::Line3' has a wrong offset!");
static_assert(offsetof(UTextWindowSkit_C, TextBox) == 0x000318, "Member 'UTextWindowSkit_C::TextBox' has a wrong offset!");
static_assert(offsetof(UTextWindowSkit_C, TextWindowGrp) == 0x000320, "Member 'UTextWindowSkit_C::TextWindowGrp' has a wrong offset!");
static_assert(offsetof(UTextWindowSkit_C, UIBlocker) == 0x000328, "Member 'UTextWindowSkit_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UTextWindowSkit_C, AutoCloseFlag) == 0x000330, "Member 'UTextWindowSkit_C::AutoCloseFlag' has a wrong offset!");
static_assert(offsetof(UTextWindowSkit_C, bActive) == 0x000331, "Member 'UTextWindowSkit_C::bActive' has a wrong offset!");
static_assert(offsetof(UTextWindowSkit_C, bSetText) == 0x000332, "Member 'UTextWindowSkit_C::bSetText' has a wrong offset!");
static_assert(offsetof(UTextWindowSkit_C, bShowAnimationEnd) == 0x000333, "Member 'UTextWindowSkit_C::bShowAnimationEnd' has a wrong offset!");
static_assert(offsetof(UTextWindowSkit_C, bWaitUserInputMarkEnable) == 0x000334, "Member 'UTextWindowSkit_C::bWaitUserInputMarkEnable' has a wrong offset!");
static_assert(offsetof(UTextWindowSkit_C, bPressedAnimStarted) == 0x000335, "Member 'UTextWindowSkit_C::bPressedAnimStarted' has a wrong offset!");
static_assert(offsetof(UTextWindowSkit_C, bIsHideWithoutBG) == 0x000336, "Member 'UTextWindowSkit_C::bIsHideWithoutBG' has a wrong offset!");

}

