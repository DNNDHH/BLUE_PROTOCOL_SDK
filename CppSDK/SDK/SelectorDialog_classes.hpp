#pragma once

 

// Package: SelectorDialog

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SelectorDialog.SelectorDialog_C
// 0x00D0 (0x0348 - 0x0278)
class USelectorDialog_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBButton_C*                            Btn_Decide;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  Btn_OutBtn;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            BtnClose;                                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose01_C*                          CmnClose01;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HB_ButtonBox;                                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HB_DecideBtns;                                     // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_BlackBottom;                                  // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_BlackTop;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_Hl;                                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_Wh;                                           // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_Wh_1;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_YellowBottom;                                 // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_YellowTop;                                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock;                                // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_146;                            // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Desc;                                          // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_ButtonBox;                                      // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSelected;                                        // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Vertical;                                          // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F8B[0x3];                                     // 0x0329(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Selected;                                          // 0x032C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSelectOnClose;                                    // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F8C[0x7];                                     // 0x0331(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnCanceled;                                        // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnSelected__DelegateSignature(int32 Param_Selected);
	void OnCanceled__DelegateSignature();
	void ExecuteUbergraph_SelectorDialog(int32 EntryPoint);
	void BndEvt__SelectorDialog_CmnClose01_K2Node_ComponentBoundEvent_7_OnClosed__DelegateSignature();
	void AutoSelect();
	void BndEvt__BtnClose_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__BtnClose_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__BtnClose_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Btn_Decide_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn_Decide_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void Destruct();
	void OnUI_Cancel();
	void OnSelectedItem(class USelectorDialogBtn_C* Param_Selected, int32 SelectNum);
	void StartSelectDialog(bool Param_Vertical, const class FString& Desc, const TArray<class FString>& SelectItem, const int32 DefaultSelect, float BtnWidth, bool SelectOnClose);
	void BndEvt__Btn_Decide_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void Close();
	void BndEvt__Btn_OutBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SelectorDialog_C">();
	}
	static class USelectorDialog_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USelectorDialog_C>();
	}
};
static_assert(alignof(USelectorDialog_C) == 0x000008, "Wrong alignment on USelectorDialog_C");
static_assert(sizeof(USelectorDialog_C) == 0x000348, "Wrong size on USelectorDialog_C");
static_assert(offsetof(USelectorDialog_C, UberGraphFrame) == 0x000278, "Member 'USelectorDialog_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USelectorDialog_C, AnimOut) == 0x000280, "Member 'USelectorDialog_C::AnimOut' has a wrong offset!");
static_assert(offsetof(USelectorDialog_C, AnimIn) == 0x000288, "Member 'USelectorDialog_C::AnimIn' has a wrong offset!");
static_assert(offsetof(USelectorDialog_C, Btn_Decide) == 0x000290, "Member 'USelectorDialog_C::Btn_Decide' has a wrong offset!");
static_assert(offsetof(USelectorDialog_C, Btn_OutBtn) == 0x000298, "Member 'USelectorDialog_C::Btn_OutBtn' has a wrong offset!");
static_assert(offsetof(USelectorDialog_C, BtnClose) == 0x0002A0, "Member 'USelectorDialog_C::BtnClose' has a wrong offset!");
static_assert(offsetof(USelectorDialog_C, CmnClose01) == 0x0002A8, "Member 'USelectorDialog_C::CmnClose01' has a wrong offset!");
static_assert(offsetof(USelectorDialog_C, HB_ButtonBox) == 0x0002B0, "Member 'USelectorDialog_C::HB_ButtonBox' has a wrong offset!");
static_assert(offsetof(USelectorDialog_C, HB_DecideBtns) == 0x0002B8, "Member 'USelectorDialog_C::HB_DecideBtns' has a wrong offset!");
static_assert(offsetof(USelectorDialog_C, Line_BlackBottom) == 0x0002C0, "Member 'USelectorDialog_C::Line_BlackBottom' has a wrong offset!");
static_assert(offsetof(USelectorDialog_C, Line_BlackTop) == 0x0002C8, "Member 'USelectorDialog_C::Line_BlackTop' has a wrong offset!");
static_assert(offsetof(USelectorDialog_C, Line_Hl) == 0x0002D0, "Member 'USelectorDialog_C::Line_Hl' has a wrong offset!");
static_assert(offsetof(USelectorDialog_C, Line_Wh) == 0x0002D8, "Member 'USelectorDialog_C::Line_Wh' has a wrong offset!");
static_assert(offsetof(USelectorDialog_C, Line_Wh_1) == 0x0002E0, "Member 'USelectorDialog_C::Line_Wh_1' has a wrong offset!");
static_assert(offsetof(USelectorDialog_C, Line_YellowBottom) == 0x0002E8, "Member 'USelectorDialog_C::Line_YellowBottom' has a wrong offset!");
static_assert(offsetof(USelectorDialog_C, Line_YellowTop) == 0x0002F0, "Member 'USelectorDialog_C::Line_YellowTop' has a wrong offset!");
static_assert(offsetof(USelectorDialog_C, SBRuntimeTextBlock) == 0x0002F8, "Member 'USelectorDialog_C::SBRuntimeTextBlock' has a wrong offset!");
static_assert(offsetof(USelectorDialog_C, SBRuntimeTextBlock_146) == 0x000300, "Member 'USelectorDialog_C::SBRuntimeTextBlock_146' has a wrong offset!");
static_assert(offsetof(USelectorDialog_C, Txt_Desc) == 0x000308, "Member 'USelectorDialog_C::Txt_Desc' has a wrong offset!");
static_assert(offsetof(USelectorDialog_C, VB_ButtonBox) == 0x000310, "Member 'USelectorDialog_C::VB_ButtonBox' has a wrong offset!");
static_assert(offsetof(USelectorDialog_C, OnSelected) == 0x000318, "Member 'USelectorDialog_C::OnSelected' has a wrong offset!");
static_assert(offsetof(USelectorDialog_C, Vertical) == 0x000328, "Member 'USelectorDialog_C::Vertical' has a wrong offset!");
static_assert(offsetof(USelectorDialog_C, Selected) == 0x00032C, "Member 'USelectorDialog_C::Selected' has a wrong offset!");
static_assert(offsetof(USelectorDialog_C, bSelectOnClose) == 0x000330, "Member 'USelectorDialog_C::bSelectOnClose' has a wrong offset!");
static_assert(offsetof(USelectorDialog_C, OnCanceled) == 0x000338, "Member 'USelectorDialog_C::OnCanceled' has a wrong offset!");

}

