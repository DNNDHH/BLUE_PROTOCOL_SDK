#pragma once

 

// Package: LibraryMenu_ListItemIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LibraryMenu_ListItemIcon.LibraryMenu_ListItemIcon_C
// 0x0080 (0x02F8 - 0x0278)
class ULibraryMenu_ListItemIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn1;                                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonIconSimple_C*                    CommonIconSimple;                                  // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconNew;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ItemName;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PossessionMarkIcon;                                // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchIcon;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchName;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchSelected;                                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClick;                                           // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         ListIndex;                                         // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	EItemType                                     ItemType;                                          // 0x02D4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_4B90[0x3];                                     // 0x02D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Text;                                              // 0x02D8(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                         ItemIndex;                                         // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsSecret;                                          // 0x02F4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void OnClick__DelegateSignature(int32 Param_ListIndex);
	void ExecuteUbergraph_LibraryMenu_ListItemIcon(int32 EntryPoint);
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_99_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_80_OnButtonHoverEvent__DelegateSignature();
	void Construct();
	void BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature();
	void SetName(const class FText& InText);
	void SetBtnSelected(bool bSelected);
	void SetPossessionMarkIcon(bool InVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LibraryMenu_ListItemIcon_C">();
	}
	static class ULibraryMenu_ListItemIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULibraryMenu_ListItemIcon_C>();
	}
};
static_assert(alignof(ULibraryMenu_ListItemIcon_C) == 0x000008, "Wrong alignment on ULibraryMenu_ListItemIcon_C");
static_assert(sizeof(ULibraryMenu_ListItemIcon_C) == 0x0002F8, "Wrong size on ULibraryMenu_ListItemIcon_C");
static_assert(offsetof(ULibraryMenu_ListItemIcon_C, UberGraphFrame) == 0x000278, "Member 'ULibraryMenu_ListItemIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ListItemIcon_C, Btn1) == 0x000280, "Member 'ULibraryMenu_ListItemIcon_C::Btn1' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ListItemIcon_C, CommonIconSimple) == 0x000288, "Member 'ULibraryMenu_ListItemIcon_C::CommonIconSimple' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ListItemIcon_C, IconNew) == 0x000290, "Member 'ULibraryMenu_ListItemIcon_C::IconNew' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ListItemIcon_C, ItemName) == 0x000298, "Member 'ULibraryMenu_ListItemIcon_C::ItemName' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ListItemIcon_C, PossessionMarkIcon) == 0x0002A0, "Member 'ULibraryMenu_ListItemIcon_C::PossessionMarkIcon' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ListItemIcon_C, SwitchIcon) == 0x0002A8, "Member 'ULibraryMenu_ListItemIcon_C::SwitchIcon' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ListItemIcon_C, SwitchName) == 0x0002B0, "Member 'ULibraryMenu_ListItemIcon_C::SwitchName' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ListItemIcon_C, SwitchSelected) == 0x0002B8, "Member 'ULibraryMenu_ListItemIcon_C::SwitchSelected' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ListItemIcon_C, OnClick) == 0x0002C0, "Member 'ULibraryMenu_ListItemIcon_C::OnClick' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ListItemIcon_C, ListIndex) == 0x0002D0, "Member 'ULibraryMenu_ListItemIcon_C::ListIndex' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ListItemIcon_C, ItemType) == 0x0002D4, "Member 'ULibraryMenu_ListItemIcon_C::ItemType' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ListItemIcon_C, Text) == 0x0002D8, "Member 'ULibraryMenu_ListItemIcon_C::Text' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ListItemIcon_C, ItemIndex) == 0x0002F0, "Member 'ULibraryMenu_ListItemIcon_C::ItemIndex' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_ListItemIcon_C, IsSecret) == 0x0002F4, "Member 'ULibraryMenu_ListItemIcon_C::IsSecret' has a wrong offset!");

}

