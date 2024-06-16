#pragma once

 

// Package: BP_Dialog

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_Dialog.BP_Dialog_C
// 0x00C8 (0x03A8 - 0x02E0)
class UBP_Dialog_C final : public USBDialog
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBackgroundBlur*                        BgBlur;                                            // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Button2Grp;                                        // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDialogButton_C*                        ButtonNo;                                          // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDialogButton_C*                        ButtonOk;                                          // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDialogButton_C*                        ButtonYes;                                         // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasCheckBox;                                    // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_1;                                     // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasWarning;                                     // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageWarning1;                                     // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line;                                              // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       Message;                                           // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBox_C*                          SBCheckBox_C_121;                                  // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_135;                                     // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker2;                                        // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_0;                                  // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EDialogResult                                 Result;                                            // 0x0380(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFinished;                                         // 0x0381(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9760[0x2];                                     // 0x0382(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCursorStateHandle                   CursorHandle;                                      // 0x0384(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          IsPlayYesSe;                                       // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9761[0x7];                                     // 0x0389(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          YesButtonClickSe;                                  // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector2D>                      PositionList;                                      // 0x0398(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_Dialog(int32 EntryPoint);
	void ShowWarning(bool bVisible);
	void BndEvt__BP_Dialog_SBCheckBox_C_121_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void SetCheckBoxMessage(bool bVisible, const class FText& Param_Message);
	void SetInputBlockerMode(bool bIsBlock);
	void SetYesButtonClickSe(class UAkAudioEvent* AkEvent, const class FString& EventName);
	void SetPositionType_1();
	void OnPress_Ok();
	void OnPress_Cancel();
	void OnDestructMainWidget();
	void BndEvt__ButtonNo_K2Node_ComponentBoundEvent_682_OnClicked__DelegateSignature(class UUserWidget* InButtonWidget);
	void BndEvt__Button2_K2Node_ComponentBoundEvent_462_OnClicked__DelegateSignature(class UUserWidget* InButtonWidget);
	void BndEvt__Button1_2_K2Node_ComponentBoundEvent_99_OnClicked__DelegateSignature(class UUserWidget* InButtonWidget);
	void ChangeMessage(const class FText& Param_Message);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void Destruct();
	void StartYesNoDialog(const class FText& Param_Message, EDialogPositionType Type, bool bEnableBgBlur);
	void StartMessageDialog(const class FText& Param_Message, EDialogPositionType Type, bool bEnableBgBlur);
	void Hide();
	void Construct();
	void SetPosition(EDialogPositionType PositionType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Dialog_C">();
	}
	static class UBP_Dialog_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Dialog_C>();
	}
};
static_assert(alignof(UBP_Dialog_C) == 0x000008, "Wrong alignment on UBP_Dialog_C");
static_assert(sizeof(UBP_Dialog_C) == 0x0003A8, "Wrong size on UBP_Dialog_C");
static_assert(offsetof(UBP_Dialog_C, UberGraphFrame) == 0x0002E0, "Member 'UBP_Dialog_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Dialog_C, AnimOut) == 0x0002E8, "Member 'UBP_Dialog_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UBP_Dialog_C, AnimIn) == 0x0002F0, "Member 'UBP_Dialog_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UBP_Dialog_C, BG) == 0x0002F8, "Member 'UBP_Dialog_C::BG' has a wrong offset!");
static_assert(offsetof(UBP_Dialog_C, BgBlur) == 0x000300, "Member 'UBP_Dialog_C::BgBlur' has a wrong offset!");
static_assert(offsetof(UBP_Dialog_C, Button2Grp) == 0x000308, "Member 'UBP_Dialog_C::Button2Grp' has a wrong offset!");
static_assert(offsetof(UBP_Dialog_C, ButtonNo) == 0x000310, "Member 'UBP_Dialog_C::ButtonNo' has a wrong offset!");
static_assert(offsetof(UBP_Dialog_C, ButtonOk) == 0x000318, "Member 'UBP_Dialog_C::ButtonOk' has a wrong offset!");
static_assert(offsetof(UBP_Dialog_C, ButtonYes) == 0x000320, "Member 'UBP_Dialog_C::ButtonYes' has a wrong offset!");
static_assert(offsetof(UBP_Dialog_C, CanvasCheckBox) == 0x000328, "Member 'UBP_Dialog_C::CanvasCheckBox' has a wrong offset!");
static_assert(offsetof(UBP_Dialog_C, CanvasPanel_1) == 0x000330, "Member 'UBP_Dialog_C::CanvasPanel_1' has a wrong offset!");
static_assert(offsetof(UBP_Dialog_C, CanvasWarning) == 0x000338, "Member 'UBP_Dialog_C::CanvasWarning' has a wrong offset!");
static_assert(offsetof(UBP_Dialog_C, ImageWarning1) == 0x000340, "Member 'UBP_Dialog_C::ImageWarning1' has a wrong offset!");
static_assert(offsetof(UBP_Dialog_C, Line) == 0x000348, "Member 'UBP_Dialog_C::Line' has a wrong offset!");
static_assert(offsetof(UBP_Dialog_C, Message) == 0x000350, "Member 'UBP_Dialog_C::Message' has a wrong offset!");
static_assert(offsetof(UBP_Dialog_C, SBCheckBox_C_121) == 0x000358, "Member 'UBP_Dialog_C::SBCheckBox_C_121' has a wrong offset!");
static_assert(offsetof(UBP_Dialog_C, TextBlock_135) == 0x000360, "Member 'UBP_Dialog_C::TextBlock_135' has a wrong offset!");
static_assert(offsetof(UBP_Dialog_C, UIBlocker) == 0x000368, "Member 'UBP_Dialog_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UBP_Dialog_C, UIBlocker2) == 0x000370, "Member 'UBP_Dialog_C::UIBlocker2' has a wrong offset!");
static_assert(offsetof(UBP_Dialog_C, WidgetSwitcher_0) == 0x000378, "Member 'UBP_Dialog_C::WidgetSwitcher_0' has a wrong offset!");
static_assert(offsetof(UBP_Dialog_C, Result) == 0x000380, "Member 'UBP_Dialog_C::Result' has a wrong offset!");
static_assert(offsetof(UBP_Dialog_C, bFinished) == 0x000381, "Member 'UBP_Dialog_C::bFinished' has a wrong offset!");
static_assert(offsetof(UBP_Dialog_C, CursorHandle) == 0x000384, "Member 'UBP_Dialog_C::CursorHandle' has a wrong offset!");
static_assert(offsetof(UBP_Dialog_C, IsPlayYesSe) == 0x000388, "Member 'UBP_Dialog_C::IsPlayYesSe' has a wrong offset!");
static_assert(offsetof(UBP_Dialog_C, YesButtonClickSe) == 0x000390, "Member 'UBP_Dialog_C::YesButtonClickSe' has a wrong offset!");
static_assert(offsetof(UBP_Dialog_C, PositionList) == 0x000398, "Member 'UBP_Dialog_C::PositionList' has a wrong offset!");

}

