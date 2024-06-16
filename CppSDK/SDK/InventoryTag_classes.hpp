#pragma once

 

// Package: InventoryTag

#include "Basic.hpp"

#include "ToolTipType_structs.hpp"
#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "E_InventoryTagType_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass InventoryTag.InventoryTag_C
// 0x0180 (0x03F8 - 0x0278)
class UInventoryTag_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_181;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 InfoIcon;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_192;                                       // 0x0290(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchBPP;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchFusion;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchSale;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchStackB;                                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchType;                                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_StackBMax;                                     // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	E_InventoryTagType                            TagType;                                           // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bTooltipEnable;                                    // 0x02C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	EToolTipType                                  ToolTipType;                                       // 0x02CA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_92DD[0x1];                                     // 0x02CB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemId;                                            // 0x02CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CachedToolTip;                                     // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           OwnItemInfo;                                       // 0x02D8(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bIsOwnItem;                                        // 0x03F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_InventoryTag(int32 EntryPoint);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void SetPossibility(bool bPossible);
	void SetBppChange(ESBRewardItemType RewardType, int32 Param_ItemId, bool Used, bool IsBppIrredeemable);
	void SetItemMasterData(const struct FItemMasterData& ItemMasterData, bool IsBppIrredeemable);
	void SetWeaponMaster(const struct FSBWeaponMasterData& WeaponMaster, bool Used, bool IsBppIrredeemable);
	void SetMasterCostume(const struct FSBMasterCostume& MasterCostume, bool Used, bool IsBppIrredeemable);
	void SetMasterImagine(const struct FSBMasterImagine& MasterImagine, bool Used, bool IsBppIrredeemable);
	void SetMasterMountImagine(const struct FSBMasterMountImagine& MasterMountImagine, bool Used, bool IsBppIrredeemable);
	void SetMasterOrnament(const struct FSBMasterOrnament& Master, bool Used, bool IsBppIrredeemable);
	void SetInventoryItemData(const struct FInventoryItemData& InventoryItemData);
	void SetStackBMax(const class FString& StackBId);
	void SetStackBMaxValue(int32 Value);
	void SetOwnItemInfo(const struct FOwnItemInfo& Info);
	void Set_Stack_BMax_Visible(bool bStackBEnable);
	void SetStackBMaxToolTipCreateInfos(int32 Param_ItemId, EToolTipType Param_ToolTipType);
	void CreateToolTipWidgetifNeeded(class UUserWidget** OutTooltip);
	class UWidget* GetToolTipWidget_0();
	void UpdateImagineStackBMaxToolTip();
	void UpdateWeaponStackBMaxToolTip();
	void InitOwnItemInfos(const struct FOwnItemInfo& NewOwnItemInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InventoryTag_C">();
	}
	static class UInventoryTag_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInventoryTag_C>();
	}
};
static_assert(alignof(UInventoryTag_C) == 0x000008, "Wrong alignment on UInventoryTag_C");
static_assert(sizeof(UInventoryTag_C) == 0x0003F8, "Wrong size on UInventoryTag_C");
static_assert(offsetof(UInventoryTag_C, UberGraphFrame) == 0x000278, "Member 'UInventoryTag_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UInventoryTag_C, Image_181) == 0x000280, "Member 'UInventoryTag_C::Image_181' has a wrong offset!");
static_assert(offsetof(UInventoryTag_C, InfoIcon) == 0x000288, "Member 'UInventoryTag_C::InfoIcon' has a wrong offset!");
static_assert(offsetof(UInventoryTag_C, SizeBox_192) == 0x000290, "Member 'UInventoryTag_C::SizeBox_192' has a wrong offset!");
static_assert(offsetof(UInventoryTag_C, SwitchBPP) == 0x000298, "Member 'UInventoryTag_C::SwitchBPP' has a wrong offset!");
static_assert(offsetof(UInventoryTag_C, SwitchFusion) == 0x0002A0, "Member 'UInventoryTag_C::SwitchFusion' has a wrong offset!");
static_assert(offsetof(UInventoryTag_C, SwitchSale) == 0x0002A8, "Member 'UInventoryTag_C::SwitchSale' has a wrong offset!");
static_assert(offsetof(UInventoryTag_C, SwitchStackB) == 0x0002B0, "Member 'UInventoryTag_C::SwitchStackB' has a wrong offset!");
static_assert(offsetof(UInventoryTag_C, SwitchType) == 0x0002B8, "Member 'UInventoryTag_C::SwitchType' has a wrong offset!");
static_assert(offsetof(UInventoryTag_C, Txt_StackBMax) == 0x0002C0, "Member 'UInventoryTag_C::Txt_StackBMax' has a wrong offset!");
static_assert(offsetof(UInventoryTag_C, TagType) == 0x0002C8, "Member 'UInventoryTag_C::TagType' has a wrong offset!");
static_assert(offsetof(UInventoryTag_C, bTooltipEnable) == 0x0002C9, "Member 'UInventoryTag_C::bTooltipEnable' has a wrong offset!");
static_assert(offsetof(UInventoryTag_C, ToolTipType) == 0x0002CA, "Member 'UInventoryTag_C::ToolTipType' has a wrong offset!");
static_assert(offsetof(UInventoryTag_C, ItemId) == 0x0002CC, "Member 'UInventoryTag_C::ItemId' has a wrong offset!");
static_assert(offsetof(UInventoryTag_C, CachedToolTip) == 0x0002D0, "Member 'UInventoryTag_C::CachedToolTip' has a wrong offset!");
static_assert(offsetof(UInventoryTag_C, OwnItemInfo) == 0x0002D8, "Member 'UInventoryTag_C::OwnItemInfo' has a wrong offset!");
static_assert(offsetof(UInventoryTag_C, bIsOwnItem) == 0x0003F0, "Member 'UInventoryTag_C::bIsOwnItem' has a wrong offset!");

}

