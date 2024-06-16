#pragma once

 

// Package: ShopMenuDetailsItem

#include "Basic.hpp"

#include "E_SBDetailsZoomIn_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ShopMenuDetailsItem.ShopMenuDetailsItem_C
// 0x0260 (0x04D8 - 0x0278)
class UShopMenuDetailsItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnmBtnShowProduct_Arrow;                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BgDetails;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnAnim_ArrowS_C*                      CmnAnim_ArrowS;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ColorGrp1;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ColorGrp3;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_2;                                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageTitleBG;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageWeaponStickerBg;                              // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           IntervalGrp;                                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ItemEffectGrp;                                     // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShopMenuDetails_ItemIconL_C*           ItemIconL;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_ItemEffectGrp;                                // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ShopMenuDetailsNameParts_C*        NameParts;                                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTextButtonCmnBtn16_C*                SBButtonItemBoxDetail;                             // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTextButtonCmnBtn16_C*                SBButtonShowProduct;                               // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_4;                              // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_18;                             // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Text_DisplayProduct;                               // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Text_ItemBoxDetail;                                // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextDesc;                                          // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_ItemLv;                                        // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Lv;                                            // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtItemEffect;                                     // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtItemEffectTitle;                                // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtItemRecast;                                     // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtItemRecastTitle;                                // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ShopMenuDetailsTags_C*             WBP_ShopMenuDetailsTags;                           // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Button;                             // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Image;                              // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x0378(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          DetailsVisible;                                    // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B15[0x3];                                     // 0x0389(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CurrItemId;                                        // 0x038C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnEndCloseDetailAnimation;                         // 0x0390(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         Amount;                                            // 0x03A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AmountMin;                                         // 0x03A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   DefaultRecastText;                                 // 0x03A8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsSellItem;                                        // 0x03C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B16[0x3];                                     // 0x03C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InDesignType;                                      // 0x03C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsWeaponStickerItem;                               // 0x03C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B17[0x3];                                     // 0x03C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         WeaponStickerWeaponId;                             // 0x03CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemMasterData                        ItemMasterData;                                    // 0x03D0(0x00D0)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bIsItemBox;                                        // 0x04A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B18[0x7];                                     // 0x04A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClickItemBoxDetail;                              // 0x04A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickZoomIn;                                     // 0x04B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickShowProduct;                                // 0x04C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnClose__DelegateSignature();
	void OnEndCloseDetailAnimation__DelegateSignature(class UUserWidget* InWidget);
	void OnClickItemBoxDetail__DelegateSignature();
	void OnClickZoomIn__DelegateSignature(E_SBDetailsZoomIn Type);
	void OnClickShowProduct__DelegateSignature(ESBRewardItemType RewardType, int32 ItemIndex);
	void ExecuteUbergraph_ShopMenuDetailsItem(int32 EntryPoint);
	void BndEvt__ShopMenuDetailsItem_SBButtonShowProduct_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void SetupExtraButton();
	void ResetDisplay();
	void BndEvt__ShopMenuDetailsItem_WBP_ShopMenuDetailsTags_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature();
	void BndEvt__ShopMenuDetailsItem_SBButtonItemBox_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void CloseDetails();
	void ShowDetails(int32 ItemIndex, int32 Param_Amount, int32 Param_AmountMin);
	void Construct();
	void SetItemIconImage(int32 InItemIndex);
	void SetItemEffectText(int32 InItemID);
	void SetItemRecastText(int32 InItemID);
	void SetIntervalGrpVisibility(bool InIsVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShopMenuDetailsItem_C">();
	}
	static class UShopMenuDetailsItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShopMenuDetailsItem_C>();
	}
};
static_assert(alignof(UShopMenuDetailsItem_C) == 0x000008, "Wrong alignment on UShopMenuDetailsItem_C");
static_assert(sizeof(UShopMenuDetailsItem_C) == 0x0004D8, "Wrong size on UShopMenuDetailsItem_C");
static_assert(offsetof(UShopMenuDetailsItem_C, UberGraphFrame) == 0x000278, "Member 'UShopMenuDetailsItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsItem_C, AnmBtnShowProduct_Arrow) == 0x000280, "Member 'UShopMenuDetailsItem_C::AnmBtnShowProduct_Arrow' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsItem_C, AnimOut) == 0x000288, "Member 'UShopMenuDetailsItem_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsItem_C, AnimIn) == 0x000290, "Member 'UShopMenuDetailsItem_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsItem_C, BgDetails) == 0x000298, "Member 'UShopMenuDetailsItem_C::BgDetails' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsItem_C, CmnAnim_ArrowS) == 0x0002A0, "Member 'UShopMenuDetailsItem_C::CmnAnim_ArrowS' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsItem_C, ColorGrp1) == 0x0002A8, "Member 'UShopMenuDetailsItem_C::ColorGrp1' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsItem_C, ColorGrp3) == 0x0002B0, "Member 'UShopMenuDetailsItem_C::ColorGrp3' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsItem_C, HorizontalBox_2) == 0x0002B8, "Member 'UShopMenuDetailsItem_C::HorizontalBox_2' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsItem_C, ImageTitleBG) == 0x0002C0, "Member 'UShopMenuDetailsItem_C::ImageTitleBG' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsItem_C, ImageWeaponStickerBg) == 0x0002C8, "Member 'UShopMenuDetailsItem_C::ImageWeaponStickerBg' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsItem_C, IntervalGrp) == 0x0002D0, "Member 'UShopMenuDetailsItem_C::IntervalGrp' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsItem_C, ItemEffectGrp) == 0x0002D8, "Member 'UShopMenuDetailsItem_C::ItemEffectGrp' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsItem_C, ItemIconL) == 0x0002E0, "Member 'UShopMenuDetailsItem_C::ItemIconL' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsItem_C, Line_ItemEffectGrp) == 0x0002E8, "Member 'UShopMenuDetailsItem_C::Line_ItemEffectGrp' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsItem_C, NameParts) == 0x0002F0, "Member 'UShopMenuDetailsItem_C::NameParts' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsItem_C, SBButtonItemBoxDetail) == 0x0002F8, "Member 'UShopMenuDetailsItem_C::SBButtonItemBoxDetail' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsItem_C, SBButtonShowProduct) == 0x000300, "Member 'UShopMenuDetailsItem_C::SBButtonShowProduct' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsItem_C, SBRuntimeTextBlock_4) == 0x000308, "Member 'UShopMenuDetailsItem_C::SBRuntimeTextBlock_4' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsItem_C, SBRuntimeTextBlock_18) == 0x000310, "Member 'UShopMenuDetailsItem_C::SBRuntimeTextBlock_18' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsItem_C, Text_DisplayProduct) == 0x000318, "Member 'UShopMenuDetailsItem_C::Text_DisplayProduct' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsItem_C, Text_ItemBoxDetail) == 0x000320, "Member 'UShopMenuDetailsItem_C::Text_ItemBoxDetail' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsItem_C, TextDesc) == 0x000328, "Member 'UShopMenuDetailsItem_C::TextDesc' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsItem_C, Txt_ItemLv) == 0x000330, "Member 'UShopMenuDetailsItem_C::Txt_ItemLv' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsItem_C, Txt_Lv) == 0x000338, "Member 'UShopMenuDetailsItem_C::Txt_Lv' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsItem_C, TxtItemEffect) == 0x000340, "Member 'UShopMenuDetailsItem_C::TxtItemEffect' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsItem_C, TxtItemEffectTitle) == 0x000348, "Member 'UShopMenuDetailsItem_C::TxtItemEffectTitle' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsItem_C, TxtItemRecast) == 0x000350, "Member 'UShopMenuDetailsItem_C::TxtItemRecast' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsItem_C, TxtItemRecastTitle) == 0x000358, "Member 'UShopMenuDetailsItem_C::TxtItemRecastTitle' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsItem_C, WBP_ShopMenuDetailsTags) == 0x000360, "Member 'UShopMenuDetailsItem_C::WBP_ShopMenuDetailsTags' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsItem_C, WidgetSwitcher_Button) == 0x000368, "Member 'UShopMenuDetailsItem_C::WidgetSwitcher_Button' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsItem_C, WidgetSwitcher_Image) == 0x000370, "Member 'UShopMenuDetailsItem_C::WidgetSwitcher_Image' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsItem_C, OnClose) == 0x000378, "Member 'UShopMenuDetailsItem_C::OnClose' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsItem_C, DetailsVisible) == 0x000388, "Member 'UShopMenuDetailsItem_C::DetailsVisible' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsItem_C, CurrItemId) == 0x00038C, "Member 'UShopMenuDetailsItem_C::CurrItemId' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsItem_C, OnEndCloseDetailAnimation) == 0x000390, "Member 'UShopMenuDetailsItem_C::OnEndCloseDetailAnimation' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsItem_C, Amount) == 0x0003A0, "Member 'UShopMenuDetailsItem_C::Amount' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsItem_C, AmountMin) == 0x0003A4, "Member 'UShopMenuDetailsItem_C::AmountMin' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsItem_C, DefaultRecastText) == 0x0003A8, "Member 'UShopMenuDetailsItem_C::DefaultRecastText' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsItem_C, IsSellItem) == 0x0003C0, "Member 'UShopMenuDetailsItem_C::IsSellItem' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsItem_C, InDesignType) == 0x0003C4, "Member 'UShopMenuDetailsItem_C::InDesignType' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsItem_C, IsWeaponStickerItem) == 0x0003C8, "Member 'UShopMenuDetailsItem_C::IsWeaponStickerItem' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsItem_C, WeaponStickerWeaponId) == 0x0003CC, "Member 'UShopMenuDetailsItem_C::WeaponStickerWeaponId' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsItem_C, ItemMasterData) == 0x0003D0, "Member 'UShopMenuDetailsItem_C::ItemMasterData' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsItem_C, bIsItemBox) == 0x0004A0, "Member 'UShopMenuDetailsItem_C::bIsItemBox' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsItem_C, OnClickItemBoxDetail) == 0x0004A8, "Member 'UShopMenuDetailsItem_C::OnClickItemBoxDetail' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsItem_C, OnClickZoomIn) == 0x0004B8, "Member 'UShopMenuDetailsItem_C::OnClickZoomIn' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsItem_C, OnClickShowProduct) == 0x0004C8, "Member 'UShopMenuDetailsItem_C::OnClickShowProduct' has a wrong offset!");

}

