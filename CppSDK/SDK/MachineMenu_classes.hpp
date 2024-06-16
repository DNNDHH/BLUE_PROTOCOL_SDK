#pragma once

 

// Package: MachineMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MachineMenu.MachineMenu_C
// 0x00B0 (0x0328 - 0x0278)
class UMachineMenu_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       InAnim;                                            // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBButton_C*                            Btn_Craft;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_Craft_Weapon;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_Enhance;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    BtnCraftTxt;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    BtnCraftTxt_Weapon;                                // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    BtnEnhanceTxt;                                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn05_C*                            CmnBtn05;                                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_38;                                  // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_6;                                           // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_7;                                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_73;                                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BG;                                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           MenuCanvas;                                        // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ShowCanvas;                                        // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_SelectCaption;                                 // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UUserWidget*                            OnMenuWidget;                                      // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClose__DelegateSignature();
	void ExecuteUbergraph_MachineMenu(int32 EntryPoint);
	void OnStackBClose();
	void BndEvt__MachineMenu_Btn_Enhance_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__MachineMenu_Btn_Craft_Weapon_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__MachineMenu_Btn_Craft_Weapon_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__MachineMenu_Btn_Craft_Weapon_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
	void Destruct();
	void OnCraftCloseAll(bool IsCrafted);
	void BndEvt__Btn_Craft_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn_Enhance_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void Listen_On_Close();
	void Close();
	void BndEvt__CmnBtn05_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature();
	void OnClosePanel(bool OnEvented);
	void OnCraftClose(bool IsCrafted);
	void BndEvt__Btn_Enhance_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn_Craft_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn_Craft_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MachineMenu_C">();
	}
	static class UMachineMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMachineMenu_C>();
	}
};
static_assert(alignof(UMachineMenu_C) == 0x000008, "Wrong alignment on UMachineMenu_C");
static_assert(sizeof(UMachineMenu_C) == 0x000328, "Wrong size on UMachineMenu_C");
static_assert(offsetof(UMachineMenu_C, UberGraphFrame) == 0x000278, "Member 'UMachineMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMachineMenu_C, InAnim) == 0x000280, "Member 'UMachineMenu_C::InAnim' has a wrong offset!");
static_assert(offsetof(UMachineMenu_C, Btn_Craft) == 0x000288, "Member 'UMachineMenu_C::Btn_Craft' has a wrong offset!");
static_assert(offsetof(UMachineMenu_C, Btn_Craft_Weapon) == 0x000290, "Member 'UMachineMenu_C::Btn_Craft_Weapon' has a wrong offset!");
static_assert(offsetof(UMachineMenu_C, Btn_Enhance) == 0x000298, "Member 'UMachineMenu_C::Btn_Enhance' has a wrong offset!");
static_assert(offsetof(UMachineMenu_C, BtnCraftTxt) == 0x0002A0, "Member 'UMachineMenu_C::BtnCraftTxt' has a wrong offset!");
static_assert(offsetof(UMachineMenu_C, BtnCraftTxt_Weapon) == 0x0002A8, "Member 'UMachineMenu_C::BtnCraftTxt_Weapon' has a wrong offset!");
static_assert(offsetof(UMachineMenu_C, BtnEnhanceTxt) == 0x0002B0, "Member 'UMachineMenu_C::BtnEnhanceTxt' has a wrong offset!");
static_assert(offsetof(UMachineMenu_C, CmnBtn05) == 0x0002B8, "Member 'UMachineMenu_C::CmnBtn05' has a wrong offset!");
static_assert(offsetof(UMachineMenu_C, HorizontalBox_38) == 0x0002C0, "Member 'UMachineMenu_C::HorizontalBox_38' has a wrong offset!");
static_assert(offsetof(UMachineMenu_C, Image_0) == 0x0002C8, "Member 'UMachineMenu_C::Image_0' has a wrong offset!");
static_assert(offsetof(UMachineMenu_C, Image_1) == 0x0002D0, "Member 'UMachineMenu_C::Image_1' has a wrong offset!");
static_assert(offsetof(UMachineMenu_C, Image_6) == 0x0002D8, "Member 'UMachineMenu_C::Image_6' has a wrong offset!");
static_assert(offsetof(UMachineMenu_C, Image_7) == 0x0002E0, "Member 'UMachineMenu_C::Image_7' has a wrong offset!");
static_assert(offsetof(UMachineMenu_C, Image_73) == 0x0002E8, "Member 'UMachineMenu_C::Image_73' has a wrong offset!");
static_assert(offsetof(UMachineMenu_C, Image_BG) == 0x0002F0, "Member 'UMachineMenu_C::Image_BG' has a wrong offset!");
static_assert(offsetof(UMachineMenu_C, MenuCanvas) == 0x0002F8, "Member 'UMachineMenu_C::MenuCanvas' has a wrong offset!");
static_assert(offsetof(UMachineMenu_C, ShowCanvas) == 0x000300, "Member 'UMachineMenu_C::ShowCanvas' has a wrong offset!");
static_assert(offsetof(UMachineMenu_C, Txt_SelectCaption) == 0x000308, "Member 'UMachineMenu_C::Txt_SelectCaption' has a wrong offset!");
static_assert(offsetof(UMachineMenu_C, OnClose) == 0x000310, "Member 'UMachineMenu_C::OnClose' has a wrong offset!");
static_assert(offsetof(UMachineMenu_C, OnMenuWidget) == 0x000320, "Member 'UMachineMenu_C::OnMenuWidget' has a wrong offset!");

}

