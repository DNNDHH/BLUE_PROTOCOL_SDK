#pragma once

 

// Package: BP_RsDialog

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_RsDialog.BP_RsDialog_C
// 0x0058 (0x0338 - 0x02E0)
class UBP_RsDialog_C final : public USBRsDialog
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UDialogButton_C*                        Btn_Confirm;                                       // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Base;                                          // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Icon;                                          // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher;                                          // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       Txt_Message;                                       // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker_Base;                                    // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker_Cover;                                   // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSBCursorStateHandle                   CursorHandle;                                      // 0x0330(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          IsFinished;                                        // 0x0334(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ERsDialogResult                               Result;                                            // 0x0335(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_RsDialog(int32 EntryPoint);
	void DialogStart(int32 SwitchId);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void DialogEnd();
	void EndProcessingRsDialog();
	void Construct();
	void BndEvt__Btn_Confirm_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UUserWidget* InButtonWidget);
	void StartProcessingRsDialog(const class FText& Message);
	void StartErrorMessageRsDialog(int32 MessageId, int32 ErrorCode);
	void Destruct();
	void SetErrorMessage(int32 MessageId, int32 ErrorCode);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RsDialog_C">();
	}
	static class UBP_RsDialog_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_RsDialog_C>();
	}
};
static_assert(alignof(UBP_RsDialog_C) == 0x000008, "Wrong alignment on UBP_RsDialog_C");
static_assert(sizeof(UBP_RsDialog_C) == 0x000338, "Wrong size on UBP_RsDialog_C");
static_assert(offsetof(UBP_RsDialog_C, UberGraphFrame) == 0x0002E0, "Member 'UBP_RsDialog_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_C, AnimOut) == 0x0002E8, "Member 'UBP_RsDialog_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_C, AnimIn) == 0x0002F0, "Member 'UBP_RsDialog_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_C, Btn_Confirm) == 0x0002F8, "Member 'UBP_RsDialog_C::Btn_Confirm' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_C, Img_Base) == 0x000300, "Member 'UBP_RsDialog_C::Img_Base' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_C, Img_Icon) == 0x000308, "Member 'UBP_RsDialog_C::Img_Icon' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_C, Switcher) == 0x000310, "Member 'UBP_RsDialog_C::Switcher' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_C, Txt_Message) == 0x000318, "Member 'UBP_RsDialog_C::Txt_Message' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_C, UIBlocker_Base) == 0x000320, "Member 'UBP_RsDialog_C::UIBlocker_Base' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_C, UIBlocker_Cover) == 0x000328, "Member 'UBP_RsDialog_C::UIBlocker_Cover' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_C, CursorHandle) == 0x000330, "Member 'UBP_RsDialog_C::CursorHandle' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_C, IsFinished) == 0x000334, "Member 'UBP_RsDialog_C::IsFinished' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_C, Result) == 0x000335, "Member 'UBP_RsDialog_C::Result' has a wrong offset!");

}

