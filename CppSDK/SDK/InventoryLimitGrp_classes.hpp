#pragma once

 

// Package: InventoryLimitGrp

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass InventoryLimitGrp.InventoryLimitGrp_C
// 0x0120 (0x0398 - 0x0278)
class UInventoryLimitGrp_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_LimitedMerk;                                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBDateTimeTextBlock*                   SBDateTimeTextBlock_Duration;                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBDateTimeTextBlock*                   SBDateTimeTextBlock_Limit;                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Heading;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcherForTime;                             // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDateTime                              EventEndTime;                                      // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FItemMasterData                        ItemMasterData;                                    // 0x02B8(0x00D0)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         CommentTextId;                                     // 0x0388(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsForShopProduct;                                  // 0x038C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7678[0x3];                                     // 0x038D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         DurationMinutes;                                   // 0x0390(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     ItemType;                                          // 0x0394(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_InventoryLimitGrp(int32 EntryPoint);
	void SetDataForMountImagine(const struct FDateTime& InExpiryDateTime);
	void SetDataForImagine(const struct FDateTime& InExpiryDateTime);
	void SetDataForWeaponByDurationMinutes(int32 InDurationMinutes);
	void SetDataForCostumeByDurationMinutes(int32 InDurationMinutes);
	void SetDataForWeapon(const struct FDateTime& InExpiryDateTime);
	void SetDataForCostume(const struct FDateTime& InExpiryDateTime);
	void SetData(const struct FItemMasterData& Param_ItemMasterData);
	void PreConstruct(bool IsDesignTime);
	void SetDurationTimeFromMinutes(int32 InDurationMinutes);
	void SetIsForShopProduct(bool InIsForShopProduct);
	ESBDateTimeTextRemainTimeFlag SetDateTimeText(const struct FDateTime& InDateTime);
	void SetHeadingMessage();
	void Set_Item_Type(EItemType Param_ItemType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InventoryLimitGrp_C">();
	}
	static class UInventoryLimitGrp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInventoryLimitGrp_C>();
	}
};
static_assert(alignof(UInventoryLimitGrp_C) == 0x000008, "Wrong alignment on UInventoryLimitGrp_C");
static_assert(sizeof(UInventoryLimitGrp_C) == 0x000398, "Wrong size on UInventoryLimitGrp_C");
static_assert(offsetof(UInventoryLimitGrp_C, UberGraphFrame) == 0x000278, "Member 'UInventoryLimitGrp_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UInventoryLimitGrp_C, CanvasPanel_0) == 0x000280, "Member 'UInventoryLimitGrp_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UInventoryLimitGrp_C, Image_LimitedMerk) == 0x000288, "Member 'UInventoryLimitGrp_C::Image_LimitedMerk' has a wrong offset!");
static_assert(offsetof(UInventoryLimitGrp_C, SBDateTimeTextBlock_Duration) == 0x000290, "Member 'UInventoryLimitGrp_C::SBDateTimeTextBlock_Duration' has a wrong offset!");
static_assert(offsetof(UInventoryLimitGrp_C, SBDateTimeTextBlock_Limit) == 0x000298, "Member 'UInventoryLimitGrp_C::SBDateTimeTextBlock_Limit' has a wrong offset!");
static_assert(offsetof(UInventoryLimitGrp_C, Txt_Heading) == 0x0002A0, "Member 'UInventoryLimitGrp_C::Txt_Heading' has a wrong offset!");
static_assert(offsetof(UInventoryLimitGrp_C, WidgetSwitcherForTime) == 0x0002A8, "Member 'UInventoryLimitGrp_C::WidgetSwitcherForTime' has a wrong offset!");
static_assert(offsetof(UInventoryLimitGrp_C, EventEndTime) == 0x0002B0, "Member 'UInventoryLimitGrp_C::EventEndTime' has a wrong offset!");
static_assert(offsetof(UInventoryLimitGrp_C, ItemMasterData) == 0x0002B8, "Member 'UInventoryLimitGrp_C::ItemMasterData' has a wrong offset!");
static_assert(offsetof(UInventoryLimitGrp_C, CommentTextId) == 0x000388, "Member 'UInventoryLimitGrp_C::CommentTextId' has a wrong offset!");
static_assert(offsetof(UInventoryLimitGrp_C, IsForShopProduct) == 0x00038C, "Member 'UInventoryLimitGrp_C::IsForShopProduct' has a wrong offset!");
static_assert(offsetof(UInventoryLimitGrp_C, DurationMinutes) == 0x000390, "Member 'UInventoryLimitGrp_C::DurationMinutes' has a wrong offset!");
static_assert(offsetof(UInventoryLimitGrp_C, ItemType) == 0x000394, "Member 'UInventoryLimitGrp_C::ItemType' has a wrong offset!");

}

