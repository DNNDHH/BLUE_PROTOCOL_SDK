#pragma once

 

// Package: ChatLogOtherPlayerMessage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C
// 0x0138 (0x03B0 - 0x0278)
class UChatLogOtherPlayerMessage_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_StampLog;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Stamp;                                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCaptureImageChat_C*                    CaptureImageChat;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChatLogDeadIcon_C*                     ChatLogDeadIcon;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChatLogIcon1_C*                        ChatLogIcon1;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            FaceImageButton;                                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           FloatStampPoint;                                   // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MessageBG;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               MessageOverlay;                                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MessageShadow;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MessageTextBlock;                                  // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             NameTextBox;                                       // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButtonMessageBG;                                 // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_0;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              StampScaleBox;                                     // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStampWidget_C*                         StampWidget;                                       // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_295;                                   // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSBChatUIMessage                       MessageLog;                                        // 0x0308(0x0070)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnClickedDirectMessage;                            // 0x0378(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                         StampSize;                                         // 0x0388(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_6F87[0x4];                                     // 0x038C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UChatLogFloatStampIcon_C*               StampWidgetRef;                                    // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bMessageHover;                                     // 0x0398(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F88[0x7];                                     // 0x0399(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayerProfile_C*                       PlayerProfile;                                     // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bOpenPlayerProfile;                                // 0x03A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bClipboardCopy;                                    // 0x03A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnClickedDirectMessage__DelegateSignature(const class FString& TagertPlayerId, const class FText& TagertName, const class FString& CharacterId, ESBPrivilegeType PrivilegeType);
	void ExecuteUbergraph_ChatLogOtherPlayerMessage(int32 EntryPoint);
	void SetWidthOverride();
	void OnClose_Event();
	void OnGetPlayerProfile(const bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, const int32 RetCode);
	void Destruct();
	void ClipboardCopy();
	void BndEvt__SBButtonMessageBG_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SBButtonMessageBG_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_StampLog_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_82_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void OnTimeEvent();
	void DonwloadFaceImage_Event(const class FString& URL);
	void BndEvt__FaceImageButton_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature();
	void Init(const struct FSBChatUIMessage& InMessLog, bool IsEndInit, bool IsCursorStampHit);
	void ZeroPadding(int32 InValue, class FText* RetValue);
	void SetStamp(int32 InStampId, bool IsEndInit);
	void GetFloatStampPoint(struct FVector2D* NewParam);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void SetClipboardCopy(bool IsCopy);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChatLogOtherPlayerMessage_C">();
	}
	static class UChatLogOtherPlayerMessage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChatLogOtherPlayerMessage_C>();
	}
};
static_assert(alignof(UChatLogOtherPlayerMessage_C) == 0x000008, "Wrong alignment on UChatLogOtherPlayerMessage_C");
static_assert(sizeof(UChatLogOtherPlayerMessage_C) == 0x0003B0, "Wrong size on UChatLogOtherPlayerMessage_C");
static_assert(offsetof(UChatLogOtherPlayerMessage_C, UberGraphFrame) == 0x000278, "Member 'UChatLogOtherPlayerMessage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UChatLogOtherPlayerMessage_C, Button_StampLog) == 0x000280, "Member 'UChatLogOtherPlayerMessage_C::Button_StampLog' has a wrong offset!");
static_assert(offsetof(UChatLogOtherPlayerMessage_C, CanvasPanel_Stamp) == 0x000288, "Member 'UChatLogOtherPlayerMessage_C::CanvasPanel_Stamp' has a wrong offset!");
static_assert(offsetof(UChatLogOtherPlayerMessage_C, CaptureImageChat) == 0x000290, "Member 'UChatLogOtherPlayerMessage_C::CaptureImageChat' has a wrong offset!");
static_assert(offsetof(UChatLogOtherPlayerMessage_C, ChatLogDeadIcon) == 0x000298, "Member 'UChatLogOtherPlayerMessage_C::ChatLogDeadIcon' has a wrong offset!");
static_assert(offsetof(UChatLogOtherPlayerMessage_C, ChatLogIcon1) == 0x0002A0, "Member 'UChatLogOtherPlayerMessage_C::ChatLogIcon1' has a wrong offset!");
static_assert(offsetof(UChatLogOtherPlayerMessage_C, FaceImageButton) == 0x0002A8, "Member 'UChatLogOtherPlayerMessage_C::FaceImageButton' has a wrong offset!");
static_assert(offsetof(UChatLogOtherPlayerMessage_C, FloatStampPoint) == 0x0002B0, "Member 'UChatLogOtherPlayerMessage_C::FloatStampPoint' has a wrong offset!");
static_assert(offsetof(UChatLogOtherPlayerMessage_C, MessageBG) == 0x0002B8, "Member 'UChatLogOtherPlayerMessage_C::MessageBG' has a wrong offset!");
static_assert(offsetof(UChatLogOtherPlayerMessage_C, MessageOverlay) == 0x0002C0, "Member 'UChatLogOtherPlayerMessage_C::MessageOverlay' has a wrong offset!");
static_assert(offsetof(UChatLogOtherPlayerMessage_C, MessageShadow) == 0x0002C8, "Member 'UChatLogOtherPlayerMessage_C::MessageShadow' has a wrong offset!");
static_assert(offsetof(UChatLogOtherPlayerMessage_C, MessageTextBlock) == 0x0002D0, "Member 'UChatLogOtherPlayerMessage_C::MessageTextBlock' has a wrong offset!");
static_assert(offsetof(UChatLogOtherPlayerMessage_C, NameTextBox) == 0x0002D8, "Member 'UChatLogOtherPlayerMessage_C::NameTextBox' has a wrong offset!");
static_assert(offsetof(UChatLogOtherPlayerMessage_C, SBButtonMessageBG) == 0x0002E0, "Member 'UChatLogOtherPlayerMessage_C::SBButtonMessageBG' has a wrong offset!");
static_assert(offsetof(UChatLogOtherPlayerMessage_C, SizeBox_0) == 0x0002E8, "Member 'UChatLogOtherPlayerMessage_C::SizeBox_0' has a wrong offset!");
static_assert(offsetof(UChatLogOtherPlayerMessage_C, StampScaleBox) == 0x0002F0, "Member 'UChatLogOtherPlayerMessage_C::StampScaleBox' has a wrong offset!");
static_assert(offsetof(UChatLogOtherPlayerMessage_C, StampWidget) == 0x0002F8, "Member 'UChatLogOtherPlayerMessage_C::StampWidget' has a wrong offset!");
static_assert(offsetof(UChatLogOtherPlayerMessage_C, VerticalBox_295) == 0x000300, "Member 'UChatLogOtherPlayerMessage_C::VerticalBox_295' has a wrong offset!");
static_assert(offsetof(UChatLogOtherPlayerMessage_C, MessageLog) == 0x000308, "Member 'UChatLogOtherPlayerMessage_C::MessageLog' has a wrong offset!");
static_assert(offsetof(UChatLogOtherPlayerMessage_C, OnClickedDirectMessage) == 0x000378, "Member 'UChatLogOtherPlayerMessage_C::OnClickedDirectMessage' has a wrong offset!");
static_assert(offsetof(UChatLogOtherPlayerMessage_C, StampSize) == 0x000388, "Member 'UChatLogOtherPlayerMessage_C::StampSize' has a wrong offset!");
static_assert(offsetof(UChatLogOtherPlayerMessage_C, StampWidgetRef) == 0x000390, "Member 'UChatLogOtherPlayerMessage_C::StampWidgetRef' has a wrong offset!");
static_assert(offsetof(UChatLogOtherPlayerMessage_C, bMessageHover) == 0x000398, "Member 'UChatLogOtherPlayerMessage_C::bMessageHover' has a wrong offset!");
static_assert(offsetof(UChatLogOtherPlayerMessage_C, PlayerProfile) == 0x0003A0, "Member 'UChatLogOtherPlayerMessage_C::PlayerProfile' has a wrong offset!");
static_assert(offsetof(UChatLogOtherPlayerMessage_C, bOpenPlayerProfile) == 0x0003A8, "Member 'UChatLogOtherPlayerMessage_C::bOpenPlayerProfile' has a wrong offset!");
static_assert(offsetof(UChatLogOtherPlayerMessage_C, bClipboardCopy) == 0x0003A9, "Member 'UChatLogOtherPlayerMessage_C::bClipboardCopy' has a wrong offset!");

}

