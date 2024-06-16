#pragma once

 

// Package: ShopMenuDetailsFusionItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ShopMenuDetailsFusionItem.ShopMenuDetailsFusionItem_C
// 0x01C8 (0x0440 - 0x0278)
class UShopMenuDetailsFusionItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BgDetails;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Effect1;                               // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Effect2;                               // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ColorGrp1;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ColorGrp3;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageTitleBG;                                      // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_BaseFusionItem1;                               // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_BaseFusionItem2;                               // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ItemEffectGrp;                                     // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShopMenuDetails_ItemIconL_C*           ItemIconL;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_ItemEffectGrp;                                // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ShopMenuDetailsNameParts_C*        NameParts;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_4;                              // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextDesc;                                          // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_SlotCount;                                     // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtItemEffectName1;                                // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtItemEffectName2;                                // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtItemEffectTitle;                                // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtItemEffectValue1;                               // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtItemEffectValue2;                               // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ShopMenuDetailsTags_C*             WBP_ShopMenuDetailsTags;                           // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         CurrItemId;                                        // 0x0348(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4123[0x4];                                     // 0x034C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnEndCloseDetailAnimation;                         // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         Amount;                                            // 0x0360(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AmountMin;                                         // 0x0364(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InDesignType;                                      // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_4124[0x4];                                     // 0x036C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        ItemMasterData;                                    // 0x0370(0x00D0)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnClose__DelegateSignature();
	void OnEndCloseDetailAnimation__DelegateSignature(class UUserWidget* InWidget);
	void ExecuteUbergraph_ShopMenuDetailsFusionItem(int32 EntryPoint);
	void Construct();
	void ShowDetails(int32 ItemIndex, int32 Param_Amount, int32 Param_AmountMin);
	void CloseDetails();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void SetItemIconImage(int32 InItemIndex);
	void SetItemEffectText(int32 InItemID);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShopMenuDetailsFusionItem_C">();
	}
	static class UShopMenuDetailsFusionItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShopMenuDetailsFusionItem_C>();
	}
};
static_assert(alignof(UShopMenuDetailsFusionItem_C) == 0x000008, "Wrong alignment on UShopMenuDetailsFusionItem_C");
static_assert(sizeof(UShopMenuDetailsFusionItem_C) == 0x000440, "Wrong size on UShopMenuDetailsFusionItem_C");
static_assert(offsetof(UShopMenuDetailsFusionItem_C, UberGraphFrame) == 0x000278, "Member 'UShopMenuDetailsFusionItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsFusionItem_C, AnimOut) == 0x000280, "Member 'UShopMenuDetailsFusionItem_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsFusionItem_C, AnimIn) == 0x000288, "Member 'UShopMenuDetailsFusionItem_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsFusionItem_C, BgDetails) == 0x000290, "Member 'UShopMenuDetailsFusionItem_C::BgDetails' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsFusionItem_C, CanvasPanel_Effect1) == 0x000298, "Member 'UShopMenuDetailsFusionItem_C::CanvasPanel_Effect1' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsFusionItem_C, CanvasPanel_Effect2) == 0x0002A0, "Member 'UShopMenuDetailsFusionItem_C::CanvasPanel_Effect2' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsFusionItem_C, ColorGrp1) == 0x0002A8, "Member 'UShopMenuDetailsFusionItem_C::ColorGrp1' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsFusionItem_C, ColorGrp3) == 0x0002B0, "Member 'UShopMenuDetailsFusionItem_C::ColorGrp3' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsFusionItem_C, ImageTitleBG) == 0x0002B8, "Member 'UShopMenuDetailsFusionItem_C::ImageTitleBG' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsFusionItem_C, Img_BaseFusionItem1) == 0x0002C0, "Member 'UShopMenuDetailsFusionItem_C::Img_BaseFusionItem1' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsFusionItem_C, Img_BaseFusionItem2) == 0x0002C8, "Member 'UShopMenuDetailsFusionItem_C::Img_BaseFusionItem2' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsFusionItem_C, ItemEffectGrp) == 0x0002D0, "Member 'UShopMenuDetailsFusionItem_C::ItemEffectGrp' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsFusionItem_C, ItemIconL) == 0x0002D8, "Member 'UShopMenuDetailsFusionItem_C::ItemIconL' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsFusionItem_C, Line_ItemEffectGrp) == 0x0002E0, "Member 'UShopMenuDetailsFusionItem_C::Line_ItemEffectGrp' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsFusionItem_C, NameParts) == 0x0002E8, "Member 'UShopMenuDetailsFusionItem_C::NameParts' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsFusionItem_C, SBRuntimeTextBlock_4) == 0x0002F0, "Member 'UShopMenuDetailsFusionItem_C::SBRuntimeTextBlock_4' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsFusionItem_C, TextDesc) == 0x0002F8, "Member 'UShopMenuDetailsFusionItem_C::TextDesc' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsFusionItem_C, Txt_SlotCount) == 0x000300, "Member 'UShopMenuDetailsFusionItem_C::Txt_SlotCount' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsFusionItem_C, TxtItemEffectName1) == 0x000308, "Member 'UShopMenuDetailsFusionItem_C::TxtItemEffectName1' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsFusionItem_C, TxtItemEffectName2) == 0x000310, "Member 'UShopMenuDetailsFusionItem_C::TxtItemEffectName2' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsFusionItem_C, TxtItemEffectTitle) == 0x000318, "Member 'UShopMenuDetailsFusionItem_C::TxtItemEffectTitle' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsFusionItem_C, TxtItemEffectValue1) == 0x000320, "Member 'UShopMenuDetailsFusionItem_C::TxtItemEffectValue1' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsFusionItem_C, TxtItemEffectValue2) == 0x000328, "Member 'UShopMenuDetailsFusionItem_C::TxtItemEffectValue2' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsFusionItem_C, WBP_ShopMenuDetailsTags) == 0x000330, "Member 'UShopMenuDetailsFusionItem_C::WBP_ShopMenuDetailsTags' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsFusionItem_C, OnClose) == 0x000338, "Member 'UShopMenuDetailsFusionItem_C::OnClose' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsFusionItem_C, CurrItemId) == 0x000348, "Member 'UShopMenuDetailsFusionItem_C::CurrItemId' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsFusionItem_C, OnEndCloseDetailAnimation) == 0x000350, "Member 'UShopMenuDetailsFusionItem_C::OnEndCloseDetailAnimation' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsFusionItem_C, Amount) == 0x000360, "Member 'UShopMenuDetailsFusionItem_C::Amount' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsFusionItem_C, AmountMin) == 0x000364, "Member 'UShopMenuDetailsFusionItem_C::AmountMin' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsFusionItem_C, InDesignType) == 0x000368, "Member 'UShopMenuDetailsFusionItem_C::InDesignType' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsFusionItem_C, ItemMasterData) == 0x000370, "Member 'UShopMenuDetailsFusionItem_C::ItemMasterData' has a wrong offset!");

}

