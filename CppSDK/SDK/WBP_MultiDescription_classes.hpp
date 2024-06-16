#pragma once

 

// Package: WBP_MultiDescription

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "StorageMultipleSalesWindowType_structs.hpp"
#include "InventoryItemData_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_MultiDescription.WBP_MultiDescription_C
// 0x0128 (0x03A0 - 0x0278)
class UWBP_MultiDescription_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       InAnimation;                                       // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BG_1;                                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG_2;                                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnMove;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnSale;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnTrash;                                          // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ItemListSlot;                                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_0;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text;                                              // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TotalPriceText;                                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TotalSelectText_1;                                 // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TotalText;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MultiSelectBattleImagineBlock_C*   WBP_MultiSelectBattleImagineBlock;                 // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MultiSelectCostumeBlock_C*         WBP_MultiSelectCostumeBlock;                       // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MultiSelectWeaponBlock_C*          WBP_MultiSelectEnvironmentBlock;                   // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MultiSelectInnerImagineBlock_C*    WBP_MultiSelectInnerBlock;                         // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MultiSelectMountImagineBlock_C*    WBP_MultiSelectMountImagineBlock;                  // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_BaseMultiSelectBlock_C*>    TextList;                                          // 0x0308(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                         TotalPrice;                                        // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_77CB[0x4];                                     // 0x031C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_StorageRowListOwner_C*             InventoryStorageList;                              // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             MultipleSales;                                     // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             MultipleMoveStorage;                               // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             MultipleMoveBag;                                   // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             MultipleTrash;                                     // 0x0358(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClick;                                           // 0x0368(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Close;                                             // 0x0378(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         SelectMax;                                         // 0x0388(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BothValid;                                         // 0x038C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Inventory;                                         // 0x038D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77CC[0x2];                                     // 0x038E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FInventoryItemData>             Select_Item_Data;                                  // 0x0390(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void MultipleSales__DelegateSignature(int32 InTotalPrice, TArray<struct FInventoryItemData>& InSelectItemList);
	void MultipleMoveStorage__DelegateSignature(TArray<struct FInventoryItemData>& InSelectItemList);
	void MultipleMoveBag__DelegateSignature(TArray<struct FInventoryItemData>& InSelectItemList);
	void MultipleTrash__DelegateSignature(TArray<struct FInventoryItemData>& InSelectItemList);
	void OnClick__DelegateSignature(const struct FInventoryItemData& InventoryData);
	void Close__DelegateSignature();
	void ExecuteUbergraph_WBP_MultiDescription(int32 EntryPoint);
	void TriInAnimationPlay();
	void UpdateSelectNum();
	void CustomEvent_0(const struct FInventoryItemData& NewParam);
	void UpdatePrice();
	void BndEvt__BtnTrash_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature();
	void BndEvt__BtnMoveBag_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature();
	void BndEvt__BtnSale1_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
	void SettingList();
	void AlignRequiredNum();
	void AddList();
	void UpdateSalesItems();
	void Construct();
	void SetSelectItems(const class UItemIconBtn_C*& InputPin, EStorageMultipleSalesWindowType* NewParam);
	void AllRemoveSalesItems();
	void SetSalesItemList();
	void SetInventoryStorageList(class UWBP_StorageRowListOwner_C* Param_InventoryStorageList);
	int32 Get_Total_Item_Num();
	void UpdateButton();
	void IsSaleItem(const struct FInventoryItemData& InventoryItemData, bool* Param_IsSaleItem);
	void Remove_Select_Item(const struct FInventoryItemData& Item);
	void GetSelectItemList(TArray<struct FInventoryItemData>* Param_Select_Item_Data);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MultiDescription_C">();
	}
	static class UWBP_MultiDescription_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MultiDescription_C>();
	}
};
static_assert(alignof(UWBP_MultiDescription_C) == 0x000008, "Wrong alignment on UWBP_MultiDescription_C");
static_assert(sizeof(UWBP_MultiDescription_C) == 0x0003A0, "Wrong size on UWBP_MultiDescription_C");
static_assert(offsetof(UWBP_MultiDescription_C, UberGraphFrame) == 0x000278, "Member 'UWBP_MultiDescription_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_MultiDescription_C, InAnimation) == 0x000280, "Member 'UWBP_MultiDescription_C::InAnimation' has a wrong offset!");
static_assert(offsetof(UWBP_MultiDescription_C, BG_1) == 0x000288, "Member 'UWBP_MultiDescription_C::BG_1' has a wrong offset!");
static_assert(offsetof(UWBP_MultiDescription_C, BG_2) == 0x000290, "Member 'UWBP_MultiDescription_C::BG_2' has a wrong offset!");
static_assert(offsetof(UWBP_MultiDescription_C, BtnMove) == 0x000298, "Member 'UWBP_MultiDescription_C::BtnMove' has a wrong offset!");
static_assert(offsetof(UWBP_MultiDescription_C, BtnSale) == 0x0002A0, "Member 'UWBP_MultiDescription_C::BtnSale' has a wrong offset!");
static_assert(offsetof(UWBP_MultiDescription_C, BtnTrash) == 0x0002A8, "Member 'UWBP_MultiDescription_C::BtnTrash' has a wrong offset!");
static_assert(offsetof(UWBP_MultiDescription_C, ItemListSlot) == 0x0002B0, "Member 'UWBP_MultiDescription_C::ItemListSlot' has a wrong offset!");
static_assert(offsetof(UWBP_MultiDescription_C, ScrollBox_0) == 0x0002B8, "Member 'UWBP_MultiDescription_C::ScrollBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_MultiDescription_C, Text) == 0x0002C0, "Member 'UWBP_MultiDescription_C::Text' has a wrong offset!");
static_assert(offsetof(UWBP_MultiDescription_C, TotalPriceText) == 0x0002C8, "Member 'UWBP_MultiDescription_C::TotalPriceText' has a wrong offset!");
static_assert(offsetof(UWBP_MultiDescription_C, TotalSelectText_1) == 0x0002D0, "Member 'UWBP_MultiDescription_C::TotalSelectText_1' has a wrong offset!");
static_assert(offsetof(UWBP_MultiDescription_C, TotalText) == 0x0002D8, "Member 'UWBP_MultiDescription_C::TotalText' has a wrong offset!");
static_assert(offsetof(UWBP_MultiDescription_C, WBP_MultiSelectBattleImagineBlock) == 0x0002E0, "Member 'UWBP_MultiDescription_C::WBP_MultiSelectBattleImagineBlock' has a wrong offset!");
static_assert(offsetof(UWBP_MultiDescription_C, WBP_MultiSelectCostumeBlock) == 0x0002E8, "Member 'UWBP_MultiDescription_C::WBP_MultiSelectCostumeBlock' has a wrong offset!");
static_assert(offsetof(UWBP_MultiDescription_C, WBP_MultiSelectEnvironmentBlock) == 0x0002F0, "Member 'UWBP_MultiDescription_C::WBP_MultiSelectEnvironmentBlock' has a wrong offset!");
static_assert(offsetof(UWBP_MultiDescription_C, WBP_MultiSelectInnerBlock) == 0x0002F8, "Member 'UWBP_MultiDescription_C::WBP_MultiSelectInnerBlock' has a wrong offset!");
static_assert(offsetof(UWBP_MultiDescription_C, WBP_MultiSelectMountImagineBlock) == 0x000300, "Member 'UWBP_MultiDescription_C::WBP_MultiSelectMountImagineBlock' has a wrong offset!");
static_assert(offsetof(UWBP_MultiDescription_C, TextList) == 0x000308, "Member 'UWBP_MultiDescription_C::TextList' has a wrong offset!");
static_assert(offsetof(UWBP_MultiDescription_C, TotalPrice) == 0x000318, "Member 'UWBP_MultiDescription_C::TotalPrice' has a wrong offset!");
static_assert(offsetof(UWBP_MultiDescription_C, InventoryStorageList) == 0x000320, "Member 'UWBP_MultiDescription_C::InventoryStorageList' has a wrong offset!");
static_assert(offsetof(UWBP_MultiDescription_C, MultipleSales) == 0x000328, "Member 'UWBP_MultiDescription_C::MultipleSales' has a wrong offset!");
static_assert(offsetof(UWBP_MultiDescription_C, MultipleMoveStorage) == 0x000338, "Member 'UWBP_MultiDescription_C::MultipleMoveStorage' has a wrong offset!");
static_assert(offsetof(UWBP_MultiDescription_C, MultipleMoveBag) == 0x000348, "Member 'UWBP_MultiDescription_C::MultipleMoveBag' has a wrong offset!");
static_assert(offsetof(UWBP_MultiDescription_C, MultipleTrash) == 0x000358, "Member 'UWBP_MultiDescription_C::MultipleTrash' has a wrong offset!");
static_assert(offsetof(UWBP_MultiDescription_C, OnClick) == 0x000368, "Member 'UWBP_MultiDescription_C::OnClick' has a wrong offset!");
static_assert(offsetof(UWBP_MultiDescription_C, Close) == 0x000378, "Member 'UWBP_MultiDescription_C::Close' has a wrong offset!");
static_assert(offsetof(UWBP_MultiDescription_C, SelectMax) == 0x000388, "Member 'UWBP_MultiDescription_C::SelectMax' has a wrong offset!");
static_assert(offsetof(UWBP_MultiDescription_C, BothValid) == 0x00038C, "Member 'UWBP_MultiDescription_C::BothValid' has a wrong offset!");
static_assert(offsetof(UWBP_MultiDescription_C, Inventory) == 0x00038D, "Member 'UWBP_MultiDescription_C::Inventory' has a wrong offset!");
static_assert(offsetof(UWBP_MultiDescription_C, Select_Item_Data) == 0x000390, "Member 'UWBP_MultiDescription_C::Select_Item_Data' has a wrong offset!");

}

