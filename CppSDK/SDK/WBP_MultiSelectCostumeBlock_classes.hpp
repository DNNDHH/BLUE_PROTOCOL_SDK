#pragma once

 

// Package: WBP_MultiSelectCostumeBlock

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CharaParts_structs.hpp"
#include "InventoryItemData_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "InventoryData_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_MultiSelectCostumeBlock.WBP_MultiSelectCostumeBlock_C
// 0x05D0 (0x0848 - 0x0278)
class UWBP_MultiSelectCostumeBlock_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BG;                                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnIcon_KeyItem_C*                     CmnIcon_KeyItem;                                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Color;                                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Colorus;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconBg;                                            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconColor;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_LockIcon;                                    // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryTag_C*                        InventoryTagBPP;                                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryUsed_C*                       InventoryUsed;                                     // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    ItemNameText_1;                                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MoneyText;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Parts;                                             // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Parts_1;                                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Parts_2;                                           // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    PartsList;                                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_ItemName;                                 // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EItemType                                     ItemType;                                          // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7769[0x3];                                     // 0x0301(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MyItenIndex;                                       // 0x0304(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryData                         ItemData;                                          // 0x0308(0x0098)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FButtonStyle                           BaseButtonStyle;                                   // 0x03A0(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWBP_StorageRowListItem_C*              StorageListItem;                                   // 0x0618(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryItemData                     InventoryItemData;                                 // 0x0620(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnUpdatePrice;                                     // 0x0680(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClick;                                           // 0x0690(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class USBMasterDataManager*                   ItemDataManager;                                   // 0x06A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMasterCostume                       CostumeMaster;                                     // 0x06A8(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FOwnItemInfo                           OwnItemInfo;                                       // 0x0730(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnUpdatePrice__DelegateSignature();
	void OnClick__DelegateSignature(const struct FInventoryItemData& InventoryData);
	void ExecuteUbergraph_WBP_MultiSelectCostumeBlock(int32 EntryPoint);
	void SetOneItem(const struct FInventoryItemData& Param_InventoryItemData);
	void BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void GetPrice(int32* Price);
	void SetCostumeColor();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MultiSelectCostumeBlock_C">();
	}
	static class UWBP_MultiSelectCostumeBlock_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MultiSelectCostumeBlock_C>();
	}
};
static_assert(alignof(UWBP_MultiSelectCostumeBlock_C) == 0x000008, "Wrong alignment on UWBP_MultiSelectCostumeBlock_C");
static_assert(sizeof(UWBP_MultiSelectCostumeBlock_C) == 0x000848, "Wrong size on UWBP_MultiSelectCostumeBlock_C");
static_assert(offsetof(UWBP_MultiSelectCostumeBlock_C, UberGraphFrame) == 0x000278, "Member 'UWBP_MultiSelectCostumeBlock_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectCostumeBlock_C, BG) == 0x000280, "Member 'UWBP_MultiSelectCostumeBlock_C::BG' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectCostumeBlock_C, CmnIcon_KeyItem) == 0x000288, "Member 'UWBP_MultiSelectCostumeBlock_C::CmnIcon_KeyItem' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectCostumeBlock_C, Color) == 0x000290, "Member 'UWBP_MultiSelectCostumeBlock_C::Color' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectCostumeBlock_C, Colorus) == 0x000298, "Member 'UWBP_MultiSelectCostumeBlock_C::Colorus' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectCostumeBlock_C, IconBg) == 0x0002A0, "Member 'UWBP_MultiSelectCostumeBlock_C::IconBg' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectCostumeBlock_C, IconColor) == 0x0002A8, "Member 'UWBP_MultiSelectCostumeBlock_C::IconColor' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectCostumeBlock_C, Image_LockIcon) == 0x0002B0, "Member 'UWBP_MultiSelectCostumeBlock_C::Image_LockIcon' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectCostumeBlock_C, InventoryTagBPP) == 0x0002B8, "Member 'UWBP_MultiSelectCostumeBlock_C::InventoryTagBPP' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectCostumeBlock_C, InventoryUsed) == 0x0002C0, "Member 'UWBP_MultiSelectCostumeBlock_C::InventoryUsed' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectCostumeBlock_C, ItemNameText_1) == 0x0002C8, "Member 'UWBP_MultiSelectCostumeBlock_C::ItemNameText_1' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectCostumeBlock_C, MoneyText) == 0x0002D0, "Member 'UWBP_MultiSelectCostumeBlock_C::MoneyText' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectCostumeBlock_C, Parts) == 0x0002D8, "Member 'UWBP_MultiSelectCostumeBlock_C::Parts' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectCostumeBlock_C, Parts_1) == 0x0002E0, "Member 'UWBP_MultiSelectCostumeBlock_C::Parts_1' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectCostumeBlock_C, Parts_2) == 0x0002E8, "Member 'UWBP_MultiSelectCostumeBlock_C::Parts_2' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectCostumeBlock_C, PartsList) == 0x0002F0, "Member 'UWBP_MultiSelectCostumeBlock_C::PartsList' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectCostumeBlock_C, SBButton_ItemName) == 0x0002F8, "Member 'UWBP_MultiSelectCostumeBlock_C::SBButton_ItemName' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectCostumeBlock_C, ItemType) == 0x000300, "Member 'UWBP_MultiSelectCostumeBlock_C::ItemType' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectCostumeBlock_C, MyItenIndex) == 0x000304, "Member 'UWBP_MultiSelectCostumeBlock_C::MyItenIndex' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectCostumeBlock_C, ItemData) == 0x000308, "Member 'UWBP_MultiSelectCostumeBlock_C::ItemData' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectCostumeBlock_C, BaseButtonStyle) == 0x0003A0, "Member 'UWBP_MultiSelectCostumeBlock_C::BaseButtonStyle' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectCostumeBlock_C, StorageListItem) == 0x000618, "Member 'UWBP_MultiSelectCostumeBlock_C::StorageListItem' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectCostumeBlock_C, InventoryItemData) == 0x000620, "Member 'UWBP_MultiSelectCostumeBlock_C::InventoryItemData' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectCostumeBlock_C, OnUpdatePrice) == 0x000680, "Member 'UWBP_MultiSelectCostumeBlock_C::OnUpdatePrice' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectCostumeBlock_C, OnClick) == 0x000690, "Member 'UWBP_MultiSelectCostumeBlock_C::OnClick' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectCostumeBlock_C, ItemDataManager) == 0x0006A0, "Member 'UWBP_MultiSelectCostumeBlock_C::ItemDataManager' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectCostumeBlock_C, CostumeMaster) == 0x0006A8, "Member 'UWBP_MultiSelectCostumeBlock_C::CostumeMaster' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectCostumeBlock_C, OwnItemInfo) == 0x000730, "Member 'UWBP_MultiSelectCostumeBlock_C::OwnItemInfo' has a wrong offset!");

}

