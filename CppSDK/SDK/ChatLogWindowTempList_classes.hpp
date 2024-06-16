#pragma once

 

// Package: ChatLogWindowTempList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ChatLogWindowTempList.ChatLogWindowTempList_C
// 0x0048 (0x02C0 - 0x0278)
class UChatLogWindowTempList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimUnread;                                        // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UListView*                              LogView;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_0;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 UnreadIcon;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         PopTime;                                           // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bVisibility;                                       // 0x02B4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_746F[0x3];                                     // 0x02B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         FilterType;                                        // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsPop;                                            // 0x02BC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bUnreadVisible;                                    // 0x02BD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ChatLogWindowTempList(int32 EntryPoint);
	void OnLogWindowTempVisibleDelegate_Event();
	void Destruct();
	void BndEvt__LogView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature(class UUserWidget* Widget);
	void OnPopTimeEnd();
	void OnUpdateFilterType(int32 InType);
	void OnCreateMessage_Event(const struct FSBChatUIMessage& InMess, bool bRecieve);
	void Construct();
	void ShowWindow();
	void HideWindow();
	void SetEditMode(bool InEdit);
	void GetWindowSize(struct FVector2D* RetSize);
	void SetWindowSize(const struct FVector2D& InSize);
	void ClearLogList();
	void CreateMessageEntry(const struct FSBChatUIMessage& InMess, bool bRecieve);
	void SetVisible(bool Param_IsVisible);
	void IsVisibleChat(const struct FSBChatUIMessage& InChatMessage, bool* Param_IsVisible);
	void SetUnreadIconVisible(bool Param_IsVisible);
	void UpdatePopTime();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChatLogWindowTempList_C">();
	}
	static class UChatLogWindowTempList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChatLogWindowTempList_C>();
	}
};
static_assert(alignof(UChatLogWindowTempList_C) == 0x000008, "Wrong alignment on UChatLogWindowTempList_C");
static_assert(sizeof(UChatLogWindowTempList_C) == 0x0002C0, "Wrong size on UChatLogWindowTempList_C");
static_assert(offsetof(UChatLogWindowTempList_C, UberGraphFrame) == 0x000278, "Member 'UChatLogWindowTempList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UChatLogWindowTempList_C, AnimUnread) == 0x000280, "Member 'UChatLogWindowTempList_C::AnimUnread' has a wrong offset!");
static_assert(offsetof(UChatLogWindowTempList_C, AnimOut) == 0x000288, "Member 'UChatLogWindowTempList_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UChatLogWindowTempList_C, AnimIn) == 0x000290, "Member 'UChatLogWindowTempList_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UChatLogWindowTempList_C, LogView) == 0x000298, "Member 'UChatLogWindowTempList_C::LogView' has a wrong offset!");
static_assert(offsetof(UChatLogWindowTempList_C, SizeBox_0) == 0x0002A0, "Member 'UChatLogWindowTempList_C::SizeBox_0' has a wrong offset!");
static_assert(offsetof(UChatLogWindowTempList_C, UnreadIcon) == 0x0002A8, "Member 'UChatLogWindowTempList_C::UnreadIcon' has a wrong offset!");
static_assert(offsetof(UChatLogWindowTempList_C, PopTime) == 0x0002B0, "Member 'UChatLogWindowTempList_C::PopTime' has a wrong offset!");
static_assert(offsetof(UChatLogWindowTempList_C, bVisibility) == 0x0002B4, "Member 'UChatLogWindowTempList_C::bVisibility' has a wrong offset!");
static_assert(offsetof(UChatLogWindowTempList_C, FilterType) == 0x0002B8, "Member 'UChatLogWindowTempList_C::FilterType' has a wrong offset!");
static_assert(offsetof(UChatLogWindowTempList_C, bIsPop) == 0x0002BC, "Member 'UChatLogWindowTempList_C::bIsPop' has a wrong offset!");
static_assert(offsetof(UChatLogWindowTempList_C, bUnreadVisible) == 0x0002BD, "Member 'UChatLogWindowTempList_C::bUnreadVisible' has a wrong offset!");

}

