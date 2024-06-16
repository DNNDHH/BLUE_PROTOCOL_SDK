#pragma once

 

// Package: UMG_AdminGotoBookmarkRegistrationWindowItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_AdminGotoBookmarkRegistrationWindowItem.UMG_AdminGotoBookmarkRegistrationWindowItem_C
// 0x0040 (0x02B8 - 0x0278)
class UUMG_AdminGotoBookmarkRegistrationWindowItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UEditableText*                          EditableText_0;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_ItemName;                                // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   ItemName;                                          // 0x0290(0x0018)(Edit, BlueprintVisible)
	FMulticastInlineDelegateProperty_             OnTextChanged;                                     // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnTextChanged__DelegateSignature(const class FText& Text);
	void ExecuteUbergraph_UMG_AdminGotoBookmarkRegistrationWindowItem(int32 EntryPoint);
	void BndEvt__EditableText_0_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text);
	void PreConstruct(bool IsDesignTime);
	void GetText(class FString* Text);
	void SetText(const class FString& InText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_AdminGotoBookmarkRegistrationWindowItem_C">();
	}
	static class UUMG_AdminGotoBookmarkRegistrationWindowItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_AdminGotoBookmarkRegistrationWindowItem_C>();
	}
};
static_assert(alignof(UUMG_AdminGotoBookmarkRegistrationWindowItem_C) == 0x000008, "Wrong alignment on UUMG_AdminGotoBookmarkRegistrationWindowItem_C");
static_assert(sizeof(UUMG_AdminGotoBookmarkRegistrationWindowItem_C) == 0x0002B8, "Wrong size on UUMG_AdminGotoBookmarkRegistrationWindowItem_C");
static_assert(offsetof(UUMG_AdminGotoBookmarkRegistrationWindowItem_C, UberGraphFrame) == 0x000278, "Member 'UUMG_AdminGotoBookmarkRegistrationWindowItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_AdminGotoBookmarkRegistrationWindowItem_C, EditableText_0) == 0x000280, "Member 'UUMG_AdminGotoBookmarkRegistrationWindowItem_C::EditableText_0' has a wrong offset!");
static_assert(offsetof(UUMG_AdminGotoBookmarkRegistrationWindowItem_C, TextBlock_ItemName) == 0x000288, "Member 'UUMG_AdminGotoBookmarkRegistrationWindowItem_C::TextBlock_ItemName' has a wrong offset!");
static_assert(offsetof(UUMG_AdminGotoBookmarkRegistrationWindowItem_C, ItemName) == 0x000290, "Member 'UUMG_AdminGotoBookmarkRegistrationWindowItem_C::ItemName' has a wrong offset!");
static_assert(offsetof(UUMG_AdminGotoBookmarkRegistrationWindowItem_C, OnTextChanged) == 0x0002A8, "Member 'UUMG_AdminGotoBookmarkRegistrationWindowItem_C::OnTextChanged' has a wrong offset!");

}

