#pragma once

 

// Package: UMG_AdminGotoBookmarkWindowItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_AdminGotoBookmarkWindowItem.UMG_AdminGotoBookmarkWindowItem_C
// 0x0068 (0x02E0 - 0x0278)
class UUMG_AdminGotoBookmarkWindowItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_Move;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableText*                          EditableText_Description;                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Background;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Index;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_MapId;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_MapName;                                 // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_X;                                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Y;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Z;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBAdminGotoBookmarkItem*               Data;                                              // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickedMoveButton;                               // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnClickedMoveButton__DelegateSignature(class USBAdminGotoBookmarkItem* Param_Data);
	void ExecuteUbergraph_UMG_AdminGotoBookmarkWindowItem(int32 EntryPoint);
	void SetIdWarpMode(bool bFlag);
	void BndEvt__Button_Move_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ApplyData();
	void OnUpdateData(class USBAdminGotoBookmarkItem* Sender);
	void BndEvt__EditableText_Description_K2Node_ComponentBoundEvent_1_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnEntryReleased();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_AdminGotoBookmarkWindowItem_C">();
	}
	static class UUMG_AdminGotoBookmarkWindowItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_AdminGotoBookmarkWindowItem_C>();
	}
};
static_assert(alignof(UUMG_AdminGotoBookmarkWindowItem_C) == 0x000008, "Wrong alignment on UUMG_AdminGotoBookmarkWindowItem_C");
static_assert(sizeof(UUMG_AdminGotoBookmarkWindowItem_C) == 0x0002E0, "Wrong size on UUMG_AdminGotoBookmarkWindowItem_C");
static_assert(offsetof(UUMG_AdminGotoBookmarkWindowItem_C, UberGraphFrame) == 0x000278, "Member 'UUMG_AdminGotoBookmarkWindowItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_AdminGotoBookmarkWindowItem_C, Button_Move) == 0x000280, "Member 'UUMG_AdminGotoBookmarkWindowItem_C::Button_Move' has a wrong offset!");
static_assert(offsetof(UUMG_AdminGotoBookmarkWindowItem_C, EditableText_Description) == 0x000288, "Member 'UUMG_AdminGotoBookmarkWindowItem_C::EditableText_Description' has a wrong offset!");
static_assert(offsetof(UUMG_AdminGotoBookmarkWindowItem_C, Image_Background) == 0x000290, "Member 'UUMG_AdminGotoBookmarkWindowItem_C::Image_Background' has a wrong offset!");
static_assert(offsetof(UUMG_AdminGotoBookmarkWindowItem_C, TextBlock_Index) == 0x000298, "Member 'UUMG_AdminGotoBookmarkWindowItem_C::TextBlock_Index' has a wrong offset!");
static_assert(offsetof(UUMG_AdminGotoBookmarkWindowItem_C, TextBlock_MapId) == 0x0002A0, "Member 'UUMG_AdminGotoBookmarkWindowItem_C::TextBlock_MapId' has a wrong offset!");
static_assert(offsetof(UUMG_AdminGotoBookmarkWindowItem_C, TextBlock_MapName) == 0x0002A8, "Member 'UUMG_AdminGotoBookmarkWindowItem_C::TextBlock_MapName' has a wrong offset!");
static_assert(offsetof(UUMG_AdminGotoBookmarkWindowItem_C, TextBlock_X) == 0x0002B0, "Member 'UUMG_AdminGotoBookmarkWindowItem_C::TextBlock_X' has a wrong offset!");
static_assert(offsetof(UUMG_AdminGotoBookmarkWindowItem_C, TextBlock_Y) == 0x0002B8, "Member 'UUMG_AdminGotoBookmarkWindowItem_C::TextBlock_Y' has a wrong offset!");
static_assert(offsetof(UUMG_AdminGotoBookmarkWindowItem_C, TextBlock_Z) == 0x0002C0, "Member 'UUMG_AdminGotoBookmarkWindowItem_C::TextBlock_Z' has a wrong offset!");
static_assert(offsetof(UUMG_AdminGotoBookmarkWindowItem_C, Data) == 0x0002C8, "Member 'UUMG_AdminGotoBookmarkWindowItem_C::Data' has a wrong offset!");
static_assert(offsetof(UUMG_AdminGotoBookmarkWindowItem_C, OnClickedMoveButton) == 0x0002D0, "Member 'UUMG_AdminGotoBookmarkWindowItem_C::OnClickedMoveButton' has a wrong offset!");

}

