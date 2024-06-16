#pragma once

 

// Package: WBP_MultiSelectOrnamentBlock

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "InventoryItemData_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "InventoryData_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_MultiSelectOrnamentBlock.WBP_MultiSelectOrnamentBlock_C
// 0x03F0 (0x0668 - 0x0278)
class UWBP_MultiSelectOrnamentBlock_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BG;                                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnIcon_KeyItem_C*                     CmnIcon_KeyItem;                                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_LockIcon;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryTag_C*                        InventoryTagBPP;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryUsed_C*                       InventoryUsed;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    ItemNameText_1;                                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MoneyText;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_ItemName;                                 // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EItemType                                     ItemType;                                          // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45C1[0x3];                                     // 0x02C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MyItenIndex;                                       // 0x02C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryData                         ItemData;                                          // 0x02C8(0x0098)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FButtonStyle                           BaseButtonStyle;                                   // 0x0360(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWBP_StorageRowListItem_C*              StorageListItem;                                   // 0x05D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryItemData                     InventoryData;                                     // 0x05E0(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnUpdatePrice;                                     // 0x0640(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClick;                                           // 0x0650(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsFangExpeditionUsing;                             // 0x0660(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnUpdatePrice__DelegateSignature();
	void OnClick__DelegateSignature(const struct FInventoryItemData& Param_InventoryData);
	void ExecuteUbergraph_WBP_MultiSelectOrnamentBlock(int32 EntryPoint);
	void BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void UpdateDisplay();
	void SetStorageItem(class UWBP_StorageRowListItem_C* InStorageListItem);
	void SetOneItem(const struct FInventoryItemData& InventoryItemData);
	void GetPrice(int32* Price);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MultiSelectOrnamentBlock_C">();
	}
	static class UWBP_MultiSelectOrnamentBlock_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MultiSelectOrnamentBlock_C>();
	}
};
static_assert(alignof(UWBP_MultiSelectOrnamentBlock_C) == 0x000008, "Wrong alignment on UWBP_MultiSelectOrnamentBlock_C");
static_assert(sizeof(UWBP_MultiSelectOrnamentBlock_C) == 0x000668, "Wrong size on UWBP_MultiSelectOrnamentBlock_C");
static_assert(offsetof(UWBP_MultiSelectOrnamentBlock_C, UberGraphFrame) == 0x000278, "Member 'UWBP_MultiSelectOrnamentBlock_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectOrnamentBlock_C, BG) == 0x000280, "Member 'UWBP_MultiSelectOrnamentBlock_C::BG' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectOrnamentBlock_C, CmnIcon_KeyItem) == 0x000288, "Member 'UWBP_MultiSelectOrnamentBlock_C::CmnIcon_KeyItem' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectOrnamentBlock_C, Image_LockIcon) == 0x000290, "Member 'UWBP_MultiSelectOrnamentBlock_C::Image_LockIcon' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectOrnamentBlock_C, InventoryTagBPP) == 0x000298, "Member 'UWBP_MultiSelectOrnamentBlock_C::InventoryTagBPP' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectOrnamentBlock_C, InventoryUsed) == 0x0002A0, "Member 'UWBP_MultiSelectOrnamentBlock_C::InventoryUsed' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectOrnamentBlock_C, ItemNameText_1) == 0x0002A8, "Member 'UWBP_MultiSelectOrnamentBlock_C::ItemNameText_1' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectOrnamentBlock_C, MoneyText) == 0x0002B0, "Member 'UWBP_MultiSelectOrnamentBlock_C::MoneyText' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectOrnamentBlock_C, SBButton_ItemName) == 0x0002B8, "Member 'UWBP_MultiSelectOrnamentBlock_C::SBButton_ItemName' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectOrnamentBlock_C, ItemType) == 0x0002C0, "Member 'UWBP_MultiSelectOrnamentBlock_C::ItemType' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectOrnamentBlock_C, MyItenIndex) == 0x0002C4, "Member 'UWBP_MultiSelectOrnamentBlock_C::MyItenIndex' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectOrnamentBlock_C, ItemData) == 0x0002C8, "Member 'UWBP_MultiSelectOrnamentBlock_C::ItemData' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectOrnamentBlock_C, BaseButtonStyle) == 0x000360, "Member 'UWBP_MultiSelectOrnamentBlock_C::BaseButtonStyle' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectOrnamentBlock_C, StorageListItem) == 0x0005D8, "Member 'UWBP_MultiSelectOrnamentBlock_C::StorageListItem' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectOrnamentBlock_C, InventoryData) == 0x0005E0, "Member 'UWBP_MultiSelectOrnamentBlock_C::InventoryData' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectOrnamentBlock_C, OnUpdatePrice) == 0x000640, "Member 'UWBP_MultiSelectOrnamentBlock_C::OnUpdatePrice' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectOrnamentBlock_C, OnClick) == 0x000650, "Member 'UWBP_MultiSelectOrnamentBlock_C::OnClick' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectOrnamentBlock_C, IsFangExpeditionUsing) == 0x000660, "Member 'UWBP_MultiSelectOrnamentBlock_C::IsFangExpeditionUsing' has a wrong offset!");

}

