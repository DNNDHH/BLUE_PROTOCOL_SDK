#pragma once

 

// Package: BP_ChoiceDialogItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_ChoiceDialogItem.BP_ChoiceDialogItem_C
// 0x0040 (0x02B8 - 0x0278)
class UBP_ChoiceDialogItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_0;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label_Button;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   ItemText;                                          // 0x0290(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnClicked__DelegateSignature(class UBP_ChoiceDialogItem_C* Widget);
	void ExecuteUbergraph_BP_ChoiceDialogItem(int32 EntryPoint);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ChoiceDialogItem_C">();
	}
	static class UBP_ChoiceDialogItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ChoiceDialogItem_C>();
	}
};
static_assert(alignof(UBP_ChoiceDialogItem_C) == 0x000008, "Wrong alignment on UBP_ChoiceDialogItem_C");
static_assert(sizeof(UBP_ChoiceDialogItem_C) == 0x0002B8, "Wrong size on UBP_ChoiceDialogItem_C");
static_assert(offsetof(UBP_ChoiceDialogItem_C, UberGraphFrame) == 0x000278, "Member 'UBP_ChoiceDialogItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ChoiceDialogItem_C, Button_0) == 0x000280, "Member 'UBP_ChoiceDialogItem_C::Button_0' has a wrong offset!");
static_assert(offsetof(UBP_ChoiceDialogItem_C, Label_Button) == 0x000288, "Member 'UBP_ChoiceDialogItem_C::Label_Button' has a wrong offset!");
static_assert(offsetof(UBP_ChoiceDialogItem_C, ItemText) == 0x000290, "Member 'UBP_ChoiceDialogItem_C::ItemText' has a wrong offset!");
static_assert(offsetof(UBP_ChoiceDialogItem_C, OnClicked) == 0x0002A8, "Member 'UBP_ChoiceDialogItem_C::OnClicked' has a wrong offset!");

}

