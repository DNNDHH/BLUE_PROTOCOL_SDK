#pragma once

 

// Package: WBP_InventoryStorageRowListItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "InventoryData_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_InventoryStorageRowListItem.WBP_InventoryStorageRowListItem_C
// 0x0398 (0x0610 - 0x0278)
class UWBP_InventoryStorageRowListItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonIconSimple_C*                    CommonIconSimple;                                  // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_LimitedIcon;                                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_LockIcon;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ShortcutIcon;                                // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 InventoryBtn01_bg;                                 // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ItemNameText;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ItemNumText;                                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ItemNumText_1;                                     // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ItemNumText_2;                                     // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NumMax;                                            // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_ItemName;                                 // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnItemClick;                                       // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	EItemType                                     ItemType;                                          // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58FB[0x3];                                     // 0x02E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MyItenIndex;                                       // 0x02EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryData                         ItemData;                                          // 0x02F0(0x0098)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FButtonStyle                           BaseButtonStyle;                                   // 0x0388(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnItemClickRight;                                  // 0x0600(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnItemClick__DelegateSignature(const struct FInventoryData& Param_ItemData, class UWBP_InventoryStorageRowListItem_C* UpdetaListItem);
	void OnItemClickRight__DelegateSignature(const struct FInventoryData& Param_ItemData, class UWBP_InventoryStorageRowListItem_C* UpdetaListItem);
	void ExecuteUbergraph_WBP_InventoryStorageRowListItem(int32 EntryPoint);
	void Construct();
	void UpdetaLockIcon();
	void BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void InitializeItemData(int32 InItemIndex, int32 StorageAmount, const struct FInventoryData& InventoryData);
	void SetLockIconVisibility(bool IsVisibility);
	void SetIconSelected(bool IsSelected);
	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_InventoryStorageRowListItem_C">();
	}
	static class UWBP_InventoryStorageRowListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_InventoryStorageRowListItem_C>();
	}
};
static_assert(alignof(UWBP_InventoryStorageRowListItem_C) == 0x000008, "Wrong alignment on UWBP_InventoryStorageRowListItem_C");
static_assert(sizeof(UWBP_InventoryStorageRowListItem_C) == 0x000610, "Wrong size on UWBP_InventoryStorageRowListItem_C");
static_assert(offsetof(UWBP_InventoryStorageRowListItem_C, UberGraphFrame) == 0x000278, "Member 'UWBP_InventoryStorageRowListItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryStorageRowListItem_C, CommonIconSimple) == 0x000280, "Member 'UWBP_InventoryStorageRowListItem_C::CommonIconSimple' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryStorageRowListItem_C, Image_LimitedIcon) == 0x000288, "Member 'UWBP_InventoryStorageRowListItem_C::Image_LimitedIcon' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryStorageRowListItem_C, Image_LockIcon) == 0x000290, "Member 'UWBP_InventoryStorageRowListItem_C::Image_LockIcon' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryStorageRowListItem_C, Image_ShortcutIcon) == 0x000298, "Member 'UWBP_InventoryStorageRowListItem_C::Image_ShortcutIcon' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryStorageRowListItem_C, InventoryBtn01_bg) == 0x0002A0, "Member 'UWBP_InventoryStorageRowListItem_C::InventoryBtn01_bg' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryStorageRowListItem_C, ItemNameText) == 0x0002A8, "Member 'UWBP_InventoryStorageRowListItem_C::ItemNameText' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryStorageRowListItem_C, ItemNumText) == 0x0002B0, "Member 'UWBP_InventoryStorageRowListItem_C::ItemNumText' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryStorageRowListItem_C, ItemNumText_1) == 0x0002B8, "Member 'UWBP_InventoryStorageRowListItem_C::ItemNumText_1' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryStorageRowListItem_C, ItemNumText_2) == 0x0002C0, "Member 'UWBP_InventoryStorageRowListItem_C::ItemNumText_2' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryStorageRowListItem_C, NumMax) == 0x0002C8, "Member 'UWBP_InventoryStorageRowListItem_C::NumMax' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryStorageRowListItem_C, SBButton_ItemName) == 0x0002D0, "Member 'UWBP_InventoryStorageRowListItem_C::SBButton_ItemName' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryStorageRowListItem_C, OnItemClick) == 0x0002D8, "Member 'UWBP_InventoryStorageRowListItem_C::OnItemClick' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryStorageRowListItem_C, ItemType) == 0x0002E8, "Member 'UWBP_InventoryStorageRowListItem_C::ItemType' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryStorageRowListItem_C, MyItenIndex) == 0x0002EC, "Member 'UWBP_InventoryStorageRowListItem_C::MyItenIndex' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryStorageRowListItem_C, ItemData) == 0x0002F0, "Member 'UWBP_InventoryStorageRowListItem_C::ItemData' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryStorageRowListItem_C, BaseButtonStyle) == 0x000388, "Member 'UWBP_InventoryStorageRowListItem_C::BaseButtonStyle' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryStorageRowListItem_C, OnItemClickRight) == 0x000600, "Member 'UWBP_InventoryStorageRowListItem_C::OnItemClickRight' has a wrong offset!");

}

