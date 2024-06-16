#pragma once

 

// Package: ActionMenuButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ActionMenuButton.ActionMenuButton_C
// 0x0040 (0x02B8 - 0x0278)
class UActionMenuButton_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_0;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LabelButton;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                   Text;                                              // 0x02A0(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void OnClicked__DelegateSignature(class UActionMenuButton_C* Button);
	void ExecuteUbergraph_ActionMenuButton(int32 EntryPoint);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void SetText(const class FText& InText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ActionMenuButton_C">();
	}
	static class UActionMenuButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UActionMenuButton_C>();
	}
};
static_assert(alignof(UActionMenuButton_C) == 0x000008, "Wrong alignment on UActionMenuButton_C");
static_assert(sizeof(UActionMenuButton_C) == 0x0002B8, "Wrong size on UActionMenuButton_C");
static_assert(offsetof(UActionMenuButton_C, UberGraphFrame) == 0x000278, "Member 'UActionMenuButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UActionMenuButton_C, Button_0) == 0x000280, "Member 'UActionMenuButton_C::Button_0' has a wrong offset!");
static_assert(offsetof(UActionMenuButton_C, LabelButton) == 0x000288, "Member 'UActionMenuButton_C::LabelButton' has a wrong offset!");
static_assert(offsetof(UActionMenuButton_C, OnClicked) == 0x000290, "Member 'UActionMenuButton_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UActionMenuButton_C, Text) == 0x0002A0, "Member 'UActionMenuButton_C::Text' has a wrong offset!");

}

