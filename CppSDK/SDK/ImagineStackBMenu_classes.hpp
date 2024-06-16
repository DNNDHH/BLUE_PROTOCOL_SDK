#pragma once

 

// Package: ImagineStackBMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ImagineStackBMenu.ImagineStackBMenu_C
// 0x0078 (0x02F0 - 0x0278)
class UImagineStackBMenu_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       InAnim;                                            // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBButton_C*                            Btn_ShowHint;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBack01_C*                           CmnBack01_1;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_93;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_266;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_333;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStackBSelectButton_C*                  StackB_Battle;                                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStackBSelectButton_C*                  StackB_Enhance;                                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStackBSelectButton_C*                  StackB_Mount;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Desc;                                          // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UUserWidget*                            CreatedWidget;                                     // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBImagineCategoryType                        MenuType;                                          // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClose__DelegateSignature();
	void ExecuteUbergraph_ImagineStackBMenu(int32 EntryPoint);
	void BndEvt__ImagineStackBMenu_StackB_Mount_K2Node_ComponentBoundEvent_4_OnMouseOver__DelegateSignature();
	void BndEvt__ImagineStackBMenu_StackB_Enhance_K2Node_ComponentBoundEvent_3_OnMouseOver__DelegateSignature();
	void BndEvt__ImagineStackBMenu_StackB_Battle_K2Node_ComponentBoundEvent_2_OnMouseOver__DelegateSignature();
	void Close();
	void BndEvt__ImagineStackBMenu_Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ImagineStackBMenu_CmnBack01_1_K2Node_ComponentBoundEvent_1_EventClicked__DelegateSignature();
	void Destruct();
	void Construct();
	void OnMountClosed();
	void BndEvt__ImagineStackBMenu_StackB_Mount_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature();
	void OnImagineStackBClosed();
	void BndEvt__ImagineStackBMenu_StackB_Enhance_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature();
	void BndEvt__ImagineStackBMenu_StackB_Battle_K2Node_ComponentBoundEvent_0_OnSelect__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ImagineStackBMenu_C">();
	}
	static class UImagineStackBMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImagineStackBMenu_C>();
	}
};
static_assert(alignof(UImagineStackBMenu_C) == 0x000008, "Wrong alignment on UImagineStackBMenu_C");
static_assert(sizeof(UImagineStackBMenu_C) == 0x0002F0, "Wrong size on UImagineStackBMenu_C");
static_assert(offsetof(UImagineStackBMenu_C, UberGraphFrame) == 0x000278, "Member 'UImagineStackBMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UImagineStackBMenu_C, InAnim) == 0x000280, "Member 'UImagineStackBMenu_C::InAnim' has a wrong offset!");
static_assert(offsetof(UImagineStackBMenu_C, Btn_ShowHint) == 0x000288, "Member 'UImagineStackBMenu_C::Btn_ShowHint' has a wrong offset!");
static_assert(offsetof(UImagineStackBMenu_C, CmnBack01_1) == 0x000290, "Member 'UImagineStackBMenu_C::CmnBack01_1' has a wrong offset!");
static_assert(offsetof(UImagineStackBMenu_C, Image_93) == 0x000298, "Member 'UImagineStackBMenu_C::Image_93' has a wrong offset!");
static_assert(offsetof(UImagineStackBMenu_C, Image_266) == 0x0002A0, "Member 'UImagineStackBMenu_C::Image_266' has a wrong offset!");
static_assert(offsetof(UImagineStackBMenu_C, Image_333) == 0x0002A8, "Member 'UImagineStackBMenu_C::Image_333' has a wrong offset!");
static_assert(offsetof(UImagineStackBMenu_C, StackB_Battle) == 0x0002B0, "Member 'UImagineStackBMenu_C::StackB_Battle' has a wrong offset!");
static_assert(offsetof(UImagineStackBMenu_C, StackB_Enhance) == 0x0002B8, "Member 'UImagineStackBMenu_C::StackB_Enhance' has a wrong offset!");
static_assert(offsetof(UImagineStackBMenu_C, StackB_Mount) == 0x0002C0, "Member 'UImagineStackBMenu_C::StackB_Mount' has a wrong offset!");
static_assert(offsetof(UImagineStackBMenu_C, Txt_Desc) == 0x0002C8, "Member 'UImagineStackBMenu_C::Txt_Desc' has a wrong offset!");
static_assert(offsetof(UImagineStackBMenu_C, OnClose) == 0x0002D0, "Member 'UImagineStackBMenu_C::OnClose' has a wrong offset!");
static_assert(offsetof(UImagineStackBMenu_C, CreatedWidget) == 0x0002E0, "Member 'UImagineStackBMenu_C::CreatedWidget' has a wrong offset!");
static_assert(offsetof(UImagineStackBMenu_C, MenuType) == 0x0002E8, "Member 'UImagineStackBMenu_C::MenuType' has a wrong offset!");

}

