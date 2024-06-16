#pragma once

 

// Package: FlatShop_ProductItem_DescItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_SBProductDetailType_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C
// 0x00A8 (0x0320 - 0x0278)
class UFlatShop_ProductItem_DescItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn_Item;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_Item_1;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Rarity;                                // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HB_RewardInfoDetail;                               // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonIcon_C*                          Ico_Item;                                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label_Rank;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Label_Rate;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label_Title;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label_Title_1;                                     // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label_Type;                                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                Spacer_V;                                          // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchType;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Rarity;                             // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnBtnClicked;                                      // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bLayoutCheck;                                      // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	E_SBProductDetailType                         DetailType;                                        // 0x02F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bRate;                                             // 0x02FA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DE9[0x5];                                     // 0x02FB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SBProductItemData_C*                ProductItemData;                                   // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnBtnClicked2;                                     // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bOnRewardInfoDetail;                               // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void OnBtnClicked__DelegateSignature(bool IsSetItem);
	void OnBtnClicked2__DelegateSignature(class UBP_SBProductItemData_C* Data);
	void ExecuteUbergraph_FlatShop_ProductItem_DescItem(int32 EntryPoint);
	void Construct();
	void OnChangeTrying(class UBP_SBProductItemData_C* Sender, bool bTrying);
	void SetTrying(bool bTrying);
	void LayoutCheck(E_SBProductDetailType Param_DetailType);
	void UpdateLayout();
	void PreConstruct(bool IsDesignTime);
	void OnChangeVisibility(ESlateVisibility Param_Visibility);
	void BndEvt__Btn_Item_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SetProductInfo(int32 ItemId, EItemType ItemType);
	void SetProductInfoReward(ESBRewardItemType RewardItemType, int32 ItemId, int32 Amount);
	void SetProductItemData(class UBP_SBProductItemData_C* Data);
	void SetSwitchType(int32 SwitchId);
	void SetRate(float Rate);
	void SetDetailType(E_SBProductDetailType InDetailType);
	void ClearProductItemData();
	void SetSeasonPassRewardExtraInfo();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FlatShop_ProductItem_DescItem_C">();
	}
	static class UFlatShop_ProductItem_DescItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFlatShop_ProductItem_DescItem_C>();
	}
};
static_assert(alignof(UFlatShop_ProductItem_DescItem_C) == 0x000008, "Wrong alignment on UFlatShop_ProductItem_DescItem_C");
static_assert(sizeof(UFlatShop_ProductItem_DescItem_C) == 0x000320, "Wrong size on UFlatShop_ProductItem_DescItem_C");
static_assert(offsetof(UFlatShop_ProductItem_DescItem_C, UberGraphFrame) == 0x000278, "Member 'UFlatShop_ProductItem_DescItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFlatShop_ProductItem_DescItem_C, Btn_Item) == 0x000280, "Member 'UFlatShop_ProductItem_DescItem_C::Btn_Item' has a wrong offset!");
static_assert(offsetof(UFlatShop_ProductItem_DescItem_C, Btn_Item_1) == 0x000288, "Member 'UFlatShop_ProductItem_DescItem_C::Btn_Item_1' has a wrong offset!");
static_assert(offsetof(UFlatShop_ProductItem_DescItem_C, CanvasPanel_Rarity) == 0x000290, "Member 'UFlatShop_ProductItem_DescItem_C::CanvasPanel_Rarity' has a wrong offset!");
static_assert(offsetof(UFlatShop_ProductItem_DescItem_C, HB_RewardInfoDetail) == 0x000298, "Member 'UFlatShop_ProductItem_DescItem_C::HB_RewardInfoDetail' has a wrong offset!");
static_assert(offsetof(UFlatShop_ProductItem_DescItem_C, Ico_Item) == 0x0002A0, "Member 'UFlatShop_ProductItem_DescItem_C::Ico_Item' has a wrong offset!");
static_assert(offsetof(UFlatShop_ProductItem_DescItem_C, Label_Rank) == 0x0002A8, "Member 'UFlatShop_ProductItem_DescItem_C::Label_Rank' has a wrong offset!");
static_assert(offsetof(UFlatShop_ProductItem_DescItem_C, Label_Rate) == 0x0002B0, "Member 'UFlatShop_ProductItem_DescItem_C::Label_Rate' has a wrong offset!");
static_assert(offsetof(UFlatShop_ProductItem_DescItem_C, Label_Title) == 0x0002B8, "Member 'UFlatShop_ProductItem_DescItem_C::Label_Title' has a wrong offset!");
static_assert(offsetof(UFlatShop_ProductItem_DescItem_C, Label_Title_1) == 0x0002C0, "Member 'UFlatShop_ProductItem_DescItem_C::Label_Title_1' has a wrong offset!");
static_assert(offsetof(UFlatShop_ProductItem_DescItem_C, Label_Type) == 0x0002C8, "Member 'UFlatShop_ProductItem_DescItem_C::Label_Type' has a wrong offset!");
static_assert(offsetof(UFlatShop_ProductItem_DescItem_C, Spacer_V) == 0x0002D0, "Member 'UFlatShop_ProductItem_DescItem_C::Spacer_V' has a wrong offset!");
static_assert(offsetof(UFlatShop_ProductItem_DescItem_C, SwitchType) == 0x0002D8, "Member 'UFlatShop_ProductItem_DescItem_C::SwitchType' has a wrong offset!");
static_assert(offsetof(UFlatShop_ProductItem_DescItem_C, WidgetSwitcher_Rarity) == 0x0002E0, "Member 'UFlatShop_ProductItem_DescItem_C::WidgetSwitcher_Rarity' has a wrong offset!");
static_assert(offsetof(UFlatShop_ProductItem_DescItem_C, OnBtnClicked) == 0x0002E8, "Member 'UFlatShop_ProductItem_DescItem_C::OnBtnClicked' has a wrong offset!");
static_assert(offsetof(UFlatShop_ProductItem_DescItem_C, bLayoutCheck) == 0x0002F8, "Member 'UFlatShop_ProductItem_DescItem_C::bLayoutCheck' has a wrong offset!");
static_assert(offsetof(UFlatShop_ProductItem_DescItem_C, DetailType) == 0x0002F9, "Member 'UFlatShop_ProductItem_DescItem_C::DetailType' has a wrong offset!");
static_assert(offsetof(UFlatShop_ProductItem_DescItem_C, bRate) == 0x0002FA, "Member 'UFlatShop_ProductItem_DescItem_C::bRate' has a wrong offset!");
static_assert(offsetof(UFlatShop_ProductItem_DescItem_C, ProductItemData) == 0x000300, "Member 'UFlatShop_ProductItem_DescItem_C::ProductItemData' has a wrong offset!");
static_assert(offsetof(UFlatShop_ProductItem_DescItem_C, OnBtnClicked2) == 0x000308, "Member 'UFlatShop_ProductItem_DescItem_C::OnBtnClicked2' has a wrong offset!");
static_assert(offsetof(UFlatShop_ProductItem_DescItem_C, bOnRewardInfoDetail) == 0x000318, "Member 'UFlatShop_ProductItem_DescItem_C::bOnRewardInfoDetail' has a wrong offset!");

}

