#pragma once

 

// Package: OpenCommandMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass OpenCommandMenu.OpenCommandMenu_C
// 0x0038 (0x02B0 - 0x0278)
class UOpenCommandMenu_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimBlink;                                         // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextKey;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bVisible;                                          // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bUIVisibleSetting;                                 // 0x02A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bPhotoMode;                                        // 0x02AA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_OpenCommandMenu(int32 EntryPoint);
	void OnPhotoMode_Leave(class UObject* Sender, class UObject* Param);
	void OnPhotoMode_Enter(class UObject* Sender, class UObject* Param);
	void UIVisibleSettingChangeDelegate_Event_0(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
	void Construct();
	void Destruct();
	void OnUpdateKeyEvent();
	void OnChangeOpenCommandMenuFlag(const bool Result);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void UpdateVisibility();
	void UpdateKeyText();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OpenCommandMenu_C">();
	}
	static class UOpenCommandMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOpenCommandMenu_C>();
	}
};
static_assert(alignof(UOpenCommandMenu_C) == 0x000008, "Wrong alignment on UOpenCommandMenu_C");
static_assert(sizeof(UOpenCommandMenu_C) == 0x0002B0, "Wrong size on UOpenCommandMenu_C");
static_assert(offsetof(UOpenCommandMenu_C, UberGraphFrame) == 0x000278, "Member 'UOpenCommandMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOpenCommandMenu_C, AnimBlink) == 0x000280, "Member 'UOpenCommandMenu_C::AnimBlink' has a wrong offset!");
static_assert(offsetof(UOpenCommandMenu_C, AnimIn) == 0x000288, "Member 'UOpenCommandMenu_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UOpenCommandMenu_C, BG) == 0x000290, "Member 'UOpenCommandMenu_C::BG' has a wrong offset!");
static_assert(offsetof(UOpenCommandMenu_C, Icon) == 0x000298, "Member 'UOpenCommandMenu_C::Icon' has a wrong offset!");
static_assert(offsetof(UOpenCommandMenu_C, TextKey) == 0x0002A0, "Member 'UOpenCommandMenu_C::TextKey' has a wrong offset!");
static_assert(offsetof(UOpenCommandMenu_C, bVisible) == 0x0002A8, "Member 'UOpenCommandMenu_C::bVisible' has a wrong offset!");
static_assert(offsetof(UOpenCommandMenu_C, bUIVisibleSetting) == 0x0002A9, "Member 'UOpenCommandMenu_C::bUIVisibleSetting' has a wrong offset!");
static_assert(offsetof(UOpenCommandMenu_C, bPhotoMode) == 0x0002AA, "Member 'UOpenCommandMenu_C::bPhotoMode' has a wrong offset!");

}

