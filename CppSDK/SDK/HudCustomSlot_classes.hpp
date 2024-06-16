#pragma once

 

// Package: HudCustomSlot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CustomSlotData_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HudCustomSlot.HudCustomSlot_C
// 0x00A8 (0x0358 - 0x02B0)
class UHudCustomSlot_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Btn_Cancel;                                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_CS1;                                           // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_CS2;                                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_CS3;                                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_CS01;                                          // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_CS02;                                          // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_CS03;                                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FCustomSlotData                        TargetSlotData;                                    // 0x02F0(0x0002)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56B1[0x6];                                     // 0x02F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             RequestSave;                                       // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<ESBCustomHudLayoutSlot, class USBRuntimeTextBlock*> ElemText;                                          // 0x0308(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void RequestSave__DelegateSignature(ESBCustomHudLayoutSlot Result);
	void ExecuteUbergraph_HudCustomSlot(int32 EntryPoint);
	void BndEvt__Btn_CS3_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Btn_CS2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Btn_CS1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void Destruct();
	void OnPress_Cancel();
	void BndEvt__Btn_Cancel_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void OnTextInputed(EDialogResult OnButton, const class FText& InputText);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void CollectBtnTxt();
	void GenerateTexts();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HudCustomSlot_C">();
	}
	static class UHudCustomSlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHudCustomSlot_C>();
	}
};
static_assert(alignof(UHudCustomSlot_C) == 0x000008, "Wrong alignment on UHudCustomSlot_C");
static_assert(sizeof(UHudCustomSlot_C) == 0x000358, "Wrong size on UHudCustomSlot_C");
static_assert(offsetof(UHudCustomSlot_C, UberGraphFrame) == 0x0002B0, "Member 'UHudCustomSlot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHudCustomSlot_C, Btn_Cancel) == 0x0002B8, "Member 'UHudCustomSlot_C::Btn_Cancel' has a wrong offset!");
static_assert(offsetof(UHudCustomSlot_C, Btn_CS1) == 0x0002C0, "Member 'UHudCustomSlot_C::Btn_CS1' has a wrong offset!");
static_assert(offsetof(UHudCustomSlot_C, Btn_CS2) == 0x0002C8, "Member 'UHudCustomSlot_C::Btn_CS2' has a wrong offset!");
static_assert(offsetof(UHudCustomSlot_C, Btn_CS3) == 0x0002D0, "Member 'UHudCustomSlot_C::Btn_CS3' has a wrong offset!");
static_assert(offsetof(UHudCustomSlot_C, Txt_CS01) == 0x0002D8, "Member 'UHudCustomSlot_C::Txt_CS01' has a wrong offset!");
static_assert(offsetof(UHudCustomSlot_C, Txt_CS02) == 0x0002E0, "Member 'UHudCustomSlot_C::Txt_CS02' has a wrong offset!");
static_assert(offsetof(UHudCustomSlot_C, Txt_CS03) == 0x0002E8, "Member 'UHudCustomSlot_C::Txt_CS03' has a wrong offset!");
static_assert(offsetof(UHudCustomSlot_C, TargetSlotData) == 0x0002F0, "Member 'UHudCustomSlot_C::TargetSlotData' has a wrong offset!");
static_assert(offsetof(UHudCustomSlot_C, RequestSave) == 0x0002F8, "Member 'UHudCustomSlot_C::RequestSave' has a wrong offset!");
static_assert(offsetof(UHudCustomSlot_C, ElemText) == 0x000308, "Member 'UHudCustomSlot_C::ElemText' has a wrong offset!");

}

