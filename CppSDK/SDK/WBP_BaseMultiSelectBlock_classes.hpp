#pragma once

 

// Package: WBP_BaseMultiSelectBlock

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "InventoryItemData_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_BaseMultiSelectBlock.WBP_BaseMultiSelectBlock_C
// 0x00C8 (0x0340 - 0x0278)
class UWBP_BaseMultiSelectBlock_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_MultiSelectBattleImagineBlock_C*   WBP_MultiSelectBattleImagineBlock;                 // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MultiSelectCostumeBlock_C*         WBP_MultiSelectCostumeBlock;                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MultiSelectWeaponBlock_C*          WBP_MultiSelectEnvironmentBlock;                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MultiSelectInnerImagineBlock_C*    WBP_MultiSelectInnerImagineBlock;                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MultiSelectItemBlock_C*            WBP_MultiSelectItemBlock;                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MultiSelectMountImagineBlock_C*    WBP_MultiSelectMountImagineBlock;                  // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MultiSelectOrnamentBlock_C*        WBP_MultiSelectOrnamentBlock;                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FInventoryItemData                     InventoryData;                                     // 0x02B8(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnUpdatePrice;                                     // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClick;                                           // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWBP_StorageRowListItem_C*              StorageListItem;                                   // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnUpdatePrice__DelegateSignature();
	void OnClick__DelegateSignature(const struct FInventoryItemData& NewParam);
	void ExecuteUbergraph_WBP_BaseMultiSelectBlock(int32 EntryPoint);
	void CustomEvent_1(const struct FInventoryItemData& Param_InventoryData);
	void CustomEvent_0();
	void Construct();
	void AllCollapsed();
	void SetStorageItem(class UWBP_StorageRowListItem_C* InStorageListItem);
	void SetOneItem(const struct FInventoryItemData& InventoryItemData);
	void Get_Price(bool LockExcluded, int32* Price);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_BaseMultiSelectBlock_C">();
	}
	static class UWBP_BaseMultiSelectBlock_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_BaseMultiSelectBlock_C>();
	}
};
static_assert(alignof(UWBP_BaseMultiSelectBlock_C) == 0x000008, "Wrong alignment on UWBP_BaseMultiSelectBlock_C");
static_assert(sizeof(UWBP_BaseMultiSelectBlock_C) == 0x000340, "Wrong size on UWBP_BaseMultiSelectBlock_C");
static_assert(offsetof(UWBP_BaseMultiSelectBlock_C, UberGraphFrame) == 0x000278, "Member 'UWBP_BaseMultiSelectBlock_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_BaseMultiSelectBlock_C, WBP_MultiSelectBattleImagineBlock) == 0x000280, "Member 'UWBP_BaseMultiSelectBlock_C::WBP_MultiSelectBattleImagineBlock' has a wrong offset!");
static_assert(offsetof(UWBP_BaseMultiSelectBlock_C, WBP_MultiSelectCostumeBlock) == 0x000288, "Member 'UWBP_BaseMultiSelectBlock_C::WBP_MultiSelectCostumeBlock' has a wrong offset!");
static_assert(offsetof(UWBP_BaseMultiSelectBlock_C, WBP_MultiSelectEnvironmentBlock) == 0x000290, "Member 'UWBP_BaseMultiSelectBlock_C::WBP_MultiSelectEnvironmentBlock' has a wrong offset!");
static_assert(offsetof(UWBP_BaseMultiSelectBlock_C, WBP_MultiSelectInnerImagineBlock) == 0x000298, "Member 'UWBP_BaseMultiSelectBlock_C::WBP_MultiSelectInnerImagineBlock' has a wrong offset!");
static_assert(offsetof(UWBP_BaseMultiSelectBlock_C, WBP_MultiSelectItemBlock) == 0x0002A0, "Member 'UWBP_BaseMultiSelectBlock_C::WBP_MultiSelectItemBlock' has a wrong offset!");
static_assert(offsetof(UWBP_BaseMultiSelectBlock_C, WBP_MultiSelectMountImagineBlock) == 0x0002A8, "Member 'UWBP_BaseMultiSelectBlock_C::WBP_MultiSelectMountImagineBlock' has a wrong offset!");
static_assert(offsetof(UWBP_BaseMultiSelectBlock_C, WBP_MultiSelectOrnamentBlock) == 0x0002B0, "Member 'UWBP_BaseMultiSelectBlock_C::WBP_MultiSelectOrnamentBlock' has a wrong offset!");
static_assert(offsetof(UWBP_BaseMultiSelectBlock_C, InventoryData) == 0x0002B8, "Member 'UWBP_BaseMultiSelectBlock_C::InventoryData' has a wrong offset!");
static_assert(offsetof(UWBP_BaseMultiSelectBlock_C, OnUpdatePrice) == 0x000318, "Member 'UWBP_BaseMultiSelectBlock_C::OnUpdatePrice' has a wrong offset!");
static_assert(offsetof(UWBP_BaseMultiSelectBlock_C, OnClick) == 0x000328, "Member 'UWBP_BaseMultiSelectBlock_C::OnClick' has a wrong offset!");
static_assert(offsetof(UWBP_BaseMultiSelectBlock_C, StorageListItem) == 0x000338, "Member 'UWBP_BaseMultiSelectBlock_C::StorageListItem' has a wrong offset!");

}

