#pragma once

 

// Package: BP_RsDialog_LimitCondition_Item

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "RsDialogButtonType_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_RsDialog_LimitCondition_Item.BP_RsDialog_LimitCondition_Item_C
// 0x0020 (0x0298 - 0x0278)
class UBP_RsDialog_LimitCondition_Item_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBRichTextBlock*                       Txt_LimitCondition;                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnButtonClicked;                                   // 0x0288(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnButtonClicked__DelegateSignature(ERsDialogButtonType Type);
	void ExecuteUbergraph_BP_RsDialog_LimitCondition_Item(int32 EntryPoint);
	void SetItemInfo(bool IsAchieve, const class FString& Text);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RsDialog_LimitCondition_Item_C">();
	}
	static class UBP_RsDialog_LimitCondition_Item_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_RsDialog_LimitCondition_Item_C>();
	}
};
static_assert(alignof(UBP_RsDialog_LimitCondition_Item_C) == 0x000008, "Wrong alignment on UBP_RsDialog_LimitCondition_Item_C");
static_assert(sizeof(UBP_RsDialog_LimitCondition_Item_C) == 0x000298, "Wrong size on UBP_RsDialog_LimitCondition_Item_C");
static_assert(offsetof(UBP_RsDialog_LimitCondition_Item_C, UberGraphFrame) == 0x000278, "Member 'UBP_RsDialog_LimitCondition_Item_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_LimitCondition_Item_C, Txt_LimitCondition) == 0x000280, "Member 'UBP_RsDialog_LimitCondition_Item_C::Txt_LimitCondition' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_LimitCondition_Item_C, OnButtonClicked) == 0x000288, "Member 'UBP_RsDialog_LimitCondition_Item_C::OnButtonClicked' has a wrong offset!");

}

