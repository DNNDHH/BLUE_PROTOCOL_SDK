#pragma once

 

// Package: LibraryMenu_ListItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LibraryMenu_ListItem.LibraryMenu_ListItem_C
// 0x0058 (0x02D0 - 0x0278)
class ULibraryMenu_ListItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn1;                                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconNew;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ItemName;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchSelected;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClick;                                           // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         ListIndex;                                         // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_4ABA[0x4];                                     // 0x02B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Text;                                              // 0x02B8(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void OnClick__DelegateSignature(int32 Param_ListIndex);
	void ExecuteUbergraph_LibraryMenu_ListItem(int32 EntryPoint);
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_122_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_103_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void SetName(const class FText& InText);
	void SetBtnSelected(bool bSelected);
	void Set_New_Icon(ESlateVisibility InVisibility);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LibraryMenu_ListItem_C">();
	}
	static class ULibraryMenu_ListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULibraryMenu_ListItem_C>();
	}
};
static_assert(alignof(ULibraryMenu_ListItem_C) == 0x000008, "Wrong alignment on ULibraryMenu_ListItem_C");
static_assert(sizeof(ULibraryMenu_ListItem_C) == 0x0002D0, "Wrong size on ULibraryMenu_ListItem_C");
static_assert(offsetof(ULibraryMenu_ListItem_C, UberGraphFrame) == 0x000278, "Member 'ULibraryMenu_ListItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ListItem_C, Btn1) == 0x000280, "Member 'ULibraryMenu_ListItem_C::Btn1' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ListItem_C, IconNew) == 0x000288, "Member 'ULibraryMenu_ListItem_C::IconNew' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ListItem_C, ItemName) == 0x000290, "Member 'ULibraryMenu_ListItem_C::ItemName' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ListItem_C, SwitchSelected) == 0x000298, "Member 'ULibraryMenu_ListItem_C::SwitchSelected' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ListItem_C, OnClick) == 0x0002A0, "Member 'ULibraryMenu_ListItem_C::OnClick' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ListItem_C, ListIndex) == 0x0002B0, "Member 'ULibraryMenu_ListItem_C::ListIndex' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ListItem_C, Text) == 0x0002B8, "Member 'ULibraryMenu_ListItem_C::Text' has a wrong offset!");

}

