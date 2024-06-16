#pragma once

 

// Package: BP_SBProductItemData

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "UMG_structs.hpp"
#include "E_SBProductDetailType_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SBProductItemData.BP_SBProductItemData_C
// 0x0168 (0x0190 - 0x0028)
class UBP_SBProductItemData_C final : public UObject
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0028(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FText                                   ProductName;                                       // 0x0030(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UBP_SBProductItemData_C*>        ItemDataList;                                      // 0x0048(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	ESBRewardItemType                             RewardType;                                        // 0x0058(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10F7[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_SBProductData_C>  ParentData;                                        // 0x0060(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	class FText                                   TypeName;                                          // 0x0070(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bIsItemBox;                                        // 0x0088(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          __bIsCostumeSet;                                   // 0x0089(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EItemType                                     ItemType;                                          // 0x008A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10F8[0x1];                                     // 0x008B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         __ItemId;                                          // 0x008C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 UniqueId;                                          // 0x0090(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSBItemBoxContentParam                 ItemBoxContent;                                    // 0x00A0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FSBMasterReward                        MasterReward;                                      // 0x00C0(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                         Amount;                                            // 0x00D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AmountMin;                                         // 0x00D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Wight;                                             // 0x00DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              __Visibility;                                      // 0x00E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __bTrying;                                         // 0x00E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_10F9[0x2];                                     // 0x00E2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         DummyDataIndex;                                    // 0x00E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnChangeTrying;                                    // 0x00E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bDebugForceCreateInCostumeSetItem;                 // 0x00F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_10FA[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnChangeVisibility;                                // 0x0100(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UBP_SBProductItemData_C*                SelectedData;                                      // 0x0110(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ScrollOffset;                                      // 0x0118(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10FB[0x4];                                     // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<int32, float>                            BreakdownList;                                     // 0x0120(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Rarity;                                            // 0x0170(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RewardRank;                                        // 0x0174(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSeasonPassRewardType                       RewardPlan;                                        // 0x0178(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10FC[0x7];                                     // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            TargetItem;                                        // 0x0180(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsConfirm;                                        // 0x0188(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bCanBppExchange;                                   // 0x0189(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bBonus;                                            // 0x018A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bLotteryAbility;                                   // 0x018B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                         LotteryGroupsId;                                   // 0x018C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnChangeTrying__DelegateSignature(class UBP_SBProductItemData_C* Sender, bool bTrying);
	void OnChangeVisibility__DelegateSignature(ESlateVisibility Visibility);
	void ExecuteUbergraph_BP_SBProductItemData(int32 EntryPoint);
	void SetSelectedData(class UBP_SBProductItemData_C* Data);
	void SetScrollOffset(float Value);
	void InitFromUniqueId(const class FString& Param_UniqueId);
	void InitFromItemData(EItemType Param_ItemType, int32 ItemId, int32 Param_Amount);
	void InitFromRewardData(ESBRewardItemType Param_RewardType, int32 ItemId, int32 Param_Amount, int32 Param_AmountMin);
	void InitFromMasterReward(const struct FSBMasterReward& Param_MasterReward);
	void InitFromItemBoxContentParam(const struct FSBItemBoxContentParam& ItemBoxContentParam, bool bCanParentBppExchange);
	void InitIfItemBox();
	void InitFromShopItemInfo(const struct FShopItemInfo& ShopItemInfo);
	void InitFromDummyItemData(int32 Param_DummyDataIndex);
	void InitFromDummyItemDataInItemBox(int32 Param_DummyDataIndex);
	void InitFromDummyItemDataInCostumeSet(int32 DummyCostumeSetIndex, int32 Param_DummyDataIndex);
	void InitFromDummyCostumeSetBox(int32 Param_DummyDataIndex);
	void InitFromDummyItemBox();
	void HasUniqueId(bool* bResult);
	void HasItemBoxContent(bool* bResult);
	void HasMasterReward(bool* bResult);
	void HasRewardType(bool* bResult);
	void GetCostumeMasterData(struct FSBMasterCostume* CostumeMasterData);
	void GetTrying(bool* bTrying);
	void SetTrying(bool bTrying);
	void SetVisibility(ESlateVisibility Visibility);
	void GetVisibility(ESlateVisibility* Visibility);
	bool IsSetItem();
	void InitFromGashaReward(const struct FSBGashaReward& GashaReward);
	bool HasWight();
	void ToItemType_IntegerFromMasterData_(int32 Param_Index, EItemType* Param_ItemType);
	void IsCostumeData(bool* bFlag);
	void GetItemIndex(int32* ItemIndex);
	void InitFromEventShopProductData(const struct FSBEventShopProduct& ProductData);
	void InitFromMailData(const struct FSBMailData& MailData);
	void IsShowRate(bool* bValue);
	void InitSeasonPassRewardExtraData(class USBSeasonPassMenuRewardItemData* InSeasonPassMenuRewardItemData);
	void GetRewardType(ESBRewardItemType* Param_RewardType);
	void SetBonus(bool Param_bBonus);
	void SetLotteryAbility(bool bValue);
	void SetAmount(int32 Param_Amount);
	void GetSelectedData(class UBP_SBProductItemData_C** Data);
	void GetDetailType(E_SBProductDetailType* DetailType);
	void IsCostumeSet(bool* bReturnValue);
	void GetIconItemData(class UBP_SBProductItemData_C** ItemData);
	void IsItemBox(bool* bReturnValue);
	void GetItemBoxDepthIndex(int32* Param_Index);

	void GetParentData(bool* bIsValid, TScriptInterface<class IBPI_SBProductData_C>* Param_ParentData) const;
	float GetScrollOffset() const;
	TArray<class UBP_SBProductItemData_C*> GetItemDataList() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SBProductItemData_C">();
	}
	static class UBP_SBProductItemData_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SBProductItemData_C>();
	}
};
static_assert(alignof(UBP_SBProductItemData_C) == 0x000008, "Wrong alignment on UBP_SBProductItemData_C");
static_assert(sizeof(UBP_SBProductItemData_C) == 0x000190, "Wrong size on UBP_SBProductItemData_C");
static_assert(offsetof(UBP_SBProductItemData_C, UberGraphFrame) == 0x000028, "Member 'UBP_SBProductItemData_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_SBProductItemData_C, ProductName) == 0x000030, "Member 'UBP_SBProductItemData_C::ProductName' has a wrong offset!");
static_assert(offsetof(UBP_SBProductItemData_C, ItemDataList) == 0x000048, "Member 'UBP_SBProductItemData_C::ItemDataList' has a wrong offset!");
static_assert(offsetof(UBP_SBProductItemData_C, RewardType) == 0x000058, "Member 'UBP_SBProductItemData_C::RewardType' has a wrong offset!");
static_assert(offsetof(UBP_SBProductItemData_C, ParentData) == 0x000060, "Member 'UBP_SBProductItemData_C::ParentData' has a wrong offset!");
static_assert(offsetof(UBP_SBProductItemData_C, TypeName) == 0x000070, "Member 'UBP_SBProductItemData_C::TypeName' has a wrong offset!");
static_assert(offsetof(UBP_SBProductItemData_C, bIsItemBox) == 0x000088, "Member 'UBP_SBProductItemData_C::bIsItemBox' has a wrong offset!");
static_assert(offsetof(UBP_SBProductItemData_C, __bIsCostumeSet) == 0x000089, "Member 'UBP_SBProductItemData_C::__bIsCostumeSet' has a wrong offset!");
static_assert(offsetof(UBP_SBProductItemData_C, ItemType) == 0x00008A, "Member 'UBP_SBProductItemData_C::ItemType' has a wrong offset!");
static_assert(offsetof(UBP_SBProductItemData_C, __ItemId) == 0x00008C, "Member 'UBP_SBProductItemData_C::__ItemId' has a wrong offset!");
static_assert(offsetof(UBP_SBProductItemData_C, UniqueId) == 0x000090, "Member 'UBP_SBProductItemData_C::UniqueId' has a wrong offset!");
static_assert(offsetof(UBP_SBProductItemData_C, ItemBoxContent) == 0x0000A0, "Member 'UBP_SBProductItemData_C::ItemBoxContent' has a wrong offset!");
static_assert(offsetof(UBP_SBProductItemData_C, MasterReward) == 0x0000C0, "Member 'UBP_SBProductItemData_C::MasterReward' has a wrong offset!");
static_assert(offsetof(UBP_SBProductItemData_C, Amount) == 0x0000D4, "Member 'UBP_SBProductItemData_C::Amount' has a wrong offset!");
static_assert(offsetof(UBP_SBProductItemData_C, AmountMin) == 0x0000D8, "Member 'UBP_SBProductItemData_C::AmountMin' has a wrong offset!");
static_assert(offsetof(UBP_SBProductItemData_C, Wight) == 0x0000DC, "Member 'UBP_SBProductItemData_C::Wight' has a wrong offset!");
static_assert(offsetof(UBP_SBProductItemData_C, __Visibility) == 0x0000E0, "Member 'UBP_SBProductItemData_C::__Visibility' has a wrong offset!");
static_assert(offsetof(UBP_SBProductItemData_C, __bTrying) == 0x0000E1, "Member 'UBP_SBProductItemData_C::__bTrying' has a wrong offset!");
static_assert(offsetof(UBP_SBProductItemData_C, DummyDataIndex) == 0x0000E4, "Member 'UBP_SBProductItemData_C::DummyDataIndex' has a wrong offset!");
static_assert(offsetof(UBP_SBProductItemData_C, OnChangeTrying) == 0x0000E8, "Member 'UBP_SBProductItemData_C::OnChangeTrying' has a wrong offset!");
static_assert(offsetof(UBP_SBProductItemData_C, bDebugForceCreateInCostumeSetItem) == 0x0000F8, "Member 'UBP_SBProductItemData_C::bDebugForceCreateInCostumeSetItem' has a wrong offset!");
static_assert(offsetof(UBP_SBProductItemData_C, OnChangeVisibility) == 0x000100, "Member 'UBP_SBProductItemData_C::OnChangeVisibility' has a wrong offset!");
static_assert(offsetof(UBP_SBProductItemData_C, SelectedData) == 0x000110, "Member 'UBP_SBProductItemData_C::SelectedData' has a wrong offset!");
static_assert(offsetof(UBP_SBProductItemData_C, ScrollOffset) == 0x000118, "Member 'UBP_SBProductItemData_C::ScrollOffset' has a wrong offset!");
static_assert(offsetof(UBP_SBProductItemData_C, BreakdownList) == 0x000120, "Member 'UBP_SBProductItemData_C::BreakdownList' has a wrong offset!");
static_assert(offsetof(UBP_SBProductItemData_C, Rarity) == 0x000170, "Member 'UBP_SBProductItemData_C::Rarity' has a wrong offset!");
static_assert(offsetof(UBP_SBProductItemData_C, RewardRank) == 0x000174, "Member 'UBP_SBProductItemData_C::RewardRank' has a wrong offset!");
static_assert(offsetof(UBP_SBProductItemData_C, RewardPlan) == 0x000178, "Member 'UBP_SBProductItemData_C::RewardPlan' has a wrong offset!");
static_assert(offsetof(UBP_SBProductItemData_C, TargetItem) == 0x000180, "Member 'UBP_SBProductItemData_C::TargetItem' has a wrong offset!");
static_assert(offsetof(UBP_SBProductItemData_C, bIsConfirm) == 0x000188, "Member 'UBP_SBProductItemData_C::bIsConfirm' has a wrong offset!");
static_assert(offsetof(UBP_SBProductItemData_C, bCanBppExchange) == 0x000189, "Member 'UBP_SBProductItemData_C::bCanBppExchange' has a wrong offset!");
static_assert(offsetof(UBP_SBProductItemData_C, bBonus) == 0x00018A, "Member 'UBP_SBProductItemData_C::bBonus' has a wrong offset!");
static_assert(offsetof(UBP_SBProductItemData_C, bLotteryAbility) == 0x00018B, "Member 'UBP_SBProductItemData_C::bLotteryAbility' has a wrong offset!");
static_assert(offsetof(UBP_SBProductItemData_C, LotteryGroupsId) == 0x00018C, "Member 'UBP_SBProductItemData_C::LotteryGroupsId' has a wrong offset!");

}

