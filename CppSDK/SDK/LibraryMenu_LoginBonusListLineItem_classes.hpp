#pragma once

 

// Package: LibraryMenu_LoginBonusListLineItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LibraryMenu_LoginBonusListLineItem.LibraryMenu_LoginBonusListLineItem_C
// 0x0048 (0x02C0 - 0x0278)
class ULibraryMenu_LoginBonusListLineItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonIcon_C*                          CommonIcon;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       DayText;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            ExplainOpen;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       NumText;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Stump;                                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             ItemClick;                                         // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         ClickId;                                           // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ItemClick__DelegateSignature(int32 ID);
	void ExecuteUbergraph_LibraryMenu_LoginBonusListLineItem(int32 EntryPoint);
	void BndEvt__ExplainOpen_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__ExplainOpen_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void SetData(const struct FSBLoginBonusWindowDayData& Data, bool StumpOn);
	void SetMouseClickValue(int32 Value);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LibraryMenu_LoginBonusListLineItem_C">();
	}
	static class ULibraryMenu_LoginBonusListLineItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULibraryMenu_LoginBonusListLineItem_C>();
	}
};
static_assert(alignof(ULibraryMenu_LoginBonusListLineItem_C) == 0x000008, "Wrong alignment on ULibraryMenu_LoginBonusListLineItem_C");
static_assert(sizeof(ULibraryMenu_LoginBonusListLineItem_C) == 0x0002C0, "Wrong size on ULibraryMenu_LoginBonusListLineItem_C");
static_assert(offsetof(ULibraryMenu_LoginBonusListLineItem_C, UberGraphFrame) == 0x000278, "Member 'ULibraryMenu_LoginBonusListLineItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusListLineItem_C, CommonIcon) == 0x000280, "Member 'ULibraryMenu_LoginBonusListLineItem_C::CommonIcon' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusListLineItem_C, DayText) == 0x000288, "Member 'ULibraryMenu_LoginBonusListLineItem_C::DayText' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusListLineItem_C, ExplainOpen) == 0x000290, "Member 'ULibraryMenu_LoginBonusListLineItem_C::ExplainOpen' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusListLineItem_C, NumText) == 0x000298, "Member 'ULibraryMenu_LoginBonusListLineItem_C::NumText' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusListLineItem_C, Stump) == 0x0002A0, "Member 'ULibraryMenu_LoginBonusListLineItem_C::Stump' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusListLineItem_C, ItemClick) == 0x0002A8, "Member 'ULibraryMenu_LoginBonusListLineItem_C::ItemClick' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonusListLineItem_C, ClickId) == 0x0002B8, "Member 'ULibraryMenu_LoginBonusListLineItem_C::ClickId' has a wrong offset!");

}

