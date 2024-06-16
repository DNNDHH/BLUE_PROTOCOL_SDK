#pragma once

 

// Package: UMG_ProductItemList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_SBProductDetailType_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_ProductItemList.UMG_ProductItemList_C
// 0x0228 (0x04A0 - 0x0278)
class UUMG_ProductItemList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ItemBox01;                                         // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ItemBox12;                                         // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ItemBox0;                                          // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimInFade;                                        // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimInMove;                                        // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBannerIcon_C*                          BannerIcon;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Content;                               // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_InItemBox;                             // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_ProductName;                           // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_PurchaseLimit;                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_TitleInItemBox;                        // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_TitleItemReceive;                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonIcon_C*                          CommonIcon;                                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonIcon_C*                          CommonIcon_TitleItemReceive;                       // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Data_PurchaseNum;                                  // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_ProductItem_DescItem_C*       FlatShop_ProductItem_DescItem;                     // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_ProductItem_DescItem_C*       FlatShop_ProductItem_DescItem_1;                   // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_ProductItem_DescItem_C*       FlatShop_ProductItem_DescItem_2;                   // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_ProductItem_DescItem_C*       FlatShop_ProductItem_DescItem_3;                   // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_ProductItem_DescItemText_C*   FlatShop_ProductItemDetail_90;                     // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Icon_canvas;                                       // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Product;                                      // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ItemBoxBg;                                   // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ItemBoxArrow_1;                                    // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ItemBoxArrow_2;                                    // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShopMenuDetails_ItemIconL_C*           ItemIconL_1;                                       // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShopMenuDetails_ItemIconL_C*           ItemIconL_2;                                       // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShopMenuDetails_ItemIconL_C*           ItemIconL_3;                                       // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label_ProductName;                                 // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label_ProductName_1;                               // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line1;                                             // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineArrowUpward;                                   // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    RuntimeText_Soldout;                               // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBDateTimeTextBlock*                   SBDateTimeTextBlock_Deadline;                      // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_Content;                                 // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                Spacer_ContentFullScreen;                          // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                Spacer_ContentInItemBox;                           // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                Spacer_ContentInItemBoxFullScreen;                 // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                Spacer_ContentNormal;                              // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                Spacer_ContentSeasonRankPurchase;                  // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                Spacer_Header;                                     // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                Spacer_HeaderFullScreen;                           // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                Spacer_HeaderFullScreenTop;                        // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                Spacer_TitleSeasonRankPurchase;                    // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                SpacerForNoBanner;                                 // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchTxtBgColor;                                  // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchTxtBgColorTitle;                             // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_Content;                               // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_ContentSize;                        // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Header;                             // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Title;                              // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bLayoutCheck;                                      // 0x0418(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	E_SBProductDetailType                         DetailType;                                        // 0x0419(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bShowPurchaseLimit;                                // 0x041A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bShowDescription;                                  // 0x041B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bIsItemBox;                                        // 0x041C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_952E[0x3];                                     // 0x041D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_SBProductData_C>  ProductData;                                       // 0x0420(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	FMulticastInlineDelegateProperty_             OnItemClicked;                                     // 0x0430(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnSelectedItemData;                                // 0x0440(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TScriptInterface<class IBPI_SBProductData_C>  PrevProductData;                                   // 0x0450(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class UFlatShop_ProductItem_DescItem_C*> CreatedItemList;                                   // 0x0460(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UShopMenuDetails_ItemIconL_C*>   ItemBoxIconList;                                   // 0x0470(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_             OnBannerVisibilityChanged_;                        // 0x0480(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UGashaMenu_ProductListRateLine2_C*> CreatedGashaFrameList;                             // 0x0490(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void OnItemClicked__DelegateSignature(class UBP_SBProductItemData_C* Data);
	void OnSelectedItemData__DelegateSignature(class UBP_SBProductItemData_C* Data, bool bTrying);
	void OnBannerVisibilityChanged___DelegateSignature(bool Param_IsVisible);
	void ExecuteUbergraph_UMG_ProductItemList(int32 EntryPoint);
	void LayoutCheck(E_SBProductDetailType Param_DetailType, bool Param_bIsItemBox);
	void Destruct();
	void SetSelectedItemData(class UBP_SBProductItemData_C* Data, bool bTrying);
	void OnItemClicked_Event(class UBP_SBProductItemData_C* Data);
	void UpdateLayout();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnLoad_Icon(class FName URL);
	void ResetItemList();
	void ResetBannerIconPadding();
	void BannerIconPadding();
	void ResetItemList_Tab();
	void ResetBannerIconPadding_Tab();
	void BannerIconPadding_Tab();
	void OnLoaded_2F958F004AA9A8D66934A2BF4E23E3D9(class UObject* Loaded);
	void SetDetailType(E_SBProductDetailType InDetailType);
	void SetProductData(class UBP_SBProductData_C* Data);
	void SetData(class UBP_SBProductItemData_C* Data);
	void CreateItemList_Internal(const TArray<class UBP_SBProductItemData_C*>& ItemDataList);
	void UpdateItemBoxIcon();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_ProductItemList_C">();
	}
	static class UUMG_ProductItemList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_ProductItemList_C>();
	}
};
static_assert(alignof(UUMG_ProductItemList_C) == 0x000008, "Wrong alignment on UUMG_ProductItemList_C");
static_assert(sizeof(UUMG_ProductItemList_C) == 0x0004A0, "Wrong size on UUMG_ProductItemList_C");
static_assert(offsetof(UUMG_ProductItemList_C, UberGraphFrame) == 0x000278, "Member 'UUMG_ProductItemList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, ItemBox01) == 0x000280, "Member 'UUMG_ProductItemList_C::ItemBox01' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, ItemBox12) == 0x000288, "Member 'UUMG_ProductItemList_C::ItemBox12' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, ItemBox0) == 0x000290, "Member 'UUMG_ProductItemList_C::ItemBox0' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, AnimInFade) == 0x000298, "Member 'UUMG_ProductItemList_C::AnimInFade' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, AnimInMove) == 0x0002A0, "Member 'UUMG_ProductItemList_C::AnimInMove' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, BannerIcon) == 0x0002A8, "Member 'UUMG_ProductItemList_C::BannerIcon' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, CanvasPanel_Content) == 0x0002B0, "Member 'UUMG_ProductItemList_C::CanvasPanel_Content' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, CanvasPanel_InItemBox) == 0x0002B8, "Member 'UUMG_ProductItemList_C::CanvasPanel_InItemBox' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, CanvasPanel_ProductName) == 0x0002C0, "Member 'UUMG_ProductItemList_C::CanvasPanel_ProductName' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, CanvasPanel_PurchaseLimit) == 0x0002C8, "Member 'UUMG_ProductItemList_C::CanvasPanel_PurchaseLimit' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, CanvasPanel_TitleInItemBox) == 0x0002D0, "Member 'UUMG_ProductItemList_C::CanvasPanel_TitleInItemBox' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, CanvasPanel_TitleItemReceive) == 0x0002D8, "Member 'UUMG_ProductItemList_C::CanvasPanel_TitleItemReceive' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, CommonIcon) == 0x0002E0, "Member 'UUMG_ProductItemList_C::CommonIcon' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, CommonIcon_TitleItemReceive) == 0x0002E8, "Member 'UUMG_ProductItemList_C::CommonIcon_TitleItemReceive' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, Data_PurchaseNum) == 0x0002F0, "Member 'UUMG_ProductItemList_C::Data_PurchaseNum' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, FlatShop_ProductItem_DescItem) == 0x0002F8, "Member 'UUMG_ProductItemList_C::FlatShop_ProductItem_DescItem' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, FlatShop_ProductItem_DescItem_1) == 0x000300, "Member 'UUMG_ProductItemList_C::FlatShop_ProductItem_DescItem_1' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, FlatShop_ProductItem_DescItem_2) == 0x000308, "Member 'UUMG_ProductItemList_C::FlatShop_ProductItem_DescItem_2' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, FlatShop_ProductItem_DescItem_3) == 0x000310, "Member 'UUMG_ProductItemList_C::FlatShop_ProductItem_DescItem_3' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, FlatShop_ProductItemDetail_90) == 0x000318, "Member 'UUMG_ProductItemList_C::FlatShop_ProductItemDetail_90' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, Icon_canvas) == 0x000320, "Member 'UUMG_ProductItemList_C::Icon_canvas' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, Icon_Product) == 0x000328, "Member 'UUMG_ProductItemList_C::Icon_Product' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, Image_ItemBoxBg) == 0x000330, "Member 'UUMG_ProductItemList_C::Image_ItemBoxBg' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, ItemBoxArrow_1) == 0x000338, "Member 'UUMG_ProductItemList_C::ItemBoxArrow_1' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, ItemBoxArrow_2) == 0x000340, "Member 'UUMG_ProductItemList_C::ItemBoxArrow_2' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, ItemIconL_1) == 0x000348, "Member 'UUMG_ProductItemList_C::ItemIconL_1' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, ItemIconL_2) == 0x000350, "Member 'UUMG_ProductItemList_C::ItemIconL_2' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, ItemIconL_3) == 0x000358, "Member 'UUMG_ProductItemList_C::ItemIconL_3' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, Label_ProductName) == 0x000360, "Member 'UUMG_ProductItemList_C::Label_ProductName' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, Label_ProductName_1) == 0x000368, "Member 'UUMG_ProductItemList_C::Label_ProductName_1' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, Line1) == 0x000370, "Member 'UUMG_ProductItemList_C::Line1' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, LineArrowUpward) == 0x000378, "Member 'UUMG_ProductItemList_C::LineArrowUpward' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, RuntimeText_Soldout) == 0x000380, "Member 'UUMG_ProductItemList_C::RuntimeText_Soldout' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, SBDateTimeTextBlock_Deadline) == 0x000388, "Member 'UUMG_ProductItemList_C::SBDateTimeTextBlock_Deadline' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, ScrollBox_Content) == 0x000390, "Member 'UUMG_ProductItemList_C::ScrollBox_Content' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, Spacer_ContentFullScreen) == 0x000398, "Member 'UUMG_ProductItemList_C::Spacer_ContentFullScreen' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, Spacer_ContentInItemBox) == 0x0003A0, "Member 'UUMG_ProductItemList_C::Spacer_ContentInItemBox' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, Spacer_ContentInItemBoxFullScreen) == 0x0003A8, "Member 'UUMG_ProductItemList_C::Spacer_ContentInItemBoxFullScreen' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, Spacer_ContentNormal) == 0x0003B0, "Member 'UUMG_ProductItemList_C::Spacer_ContentNormal' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, Spacer_ContentSeasonRankPurchase) == 0x0003B8, "Member 'UUMG_ProductItemList_C::Spacer_ContentSeasonRankPurchase' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, Spacer_Header) == 0x0003C0, "Member 'UUMG_ProductItemList_C::Spacer_Header' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, Spacer_HeaderFullScreen) == 0x0003C8, "Member 'UUMG_ProductItemList_C::Spacer_HeaderFullScreen' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, Spacer_HeaderFullScreenTop) == 0x0003D0, "Member 'UUMG_ProductItemList_C::Spacer_HeaderFullScreenTop' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, Spacer_TitleSeasonRankPurchase) == 0x0003D8, "Member 'UUMG_ProductItemList_C::Spacer_TitleSeasonRankPurchase' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, SpacerForNoBanner) == 0x0003E0, "Member 'UUMG_ProductItemList_C::SpacerForNoBanner' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, SwitchTxtBgColor) == 0x0003E8, "Member 'UUMG_ProductItemList_C::SwitchTxtBgColor' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, SwitchTxtBgColorTitle) == 0x0003F0, "Member 'UUMG_ProductItemList_C::SwitchTxtBgColorTitle' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, VerticalBox_Content) == 0x0003F8, "Member 'UUMG_ProductItemList_C::VerticalBox_Content' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, WidgetSwitcher_ContentSize) == 0x000400, "Member 'UUMG_ProductItemList_C::WidgetSwitcher_ContentSize' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, WidgetSwitcher_Header) == 0x000408, "Member 'UUMG_ProductItemList_C::WidgetSwitcher_Header' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, WidgetSwitcher_Title) == 0x000410, "Member 'UUMG_ProductItemList_C::WidgetSwitcher_Title' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, bLayoutCheck) == 0x000418, "Member 'UUMG_ProductItemList_C::bLayoutCheck' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, DetailType) == 0x000419, "Member 'UUMG_ProductItemList_C::DetailType' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, bShowPurchaseLimit) == 0x00041A, "Member 'UUMG_ProductItemList_C::bShowPurchaseLimit' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, bShowDescription) == 0x00041B, "Member 'UUMG_ProductItemList_C::bShowDescription' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, bIsItemBox) == 0x00041C, "Member 'UUMG_ProductItemList_C::bIsItemBox' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, ProductData) == 0x000420, "Member 'UUMG_ProductItemList_C::ProductData' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, OnItemClicked) == 0x000430, "Member 'UUMG_ProductItemList_C::OnItemClicked' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, OnSelectedItemData) == 0x000440, "Member 'UUMG_ProductItemList_C::OnSelectedItemData' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, PrevProductData) == 0x000450, "Member 'UUMG_ProductItemList_C::PrevProductData' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, CreatedItemList) == 0x000460, "Member 'UUMG_ProductItemList_C::CreatedItemList' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, ItemBoxIconList) == 0x000470, "Member 'UUMG_ProductItemList_C::ItemBoxIconList' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, OnBannerVisibilityChanged_) == 0x000480, "Member 'UUMG_ProductItemList_C::OnBannerVisibilityChanged_' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItemList_C, CreatedGashaFrameList) == 0x000490, "Member 'UUMG_ProductItemList_C::CreatedGashaFrameList' has a wrong offset!");

}

