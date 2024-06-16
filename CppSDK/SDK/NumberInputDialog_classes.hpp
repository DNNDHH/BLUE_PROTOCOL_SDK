#pragma once

 

// Package: NumberInputDialog

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ENumberInputDialogResult_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "ENumberInputDialogType_structs.hpp"
#include "ENumberInputDialogPositionType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass NumberInputDialog.NumberInputDialog_C
// 0x0118 (0x03C8 - 0x02B0)
class UNumberInputDialog_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           BlueProPointLocation;                              // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Button1_1;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Button1_2;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Button1_3;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Button_Max;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Button_Min;                                        // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Button_Minus;                                      // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Button_Plus;                                       // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_1;                                     // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose02_C*                          CmnClose02;                                        // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           DefaultLocation;                                   // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_253;                                         // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  SBButtonTransparent;                               // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USliderInputV_C*                        SliderInputV;                                      // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchType;                                        // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt1_1;                                            // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt1_2;                                            // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt1_3;                                            // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Comment;                                       // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_FreeText;                                      // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Max;                                           // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtPt;                                             // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker2;                                        // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnHide;                                            // 0x0388(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	ENumberInputDialogResult                      Result;                                            // 0x0398(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RepeatPlusButton;                                  // 0x0399(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          RepeatMinusButton;                                 // 0x039A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B47[0x5];                                     // 0x039B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUserWidget*                          MainWidget;                                        // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsClosing;                                         // 0x03A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B48[0x7];                                     // 0x03A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnNumSliderUpdeta;                                 // 0x03B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	ENumberInputDialogType                        DialogType;                                        // 0x03C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bEndRemoveMode;                                    // 0x03C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	ENumberInputDialogPositionType                PositionType;                                      // 0x03C2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnHide__DelegateSignature(ENumberInputDialogResult InResult, int32 InNumber);
	void OnNumSliderUpdeta__DelegateSignature(int32 Value, class UNumberInputDialog_C* CallerDialg);
	void ExecuteUbergraph_NumberInputDialog(int32 EntryPoint);
	void BndEvt__NumberInputDialog_CmnClose02_K2Node_ComponentBoundEvent_12_OnClosed__DelegateSignature();
	void PositionInit();
	void BndEvt__Button1_3_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button1_3_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button1_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature();
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0();
	void StartAnimation();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button1_2_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button1_2_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button1_2_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
	void OnSliderChange();
	void BndEvt__Button_Min_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Max_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Minus_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Plus_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void Destruct();
	void HideDialog(bool bPlayCloseSe);
	void OnPress_Cancel();
	void SetFreeText(const class FText& InText);
	void BndEvt__SliderInputV_K2Node_ComponentBoundEvent_3_OnChange__DelegateSignature(int32 NewValue, float Ratio);
	void BndEvt__SBButtonTransparent_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button1_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnDestructMainWidget();
	void BndEvt__Button1_1_K2Node_ComponentBoundEvent_60_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button1_1_K2Node_ComponentBoundEvent_50_OnButtonHoverEvent__DelegateSignature();
	void SetDialogNumber(int32 Number, int32 NumberMax);
	void SetDialogTexts(const class FText& InCommentText, const class FText& InFreeText, const class FText& InButtonText);
	void SetDialogPoint(const class FText& InText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NumberInputDialog_C">();
	}
	static class UNumberInputDialog_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNumberInputDialog_C>();
	}
};
static_assert(alignof(UNumberInputDialog_C) == 0x000008, "Wrong alignment on UNumberInputDialog_C");
static_assert(sizeof(UNumberInputDialog_C) == 0x0003C8, "Wrong size on UNumberInputDialog_C");
static_assert(offsetof(UNumberInputDialog_C, UberGraphFrame) == 0x0002B0, "Member 'UNumberInputDialog_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNumberInputDialog_C, AnimOut) == 0x0002B8, "Member 'UNumberInputDialog_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UNumberInputDialog_C, AnimIn) == 0x0002C0, "Member 'UNumberInputDialog_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UNumberInputDialog_C, BlueProPointLocation) == 0x0002C8, "Member 'UNumberInputDialog_C::BlueProPointLocation' has a wrong offset!");
static_assert(offsetof(UNumberInputDialog_C, Button1_1) == 0x0002D0, "Member 'UNumberInputDialog_C::Button1_1' has a wrong offset!");
static_assert(offsetof(UNumberInputDialog_C, Button1_2) == 0x0002D8, "Member 'UNumberInputDialog_C::Button1_2' has a wrong offset!");
static_assert(offsetof(UNumberInputDialog_C, Button1_3) == 0x0002E0, "Member 'UNumberInputDialog_C::Button1_3' has a wrong offset!");
static_assert(offsetof(UNumberInputDialog_C, Button_Max) == 0x0002E8, "Member 'UNumberInputDialog_C::Button_Max' has a wrong offset!");
static_assert(offsetof(UNumberInputDialog_C, Button_Min) == 0x0002F0, "Member 'UNumberInputDialog_C::Button_Min' has a wrong offset!");
static_assert(offsetof(UNumberInputDialog_C, Button_Minus) == 0x0002F8, "Member 'UNumberInputDialog_C::Button_Minus' has a wrong offset!");
static_assert(offsetof(UNumberInputDialog_C, Button_Plus) == 0x000300, "Member 'UNumberInputDialog_C::Button_Plus' has a wrong offset!");
static_assert(offsetof(UNumberInputDialog_C, CanvasPanel_1) == 0x000308, "Member 'UNumberInputDialog_C::CanvasPanel_1' has a wrong offset!");
static_assert(offsetof(UNumberInputDialog_C, CmnClose02) == 0x000310, "Member 'UNumberInputDialog_C::CmnClose02' has a wrong offset!");
static_assert(offsetof(UNumberInputDialog_C, DefaultLocation) == 0x000318, "Member 'UNumberInputDialog_C::DefaultLocation' has a wrong offset!");
static_assert(offsetof(UNumberInputDialog_C, Image_253) == 0x000320, "Member 'UNumberInputDialog_C::Image_253' has a wrong offset!");
static_assert(offsetof(UNumberInputDialog_C, SBButtonTransparent) == 0x000328, "Member 'UNumberInputDialog_C::SBButtonTransparent' has a wrong offset!");
static_assert(offsetof(UNumberInputDialog_C, SliderInputV) == 0x000330, "Member 'UNumberInputDialog_C::SliderInputV' has a wrong offset!");
static_assert(offsetof(UNumberInputDialog_C, SwitchType) == 0x000338, "Member 'UNumberInputDialog_C::SwitchType' has a wrong offset!");
static_assert(offsetof(UNumberInputDialog_C, Txt1_1) == 0x000340, "Member 'UNumberInputDialog_C::Txt1_1' has a wrong offset!");
static_assert(offsetof(UNumberInputDialog_C, Txt1_2) == 0x000348, "Member 'UNumberInputDialog_C::Txt1_2' has a wrong offset!");
static_assert(offsetof(UNumberInputDialog_C, Txt1_3) == 0x000350, "Member 'UNumberInputDialog_C::Txt1_3' has a wrong offset!");
static_assert(offsetof(UNumberInputDialog_C, Txt_Comment) == 0x000358, "Member 'UNumberInputDialog_C::Txt_Comment' has a wrong offset!");
static_assert(offsetof(UNumberInputDialog_C, Txt_FreeText) == 0x000360, "Member 'UNumberInputDialog_C::Txt_FreeText' has a wrong offset!");
static_assert(offsetof(UNumberInputDialog_C, Txt_Max) == 0x000368, "Member 'UNumberInputDialog_C::Txt_Max' has a wrong offset!");
static_assert(offsetof(UNumberInputDialog_C, TxtPt) == 0x000370, "Member 'UNumberInputDialog_C::TxtPt' has a wrong offset!");
static_assert(offsetof(UNumberInputDialog_C, UIBlocker) == 0x000378, "Member 'UNumberInputDialog_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UNumberInputDialog_C, UIBlocker2) == 0x000380, "Member 'UNumberInputDialog_C::UIBlocker2' has a wrong offset!");
static_assert(offsetof(UNumberInputDialog_C, OnHide) == 0x000388, "Member 'UNumberInputDialog_C::OnHide' has a wrong offset!");
static_assert(offsetof(UNumberInputDialog_C, Result) == 0x000398, "Member 'UNumberInputDialog_C::Result' has a wrong offset!");
static_assert(offsetof(UNumberInputDialog_C, RepeatPlusButton) == 0x000399, "Member 'UNumberInputDialog_C::RepeatPlusButton' has a wrong offset!");
static_assert(offsetof(UNumberInputDialog_C, RepeatMinusButton) == 0x00039A, "Member 'UNumberInputDialog_C::RepeatMinusButton' has a wrong offset!");
static_assert(offsetof(UNumberInputDialog_C, MainWidget) == 0x0003A0, "Member 'UNumberInputDialog_C::MainWidget' has a wrong offset!");
static_assert(offsetof(UNumberInputDialog_C, IsClosing) == 0x0003A8, "Member 'UNumberInputDialog_C::IsClosing' has a wrong offset!");
static_assert(offsetof(UNumberInputDialog_C, OnNumSliderUpdeta) == 0x0003B0, "Member 'UNumberInputDialog_C::OnNumSliderUpdeta' has a wrong offset!");
static_assert(offsetof(UNumberInputDialog_C, DialogType) == 0x0003C0, "Member 'UNumberInputDialog_C::DialogType' has a wrong offset!");
static_assert(offsetof(UNumberInputDialog_C, bEndRemoveMode) == 0x0003C1, "Member 'UNumberInputDialog_C::bEndRemoveMode' has a wrong offset!");
static_assert(offsetof(UNumberInputDialog_C, PositionType) == 0x0003C2, "Member 'UNumberInputDialog_C::PositionType' has a wrong offset!");

}

