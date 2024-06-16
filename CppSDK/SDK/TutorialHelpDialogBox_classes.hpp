#pragma once

 

// Package: TutorialHelpDialogBox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TutorialHelpDialogBox.TutorialHelpDialogBox_C
// 0x0060 (0x0310 - 0x02B0)
class UTutorialHelpDialogBox_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  BtnCancel;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                TutorialHelpDialogBG;                              // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTutorialHelpDialogBoxCommon_C*         TutorialHelpDialogBoxCommon;                       // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                   TutorialHelpId;                                    // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                   BookmarkTutorialHelpId;                            // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsContinue;                                        // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          bIsInPhotoMode;                                    // 0x0309(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          bIsRead;                                           // 0x030A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsUsingClassTypeForTutorialHelp;                  // 0x030B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	ESBClassType                                  ClassTypeForTutorialHelp;                          // 0x030C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void OnClose__DelegateSignature();
	void ExecuteUbergraph_TutorialHelpDialogBox(int32 EntryPoint);
	void EventClose(class UObject* Sender, class UObject* Param);
	void OnContinueOpen(class FName Param_TutorialHelpId, bool Param_IsContinue);
	void OnPress_Ok();
	void BndEvt__BtnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnPress_Cancel();
	void Destruct();
	void Construct();
	void AnimetionFinished();
	void OnDialogBoxClose_Event();
	void SaveReadHelpId();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TutorialHelpDialogBox_C">();
	}
	static class UTutorialHelpDialogBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTutorialHelpDialogBox_C>();
	}
};
static_assert(alignof(UTutorialHelpDialogBox_C) == 0x000008, "Wrong alignment on UTutorialHelpDialogBox_C");
static_assert(sizeof(UTutorialHelpDialogBox_C) == 0x000310, "Wrong size on UTutorialHelpDialogBox_C");
static_assert(offsetof(UTutorialHelpDialogBox_C, UberGraphFrame) == 0x0002B0, "Member 'UTutorialHelpDialogBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTutorialHelpDialogBox_C, AnimOut) == 0x0002B8, "Member 'UTutorialHelpDialogBox_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UTutorialHelpDialogBox_C, AnimIn) == 0x0002C0, "Member 'UTutorialHelpDialogBox_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UTutorialHelpDialogBox_C, BtnCancel) == 0x0002C8, "Member 'UTutorialHelpDialogBox_C::BtnCancel' has a wrong offset!");
static_assert(offsetof(UTutorialHelpDialogBox_C, TutorialHelpDialogBG) == 0x0002D0, "Member 'UTutorialHelpDialogBox_C::TutorialHelpDialogBG' has a wrong offset!");
static_assert(offsetof(UTutorialHelpDialogBox_C, TutorialHelpDialogBoxCommon) == 0x0002D8, "Member 'UTutorialHelpDialogBox_C::TutorialHelpDialogBoxCommon' has a wrong offset!");
static_assert(offsetof(UTutorialHelpDialogBox_C, UIBlocker) == 0x0002E0, "Member 'UTutorialHelpDialogBox_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UTutorialHelpDialogBox_C, OnClose) == 0x0002E8, "Member 'UTutorialHelpDialogBox_C::OnClose' has a wrong offset!");
static_assert(offsetof(UTutorialHelpDialogBox_C, TutorialHelpId) == 0x0002F8, "Member 'UTutorialHelpDialogBox_C::TutorialHelpId' has a wrong offset!");
static_assert(offsetof(UTutorialHelpDialogBox_C, BookmarkTutorialHelpId) == 0x000300, "Member 'UTutorialHelpDialogBox_C::BookmarkTutorialHelpId' has a wrong offset!");
static_assert(offsetof(UTutorialHelpDialogBox_C, IsContinue) == 0x000308, "Member 'UTutorialHelpDialogBox_C::IsContinue' has a wrong offset!");
static_assert(offsetof(UTutorialHelpDialogBox_C, bIsInPhotoMode) == 0x000309, "Member 'UTutorialHelpDialogBox_C::bIsInPhotoMode' has a wrong offset!");
static_assert(offsetof(UTutorialHelpDialogBox_C, bIsRead) == 0x00030A, "Member 'UTutorialHelpDialogBox_C::bIsRead' has a wrong offset!");
static_assert(offsetof(UTutorialHelpDialogBox_C, bIsUsingClassTypeForTutorialHelp) == 0x00030B, "Member 'UTutorialHelpDialogBox_C::bIsUsingClassTypeForTutorialHelp' has a wrong offset!");
static_assert(offsetof(UTutorialHelpDialogBox_C, ClassTypeForTutorialHelp) == 0x00030C, "Member 'UTutorialHelpDialogBox_C::ClassTypeForTutorialHelp' has a wrong offset!");

}

