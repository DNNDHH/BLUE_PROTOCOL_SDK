#pragma once

 

// Package: LibraryMenu_MonsterAreaListItem

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LibraryMenu_MonsterAreaListItem.LibraryMenu_MonsterAreaListItem_C
// 0x0598 (0x0810 - 0x0278)
class ULibraryMenu_MonsterAreaListItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBRuntimeTextBlock*                    AreaText;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NewIcon;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_C_402;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TimeIcon1;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TimeIcon2;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        TimeIconSwitch;                                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSelect;                                          // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         EnterValue;                                        // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7CE4[0x4];                                     // 0x02C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            DefaultTextColor;                                  // 0x02C8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            SelectedTextColor;                                 // 0x02F0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                           NormalBtn;                                         // 0x0318(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                           SelectedBtn;                                       // 0x0590(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          BtnSelected;                                       // 0x0808(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnSelect__DelegateSignature(int32 Value);
	void ExecuteUbergraph_LibraryMenu_MonsterAreaListItem(int32 EntryPoint);
	void BndEvt__LibraryMenu_MonsterAreaListItem_SBButton_C_402_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__LibraryMenu_MonsterAreaListItem_SBButton_C_402_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__LibraryMenu_MonsterAreaListItem_SBButton_C_402_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SetText(const class FString& AreaNameText);
	void SetNewIcon(bool Visible);
	void SetTimeIcon(int32 Type);
	void SetSelectColor(bool Selected);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LibraryMenu_MonsterAreaListItem_C">();
	}
	static class ULibraryMenu_MonsterAreaListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULibraryMenu_MonsterAreaListItem_C>();
	}
};
static_assert(alignof(ULibraryMenu_MonsterAreaListItem_C) == 0x000008, "Wrong alignment on ULibraryMenu_MonsterAreaListItem_C");
static_assert(sizeof(ULibraryMenu_MonsterAreaListItem_C) == 0x000810, "Wrong size on ULibraryMenu_MonsterAreaListItem_C");
static_assert(offsetof(ULibraryMenu_MonsterAreaListItem_C, UberGraphFrame) == 0x000278, "Member 'ULibraryMenu_MonsterAreaListItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_MonsterAreaListItem_C, AreaText) == 0x000280, "Member 'ULibraryMenu_MonsterAreaListItem_C::AreaText' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_MonsterAreaListItem_C, NewIcon) == 0x000288, "Member 'ULibraryMenu_MonsterAreaListItem_C::NewIcon' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_MonsterAreaListItem_C, SBButton_C_402) == 0x000290, "Member 'ULibraryMenu_MonsterAreaListItem_C::SBButton_C_402' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_MonsterAreaListItem_C, TimeIcon1) == 0x000298, "Member 'ULibraryMenu_MonsterAreaListItem_C::TimeIcon1' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_MonsterAreaListItem_C, TimeIcon2) == 0x0002A0, "Member 'ULibraryMenu_MonsterAreaListItem_C::TimeIcon2' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_MonsterAreaListItem_C, TimeIconSwitch) == 0x0002A8, "Member 'ULibraryMenu_MonsterAreaListItem_C::TimeIconSwitch' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_MonsterAreaListItem_C, OnSelect) == 0x0002B0, "Member 'ULibraryMenu_MonsterAreaListItem_C::OnSelect' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_MonsterAreaListItem_C, EnterValue) == 0x0002C0, "Member 'ULibraryMenu_MonsterAreaListItem_C::EnterValue' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_MonsterAreaListItem_C, DefaultTextColor) == 0x0002C8, "Member 'ULibraryMenu_MonsterAreaListItem_C::DefaultTextColor' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_MonsterAreaListItem_C, SelectedTextColor) == 0x0002F0, "Member 'ULibraryMenu_MonsterAreaListItem_C::SelectedTextColor' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_MonsterAreaListItem_C, NormalBtn) == 0x000318, "Member 'ULibraryMenu_MonsterAreaListItem_C::NormalBtn' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_MonsterAreaListItem_C, SelectedBtn) == 0x000590, "Member 'ULibraryMenu_MonsterAreaListItem_C::SelectedBtn' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_MonsterAreaListItem_C, BtnSelected) == 0x000808, "Member 'ULibraryMenu_MonsterAreaListItem_C::BtnSelected' has a wrong offset!");

}

