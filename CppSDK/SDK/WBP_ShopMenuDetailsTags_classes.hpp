#pragma once

 

// Package: WBP_ShopMenuDetailsTags

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ShopMenuDetailsTags.WBP_ShopMenuDetailsTags_C
// 0x0098 (0x0348 - 0x02B0)
class UWBP_ShopMenuDetailsTags_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel_ExpiryDateTime;                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnOperationRotate_C*                  CmnOperationRotate;                                // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryTag_C*                        InventoryTagBPP;                                   // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryTag_C*                        InventoryTagSale;                                  // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryTag_C*                        InventoryTagStackB;                                // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               ModelRotationIconGrp;                              // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_ViewIllustImagine;                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_ZoomIn;                                   // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ShopMenuDetailsExpiryDateTime_C*   WBP_ShopMenuDetailsExpiryDateTime;                 // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bShowRotateIcon;                                   // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AF5[0x7];                                     // 0x0301(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClickZoomIn;                                     // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bShowZoomInButton;                                 // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AF6[0x7];                                     // 0x0319(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClickShowProduct;                                // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickReturnDisplay;                              // 0x0330(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bShowViewIllustImagineButton;                      // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7AF7[0x3];                                     // 0x0341(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemIndex;                                         // 0x0344(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClickZoomIn__DelegateSignature();
	void OnClickShowProduct__DelegateSignature();
	void OnClickReturnDisplay__DelegateSignature();
	void ExecuteUbergraph_WBP_ShopMenuDetailsTags(int32 EntryPoint);
	void SetDefault();
	void SetStampDataByCategory(const struct FSBStampCategoryMasterData& StampCategoryMaster);
	void BndEvt__WBP_ShopMenuDetailsTags_WBP_ShopMenuDetailsExpiryDateTime_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature(ESlateVisibility InVisibility);
	void SetDateTimeTextColor(const struct FLinearColor& LimitTimeColor, const struct FLinearColor& DescColor);
	void SetStampData(const struct FSBStampMasterData& StampMasterData);
	void SetEmoteData(const struct FSBEmoteMasterData& EmoteMaster);
	void SetAchievementData(const struct FAchievementMasterData& AchievementMaster);
	void SetItemData(const struct FItemMasterData& ItemMaster);
	void ShowViewIllustImagineButton(bool bShow);
	void ShowRotateIcon(bool bShow);
	void ShowZoomInButton(bool bShow);
	void SetCurrencyData(ESBRewardItemType RewardType, int32 Param_ItemIndex);
	void SetMountImagineData(const struct FSBMasterMountImagine& MasterMountImagine);
	void SetImagineData(const struct FSBMasterImagine& MasterImagine);
	void PreConstruct(bool IsDesignTime);
	void SetWeaponData(const struct FSBWeaponMasterData& WeaponMaster, bool bSell, const class FString& InUniqueId);
	void SetCostumeData(const struct FSBMasterCostume& MasterCostume);
	void BndEvt__WBP_ShopMenuDetailsTags_SBButton_IllustImagineView_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_ShopMenuDetailsTags_SBButton_ZoomIn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void GetEventTermDataForCurrency(ESBRewardItemType RewardType, int32 Param_ItemIndex, class FString* EventTermId, int32* DurationMinutes);
	bool IsVisibieShowProductForCurrency(ESBRewardItemType RewardType, int32 Param_ItemIndex);
	bool IsBppIrredeemable();
	void SetBppExchange(bool bCanBppExchange);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ShopMenuDetailsTags_C">();
	}
	static class UWBP_ShopMenuDetailsTags_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ShopMenuDetailsTags_C>();
	}
};
static_assert(alignof(UWBP_ShopMenuDetailsTags_C) == 0x000008, "Wrong alignment on UWBP_ShopMenuDetailsTags_C");
static_assert(sizeof(UWBP_ShopMenuDetailsTags_C) == 0x000348, "Wrong size on UWBP_ShopMenuDetailsTags_C");
static_assert(offsetof(UWBP_ShopMenuDetailsTags_C, UberGraphFrame) == 0x0002B0, "Member 'UWBP_ShopMenuDetailsTags_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ShopMenuDetailsTags_C, CanvasPanel_ExpiryDateTime) == 0x0002B8, "Member 'UWBP_ShopMenuDetailsTags_C::CanvasPanel_ExpiryDateTime' has a wrong offset!");
static_assert(offsetof(UWBP_ShopMenuDetailsTags_C, CmnOperationRotate) == 0x0002C0, "Member 'UWBP_ShopMenuDetailsTags_C::CmnOperationRotate' has a wrong offset!");
static_assert(offsetof(UWBP_ShopMenuDetailsTags_C, InventoryTagBPP) == 0x0002C8, "Member 'UWBP_ShopMenuDetailsTags_C::InventoryTagBPP' has a wrong offset!");
static_assert(offsetof(UWBP_ShopMenuDetailsTags_C, InventoryTagSale) == 0x0002D0, "Member 'UWBP_ShopMenuDetailsTags_C::InventoryTagSale' has a wrong offset!");
static_assert(offsetof(UWBP_ShopMenuDetailsTags_C, InventoryTagStackB) == 0x0002D8, "Member 'UWBP_ShopMenuDetailsTags_C::InventoryTagStackB' has a wrong offset!");
static_assert(offsetof(UWBP_ShopMenuDetailsTags_C, ModelRotationIconGrp) == 0x0002E0, "Member 'UWBP_ShopMenuDetailsTags_C::ModelRotationIconGrp' has a wrong offset!");
static_assert(offsetof(UWBP_ShopMenuDetailsTags_C, SBButton_ViewIllustImagine) == 0x0002E8, "Member 'UWBP_ShopMenuDetailsTags_C::SBButton_ViewIllustImagine' has a wrong offset!");
static_assert(offsetof(UWBP_ShopMenuDetailsTags_C, SBButton_ZoomIn) == 0x0002F0, "Member 'UWBP_ShopMenuDetailsTags_C::SBButton_ZoomIn' has a wrong offset!");
static_assert(offsetof(UWBP_ShopMenuDetailsTags_C, WBP_ShopMenuDetailsExpiryDateTime) == 0x0002F8, "Member 'UWBP_ShopMenuDetailsTags_C::WBP_ShopMenuDetailsExpiryDateTime' has a wrong offset!");
static_assert(offsetof(UWBP_ShopMenuDetailsTags_C, bShowRotateIcon) == 0x000300, "Member 'UWBP_ShopMenuDetailsTags_C::bShowRotateIcon' has a wrong offset!");
static_assert(offsetof(UWBP_ShopMenuDetailsTags_C, OnClickZoomIn) == 0x000308, "Member 'UWBP_ShopMenuDetailsTags_C::OnClickZoomIn' has a wrong offset!");
static_assert(offsetof(UWBP_ShopMenuDetailsTags_C, bShowZoomInButton) == 0x000318, "Member 'UWBP_ShopMenuDetailsTags_C::bShowZoomInButton' has a wrong offset!");
static_assert(offsetof(UWBP_ShopMenuDetailsTags_C, OnClickShowProduct) == 0x000320, "Member 'UWBP_ShopMenuDetailsTags_C::OnClickShowProduct' has a wrong offset!");
static_assert(offsetof(UWBP_ShopMenuDetailsTags_C, OnClickReturnDisplay) == 0x000330, "Member 'UWBP_ShopMenuDetailsTags_C::OnClickReturnDisplay' has a wrong offset!");
static_assert(offsetof(UWBP_ShopMenuDetailsTags_C, bShowViewIllustImagineButton) == 0x000340, "Member 'UWBP_ShopMenuDetailsTags_C::bShowViewIllustImagineButton' has a wrong offset!");
static_assert(offsetof(UWBP_ShopMenuDetailsTags_C, ItemIndex) == 0x000344, "Member 'UWBP_ShopMenuDetailsTags_C::ItemIndex' has a wrong offset!");

}

