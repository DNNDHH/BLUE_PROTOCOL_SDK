#pragma once

 

// Package: UMG_ProductItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_SBProductDetailType_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_ProductItem.UMG_ProductItem_C
// 0x01E0 (0x0458 - 0x0278)
class UUMG_ProductItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           AmoutGrp;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BtnNoteBg;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnNotes;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn27_C*                            BtnPurchase;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn27_C*                            BtnPurchase_1;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn27_C*                            BtnReceive;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_Soldout;                                    // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_StepUpGasha;                                // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_TotalQuantity;                              // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBack01_C*                           CmnBack01;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_IconBPPS;                                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_IconSPS;                                     // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Coupon;                                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ItemBox;                                           // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Label_Amount;                                      // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Label_CurrencyUnit;                                // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Label_CurrencyUnit2;                               // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label_Price;                                       // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULapCount_C*                            LapCount;                                          // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           NumPointGrp;                                       // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Other;                                             // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_IconROS;                                   // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           PriceGrp;                                          // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPurchaseTypeSwitchingTab_C*            PurchaseTypeSwitchingTab;                          // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URibbon_PaidOnly_C*                     Ribbon_PaidOnly;                                   // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           SeasonPassItemReceive;                             // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           SeasonPassRankPurchase;                            // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Shop;                                              // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStepList_Gasha_C*                      StepList_Gasha;                                    // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchPrice;                                       // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchShopType;                                    // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Quantity;                                     // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_PriceValue;                              // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtPoint;                                          // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ProductItemList_C*                 UMG_ProductItemList;                               // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ProductItemNumberInput_C*          UMG_ProductItemNumberInput;                        // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_Content;                               // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_PointIcon;                          // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x03B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         PurchaseNum;                                       // 0x03C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_965F[0x4];                                     // 0x03C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnPurchase;                                        // 0x03C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UBP_SBProductData_C*                    ProductData;                                       // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_SBProductItemData_C*                Data;                                              // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bLayoutCheck;                                      // 0x03E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	E_SBProductDetailType                         DetailType;                                        // 0x03E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9660[0x6];                                     // 0x03EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnItemClicked;                                     // 0x03F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnReceiveButtonClicked;                            // 0x0400(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnSelectedItemData;                                // 0x0410(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsItemBox;                                        // 0x0420(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9661[0x3];                                     // 0x0421(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Price;                                             // 0x0424(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RankPoint;                                         // 0x0428(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bNumberSelect;                                     // 0x042C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsSoldOut;                                         // 0x042D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9662[0x2];                                     // 0x042E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UGashaShopSubWindow_C*                  SubWindowWidget;                                   // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnChangeStep;                                      // 0x0438(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnChangePurchaseType;                              // 0x0448(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnClose__DelegateSignature();
	void OnPurchase__DelegateSignature();
	void OnItemClicked__DelegateSignature(class UBP_SBProductItemData_C* Param_Data);
	void OnReceiveButtonClicked__DelegateSignature();
	void OnSelectedItemData__DelegateSignature(class UBP_SBProductItemData_C* Param_Data, bool bTrying);
	void OnChangeStep__DelegateSignature(const struct FSBGashaInfo& GashaInfo);
	void OnChangePurchaseType__DelegateSignature(int32 BtnId);
	void ExecuteUbergraph_UMG_ProductItem(int32 EntryPoint);
	void Destruct();
	void BndEvt__UMG_ProductItem_CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature();
	void BndEvt__BtnPurchase_1_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
	void BndEvt__UMG_ProductItemNumberInput_K2Node_ComponentBoundEvent_7_OnValueChanged__DelegateSignature(int32 Value);
	void CreateItemList(const TArray<class UBP_SBProductItemData_C*>& ItemDataList);
	void OnInputCancelKey();
	void BndEvt__FlatShop_ProductItemList_K2Node_ComponentBoundEvent_14_OnSelectedItemData__DelegateSignature(class UBP_SBProductItemData_C* Param_Data, bool bTrying);
	void BndEvt__BtnReceive_K2Node_ComponentBoundEvent_13_EventOnClicked__DelegateSignature();
	void BndEvt__FlatShop_ProductItem_2_K2Node_ComponentBoundEvent_9_OnItemClicked__DelegateSignature(class UBP_SBProductItemData_C* Param_Data);
	void UpdateLayout();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__CmnBtn27_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
	void SetProductData_RoPS(const struct FSBRoseOrbShopItemMasterData& Param_ProductData);
	void Destruct_Gasha();
	void InitStepUp();
	void OnClose_SubWindow();
	void BndEvt__GashaShopProductDetail_BtnNotes_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
	void BndEvt__GashaShopProductDetail_StepList_Gasha_K2Node_ComponentBoundEvent_2_OnChangeStep__DelegateSignature(const struct FSBGashaInfo& GashaInfo);
	void BndEvt__UMG_ProductItem_UMG_ProductItemList_K2Node_ComponentBoundEvent_3_OnBannerVisibilityChanged___DelegateSignature(bool Param_IsVisible);
	void InitUpdateGasha();
	void BndEvt__UMG_ProductItem_PurchaseTypeSwitchingTab_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(int32 BtnId);
	void SetProductInfo(bool Param_ProductData, const class FText& Description, TArray<struct FShopItemInfo>& ItemInfoList);
	void GetRemainNum(int32* Remain);
	void SetPurcahseNum(int32 Amount);
	void SetDetailType(E_SBProductDetailType InDetailType);
	void SetProductInterfaceData(TScriptInterface<class IBPI_SBProductData_C> Param_Data);
	void SetProductData(class UBP_SBProductData_C* Param_Data);
	void SetData(class UBP_SBProductItemData_C* Param_Data);
	void SetPrice(int32 Param_Price, int32 Param_RankPoint);
	void SetVisibleReceiveButton(bool bVisible);
	void Set_Enable_Purchase_Button(bool Enable);
	void UnBindCancelKey();
	void GetInputNum(int32* Num);
	void ShowNumberSelect(bool Enable);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_ProductItem_C">();
	}
	static class UUMG_ProductItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_ProductItem_C>();
	}
};
static_assert(alignof(UUMG_ProductItem_C) == 0x000008, "Wrong alignment on UUMG_ProductItem_C");
static_assert(sizeof(UUMG_ProductItem_C) == 0x000458, "Wrong size on UUMG_ProductItem_C");
static_assert(offsetof(UUMG_ProductItem_C, UberGraphFrame) == 0x000278, "Member 'UUMG_ProductItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, AmoutGrp) == 0x000280, "Member 'UUMG_ProductItem_C::AmoutGrp' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, BtnNoteBg) == 0x000288, "Member 'UUMG_ProductItem_C::BtnNoteBg' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, BtnNotes) == 0x000290, "Member 'UUMG_ProductItem_C::BtnNotes' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, BtnPurchase) == 0x000298, "Member 'UUMG_ProductItem_C::BtnPurchase' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, BtnPurchase_1) == 0x0002A0, "Member 'UUMG_ProductItem_C::BtnPurchase_1' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, BtnReceive) == 0x0002A8, "Member 'UUMG_ProductItem_C::BtnReceive' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, Canvas_Soldout) == 0x0002B0, "Member 'UUMG_ProductItem_C::Canvas_Soldout' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, Canvas_StepUpGasha) == 0x0002B8, "Member 'UUMG_ProductItem_C::Canvas_StepUpGasha' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, Canvas_TotalQuantity) == 0x0002C0, "Member 'UUMG_ProductItem_C::Canvas_TotalQuantity' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, CmnBack01) == 0x0002C8, "Member 'UUMG_ProductItem_C::CmnBack01' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, Image_IconBPPS) == 0x0002D0, "Member 'UUMG_ProductItem_C::Image_IconBPPS' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, Image_IconSPS) == 0x0002D8, "Member 'UUMG_ProductItem_C::Image_IconSPS' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, Img_Coupon) == 0x0002E0, "Member 'UUMG_ProductItem_C::Img_Coupon' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, ItemBox) == 0x0002E8, "Member 'UUMG_ProductItem_C::ItemBox' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, Label_Amount) == 0x0002F0, "Member 'UUMG_ProductItem_C::Label_Amount' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, Label_CurrencyUnit) == 0x0002F8, "Member 'UUMG_ProductItem_C::Label_CurrencyUnit' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, Label_CurrencyUnit2) == 0x000300, "Member 'UUMG_ProductItem_C::Label_CurrencyUnit2' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, Label_Price) == 0x000308, "Member 'UUMG_ProductItem_C::Label_Price' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, LapCount) == 0x000310, "Member 'UUMG_ProductItem_C::LapCount' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, NumPointGrp) == 0x000318, "Member 'UUMG_ProductItem_C::NumPointGrp' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, Other) == 0x000320, "Member 'UUMG_ProductItem_C::Other' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, Overlay_IconROS) == 0x000328, "Member 'UUMG_ProductItem_C::Overlay_IconROS' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, PriceGrp) == 0x000330, "Member 'UUMG_ProductItem_C::PriceGrp' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, PurchaseTypeSwitchingTab) == 0x000338, "Member 'UUMG_ProductItem_C::PurchaseTypeSwitchingTab' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, Ribbon_PaidOnly) == 0x000340, "Member 'UUMG_ProductItem_C::Ribbon_PaidOnly' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, SeasonPassItemReceive) == 0x000348, "Member 'UUMG_ProductItem_C::SeasonPassItemReceive' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, SeasonPassRankPurchase) == 0x000350, "Member 'UUMG_ProductItem_C::SeasonPassRankPurchase' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, Shop) == 0x000358, "Member 'UUMG_ProductItem_C::Shop' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, StepList_Gasha) == 0x000360, "Member 'UUMG_ProductItem_C::StepList_Gasha' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, SwitchPrice) == 0x000368, "Member 'UUMG_ProductItem_C::SwitchPrice' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, SwitchShopType) == 0x000370, "Member 'UUMG_ProductItem_C::SwitchShopType' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, Text_Quantity) == 0x000378, "Member 'UUMG_ProductItem_C::Text_Quantity' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, TextBlock_PriceValue) == 0x000380, "Member 'UUMG_ProductItem_C::TextBlock_PriceValue' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, TxtPoint) == 0x000388, "Member 'UUMG_ProductItem_C::TxtPoint' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, UMG_ProductItemList) == 0x000390, "Member 'UUMG_ProductItem_C::UMG_ProductItemList' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, UMG_ProductItemNumberInput) == 0x000398, "Member 'UUMG_ProductItem_C::UMG_ProductItemNumberInput' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, VerticalBox_Content) == 0x0003A0, "Member 'UUMG_ProductItem_C::VerticalBox_Content' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, WidgetSwitcher_PointIcon) == 0x0003A8, "Member 'UUMG_ProductItem_C::WidgetSwitcher_PointIcon' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, OnClose) == 0x0003B0, "Member 'UUMG_ProductItem_C::OnClose' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, PurchaseNum) == 0x0003C0, "Member 'UUMG_ProductItem_C::PurchaseNum' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, OnPurchase) == 0x0003C8, "Member 'UUMG_ProductItem_C::OnPurchase' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, ProductData) == 0x0003D8, "Member 'UUMG_ProductItem_C::ProductData' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, Data) == 0x0003E0, "Member 'UUMG_ProductItem_C::Data' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, bLayoutCheck) == 0x0003E8, "Member 'UUMG_ProductItem_C::bLayoutCheck' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, DetailType) == 0x0003E9, "Member 'UUMG_ProductItem_C::DetailType' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, OnItemClicked) == 0x0003F0, "Member 'UUMG_ProductItem_C::OnItemClicked' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, OnReceiveButtonClicked) == 0x000400, "Member 'UUMG_ProductItem_C::OnReceiveButtonClicked' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, OnSelectedItemData) == 0x000410, "Member 'UUMG_ProductItem_C::OnSelectedItemData' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, bIsItemBox) == 0x000420, "Member 'UUMG_ProductItem_C::bIsItemBox' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, Price) == 0x000424, "Member 'UUMG_ProductItem_C::Price' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, RankPoint) == 0x000428, "Member 'UUMG_ProductItem_C::RankPoint' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, bNumberSelect) == 0x00042C, "Member 'UUMG_ProductItem_C::bNumberSelect' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, IsSoldOut) == 0x00042D, "Member 'UUMG_ProductItem_C::IsSoldOut' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, SubWindowWidget) == 0x000430, "Member 'UUMG_ProductItem_C::SubWindowWidget' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, OnChangeStep) == 0x000438, "Member 'UUMG_ProductItem_C::OnChangeStep' has a wrong offset!");
static_assert(offsetof(UUMG_ProductItem_C, OnChangePurchaseType) == 0x000448, "Member 'UUMG_ProductItem_C::OnChangePurchaseType' has a wrong offset!");

}

