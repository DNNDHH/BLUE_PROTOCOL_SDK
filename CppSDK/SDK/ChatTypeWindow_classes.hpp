#pragma once

 

// Package: ChatTypeWindow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "E_ChatWindowChatType_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ChatTypeWindow.ChatTypeWindow_C
// 0x0078 (0x02F0 - 0x0278)
class UChatTypeWindow_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Bg1;                                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  Button_Hit;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChatWindowTypeItem_C*                  ChatWindowTypeItem1;                               // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChatWindowTypeItem_C*                  ChatWindowTypeItem2;                               // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChatWindowTypeItem_C*                  ChatWindowTypeItem3;                               // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChatWindowTypeItem_C*                  ChatWindowTypeItem4;                               // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           TypeListGrp;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_Direct;                                // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             EventTypeSelected;                                 // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bVisible;                                          // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bTalkModeRestrictive;                              // 0x02E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_499D[0x2];                                     // 0x02E2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              Position;                                          // 0x02E4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	E_ChatWindowChatType                          CurrentChatWindowType;                             // 0x02EC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void EventTypeSelected__DelegateSignature(ESBChatLogType SelectedType);
	void ExecuteUbergraph_ChatTypeWindow(int32 EntryPoint);
	void BndEvt__ChatTypeWindow_Button_Hit_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void OnPressCancel();
	void OnClickedDirectChatItem(class UChatWindowTypeItem_C* TypeItem);
	void OnAnimationFinished______0();
	void BndEvt__ChatWindowTypeItem4_K2Node_ComponentBoundEvent_16_EventBtnClicked__DelegateSignature(class UChatWindowTypeItem_C* TypeItem);
	void BndEvt__ChatWindowTypeItem3_K2Node_ComponentBoundEvent_13_EventBtnClicked__DelegateSignature(class UChatWindowTypeItem_C* TypeItem);
	void BndEvt__ChatWindowTypeItem2_K2Node_ComponentBoundEvent_11_EventBtnClicked__DelegateSignature(class UChatWindowTypeItem_C* TypeItem);
	void BndEvt__ChatWindowTypeItem1_K2Node_ComponentBoundEvent_8_EventBtnClicked__DelegateSignature(class UChatWindowTypeItem_C* TypeItem);
	void Construct();
	void ShowWindow();
	void HideWindow();
	void EndChat();
	void IsEndAnimOut(bool* IsEnd);
	void InitDirectChatItem();

	void CalcPosition(struct FVector2D* Param_Position) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChatTypeWindow_C">();
	}
	static class UChatTypeWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChatTypeWindow_C>();
	}
};
static_assert(alignof(UChatTypeWindow_C) == 0x000008, "Wrong alignment on UChatTypeWindow_C");
static_assert(sizeof(UChatTypeWindow_C) == 0x0002F0, "Wrong size on UChatTypeWindow_C");
static_assert(offsetof(UChatTypeWindow_C, UberGraphFrame) == 0x000278, "Member 'UChatTypeWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UChatTypeWindow_C, AnimOut) == 0x000280, "Member 'UChatTypeWindow_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UChatTypeWindow_C, AnimIn) == 0x000288, "Member 'UChatTypeWindow_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UChatTypeWindow_C, Bg1) == 0x000290, "Member 'UChatTypeWindow_C::Bg1' has a wrong offset!");
static_assert(offsetof(UChatTypeWindow_C, Button_Hit) == 0x000298, "Member 'UChatTypeWindow_C::Button_Hit' has a wrong offset!");
static_assert(offsetof(UChatTypeWindow_C, ChatWindowTypeItem1) == 0x0002A0, "Member 'UChatTypeWindow_C::ChatWindowTypeItem1' has a wrong offset!");
static_assert(offsetof(UChatTypeWindow_C, ChatWindowTypeItem2) == 0x0002A8, "Member 'UChatTypeWindow_C::ChatWindowTypeItem2' has a wrong offset!");
static_assert(offsetof(UChatTypeWindow_C, ChatWindowTypeItem3) == 0x0002B0, "Member 'UChatTypeWindow_C::ChatWindowTypeItem3' has a wrong offset!");
static_assert(offsetof(UChatTypeWindow_C, ChatWindowTypeItem4) == 0x0002B8, "Member 'UChatTypeWindow_C::ChatWindowTypeItem4' has a wrong offset!");
static_assert(offsetof(UChatTypeWindow_C, TypeListGrp) == 0x0002C0, "Member 'UChatTypeWindow_C::TypeListGrp' has a wrong offset!");
static_assert(offsetof(UChatTypeWindow_C, VerticalBox_Direct) == 0x0002C8, "Member 'UChatTypeWindow_C::VerticalBox_Direct' has a wrong offset!");
static_assert(offsetof(UChatTypeWindow_C, EventTypeSelected) == 0x0002D0, "Member 'UChatTypeWindow_C::EventTypeSelected' has a wrong offset!");
static_assert(offsetof(UChatTypeWindow_C, bVisible) == 0x0002E0, "Member 'UChatTypeWindow_C::bVisible' has a wrong offset!");
static_assert(offsetof(UChatTypeWindow_C, bTalkModeRestrictive) == 0x0002E1, "Member 'UChatTypeWindow_C::bTalkModeRestrictive' has a wrong offset!");
static_assert(offsetof(UChatTypeWindow_C, Position) == 0x0002E4, "Member 'UChatTypeWindow_C::Position' has a wrong offset!");
static_assert(offsetof(UChatTypeWindow_C, CurrentChatWindowType) == 0x0002EC, "Member 'UChatTypeWindow_C::CurrentChatWindowType' has a wrong offset!");

}

