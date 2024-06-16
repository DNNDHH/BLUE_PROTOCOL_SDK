#pragma once

 

// Package: ShopMenuDetailsSwitcher

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_ItemDetailTypes_structs.hpp"
#include "E_SBDetailsZoomIn_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C
// 0x00E8 (0x0398 - 0x02B0)
class UShopMenuDetailsSwitcher_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                               ItemDetailsGrp;                                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bIsGrandchild;                                     // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bDesignCheck;                                      // 0x02C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9362[0x2];                                     // 0x02C2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   LayoutType;                                        // 0x02C4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DesignType;                                        // 0x02CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_ItemDetailTypes                             DetailType;                                        // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9363[0x7];                                     // 0x02D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UUserWidget*>                    DetailWidgets;                                     // 0x02D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class AActor*>                         CaptureStudios;                                    // 0x02E8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                         CurrHoveredProductItemId;                          // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9364[0x4];                                     // 0x02FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnEndCloseDetailAnimation;                         // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	EItemType                                     ItemType;                                          // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             RewardType;                                        // 0x0311(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHasRewardType;                                    // 0x0312(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9365[0x5];                                     // 0x0313(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 UniqueId;                                          // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         ItemIndex;                                         // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9366[0x4];                                     // 0x032C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnShow;                                            // 0x0330(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         Amount;                                            // 0x0340(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AmountMin;                                         // 0x0344(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bShowProduct;                                      // 0x0348(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9367[0x7];                                     // 0x0349(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           WeaponLoadTimerHandle;                             // 0x0350(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsItemDetailShowed;                               // 0x0358(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EProtectorCategory                            SelectedProtectorCategory;                         // 0x0359(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEquipableGender                              EquipableGender;                                   // 0x035A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHasExternalDirectionalLightRotation;              // 0x035B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               ExternalDirectionalLightRotation;                  // 0x035C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	FMulticastInlineDelegateProperty_             OnClickZoomIn;                                     // 0x0368(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickItemBoxDetail;                              // 0x0378(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	EItemType                                     OriginalItemType;                                  // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             OriginalRewardType;                                // 0x0389(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHasOriginalRewardType;                            // 0x038A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9368[0x1];                                     // 0x038B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         OriginalItemIndex;                                 // 0x038C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OriginalAmount;                                    // 0x0390(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OriginalAmountMin;                                 // 0x0394(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnEndCloseDetailAnimation__DelegateSignature();
	void OnShow__DelegateSignature(bool bShow);
	void OnClickZoomIn__DelegateSignature(E_SBDetailsZoomIn Type);
	void OnClickItemBoxDetail__DelegateSignature();
	void ExecuteUbergraph_ShopMenuDetailsSwitcher(int32 EntryPoint);
	void InitInternal();
	void UpdateDesignAndData(class FName Param_LayoutType);
	void Init(class FName Param_LayoutType);
	void UpdateDesign();
	void ApplyExternalDirectionalLightRotation();
	void SetExternalDirectionalLightRotation(const struct FRotator& Rotation);
	void PreConstruct(bool IsDesignTime);
	void Destruct();
	void Construct();
	void OnClickZoomInEvent(E_SBDetailsZoomIn Type);
	void OnClickedItemBoxDetail();
	void CloseItemDetail(bool bAnimation);
	void OnSelectCostumeType_Event(bool IsMaleCostumeSelected);
	void DestroyItemDetails();
	void OnEndCloseDetailAnimation_Event(class UUserWidget* InWidget);
	void CreateItemDetails();
	void OnLoadWeaponAsset();
	void OnShowCostumeModelCaptureImage();
	void SpawnSceneCapture2DStudio();
	void InitItemDetails(const class FString& InCurrMapName);
	void ShowItemDetails(int32 InItemIndex, EItemType InItemType, int32 Param_Amount, int32 Param_AmountMin, const class FString& Param_UniqueId, bool Param_bShowProduct);
	void CloseItemDetailInternal(E_ItemDetailTypes Param_DetailType);
	void ShowItemDetails_Internal();
	void ShowItemDetailsFromMasterReward(const struct FSBMasterReward& MasterReward);
	void ShowItemDetailsFromMasterRewardId(class FName MasterRewardId);
	void ShowItemDetailsFromRewardData(ESBRewardItemType Param_RewardType, int32 Param_ItemIndex, int32 Param_Amount, int32 Param_AmountMin, bool Param_bShowProduct);
	void ShowItemDetailsFromItemBoxContent(const struct FSBItemBoxContentParam& ItemBoxContent);
	void SetBonus(bool bBonus);
	void ShowProduct(ESBRewardItemType Param_RewardType, int32 Param_ItemIndex);
	void ShowOriginal();
	void GetOriginalRewardType(ESBRewardItemType* Param_OriginalRewardType);
	void SetBppExchange(bool bCanBppExchange);
	void SetLotteryAbility(bool bLotteryAbility);
	void SetLotteryGroupsId(int32 LotteryGroupsId);

	void GetCurrentItemDetailType(bool* bValid, E_ItemDetailTypes* Param_DetailType) const;
	void ItemTypeToDetailType(EItemType Param_ItemType, int32 Param_ItemIndex, bool* bValid, E_ItemDetailTypes* Param_DetailType) const;
	void RewardTypeToDetailType(ESBRewardItemType Param_RewardType, int32 Param_ItemIndex, bool* bValid, E_ItemDetailTypes* Param_DetailType) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShopMenuDetailsSwitcher_C">();
	}
	static class UShopMenuDetailsSwitcher_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShopMenuDetailsSwitcher_C>();
	}
};
static_assert(alignof(UShopMenuDetailsSwitcher_C) == 0x000008, "Wrong alignment on UShopMenuDetailsSwitcher_C");
static_assert(sizeof(UShopMenuDetailsSwitcher_C) == 0x000398, "Wrong size on UShopMenuDetailsSwitcher_C");
static_assert(offsetof(UShopMenuDetailsSwitcher_C, UberGraphFrame) == 0x0002B0, "Member 'UShopMenuDetailsSwitcher_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsSwitcher_C, ItemDetailsGrp) == 0x0002B8, "Member 'UShopMenuDetailsSwitcher_C::ItemDetailsGrp' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsSwitcher_C, bIsGrandchild) == 0x0002C0, "Member 'UShopMenuDetailsSwitcher_C::bIsGrandchild' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsSwitcher_C, bDesignCheck) == 0x0002C1, "Member 'UShopMenuDetailsSwitcher_C::bDesignCheck' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsSwitcher_C, LayoutType) == 0x0002C4, "Member 'UShopMenuDetailsSwitcher_C::LayoutType' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsSwitcher_C, DesignType) == 0x0002CC, "Member 'UShopMenuDetailsSwitcher_C::DesignType' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsSwitcher_C, DetailType) == 0x0002D0, "Member 'UShopMenuDetailsSwitcher_C::DetailType' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsSwitcher_C, DetailWidgets) == 0x0002D8, "Member 'UShopMenuDetailsSwitcher_C::DetailWidgets' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsSwitcher_C, CaptureStudios) == 0x0002E8, "Member 'UShopMenuDetailsSwitcher_C::CaptureStudios' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsSwitcher_C, CurrHoveredProductItemId) == 0x0002F8, "Member 'UShopMenuDetailsSwitcher_C::CurrHoveredProductItemId' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsSwitcher_C, OnEndCloseDetailAnimation) == 0x000300, "Member 'UShopMenuDetailsSwitcher_C::OnEndCloseDetailAnimation' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsSwitcher_C, ItemType) == 0x000310, "Member 'UShopMenuDetailsSwitcher_C::ItemType' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsSwitcher_C, RewardType) == 0x000311, "Member 'UShopMenuDetailsSwitcher_C::RewardType' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsSwitcher_C, bHasRewardType) == 0x000312, "Member 'UShopMenuDetailsSwitcher_C::bHasRewardType' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsSwitcher_C, UniqueId) == 0x000318, "Member 'UShopMenuDetailsSwitcher_C::UniqueId' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsSwitcher_C, ItemIndex) == 0x000328, "Member 'UShopMenuDetailsSwitcher_C::ItemIndex' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsSwitcher_C, OnShow) == 0x000330, "Member 'UShopMenuDetailsSwitcher_C::OnShow' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsSwitcher_C, Amount) == 0x000340, "Member 'UShopMenuDetailsSwitcher_C::Amount' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsSwitcher_C, AmountMin) == 0x000344, "Member 'UShopMenuDetailsSwitcher_C::AmountMin' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsSwitcher_C, bShowProduct) == 0x000348, "Member 'UShopMenuDetailsSwitcher_C::bShowProduct' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsSwitcher_C, WeaponLoadTimerHandle) == 0x000350, "Member 'UShopMenuDetailsSwitcher_C::WeaponLoadTimerHandle' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsSwitcher_C, bIsItemDetailShowed) == 0x000358, "Member 'UShopMenuDetailsSwitcher_C::bIsItemDetailShowed' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsSwitcher_C, SelectedProtectorCategory) == 0x000359, "Member 'UShopMenuDetailsSwitcher_C::SelectedProtectorCategory' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsSwitcher_C, EquipableGender) == 0x00035A, "Member 'UShopMenuDetailsSwitcher_C::EquipableGender' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsSwitcher_C, bHasExternalDirectionalLightRotation) == 0x00035B, "Member 'UShopMenuDetailsSwitcher_C::bHasExternalDirectionalLightRotation' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsSwitcher_C, ExternalDirectionalLightRotation) == 0x00035C, "Member 'UShopMenuDetailsSwitcher_C::ExternalDirectionalLightRotation' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsSwitcher_C, OnClickZoomIn) == 0x000368, "Member 'UShopMenuDetailsSwitcher_C::OnClickZoomIn' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsSwitcher_C, OnClickItemBoxDetail) == 0x000378, "Member 'UShopMenuDetailsSwitcher_C::OnClickItemBoxDetail' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsSwitcher_C, OriginalItemType) == 0x000388, "Member 'UShopMenuDetailsSwitcher_C::OriginalItemType' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsSwitcher_C, OriginalRewardType) == 0x000389, "Member 'UShopMenuDetailsSwitcher_C::OriginalRewardType' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsSwitcher_C, bHasOriginalRewardType) == 0x00038A, "Member 'UShopMenuDetailsSwitcher_C::bHasOriginalRewardType' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsSwitcher_C, OriginalItemIndex) == 0x00038C, "Member 'UShopMenuDetailsSwitcher_C::OriginalItemIndex' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsSwitcher_C, OriginalAmount) == 0x000390, "Member 'UShopMenuDetailsSwitcher_C::OriginalAmount' has a wrong offset!");
static_assert(offsetof(UShopMenuDetailsSwitcher_C, OriginalAmountMin) == 0x000394, "Member 'UShopMenuDetailsSwitcher_C::OriginalAmountMin' has a wrong offset!");

}

