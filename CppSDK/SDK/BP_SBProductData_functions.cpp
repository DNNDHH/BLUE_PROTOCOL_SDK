#pragma once

 

// Package: BP_SBProductData

#include "Basic.hpp"

#include "BP_SBProductData_classes.hpp"
#include "BP_SBProductData_parameters.hpp"


namespace SDK
{

// Function BP_SBProductData.BP_SBProductData_C.ExecuteUbergraph_BP_SBProductData
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SBProductData_C::ExecuteUbergraph_BP_SBProductData(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductData_C", "ExecuteUbergraph_BP_SBProductData");

	Params::BP_SBProductData_C_ExecuteUbergraph_BP_SBProductData Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBProductData.BP_SBProductData_C.SetSelectedData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SBProductItemData_C*          Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SBProductData_C::SetSelectedData(class UBP_SBProductItemData_C* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductData_C", "SetSelectedData");

	Params::BP_SBProductData_C_SetSelectedData Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBProductData.BP_SBProductData_C.SetScrollOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SBProductData_C::SetScrollOffset(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductData_C", "SetScrollOffset");

	Params::BP_SBProductData_C_SetScrollOffset Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBProductData.BP_SBProductData_C.CreateDummyData
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_SBProductData_C::CreateDummyData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductData_C", "CreateDummyData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SBProductData.BP_SBProductData_C.CreateDummyData2
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_SBProductData_C::CreateDummyData2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductData_C", "CreateDummyData2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SBProductData.BP_SBProductData_C.CreateItemBoxDummyData
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_SBProductData_C::CreateItemBoxDummyData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductData_C", "CreateItemBoxDummyData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SBProductData.BP_SBProductData_C.HasPurchasePeriod
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_SBProductData_C::HasPurchasePeriod()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductData_C", "HasPurchasePeriod");

	Params::BP_SBProductData_C_HasPurchasePeriod Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_SBProductData.BP_SBProductData_C.GetProductIconItemData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBP_SBProductItemData_C*          ItemData                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SBProductData_C::GetProductIconItemData(class UBP_SBProductItemData_C** ItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductData_C", "GetProductIconItemData");

	Params::BP_SBProductData_C_GetProductIconItemData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ItemData != nullptr)
		*ItemData = Parms.ItemData;
}


// Function BP_SBProductData.BP_SBProductData_C.HasPurchaseRestriction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_SBProductData_C::HasPurchaseRestriction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductData_C", "HasPurchaseRestriction");

	Params::BP_SBProductData_C_HasPurchaseRestriction Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_SBProductData.BP_SBProductData_C.SetDetailType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_SBProductDetailType                   Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SBProductData_C::SetDetailType(E_SBProductDetailType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductData_C", "SetDetailType");

	Params::BP_SBProductData_C_SetDetailType Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBProductData.BP_SBProductData_C.SetShopType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRmShopMenuType                       ShopType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SBProductData_C::SetShopType(ESBRmShopMenuType ShopType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductData_C", "SetShopType");

	Params::BP_SBProductData_C_SetShopType Parms{};

	Parms.ShopType = ShopType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBProductData.BP_SBProductData_C.GetPurchaseRestrictionCountText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UBP_SBProductData_C::GetPurchaseRestrictionCountText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductData_C", "GetPurchaseRestrictionCountText");

	Params::BP_SBProductData_C_GetPurchaseRestrictionCountText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_SBProductData.BP_SBProductData_C.GetPurchasePeriodText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UBP_SBProductData_C::GetPurchasePeriodText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductData_C", "GetPurchasePeriodText");

	Params::BP_SBProductData_C_GetPurchasePeriodText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_SBProductData.BP_SBProductData_C.InitFromShopItemInfoList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Description                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FShopItemInfo>            ShopItemInfoList                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ESBRmShopMenuType                       ShopType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SBProductData_C::InitFromShopItemInfoList(const class FText& Description, TArray<struct FShopItemInfo>& ShopItemInfoList, ESBRmShopMenuType ShopType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductData_C", "InitFromShopItemInfoList");

	Params::BP_SBProductData_C_InitFromShopItemInfoList Parms{};

	Parms.Description = std::move(Description);
	Parms.ShopItemInfoList = std::move(ShopItemInfoList);
	Parms.ShopType = ShopType;

	UObject::ProcessEvent(Func, &Parms);

	ShopItemInfoList = std::move(Parms.ShopItemInfoList);
}


// Function BP_SBProductData.BP_SBProductData_C.InitFromRoseOrbShopItemMaster
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBRoseOrbShopItemMasterData     RoseOrbShopItemMaster                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_SBProductData_C::InitFromRoseOrbShopItemMaster(const struct FSBRoseOrbShopItemMasterData& RoseOrbShopItemMaster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductData_C", "InitFromRoseOrbShopItemMaster");

	Params::BP_SBProductData_C_InitFromRoseOrbShopItemMaster Parms{};

	Parms.RoseOrbShopItemMaster = std::move(RoseOrbShopItemMaster);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBProductData.BP_SBProductData_C.InitFromDummyItemBox
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_SBProductData_C::InitFromDummyItemBox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductData_C", "InitFromDummyItemBox");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SBProductData.BP_SBProductData_C.InitFromFlatShopProductData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBProductData                   ProductData                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_SBProductData_C::InitFromFlatShopProductData(const struct FSBProductData& ProductData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductData_C", "InitFromFlatShopProductData");

	Params::BP_SBProductData_C_InitFromFlatShopProductData Parms{};

	Parms.ProductData = std::move(ProductData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBProductData.BP_SBProductData_C.InitFromSeasonRankPointShopProductData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBProductData                   ProductData                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_SBProductData_C::InitFromSeasonRankPointShopProductData(const struct FSBProductData& ProductData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductData_C", "InitFromSeasonRankPointShopProductData");

	Params::BP_SBProductData_C_InitFromSeasonRankPointShopProductData Parms{};

	Parms.ProductData = std::move(ProductData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBProductData.BP_SBProductData_C.InitFromSeasonPassRewardItemData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBSeasonPassMenuRewardItemData*  Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SBProductData_C::InitFromSeasonPassRewardItemData(class USBSeasonPassMenuRewardItemData* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductData_C", "InitFromSeasonPassRewardItemData");

	Params::BP_SBProductData_C_InitFromSeasonPassRewardItemData Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBProductData.BP_SBProductData_C.InitFromGashaRewardList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Title                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             Description                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FSBGashaReward>           GashaRewardList                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_SBProductData_C::InitFromGashaRewardList(const class FText& Title, const class FText& Description, TArray<struct FSBGashaReward>& GashaRewardList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductData_C", "InitFromGashaRewardList");

	Params::BP_SBProductData_C_InitFromGashaRewardList Parms{};

	Parms.Title = std::move(Title);
	Parms.Description = std::move(Description);
	Parms.GashaRewardList = std::move(GashaRewardList);

	UObject::ProcessEvent(Func, &Parms);

	GashaRewardList = std::move(Parms.GashaRewardList);
}


// Function BP_SBProductData.BP_SBProductData_C.GetPurchasePeriod
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDateTime                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

struct FDateTime UBP_SBProductData_C::GetPurchasePeriod()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductData_C", "GetPurchasePeriod");

	Params::BP_SBProductData_C_GetPurchasePeriod Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_SBProductData.BP_SBProductData_C.InitFromAdventureBoard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterReward                  MasterReward                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UBP_SBProductData_C::InitFromAdventureBoard(const struct FSBMasterReward& MasterReward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductData_C", "InitFromAdventureBoard");

	Params::BP_SBProductData_C_InitFromAdventureBoard Parms{};

	Parms.MasterReward = std::move(MasterReward);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBProductData.BP_SBProductData_C.IsHideList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_SBProductData_C::IsHideList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductData_C", "IsHideList");

	Params::BP_SBProductData_C_IsHideList Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_SBProductData.BP_SBProductData_C.IsSelectFirstItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_SBProductData_C::IsSelectFirstItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductData_C", "IsSelectFirstItem");

	Params::BP_SBProductData_C_IsSelectFirstItem Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_SBProductData.BP_SBProductData_C.InitFromDetailMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SBProductItemData_C*          Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SBProductData_C::InitFromDetailMenu(class UBP_SBProductItemData_C* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductData_C", "InitFromDetailMenu");

	Params::BP_SBProductData_C_InitFromDetailMenu Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBProductData.BP_SBProductData_C.InitFromDetailMenuByMasterReward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterReward                  MasterReward                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UBP_SBProductData_C::InitFromDetailMenuByMasterReward(const struct FSBMasterReward& MasterReward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductData_C", "InitFromDetailMenuByMasterReward");

	Params::BP_SBProductData_C_InitFromDetailMenuByMasterReward Parms{};

	Parms.MasterReward = std::move(MasterReward);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBProductData.BP_SBProductData_C.InitFromDetailMenuByDungeonSupply
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBDungeonSupply                 DungeonSupply                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UBP_SBProductData_C::InitFromDetailMenuByDungeonSupply(const struct FSBDungeonSupply& DungeonSupply)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductData_C", "InitFromDetailMenuByDungeonSupply");

	Params::BP_SBProductData_C_InitFromDetailMenuByDungeonSupply Parms{};

	Parms.DungeonSupply = std::move(DungeonSupply);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBProductData.BP_SBProductData_C.InitFromDetailMenuByMailDatas
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBMailData>              MailDatas                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_SBProductData_C::InitFromDetailMenuByMailDatas(TArray<struct FSBMailData>& MailDatas)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductData_C", "InitFromDetailMenuByMailDatas");

	Params::BP_SBProductData_C_InitFromDetailMenuByMailDatas Parms{};

	Parms.MailDatas = std::move(MailDatas);

	UObject::ProcessEvent(Func, &Parms);

	MailDatas = std::move(Parms.MailDatas);
}


// Function BP_SBProductData.BP_SBProductData_C.InitFromDetailMenuByUniqueId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           UniqueId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   OverrideAmount                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SBProductData_C::InitFromDetailMenuByUniqueId(const class FString& UniqueId, int32 OverrideAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductData_C", "InitFromDetailMenuByUniqueId");

	Params::BP_SBProductData_C_InitFromDetailMenuByUniqueId Parms{};

	Parms.UniqueId = std::move(UniqueId);
	Parms.OverrideAmount = OverrideAmount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBProductData.BP_SBProductData_C.InitFromDetailMenuByRewardData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRewardItemType                       RewardType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bBonus                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SBProductData_C::InitFromDetailMenuByRewardData(ESBRewardItemType RewardType, int32 ItemId, int32 Amount, bool bBonus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductData_C", "InitFromDetailMenuByRewardData");

	Params::BP_SBProductData_C_InitFromDetailMenuByRewardData Parms{};

	Parms.RewardType = RewardType;
	Parms.ItemId = ItemId;
	Parms.Amount = Amount;
	Parms.bBonus = bBonus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBProductData.BP_SBProductData_C.InitMasterReward_Internal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterReward                  MasterReward                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UBP_SBProductData_C::InitMasterReward_Internal(const struct FSBMasterReward& MasterReward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductData_C", "InitMasterReward_Internal");

	Params::BP_SBProductData_C_InitMasterReward_Internal Parms{};

	Parms.MasterReward = std::move(MasterReward);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBProductData.BP_SBProductData_C.IsTryingFirstItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_SBProductData_C::IsTryingFirstItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductData_C", "IsTryingFirstItem");

	Params::BP_SBProductData_C_IsTryingFirstItem Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_SBProductData.BP_SBProductData_C.InitDungeonSupply_Internal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBDungeonSupply                 DungeonSupply                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UBP_SBProductData_C::InitDungeonSupply_Internal(const struct FSBDungeonSupply& DungeonSupply)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductData_C", "InitDungeonSupply_Internal");

	Params::BP_SBProductData_C_InitDungeonSupply_Internal Parms{};

	Parms.DungeonSupply = std::move(DungeonSupply);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBProductData.BP_SBProductData_C.SetPrice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Price                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SBProductData_C::SetPrice(int32 Param_Price)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductData_C", "SetPrice");

	Params::BP_SBProductData_C_SetPrice Parms{};

	Parms.Param_Price = Param_Price;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBProductData.BP_SBProductData_C.IsSoldOut
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_SBProductData_C::IsSoldOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductData_C", "IsSoldOut");

	Params::BP_SBProductData_C_IsSoldOut Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_SBProductData.BP_SBProductData_C.GetSelectedData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SBProductItemData_C*          Data                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SBProductData_C::GetSelectedData(class UBP_SBProductItemData_C** Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductData_C", "GetSelectedData");

	Params::BP_SBProductData_C_GetSelectedData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = Parms.Data;
}


// Function BP_SBProductData.BP_SBProductData_C.GetDetailType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_SBProductDetailType                   DetailType                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SBProductData_C::GetDetailType(E_SBProductDetailType* DetailType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductData_C", "GetDetailType");

	Params::BP_SBProductData_C_GetDetailType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (DetailType != nullptr)
		*DetailType = Parms.DetailType;
}


// Function BP_SBProductData.BP_SBProductData_C.IsCostumeSet
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bReturnValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SBProductData_C::IsCostumeSet(bool* bReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductData_C", "IsCostumeSet");

	Params::BP_SBProductData_C_IsCostumeSet Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bReturnValue != nullptr)
		*bReturnValue = Parms.bReturnValue;
}


// Function BP_SBProductData.BP_SBProductData_C.GetIconItemData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SBProductItemData_C*          ItemData                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SBProductData_C::GetIconItemData(class UBP_SBProductItemData_C** ItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductData_C", "GetIconItemData");

	Params::BP_SBProductData_C_GetIconItemData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ItemData != nullptr)
		*ItemData = Parms.ItemData;
}


// Function BP_SBProductData.BP_SBProductData_C.IsItemBox
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bReturnValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SBProductData_C::IsItemBox(bool* bReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductData_C", "IsItemBox");

	Params::BP_SBProductData_C_IsItemBox Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bReturnValue != nullptr)
		*bReturnValue = Parms.bReturnValue;
}


// Function BP_SBProductData.BP_SBProductData_C.GetItemBoxDepthIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SBProductData_C::GetItemBoxDepthIndex(int32* Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductData_C", "GetItemBoxDepthIndex");

	Params::BP_SBProductData_C_GetItemBoxDepthIndex Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Index != nullptr)
		*Param_Index = Parms.Param_Index;
}


// Function BP_SBProductData.BP_SBProductData_C.GetParentData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                                    bIsValid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_SBProductData_C>ParentData                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SBProductData_C::GetParentData(bool* bIsValid, TScriptInterface<class IBPI_SBProductData_C>* ParentData) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductData_C", "GetParentData");

	Params::BP_SBProductData_C_GetParentData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bIsValid != nullptr)
		*bIsValid = Parms.bIsValid;

	if (ParentData != nullptr)
		*ParentData = Parms.ParentData;
}


// Function BP_SBProductData.BP_SBProductData_C.GetScrollOffset
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UBP_SBProductData_C::GetScrollOffset() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductData_C", "GetScrollOffset");

	Params::BP_SBProductData_C_GetScrollOffset Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_SBProductData.BP_SBProductData_C.GetItemDataList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class UBP_SBProductItemData_C*>  ReturnValue                                            (Parm, OutParm, ReturnParm)

TArray<class UBP_SBProductItemData_C*> UBP_SBProductData_C::GetItemDataList() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductData_C", "GetItemDataList");

	Params::BP_SBProductData_C_GetItemDataList Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

