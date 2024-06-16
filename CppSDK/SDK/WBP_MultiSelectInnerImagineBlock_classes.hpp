#pragma once

 

// Package: WBP_MultiSelectInnerImagineBlock

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

// WidgetBlueprintGeneratedClass WBP_MultiSelectInnerImagineBlock.WBP_MultiSelectInnerImagineBlock_C
// 0x0658 (0x08D0 - 0x0278)
class UWBP_MultiSelectInnerImagineBlock_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BG;                                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnIcon_KeyItem_C*                     CmnIcon_KeyItem;                                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_4;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_8;                                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_104;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_LockIcon;                                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryTag_C*                        InventoryTagBPP;                                   // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryUsed_C*                       InventoryUsed;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    ItemNameText_1;                                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MoneyText;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               PosIcon1;                                          // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               PosIcon2;                                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               PosIcon3;                                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               PosIcon4;                                          // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               PosIcon5;                                          // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_ItemName;                                 // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtATK;                                            // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtDEX;                                            // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtHP;                                             // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtINT;                                            // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtLv;                                             // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtMND;                                            // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtPerk1_1;                                        // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtPerk2;                                          // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtSTR;                                            // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtVIT;                                            // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StackB_S_C*                        WBP_StackB_S;                                      // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EItemType                                     ItemType;                                          // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4783[0x3];                                     // 0x0369(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MyItenIndex;                                       // 0x036C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryData                         ItemData;                                          // 0x0370(0x0098)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FButtonStyle                           BaseButtonStyle;                                   // 0x0408(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWBP_StorageRowListItem_C*              StorageListItem;                                   // 0x0680(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryItemData                     InventoryItemData;                                 // 0x0688(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnUpdatePrice;                                     // 0x06E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClick;                                           // 0x06F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSBMasterImagine                       MasterImagineData;                                 // 0x0708(0x00B0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FOwnItemInfo                           OwnItem;                                           // 0x07B8(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnUpdatePrice__DelegateSignature();
	void OnClick__DelegateSignature(const struct FInventoryItemData& InventoryData);
	void ExecuteUbergraph_WBP_MultiSelectInnerImagineBlock(int32 EntryPoint);
	void BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void SetOneItem(const struct FInventoryItemData& Param_InventoryItemData);
	void GetPrice(int32* Price);
	void SetImagineParam(const struct FImagineParameter& ImagineParameter);
	void SetEquipmentIcon();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MultiSelectInnerImagineBlock_C">();
	}
	static class UWBP_MultiSelectInnerImagineBlock_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MultiSelectInnerImagineBlock_C>();
	}
};
static_assert(alignof(UWBP_MultiSelectInnerImagineBlock_C) == 0x000008, "Wrong alignment on UWBP_MultiSelectInnerImagineBlock_C");
static_assert(sizeof(UWBP_MultiSelectInnerImagineBlock_C) == 0x0008D0, "Wrong size on UWBP_MultiSelectInnerImagineBlock_C");
static_assert(offsetof(UWBP_MultiSelectInnerImagineBlock_C, UberGraphFrame) == 0x000278, "Member 'UWBP_MultiSelectInnerImagineBlock_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectInnerImagineBlock_C, BG) == 0x000280, "Member 'UWBP_MultiSelectInnerImagineBlock_C::BG' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectInnerImagineBlock_C, CmnIcon_KeyItem) == 0x000288, "Member 'UWBP_MultiSelectInnerImagineBlock_C::CmnIcon_KeyItem' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectInnerImagineBlock_C, Image_2) == 0x000290, "Member 'UWBP_MultiSelectInnerImagineBlock_C::Image_2' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectInnerImagineBlock_C, Image_3) == 0x000298, "Member 'UWBP_MultiSelectInnerImagineBlock_C::Image_3' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectInnerImagineBlock_C, Image_4) == 0x0002A0, "Member 'UWBP_MultiSelectInnerImagineBlock_C::Image_4' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectInnerImagineBlock_C, Image_8) == 0x0002A8, "Member 'UWBP_MultiSelectInnerImagineBlock_C::Image_8' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectInnerImagineBlock_C, Image_104) == 0x0002B0, "Member 'UWBP_MultiSelectInnerImagineBlock_C::Image_104' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectInnerImagineBlock_C, Image_LockIcon) == 0x0002B8, "Member 'UWBP_MultiSelectInnerImagineBlock_C::Image_LockIcon' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectInnerImagineBlock_C, InventoryTagBPP) == 0x0002C0, "Member 'UWBP_MultiSelectInnerImagineBlock_C::InventoryTagBPP' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectInnerImagineBlock_C, InventoryUsed) == 0x0002C8, "Member 'UWBP_MultiSelectInnerImagineBlock_C::InventoryUsed' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectInnerImagineBlock_C, ItemNameText_1) == 0x0002D0, "Member 'UWBP_MultiSelectInnerImagineBlock_C::ItemNameText_1' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectInnerImagineBlock_C, MoneyText) == 0x0002D8, "Member 'UWBP_MultiSelectInnerImagineBlock_C::MoneyText' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectInnerImagineBlock_C, PosIcon1) == 0x0002E0, "Member 'UWBP_MultiSelectInnerImagineBlock_C::PosIcon1' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectInnerImagineBlock_C, PosIcon2) == 0x0002E8, "Member 'UWBP_MultiSelectInnerImagineBlock_C::PosIcon2' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectInnerImagineBlock_C, PosIcon3) == 0x0002F0, "Member 'UWBP_MultiSelectInnerImagineBlock_C::PosIcon3' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectInnerImagineBlock_C, PosIcon4) == 0x0002F8, "Member 'UWBP_MultiSelectInnerImagineBlock_C::PosIcon4' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectInnerImagineBlock_C, PosIcon5) == 0x000300, "Member 'UWBP_MultiSelectInnerImagineBlock_C::PosIcon5' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectInnerImagineBlock_C, SBButton_ItemName) == 0x000308, "Member 'UWBP_MultiSelectInnerImagineBlock_C::SBButton_ItemName' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectInnerImagineBlock_C, TxtATK) == 0x000310, "Member 'UWBP_MultiSelectInnerImagineBlock_C::TxtATK' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectInnerImagineBlock_C, TxtDEX) == 0x000318, "Member 'UWBP_MultiSelectInnerImagineBlock_C::TxtDEX' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectInnerImagineBlock_C, TxtHP) == 0x000320, "Member 'UWBP_MultiSelectInnerImagineBlock_C::TxtHP' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectInnerImagineBlock_C, TxtINT) == 0x000328, "Member 'UWBP_MultiSelectInnerImagineBlock_C::TxtINT' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectInnerImagineBlock_C, TxtLv) == 0x000330, "Member 'UWBP_MultiSelectInnerImagineBlock_C::TxtLv' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectInnerImagineBlock_C, TxtMND) == 0x000338, "Member 'UWBP_MultiSelectInnerImagineBlock_C::TxtMND' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectInnerImagineBlock_C, TxtPerk1_1) == 0x000340, "Member 'UWBP_MultiSelectInnerImagineBlock_C::TxtPerk1_1' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectInnerImagineBlock_C, TxtPerk2) == 0x000348, "Member 'UWBP_MultiSelectInnerImagineBlock_C::TxtPerk2' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectInnerImagineBlock_C, TxtSTR) == 0x000350, "Member 'UWBP_MultiSelectInnerImagineBlock_C::TxtSTR' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectInnerImagineBlock_C, TxtVIT) == 0x000358, "Member 'UWBP_MultiSelectInnerImagineBlock_C::TxtVIT' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectInnerImagineBlock_C, WBP_StackB_S) == 0x000360, "Member 'UWBP_MultiSelectInnerImagineBlock_C::WBP_StackB_S' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectInnerImagineBlock_C, ItemType) == 0x000368, "Member 'UWBP_MultiSelectInnerImagineBlock_C::ItemType' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectInnerImagineBlock_C, MyItenIndex) == 0x00036C, "Member 'UWBP_MultiSelectInnerImagineBlock_C::MyItenIndex' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectInnerImagineBlock_C, ItemData) == 0x000370, "Member 'UWBP_MultiSelectInnerImagineBlock_C::ItemData' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectInnerImagineBlock_C, BaseButtonStyle) == 0x000408, "Member 'UWBP_MultiSelectInnerImagineBlock_C::BaseButtonStyle' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectInnerImagineBlock_C, StorageListItem) == 0x000680, "Member 'UWBP_MultiSelectInnerImagineBlock_C::StorageListItem' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectInnerImagineBlock_C, InventoryItemData) == 0x000688, "Member 'UWBP_MultiSelectInnerImagineBlock_C::InventoryItemData' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectInnerImagineBlock_C, OnUpdatePrice) == 0x0006E8, "Member 'UWBP_MultiSelectInnerImagineBlock_C::OnUpdatePrice' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectInnerImagineBlock_C, OnClick) == 0x0006F8, "Member 'UWBP_MultiSelectInnerImagineBlock_C::OnClick' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectInnerImagineBlock_C, MasterImagineData) == 0x000708, "Member 'UWBP_MultiSelectInnerImagineBlock_C::MasterImagineData' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectInnerImagineBlock_C, OwnItem) == 0x0007B8, "Member 'UWBP_MultiSelectInnerImagineBlock_C::OwnItem' has a wrong offset!");

}

