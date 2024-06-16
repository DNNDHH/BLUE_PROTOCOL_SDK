#pragma once

 

// Package: ChatUnreadNotify

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ChatUnreadNotify.ChatUnreadNotify_C
// 0x0068 (0x0318 - 0x02B0)
class UChatUnreadNotify_C final : public USBChatLogWindow
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimInOut;                                         // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCaptureImageChatUnread_C*              CaptureImageChatUnread;                            // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChatLogIcon1_C*                        ChatLogIcon1;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MessageBG;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Message;                                   // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStampWidget_C*                         StampWidget;                                       // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtMessage;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_178;                                // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         Filter_Type;                                       // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Detail_Filter_Type;                                // 0x02FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAnimDelay;                                        // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F5B[0x3];                                     // 0x0301(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         EllipsisWidthSize;                                 // 0x0304(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_Chat_Unread_Notify;                             // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsReceiveMessageDelegate;                          // 0x0309(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_4F5C[0x2];                                     // 0x030A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MainLogSelectTab;                                  // 0x030C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEnableSub1;                                      // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsEnableSub2;                                      // 0x0311(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ChatUnreadNotify(int32 EntryPoint);
	void OnReceiveMessageDelegate_Event(const class USBChatMessage* Message, const struct FSBChatUIMessage& Mess);
	void OnReciveMessageToUnreadNotify_Event(const ESBChatLogWindowSlot Param_Slot, const struct FSBChatUIMessage& UIMessage);
	void Destruct();
	void PlayAnim();
	void WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_0();
	void DownLoadFaceImage_Event(const class FString& URL);
	void Construct();
	void SetMessage(const struct FSBChatUIMessage& InChatUIMessage);
	void UpdateFilter(ESBChatLogWindowSlot Param_Slot);
	void VisibleCheck(const struct FSBChatUIMessage& ChatUIMessage, bool* bResult);
	void SetTextOverflowEllipsis(const class FString& InStr);
	void CheckMessageWidth(const class FString& InString, bool IsEllipsisWidthSize, bool* Exceeded);
	void InitChatLogData();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChatUnreadNotify_C">();
	}
	static class UChatUnreadNotify_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChatUnreadNotify_C>();
	}
};
static_assert(alignof(UChatUnreadNotify_C) == 0x000008, "Wrong alignment on UChatUnreadNotify_C");
static_assert(sizeof(UChatUnreadNotify_C) == 0x000318, "Wrong size on UChatUnreadNotify_C");
static_assert(offsetof(UChatUnreadNotify_C, UberGraphFrame) == 0x0002B0, "Member 'UChatUnreadNotify_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UChatUnreadNotify_C, AnimInOut) == 0x0002B8, "Member 'UChatUnreadNotify_C::AnimInOut' has a wrong offset!");
static_assert(offsetof(UChatUnreadNotify_C, CaptureImageChatUnread) == 0x0002C0, "Member 'UChatUnreadNotify_C::CaptureImageChatUnread' has a wrong offset!");
static_assert(offsetof(UChatUnreadNotify_C, ChatLogIcon1) == 0x0002C8, "Member 'UChatUnreadNotify_C::ChatLogIcon1' has a wrong offset!");
static_assert(offsetof(UChatUnreadNotify_C, MessageBG) == 0x0002D0, "Member 'UChatUnreadNotify_C::MessageBG' has a wrong offset!");
static_assert(offsetof(UChatUnreadNotify_C, SizeBox_Message) == 0x0002D8, "Member 'UChatUnreadNotify_C::SizeBox_Message' has a wrong offset!");
static_assert(offsetof(UChatUnreadNotify_C, StampWidget) == 0x0002E0, "Member 'UChatUnreadNotify_C::StampWidget' has a wrong offset!");
static_assert(offsetof(UChatUnreadNotify_C, TxtMessage) == 0x0002E8, "Member 'UChatUnreadNotify_C::TxtMessage' has a wrong offset!");
static_assert(offsetof(UChatUnreadNotify_C, WidgetSwitcher_178) == 0x0002F0, "Member 'UChatUnreadNotify_C::WidgetSwitcher_178' has a wrong offset!");
static_assert(offsetof(UChatUnreadNotify_C, Filter_Type) == 0x0002F8, "Member 'UChatUnreadNotify_C::Filter_Type' has a wrong offset!");
static_assert(offsetof(UChatUnreadNotify_C, Detail_Filter_Type) == 0x0002FC, "Member 'UChatUnreadNotify_C::Detail_Filter_Type' has a wrong offset!");
static_assert(offsetof(UChatUnreadNotify_C, bAnimDelay) == 0x000300, "Member 'UChatUnreadNotify_C::bAnimDelay' has a wrong offset!");
static_assert(offsetof(UChatUnreadNotify_C, EllipsisWidthSize) == 0x000304, "Member 'UChatUnreadNotify_C::EllipsisWidthSize' has a wrong offset!");
static_assert(offsetof(UChatUnreadNotify_C, Is_Chat_Unread_Notify) == 0x000308, "Member 'UChatUnreadNotify_C::Is_Chat_Unread_Notify' has a wrong offset!");
static_assert(offsetof(UChatUnreadNotify_C, IsReceiveMessageDelegate) == 0x000309, "Member 'UChatUnreadNotify_C::IsReceiveMessageDelegate' has a wrong offset!");
static_assert(offsetof(UChatUnreadNotify_C, MainLogSelectTab) == 0x00030C, "Member 'UChatUnreadNotify_C::MainLogSelectTab' has a wrong offset!");
static_assert(offsetof(UChatUnreadNotify_C, IsEnableSub1) == 0x000310, "Member 'UChatUnreadNotify_C::IsEnableSub1' has a wrong offset!");
static_assert(offsetof(UChatUnreadNotify_C, IsEnableSub2) == 0x000311, "Member 'UChatUnreadNotify_C::IsEnableSub2' has a wrong offset!");

}

