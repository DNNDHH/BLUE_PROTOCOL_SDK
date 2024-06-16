#pragma once

 

// Package: WBP_ExpIncrease

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ENumberInputDialogResult_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ExpIncrease.WBP_ExpIncrease_C
// 0x0168 (0x0418 - 0x02B0)
class UWBP_ExpIncrease_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBButton_C*                            Button1_1;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Button1Grp;                                        // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Button_Max;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Button_Min;                                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Button_Minus;                                      // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Button_Plus;                                       // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose02_C*                          CmnClose02;                                        // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           EXPGaugeSize;                                      // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           EXPGaugeSize_1;                                    // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_427;                                         // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_905;                                         // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1044;                                        // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    LblLv;                                             // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    LblLv_1;                                           // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         LvGrp;                                             // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         LvGrp_1;                                           // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  SBButtonTransparent;                               // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USliderInputV_C*                        SliderInputV;                                      // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt1_1;                                            // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Comment;                                       // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Comment_1;                                     // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Max;                                           // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtExp;                                            // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtExp_1;                                          // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtExpMax;                                         // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtExpMax_1;                                       // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtLv;                                             // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtLv_1;                                           // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker2;                                        // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnHide;                                            // 0x03B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	ENumberInputDialogResult                      Result;                                            // 0x03C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RepeatPlusButton;                                  // 0x03C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          RepeatMinusButton;                                 // 0x03CA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78D0[0x5];                                     // 0x03CB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            MainWidget;                                        // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsClosing;                                         // 0x03D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78D1[0x7];                                     // 0x03D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnExpSliderUpdeta;                                 // 0x03E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UCanvasPanelSlot*                       EXPSlot;                                           // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              EXPSlotSizeXY;                                     // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       EXPSlot1;                                          // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              EXPSlotSizeXY1;                                    // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFirst;                                            // 0x0410(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnHide__DelegateSignature(ENumberInputDialogResult InResult, int32 InNumber);
	void OnExpSliderUpdeta__DelegateSignature(int32 Value, class UWBP_ExpIncrease_C* CallerDialg);
	void ExecuteUbergraph_WBP_ExpIncrease(int32 EntryPoint);
	void BndEvt__WBP_ExpIncrease_CmnClose02_K2Node_ComponentBoundEvent_8_OnClosed__DelegateSignature();
	void OnSliderChange();
	void BndEvt__SliderInputV_K2Node_ComponentBoundEvent_3_OnChange__DelegateSignature(int32 NewValue, float Ratio);
	void BndEvt__Button_Min_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Max_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Minus_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Plus_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void Destruct();
	void HideDialog(bool bPlayCloseSe);
	void OnPress_Cancel();
	void BndEvt__SBButtonTransparent_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button1_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnDestructMainWidget();
	void BndEvt__Button1_1_K2Node_ComponentBoundEvent_60_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button1_1_K2Node_ComponentBoundEvent_50_OnButtonHoverEvent__DelegateSignature();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void SetDialogNumber(int32 Number, int32 NumberMax);
	void SetDialogTexts(const class FText& InCommentText, const class FText& InButtonText, const class FText& InLVText);
	void SetDialogNumsBefore(int32 LVNum1, int32 ExpNum1, int32 ExpMaxNum1);
	void SetDialogNumsAfter(int32 LVNum2, int32 ExpNum2, int32 ExpMaxNum2);
	void SetDialogComment(const class FText& InText);
	void SetGauge(class UCanvasPanelSlot* Target, const struct FVector2D& InVec, float Naw, float Max);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ExpIncrease_C">();
	}
	static class UWBP_ExpIncrease_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ExpIncrease_C>();
	}
};
static_assert(alignof(UWBP_ExpIncrease_C) == 0x000008, "Wrong alignment on UWBP_ExpIncrease_C");
static_assert(sizeof(UWBP_ExpIncrease_C) == 0x000418, "Wrong size on UWBP_ExpIncrease_C");
static_assert(offsetof(UWBP_ExpIncrease_C, UberGraphFrame) == 0x0002B0, "Member 'UWBP_ExpIncrease_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ExpIncrease_C, AnimOut) == 0x0002B8, "Member 'UWBP_ExpIncrease_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UWBP_ExpIncrease_C, AnimIn) == 0x0002C0, "Member 'UWBP_ExpIncrease_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UWBP_ExpIncrease_C, Button1_1) == 0x0002C8, "Member 'UWBP_ExpIncrease_C::Button1_1' has a wrong offset!");
static_assert(offsetof(UWBP_ExpIncrease_C, Button1Grp) == 0x0002D0, "Member 'UWBP_ExpIncrease_C::Button1Grp' has a wrong offset!");
static_assert(offsetof(UWBP_ExpIncrease_C, Button_Max) == 0x0002D8, "Member 'UWBP_ExpIncrease_C::Button_Max' has a wrong offset!");
static_assert(offsetof(UWBP_ExpIncrease_C, Button_Min) == 0x0002E0, "Member 'UWBP_ExpIncrease_C::Button_Min' has a wrong offset!");
static_assert(offsetof(UWBP_ExpIncrease_C, Button_Minus) == 0x0002E8, "Member 'UWBP_ExpIncrease_C::Button_Minus' has a wrong offset!");
static_assert(offsetof(UWBP_ExpIncrease_C, Button_Plus) == 0x0002F0, "Member 'UWBP_ExpIncrease_C::Button_Plus' has a wrong offset!");
static_assert(offsetof(UWBP_ExpIncrease_C, CmnClose02) == 0x0002F8, "Member 'UWBP_ExpIncrease_C::CmnClose02' has a wrong offset!");
static_assert(offsetof(UWBP_ExpIncrease_C, EXPGaugeSize) == 0x000300, "Member 'UWBP_ExpIncrease_C::EXPGaugeSize' has a wrong offset!");
static_assert(offsetof(UWBP_ExpIncrease_C, EXPGaugeSize_1) == 0x000308, "Member 'UWBP_ExpIncrease_C::EXPGaugeSize_1' has a wrong offset!");
static_assert(offsetof(UWBP_ExpIncrease_C, Image_427) == 0x000310, "Member 'UWBP_ExpIncrease_C::Image_427' has a wrong offset!");
static_assert(offsetof(UWBP_ExpIncrease_C, Image_905) == 0x000318, "Member 'UWBP_ExpIncrease_C::Image_905' has a wrong offset!");
static_assert(offsetof(UWBP_ExpIncrease_C, Image_1044) == 0x000320, "Member 'UWBP_ExpIncrease_C::Image_1044' has a wrong offset!");
static_assert(offsetof(UWBP_ExpIncrease_C, LblLv) == 0x000328, "Member 'UWBP_ExpIncrease_C::LblLv' has a wrong offset!");
static_assert(offsetof(UWBP_ExpIncrease_C, LblLv_1) == 0x000330, "Member 'UWBP_ExpIncrease_C::LblLv_1' has a wrong offset!");
static_assert(offsetof(UWBP_ExpIncrease_C, LvGrp) == 0x000338, "Member 'UWBP_ExpIncrease_C::LvGrp' has a wrong offset!");
static_assert(offsetof(UWBP_ExpIncrease_C, LvGrp_1) == 0x000340, "Member 'UWBP_ExpIncrease_C::LvGrp_1' has a wrong offset!");
static_assert(offsetof(UWBP_ExpIncrease_C, SBButtonTransparent) == 0x000348, "Member 'UWBP_ExpIncrease_C::SBButtonTransparent' has a wrong offset!");
static_assert(offsetof(UWBP_ExpIncrease_C, SliderInputV) == 0x000350, "Member 'UWBP_ExpIncrease_C::SliderInputV' has a wrong offset!");
static_assert(offsetof(UWBP_ExpIncrease_C, Txt1_1) == 0x000358, "Member 'UWBP_ExpIncrease_C::Txt1_1' has a wrong offset!");
static_assert(offsetof(UWBP_ExpIncrease_C, Txt_Comment) == 0x000360, "Member 'UWBP_ExpIncrease_C::Txt_Comment' has a wrong offset!");
static_assert(offsetof(UWBP_ExpIncrease_C, Txt_Comment_1) == 0x000368, "Member 'UWBP_ExpIncrease_C::Txt_Comment_1' has a wrong offset!");
static_assert(offsetof(UWBP_ExpIncrease_C, Txt_Max) == 0x000370, "Member 'UWBP_ExpIncrease_C::Txt_Max' has a wrong offset!");
static_assert(offsetof(UWBP_ExpIncrease_C, TxtExp) == 0x000378, "Member 'UWBP_ExpIncrease_C::TxtExp' has a wrong offset!");
static_assert(offsetof(UWBP_ExpIncrease_C, TxtExp_1) == 0x000380, "Member 'UWBP_ExpIncrease_C::TxtExp_1' has a wrong offset!");
static_assert(offsetof(UWBP_ExpIncrease_C, TxtExpMax) == 0x000388, "Member 'UWBP_ExpIncrease_C::TxtExpMax' has a wrong offset!");
static_assert(offsetof(UWBP_ExpIncrease_C, TxtExpMax_1) == 0x000390, "Member 'UWBP_ExpIncrease_C::TxtExpMax_1' has a wrong offset!");
static_assert(offsetof(UWBP_ExpIncrease_C, TxtLv) == 0x000398, "Member 'UWBP_ExpIncrease_C::TxtLv' has a wrong offset!");
static_assert(offsetof(UWBP_ExpIncrease_C, TxtLv_1) == 0x0003A0, "Member 'UWBP_ExpIncrease_C::TxtLv_1' has a wrong offset!");
static_assert(offsetof(UWBP_ExpIncrease_C, UIBlocker) == 0x0003A8, "Member 'UWBP_ExpIncrease_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UWBP_ExpIncrease_C, UIBlocker2) == 0x0003B0, "Member 'UWBP_ExpIncrease_C::UIBlocker2' has a wrong offset!");
static_assert(offsetof(UWBP_ExpIncrease_C, OnHide) == 0x0003B8, "Member 'UWBP_ExpIncrease_C::OnHide' has a wrong offset!");
static_assert(offsetof(UWBP_ExpIncrease_C, Result) == 0x0003C8, "Member 'UWBP_ExpIncrease_C::Result' has a wrong offset!");
static_assert(offsetof(UWBP_ExpIncrease_C, RepeatPlusButton) == 0x0003C9, "Member 'UWBP_ExpIncrease_C::RepeatPlusButton' has a wrong offset!");
static_assert(offsetof(UWBP_ExpIncrease_C, RepeatMinusButton) == 0x0003CA, "Member 'UWBP_ExpIncrease_C::RepeatMinusButton' has a wrong offset!");
static_assert(offsetof(UWBP_ExpIncrease_C, MainWidget) == 0x0003D0, "Member 'UWBP_ExpIncrease_C::MainWidget' has a wrong offset!");
static_assert(offsetof(UWBP_ExpIncrease_C, IsClosing) == 0x0003D8, "Member 'UWBP_ExpIncrease_C::IsClosing' has a wrong offset!");
static_assert(offsetof(UWBP_ExpIncrease_C, OnExpSliderUpdeta) == 0x0003E0, "Member 'UWBP_ExpIncrease_C::OnExpSliderUpdeta' has a wrong offset!");
static_assert(offsetof(UWBP_ExpIncrease_C, EXPSlot) == 0x0003F0, "Member 'UWBP_ExpIncrease_C::EXPSlot' has a wrong offset!");
static_assert(offsetof(UWBP_ExpIncrease_C, EXPSlotSizeXY) == 0x0003F8, "Member 'UWBP_ExpIncrease_C::EXPSlotSizeXY' has a wrong offset!");
static_assert(offsetof(UWBP_ExpIncrease_C, EXPSlot1) == 0x000400, "Member 'UWBP_ExpIncrease_C::EXPSlot1' has a wrong offset!");
static_assert(offsetof(UWBP_ExpIncrease_C, EXPSlotSizeXY1) == 0x000408, "Member 'UWBP_ExpIncrease_C::EXPSlotSizeXY1' has a wrong offset!");
static_assert(offsetof(UWBP_ExpIncrease_C, bFirst) == 0x000410, "Member 'UWBP_ExpIncrease_C::bFirst' has a wrong offset!");

}

