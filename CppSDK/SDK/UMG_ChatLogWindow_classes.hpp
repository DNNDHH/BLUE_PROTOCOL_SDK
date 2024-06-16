#pragma once

 

// Package: UMG_ChatLogWindow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_ChatLogWindow.UMG_ChatLogWindow_C
// 0x00B8 (0x0368 - 0x02B0)
class UUMG_ChatLogWindow_C final : public USBChatLogWindow
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChatLogWindowList_C*                   ChatLogWindowList;                                 // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnChatRoomMessaageReceived;                        // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bEditMode;                                         // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ESlateVisibility                              backupBGVisible;                                   // 0x02E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bWindowed;                                         // 0x02EA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bVisible;                                          // 0x02EB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bTabVisible;                                       // 0x02EC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ESBChatLogWindowSlot                          ChatLogSlot;                                       // 0x02ED(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49F6[0x2];                                     // 0x02EE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnChatLogWindowAddRequest;                         // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnChatLogWindowCloseRequest;                       // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bChildMode;                                        // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_49F7[0x3];                                     // 0x0311(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         FilterType;                                        // 0x0314(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DetailFilterType;                                  // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49F8[0x4];                                     // 0x031C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UChatLogWindowTempList_C*               ChatLogTempWidget;                                 // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FSBChatLogWindowStatusSave             ChatLogStatus;                                     // 0x0328(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	FMulticastInlineDelegateProperty_             OnChatLogTabAddRequest;                            // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnChatLogTabCloseRequest;                          // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FSBChatUIMessage>               LogMessageList;                                    // 0x0358(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnChatRoomMessaageReceived__DelegateSignature(class USBChatMessage* Message);
	void OnChatLogWindowAddRequest__DelegateSignature(ESBChatLogWindowSlot RequestSlot);
	void OnChatLogWindowCloseRequest__DelegateSignature(ESBChatLogWindowSlot SlotType);
	void OnChatLogTabAddRequest__DelegateSignature(ESBChatLogWindowSlot RequestSlot);
	void OnChatLogTabCloseRequest__DelegateSignature(ESBChatLogWindowSlot RequestSlot, int32 Param_FilterType, int32 Param_DetailFilterType);
	void ExecuteUbergraph_UMG_ChatLogWindow(int32 EntryPoint);
	void SetFilterType(int32 InType, int32 InFilterType);
	void OnPopTimeUpdate();
	void OnChangeUnreadVisibleEvent(bool Param_IsVisible);
	void SetWindowSize(const struct FVector2D& InSize);
	void OnChangeTab();
	void OnClickedCloseTab(ESBChatLogWindowSlot RequestSlot);
	void OnClickedAddTab();
	void OnUpdateTempLogList();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void OnUpdateFilterType(int32 InType, int32 InDetailType);
	void OnClickedCloseWindow();
	void OnClickedAddWindow();
	void Destruct();
	void OnReceiveMessageDelegate_Event(const class USBChatMessage* Message, const struct FSBChatUIMessage& Mess);
	void Construct();
	void SetWindowMode(bool bWindow);
	void SetEditMode(bool EditMode);
	void SetVisible(bool bIsVisible, bool bIsTab);
	void SetChatLogSlot(ESBChatLogWindowSlot Param_ChatLogSlot);
	void InitChildMode();
	void IsShowNewMessageIcon(const struct FSBChatUIMessage& InMess, bool* Ret);
	void RefreshLog();
	void ShowWindow();
	void HideWindow();
	void SetFullChildWindow(bool InFull);
	void Set_Tab(ESBChatLogWindowSlot InSlot, bool bAdd);
	void Next_Tab_Selection(bool bPrevious);
	void Update_Chat_Log_Status(const struct FSBChatLogWindowStatusSave& InStatus, bool IsLoad);

	void IsVisibleLog(bool* Param_IsVisible) const;
	void IsVisibleTab(bool* Param_IsVisible) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_ChatLogWindow_C">();
	}
	static class UUMG_ChatLogWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_ChatLogWindow_C>();
	}
};
static_assert(alignof(UUMG_ChatLogWindow_C) == 0x000008, "Wrong alignment on UUMG_ChatLogWindow_C");
static_assert(sizeof(UUMG_ChatLogWindow_C) == 0x000368, "Wrong size on UUMG_ChatLogWindow_C");
static_assert(offsetof(UUMG_ChatLogWindow_C, UberGraphFrame) == 0x0002B0, "Member 'UUMG_ChatLogWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_ChatLogWindow_C, AnimOut) == 0x0002B8, "Member 'UUMG_ChatLogWindow_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UUMG_ChatLogWindow_C, AnimIn) == 0x0002C0, "Member 'UUMG_ChatLogWindow_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UUMG_ChatLogWindow_C, CanvasPanel_0) == 0x0002C8, "Member 'UUMG_ChatLogWindow_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UUMG_ChatLogWindow_C, ChatLogWindowList) == 0x0002D0, "Member 'UUMG_ChatLogWindow_C::ChatLogWindowList' has a wrong offset!");
static_assert(offsetof(UUMG_ChatLogWindow_C, OnChatRoomMessaageReceived) == 0x0002D8, "Member 'UUMG_ChatLogWindow_C::OnChatRoomMessaageReceived' has a wrong offset!");
static_assert(offsetof(UUMG_ChatLogWindow_C, bEditMode) == 0x0002E8, "Member 'UUMG_ChatLogWindow_C::bEditMode' has a wrong offset!");
static_assert(offsetof(UUMG_ChatLogWindow_C, backupBGVisible) == 0x0002E9, "Member 'UUMG_ChatLogWindow_C::backupBGVisible' has a wrong offset!");
static_assert(offsetof(UUMG_ChatLogWindow_C, bWindowed) == 0x0002EA, "Member 'UUMG_ChatLogWindow_C::bWindowed' has a wrong offset!");
static_assert(offsetof(UUMG_ChatLogWindow_C, bVisible) == 0x0002EB, "Member 'UUMG_ChatLogWindow_C::bVisible' has a wrong offset!");
static_assert(offsetof(UUMG_ChatLogWindow_C, bTabVisible) == 0x0002EC, "Member 'UUMG_ChatLogWindow_C::bTabVisible' has a wrong offset!");
static_assert(offsetof(UUMG_ChatLogWindow_C, ChatLogSlot) == 0x0002ED, "Member 'UUMG_ChatLogWindow_C::ChatLogSlot' has a wrong offset!");
static_assert(offsetof(UUMG_ChatLogWindow_C, OnChatLogWindowAddRequest) == 0x0002F0, "Member 'UUMG_ChatLogWindow_C::OnChatLogWindowAddRequest' has a wrong offset!");
static_assert(offsetof(UUMG_ChatLogWindow_C, OnChatLogWindowCloseRequest) == 0x000300, "Member 'UUMG_ChatLogWindow_C::OnChatLogWindowCloseRequest' has a wrong offset!");
static_assert(offsetof(UUMG_ChatLogWindow_C, bChildMode) == 0x000310, "Member 'UUMG_ChatLogWindow_C::bChildMode' has a wrong offset!");
static_assert(offsetof(UUMG_ChatLogWindow_C, FilterType) == 0x000314, "Member 'UUMG_ChatLogWindow_C::FilterType' has a wrong offset!");
static_assert(offsetof(UUMG_ChatLogWindow_C, DetailFilterType) == 0x000318, "Member 'UUMG_ChatLogWindow_C::DetailFilterType' has a wrong offset!");
static_assert(offsetof(UUMG_ChatLogWindow_C, ChatLogTempWidget) == 0x000320, "Member 'UUMG_ChatLogWindow_C::ChatLogTempWidget' has a wrong offset!");
static_assert(offsetof(UUMG_ChatLogWindow_C, ChatLogStatus) == 0x000328, "Member 'UUMG_ChatLogWindow_C::ChatLogStatus' has a wrong offset!");
static_assert(offsetof(UUMG_ChatLogWindow_C, OnChatLogTabAddRequest) == 0x000338, "Member 'UUMG_ChatLogWindow_C::OnChatLogTabAddRequest' has a wrong offset!");
static_assert(offsetof(UUMG_ChatLogWindow_C, OnChatLogTabCloseRequest) == 0x000348, "Member 'UUMG_ChatLogWindow_C::OnChatLogTabCloseRequest' has a wrong offset!");
static_assert(offsetof(UUMG_ChatLogWindow_C, LogMessageList) == 0x000358, "Member 'UUMG_ChatLogWindow_C::LogMessageList' has a wrong offset!");

}

