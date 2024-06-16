#pragma once

 

// Package: ChatLogWindowList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ChatLogWindowList.ChatLogWindowList_C
// 0x0240 (0x04B8 - 0x0278)
class UChatLogWindowList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           Btn_Closes;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            BtnAddWindow;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            BtnSeparation_Main;                                // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                BtnStoring_Sub;                                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChatHudMovableWidget_C*                ChatHudMovableWidget;                              // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChatHudResizableWidget_C*              ChatHudResizableWidget;                            // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChatLogFilterItem_C*                   ChatLogFilterBattle_0;                             // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChatLogFilterItem_C*                   ChatLogFilterBattle_1;                             // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChatLogFilterItem_C*                   ChatLogFilterBattle_2;                             // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChatLogFilterItem_C*                   ChatLogFilterCommunication_0;                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChatLogFilterItem_C*                   ChatLogFilterCommunication_1;                      // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChatLogFilterItem_C*                   ChatLogFilterItem_0;                               // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChatLogFilterItem_C*                   ChatLogFilterItem_1;                               // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChatLogFilterItem_C*                   ChatLogFilterItem_2;                               // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChatLogFilterItem_C*                   ChatLogFilterItem_3;                               // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChatLogFilterItem_C*                   ChatLogFilterItem_4;                               // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChatLogFilterItem_C*                   ChatLogFilterSystem_0;                             // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChatLogFilterItem_C*                   ChatLogFilterSystem_1;                             // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChatLogFilterItem_C*                   ChatLogFilterSystem_2;                             // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose02_C*                          CmnClose02;                                        // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FilterBg1;                                         // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            FilterButton;                                      // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            FilterClose;                                       // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             FilterGridPanel;                                   // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           FilterGrp;                                         // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_4;                                           // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListView*                              LogListView;                                       // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    MainButtonText;                                    // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    MainButtonText_1;                                  // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    MainButtonText_2;                                  // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            MainTabButton;                                     // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            MainTabButton_1;                                   // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            MainTabButton_2;                                   // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock;                                // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_0;                              // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_3;                              // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_0;                                         // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher_BtnCloses;                                // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher_BtnWindow;                                // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchMainTab;                                     // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchSubTab_1;                                    // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchSubTab_2;                                    // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtChildMain;                                      // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           UnreadGrp;                                         // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         FilterType;                                        // 0x0400(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DetailFilterType;                                  // 0x0404(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBChatLogTabType                             TabType;                                           // 0x0408(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FilterListVisible;                                 // 0x0409(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4733[0x6];                                     // 0x040A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_ChatLogWindow_C*                   ChatLogWindowWidget;                               // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnChatLogWindowAddRequest;                         // 0x0418(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnChatLogWindowCloseRequest;                       // 0x0428(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	ESBChatLogWindowSlot                          ChatLogSlot;                                       // 0x0438(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4734[0x7];                                     // 0x0439(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnChangeFilterType;                                // 0x0440(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsVisibility;                                      // 0x0450(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4735[0x7];                                     // 0x0451(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnChatLogTabAddRequest;                            // 0x0458(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnChatLogTabCloseRequest;                          // 0x0468(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnChangeTab;                                       // 0x0478(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsUnreadWidget;                                    // 0x0488(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsUnreadClear;                                     // 0x0489(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4736[0x6];                                     // 0x048A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnChangeChatUnreadNotify;                          // 0x0490(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnChangeUnreadVisible;                             // 0x04A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsCreateMessage;                                   // 0x04B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsChatUnreadNotify;                                // 0x04B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnChatLogWindowAddRequest__DelegateSignature();
	void OnChatLogWindowCloseRequest__DelegateSignature();
	void OnChangeFilterType__DelegateSignature(int32 InType, int32 InDetailType);
	void OnChatLogTabAddRequest__DelegateSignature();
	void OnChatLogTabCloseRequest__DelegateSignature(ESBChatLogWindowSlot RequestSlot);
	void OnChangeTab__DelegateSignature();
	void OnChangeChatUnreadNotify__DelegateSignature(bool Param_IsChatUnreadNotify);
	void OnChangeUnreadVisible__DelegateSignature(bool Param_IsVisible);
	void ExecuteUbergraph_ChatLogWindowList(int32 EntryPoint);
	void BndEvt__SBMainTabButton_K2Node_ComponentBoundEvent_278_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ChatLogWindowList_CmnClose02_K2Node_ComponentBoundEvent_8_OnClosed__DelegateSignature();
	void BndEvt__BtnStoring_Sub_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BtnSeparation_Main_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__LogListView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature(class UUserWidget* Widget);
	void OnReciveMessage(const struct FSBChatUIMessage& InMess, bool bRecieve);
	void BndEvt__BtnAddWindow_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ChatLogWindowList_FilterClose_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ChatLogWindowList_ChatLogFilterBattle_2_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature(bool IsChecked);
	void BndEvt__ChatLogWindowList_ChatLogFilterBattle_1_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature(bool IsChecked);
	void CloseFilter();
	void BndEvt__ChatLogFilterSystem_2_K2Node_ComponentBoundEvent_5_EventCheckStateChanged__DelegateSignature(bool IsChecked);
	void BndEvt__ChatLogFilterSystem_1_K2Node_ComponentBoundEvent_4_EventCheckStateChanged__DelegateSignature(bool IsChecked);
	void BndEvt__ChatLogFilterSystem_0_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature(bool IsChecked);
	void BndEvt__ChatLogFilterCommunication_1_K2Node_ComponentBoundEvent_2_EventCheckStateChanged__DelegateSignature(bool IsChecked);
	void BndEvt__ChatLogFilterCommunication_0_K2Node_ComponentBoundEvent_1_EventCheckStateChanged__DelegateSignature(bool IsChecked);
	void BndEvt__ChatLogFilterBattle_0_K2Node_ComponentBoundEvent_0_EventCheckStateChanged__DelegateSignature(bool IsChecked);
	void BndEvt__ChatLogFilterItem_4_K2Node_ComponentBoundEvent_539_EventCheckStateChanged__DelegateSignature(bool IsChecked);
	void BndEvt__ChatLogFilterItem_3_K2Node_ComponentBoundEvent_523_EventCheckStateChanged__DelegateSignature(bool IsChecked);
	void BndEvt__ChatLogFilterItem_2_K2Node_ComponentBoundEvent_508_EventCheckStateChanged__DelegateSignature(bool IsChecked);
	void BndEvt__ChatLogFilterItem_1_K2Node_ComponentBoundEvent_494_EventCheckStateChanged__DelegateSignature(bool IsChecked);
	void BndEvt__ChatLogFilterItem_0_K2Node_ComponentBoundEvent_493_EventCheckStateChanged__DelegateSignature(bool IsChecked);
	void BndEvt__FilterButton_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__MainTabButton_2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__MainTabButton_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Init(class UUMG_ChatLogWindow_C* InWidget, int32 InFilterType, int32 InDetailFilterType, ESBChatLogTabType InTabType);
	void InitFilterCheckBox();
	void Change_Tab_Mode(ESBChatLogTabType InTabType, bool bInit);
	void NextTabSelection(bool bPrevious);
	void Set_Filter_List_Visible(bool InVisible);
	void CreateChatLogList(int32 InFilterType, int32 InDetailFilterType);
	void IsDirectChatPlayer(const struct FSBChatUIMessage& InMess, bool* Ret);
	void ChangeFilter(bool InEnable, ESBChatFilterType InFilterType);
	void ChangeDetailFilter(bool InEnable, ESBChatDetailFilterType InDetailFilterType);
	void InitChidMode(int32 InTabTextId);
	void RefreshLog();
	void SetListScrollEnd();
	void SetForceUnhover();
	void SetFullChildWindow(bool InFull);
	void SetSeparationButtonEnabled(bool InEnable);
	void SetWindowSize(const struct FVector2D& InSize);
	void GetWindowSize(struct FVector2D* RetSize);
	void Create_Message_Entry(const struct FSBChatUIMessage& InMess, bool bRecieve);
	void IsScrollEndListView(bool* Ret);
	void ClearLogList();
	void SetTab(ESBChatLogWindowSlot InSlot, bool bAdd);
	void Get_Tab_Type_to_Slot(ESBChatLogWindowSlot* Param_Slot);
	void SetChatLogSlot(ESBChatLogWindowSlot Param_Slot);
	void CheckUnread();
	void ChatCloseUnreadUpdate();
	void UpdateChatLogStatus(const struct FSBChatLogWindowStatusSave& InStatus);
	void GetChatUnreadNotify(bool* Result);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChatLogWindowList_C">();
	}
	static class UChatLogWindowList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChatLogWindowList_C>();
	}
};
static_assert(alignof(UChatLogWindowList_C) == 0x000008, "Wrong alignment on UChatLogWindowList_C");
static_assert(sizeof(UChatLogWindowList_C) == 0x0004B8, "Wrong size on UChatLogWindowList_C");
static_assert(offsetof(UChatLogWindowList_C, UberGraphFrame) == 0x000278, "Member 'UChatLogWindowList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, AnimOut) == 0x000280, "Member 'UChatLogWindowList_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, AnimIn) == 0x000288, "Member 'UChatLogWindowList_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, Btn_Closes) == 0x000290, "Member 'UChatLogWindowList_C::Btn_Closes' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, BtnAddWindow) == 0x000298, "Member 'UChatLogWindowList_C::BtnAddWindow' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, BtnSeparation_Main) == 0x0002A0, "Member 'UChatLogWindowList_C::BtnSeparation_Main' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, BtnStoring_Sub) == 0x0002A8, "Member 'UChatLogWindowList_C::BtnStoring_Sub' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, ChatHudMovableWidget) == 0x0002B0, "Member 'UChatLogWindowList_C::ChatHudMovableWidget' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, ChatHudResizableWidget) == 0x0002B8, "Member 'UChatLogWindowList_C::ChatHudResizableWidget' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, ChatLogFilterBattle_0) == 0x0002C0, "Member 'UChatLogWindowList_C::ChatLogFilterBattle_0' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, ChatLogFilterBattle_1) == 0x0002C8, "Member 'UChatLogWindowList_C::ChatLogFilterBattle_1' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, ChatLogFilterBattle_2) == 0x0002D0, "Member 'UChatLogWindowList_C::ChatLogFilterBattle_2' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, ChatLogFilterCommunication_0) == 0x0002D8, "Member 'UChatLogWindowList_C::ChatLogFilterCommunication_0' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, ChatLogFilterCommunication_1) == 0x0002E0, "Member 'UChatLogWindowList_C::ChatLogFilterCommunication_1' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, ChatLogFilterItem_0) == 0x0002E8, "Member 'UChatLogWindowList_C::ChatLogFilterItem_0' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, ChatLogFilterItem_1) == 0x0002F0, "Member 'UChatLogWindowList_C::ChatLogFilterItem_1' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, ChatLogFilterItem_2) == 0x0002F8, "Member 'UChatLogWindowList_C::ChatLogFilterItem_2' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, ChatLogFilterItem_3) == 0x000300, "Member 'UChatLogWindowList_C::ChatLogFilterItem_3' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, ChatLogFilterItem_4) == 0x000308, "Member 'UChatLogWindowList_C::ChatLogFilterItem_4' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, ChatLogFilterSystem_0) == 0x000310, "Member 'UChatLogWindowList_C::ChatLogFilterSystem_0' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, ChatLogFilterSystem_1) == 0x000318, "Member 'UChatLogWindowList_C::ChatLogFilterSystem_1' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, ChatLogFilterSystem_2) == 0x000320, "Member 'UChatLogWindowList_C::ChatLogFilterSystem_2' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, CmnClose02) == 0x000328, "Member 'UChatLogWindowList_C::CmnClose02' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, FilterBg1) == 0x000330, "Member 'UChatLogWindowList_C::FilterBg1' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, FilterButton) == 0x000338, "Member 'UChatLogWindowList_C::FilterButton' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, FilterClose) == 0x000340, "Member 'UChatLogWindowList_C::FilterClose' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, FilterGridPanel) == 0x000348, "Member 'UChatLogWindowList_C::FilterGridPanel' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, FilterGrp) == 0x000350, "Member 'UChatLogWindowList_C::FilterGrp' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, Image) == 0x000358, "Member 'UChatLogWindowList_C::Image' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, Image_1) == 0x000360, "Member 'UChatLogWindowList_C::Image_1' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, Image_4) == 0x000368, "Member 'UChatLogWindowList_C::Image_4' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, LogListView) == 0x000370, "Member 'UChatLogWindowList_C::LogListView' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, MainButtonText) == 0x000378, "Member 'UChatLogWindowList_C::MainButtonText' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, MainButtonText_1) == 0x000380, "Member 'UChatLogWindowList_C::MainButtonText_1' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, MainButtonText_2) == 0x000388, "Member 'UChatLogWindowList_C::MainButtonText_2' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, MainTabButton) == 0x000390, "Member 'UChatLogWindowList_C::MainTabButton' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, MainTabButton_1) == 0x000398, "Member 'UChatLogWindowList_C::MainTabButton_1' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, MainTabButton_2) == 0x0003A0, "Member 'UChatLogWindowList_C::MainTabButton_2' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, SBRuntimeTextBlock) == 0x0003A8, "Member 'UChatLogWindowList_C::SBRuntimeTextBlock' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, SBRuntimeTextBlock_0) == 0x0003B0, "Member 'UChatLogWindowList_C::SBRuntimeTextBlock_0' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, SBRuntimeTextBlock_3) == 0x0003B8, "Member 'UChatLogWindowList_C::SBRuntimeTextBlock_3' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, SizeBox_0) == 0x0003C0, "Member 'UChatLogWindowList_C::SizeBox_0' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, Switcher_BtnCloses) == 0x0003C8, "Member 'UChatLogWindowList_C::Switcher_BtnCloses' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, Switcher_BtnWindow) == 0x0003D0, "Member 'UChatLogWindowList_C::Switcher_BtnWindow' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, SwitchMainTab) == 0x0003D8, "Member 'UChatLogWindowList_C::SwitchMainTab' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, SwitchSubTab_1) == 0x0003E0, "Member 'UChatLogWindowList_C::SwitchSubTab_1' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, SwitchSubTab_2) == 0x0003E8, "Member 'UChatLogWindowList_C::SwitchSubTab_2' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, TxtChildMain) == 0x0003F0, "Member 'UChatLogWindowList_C::TxtChildMain' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, UnreadGrp) == 0x0003F8, "Member 'UChatLogWindowList_C::UnreadGrp' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, FilterType) == 0x000400, "Member 'UChatLogWindowList_C::FilterType' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, DetailFilterType) == 0x000404, "Member 'UChatLogWindowList_C::DetailFilterType' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, TabType) == 0x000408, "Member 'UChatLogWindowList_C::TabType' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, FilterListVisible) == 0x000409, "Member 'UChatLogWindowList_C::FilterListVisible' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, ChatLogWindowWidget) == 0x000410, "Member 'UChatLogWindowList_C::ChatLogWindowWidget' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, OnChatLogWindowAddRequest) == 0x000418, "Member 'UChatLogWindowList_C::OnChatLogWindowAddRequest' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, OnChatLogWindowCloseRequest) == 0x000428, "Member 'UChatLogWindowList_C::OnChatLogWindowCloseRequest' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, ChatLogSlot) == 0x000438, "Member 'UChatLogWindowList_C::ChatLogSlot' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, OnChangeFilterType) == 0x000440, "Member 'UChatLogWindowList_C::OnChangeFilterType' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, IsVisibility) == 0x000450, "Member 'UChatLogWindowList_C::IsVisibility' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, OnChatLogTabAddRequest) == 0x000458, "Member 'UChatLogWindowList_C::OnChatLogTabAddRequest' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, OnChatLogTabCloseRequest) == 0x000468, "Member 'UChatLogWindowList_C::OnChatLogTabCloseRequest' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, OnChangeTab) == 0x000478, "Member 'UChatLogWindowList_C::OnChangeTab' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, IsUnreadWidget) == 0x000488, "Member 'UChatLogWindowList_C::IsUnreadWidget' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, IsUnreadClear) == 0x000489, "Member 'UChatLogWindowList_C::IsUnreadClear' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, OnChangeChatUnreadNotify) == 0x000490, "Member 'UChatLogWindowList_C::OnChangeChatUnreadNotify' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, OnChangeUnreadVisible) == 0x0004A0, "Member 'UChatLogWindowList_C::OnChangeUnreadVisible' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, IsCreateMessage) == 0x0004B0, "Member 'UChatLogWindowList_C::IsCreateMessage' has a wrong offset!");
static_assert(offsetof(UChatLogWindowList_C, IsChatUnreadNotify) == 0x0004B1, "Member 'UChatLogWindowList_C::IsChatUnreadNotify' has a wrong offset!");

}

