#pragma once

 

// Package: EventShopProductBox_Item

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EventShopProductBox_Item.EventShopProductBox_Item_C
// 0x01F0 (0x04A0 - 0x02B0)
class UEventShopProductBox_Item_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Background;                                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base_Red;                                          // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              HaveGrp;                                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonIcon_C*                          Icon_Item;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIcon_TacticalAbilityLearning_C*        Icon_TAbility;                                     // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Token;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        IconGrp;                                           // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           IconImageGrp;                                      // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line;                                              // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           PurchaseCountGrp;                                  // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBBtn1Hit;                                         // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_Minus;                                    // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_Plus;                                     // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        StockSwitch;                                       // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBDateTimeTextBlock*                   Txt_Exchange_Period;                               // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_Hold;                                          // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_HoldToken;                                     // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_ItemName;                                      // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_StockNum_01;                                   // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_StockNum_02;                                   // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_StockType;                                     // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_Token_Value;                                   // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtPurchaseCount;                                  // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               UnexchangeableCoverGrp;                            // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventShopLearningInfo_C*               UnExchangeableCoverIcon;                           // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Hold;                               // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnBtnSelected;                                     // 0x0390(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsRepeat;                                          // 0x03A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63FF[0x7];                                     // 0x03A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           TimerHandle_Pressed;                               // 0x03A8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           TimerHandle_Repeat;                                // 0x03B0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         PurchaseNum;                                       // 0x03B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     ProductItemType;                                   // 0x03BC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             ProductRewardType;                                 // 0x03BD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6400[0x2];                                     // 0x03BE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBTemporallyStorage*                   WorkInventory;                                     // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTemporallyStorage*                   WorkStorage;                                       // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnAdd;                                             // 0x03D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnSub;                                             // 0x03E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSBEventShopProduct                    ProductData;                                       // 0x03F0(0x0070)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         ProductItemId;                                     // 0x0460(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ExchangeAmountLimit;                               // 0x0464(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         StorageRemainNum;                                  // 0x0468(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6401[0x4];                                     // 0x046C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnAddRemake;                                       // 0x0470(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                         DiscountRate;                                      // 0x0480(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDiscount;                                        // 0x0484(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6402[0x3];                                     // 0x0485(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSubRemake;                                       // 0x0488(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsShowHaveText;                                    // 0x0498(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnBtnSelected__DelegateSignature(class UEventShopProductBox_Item_C* Item, bool bOnNumberInput);
	void OnAdd__DelegateSignature(int32 Num);
	void OnSub__DelegateSignature(int32 Num);
	void OnAddRemake__DelegateSignature(class UEventShopProductBox_Item_C* Item);
	void OnSubRemake__DelegateSignature(class UEventShopProductBox_Item_C* Item);
	void ExecuteUbergraph_EventShopProductBox_Item(int32 EntryPoint);
	void SetTrying(bool bTrying);
	void LoadTexture(int32 CurrencyType, int32 TokenID);
	void Construct();
	void SetSelectNum(int32 Num);
	void UpdateButton();
	void SetProductData(const struct FSBEventShopProduct& Param_ProductData, float Param_DiscountRate, bool Param_IsDiscount, class USBTemporallyStorage* Item, class USBTemporallyStorage* Equip, class USBTemporallyStorage* Storage, class USBTemporallyStorage* Ornament);
	void StartRepeatMinus();
	void NumberMinus();
	void BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void ClearHandle();
	void StartRepeatPlus();
	void NumberPlus();
	void BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__SBBtn1Hit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SetExchangePeriod(const struct FDateTime& End);
	void SetProductIcon();
	void GetItemId(int32 ItemSetId);
	void CheckItemType(int32 ItemType);
	void SetStockNum(int32 Stock, int32 Limit);
	void SetResetType(int32 Type);
	void OnLoaded_8BF2257B4B76563CA1AA46BFA48D763A(class UObject* Loaded);
	void OnLoaded_4B7D8DF8408EDDC34FB910BF7F350F56(class UObject* Loaded);
	void SetBtnSelected(bool Selected);
	void SetBtnSelected_Remake(bool Selected);
	void SetPurchaseNum(int32 Purchase, bool Force);
	void GetAmountNum(bool Have, int32* Remain);
	void GetStorageRemainNum(int32* Remain);
	void SetWorkSpace(class USBTemporallyStorage* Item, class USBTemporallyStorage* Equip, class USBTemporallyStorage* Storage, class USBTemporallyStorage* Ornament);
	void Set_Token_Info(int32 CurrencyType, int32 TokenID, float Param_DiscountRate);
	void GetTAbiiltyClass(ESBClassType* ClassType);
	void SetIconNewMark();
	void IsReadedNewMark();
	void SetActiveIcon(bool IsItem);
	void CheckExchangeLimitNum(int32* LimitNum);
	void SwitchHoldType(bool* IsToken);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EventShopProductBox_Item_C">();
	}
	static class UEventShopProductBox_Item_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEventShopProductBox_Item_C>();
	}
};
static_assert(alignof(UEventShopProductBox_Item_C) == 0x000008, "Wrong alignment on UEventShopProductBox_Item_C");
static_assert(sizeof(UEventShopProductBox_Item_C) == 0x0004A0, "Wrong size on UEventShopProductBox_Item_C");
static_assert(offsetof(UEventShopProductBox_Item_C, UberGraphFrame) == 0x0002B0, "Member 'UEventShopProductBox_Item_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEventShopProductBox_Item_C, Background) == 0x0002B8, "Member 'UEventShopProductBox_Item_C::Background' has a wrong offset!");
static_assert(offsetof(UEventShopProductBox_Item_C, Base_Red) == 0x0002C0, "Member 'UEventShopProductBox_Item_C::Base_Red' has a wrong offset!");
static_assert(offsetof(UEventShopProductBox_Item_C, HaveGrp) == 0x0002C8, "Member 'UEventShopProductBox_Item_C::HaveGrp' has a wrong offset!");
static_assert(offsetof(UEventShopProductBox_Item_C, Icon) == 0x0002D0, "Member 'UEventShopProductBox_Item_C::Icon' has a wrong offset!");
static_assert(offsetof(UEventShopProductBox_Item_C, Icon_Item) == 0x0002D8, "Member 'UEventShopProductBox_Item_C::Icon_Item' has a wrong offset!");
static_assert(offsetof(UEventShopProductBox_Item_C, Icon_TAbility) == 0x0002E0, "Member 'UEventShopProductBox_Item_C::Icon_TAbility' has a wrong offset!");
static_assert(offsetof(UEventShopProductBox_Item_C, Icon_Token) == 0x0002E8, "Member 'UEventShopProductBox_Item_C::Icon_Token' has a wrong offset!");
static_assert(offsetof(UEventShopProductBox_Item_C, IconGrp) == 0x0002F0, "Member 'UEventShopProductBox_Item_C::IconGrp' has a wrong offset!");
static_assert(offsetof(UEventShopProductBox_Item_C, IconImageGrp) == 0x0002F8, "Member 'UEventShopProductBox_Item_C::IconImageGrp' has a wrong offset!");
static_assert(offsetof(UEventShopProductBox_Item_C, Line) == 0x000300, "Member 'UEventShopProductBox_Item_C::Line' has a wrong offset!");
static_assert(offsetof(UEventShopProductBox_Item_C, PurchaseCountGrp) == 0x000308, "Member 'UEventShopProductBox_Item_C::PurchaseCountGrp' has a wrong offset!");
static_assert(offsetof(UEventShopProductBox_Item_C, SBBtn1Hit) == 0x000310, "Member 'UEventShopProductBox_Item_C::SBBtn1Hit' has a wrong offset!");
static_assert(offsetof(UEventShopProductBox_Item_C, SBButton_Minus) == 0x000318, "Member 'UEventShopProductBox_Item_C::SBButton_Minus' has a wrong offset!");
static_assert(offsetof(UEventShopProductBox_Item_C, SBButton_Plus) == 0x000320, "Member 'UEventShopProductBox_Item_C::SBButton_Plus' has a wrong offset!");
static_assert(offsetof(UEventShopProductBox_Item_C, StockSwitch) == 0x000328, "Member 'UEventShopProductBox_Item_C::StockSwitch' has a wrong offset!");
static_assert(offsetof(UEventShopProductBox_Item_C, Txt_Exchange_Period) == 0x000330, "Member 'UEventShopProductBox_Item_C::Txt_Exchange_Period' has a wrong offset!");
static_assert(offsetof(UEventShopProductBox_Item_C, Txt_Hold) == 0x000338, "Member 'UEventShopProductBox_Item_C::Txt_Hold' has a wrong offset!");
static_assert(offsetof(UEventShopProductBox_Item_C, Txt_HoldToken) == 0x000340, "Member 'UEventShopProductBox_Item_C::Txt_HoldToken' has a wrong offset!");
static_assert(offsetof(UEventShopProductBox_Item_C, Txt_ItemName) == 0x000348, "Member 'UEventShopProductBox_Item_C::Txt_ItemName' has a wrong offset!");
static_assert(offsetof(UEventShopProductBox_Item_C, Txt_StockNum_01) == 0x000350, "Member 'UEventShopProductBox_Item_C::Txt_StockNum_01' has a wrong offset!");
static_assert(offsetof(UEventShopProductBox_Item_C, Txt_StockNum_02) == 0x000358, "Member 'UEventShopProductBox_Item_C::Txt_StockNum_02' has a wrong offset!");
static_assert(offsetof(UEventShopProductBox_Item_C, Txt_StockType) == 0x000360, "Member 'UEventShopProductBox_Item_C::Txt_StockType' has a wrong offset!");
static_assert(offsetof(UEventShopProductBox_Item_C, Txt_Token_Value) == 0x000368, "Member 'UEventShopProductBox_Item_C::Txt_Token_Value' has a wrong offset!");
static_assert(offsetof(UEventShopProductBox_Item_C, TxtPurchaseCount) == 0x000370, "Member 'UEventShopProductBox_Item_C::TxtPurchaseCount' has a wrong offset!");
static_assert(offsetof(UEventShopProductBox_Item_C, UnexchangeableCoverGrp) == 0x000378, "Member 'UEventShopProductBox_Item_C::UnexchangeableCoverGrp' has a wrong offset!");
static_assert(offsetof(UEventShopProductBox_Item_C, UnExchangeableCoverIcon) == 0x000380, "Member 'UEventShopProductBox_Item_C::UnExchangeableCoverIcon' has a wrong offset!");
static_assert(offsetof(UEventShopProductBox_Item_C, WidgetSwitcher_Hold) == 0x000388, "Member 'UEventShopProductBox_Item_C::WidgetSwitcher_Hold' has a wrong offset!");
static_assert(offsetof(UEventShopProductBox_Item_C, OnBtnSelected) == 0x000390, "Member 'UEventShopProductBox_Item_C::OnBtnSelected' has a wrong offset!");
static_assert(offsetof(UEventShopProductBox_Item_C, IsRepeat) == 0x0003A0, "Member 'UEventShopProductBox_Item_C::IsRepeat' has a wrong offset!");
static_assert(offsetof(UEventShopProductBox_Item_C, TimerHandle_Pressed) == 0x0003A8, "Member 'UEventShopProductBox_Item_C::TimerHandle_Pressed' has a wrong offset!");
static_assert(offsetof(UEventShopProductBox_Item_C, TimerHandle_Repeat) == 0x0003B0, "Member 'UEventShopProductBox_Item_C::TimerHandle_Repeat' has a wrong offset!");
static_assert(offsetof(UEventShopProductBox_Item_C, PurchaseNum) == 0x0003B8, "Member 'UEventShopProductBox_Item_C::PurchaseNum' has a wrong offset!");
static_assert(offsetof(UEventShopProductBox_Item_C, ProductItemType) == 0x0003BC, "Member 'UEventShopProductBox_Item_C::ProductItemType' has a wrong offset!");
static_assert(offsetof(UEventShopProductBox_Item_C, ProductRewardType) == 0x0003BD, "Member 'UEventShopProductBox_Item_C::ProductRewardType' has a wrong offset!");
static_assert(offsetof(UEventShopProductBox_Item_C, WorkInventory) == 0x0003C0, "Member 'UEventShopProductBox_Item_C::WorkInventory' has a wrong offset!");
static_assert(offsetof(UEventShopProductBox_Item_C, WorkStorage) == 0x0003C8, "Member 'UEventShopProductBox_Item_C::WorkStorage' has a wrong offset!");
static_assert(offsetof(UEventShopProductBox_Item_C, OnAdd) == 0x0003D0, "Member 'UEventShopProductBox_Item_C::OnAdd' has a wrong offset!");
static_assert(offsetof(UEventShopProductBox_Item_C, OnSub) == 0x0003E0, "Member 'UEventShopProductBox_Item_C::OnSub' has a wrong offset!");
static_assert(offsetof(UEventShopProductBox_Item_C, ProductData) == 0x0003F0, "Member 'UEventShopProductBox_Item_C::ProductData' has a wrong offset!");
static_assert(offsetof(UEventShopProductBox_Item_C, ProductItemId) == 0x000460, "Member 'UEventShopProductBox_Item_C::ProductItemId' has a wrong offset!");
static_assert(offsetof(UEventShopProductBox_Item_C, ExchangeAmountLimit) == 0x000464, "Member 'UEventShopProductBox_Item_C::ExchangeAmountLimit' has a wrong offset!");
static_assert(offsetof(UEventShopProductBox_Item_C, StorageRemainNum) == 0x000468, "Member 'UEventShopProductBox_Item_C::StorageRemainNum' has a wrong offset!");
static_assert(offsetof(UEventShopProductBox_Item_C, OnAddRemake) == 0x000470, "Member 'UEventShopProductBox_Item_C::OnAddRemake' has a wrong offset!");
static_assert(offsetof(UEventShopProductBox_Item_C, DiscountRate) == 0x000480, "Member 'UEventShopProductBox_Item_C::DiscountRate' has a wrong offset!");
static_assert(offsetof(UEventShopProductBox_Item_C, IsDiscount) == 0x000484, "Member 'UEventShopProductBox_Item_C::IsDiscount' has a wrong offset!");
static_assert(offsetof(UEventShopProductBox_Item_C, OnSubRemake) == 0x000488, "Member 'UEventShopProductBox_Item_C::OnSubRemake' has a wrong offset!");
static_assert(offsetof(UEventShopProductBox_Item_C, IsShowHaveText) == 0x000498, "Member 'UEventShopProductBox_Item_C::IsShowHaveText' has a wrong offset!");

}

