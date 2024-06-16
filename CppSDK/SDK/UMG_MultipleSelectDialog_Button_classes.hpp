#pragma once

 

// Package: UMG_MultipleSelectDialog_Button

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_MultipleSelectDialog_Button.UMG_MultipleSelectDialog_Button_C
// 0x0048 (0x02C0 - 0x0278)
class UUMG_MultipleSelectDialog_Button_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Button;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt1;                                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Text;                                              // 0x0290(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                         Index_UMG_MultipleSelectDialog_Button_C;           // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_4C03[0x4];                                     // 0x02AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSelected;                                        // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnSelected__DelegateSignature(int32 SelectIndex);
	void ExecuteUbergraph_UMG_MultipleSelectDialog_Button(int32 EntryPoint);
	void BndEvt__Button_K2Node_ComponentBoundEvent_48_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_K2Node_ComponentBoundEvent_67_OnButtonClickedEvent__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_MultipleSelectDialog_Button_C">();
	}
	static class UUMG_MultipleSelectDialog_Button_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_MultipleSelectDialog_Button_C>();
	}
};
static_assert(alignof(UUMG_MultipleSelectDialog_Button_C) == 0x000008, "Wrong alignment on UUMG_MultipleSelectDialog_Button_C");
static_assert(sizeof(UUMG_MultipleSelectDialog_Button_C) == 0x0002C0, "Wrong size on UUMG_MultipleSelectDialog_Button_C");
static_assert(offsetof(UUMG_MultipleSelectDialog_Button_C, UberGraphFrame) == 0x000278, "Member 'UUMG_MultipleSelectDialog_Button_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_MultipleSelectDialog_Button_C, Button) == 0x000280, "Member 'UUMG_MultipleSelectDialog_Button_C::Button' has a wrong offset!");
static_assert(offsetof(UUMG_MultipleSelectDialog_Button_C, Txt1) == 0x000288, "Member 'UUMG_MultipleSelectDialog_Button_C::Txt1' has a wrong offset!");
static_assert(offsetof(UUMG_MultipleSelectDialog_Button_C, Text) == 0x000290, "Member 'UUMG_MultipleSelectDialog_Button_C::Text' has a wrong offset!");
static_assert(offsetof(UUMG_MultipleSelectDialog_Button_C, Index_UMG_MultipleSelectDialog_Button_C) == 0x0002A8, "Member 'UUMG_MultipleSelectDialog_Button_C::Index_UMG_MultipleSelectDialog_Button_C' has a wrong offset!");
static_assert(offsetof(UUMG_MultipleSelectDialog_Button_C, OnSelected) == 0x0002B0, "Member 'UUMG_MultipleSelectDialog_Button_C::OnSelected' has a wrong offset!");

}

