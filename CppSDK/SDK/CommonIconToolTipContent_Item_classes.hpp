#pragma once

 

// Package: CommonIconToolTipContent_Item

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommonIconToolTipContent_Item.CommonIconToolTipContent_Item_C
// 0x0020 (0x0298 - 0x0278)
class UCommonIconToolTipContent_Item_C final : public UUserWidget
{
public:
	class UImage*                                 BG;                                                // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LabelName;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LabelType;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StackB_M_C*                        WBP_StackB_M;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetItem(int32 InItemIndex, bool bUnidentified);
	void SetImagine(int32 InImagineItemId, const class FString& InUniqueId, const int32 InStorageNumber);
	void SetMountImagine(int32 InImagineItemId, const class FString& InUniqueId, const int32 InStorageNumber);
	void SetWeapon(int32 WeaponID, const class FString& InUniqueId, const int32 InStorageNumber);
	void SetCostume(int32 CostumeId);
	void SetNameAndType(ESBRewardItemType Type, int32 ID, int32 Amount, int32 AmountMin);
	void SetVisibleStackB(bool Visible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonIconToolTipContent_Item_C">();
	}
	static class UCommonIconToolTipContent_Item_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonIconToolTipContent_Item_C>();
	}
};
static_assert(alignof(UCommonIconToolTipContent_Item_C) == 0x000008, "Wrong alignment on UCommonIconToolTipContent_Item_C");
static_assert(sizeof(UCommonIconToolTipContent_Item_C) == 0x000298, "Wrong size on UCommonIconToolTipContent_Item_C");
static_assert(offsetof(UCommonIconToolTipContent_Item_C, BG) == 0x000278, "Member 'UCommonIconToolTipContent_Item_C::BG' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_Item_C, LabelName) == 0x000280, "Member 'UCommonIconToolTipContent_Item_C::LabelName' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_Item_C, LabelType) == 0x000288, "Member 'UCommonIconToolTipContent_Item_C::LabelType' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_Item_C, WBP_StackB_M) == 0x000290, "Member 'UCommonIconToolTipContent_Item_C::WBP_StackB_M' has a wrong offset!");

}

