#pragma once

 

// Package: WBP_MultiSelectMountImagineBlock

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

// WidgetBlueprintGeneratedClass WBP_MultiSelectMountImagineBlock.WBP_MultiSelectMountImagineBlock_C
// 0x0408 (0x0680 - 0x0278)
class UWBP_MultiSelectMountImagineBlock_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BG;                                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnIcon_KeyItem_C*                     CmnIcon_KeyItem;                                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Dispatched;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_LockIcon;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryTag_C*                        InventoryTagBPP;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryUsed_C*                       InventoryUsed;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    ItemNameText_1;                                    // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MoneyText;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_ItemName;                                 // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InventoryMountImagineDispatched_C* WBP_InventoryMountImagineDispatched;               // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StackB_S_C*                        WBP_StackB_S;                                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EItemType                                     ItemType;                                          // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_70BF[0x3];                                     // 0x02D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MyItenIndex;                                       // 0x02DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryData                         ItemData;                                          // 0x02E0(0x0098)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FButtonStyle                           BaseButtonStyle;                                   // 0x0378(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWBP_StorageRowListItem_C*              StorageListItem;                                   // 0x05F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryItemData                     InventoryData;                                     // 0x05F8(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnUpdatePrice;                                     // 0x0658(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClick;                                           // 0x0668(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsFangExpeditionUsing;                             // 0x0678(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnUpdatePrice__DelegateSignature();
	void OnClick__DelegateSignature(const struct FInventoryItemData& Param_InventoryData);
	void ExecuteUbergraph_WBP_MultiSelectMountImagineBlock(int32 EntryPoint);
	void BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void UpdateDisplay();
	void SetStorageItem(class UWBP_StorageRowListItem_C* InStorageListItem);
	void SetOneItem(const struct FInventoryItemData& InventoryItemData);
	void GetPrice(int32* Price);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MultiSelectMountImagineBlock_C">();
	}
	static class UWBP_MultiSelectMountImagineBlock_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MultiSelectMountImagineBlock_C>();
	}
};
static_assert(alignof(UWBP_MultiSelectMountImagineBlock_C) == 0x000008, "Wrong alignment on UWBP_MultiSelectMountImagineBlock_C");
static_assert(sizeof(UWBP_MultiSelectMountImagineBlock_C) == 0x000680, "Wrong size on UWBP_MultiSelectMountImagineBlock_C");
static_assert(offsetof(UWBP_MultiSelectMountImagineBlock_C, UberGraphFrame) == 0x000278, "Member 'UWBP_MultiSelectMountImagineBlock_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectMountImagineBlock_C, BG) == 0x000280, "Member 'UWBP_MultiSelectMountImagineBlock_C::BG' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectMountImagineBlock_C, CmnIcon_KeyItem) == 0x000288, "Member 'UWBP_MultiSelectMountImagineBlock_C::CmnIcon_KeyItem' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectMountImagineBlock_C, Dispatched) == 0x000290, "Member 'UWBP_MultiSelectMountImagineBlock_C::Dispatched' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectMountImagineBlock_C, Image_LockIcon) == 0x000298, "Member 'UWBP_MultiSelectMountImagineBlock_C::Image_LockIcon' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectMountImagineBlock_C, InventoryTagBPP) == 0x0002A0, "Member 'UWBP_MultiSelectMountImagineBlock_C::InventoryTagBPP' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectMountImagineBlock_C, InventoryUsed) == 0x0002A8, "Member 'UWBP_MultiSelectMountImagineBlock_C::InventoryUsed' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectMountImagineBlock_C, ItemNameText_1) == 0x0002B0, "Member 'UWBP_MultiSelectMountImagineBlock_C::ItemNameText_1' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectMountImagineBlock_C, MoneyText) == 0x0002B8, "Member 'UWBP_MultiSelectMountImagineBlock_C::MoneyText' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectMountImagineBlock_C, SBButton_ItemName) == 0x0002C0, "Member 'UWBP_MultiSelectMountImagineBlock_C::SBButton_ItemName' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectMountImagineBlock_C, WBP_InventoryMountImagineDispatched) == 0x0002C8, "Member 'UWBP_MultiSelectMountImagineBlock_C::WBP_InventoryMountImagineDispatched' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectMountImagineBlock_C, WBP_StackB_S) == 0x0002D0, "Member 'UWBP_MultiSelectMountImagineBlock_C::WBP_StackB_S' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectMountImagineBlock_C, ItemType) == 0x0002D8, "Member 'UWBP_MultiSelectMountImagineBlock_C::ItemType' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectMountImagineBlock_C, MyItenIndex) == 0x0002DC, "Member 'UWBP_MultiSelectMountImagineBlock_C::MyItenIndex' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectMountImagineBlock_C, ItemData) == 0x0002E0, "Member 'UWBP_MultiSelectMountImagineBlock_C::ItemData' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectMountImagineBlock_C, BaseButtonStyle) == 0x000378, "Member 'UWBP_MultiSelectMountImagineBlock_C::BaseButtonStyle' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectMountImagineBlock_C, StorageListItem) == 0x0005F0, "Member 'UWBP_MultiSelectMountImagineBlock_C::StorageListItem' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectMountImagineBlock_C, InventoryData) == 0x0005F8, "Member 'UWBP_MultiSelectMountImagineBlock_C::InventoryData' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectMountImagineBlock_C, OnUpdatePrice) == 0x000658, "Member 'UWBP_MultiSelectMountImagineBlock_C::OnUpdatePrice' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectMountImagineBlock_C, OnClick) == 0x000668, "Member 'UWBP_MultiSelectMountImagineBlock_C::OnClick' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectMountImagineBlock_C, IsFangExpeditionUsing) == 0x000678, "Member 'UWBP_MultiSelectMountImagineBlock_C::IsFangExpeditionUsing' has a wrong offset!");

}

