#pragma once

 

// Package: OtherPCEmoteMenu

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass OtherPCEmoteMenu.OtherPCEmoteMenu_C
// 0x00E0 (0x0390 - 0x02B0)
class UOtherPCEmoteMenu_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         CategoryList;                                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose01_C*                          CmnClose01;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             EmoteGridPanel;                                    // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULimitedTimeNotice_C*                   LimitedTimeNotice;                                 // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  SBButtonFullScreen;                                // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStampCategoryButton_C*                 StampCategoryButton;                               // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStampCategoryButton_C*                 StampCategoryButton_1;                             // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStampCategoryButton_C*                 StampCategoryButton_2;                             // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStampCategoryButton_C*                 StampCategoryButton_3;                             // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStampCategoryButton_C*                 StampCategoryButton_4;                             // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsClosingMenu;                                     // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C22[0x7];                                     // 0x0329(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x0330(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class FString>                         EmotionList;                                       // 0x0340(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 SelectedEmotion;                                   // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FName                                   TutorialHelpId;                                    // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTutorialHelpDialogBox_C*               TutorialHelpWidget;                                // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerState*                         PlayerState;                                       // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         SelectCategory;                                    // 0x0378(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C23[0x4];                                     // 0x037C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBLimitedTimeGroupInfo>        LimitedTimeGroupList;                              // 0x0380(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnClose__DelegateSignature();
	void ExecuteUbergraph_OtherPCEmoteMenu(int32 EntryPoint);
	void BndEvt__OtherPCEmoteMenu_SBButtonFullScreen_C_35_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__OtherPCEmoteMenu_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature();
	void CustomEvent(int32 Param_Index);
	void CreateCategory();
	void UpdateEmotionList(bool bInit);
	void ForcedClose();
	void OnJankenUIDelegate_Event_0();
	void OnPress_Cancel();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void OnSelect(class UEmotionMenu_Item_C* InSelectedItem);
	void OnRefresh();
	void Destruct();
	void Construct();
	void OnTutorialHelp_Close();
	void OnRequestTutorialHelp();
	void CloseMenu();
	void CreateEmptySlot(class UGridPanel* InGridPanel, int32 InSlotCount);
	void CreateEmotionList();
	void ClearEmotionSlot();
	void SetRootVisible(bool InVisible);
	void Update_Category();
	class ASBPlayerCharacter* GetPlayerCharacter();
	void UpdateEmoteIconEnable();
	void Is_Enable_Emote_Icon(const class FName& InputPin, bool* bIsEnable);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OtherPCEmoteMenu_C">();
	}
	static class UOtherPCEmoteMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOtherPCEmoteMenu_C>();
	}
};
static_assert(alignof(UOtherPCEmoteMenu_C) == 0x000008, "Wrong alignment on UOtherPCEmoteMenu_C");
static_assert(sizeof(UOtherPCEmoteMenu_C) == 0x000390, "Wrong size on UOtherPCEmoteMenu_C");
static_assert(offsetof(UOtherPCEmoteMenu_C, UberGraphFrame) == 0x0002B0, "Member 'UOtherPCEmoteMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOtherPCEmoteMenu_C, AnimOut) == 0x0002B8, "Member 'UOtherPCEmoteMenu_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UOtherPCEmoteMenu_C, AnimIn) == 0x0002C0, "Member 'UOtherPCEmoteMenu_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UOtherPCEmoteMenu_C, BG) == 0x0002C8, "Member 'UOtherPCEmoteMenu_C::BG' has a wrong offset!");
static_assert(offsetof(UOtherPCEmoteMenu_C, CategoryList) == 0x0002D0, "Member 'UOtherPCEmoteMenu_C::CategoryList' has a wrong offset!");
static_assert(offsetof(UOtherPCEmoteMenu_C, CmnClose01) == 0x0002D8, "Member 'UOtherPCEmoteMenu_C::CmnClose01' has a wrong offset!");
static_assert(offsetof(UOtherPCEmoteMenu_C, EmoteGridPanel) == 0x0002E0, "Member 'UOtherPCEmoteMenu_C::EmoteGridPanel' has a wrong offset!");
static_assert(offsetof(UOtherPCEmoteMenu_C, LimitedTimeNotice) == 0x0002E8, "Member 'UOtherPCEmoteMenu_C::LimitedTimeNotice' has a wrong offset!");
static_assert(offsetof(UOtherPCEmoteMenu_C, SBButtonFullScreen) == 0x0002F0, "Member 'UOtherPCEmoteMenu_C::SBButtonFullScreen' has a wrong offset!");
static_assert(offsetof(UOtherPCEmoteMenu_C, StampCategoryButton) == 0x0002F8, "Member 'UOtherPCEmoteMenu_C::StampCategoryButton' has a wrong offset!");
static_assert(offsetof(UOtherPCEmoteMenu_C, StampCategoryButton_1) == 0x000300, "Member 'UOtherPCEmoteMenu_C::StampCategoryButton_1' has a wrong offset!");
static_assert(offsetof(UOtherPCEmoteMenu_C, StampCategoryButton_2) == 0x000308, "Member 'UOtherPCEmoteMenu_C::StampCategoryButton_2' has a wrong offset!");
static_assert(offsetof(UOtherPCEmoteMenu_C, StampCategoryButton_3) == 0x000310, "Member 'UOtherPCEmoteMenu_C::StampCategoryButton_3' has a wrong offset!");
static_assert(offsetof(UOtherPCEmoteMenu_C, StampCategoryButton_4) == 0x000318, "Member 'UOtherPCEmoteMenu_C::StampCategoryButton_4' has a wrong offset!");
static_assert(offsetof(UOtherPCEmoteMenu_C, UIBlocker) == 0x000320, "Member 'UOtherPCEmoteMenu_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UOtherPCEmoteMenu_C, IsClosingMenu) == 0x000328, "Member 'UOtherPCEmoteMenu_C::IsClosingMenu' has a wrong offset!");
static_assert(offsetof(UOtherPCEmoteMenu_C, OnClose) == 0x000330, "Member 'UOtherPCEmoteMenu_C::OnClose' has a wrong offset!");
static_assert(offsetof(UOtherPCEmoteMenu_C, EmotionList) == 0x000340, "Member 'UOtherPCEmoteMenu_C::EmotionList' has a wrong offset!");
static_assert(offsetof(UOtherPCEmoteMenu_C, SelectedEmotion) == 0x000350, "Member 'UOtherPCEmoteMenu_C::SelectedEmotion' has a wrong offset!");
static_assert(offsetof(UOtherPCEmoteMenu_C, TutorialHelpId) == 0x000360, "Member 'UOtherPCEmoteMenu_C::TutorialHelpId' has a wrong offset!");
static_assert(offsetof(UOtherPCEmoteMenu_C, TutorialHelpWidget) == 0x000368, "Member 'UOtherPCEmoteMenu_C::TutorialHelpWidget' has a wrong offset!");
static_assert(offsetof(UOtherPCEmoteMenu_C, PlayerState) == 0x000370, "Member 'UOtherPCEmoteMenu_C::PlayerState' has a wrong offset!");
static_assert(offsetof(UOtherPCEmoteMenu_C, SelectCategory) == 0x000378, "Member 'UOtherPCEmoteMenu_C::SelectCategory' has a wrong offset!");
static_assert(offsetof(UOtherPCEmoteMenu_C, LimitedTimeGroupList) == 0x000380, "Member 'UOtherPCEmoteMenu_C::LimitedTimeGroupList' has a wrong offset!");

}

