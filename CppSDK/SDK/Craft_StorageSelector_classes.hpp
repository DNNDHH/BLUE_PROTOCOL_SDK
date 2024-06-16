#pragma once

 

// Package: Craft_StorageSelector

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Craft_StorageSelector.Craft_StorageSelector_C
// 0x00E0 (0x0358 - 0x0278)
class UCraft_StorageSelector_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButtonCmn08_C*                       Btn_Change;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Bag_Item;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Bag_Weapon;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Storage_Item;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Storage_Weapon;                                // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_BtnChange;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TXT_Warning;                                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_StorageIcon;                                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          CurrentIsStorage;                                  // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsItem;                                            // 0x02C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6805[0x6];                                     // 0x02C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftMasterData                       Craft_Master;                                      // 0x02C8(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         CraftCount;                                        // 0x0350(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Craft_StorageSelector(int32 EntryPoint);
	void BndEvt__Craft_StorageSelector_Btn_Change_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Craft_StorageSelector_Btn_Change_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void Set_CraftCount(int32 Param_CraftCount);
	void Set_RecepiData(const struct FCharacterCraftRecepi& RecepiData);
	void BndEvt__Craft_StorageSelector_Btn_Change_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void UpdateStorageView();

	void IsStorage(bool* Param_CurrentIsStorage) const;
	void GetSelectStorageNo(int32* StorageNo) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Craft_StorageSelector_C">();
	}
	static class UCraft_StorageSelector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCraft_StorageSelector_C>();
	}
};
static_assert(alignof(UCraft_StorageSelector_C) == 0x000008, "Wrong alignment on UCraft_StorageSelector_C");
static_assert(sizeof(UCraft_StorageSelector_C) == 0x000358, "Wrong size on UCraft_StorageSelector_C");
static_assert(offsetof(UCraft_StorageSelector_C, UberGraphFrame) == 0x000278, "Member 'UCraft_StorageSelector_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCraft_StorageSelector_C, Btn_Change) == 0x000280, "Member 'UCraft_StorageSelector_C::Btn_Change' has a wrong offset!");
static_assert(offsetof(UCraft_StorageSelector_C, Img_Bag_Item) == 0x000288, "Member 'UCraft_StorageSelector_C::Img_Bag_Item' has a wrong offset!");
static_assert(offsetof(UCraft_StorageSelector_C, Img_Bag_Weapon) == 0x000290, "Member 'UCraft_StorageSelector_C::Img_Bag_Weapon' has a wrong offset!");
static_assert(offsetof(UCraft_StorageSelector_C, Img_Storage_Item) == 0x000298, "Member 'UCraft_StorageSelector_C::Img_Storage_Item' has a wrong offset!");
static_assert(offsetof(UCraft_StorageSelector_C, Img_Storage_Weapon) == 0x0002A0, "Member 'UCraft_StorageSelector_C::Img_Storage_Weapon' has a wrong offset!");
static_assert(offsetof(UCraft_StorageSelector_C, Txt_BtnChange) == 0x0002A8, "Member 'UCraft_StorageSelector_C::Txt_BtnChange' has a wrong offset!");
static_assert(offsetof(UCraft_StorageSelector_C, TXT_Warning) == 0x0002B0, "Member 'UCraft_StorageSelector_C::TXT_Warning' has a wrong offset!");
static_assert(offsetof(UCraft_StorageSelector_C, WS_StorageIcon) == 0x0002B8, "Member 'UCraft_StorageSelector_C::WS_StorageIcon' has a wrong offset!");
static_assert(offsetof(UCraft_StorageSelector_C, CurrentIsStorage) == 0x0002C0, "Member 'UCraft_StorageSelector_C::CurrentIsStorage' has a wrong offset!");
static_assert(offsetof(UCraft_StorageSelector_C, IsItem) == 0x0002C1, "Member 'UCraft_StorageSelector_C::IsItem' has a wrong offset!");
static_assert(offsetof(UCraft_StorageSelector_C, Craft_Master) == 0x0002C8, "Member 'UCraft_StorageSelector_C::Craft_Master' has a wrong offset!");
static_assert(offsetof(UCraft_StorageSelector_C, CraftCount) == 0x000350, "Member 'UCraft_StorageSelector_C::CraftCount' has a wrong offset!");

}

