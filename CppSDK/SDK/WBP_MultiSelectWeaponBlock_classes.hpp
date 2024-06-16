#pragma once

 

// Package: WBP_MultiSelectWeaponBlock

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

// WidgetBlueprintGeneratedClass WBP_MultiSelectWeaponBlock.WBP_MultiSelectWeaponBlock_C
// 0x0698 (0x0910 - 0x0278)
class UWBP_MultiSelectWeaponBlock_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAttributeIcon_C*                       Attribute1_1;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnIcon_KeyItem_C*                     CmnIcon_KeyItem;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWeaponAbilityInfoSlotList_C*     CommonWeaponAbilityInfoSlotList;                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_LockIcon;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryTag_C*                        InventoryTagBPP;                                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryUsed_C*                       InventoryUsed;                                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    ItemNameText_1;                                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MoneyText;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_ItemName;                                 // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_93;                             // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtAttack_1;                                       // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtAttribute_1;                                    // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtCp;                                             // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtDEX_1;                                          // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtINT_1;                                          // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtLv_1;                                           // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtLvMax_1;                                        // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtMND_1;                                          // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtSpecialNum;                                     // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtSTR_1;                                          // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtVIT_1;                                          // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StackB_S_C*                        WBP_StackB_S;                                      // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EItemType                                     ItemType;                                          // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_775B[0x3];                                     // 0x0341(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MyItenIndex;                                       // 0x0344(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryData                         ItemData;                                          // 0x0348(0x0098)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FButtonStyle                           BaseButtonStyle;                                   // 0x03E0(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWBP_StorageRowListItem_C*              StorageListItem;                                   // 0x0658(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryItemData                     InventoryData;                                     // 0x0660(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnUpdatePrice;                                     // 0x06C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClick;                                           // 0x06D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsInventory;                                      // 0x06E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_775C[0x7];                                     // 0x06E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponItemData                      WeaponData;                                        // 0x06E8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USBMasterDataManager*                   ItemDataManager;                                   // 0x0738(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBWeaponMasterData                    WeaponMaster;                                      // 0x0740(0x00B0)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         StackNum;                                          // 0x07F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_775D[0x4];                                     // 0x07F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           OneData;                                           // 0x07F8(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnUpdatePrice__DelegateSignature();
	void OnClick__DelegateSignature(const struct FInventoryItemData& Param_InventoryData);
	void ExecuteUbergraph_WBP_MultiSelectWeaponBlock(int32 EntryPoint);
	void BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void SetOneItem(const struct FInventoryItemData& InventoryItemData);
	void GetPrice(int32* Price);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MultiSelectWeaponBlock_C">();
	}
	static class UWBP_MultiSelectWeaponBlock_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MultiSelectWeaponBlock_C>();
	}
};
static_assert(alignof(UWBP_MultiSelectWeaponBlock_C) == 0x000008, "Wrong alignment on UWBP_MultiSelectWeaponBlock_C");
static_assert(sizeof(UWBP_MultiSelectWeaponBlock_C) == 0x000910, "Wrong size on UWBP_MultiSelectWeaponBlock_C");
static_assert(offsetof(UWBP_MultiSelectWeaponBlock_C, UberGraphFrame) == 0x000278, "Member 'UWBP_MultiSelectWeaponBlock_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectWeaponBlock_C, Attribute1_1) == 0x000280, "Member 'UWBP_MultiSelectWeaponBlock_C::Attribute1_1' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectWeaponBlock_C, BG) == 0x000288, "Member 'UWBP_MultiSelectWeaponBlock_C::BG' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectWeaponBlock_C, CmnIcon_KeyItem) == 0x000290, "Member 'UWBP_MultiSelectWeaponBlock_C::CmnIcon_KeyItem' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectWeaponBlock_C, CommonWeaponAbilityInfoSlotList) == 0x000298, "Member 'UWBP_MultiSelectWeaponBlock_C::CommonWeaponAbilityInfoSlotList' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectWeaponBlock_C, Image_LockIcon) == 0x0002A0, "Member 'UWBP_MultiSelectWeaponBlock_C::Image_LockIcon' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectWeaponBlock_C, InventoryTagBPP) == 0x0002A8, "Member 'UWBP_MultiSelectWeaponBlock_C::InventoryTagBPP' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectWeaponBlock_C, InventoryUsed) == 0x0002B0, "Member 'UWBP_MultiSelectWeaponBlock_C::InventoryUsed' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectWeaponBlock_C, ItemNameText_1) == 0x0002B8, "Member 'UWBP_MultiSelectWeaponBlock_C::ItemNameText_1' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectWeaponBlock_C, MoneyText) == 0x0002C0, "Member 'UWBP_MultiSelectWeaponBlock_C::MoneyText' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectWeaponBlock_C, SBButton_ItemName) == 0x0002C8, "Member 'UWBP_MultiSelectWeaponBlock_C::SBButton_ItemName' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectWeaponBlock_C, SBRuntimeTextBlock_93) == 0x0002D0, "Member 'UWBP_MultiSelectWeaponBlock_C::SBRuntimeTextBlock_93' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectWeaponBlock_C, TextBlock) == 0x0002D8, "Member 'UWBP_MultiSelectWeaponBlock_C::TextBlock' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectWeaponBlock_C, TxtAttack_1) == 0x0002E0, "Member 'UWBP_MultiSelectWeaponBlock_C::TxtAttack_1' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectWeaponBlock_C, TxtAttribute_1) == 0x0002E8, "Member 'UWBP_MultiSelectWeaponBlock_C::TxtAttribute_1' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectWeaponBlock_C, TxtCp) == 0x0002F0, "Member 'UWBP_MultiSelectWeaponBlock_C::TxtCp' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectWeaponBlock_C, TxtDEX_1) == 0x0002F8, "Member 'UWBP_MultiSelectWeaponBlock_C::TxtDEX_1' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectWeaponBlock_C, TxtINT_1) == 0x000300, "Member 'UWBP_MultiSelectWeaponBlock_C::TxtINT_1' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectWeaponBlock_C, TxtLv_1) == 0x000308, "Member 'UWBP_MultiSelectWeaponBlock_C::TxtLv_1' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectWeaponBlock_C, TxtLvMax_1) == 0x000310, "Member 'UWBP_MultiSelectWeaponBlock_C::TxtLvMax_1' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectWeaponBlock_C, TxtMND_1) == 0x000318, "Member 'UWBP_MultiSelectWeaponBlock_C::TxtMND_1' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectWeaponBlock_C, TxtSpecialNum) == 0x000320, "Member 'UWBP_MultiSelectWeaponBlock_C::TxtSpecialNum' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectWeaponBlock_C, TxtSTR_1) == 0x000328, "Member 'UWBP_MultiSelectWeaponBlock_C::TxtSTR_1' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectWeaponBlock_C, TxtVIT_1) == 0x000330, "Member 'UWBP_MultiSelectWeaponBlock_C::TxtVIT_1' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectWeaponBlock_C, WBP_StackB_S) == 0x000338, "Member 'UWBP_MultiSelectWeaponBlock_C::WBP_StackB_S' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectWeaponBlock_C, ItemType) == 0x000340, "Member 'UWBP_MultiSelectWeaponBlock_C::ItemType' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectWeaponBlock_C, MyItenIndex) == 0x000344, "Member 'UWBP_MultiSelectWeaponBlock_C::MyItenIndex' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectWeaponBlock_C, ItemData) == 0x000348, "Member 'UWBP_MultiSelectWeaponBlock_C::ItemData' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectWeaponBlock_C, BaseButtonStyle) == 0x0003E0, "Member 'UWBP_MultiSelectWeaponBlock_C::BaseButtonStyle' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectWeaponBlock_C, StorageListItem) == 0x000658, "Member 'UWBP_MultiSelectWeaponBlock_C::StorageListItem' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectWeaponBlock_C, InventoryData) == 0x000660, "Member 'UWBP_MultiSelectWeaponBlock_C::InventoryData' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectWeaponBlock_C, OnUpdatePrice) == 0x0006C0, "Member 'UWBP_MultiSelectWeaponBlock_C::OnUpdatePrice' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectWeaponBlock_C, OnClick) == 0x0006D0, "Member 'UWBP_MultiSelectWeaponBlock_C::OnClick' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectWeaponBlock_C, bIsInventory) == 0x0006E0, "Member 'UWBP_MultiSelectWeaponBlock_C::bIsInventory' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectWeaponBlock_C, WeaponData) == 0x0006E8, "Member 'UWBP_MultiSelectWeaponBlock_C::WeaponData' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectWeaponBlock_C, ItemDataManager) == 0x000738, "Member 'UWBP_MultiSelectWeaponBlock_C::ItemDataManager' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectWeaponBlock_C, WeaponMaster) == 0x000740, "Member 'UWBP_MultiSelectWeaponBlock_C::WeaponMaster' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectWeaponBlock_C, StackNum) == 0x0007F0, "Member 'UWBP_MultiSelectWeaponBlock_C::StackNum' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectWeaponBlock_C, OneData) == 0x0007F8, "Member 'UWBP_MultiSelectWeaponBlock_C::OneData' has a wrong offset!");

}

