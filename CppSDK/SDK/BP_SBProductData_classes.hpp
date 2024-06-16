#pragma once

 

// Package: BP_SBProductData

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_SBProductDetailType_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SBProductData.BP_SBProductData_C
// 0x00B0 (0x00D8 - 0x0028)
class UBP_SBProductData_C final : public UObject
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0028(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	E_SBProductDetailType                         __DetailType;                                      // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9689[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   ProductName;                                       // 0x0038(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UBP_SBProductItemData_C*                BaseItemData;                                      // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UBP_SBProductItemData_C*>        ItemDataList;                                      // 0x0058(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   ProductDescription;                                // 0x0068(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         PurchaseRestrictionCount;                          // 0x0080(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PurchaseRestrictionCountMax;                       // 0x0084(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              PurchasePeriod;                                    // 0x0088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         Price;                                             // 0x0090(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RankPoint;                                         // 0x0094(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              ProductIcon;                                       // 0x0098(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UBP_SBProductItemData_C*                SelectedData;                                      // 0x00C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ScrollOffset;                                      // 0x00C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHideList;                                         // 0x00CC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bSelectFirstItem;                                  // 0x00CD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bTryingFirstItem;                                  // 0x00CE(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bPaidOnly;                                         // 0x00CF(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          EnableCoupon;                                      // 0x00D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_968A[0x3];                                     // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         WorldStockNum;                                     // 0x00D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SBProductData(int32 EntryPoint);
	void SetSelectedData(class UBP_SBProductItemData_C* Data);
	void SetScrollOffset(float Value);
	void CreateDummyData();
	void CreateDummyData2();
	void CreateItemBoxDummyData();
	bool HasPurchasePeriod();
	void GetProductIconItemData(class UBP_SBProductItemData_C** ItemData);
	bool HasPurchaseRestriction();
	void SetDetailType(E_SBProductDetailType Type);
	void SetShopType(ESBRmShopMenuType ShopType);
	class FText GetPurchaseRestrictionCountText();
	class FText GetPurchasePeriodText();
	void InitFromShopItemInfoList(const class FText& Description, TArray<struct FShopItemInfo>& ShopItemInfoList, ESBRmShopMenuType ShopType);
	void InitFromRoseOrbShopItemMaster(const struct FSBRoseOrbShopItemMasterData& RoseOrbShopItemMaster);
	void InitFromDummyItemBox();
	void InitFromFlatShopProductData(const struct FSBProductData& ProductData);
	void InitFromSeasonRankPointShopProductData(const struct FSBProductData& ProductData);
	void InitFromSeasonPassRewardItemData(class USBSeasonPassMenuRewardItemData* Data);
	void InitFromGashaRewardList(const class FText& Title, const class FText& Description, TArray<struct FSBGashaReward>& GashaRewardList);
	struct FDateTime GetPurchasePeriod();
	void InitFromAdventureBoard(const struct FSBMasterReward& MasterReward);
	bool IsHideList();
	bool IsSelectFirstItem();
	void InitFromDetailMenu(class UBP_SBProductItemData_C* Data);
	void InitFromDetailMenuByMasterReward(const struct FSBMasterReward& MasterReward);
	void InitFromDetailMenuByDungeonSupply(const struct FSBDungeonSupply& DungeonSupply);
	void InitFromDetailMenuByMailDatas(TArray<struct FSBMailData>& MailDatas);
	void InitFromDetailMenuByUniqueId(const class FString& UniqueId, int32 OverrideAmount);
	void InitFromDetailMenuByRewardData(ESBRewardItemType RewardType, int32 ItemId, int32 Amount, bool bBonus);
	void InitMasterReward_Internal(const struct FSBMasterReward& MasterReward);
	bool IsTryingFirstItem();
	void InitDungeonSupply_Internal(const struct FSBDungeonSupply& DungeonSupply);
	void SetPrice(int32 Param_Price);
	bool IsSoldOut();
	void GetSelectedData(class UBP_SBProductItemData_C** Data);
	void GetDetailType(E_SBProductDetailType* DetailType);
	void IsCostumeSet(bool* bReturnValue);
	void GetIconItemData(class UBP_SBProductItemData_C** ItemData);
	void IsItemBox(bool* bReturnValue);
	void GetItemBoxDepthIndex(int32* Param_Index);

	void GetParentData(bool* bIsValid, TScriptInterface<class IBPI_SBProductData_C>* ParentData) const;
	float GetScrollOffset() const;
	TArray<class UBP_SBProductItemData_C*> GetItemDataList() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SBProductData_C">();
	}
	static class UBP_SBProductData_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SBProductData_C>();
	}
};
static_assert(alignof(UBP_SBProductData_C) == 0x000008, "Wrong alignment on UBP_SBProductData_C");
static_assert(sizeof(UBP_SBProductData_C) == 0x0000D8, "Wrong size on UBP_SBProductData_C");
static_assert(offsetof(UBP_SBProductData_C, UberGraphFrame) == 0x000028, "Member 'UBP_SBProductData_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_SBProductData_C, __DetailType) == 0x000030, "Member 'UBP_SBProductData_C::__DetailType' has a wrong offset!");
static_assert(offsetof(UBP_SBProductData_C, ProductName) == 0x000038, "Member 'UBP_SBProductData_C::ProductName' has a wrong offset!");
static_assert(offsetof(UBP_SBProductData_C, BaseItemData) == 0x000050, "Member 'UBP_SBProductData_C::BaseItemData' has a wrong offset!");
static_assert(offsetof(UBP_SBProductData_C, ItemDataList) == 0x000058, "Member 'UBP_SBProductData_C::ItemDataList' has a wrong offset!");
static_assert(offsetof(UBP_SBProductData_C, ProductDescription) == 0x000068, "Member 'UBP_SBProductData_C::ProductDescription' has a wrong offset!");
static_assert(offsetof(UBP_SBProductData_C, PurchaseRestrictionCount) == 0x000080, "Member 'UBP_SBProductData_C::PurchaseRestrictionCount' has a wrong offset!");
static_assert(offsetof(UBP_SBProductData_C, PurchaseRestrictionCountMax) == 0x000084, "Member 'UBP_SBProductData_C::PurchaseRestrictionCountMax' has a wrong offset!");
static_assert(offsetof(UBP_SBProductData_C, PurchasePeriod) == 0x000088, "Member 'UBP_SBProductData_C::PurchasePeriod' has a wrong offset!");
static_assert(offsetof(UBP_SBProductData_C, Price) == 0x000090, "Member 'UBP_SBProductData_C::Price' has a wrong offset!");
static_assert(offsetof(UBP_SBProductData_C, RankPoint) == 0x000094, "Member 'UBP_SBProductData_C::RankPoint' has a wrong offset!");
static_assert(offsetof(UBP_SBProductData_C, ProductIcon) == 0x000098, "Member 'UBP_SBProductData_C::ProductIcon' has a wrong offset!");
static_assert(offsetof(UBP_SBProductData_C, SelectedData) == 0x0000C0, "Member 'UBP_SBProductData_C::SelectedData' has a wrong offset!");
static_assert(offsetof(UBP_SBProductData_C, ScrollOffset) == 0x0000C8, "Member 'UBP_SBProductData_C::ScrollOffset' has a wrong offset!");
static_assert(offsetof(UBP_SBProductData_C, bHideList) == 0x0000CC, "Member 'UBP_SBProductData_C::bHideList' has a wrong offset!");
static_assert(offsetof(UBP_SBProductData_C, bSelectFirstItem) == 0x0000CD, "Member 'UBP_SBProductData_C::bSelectFirstItem' has a wrong offset!");
static_assert(offsetof(UBP_SBProductData_C, bTryingFirstItem) == 0x0000CE, "Member 'UBP_SBProductData_C::bTryingFirstItem' has a wrong offset!");
static_assert(offsetof(UBP_SBProductData_C, bPaidOnly) == 0x0000CF, "Member 'UBP_SBProductData_C::bPaidOnly' has a wrong offset!");
static_assert(offsetof(UBP_SBProductData_C, EnableCoupon) == 0x0000D0, "Member 'UBP_SBProductData_C::EnableCoupon' has a wrong offset!");
static_assert(offsetof(UBP_SBProductData_C, WorldStockNum) == 0x0000D4, "Member 'UBP_SBProductData_C::WorldStockNum' has a wrong offset!");

}

