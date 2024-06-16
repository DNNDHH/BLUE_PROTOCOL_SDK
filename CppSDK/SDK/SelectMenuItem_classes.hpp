#pragma once

 

// Package: SelectMenuItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SelectMenuItem.SelectMenuItem_C
// 0x0040 (0x02B8 - 0x0278)
class USelectMenuItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_0;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ButtonLabel;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Text;                                              // 0x0290(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_             OnSelectItem;                                      // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnSelectItem__DelegateSignature(class USelectMenuItem_C* SelectItem);
	void ExecuteUbergraph_SelectMenuItem(int32 EntryPoint);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_470_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_349_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void Set_Menu_Focus(bool bFocus);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SelectMenuItem_C">();
	}
	static class USelectMenuItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USelectMenuItem_C>();
	}
};
static_assert(alignof(USelectMenuItem_C) == 0x000008, "Wrong alignment on USelectMenuItem_C");
static_assert(sizeof(USelectMenuItem_C) == 0x0002B8, "Wrong size on USelectMenuItem_C");
static_assert(offsetof(USelectMenuItem_C, UberGraphFrame) == 0x000278, "Member 'USelectMenuItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USelectMenuItem_C, Button_0) == 0x000280, "Member 'USelectMenuItem_C::Button_0' has a wrong offset!");
static_assert(offsetof(USelectMenuItem_C, ButtonLabel) == 0x000288, "Member 'USelectMenuItem_C::ButtonLabel' has a wrong offset!");
static_assert(offsetof(USelectMenuItem_C, Text) == 0x000290, "Member 'USelectMenuItem_C::Text' has a wrong offset!");
static_assert(offsetof(USelectMenuItem_C, OnSelectItem) == 0x0002A8, "Member 'USelectMenuItem_C::OnSelectItem' has a wrong offset!");

}

