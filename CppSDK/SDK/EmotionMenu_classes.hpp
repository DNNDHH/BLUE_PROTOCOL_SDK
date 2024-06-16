#pragma once

 

// Package: EmotionMenu

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EmotionMenu.EmotionMenu_C
// 0x0110 (0x03C0 - 0x02B0)
class UEmotionMenu_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                         CategoryList;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChatHudMovableWidget_C*                ChatHudMovableWidget;                              // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           EmotionPanel;                                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULimitedTimeNotice_C*                   LimitedTimeNotice;                                 // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStampCategoryButton_C*                 StampCategoryButton;                               // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStampCategoryButton_C*                 StampCategoryButton_1;                             // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStampCategoryButton_C*                 StampCategoryButton_2;                             // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStampCategoryButton_C*                 StampCategoryButton_3;                             // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStampCategoryButton_C*                 StampCategoryButton_4;                             // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchGesture;                                     // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         TabList;                                           // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TabTextInput;                                      // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            TextInputButton;                                   // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_EmotionIconScroolBox_C*            WBP_EmotionIconScroolBox;                          // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x0340(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class FString>                         EmotionList;                                       // 0x0350(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 SelectedEmotion;                                   // 0x0360(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UCommandMenu_C*                         CommandMenu;                                       // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bIsStartup;                                        // 0x0378(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          IsEmotionMode;                                     // 0x0379(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EShortcutType                                 RegisterType;                                      // 0x037A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A25[0x1];                                     // 0x037B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   TutorialHelpId;                                    // 0x037C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A26[0x4];                                     // 0x0384(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTutorialHelpDialogBox_C*               TutorialHelpWidget;                                // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectCategory;                                    // 0x0390(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A27[0x4];                                     // 0x0394(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBLimitedTimeGroupInfo>        LimitedTimeGroupList;                              // 0x0398(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnRequestEmote;                                    // 0x03A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bEnableRequest;                                    // 0x03B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnClose__DelegateSignature();
	void OnRequestEmote__DelegateSignature(class FName EmotionId);
	void ExecuteUbergraph_EmotionMenu(int32 EntryPoint);
	void ArrivalBackendMenu(bool Param_Index);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void Destruct();
	void Construct();
	void BndEvt__EmotionMenu_WBP_EmotionScroolBox_K2Node_ComponentBoundEvent_0_OnSelectEmotionItem__DelegateSignature(class UEmotionMenu_Item_C* InSelectedItem);
	void OnActiveItemaUpdate();
	void UpdateEmotionList(bool IsCreateCategory);
	void OnClickedEvent(int32 Param_Index);
	void CreateCategory();
	void Construct_Emotion();
	void OnTutorialHelp_Close();
	void OnRequestTutorialHelp();
	void ResetMouseCursorTypeToDefaultRequest();
	void OnSubMenuUpdate(int32 MainPage, int32 SubPage);
	void OnSameMenuBookmarkAccessNew(const class FString& InBookMarkType);
	void OnRMShopClosed();
	void OnParentTerm();
	void CreateEmotionEmotionList();
	void SetRootVisible(bool InVisible);
	void SetRootBgVisible(bool bVisible);
	void Show();
	void Hide();
	void SetLineColor(ESBChatLogType InChatLogType);
	void SelectEmotionItem(class UEmotionMenu_Item_C* InSelectedItem);
	void SetDragableItem(bool InDragable);
	void UpdateCategory();
	ESubMenuTermRequestReply TermRequest(const ESubMenuTermReason InReason);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EmotionMenu_C">();
	}
	static class UEmotionMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEmotionMenu_C>();
	}
};
static_assert(alignof(UEmotionMenu_C) == 0x000008, "Wrong alignment on UEmotionMenu_C");
static_assert(sizeof(UEmotionMenu_C) == 0x0003C0, "Wrong size on UEmotionMenu_C");
static_assert(offsetof(UEmotionMenu_C, UberGraphFrame) == 0x0002B0, "Member 'UEmotionMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEmotionMenu_C, AnimOut) == 0x0002B8, "Member 'UEmotionMenu_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UEmotionMenu_C, AnimIn) == 0x0002C0, "Member 'UEmotionMenu_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UEmotionMenu_C, CategoryList) == 0x0002C8, "Member 'UEmotionMenu_C::CategoryList' has a wrong offset!");
static_assert(offsetof(UEmotionMenu_C, ChatHudMovableWidget) == 0x0002D0, "Member 'UEmotionMenu_C::ChatHudMovableWidget' has a wrong offset!");
static_assert(offsetof(UEmotionMenu_C, EmotionPanel) == 0x0002D8, "Member 'UEmotionMenu_C::EmotionPanel' has a wrong offset!");
static_assert(offsetof(UEmotionMenu_C, LimitedTimeNotice) == 0x0002E0, "Member 'UEmotionMenu_C::LimitedTimeNotice' has a wrong offset!");
static_assert(offsetof(UEmotionMenu_C, StampCategoryButton) == 0x0002E8, "Member 'UEmotionMenu_C::StampCategoryButton' has a wrong offset!");
static_assert(offsetof(UEmotionMenu_C, StampCategoryButton_1) == 0x0002F0, "Member 'UEmotionMenu_C::StampCategoryButton_1' has a wrong offset!");
static_assert(offsetof(UEmotionMenu_C, StampCategoryButton_2) == 0x0002F8, "Member 'UEmotionMenu_C::StampCategoryButton_2' has a wrong offset!");
static_assert(offsetof(UEmotionMenu_C, StampCategoryButton_3) == 0x000300, "Member 'UEmotionMenu_C::StampCategoryButton_3' has a wrong offset!");
static_assert(offsetof(UEmotionMenu_C, StampCategoryButton_4) == 0x000308, "Member 'UEmotionMenu_C::StampCategoryButton_4' has a wrong offset!");
static_assert(offsetof(UEmotionMenu_C, SwitchGesture) == 0x000310, "Member 'UEmotionMenu_C::SwitchGesture' has a wrong offset!");
static_assert(offsetof(UEmotionMenu_C, TabList) == 0x000318, "Member 'UEmotionMenu_C::TabList' has a wrong offset!");
static_assert(offsetof(UEmotionMenu_C, TabTextInput) == 0x000320, "Member 'UEmotionMenu_C::TabTextInput' has a wrong offset!");
static_assert(offsetof(UEmotionMenu_C, TextInputButton) == 0x000328, "Member 'UEmotionMenu_C::TextInputButton' has a wrong offset!");
static_assert(offsetof(UEmotionMenu_C, UIBlocker) == 0x000330, "Member 'UEmotionMenu_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UEmotionMenu_C, WBP_EmotionIconScroolBox) == 0x000338, "Member 'UEmotionMenu_C::WBP_EmotionIconScroolBox' has a wrong offset!");
static_assert(offsetof(UEmotionMenu_C, OnClose) == 0x000340, "Member 'UEmotionMenu_C::OnClose' has a wrong offset!");
static_assert(offsetof(UEmotionMenu_C, EmotionList) == 0x000350, "Member 'UEmotionMenu_C::EmotionList' has a wrong offset!");
static_assert(offsetof(UEmotionMenu_C, SelectedEmotion) == 0x000360, "Member 'UEmotionMenu_C::SelectedEmotion' has a wrong offset!");
static_assert(offsetof(UEmotionMenu_C, CommandMenu) == 0x000370, "Member 'UEmotionMenu_C::CommandMenu' has a wrong offset!");
static_assert(offsetof(UEmotionMenu_C, bIsStartup) == 0x000378, "Member 'UEmotionMenu_C::bIsStartup' has a wrong offset!");
static_assert(offsetof(UEmotionMenu_C, IsEmotionMode) == 0x000379, "Member 'UEmotionMenu_C::IsEmotionMode' has a wrong offset!");
static_assert(offsetof(UEmotionMenu_C, RegisterType) == 0x00037A, "Member 'UEmotionMenu_C::RegisterType' has a wrong offset!");
static_assert(offsetof(UEmotionMenu_C, TutorialHelpId) == 0x00037C, "Member 'UEmotionMenu_C::TutorialHelpId' has a wrong offset!");
static_assert(offsetof(UEmotionMenu_C, TutorialHelpWidget) == 0x000388, "Member 'UEmotionMenu_C::TutorialHelpWidget' has a wrong offset!");
static_assert(offsetof(UEmotionMenu_C, SelectCategory) == 0x000390, "Member 'UEmotionMenu_C::SelectCategory' has a wrong offset!");
static_assert(offsetof(UEmotionMenu_C, LimitedTimeGroupList) == 0x000398, "Member 'UEmotionMenu_C::LimitedTimeGroupList' has a wrong offset!");
static_assert(offsetof(UEmotionMenu_C, OnRequestEmote) == 0x0003A8, "Member 'UEmotionMenu_C::OnRequestEmote' has a wrong offset!");
static_assert(offsetof(UEmotionMenu_C, bEnableRequest) == 0x0003B8, "Member 'UEmotionMenu_C::bEnableRequest' has a wrong offset!");

}

