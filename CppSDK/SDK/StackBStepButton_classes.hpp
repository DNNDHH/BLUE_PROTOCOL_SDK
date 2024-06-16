#pragma once

 

// Package: StackBStepButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StackBStepButton.StackBStepButton_C
// 0x00F0 (0x0368 - 0x0278)
class UStackBStepButton_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimBgOut;                                         // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimBtnBg;                                         // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBButton_C*                            Btn_Selectable;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_BeginSelect;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_SelectBtn;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_SelectBtn_1;                                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_SelectedView;                                  // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_138;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_155;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_495;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgStepBg;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Num1;                                              // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Num1_1;                                            // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Num2;                                              // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Num2_1;                                            // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Num3;                                              // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Num3_1;                                            // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Num4;                                              // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Num4_1;                                            // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_ButtonName;                                    // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_ButtonName_1;                                  // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtStep;                                           // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_BaseNum;                                        // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_BaseNum_1;                                      // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_View;                                           // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSelect;                                          // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UUserWidget*                            AppendedWidget;                                    // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnSelect__DelegateSignature();
	void ExecuteUbergraph_StackBStepButton(int32 EntryPoint);
	void BndEvt__StackBStepButton_Btn_Selectable_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__StackBStepButton_Btn_Selectable_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__StackBStepButton_Btn_Selectable_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void Construct();
	void BndEvt__StackBStepButton_Btn_Selectable_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__StackBoostStepButton_Btn_Selectable_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Destruct();
	void SetSelectedView(class UUserWidget* Param_AppendedWidget);
	void Terminate();
	void GetAppendedView(class UUserWidget** View);
	void SelectView(bool bButton);
	void ClearSelectedView();
	void SetButtonNo(int32 Number);
	void SetBeginSelectView();
	void SetButtonName(int32 TextId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StackBStepButton_C">();
	}
	static class UStackBStepButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStackBStepButton_C>();
	}
};
static_assert(alignof(UStackBStepButton_C) == 0x000008, "Wrong alignment on UStackBStepButton_C");
static_assert(sizeof(UStackBStepButton_C) == 0x000368, "Wrong size on UStackBStepButton_C");
static_assert(offsetof(UStackBStepButton_C, UberGraphFrame) == 0x000278, "Member 'UStackBStepButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UStackBStepButton_C, AnimBgOut) == 0x000280, "Member 'UStackBStepButton_C::AnimBgOut' has a wrong offset!");
static_assert(offsetof(UStackBStepButton_C, AnimBtnBg) == 0x000288, "Member 'UStackBStepButton_C::AnimBtnBg' has a wrong offset!");
static_assert(offsetof(UStackBStepButton_C, Btn_Selectable) == 0x000290, "Member 'UStackBStepButton_C::Btn_Selectable' has a wrong offset!");
static_assert(offsetof(UStackBStepButton_C, Cvs_BeginSelect) == 0x000298, "Member 'UStackBStepButton_C::Cvs_BeginSelect' has a wrong offset!");
static_assert(offsetof(UStackBStepButton_C, Cvs_SelectBtn) == 0x0002A0, "Member 'UStackBStepButton_C::Cvs_SelectBtn' has a wrong offset!");
static_assert(offsetof(UStackBStepButton_C, Cvs_SelectBtn_1) == 0x0002A8, "Member 'UStackBStepButton_C::Cvs_SelectBtn_1' has a wrong offset!");
static_assert(offsetof(UStackBStepButton_C, Cvs_SelectedView) == 0x0002B0, "Member 'UStackBStepButton_C::Cvs_SelectedView' has a wrong offset!");
static_assert(offsetof(UStackBStepButton_C, Image) == 0x0002B8, "Member 'UStackBStepButton_C::Image' has a wrong offset!");
static_assert(offsetof(UStackBStepButton_C, Image_138) == 0x0002C0, "Member 'UStackBStepButton_C::Image_138' has a wrong offset!");
static_assert(offsetof(UStackBStepButton_C, Image_155) == 0x0002C8, "Member 'UStackBStepButton_C::Image_155' has a wrong offset!");
static_assert(offsetof(UStackBStepButton_C, Image_495) == 0x0002D0, "Member 'UStackBStepButton_C::Image_495' has a wrong offset!");
static_assert(offsetof(UStackBStepButton_C, ImgStepBg) == 0x0002D8, "Member 'UStackBStepButton_C::ImgStepBg' has a wrong offset!");
static_assert(offsetof(UStackBStepButton_C, Num1) == 0x0002E0, "Member 'UStackBStepButton_C::Num1' has a wrong offset!");
static_assert(offsetof(UStackBStepButton_C, Num1_1) == 0x0002E8, "Member 'UStackBStepButton_C::Num1_1' has a wrong offset!");
static_assert(offsetof(UStackBStepButton_C, Num2) == 0x0002F0, "Member 'UStackBStepButton_C::Num2' has a wrong offset!");
static_assert(offsetof(UStackBStepButton_C, Num2_1) == 0x0002F8, "Member 'UStackBStepButton_C::Num2_1' has a wrong offset!");
static_assert(offsetof(UStackBStepButton_C, Num3) == 0x000300, "Member 'UStackBStepButton_C::Num3' has a wrong offset!");
static_assert(offsetof(UStackBStepButton_C, Num3_1) == 0x000308, "Member 'UStackBStepButton_C::Num3_1' has a wrong offset!");
static_assert(offsetof(UStackBStepButton_C, Num4) == 0x000310, "Member 'UStackBStepButton_C::Num4' has a wrong offset!");
static_assert(offsetof(UStackBStepButton_C, Num4_1) == 0x000318, "Member 'UStackBStepButton_C::Num4_1' has a wrong offset!");
static_assert(offsetof(UStackBStepButton_C, Txt_ButtonName) == 0x000320, "Member 'UStackBStepButton_C::Txt_ButtonName' has a wrong offset!");
static_assert(offsetof(UStackBStepButton_C, Txt_ButtonName_1) == 0x000328, "Member 'UStackBStepButton_C::Txt_ButtonName_1' has a wrong offset!");
static_assert(offsetof(UStackBStepButton_C, TxtStep) == 0x000330, "Member 'UStackBStepButton_C::TxtStep' has a wrong offset!");
static_assert(offsetof(UStackBStepButton_C, WS_BaseNum) == 0x000338, "Member 'UStackBStepButton_C::WS_BaseNum' has a wrong offset!");
static_assert(offsetof(UStackBStepButton_C, WS_BaseNum_1) == 0x000340, "Member 'UStackBStepButton_C::WS_BaseNum_1' has a wrong offset!");
static_assert(offsetof(UStackBStepButton_C, WS_View) == 0x000348, "Member 'UStackBStepButton_C::WS_View' has a wrong offset!");
static_assert(offsetof(UStackBStepButton_C, OnSelect) == 0x000350, "Member 'UStackBStepButton_C::OnSelect' has a wrong offset!");
static_assert(offsetof(UStackBStepButton_C, AppendedWidget) == 0x000360, "Member 'UStackBStepButton_C::AppendedWidget' has a wrong offset!");

}

