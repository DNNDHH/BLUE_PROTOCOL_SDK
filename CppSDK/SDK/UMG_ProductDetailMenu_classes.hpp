#pragma once

 

// Package: UMG_ProductDetailMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"
#include "E_SBDetailsZoomIn_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_ProductDetailMenu.UMG_ProductDetailMenu_C
// 0x0078 (0x02F0 - 0x0278)
class UUMG_ProductDetailMenu_C final : public UUserWidget
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
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TScriptInterface<class IBPI_SBProductData_C>  ProductData;                                       // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UUIBlocker_C*                           UIBlocker_0;                                       // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClose__DelegateSignature(class UUMG_ProductDetailMenu_C* Sender);
	void ExecuteUbergraph_UMG_ProductDetailMenu(int32 EntryPoint);
	void Destruct();
	void Construct();
	void SetDataByRewardData(ESBRewardItemType RewardType, int32 ItemId, int32 Amount, bool bBonus);
	void SetDataByUniqueId(const class FString& UniqueId, int32 OverrideAmount);
	void SetDataByDungeonSupply(const struct FSBDungeonSupply& DungeonSupply);
	void SetDataByMailDatas(const TArray<struct FSBMailData>& MailDatas);
	void SetDataByMasterReward(const struct FSBMasterReward& MasterReward);
	void SetProductData(TScriptInterface<class IBPI_SBProductData_C> Data);
	void SetData(class UBP_SBProductItemData_C* Data);
	void BndEvt__UMG_ProductDetailMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_2_OnClickZoomIn__DelegateSignature(E_SBDetailsZoomIn Type);
	void BndEvt__UMG_SeasonPassItemReceiveMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_5_OnClickItemBoxDetail__DelegateSignature(class UBP_SBProductItemData_C* Data);
	void BndEvt__UMG_DetailsImagineBattleZoomIn_K2Node_ComponentBoundEvent_10_OnClickZoomOut__DelegateSignature();
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0();
	void BndEvt__UMG_ItemPreviewItemInfo_K2Node_ComponentBoundEvent_9_OnShowDetails__DelegateSignature(bool bShow);
	void BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_3_OnSelectedItemData__DelegateSignature(class UBP_SBProductItemData_C* Data, bool bTrying);
	void BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_1_OnItemClicked__DelegateSignature(class UBP_SBProductItemData_C* Data);
	void BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature();
	void Hide();
	void Show();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_ProductDetailMenu_C">();
	}
	static class UUMG_ProductDetailMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_ProductDetailMenu_C>();
	}
};
static_assert(alignof(UUMG_ProductDetailMenu_C) == 0x000008, "Wrong alignment on UUMG_ProductDetailMenu_C");
static_assert(sizeof(UUMG_ProductDetailMenu_C) == 0x0002F0, "Wrong size on UUMG_ProductDetailMenu_C");
static_assert(offsetof(UUMG_ProductDetailMenu_C, UberGraphFrame) == 0x000278, "Member 'UUMG_ProductDetailMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_ProductDetailMenu_C, AnimOut) == 0x000280, "Member 'UUMG_ProductDetailMenu_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UUMG_ProductDetailMenu_C, AnimIn) == 0x000288, "Member 'UUMG_ProductDetailMenu_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UUMG_ProductDetailMenu_C, CanvasPanel_Main) == 0x000290, "Member 'UUMG_ProductDetailMenu_C::CanvasPanel_Main' has a wrong offset!");
static_assert(offsetof(UUMG_ProductDetailMenu_C, CanvasPanel_Unselected) == 0x000298, "Member 'UUMG_ProductDetailMenu_C::CanvasPanel_Unselected' has a wrong offset!");
static_assert(offsetof(UUMG_ProductDetailMenu_C, UIBlocker) == 0x0002A0, "Member 'UUMG_ProductDetailMenu_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UUMG_ProductDetailMenu_C, UMG_DetailsImagineBattleZoomIn) == 0x0002A8, "Member 'UUMG_ProductDetailMenu_C::UMG_DetailsImagineBattleZoomIn' has a wrong offset!");
static_assert(offsetof(UUMG_ProductDetailMenu_C, UMG_ProductDetail) == 0x0002B0, "Member 'UUMG_ProductDetailMenu_C::UMG_ProductDetail' has a wrong offset!");
static_assert(offsetof(UUMG_ProductDetailMenu_C, UMG_ProductDetailBackground) == 0x0002B8, "Member 'UUMG_ProductDetailMenu_C::UMG_ProductDetailBackground' has a wrong offset!");
static_assert(offsetof(UUMG_ProductDetailMenu_C, UMG_ProductItem) == 0x0002C0, "Member 'UUMG_ProductDetailMenu_C::UMG_ProductItem' has a wrong offset!");
static_assert(offsetof(UUMG_ProductDetailMenu_C, OnClose) == 0x0002C8, "Member 'UUMG_ProductDetailMenu_C::OnClose' has a wrong offset!");
static_assert(offsetof(UUMG_ProductDetailMenu_C, ProductData) == 0x0002D8, "Member 'UUMG_ProductDetailMenu_C::ProductData' has a wrong offset!");
static_assert(offsetof(UUMG_ProductDetailMenu_C, UIBlocker_0) == 0x0002E8, "Member 'UUMG_ProductDetailMenu_C::UIBlocker_0' has a wrong offset!");

}

