#pragma once

 

// Package: ChatWindowTypeItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ChatWindowTypeItem.ChatWindowTypeItem_C
// 0x00C0 (0x0338 - 0x0278)
class UChatWindowTypeItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Arrow;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bg1;                                               // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bg1_1;                                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn1;                                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn1_1;                                            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchLengthType;                                  // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchType;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt1;                                              // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt1_1;                                            // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt2;                                              // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               TypeWindowPointer;                                 // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               TypeWindowPointer_1;                               // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ESBChatLogType                                InChatLogType;                                     // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_4809[0x7];                                     // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             EventBtnClicked;                                   // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bArrow;                                            // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_480A[0x7];                                     // 0x02F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBDirectChatSenderLogData             SenderLogData;                                     // 0x0300(0x0038)(Edit, BlueprintVisible)

public:
	void EventBtnClicked__DelegateSignature(class UChatWindowTypeItem_C* TypeItem);
	void ExecuteUbergraph_ChatWindowTypeItem(int32 EntryPoint);
	void BndEvt__ChatWindowTypeItem_Btn1_1_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__ChatWindowTypeItem_Btn1_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void SetType(ESBChatLogType Param_InChatLogType);
	void SetDirectChatData(const struct FSBDirectChatSenderLogData& InSenderData);

	void GetTypeWindowPosition(struct FVector2D* Position) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChatWindowTypeItem_C">();
	}
	static class UChatWindowTypeItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChatWindowTypeItem_C>();
	}
};
static_assert(alignof(UChatWindowTypeItem_C) == 0x000008, "Wrong alignment on UChatWindowTypeItem_C");
static_assert(sizeof(UChatWindowTypeItem_C) == 0x000338, "Wrong size on UChatWindowTypeItem_C");
static_assert(offsetof(UChatWindowTypeItem_C, UberGraphFrame) == 0x000278, "Member 'UChatWindowTypeItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UChatWindowTypeItem_C, Arrow) == 0x000280, "Member 'UChatWindowTypeItem_C::Arrow' has a wrong offset!");
static_assert(offsetof(UChatWindowTypeItem_C, Bg1) == 0x000288, "Member 'UChatWindowTypeItem_C::Bg1' has a wrong offset!");
static_assert(offsetof(UChatWindowTypeItem_C, Bg1_1) == 0x000290, "Member 'UChatWindowTypeItem_C::Bg1_1' has a wrong offset!");
static_assert(offsetof(UChatWindowTypeItem_C, Btn1) == 0x000298, "Member 'UChatWindowTypeItem_C::Btn1' has a wrong offset!");
static_assert(offsetof(UChatWindowTypeItem_C, Btn1_1) == 0x0002A0, "Member 'UChatWindowTypeItem_C::Btn1_1' has a wrong offset!");
static_assert(offsetof(UChatWindowTypeItem_C, SwitchLengthType) == 0x0002A8, "Member 'UChatWindowTypeItem_C::SwitchLengthType' has a wrong offset!");
static_assert(offsetof(UChatWindowTypeItem_C, SwitchType) == 0x0002B0, "Member 'UChatWindowTypeItem_C::SwitchType' has a wrong offset!");
static_assert(offsetof(UChatWindowTypeItem_C, Txt1) == 0x0002B8, "Member 'UChatWindowTypeItem_C::Txt1' has a wrong offset!");
static_assert(offsetof(UChatWindowTypeItem_C, Txt1_1) == 0x0002C0, "Member 'UChatWindowTypeItem_C::Txt1_1' has a wrong offset!");
static_assert(offsetof(UChatWindowTypeItem_C, Txt2) == 0x0002C8, "Member 'UChatWindowTypeItem_C::Txt2' has a wrong offset!");
static_assert(offsetof(UChatWindowTypeItem_C, TypeWindowPointer) == 0x0002D0, "Member 'UChatWindowTypeItem_C::TypeWindowPointer' has a wrong offset!");
static_assert(offsetof(UChatWindowTypeItem_C, TypeWindowPointer_1) == 0x0002D8, "Member 'UChatWindowTypeItem_C::TypeWindowPointer_1' has a wrong offset!");
static_assert(offsetof(UChatWindowTypeItem_C, InChatLogType) == 0x0002E0, "Member 'UChatWindowTypeItem_C::InChatLogType' has a wrong offset!");
static_assert(offsetof(UChatWindowTypeItem_C, EventBtnClicked) == 0x0002E8, "Member 'UChatWindowTypeItem_C::EventBtnClicked' has a wrong offset!");
static_assert(offsetof(UChatWindowTypeItem_C, bArrow) == 0x0002F8, "Member 'UChatWindowTypeItem_C::bArrow' has a wrong offset!");
static_assert(offsetof(UChatWindowTypeItem_C, SenderLogData) == 0x000300, "Member 'UChatWindowTypeItem_C::SenderLogData' has a wrong offset!");

}

