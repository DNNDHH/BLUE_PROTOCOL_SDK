#pragma once

 

// Package: BP_RsDialog_ProductTitle

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "RsDialogProductTitleType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_RsDialog_ProductTitle.BP_RsDialog_ProductTitle_C
// 0x0068 (0x02E0 - 0x0278)
class UBP_RsDialog_ProductTitle_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                               Box_Amount;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonIcon_C*                          Icon_Item;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Arrow;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchPass;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Amount;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_PlanName;                                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Product;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_RankFrom;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_RankLabel;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_RankTo;                                        // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ESBRewardItemType                             ProductRewardType;                                 // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     ProductItemType;                                   // 0x02D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_551D[0x2];                                     // 0x02DA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ProductItemId;                                     // 0x02DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_RsDialog_ProductTitle(int32 EntryPoint);
	void LoadTexture_CmnIcon(int32 ItemSetId);
	void SetProductTitleInfo(ERsDialogProductTitleType Type, int32 ItemSetId, const class FText& ProductName, int32 RankFrom, int32 RankTo);
	void SetSelectNum(int32 Amount);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RsDialog_ProductTitle_C">();
	}
	static class UBP_RsDialog_ProductTitle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_RsDialog_ProductTitle_C>();
	}
};
static_assert(alignof(UBP_RsDialog_ProductTitle_C) == 0x000008, "Wrong alignment on UBP_RsDialog_ProductTitle_C");
static_assert(sizeof(UBP_RsDialog_ProductTitle_C) == 0x0002E0, "Wrong size on UBP_RsDialog_ProductTitle_C");
static_assert(offsetof(UBP_RsDialog_ProductTitle_C, UberGraphFrame) == 0x000278, "Member 'UBP_RsDialog_ProductTitle_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_ProductTitle_C, Box_Amount) == 0x000280, "Member 'UBP_RsDialog_ProductTitle_C::Box_Amount' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_ProductTitle_C, Icon_Item) == 0x000288, "Member 'UBP_RsDialog_ProductTitle_C::Icon_Item' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_ProductTitle_C, Img_Arrow) == 0x000290, "Member 'UBP_RsDialog_ProductTitle_C::Img_Arrow' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_ProductTitle_C, Switcher) == 0x000298, "Member 'UBP_RsDialog_ProductTitle_C::Switcher' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_ProductTitle_C, SwitchPass) == 0x0002A0, "Member 'UBP_RsDialog_ProductTitle_C::SwitchPass' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_ProductTitle_C, Txt_Amount) == 0x0002A8, "Member 'UBP_RsDialog_ProductTitle_C::Txt_Amount' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_ProductTitle_C, Txt_PlanName) == 0x0002B0, "Member 'UBP_RsDialog_ProductTitle_C::Txt_PlanName' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_ProductTitle_C, Txt_Product) == 0x0002B8, "Member 'UBP_RsDialog_ProductTitle_C::Txt_Product' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_ProductTitle_C, Txt_RankFrom) == 0x0002C0, "Member 'UBP_RsDialog_ProductTitle_C::Txt_RankFrom' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_ProductTitle_C, Txt_RankLabel) == 0x0002C8, "Member 'UBP_RsDialog_ProductTitle_C::Txt_RankLabel' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_ProductTitle_C, Txt_RankTo) == 0x0002D0, "Member 'UBP_RsDialog_ProductTitle_C::Txt_RankTo' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_ProductTitle_C, ProductRewardType) == 0x0002D8, "Member 'UBP_RsDialog_ProductTitle_C::ProductRewardType' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_ProductTitle_C, ProductItemType) == 0x0002D9, "Member 'UBP_RsDialog_ProductTitle_C::ProductItemType' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_ProductTitle_C, ProductItemId) == 0x0002DC, "Member 'UBP_RsDialog_ProductTitle_C::ProductItemId' has a wrong offset!");

}

