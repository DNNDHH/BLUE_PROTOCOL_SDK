#pragma once

 

// Package: ChatLogFilterItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ChatLogFilterItem.ChatLogFilterItem_C
// 0x0030 (0x02A8 - 0x0278)
class UChatLogFilterItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBCheckBox_C*                          CheckBox1;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    ItemNameLabel;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             EventCheckStateChanged;                            // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         TextId;                                            // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void EventCheckStateChanged__DelegateSignature(bool IsChecked);
	void ExecuteUbergraph_ChatLogFilterItem(int32 EntryPoint);
	void BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_90_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void PreConstruct(bool IsDesignTime);
	void SetChecked(bool IsChecked);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChatLogFilterItem_C">();
	}
	static class UChatLogFilterItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChatLogFilterItem_C>();
	}
};
static_assert(alignof(UChatLogFilterItem_C) == 0x000008, "Wrong alignment on UChatLogFilterItem_C");
static_assert(sizeof(UChatLogFilterItem_C) == 0x0002A8, "Wrong size on UChatLogFilterItem_C");
static_assert(offsetof(UChatLogFilterItem_C, UberGraphFrame) == 0x000278, "Member 'UChatLogFilterItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UChatLogFilterItem_C, CheckBox1) == 0x000280, "Member 'UChatLogFilterItem_C::CheckBox1' has a wrong offset!");
static_assert(offsetof(UChatLogFilterItem_C, ItemNameLabel) == 0x000288, "Member 'UChatLogFilterItem_C::ItemNameLabel' has a wrong offset!");
static_assert(offsetof(UChatLogFilterItem_C, EventCheckStateChanged) == 0x000290, "Member 'UChatLogFilterItem_C::EventCheckStateChanged' has a wrong offset!");
static_assert(offsetof(UChatLogFilterItem_C, TextId) == 0x0002A0, "Member 'UChatLogFilterItem_C::TextId' has a wrong offset!");

}

