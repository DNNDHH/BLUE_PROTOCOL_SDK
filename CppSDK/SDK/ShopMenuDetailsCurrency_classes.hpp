#pragma once

 

// Package: ShopMenuDetailsCurrency

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_SBDetailsZoomIn_structs.hpp"
#include "WBP_ShopMenuDetailsCommon_classes.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ShopMenuDetailsCurrency.ShopMenuDetailsCurrency_C
// 0x00E8 (0x0370 - 0x0288)
class UShopMenuDetailsCurrency_C final : public UWBP_ShopMenuDetailsCommon_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BgDetails;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnAnim_ArrowS_C*                      CmnAnim_ArrowS;                                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ColorGrp1;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ColorGrp2;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           DescGrp_1;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Currency;                                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageTitleBG;                                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ShopMenuDetailsNameParts_C*        NameParts;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTextButtonCmnBtn16_C*                SBButtonItemBoxDetail;                             // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTextButtonCmnBtn16_C*                SBButtonShowProduct;                               // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Text_Detail;                                       // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Text_ShowProduct;                                  // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextDesc;                                          // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ShopMenuDetailsTags_C*             WBP_ShopMenuDetailsTags;                           // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Button;                             // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Image;                              // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         InDesignType;                                      // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_9320[0x4];                                     // 0x0324(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnEndCloseDetailAnimation;                         // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	ESBRewardItemType                             Reward_Type;                                       // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9321[0x3];                                     // 0x0339(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Item_Index;                                        // 0x033C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickZoomIn;                                     // 0x0340(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickItemBoxDetail;                              // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnCheckShowProduct;                                // 0x0360(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnEndCloseDetailAnimation__DelegateSignature(class UUserWidget* InWidget);
	void OnClickZoomIn__DelegateSignature(E_SBDetailsZoomIn Type);
	void OnClickItemBoxDetail__DelegateSignature();
	void OnCheckShowProduct__DelegateSignature(ESBRewardItemType RewardType, int32 ItemIndex);
	void ExecuteUbergraph_ShopMenuDetailsCurrency(int32 EntryPoint);
	void SetData(ESBRewardItemType RewardType, int32 ItemIndex, int32 Amount, int32 AmountMin);
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0();
	void CloseDetails();
	void ShowDetails();
	void Construct();
	void BndEvt__ShopMenuDetailsCurrency_SBButtonItemBoxDetail_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ShopMenuDetailsCurrency_SBButtonShowProduct_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void ResetDisplay();
	void BndEvt__ShopMenuDetailsCurrency_WBP_ShopMenuDetailsTags_K2Node_ComponentBoundEvent_0_OnClickZoomIn__DelegateSignature();
	class FString GetDescription(ESBRewardItemType RewardType, int32 ItemIndex, bool* bValid);
	void IsVisibieShowProductForCurrency(ESBRewardItemType RewardType, int32 ItemIndex, bool* bVisible, int32* ButtonIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShopMenuDetailsCurrency_C">();
	}
	static class UShopMenuDetailsCurrency_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShopMenuDetailsCurrency_C>();
	}
};
static_assert(alignof(UShopMenuDetailsCurrency_C) == 0x000008, "Wrong alignment on UShopMenuDetailsCurrency_C");
static_assert(sizeof(UShopMenuDetailsCurrency_C) == 0x000370, "Wrong size on UShopMenuDetailsCurrency_C");
static_assert(offsetof(UShopMenuDetailsCurrency_C, UberGraphFrame) == 0x000288, "Member 'UShopMenuDetailsCurrency_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCurrency_C, AnimOut) == 0x000290, "Member 'UShopMenuDetailsCurrency_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCurrency_C, AnimIn) == 0x000298, "Member 'UShopMenuDetailsCurrency_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCurrency_C, BgDetails) == 0x0002A0, "Member 'UShopMenuDetailsCurrency_C::BgDetails' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCurrency_C, CmnAnim_ArrowS) == 0x0002A8, "Member 'UShopMenuDetailsCurrency_C::CmnAnim_ArrowS' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCurrency_C, ColorGrp1) == 0x0002B0, "Member 'UShopMenuDetailsCurrency_C::ColorGrp1' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCurrency_C, ColorGrp2) == 0x0002B8, "Member 'UShopMenuDetailsCurrency_C::ColorGrp2' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCurrency_C, DescGrp_1) == 0x0002C0, "Member 'UShopMenuDetailsCurrency_C::DescGrp_1' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCurrency_C, Image_Currency) == 0x0002C8, "Member 'UShopMenuDetailsCurrency_C::Image_Currency' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCurrency_C, ImageTitleBG) == 0x0002D0, "Member 'UShopMenuDetailsCurrency_C::ImageTitleBG' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCurrency_C, NameParts) == 0x0002D8, "Member 'UShopMenuDetailsCurrency_C::NameParts' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCurrency_C, SBButtonItemBoxDetail) == 0x0002E0, "Member 'UShopMenuDetailsCurrency_C::SBButtonItemBoxDetail' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCurrency_C, SBButtonShowProduct) == 0x0002E8, "Member 'UShopMenuDetailsCurrency_C::SBButtonShowProduct' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCurrency_C, Text_Detail) == 0x0002F0, "Member 'UShopMenuDetailsCurrency_C::Text_Detail' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCurrency_C, Text_ShowProduct) == 0x0002F8, "Member 'UShopMenuDetailsCurrency_C::Text_ShowProduct' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCurrency_C, TextDesc) == 0x000300, "Member 'UShopMenuDetailsCurrency_C::TextDesc' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCurrency_C, WBP_ShopMenuDetailsTags) == 0x000308, "Member 'UShopMenuDetailsCurrency_C::WBP_ShopMenuDetailsTags' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCurrency_C, WidgetSwitcher_Button) == 0x000310, "Member 'UShopMenuDetailsCurrency_C::WidgetSwitcher_Button' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCurrency_C, WidgetSwitcher_Image) == 0x000318, "Member 'UShopMenuDetailsCurrency_C::WidgetSwitcher_Image' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCurrency_C, InDesignType) == 0x000320, "Member 'UShopMenuDetailsCurrency_C::InDesignType' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCurrency_C, OnEndCloseDetailAnimation) == 0x000328, "Member 'UShopMenuDetailsCurrency_C::OnEndCloseDetailAnimation' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCurrency_C, Reward_Type) == 0x000338, "Member 'UShopMenuDetailsCurrency_C::Reward_Type' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCurrency_C, Item_Index) == 0x00033C, "Member 'UShopMenuDetailsCurrency_C::Item_Index' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCurrency_C, OnClickZoomIn) == 0x000340, "Member 'UShopMenuDetailsCurrency_C::OnClickZoomIn' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCurrency_C, OnClickItemBoxDetail) == 0x000350, "Member 'UShopMenuDetailsCurrency_C::OnClickItemBoxDetail' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsCurrency_C, OnCheckShowProduct) == 0x000360, "Member 'UShopMenuDetailsCurrency_C::OnCheckShowProduct' has a wrong offset!");

}

