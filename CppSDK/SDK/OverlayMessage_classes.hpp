#pragma once

 

// Package: OverlayMessage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass OverlayMessage.OverlayMessage_C
// 0x00A0 (0x0350 - 0x02B0)
class UOverlayMessage_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line;                                              // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    MessageText;                                       // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            NoButton;                                          // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            OKButton;                                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtNo;                                             // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtOK;                                             // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtYes;                                            // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            YesButton;                                         // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           YesNoGrp;                                          // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EDialogResult                                 Result;                                            // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C13[0x3];                                     // 0x0321(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CurrentButtonIndex;                                // 0x0324(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USBButton_C*>                    ButtonList;                                        // 0x0328(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_             OnHide;                                            // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UUIBlocker_C*                           Blocker;                                           // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnHide__DelegateSignature(EDialogResult Param_Result);
	void ExecuteUbergraph_OverlayMessage(int32 EntryPoint);
	void OnPress_Cancel();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void Destruct();
	void HideDialog();
	void Construct();
	void BndEvt__SBButton_No_K2Node_ComponentBoundEvent_676_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SBButton_No_K2Node_ComponentBoundEvent_646_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SBButton_No_K2Node_ComponentBoundEvent_612_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SBButton_C_1_K2Node_ComponentBoundEvent_492_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SBButton_C_1_K2Node_ComponentBoundEvent_465_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SBButton_C_1_K2Node_ComponentBoundEvent_434_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SBButton_Message_K2Node_ComponentBoundEvent_269_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SBButton_Message_K2Node_ComponentBoundEvent_245_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SBButton_Message_K2Node_ComponentBoundEvent_189_OnButtonClickedEvent__DelegateSignature();
	void StartYesNoDialog(const int32& InTextID);
	void StartMessageDialog(const int32& InTextID);
	void OnPress_Ok();
	void OnRepeat_Right();
	void OnRepeat_Left();
	void ChangeCurrentButton(int32 Param_Index);
	void SetResultForButton(class USBButton_C* Button);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OverlayMessage_C">();
	}
	static class UOverlayMessage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOverlayMessage_C>();
	}
};
static_assert(alignof(UOverlayMessage_C) == 0x000008, "Wrong alignment on UOverlayMessage_C");
static_assert(sizeof(UOverlayMessage_C) == 0x000350, "Wrong size on UOverlayMessage_C");
static_assert(offsetof(UOverlayMessage_C, UberGraphFrame) == 0x0002B0, "Member 'UOverlayMessage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOverlayMessage_C, AnimOut) == 0x0002B8, "Member 'UOverlayMessage_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UOverlayMessage_C, AnimIn) == 0x0002C0, "Member 'UOverlayMessage_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UOverlayMessage_C, BG) == 0x0002C8, "Member 'UOverlayMessage_C::BG' has a wrong offset!");
static_assert(offsetof(UOverlayMessage_C, Line) == 0x0002D0, "Member 'UOverlayMessage_C::Line' has a wrong offset!");
static_assert(offsetof(UOverlayMessage_C, MessageText) == 0x0002D8, "Member 'UOverlayMessage_C::MessageText' has a wrong offset!");
static_assert(offsetof(UOverlayMessage_C, NoButton) == 0x0002E0, "Member 'UOverlayMessage_C::NoButton' has a wrong offset!");
static_assert(offsetof(UOverlayMessage_C, OKButton) == 0x0002E8, "Member 'UOverlayMessage_C::OKButton' has a wrong offset!");
static_assert(offsetof(UOverlayMessage_C, TxtNo) == 0x0002F0, "Member 'UOverlayMessage_C::TxtNo' has a wrong offset!");
static_assert(offsetof(UOverlayMessage_C, TxtOK) == 0x0002F8, "Member 'UOverlayMessage_C::TxtOK' has a wrong offset!");
static_assert(offsetof(UOverlayMessage_C, TxtYes) == 0x000300, "Member 'UOverlayMessage_C::TxtYes' has a wrong offset!");
static_assert(offsetof(UOverlayMessage_C, UIBlocker) == 0x000308, "Member 'UOverlayMessage_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UOverlayMessage_C, YesButton) == 0x000310, "Member 'UOverlayMessage_C::YesButton' has a wrong offset!");
static_assert(offsetof(UOverlayMessage_C, YesNoGrp) == 0x000318, "Member 'UOverlayMessage_C::YesNoGrp' has a wrong offset!");
static_assert(offsetof(UOverlayMessage_C, Result) == 0x000320, "Member 'UOverlayMessage_C::Result' has a wrong offset!");
static_assert(offsetof(UOverlayMessage_C, CurrentButtonIndex) == 0x000324, "Member 'UOverlayMessage_C::CurrentButtonIndex' has a wrong offset!");
static_assert(offsetof(UOverlayMessage_C, ButtonList) == 0x000328, "Member 'UOverlayMessage_C::ButtonList' has a wrong offset!");
static_assert(offsetof(UOverlayMessage_C, OnHide) == 0x000338, "Member 'UOverlayMessage_C::OnHide' has a wrong offset!");
static_assert(offsetof(UOverlayMessage_C, Blocker) == 0x000348, "Member 'UOverlayMessage_C::Blocker' has a wrong offset!");

}

