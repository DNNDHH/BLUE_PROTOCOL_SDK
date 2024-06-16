#pragma once

 

// Package: ChatLogMyMessage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ChatLogMyMessage.ChatLogMyMessage_C
// 0x0110 (0x0388 - 0x0278)
class UChatLogMyMessage_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_StampLog;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Stamp;                                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCaptureImageChat_C*                    CaptureImageChat;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChatLogDeadIcon_C*                     ChatLogDeadIcon;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChatLogIcon1_C*                        ChatLogIcon1;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           FloatStampPoint;                                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MessageBG;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               MessageOverlay;                                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MessageShadow;                                     // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MessageTextBlock;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             NameTextBox;                                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButtonMessageBG;                                 // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_0;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              StampScaleBox;                                     // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStampWidget_C*                         StampWidget;                                       // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_79;                                    // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSBChatUIMessage                       MessageLog;                                        // 0x0300(0x0070)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         StampSize;                                         // 0x0370(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_6FAA[0x4];                                     // 0x0374(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UChatLogFloatStampIcon_C*               StampWidgetRef;                                    // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bMessageHover;                                     // 0x0380(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bClipboardCopy;                                    // 0x0381(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ChatLogMyMessage(int32 EntryPoint);
	void SetWidthOverride();
	void BndEvt__SBButtonMessageBG_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SBButtonMessageBG_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void ClipboardCopy();
	void BndEvt__Button_StampLog_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_82_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void Destruct();
	void OnTimeEvent();
	void DonwloadFaceImage_Event(const class FString& URL);
	void Init(const struct FSBChatUIMessage& InMessLog, bool IsEndInit, bool IsCursorStampHit);
	void ZeroPadding(int32 InValue, class FText* RetValue);
	void SetStamp(int32 InStampId, bool IsEndInit, const class FText& InText);
	void GetFloatStampPoint(struct FVector2D* NewParam);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void SetClipboardCopy(bool IsCopy);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChatLogMyMessage_C">();
	}
	static class UChatLogMyMessage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChatLogMyMessage_C>();
	}
};
static_assert(alignof(UChatLogMyMessage_C) == 0x000008, "Wrong alignment on UChatLogMyMessage_C");
static_assert(sizeof(UChatLogMyMessage_C) == 0x000388, "Wrong size on UChatLogMyMessage_C");
static_assert(offsetof(UChatLogMyMessage_C, UberGraphFrame) == 0x000278, "Member 'UChatLogMyMessage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UChatLogMyMessage_C, Button_StampLog) == 0x000280, "Member 'UChatLogMyMessage_C::Button_StampLog' has a wrong offset!");
static_assert(offsetof(UChatLogMyMessage_C, CanvasPanel_Stamp) == 0x000288, "Member 'UChatLogMyMessage_C::CanvasPanel_Stamp' has a wrong offset!");
static_assert(offsetof(UChatLogMyMessage_C, CaptureImageChat) == 0x000290, "Member 'UChatLogMyMessage_C::CaptureImageChat' has a wrong offset!");
static_assert(offsetof(UChatLogMyMessage_C, ChatLogDeadIcon) == 0x000298, "Member 'UChatLogMyMessage_C::ChatLogDeadIcon' has a wrong offset!");
static_assert(offsetof(UChatLogMyMessage_C, ChatLogIcon1) == 0x0002A0, "Member 'UChatLogMyMessage_C::ChatLogIcon1' has a wrong offset!");
static_assert(offsetof(UChatLogMyMessage_C, FloatStampPoint) == 0x0002A8, "Member 'UChatLogMyMessage_C::FloatStampPoint' has a wrong offset!");
static_assert(offsetof(UChatLogMyMessage_C, MessageBG) == 0x0002B0, "Member 'UChatLogMyMessage_C::MessageBG' has a wrong offset!");
static_assert(offsetof(UChatLogMyMessage_C, MessageOverlay) == 0x0002B8, "Member 'UChatLogMyMessage_C::MessageOverlay' has a wrong offset!");
static_assert(offsetof(UChatLogMyMessage_C, MessageShadow) == 0x0002C0, "Member 'UChatLogMyMessage_C::MessageShadow' has a wrong offset!");
static_assert(offsetof(UChatLogMyMessage_C, MessageTextBlock) == 0x0002C8, "Member 'UChatLogMyMessage_C::MessageTextBlock' has a wrong offset!");
static_assert(offsetof(UChatLogMyMessage_C, NameTextBox) == 0x0002D0, "Member 'UChatLogMyMessage_C::NameTextBox' has a wrong offset!");
static_assert(offsetof(UChatLogMyMessage_C, SBButtonMessageBG) == 0x0002D8, "Member 'UChatLogMyMessage_C::SBButtonMessageBG' has a wrong offset!");
static_assert(offsetof(UChatLogMyMessage_C, SizeBox_0) == 0x0002E0, "Member 'UChatLogMyMessage_C::SizeBox_0' has a wrong offset!");
static_assert(offsetof(UChatLogMyMessage_C, StampScaleBox) == 0x0002E8, "Member 'UChatLogMyMessage_C::StampScaleBox' has a wrong offset!");
static_assert(offsetof(UChatLogMyMessage_C, StampWidget) == 0x0002F0, "Member 'UChatLogMyMessage_C::StampWidget' has a wrong offset!");
static_assert(offsetof(UChatLogMyMessage_C, VerticalBox_79) == 0x0002F8, "Member 'UChatLogMyMessage_C::VerticalBox_79' has a wrong offset!");
static_assert(offsetof(UChatLogMyMessage_C, MessageLog) == 0x000300, "Member 'UChatLogMyMessage_C::MessageLog' has a wrong offset!");
static_assert(offsetof(UChatLogMyMessage_C, StampSize) == 0x000370, "Member 'UChatLogMyMessage_C::StampSize' has a wrong offset!");
static_assert(offsetof(UChatLogMyMessage_C, StampWidgetRef) == 0x000378, "Member 'UChatLogMyMessage_C::StampWidgetRef' has a wrong offset!");
static_assert(offsetof(UChatLogMyMessage_C, bMessageHover) == 0x000380, "Member 'UChatLogMyMessage_C::bMessageHover' has a wrong offset!");
static_assert(offsetof(UChatLogMyMessage_C, bClipboardCopy) == 0x000381, "Member 'UChatLogMyMessage_C::bClipboardCopy' has a wrong offset!");

}

