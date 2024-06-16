#pragma once

 

// Package: BP_RsDialog_Purchase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "RsDialogPaymentType_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "RsDialogButtonType_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "RsDialogProductTitleType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_RsDialog_Purchase.BP_RsDialog_Purchase_C
// 0x00B8 (0x0330 - 0x0278)
class UBP_RsDialog_Purchase_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_RsDialog_ProductAmount_C*           BP_ProductCoupon;                                  // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_RsDialog_ProductAmount_C*           BP_ProductNumber;                                  // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_RsDialog_ProductAmount_C*           BP_ProductPrice;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_RsDialog_ProductTitle_C*            BP_ProductTitle;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn27_C*                            Btn_01;                                            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn27_C*                            Btn_02;                                            // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Line01;                                            // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Line02;                                            // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       Txt_01;                                            // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       Txt_02;                                            // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       Txt_03;                                            // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       Txt_DiscountSeasonPass;                            // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ESBRmShopMenuType                             CurrentShopType;                                   // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5535[0x7];                                     // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnButtonClicked;                                   // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class FText>                           ExecutionConfirmTextList;                          // 0x0300(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 ExecutionConfirmText;                              // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         DiscountRate;                                      // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DiscountAmount;                                    // 0x0324(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_Lack;                                           // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          UpdateLack;                                        // 0x0329(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnButtonClicked__DelegateSignature(ERsDialogButtonType Type);
	void ExecuteUbergraph_BP_RsDialog_Purchase(int32 EntryPoint);
	void SetState_Lack(bool IsLack);
	void SetDiscountRate_SeasonPass(int32 Rate);
	void SetDiscountRate(int32 Rate);
	void SetDialogInfo(ERsDialogProductTitleType ProductTilteType, int32 ItemSetId, const class FText& ProductName, int32 RankFrom, int32 RankTo, bool ShowPurchaseNum, int32 PurchaseNum, ERsDialogPaymentType PaymentType, int32 PurchasePrice, bool bIsLack, bool PaidOnly);
	void BndEvt__Btn_02_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
	void BndEvt__Btn_01_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
	void SetTitle();
	void SetShopType(ESBRmShopMenuType ShopType);
	void Set_Caution_Text();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RsDialog_Purchase_C">();
	}
	static class UBP_RsDialog_Purchase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_RsDialog_Purchase_C>();
	}
};
static_assert(alignof(UBP_RsDialog_Purchase_C) == 0x000008, "Wrong alignment on UBP_RsDialog_Purchase_C");
static_assert(sizeof(UBP_RsDialog_Purchase_C) == 0x000330, "Wrong size on UBP_RsDialog_Purchase_C");
static_assert(offsetof(UBP_RsDialog_Purchase_C, UberGraphFrame) == 0x000278, "Member 'UBP_RsDialog_Purchase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Purchase_C, BP_ProductCoupon) == 0x000280, "Member 'UBP_RsDialog_Purchase_C::BP_ProductCoupon' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Purchase_C, BP_ProductNumber) == 0x000288, "Member 'UBP_RsDialog_Purchase_C::BP_ProductNumber' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Purchase_C, BP_ProductPrice) == 0x000290, "Member 'UBP_RsDialog_Purchase_C::BP_ProductPrice' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Purchase_C, BP_ProductTitle) == 0x000298, "Member 'UBP_RsDialog_Purchase_C::BP_ProductTitle' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Purchase_C, Btn_01) == 0x0002A0, "Member 'UBP_RsDialog_Purchase_C::Btn_01' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Purchase_C, Btn_02) == 0x0002A8, "Member 'UBP_RsDialog_Purchase_C::Btn_02' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Purchase_C, Line01) == 0x0002B0, "Member 'UBP_RsDialog_Purchase_C::Line01' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Purchase_C, Line02) == 0x0002B8, "Member 'UBP_RsDialog_Purchase_C::Line02' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Purchase_C, Txt_01) == 0x0002C0, "Member 'UBP_RsDialog_Purchase_C::Txt_01' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Purchase_C, Txt_02) == 0x0002C8, "Member 'UBP_RsDialog_Purchase_C::Txt_02' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Purchase_C, Txt_03) == 0x0002D0, "Member 'UBP_RsDialog_Purchase_C::Txt_03' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Purchase_C, Txt_DiscountSeasonPass) == 0x0002D8, "Member 'UBP_RsDialog_Purchase_C::Txt_DiscountSeasonPass' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Purchase_C, UIBlocker) == 0x0002E0, "Member 'UBP_RsDialog_Purchase_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Purchase_C, CurrentShopType) == 0x0002E8, "Member 'UBP_RsDialog_Purchase_C::CurrentShopType' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Purchase_C, OnButtonClicked) == 0x0002F0, "Member 'UBP_RsDialog_Purchase_C::OnButtonClicked' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Purchase_C, ExecutionConfirmTextList) == 0x000300, "Member 'UBP_RsDialog_Purchase_C::ExecutionConfirmTextList' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Purchase_C, ExecutionConfirmText) == 0x000310, "Member 'UBP_RsDialog_Purchase_C::ExecutionConfirmText' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Purchase_C, DiscountRate) == 0x000320, "Member 'UBP_RsDialog_Purchase_C::DiscountRate' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Purchase_C, DiscountAmount) == 0x000324, "Member 'UBP_RsDialog_Purchase_C::DiscountAmount' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Purchase_C, Is_Lack) == 0x000328, "Member 'UBP_RsDialog_Purchase_C::Is_Lack' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Purchase_C, UpdateLack) == 0x000329, "Member 'UBP_RsDialog_Purchase_C::UpdateLack' has a wrong offset!");

}

