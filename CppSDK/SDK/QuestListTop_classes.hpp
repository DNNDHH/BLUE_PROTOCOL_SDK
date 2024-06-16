#pragma once

 

// Package: QuestListTop

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass QuestListTop.QuestListTop_C
// 0x0148 (0x03F0 - 0x02A8)
class UQuestListTop_C final : public USBCommandMenuChildBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut2;                                          // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommandMenuCommonSubButtonList_C*      ButtonGroup1;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenu_Line_C*                    CommandMenu_Line;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenuBg_C*                       CommandMenuBg;                                     // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           MenuCanvasPanel;                                   // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         HelpId;                                            // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NowPage;                                           // 0x02FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                HunterQuestList_0;                                 // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBCommandMenuChildData>        Child_Widget_Data;                                 // 0x0308(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<int32, struct FSBCommandMenuChildInstanceData> Child_Widget_Instance_List;                        // 0x0318(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UUserWidget*                            CurrentWidget;                                     // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAutoDeliveryQuestListUpdate;                      // 0x0370(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D43[0x7];                                     // 0x0371(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FString, int32>                    PageMap;                                           // 0x0378(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                         BookmarkTypeList;                                  // 0x03C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UUIBlocker_C*                           UIBlocker_0;                                       // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAdventureBoardUpdate;                             // 0x03E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D44[0x3];                                     // 0x03E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         AutoDeliveryQuestRetCode;                          // 0x03E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AdventureBoardRetCode;                             // 0x03E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClose__DelegateSignature();
	void ExecuteUbergraph_QuestListTop(int32 EntryPoint);
	void BindSubMenuQuestUpdate_Event();
	void OnUpdateQuestButtonNew_Event(class UObject* Sender, class UObject* Param);
	void UpdateAutoDeliveryQuestExclamation_Event(class UObject* Sender, class UObject* Param);
	void BindAutoDeliveryQuestUpdate_Event();
	void UpdateSubMenuAdventureBoardExclamation_Event(class UObject* Sender, class UObject* Param);
	void BindSubMenuAdventureBoardUpdate_Event();
	void OnLoadAdventureBoardDelegete______0(int32 RetCode);
	void UpdateBookmarkButton();
	void OnSameMenuBookmarkAccessNew(const class FString& InBookMarkType);
	void CustomEvent_0(int32 ReturnCode);
	void OnSubMenuUpdate(int32 MainPage, int32 SubPage);
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0();
	void BookmarkUpdateRequest();
	void ChangePage(int32 PageNum);
	void BndEvt__Tab1_K2Node_ComponentBoundEvent_24_OnClick__DelegateSignature(int32 ButtonId);
	void Construct();
	void ResetMouseCursorTypeToDefaultRequest();
	void OnRMShopClosed();
	void OnParentTerm();
	void OnLoaded_B897C77C401AFB2FF4EE5498A2CCE559(TSubclassOf<class UObject> Loaded);
	void Initialize_Open_Menu_Type();
	void IsAdventureBoardExclamation();
	void IsAutoDeliveryQuestExclamation();
	void IsActiveDeliveryQuest(bool* Active);
	void UpdateQuestButtonExclamation();
	ESubMenuTermRequestReply TermRequest(const ESubMenuTermReason InReason);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuestListTop_C">();
	}
	static class UQuestListTop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuestListTop_C>();
	}
};
static_assert(alignof(UQuestListTop_C) == 0x000008, "Wrong alignment on UQuestListTop_C");
static_assert(sizeof(UQuestListTop_C) == 0x0003F0, "Wrong size on UQuestListTop_C");
static_assert(offsetof(UQuestListTop_C, UberGraphFrame) == 0x0002A8, "Member 'UQuestListTop_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UQuestListTop_C, AnimOut2) == 0x0002B0, "Member 'UQuestListTop_C::AnimOut2' has a wrong offset!");
static_assert(offsetof(UQuestListTop_C, AnimOut) == 0x0002B8, "Member 'UQuestListTop_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UQuestListTop_C, ButtonGroup1) == 0x0002C0, "Member 'UQuestListTop_C::ButtonGroup1' has a wrong offset!");
static_assert(offsetof(UQuestListTop_C, CommandMenu_Line) == 0x0002C8, "Member 'UQuestListTop_C::CommandMenu_Line' has a wrong offset!");
static_assert(offsetof(UQuestListTop_C, CommandMenuBg) == 0x0002D0, "Member 'UQuestListTop_C::CommandMenuBg' has a wrong offset!");
static_assert(offsetof(UQuestListTop_C, MenuCanvasPanel) == 0x0002D8, "Member 'UQuestListTop_C::MenuCanvasPanel' has a wrong offset!");
static_assert(offsetof(UQuestListTop_C, UIBlocker) == 0x0002E0, "Member 'UQuestListTop_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UQuestListTop_C, OnClose) == 0x0002E8, "Member 'UQuestListTop_C::OnClose' has a wrong offset!");
static_assert(offsetof(UQuestListTop_C, HelpId) == 0x0002F8, "Member 'UQuestListTop_C::HelpId' has a wrong offset!");
static_assert(offsetof(UQuestListTop_C, NowPage) == 0x0002FC, "Member 'UQuestListTop_C::NowPage' has a wrong offset!");
static_assert(offsetof(UQuestListTop_C, HunterQuestList_0) == 0x000300, "Member 'UQuestListTop_C::HunterQuestList_0' has a wrong offset!");
static_assert(offsetof(UQuestListTop_C, Child_Widget_Data) == 0x000308, "Member 'UQuestListTop_C::Child_Widget_Data' has a wrong offset!");
static_assert(offsetof(UQuestListTop_C, Child_Widget_Instance_List) == 0x000318, "Member 'UQuestListTop_C::Child_Widget_Instance_List' has a wrong offset!");
static_assert(offsetof(UQuestListTop_C, CurrentWidget) == 0x000368, "Member 'UQuestListTop_C::CurrentWidget' has a wrong offset!");
static_assert(offsetof(UQuestListTop_C, bAutoDeliveryQuestListUpdate) == 0x000370, "Member 'UQuestListTop_C::bAutoDeliveryQuestListUpdate' has a wrong offset!");
static_assert(offsetof(UQuestListTop_C, PageMap) == 0x000378, "Member 'UQuestListTop_C::PageMap' has a wrong offset!");
static_assert(offsetof(UQuestListTop_C, BookmarkTypeList) == 0x0003C8, "Member 'UQuestListTop_C::BookmarkTypeList' has a wrong offset!");
static_assert(offsetof(UQuestListTop_C, UIBlocker_0) == 0x0003D8, "Member 'UQuestListTop_C::UIBlocker_0' has a wrong offset!");
static_assert(offsetof(UQuestListTop_C, bAdventureBoardUpdate) == 0x0003E0, "Member 'UQuestListTop_C::bAdventureBoardUpdate' has a wrong offset!");
static_assert(offsetof(UQuestListTop_C, AutoDeliveryQuestRetCode) == 0x0003E4, "Member 'UQuestListTop_C::AutoDeliveryQuestRetCode' has a wrong offset!");
static_assert(offsetof(UQuestListTop_C, AdventureBoardRetCode) == 0x0003E8, "Member 'UQuestListTop_C::AdventureBoardRetCode' has a wrong offset!");

}

