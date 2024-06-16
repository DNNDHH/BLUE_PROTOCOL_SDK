#pragma once

 

// Package: UMG_ProductDetail

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "E_SBDetailsZoomIn_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_ProductDetail.UMG_ProductDetail_C
// 0x00E0 (0x0358 - 0x0278)
class UUMG_ProductDetail_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ZoomPlayerCapture;                                 // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCmnCostume_C*                          CmnCostume;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShopMenuDetailsSwitcher_C*             ShopMenuDetailsSwitcher;                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TScriptInterface<class IBPI_SBProductData_C>  Data;                                              // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UBP_SBProductItemData_C*                SelectedItemData;                                  // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bZoomIn;                                           // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bCheckLayout;                                      // 0x02B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80F3[0x2];                                     // 0x02B2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   LayoutType;                                        // 0x02B4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_80F4[0x4];                                     // 0x02BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<int32, class UBP_SBProductItemData_C*>   TryingCostumeItemDataMap;                          // 0x02C0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UBP_SBProductItemData_C*                WorkingCostumeItemData;                            // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnShowDetails;                                     // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickZoomIn;                                     // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UBP_SBProductItemData_C*>        TempCostumeItemDataList;                           // 0x0338(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnClickItemBoxDetail;                              // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnShowDetails__DelegateSignature(bool bShow);
	void OnClickZoomIn__DelegateSignature(E_SBDetailsZoomIn Type);
	void OnClickItemBoxDetail__DelegateSignature(class UBP_SBProductItemData_C* Param_Data);
	void ExecuteUbergraph_UMG_ProductDetail(int32 EntryPoint);
	void Destruct();
	void CloseItemDetail(bool bAnimation);
	void SetData(TScriptInterface<class IBPI_SBProductData_C> Param_Data);
	void SetZoomFlag(bool Param_bZoomIn, bool bOnlyDisplay, bool bAnimation);
	void BndEvt__CmnCostume_K2Node_ComponentBoundEvent_1_OnCreatePlayerCapture__DelegateSignature(class ABP_PlayerSceneCapture2D_Studio_C* PlayerCapture);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__UMG_ProductDetail_ShopMenuDetailsSwitcher_K2Node_ComponentBoundEvent_0_OnClickZoomIn__DelegateSignature(E_SBDetailsZoomIn Type);
	void BndEvt__UMG_ProductDetail_ShopMenuDetailsSwitcher_K2Node_ComponentBoundEvent_5_OnClickItemBoxDetail__DelegateSignature();
	void BndEvt__ExchangeShop_2_K2Node_ComponentBoundEvent_3_OnShow__DelegateSignature(bool bShow);
	void BndEvt__CmnCostume_K2Node_ComponentBoundEvent_2_OnClickZoomOut__DelegateSignature();
	void BndEvt__CmnCostume_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature();
	void BndEvt__CmnCostume_K2Node_ComponentBoundEvent_0_OnTrying__DelegateSignature(int32 ItemIndex, bool bTrying);
	void SetTryingCostumeItemData(class UBP_SBProductItemData_C* Param_Data, bool bTrying, bool bUpdateCapture);
	void SetTryingAllIfCostumeSet();
	void SetSelectedItemData(class UBP_SBProductItemData_C* ItemData, bool bToggleTrying, bool bForceTrying);
	void UnsetTryingCostumeItemData(class UBP_SBProductItemData_C* Param_Data);
	void UnsetSelectedItemData(class UBP_SBProductItemData_C* ItemData);
	void SetSelectedSimpleItemData(EItemType ItemType, int32 ItemIndex, int32 Amount, bool bToggleTrying, bool bForceTrying);
	void SetButtonPosition_Posing(EShopType IsExchangeShop);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_ProductDetail_C">();
	}
	static class UUMG_ProductDetail_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_ProductDetail_C>();
	}
};
static_assert(alignof(UUMG_ProductDetail_C) == 0x000008, "Wrong alignment on UUMG_ProductDetail_C");
static_assert(sizeof(UUMG_ProductDetail_C) == 0x000358, "Wrong size on UUMG_ProductDetail_C");
static_assert(offsetof(UUMG_ProductDetail_C, UberGraphFrame) == 0x000278, "Member 'UUMG_ProductDetail_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_ProductDetail_C, ZoomPlayerCapture) == 0x000280, "Member 'UUMG_ProductDetail_C::ZoomPlayerCapture' has a wrong offset!");
static_assert(offsetof(UUMG_ProductDetail_C, CmnCostume) == 0x000288, "Member 'UUMG_ProductDetail_C::CmnCostume' has a wrong offset!");
static_assert(offsetof(UUMG_ProductDetail_C, ShopMenuDetailsSwitcher) == 0x000290, "Member 'UUMG_ProductDetail_C::ShopMenuDetailsSwitcher' has a wrong offset!");
static_assert(offsetof(UUMG_ProductDetail_C, Data) == 0x000298, "Member 'UUMG_ProductDetail_C::Data' has a wrong offset!");
static_assert(offsetof(UUMG_ProductDetail_C, SelectedItemData) == 0x0002A8, "Member 'UUMG_ProductDetail_C::SelectedItemData' has a wrong offset!");
static_assert(offsetof(UUMG_ProductDetail_C, bZoomIn) == 0x0002B0, "Member 'UUMG_ProductDetail_C::bZoomIn' has a wrong offset!");
static_assert(offsetof(UUMG_ProductDetail_C, bCheckLayout) == 0x0002B1, "Member 'UUMG_ProductDetail_C::bCheckLayout' has a wrong offset!");
static_assert(offsetof(UUMG_ProductDetail_C, LayoutType) == 0x0002B4, "Member 'UUMG_ProductDetail_C::LayoutType' has a wrong offset!");
static_assert(offsetof(UUMG_ProductDetail_C, TryingCostumeItemDataMap) == 0x0002C0, "Member 'UUMG_ProductDetail_C::TryingCostumeItemDataMap' has a wrong offset!");
static_assert(offsetof(UUMG_ProductDetail_C, WorkingCostumeItemData) == 0x000310, "Member 'UUMG_ProductDetail_C::WorkingCostumeItemData' has a wrong offset!");
static_assert(offsetof(UUMG_ProductDetail_C, OnShowDetails) == 0x000318, "Member 'UUMG_ProductDetail_C::OnShowDetails' has a wrong offset!");
static_assert(offsetof(UUMG_ProductDetail_C, OnClickZoomIn) == 0x000328, "Member 'UUMG_ProductDetail_C::OnClickZoomIn' has a wrong offset!");
static_assert(offsetof(UUMG_ProductDetail_C, TempCostumeItemDataList) == 0x000338, "Member 'UUMG_ProductDetail_C::TempCostumeItemDataList' has a wrong offset!");
static_assert(offsetof(UUMG_ProductDetail_C, OnClickItemBoxDetail) == 0x000348, "Member 'UUMG_ProductDetail_C::OnClickItemBoxDetail' has a wrong offset!");

}

