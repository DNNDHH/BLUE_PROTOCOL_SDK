#pragma once

 

// Package: WBP_StorageRowListItemWrap

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "InventoryData_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_StorageRowListItemWrap.WBP_StorageRowListItemWrap_C
// 0x00F8 (0x0370 - 0x0278)
class UWBP_StorageRowListItemWrap_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel_116;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         ItemIndex;                                         // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Storage_Amount;                                    // 0x028C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryData                         Inventory_Data;                                    // 0x0290(0x0098)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	float                                         CreateDelay;                                       // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_7778[0x4];                                     // 0x032C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_StorageRowListItem_C*              StorageRowListItem;                                // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnItemClick;                                       // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnItemClickRight;                                  // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bCreate;                                           // 0x0358(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Enable;                                            // 0x0359(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Is_Selected;                                       // 0x035A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ScrollVisible;                                     // 0x035B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                         ListIndex;                                         // 0x035C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         BaseSize;                                          // 0x0360(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OverSize;                                          // 0x0364(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         BasePos;                                           // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnItemClick__DelegateSignature(const struct FInventoryData& ItemData, class UWBP_StorageRowListItem_C* UpdetaListItem);
	void OnItemClickRight__DelegateSignature(const struct FInventoryData& ItemData, class UWBP_StorageRowListItem_C* UpdetaListItem);
	void ExecuteUbergraph_WBP_StorageRowListItemWrap(int32 EntryPoint);
	void Construct();
	void Set_Icon_Selected(bool IsSelected);
	void Destruct();
	void CreateAndInitialize();
	void Initialize();
	void CustomEvent_1(const struct FInventoryData& ItemData, class UWBP_StorageRowListItem_C* UpdetaListItem);
	void CustomEvent_0(const struct FInventoryData& ItemData, class UWBP_StorageRowListItem_C* UpdetaListItem);
	void InitializeItemData(int32 InItemIndex, int32 StorageAmount, const struct FInventoryData& InventoryData, bool Param_Enable);
	void SetScrollVisible(float Offset);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_StorageRowListItemWrap_C">();
	}
	static class UWBP_StorageRowListItemWrap_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_StorageRowListItemWrap_C>();
	}
};
static_assert(alignof(UWBP_StorageRowListItemWrap_C) == 0x000008, "Wrong alignment on UWBP_StorageRowListItemWrap_C");
static_assert(sizeof(UWBP_StorageRowListItemWrap_C) == 0x000370, "Wrong size on UWBP_StorageRowListItemWrap_C");
static_assert(offsetof(UWBP_StorageRowListItemWrap_C, UberGraphFrame) == 0x000278, "Member 'UWBP_StorageRowListItemWrap_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_StorageRowListItemWrap_C, CanvasPanel_116) == 0x000280, "Member 'UWBP_StorageRowListItemWrap_C::CanvasPanel_116' has a wrong offset!");
static_assert(offsetof(UWBP_StorageRowListItemWrap_C, ItemIndex) == 0x000288, "Member 'UWBP_StorageRowListItemWrap_C::ItemIndex' has a wrong offset!");
static_assert(offsetof(UWBP_StorageRowListItemWrap_C, Storage_Amount) == 0x00028C, "Member 'UWBP_StorageRowListItemWrap_C::Storage_Amount' has a wrong offset!");
static_assert(offsetof(UWBP_StorageRowListItemWrap_C, Inventory_Data) == 0x000290, "Member 'UWBP_StorageRowListItemWrap_C::Inventory_Data' has a wrong offset!");
static_assert(offsetof(UWBP_StorageRowListItemWrap_C, CreateDelay) == 0x000328, "Member 'UWBP_StorageRowListItemWrap_C::CreateDelay' has a wrong offset!");
static_assert(offsetof(UWBP_StorageRowListItemWrap_C, StorageRowListItem) == 0x000330, "Member 'UWBP_StorageRowListItemWrap_C::StorageRowListItem' has a wrong offset!");
static_assert(offsetof(UWBP_StorageRowListItemWrap_C, OnItemClick) == 0x000338, "Member 'UWBP_StorageRowListItemWrap_C::OnItemClick' has a wrong offset!");
static_assert(offsetof(UWBP_StorageRowListItemWrap_C, OnItemClickRight) == 0x000348, "Member 'UWBP_StorageRowListItemWrap_C::OnItemClickRight' has a wrong offset!");
static_assert(offsetof(UWBP_StorageRowListItemWrap_C, bCreate) == 0x000358, "Member 'UWBP_StorageRowListItemWrap_C::bCreate' has a wrong offset!");
static_assert(offsetof(UWBP_StorageRowListItemWrap_C, Enable) == 0x000359, "Member 'UWBP_StorageRowListItemWrap_C::Enable' has a wrong offset!");
static_assert(offsetof(UWBP_StorageRowListItemWrap_C, Is_Selected) == 0x00035A, "Member 'UWBP_StorageRowListItemWrap_C::Is_Selected' has a wrong offset!");
static_assert(offsetof(UWBP_StorageRowListItemWrap_C, ScrollVisible) == 0x00035B, "Member 'UWBP_StorageRowListItemWrap_C::ScrollVisible' has a wrong offset!");
static_assert(offsetof(UWBP_StorageRowListItemWrap_C, ListIndex) == 0x00035C, "Member 'UWBP_StorageRowListItemWrap_C::ListIndex' has a wrong offset!");
static_assert(offsetof(UWBP_StorageRowListItemWrap_C, BaseSize) == 0x000360, "Member 'UWBP_StorageRowListItemWrap_C::BaseSize' has a wrong offset!");
static_assert(offsetof(UWBP_StorageRowListItemWrap_C, OverSize) == 0x000364, "Member 'UWBP_StorageRowListItemWrap_C::OverSize' has a wrong offset!");
static_assert(offsetof(UWBP_StorageRowListItemWrap_C, BasePos) == 0x000368, "Member 'UWBP_StorageRowListItemWrap_C::BasePos' has a wrong offset!");

}

