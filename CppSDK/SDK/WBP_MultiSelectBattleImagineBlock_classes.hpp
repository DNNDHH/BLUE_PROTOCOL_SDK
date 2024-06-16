#pragma once

 

// Package: WBP_MultiSelectBattleImagineBlock

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

// WidgetBlueprintGeneratedClass WBP_MultiSelectBattleImagineBlock.WBP_MultiSelectBattleImagineBlock_C
// 0x0620 (0x0898 - 0x0278)
class UWBP_MultiSelectBattleImagineBlock_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnIcon_KeyItem_C*                     CmnIcon_KeyItem;                                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_LockIcon;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryTag_C*                        InventoryTagBPP;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryUsed_C*                       InventoryUsed;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    ItemNameText;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MoneyText_1;                                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_ItemName;                                 // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtATK;                                            // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtDEX;                                            // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtHP;                                             // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtINT;                                            // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtLv;                                             // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtMND;                                            // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtPerk1;                                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtPerk2;                                          // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtSTR;                                            // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtVIT;                                            // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BattleImagineSkillInfoParts_C*     WBP_BattleImagineSkillInfoParts;                   // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StackB_S_C*                        WBP_StackB_S;                                      // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EItemType                                     ItemType;                                          // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54F5[0x3];                                     // 0x0321(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MyItenIndex;                                       // 0x0324(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryData                         ItemData;                                          // 0x0328(0x0098)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FButtonStyle                           BaseButtonStyle;                                   // 0x03C0(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWBP_StorageRowListItem_C*              StorageListItem;                                   // 0x0638(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryItemData                     InventoryData;                                     // 0x0640(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnUpdatePrice;                                     // 0x06A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClick;                                           // 0x06B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsInventory;                                      // 0x06C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54F6[0x7];                                     // 0x06C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       Master;                                            // 0x06C8(0x00B0)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         ExpTotal;                                          // 0x0778(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Level;                                             // 0x077C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           OwnItem;                                           // 0x0780(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnUpdatePrice__DelegateSignature();
	void OnClick__DelegateSignature(const struct FInventoryItemData& Param_InventoryData);
	void ExecuteUbergraph_WBP_MultiSelectBattleImagineBlock(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Set_Perk_Data(int32 EffectId);
	void SetOneItem(const struct FInventoryItemData& InventoryItemData);
	void BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void SetLeveldata();
	void SetImagineParameter();
	void GetPrice(int32* Price);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MultiSelectBattleImagineBlock_C">();
	}
	static class UWBP_MultiSelectBattleImagineBlock_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MultiSelectBattleImagineBlock_C>();
	}
};
static_assert(alignof(UWBP_MultiSelectBattleImagineBlock_C) == 0x000008, "Wrong alignment on UWBP_MultiSelectBattleImagineBlock_C");
static_assert(sizeof(UWBP_MultiSelectBattleImagineBlock_C) == 0x000898, "Wrong size on UWBP_MultiSelectBattleImagineBlock_C");
static_assert(offsetof(UWBP_MultiSelectBattleImagineBlock_C, UberGraphFrame) == 0x000278, "Member 'UWBP_MultiSelectBattleImagineBlock_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectBattleImagineBlock_C, CanvasPanel) == 0x000280, "Member 'UWBP_MultiSelectBattleImagineBlock_C::CanvasPanel' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectBattleImagineBlock_C, CmnIcon_KeyItem) == 0x000288, "Member 'UWBP_MultiSelectBattleImagineBlock_C::CmnIcon_KeyItem' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectBattleImagineBlock_C, Image_LockIcon) == 0x000290, "Member 'UWBP_MultiSelectBattleImagineBlock_C::Image_LockIcon' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectBattleImagineBlock_C, InventoryTagBPP) == 0x000298, "Member 'UWBP_MultiSelectBattleImagineBlock_C::InventoryTagBPP' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectBattleImagineBlock_C, InventoryUsed) == 0x0002A0, "Member 'UWBP_MultiSelectBattleImagineBlock_C::InventoryUsed' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectBattleImagineBlock_C, ItemNameText) == 0x0002A8, "Member 'UWBP_MultiSelectBattleImagineBlock_C::ItemNameText' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectBattleImagineBlock_C, MoneyText_1) == 0x0002B0, "Member 'UWBP_MultiSelectBattleImagineBlock_C::MoneyText_1' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectBattleImagineBlock_C, SBButton_ItemName) == 0x0002B8, "Member 'UWBP_MultiSelectBattleImagineBlock_C::SBButton_ItemName' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectBattleImagineBlock_C, TxtATK) == 0x0002C0, "Member 'UWBP_MultiSelectBattleImagineBlock_C::TxtATK' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectBattleImagineBlock_C, TxtDEX) == 0x0002C8, "Member 'UWBP_MultiSelectBattleImagineBlock_C::TxtDEX' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectBattleImagineBlock_C, TxtHP) == 0x0002D0, "Member 'UWBP_MultiSelectBattleImagineBlock_C::TxtHP' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectBattleImagineBlock_C, TxtINT) == 0x0002D8, "Member 'UWBP_MultiSelectBattleImagineBlock_C::TxtINT' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectBattleImagineBlock_C, TxtLv) == 0x0002E0, "Member 'UWBP_MultiSelectBattleImagineBlock_C::TxtLv' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectBattleImagineBlock_C, TxtMND) == 0x0002E8, "Member 'UWBP_MultiSelectBattleImagineBlock_C::TxtMND' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectBattleImagineBlock_C, TxtPerk1) == 0x0002F0, "Member 'UWBP_MultiSelectBattleImagineBlock_C::TxtPerk1' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectBattleImagineBlock_C, TxtPerk2) == 0x0002F8, "Member 'UWBP_MultiSelectBattleImagineBlock_C::TxtPerk2' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectBattleImagineBlock_C, TxtSTR) == 0x000300, "Member 'UWBP_MultiSelectBattleImagineBlock_C::TxtSTR' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectBattleImagineBlock_C, TxtVIT) == 0x000308, "Member 'UWBP_MultiSelectBattleImagineBlock_C::TxtVIT' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectBattleImagineBlock_C, WBP_BattleImagineSkillInfoParts) == 0x000310, "Member 'UWBP_MultiSelectBattleImagineBlock_C::WBP_BattleImagineSkillInfoParts' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectBattleImagineBlock_C, WBP_StackB_S) == 0x000318, "Member 'UWBP_MultiSelectBattleImagineBlock_C::WBP_StackB_S' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectBattleImagineBlock_C, ItemType) == 0x000320, "Member 'UWBP_MultiSelectBattleImagineBlock_C::ItemType' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectBattleImagineBlock_C, MyItenIndex) == 0x000324, "Member 'UWBP_MultiSelectBattleImagineBlock_C::MyItenIndex' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectBattleImagineBlock_C, ItemData) == 0x000328, "Member 'UWBP_MultiSelectBattleImagineBlock_C::ItemData' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectBattleImagineBlock_C, BaseButtonStyle) == 0x0003C0, "Member 'UWBP_MultiSelectBattleImagineBlock_C::BaseButtonStyle' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectBattleImagineBlock_C, StorageListItem) == 0x000638, "Member 'UWBP_MultiSelectBattleImagineBlock_C::StorageListItem' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectBattleImagineBlock_C, InventoryData) == 0x000640, "Member 'UWBP_MultiSelectBattleImagineBlock_C::InventoryData' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectBattleImagineBlock_C, OnUpdatePrice) == 0x0006A0, "Member 'UWBP_MultiSelectBattleImagineBlock_C::OnUpdatePrice' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectBattleImagineBlock_C, OnClick) == 0x0006B0, "Member 'UWBP_MultiSelectBattleImagineBlock_C::OnClick' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectBattleImagineBlock_C, bIsInventory) == 0x0006C0, "Member 'UWBP_MultiSelectBattleImagineBlock_C::bIsInventory' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectBattleImagineBlock_C, Master) == 0x0006C8, "Member 'UWBP_MultiSelectBattleImagineBlock_C::Master' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectBattleImagineBlock_C, ExpTotal) == 0x000778, "Member 'UWBP_MultiSelectBattleImagineBlock_C::ExpTotal' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectBattleImagineBlock_C, Level) == 0x00077C, "Member 'UWBP_MultiSelectBattleImagineBlock_C::Level' has a wrong offset!");
static_assert(offsetof(UWBP_MultiSelectBattleImagineBlock_C, OwnItem) == 0x000780, "Member 'UWBP_MultiSelectBattleImagineBlock_C::OwnItem' has a wrong offset!");

}

