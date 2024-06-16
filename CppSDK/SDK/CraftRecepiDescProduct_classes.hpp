#pragma once

 

// Package: CraftRecepiDescProduct

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CraftRecepiDescProduct.CraftRecepiDescProduct_C
// 0x00C0 (0x0338 - 0x0278)
class UCraftRecepiDescProduct_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BgDetail;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnAnim_LiquidMemoryActive_C*          CmnAnim_LiquidMemoryActive;                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBonusLarge_C*                       CmnBonusLarge;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBonusSmall_C*                       CmnBonusSmall;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnOperationRotate_C*                  CmnOperationRotate;                                // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonEquipmentStatusDescWithImageView_C* CommonEquipmentStatusDescWithImageView;            // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonItemStatusDescWithImageView_C*   CommonItemStatusDescWithImageView;                 // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CvsDetail;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Item;                                          // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ItemName;                                          // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox_2364;                                  // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SPE_SlotNumMin;                                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SPE_SlotSizeMax;                                   // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SPEffectHeadingTxt;                                // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryTag_C*                        TagNotForStackB;                                   // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_CaptureStudio_C*                   UMG_CaptureStudio;                                 // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponDescription_C*                   WeaponDescription;                                 // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_Switch;                                         // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FCharacterCraftRecepi                  RecepiData;                                        // 0x0310(0x0008)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)
	bool                                          IsItem;                                            // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IconLoading;                                       // 0x0319(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6799[0x6];                                     // 0x031A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_RewardBoostTooltip_C*              RewardTooltip;                                     // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             Request_ShowRate;                                  // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void Request_ShowRate__DelegateSignature();
	void ExecuteUbergraph_CraftRecepiDescProduct(int32 EntryPoint);
	void BndEvt__CraftRecepiDescProduct_CommonItemStatusDescWithImageView_K2Node_ComponentBoundEvent_0_RequestShowRateDialog__DelegateSignature();
	void OnUpdateBoost(class UObject* Sender, class UObject* Param);
	void Destruct();
	void LoadImage(int32 InItemID);
	void SetRecepiData(const struct FCharacterCraftRecepi& Param_RecepiData);
	void Construct();
	void OnLoaded_29DFB891443B661BA66AFE8D4818F831(class UObject* Loaded);
	void UpdateBoost();
	void UpdateLiquidMemory();
	void UpdateCraftNum(int32 CraftCount);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CraftRecepiDescProduct_C">();
	}
	static class UCraftRecepiDescProduct_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCraftRecepiDescProduct_C>();
	}
};
static_assert(alignof(UCraftRecepiDescProduct_C) == 0x000008, "Wrong alignment on UCraftRecepiDescProduct_C");
static_assert(sizeof(UCraftRecepiDescProduct_C) == 0x000338, "Wrong size on UCraftRecepiDescProduct_C");
static_assert(offsetof(UCraftRecepiDescProduct_C, UberGraphFrame) == 0x000278, "Member 'UCraftRecepiDescProduct_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCraftRecepiDescProduct_C, BgDetail) == 0x000280, "Member 'UCraftRecepiDescProduct_C::BgDetail' has a wrong offset!");
static_assert(offsetof(UCraftRecepiDescProduct_C, CmnAnim_LiquidMemoryActive) == 0x000288, "Member 'UCraftRecepiDescProduct_C::CmnAnim_LiquidMemoryActive' has a wrong offset!");
static_assert(offsetof(UCraftRecepiDescProduct_C, CmnBonusLarge) == 0x000290, "Member 'UCraftRecepiDescProduct_C::CmnBonusLarge' has a wrong offset!");
static_assert(offsetof(UCraftRecepiDescProduct_C, CmnBonusSmall) == 0x000298, "Member 'UCraftRecepiDescProduct_C::CmnBonusSmall' has a wrong offset!");
static_assert(offsetof(UCraftRecepiDescProduct_C, CmnOperationRotate) == 0x0002A0, "Member 'UCraftRecepiDescProduct_C::CmnOperationRotate' has a wrong offset!");
static_assert(offsetof(UCraftRecepiDescProduct_C, CommonEquipmentStatusDescWithImageView) == 0x0002A8, "Member 'UCraftRecepiDescProduct_C::CommonEquipmentStatusDescWithImageView' has a wrong offset!");
static_assert(offsetof(UCraftRecepiDescProduct_C, CommonItemStatusDescWithImageView) == 0x0002B0, "Member 'UCraftRecepiDescProduct_C::CommonItemStatusDescWithImageView' has a wrong offset!");
static_assert(offsetof(UCraftRecepiDescProduct_C, CvsDetail) == 0x0002B8, "Member 'UCraftRecepiDescProduct_C::CvsDetail' has a wrong offset!");
static_assert(offsetof(UCraftRecepiDescProduct_C, Img_Item) == 0x0002C0, "Member 'UCraftRecepiDescProduct_C::Img_Item' has a wrong offset!");
static_assert(offsetof(UCraftRecepiDescProduct_C, ItemName) == 0x0002C8, "Member 'UCraftRecepiDescProduct_C::ItemName' has a wrong offset!");
static_assert(offsetof(UCraftRecepiDescProduct_C, RetainerBox_2364) == 0x0002D0, "Member 'UCraftRecepiDescProduct_C::RetainerBox_2364' has a wrong offset!");
static_assert(offsetof(UCraftRecepiDescProduct_C, SPE_SlotNumMin) == 0x0002D8, "Member 'UCraftRecepiDescProduct_C::SPE_SlotNumMin' has a wrong offset!");
static_assert(offsetof(UCraftRecepiDescProduct_C, SPE_SlotSizeMax) == 0x0002E0, "Member 'UCraftRecepiDescProduct_C::SPE_SlotSizeMax' has a wrong offset!");
static_assert(offsetof(UCraftRecepiDescProduct_C, SPEffectHeadingTxt) == 0x0002E8, "Member 'UCraftRecepiDescProduct_C::SPEffectHeadingTxt' has a wrong offset!");
static_assert(offsetof(UCraftRecepiDescProduct_C, TagNotForStackB) == 0x0002F0, "Member 'UCraftRecepiDescProduct_C::TagNotForStackB' has a wrong offset!");
static_assert(offsetof(UCraftRecepiDescProduct_C, UMG_CaptureStudio) == 0x0002F8, "Member 'UCraftRecepiDescProduct_C::UMG_CaptureStudio' has a wrong offset!");
static_assert(offsetof(UCraftRecepiDescProduct_C, WeaponDescription) == 0x000300, "Member 'UCraftRecepiDescProduct_C::WeaponDescription' has a wrong offset!");
static_assert(offsetof(UCraftRecepiDescProduct_C, WS_Switch) == 0x000308, "Member 'UCraftRecepiDescProduct_C::WS_Switch' has a wrong offset!");
static_assert(offsetof(UCraftRecepiDescProduct_C, RecepiData) == 0x000310, "Member 'UCraftRecepiDescProduct_C::RecepiData' has a wrong offset!");
static_assert(offsetof(UCraftRecepiDescProduct_C, IsItem) == 0x000318, "Member 'UCraftRecepiDescProduct_C::IsItem' has a wrong offset!");
static_assert(offsetof(UCraftRecepiDescProduct_C, IconLoading) == 0x000319, "Member 'UCraftRecepiDescProduct_C::IconLoading' has a wrong offset!");
static_assert(offsetof(UCraftRecepiDescProduct_C, RewardTooltip) == 0x000320, "Member 'UCraftRecepiDescProduct_C::RewardTooltip' has a wrong offset!");
static_assert(offsetof(UCraftRecepiDescProduct_C, Request_ShowRate) == 0x000328, "Member 'UCraftRecepiDescProduct_C::Request_ShowRate' has a wrong offset!");

}

