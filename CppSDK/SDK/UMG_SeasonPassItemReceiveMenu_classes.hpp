#pragma once

 

// Package: UMG_SeasonPassItemReceiveMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "E_SBDetailsZoomIn_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_SeasonPassItemReceiveMenu.UMG_SeasonPassItemReceiveMenu_C
// 0x0090 (0x0308 - 0x0278)
class UUMG_SeasonPassItemReceiveMenu_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Main;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Unselected;                            // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_DetailsImagineBattleZoomIn_C*      UMG_DetailsImagineBattleZoomIn;                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ProductDetail_C*                   UMG_ProductDetail;                                 // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ProductDetailBackground_C*         UMG_ProductDetailBackground;                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ProductItem_C*                     UMG_ProductItem;                                   // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClick_Receive;                                   // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TScriptInterface<class IBPI_SBProductData_C>  ProductData;                                       // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USBSeasonPassMenuRewardItemData*        Data;                                              // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCanReceive;                                       // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsReceived;                                        // 0x0301(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bDoClosed;                                         // 0x0302(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnClick_Receive__DelegateSignature(class USBSeasonPassMenuRewardItemData* Param_Data);
	void OnClose__DelegateSignature(class UUMG_SeasonPassItemReceiveMenu_C* Sender);
	void ExecuteUbergraph_UMG_SeasonPassItemReceiveMenu(int32 EntryPoint);
	void OnUpdateData();
	void UpdateDesignAndData();
	void UpdateDesign();
	void BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature();
	void SetProductData(TScriptInterface<class IBPI_SBProductData_C> Param_Data);
	void SetData(class USBSeasonPassMenuRewardItemData* Param_Data);
	void Construct();
	void BndEvt__UMG_SeasonPassItemReceiveMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_2_OnClickZoomIn__DelegateSignature(E_SBDetailsZoomIn Type);
	void BndEvt__UMG_SeasonPassItemReceiveMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_5_OnClickItemBoxDetail__DelegateSignature(class UBP_SBProductItemData_C* Param_Data);
	void BndEvt__UMG_DetailsImagineBattleZoomIn_K2Node_ComponentBoundEvent_10_OnClickZoomOut__DelegateSignature();
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0();
	void BndEvt__UMG_ProductItem_K2Node_ComponentBoundEvent_0_OnReceiveButtonClicked__DelegateSignature();
	void BndEvt__UMG_ItemPreviewItemInfo_K2Node_ComponentBoundEvent_9_OnShowDetails__DelegateSignature(bool bShow);
	void BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_3_OnSelectedItemData__DelegateSignature(class UBP_SBProductItemData_C* Param_Data, bool bTrying);
	void BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_1_OnItemClicked__DelegateSignature(class UBP_SBProductItemData_C* Param_Data);
	void Hide();
	void Show();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_SeasonPassItemReceiveMenu_C">();
	}
	static class UUMG_SeasonPassItemReceiveMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_SeasonPassItemReceiveMenu_C>();
	}
};
static_assert(alignof(UUMG_SeasonPassItemReceiveMenu_C) == 0x000008, "Wrong alignment on UUMG_SeasonPassItemReceiveMenu_C");
static_assert(sizeof(UUMG_SeasonPassItemReceiveMenu_C) == 0x000308, "Wrong size on UUMG_SeasonPassItemReceiveMenu_C");
static_assert(offsetof(UUMG_SeasonPassItemReceiveMenu_C, UberGraphFrame) == 0x000278, "Member 'UUMG_SeasonPassItemReceiveMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassItemReceiveMenu_C, AnimOut) == 0x000280, "Member 'UUMG_SeasonPassItemReceiveMenu_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassItemReceiveMenu_C, AnimIn) == 0x000288, "Member 'UUMG_SeasonPassItemReceiveMenu_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassItemReceiveMenu_C, CanvasPanel_Main) == 0x000290, "Member 'UUMG_SeasonPassItemReceiveMenu_C::CanvasPanel_Main' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassItemReceiveMenu_C, CanvasPanel_Unselected) == 0x000298, "Member 'UUMG_SeasonPassItemReceiveMenu_C::CanvasPanel_Unselected' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassItemReceiveMenu_C, UIBlocker) == 0x0002A0, "Member 'UUMG_SeasonPassItemReceiveMenu_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassItemReceiveMenu_C, UMG_DetailsImagineBattleZoomIn) == 0x0002A8, "Member 'UUMG_SeasonPassItemReceiveMenu_C::UMG_DetailsImagineBattleZoomIn' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassItemReceiveMenu_C, UMG_ProductDetail) == 0x0002B0, "Member 'UUMG_SeasonPassItemReceiveMenu_C::UMG_ProductDetail' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassItemReceiveMenu_C, UMG_ProductDetailBackground) == 0x0002B8, "Member 'UUMG_SeasonPassItemReceiveMenu_C::UMG_ProductDetailBackground' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassItemReceiveMenu_C, UMG_ProductItem) == 0x0002C0, "Member 'UUMG_SeasonPassItemReceiveMenu_C::UMG_ProductItem' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassItemReceiveMenu_C, OnClick_Receive) == 0x0002C8, "Member 'UUMG_SeasonPassItemReceiveMenu_C::OnClick_Receive' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassItemReceiveMenu_C, OnClose) == 0x0002D8, "Member 'UUMG_SeasonPassItemReceiveMenu_C::OnClose' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassItemReceiveMenu_C, ProductData) == 0x0002E8, "Member 'UUMG_SeasonPassItemReceiveMenu_C::ProductData' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassItemReceiveMenu_C, Data) == 0x0002F8, "Member 'UUMG_SeasonPassItemReceiveMenu_C::Data' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassItemReceiveMenu_C, bCanReceive) == 0x000300, "Member 'UUMG_SeasonPassItemReceiveMenu_C::bCanReceive' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassItemReceiveMenu_C, IsReceived) == 0x000301, "Member 'UUMG_SeasonPassItemReceiveMenu_C::IsReceived' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassItemReceiveMenu_C, bDoClosed) == 0x000302, "Member 'UUMG_SeasonPassItemReceiveMenu_C::bDoClosed' has a wrong offset!");

}

