#pragma once

 

// Package: WBP_MultiSelectItemBlock

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "InventoryItemData_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"
#include "InventoryData_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_MultiSelectItemBlock.WBP_MultiSelectItemBlock_C
// 0x03F8 (0x0670 - 0x0278)
class UWBP_MultiSelectItemBlock_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BG;                                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_LockIcon;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ItemNameText;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ItemNumText;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MoneyText_1;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_ItemName;                                 // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_Max;                                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_Min;                                      // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_Minus;                                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_Plus_1;                                   // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EItemType                                     ItemType;                                          // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7751[0x3];                                     // 0x02D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MyItenIndex;                                       // 0x02D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryData                         ItemData;                                          // 0x02D8(0x0098)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FButtonStyle                           BaseButtonStyle;                                   // 0x0370(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWBP_StorageRowListItem_C*              StorageListItem;                                   // 0x05E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryItemData                     InventoryData;                                     // 0x05F0(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnUpdatePrice;                                     // 0x0650(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClick;                                           // 0x0660(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnUpdatePrice__DelegateSignature();
	void OnClick__DelegateSignature(const struct FInventoryItemData& Param_InventoryData);
	void ExecuteUbergraph_WBP_MultiSelectItemBlock(int32 EntryPoint);
	void BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SBButton_Max_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SBButton_Minus_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SBButton_Plus_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void UpdateDisplay();
	void SetStorageItem(class UWBP_StorageRowListItem_C* InStorageListItem);
	void SetOneItem(const struct FInventoryItemData& InventoryItemData);
	void GetPrice(int32* Price);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MultiSelectItemBlock_C">();
	}
	static class UWBP_MultiSelectItemBlock_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MultiSelectItemBlock_C>();
	}
};
static_assert(alignof(UWBP_MultiSelectItemBlock_C) == 0x000008, "Wrong alignment on UWBP_MultiSelectItemBlock_C");
static_assert(sizeof(UWBP_MultiSelectItemBlock_C) == 0x000670, "Wrong size on UWBP_MultiSelectItemBlock_C");
static_assert(offsetof(UWBP_MultiSelectItemBlock_C, UberGraphFrame) == 0x000278, "Member 'UWBP_MultiSelectItemBlock_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectItemBlock_C, BG) == 0x000280, "Member 'UWBP_MultiSelectItemBlock_C::BG' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectItemBlock_C, Image_LockIcon) == 0x000288, "Member 'UWBP_MultiSelectItemBlock_C::Image_LockIcon' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectItemBlock_C, ItemNameText) == 0x000290, "Member 'UWBP_MultiSelectItemBlock_C::ItemNameText' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectItemBlock_C, ItemNumText) == 0x000298, "Member 'UWBP_MultiSelectItemBlock_C::ItemNumText' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectItemBlock_C, MoneyText_1) == 0x0002A0, "Member 'UWBP_MultiSelectItemBlock_C::MoneyText_1' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectItemBlock_C, SBButton_ItemName) == 0x0002A8, "Member 'UWBP_MultiSelectItemBlock_C::SBButton_ItemName' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectItemBlock_C, SBButton_Max) == 0x0002B0, "Member 'UWBP_MultiSelectItemBlock_C::SBButton_Max' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectItemBlock_C, SBButton_Min) == 0x0002B8, "Member 'UWBP_MultiSelectItemBlock_C::SBButton_Min' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectItemBlock_C, SBButton_Minus) == 0x0002C0, "Member 'UWBP_MultiSelectItemBlock_C::SBButton_Minus' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectItemBlock_C, SBButton_Plus_1) == 0x0002C8, "Member 'UWBP_MultiSelectItemBlock_C::SBButton_Plus_1' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectItemBlock_C, ItemType) == 0x0002D0, "Member 'UWBP_MultiSelectItemBlock_C::ItemType' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectItemBlock_C, MyItenIndex) == 0x0002D4, "Member 'UWBP_MultiSelectItemBlock_C::MyItenIndex' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectItemBlock_C, ItemData) == 0x0002D8, "Member 'UWBP_MultiSelectItemBlock_C::ItemData' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectItemBlock_C, BaseButtonStyle) == 0x000370, "Member 'UWBP_MultiSelectItemBlock_C::BaseButtonStyle' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectItemBlock_C, StorageListItem) == 0x0005E8, "Member 'UWBP_MultiSelectItemBlock_C::StorageListItem' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectItemBlock_C, InventoryData) == 0x0005F0, "Member 'UWBP_MultiSelectItemBlock_C::InventoryData' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectItemBlock_C, OnUpdatePrice) == 0x000650, "Member 'UWBP_MultiSelectItemBlock_C::OnUpdatePrice' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectItemBlock_C, OnClick) == 0x000660, "Member 'UWBP_MultiSelectItemBlock_C::OnClick' has a wrong offset!");

}

