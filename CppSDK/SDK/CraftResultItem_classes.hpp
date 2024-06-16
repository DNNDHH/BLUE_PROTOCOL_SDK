#pragma once

 

// Package: CraftResultItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CraftResultItem.CraftResultItem_C
// 0x0108 (0x0380 - 0x0278)
class UCraftResultItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonItemStatusDescWithImageView_C*   CommonItemStatusDescWithImageView;                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_Overflow;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_Overload;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_SallNum;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_SallProfits;                                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_ToBag;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_ToStorage;                                     // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_103;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_115;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_186;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_190;                                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_379;                                         // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_386;                                         // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_590;                                         // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SB_Overflow;                                       // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_BagAddNum;                                     // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_BonusCount;                                    // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_BonusCraftedNum;                               // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_CraftedNum;                                    // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Overflow;                                      // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Overflow_1;                                    // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Overflow_2;                                    // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_StorageAddNum;                                 // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_Storage;                                        // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FCharacterCraftRecepi                  Recepi;                                            // 0x0360(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                         CriticalNum;                                       // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TotalCraftedNum;                                   // 0x036C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         StorageSlackNum;                                   // 0x0370(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BagSlackNum;                                       // 0x0374(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SaleAmount;                                        // 0x0378(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SaleProfits;                                       // 0x037C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CraftResultItem(int32 EntryPoint);
	void SetFailVisible(bool Flag);
	void SetCriticalCraftData(const TArray<class FString>& Uids, int32 Param_CriticalNum, int32 TotalNum, int32 CraftCount, int32 StorageNum, int32 SaleNum, int32 Param_SaleProfits);
	void SetCraftedItemData(bool IsCritical, int32 TotalCount, int32 StorageType, int32 SaleNum, int32 Param_SaleProfits);
	void SetRecepi(const struct FCharacterCraftRecepi& Param_Recepi);
	void Construct();
	void UpdateCriticalColor();
	void UpdateBonusCraftNum(int32 CraftCount);
	void Update_Storage_Slack_Num();
	void Update_SlackView(int32 StorageNo);
	void PlayAnimIn();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CraftResultItem_C">();
	}
	static class UCraftResultItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCraftResultItem_C>();
	}
};
static_assert(alignof(UCraftResultItem_C) == 0x000008, "Wrong alignment on UCraftResultItem_C");
static_assert(sizeof(UCraftResultItem_C) == 0x000380, "Wrong size on UCraftResultItem_C");
static_assert(offsetof(UCraftResultItem_C, UberGraphFrame) == 0x000278, "Member 'UCraftResultItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCraftResultItem_C, AnimIn) == 0x000280, "Member 'UCraftResultItem_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UCraftResultItem_C, CommonItemStatusDescWithImageView) == 0x000288, "Member 'UCraftResultItem_C::CommonItemStatusDescWithImageView' has a wrong offset!");
static_assert(offsetof(UCraftResultItem_C, Cvs_Overflow) == 0x000290, "Member 'UCraftResultItem_C::Cvs_Overflow' has a wrong offset!");
static_assert(offsetof(UCraftResultItem_C, Cvs_Overload) == 0x000298, "Member 'UCraftResultItem_C::Cvs_Overload' has a wrong offset!");
static_assert(offsetof(UCraftResultItem_C, Cvs_SallNum) == 0x0002A0, "Member 'UCraftResultItem_C::Cvs_SallNum' has a wrong offset!");
static_assert(offsetof(UCraftResultItem_C, Cvs_SallProfits) == 0x0002A8, "Member 'UCraftResultItem_C::Cvs_SallProfits' has a wrong offset!");
static_assert(offsetof(UCraftResultItem_C, Cvs_ToBag) == 0x0002B0, "Member 'UCraftResultItem_C::Cvs_ToBag' has a wrong offset!");
static_assert(offsetof(UCraftResultItem_C, Cvs_ToStorage) == 0x0002B8, "Member 'UCraftResultItem_C::Cvs_ToStorage' has a wrong offset!");
static_assert(offsetof(UCraftResultItem_C, Image) == 0x0002C0, "Member 'UCraftResultItem_C::Image' has a wrong offset!");
static_assert(offsetof(UCraftResultItem_C, Image_1) == 0x0002C8, "Member 'UCraftResultItem_C::Image_1' has a wrong offset!");
static_assert(offsetof(UCraftResultItem_C, Image_2) == 0x0002D0, "Member 'UCraftResultItem_C::Image_2' has a wrong offset!");
static_assert(offsetof(UCraftResultItem_C, Image_103) == 0x0002D8, "Member 'UCraftResultItem_C::Image_103' has a wrong offset!");
static_assert(offsetof(UCraftResultItem_C, Image_115) == 0x0002E0, "Member 'UCraftResultItem_C::Image_115' has a wrong offset!");
static_assert(offsetof(UCraftResultItem_C, Image_186) == 0x0002E8, "Member 'UCraftResultItem_C::Image_186' has a wrong offset!");
static_assert(offsetof(UCraftResultItem_C, Image_190) == 0x0002F0, "Member 'UCraftResultItem_C::Image_190' has a wrong offset!");
static_assert(offsetof(UCraftResultItem_C, Image_379) == 0x0002F8, "Member 'UCraftResultItem_C::Image_379' has a wrong offset!");
static_assert(offsetof(UCraftResultItem_C, Image_386) == 0x000300, "Member 'UCraftResultItem_C::Image_386' has a wrong offset!");
static_assert(offsetof(UCraftResultItem_C, Image_590) == 0x000308, "Member 'UCraftResultItem_C::Image_590' has a wrong offset!");
static_assert(offsetof(UCraftResultItem_C, SB_Overflow) == 0x000310, "Member 'UCraftResultItem_C::SB_Overflow' has a wrong offset!");
static_assert(offsetof(UCraftResultItem_C, Txt_BagAddNum) == 0x000318, "Member 'UCraftResultItem_C::Txt_BagAddNum' has a wrong offset!");
static_assert(offsetof(UCraftResultItem_C, Txt_BonusCount) == 0x000320, "Member 'UCraftResultItem_C::Txt_BonusCount' has a wrong offset!");
static_assert(offsetof(UCraftResultItem_C, Txt_BonusCraftedNum) == 0x000328, "Member 'UCraftResultItem_C::Txt_BonusCraftedNum' has a wrong offset!");
static_assert(offsetof(UCraftResultItem_C, Txt_CraftedNum) == 0x000330, "Member 'UCraftResultItem_C::Txt_CraftedNum' has a wrong offset!");
static_assert(offsetof(UCraftResultItem_C, Txt_Overflow) == 0x000338, "Member 'UCraftResultItem_C::Txt_Overflow' has a wrong offset!");
static_assert(offsetof(UCraftResultItem_C, Txt_Overflow_1) == 0x000340, "Member 'UCraftResultItem_C::Txt_Overflow_1' has a wrong offset!");
static_assert(offsetof(UCraftResultItem_C, Txt_Overflow_2) == 0x000348, "Member 'UCraftResultItem_C::Txt_Overflow_2' has a wrong offset!");
static_assert(offsetof(UCraftResultItem_C, Txt_StorageAddNum) == 0x000350, "Member 'UCraftResultItem_C::Txt_StorageAddNum' has a wrong offset!");
static_assert(offsetof(UCraftResultItem_C, WS_Storage) == 0x000358, "Member 'UCraftResultItem_C::WS_Storage' has a wrong offset!");
static_assert(offsetof(UCraftResultItem_C, Recepi) == 0x000360, "Member 'UCraftResultItem_C::Recepi' has a wrong offset!");
static_assert(offsetof(UCraftResultItem_C, CriticalNum) == 0x000368, "Member 'UCraftResultItem_C::CriticalNum' has a wrong offset!");
static_assert(offsetof(UCraftResultItem_C, TotalCraftedNum) == 0x00036C, "Member 'UCraftResultItem_C::TotalCraftedNum' has a wrong offset!");
static_assert(offsetof(UCraftResultItem_C, StorageSlackNum) == 0x000370, "Member 'UCraftResultItem_C::StorageSlackNum' has a wrong offset!");
static_assert(offsetof(UCraftResultItem_C, BagSlackNum) == 0x000374, "Member 'UCraftResultItem_C::BagSlackNum' has a wrong offset!");
static_assert(offsetof(UCraftResultItem_C, SaleAmount) == 0x000378, "Member 'UCraftResultItem_C::SaleAmount' has a wrong offset!");
static_assert(offsetof(UCraftResultItem_C, SaleProfits) == 0x00037C, "Member 'UCraftResultItem_C::SaleProfits' has a wrong offset!");

}

