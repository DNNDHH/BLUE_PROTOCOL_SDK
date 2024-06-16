#pragma once

 

// Package: BP_SBProductItemData

#include "Basic.hpp"

#include "BP_SBProductItemData_classes.hpp"
#include "BP_SBProductItemData_parameters.hpp"


namespace SDK
{

// Function BP_SBProductItemData.BP_SBProductItemData_C.OnChangeTrying__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SBProductItemData_C*          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bTrying                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SBProductItemData_C::OnChangeTrying__DelegateSignature(class UBP_SBProductItemData_C* Sender, bool bTrying)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductItemData_C", "OnChangeTrying__DelegateSignature");

	Params::BP_SBProductItemData_C_OnChangeTrying__DelegateSignature Parms{};

	Parms.Sender = Sender;
	Parms.bTrying = bTrying;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBProductItemData.BP_SBProductItemData_C.OnChangeVisibility__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility                        Visibility                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SBProductItemData_C::OnChangeVisibility__DelegateSignature(ESlateVisibility Visibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductItemData_C", "OnChangeVisibility__DelegateSignature");

	Params::BP_SBProductItemData_C_OnChangeVisibility__DelegateSignature Parms{};

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBProductItemData.BP_SBProductItemData_C.ExecuteUbergraph_BP_SBProductItemData
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SBProductItemData_C::ExecuteUbergraph_BP_SBProductItemData(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductItemData_C", "ExecuteUbergraph_BP_SBProductItemData");

	Params::BP_SBProductItemData_C_ExecuteUbergraph_BP_SBProductItemData Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBProductItemData.BP_SBProductItemData_C.SetSelectedData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SBProductItemData_C*          Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SBProductItemData_C::SetSelectedData(class UBP_SBProductItemData_C* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductItemData_C", "SetSelectedData");

	Params::BP_SBProductItemData_C_SetSelectedData Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBProductItemData.BP_SBProductItemData_C.SetScrollOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SBProductItemData_C::SetScrollOffset(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductItemData_C", "SetScrollOffset");

	Params::BP_SBProductItemData_C_SetScrollOffset Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromUniqueId
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_UniqueId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_SBProductItemData_C::InitFromUniqueId(const class FString& Param_UniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductItemData_C", "InitFromUniqueId");

	Params::BP_SBProductItemData_C_InitFromUniqueId Parms{};

	Parms.Param_UniqueId = std::move(Param_UniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromItemData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemType                               Param_ItemType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Amount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SBProductItemData_C::InitFromItemData(EItemType Param_ItemType, int32 ItemId, int32 Param_Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductItemData_C", "InitFromItemData");

	Params::BP_SBProductItemData_C_InitFromItemData Parms{};

	Parms.Param_ItemType = Param_ItemType;
	Parms.ItemId = ItemId;
	Parms.Param_Amount = Param_Amount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromRewardData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRewardItemType                       Param_RewardType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Amount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_AmountMin                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SBProductItemData_C::InitFromRewardData(ESBRewardItemType Param_RewardType, int32 ItemId, int32 Param_Amount, int32 Param_AmountMin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductItemData_C", "InitFromRewardData");

	Params::BP_SBProductItemData_C_InitFromRewardData Parms{};

	Parms.Param_RewardType = Param_RewardType;
	Parms.ItemId = ItemId;
	Parms.Param_Amount = Param_Amount;
	Parms.Param_AmountMin = Param_AmountMin;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromMasterReward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterReward                  Param_MasterReward                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UBP_SBProductItemData_C::InitFromMasterReward(const struct FSBMasterReward& Param_MasterReward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductItemData_C", "InitFromMasterReward");

	Params::BP_SBProductItemData_C_InitFromMasterReward Parms{};

	Parms.Param_MasterReward = std::move(Param_MasterReward);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBProductItemData.BP_SBProductItemData_C.initFromItemBoxContentParam
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBItemBoxContentParam           ItemBoxContentParam                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                                    bCanParentBppExchange                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SBProductItemData_C::InitFromItemBoxContentParam(const struct FSBItemBoxContentParam& ItemBoxContentParam, bool bCanParentBppExchange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductItemData_C", "initFromItemBoxContentParam");

	Params::BP_SBProductItemData_C_InitFromItemBoxContentParam Parms{};

	Parms.ItemBoxContentParam = std::move(ItemBoxContentParam);
	Parms.bCanParentBppExchange = bCanParentBppExchange;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBProductItemData.BP_SBProductItemData_C.InitIfItemBox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_SBProductItemData_C::InitIfItemBox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductItemData_C", "InitIfItemBox");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromShopItemInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FShopItemInfo                    ShopItemInfo                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UBP_SBProductItemData_C::InitFromShopItemInfo(const struct FShopItemInfo& ShopItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductItemData_C", "InitFromShopItemInfo");

	Params::BP_SBProductItemData_C_InitFromShopItemInfo Parms{};

	Parms.ShopItemInfo = std::move(ShopItemInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromDummyItemData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_DummyDataIndex                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SBProductItemData_C::InitFromDummyItemData(int32 Param_DummyDataIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductItemData_C", "InitFromDummyItemData");

	Params::BP_SBProductItemData_C_InitFromDummyItemData Parms{};

	Parms.Param_DummyDataIndex = Param_DummyDataIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromDummyItemDataInItemBox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_DummyDataIndex                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SBProductItemData_C::InitFromDummyItemDataInItemBox(int32 Param_DummyDataIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductItemData_C", "InitFromDummyItemDataInItemBox");

	Params::BP_SBProductItemData_C_InitFromDummyItemDataInItemBox Parms{};

	Parms.Param_DummyDataIndex = Param_DummyDataIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromDummyItemDataInCostumeSet
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   DummyCostumeSetIndex                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_DummyDataIndex                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SBProductItemData_C::InitFromDummyItemDataInCostumeSet(int32 DummyCostumeSetIndex, int32 Param_DummyDataIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductItemData_C", "InitFromDummyItemDataInCostumeSet");

	Params::BP_SBProductItemData_C_InitFromDummyItemDataInCostumeSet Parms{};

	Parms.DummyCostumeSetIndex = DummyCostumeSetIndex;
	Parms.Param_DummyDataIndex = Param_DummyDataIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromDummyCostumeSetBox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_DummyDataIndex                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SBProductItemData_C::InitFromDummyCostumeSetBox(int32 Param_DummyDataIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductItemData_C", "InitFromDummyCostumeSetBox");

	Params::BP_SBProductItemData_C_InitFromDummyCostumeSetBox Parms{};

	Parms.Param_DummyDataIndex = Param_DummyDataIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromDummyItemBox
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_SBProductItemData_C::InitFromDummyItemBox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductItemData_C", "InitFromDummyItemBox");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SBProductItemData.BP_SBProductItemData_C.HasUniqueId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bResult                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SBProductItemData_C::HasUniqueId(bool* bResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductItemData_C", "HasUniqueId");

	Params::BP_SBProductItemData_C_HasUniqueId Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bResult != nullptr)
		*bResult = Parms.bResult;
}


// Function BP_SBProductItemData.BP_SBProductItemData_C.HasItemBoxContent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bResult                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SBProductItemData_C::HasItemBoxContent(bool* bResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductItemData_C", "HasItemBoxContent");

	Params::BP_SBProductItemData_C_HasItemBoxContent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bResult != nullptr)
		*bResult = Parms.bResult;
}


// Function BP_SBProductItemData.BP_SBProductItemData_C.HasMasterReward
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bResult                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SBProductItemData_C::HasMasterReward(bool* bResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductItemData_C", "HasMasterReward");

	Params::BP_SBProductItemData_C_HasMasterReward Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bResult != nullptr)
		*bResult = Parms.bResult;
}


// Function BP_SBProductItemData.BP_SBProductItemData_C.HasRewardType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bResult                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SBProductItemData_C::HasRewardType(bool* bResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductItemData_C", "HasRewardType");

	Params::BP_SBProductItemData_C_HasRewardType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bResult != nullptr)
		*bResult = Parms.bResult;
}


// Function BP_SBProductItemData.BP_SBProductItemData_C.GetCostumeMasterData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSBMasterCostume                 CostumeMasterData                                      (Parm, OutParm)

void UBP_SBProductItemData_C::GetCostumeMasterData(struct FSBMasterCostume* CostumeMasterData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductItemData_C", "GetCostumeMasterData");

	Params::BP_SBProductItemData_C_GetCostumeMasterData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CostumeMasterData != nullptr)
		*CostumeMasterData = std::move(Parms.CostumeMasterData);
}


// Function BP_SBProductItemData.BP_SBProductItemData_C.GetTrying
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bTrying                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SBProductItemData_C::GetTrying(bool* bTrying)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductItemData_C", "GetTrying");

	Params::BP_SBProductItemData_C_GetTrying Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bTrying != nullptr)
		*bTrying = Parms.bTrying;
}


// Function BP_SBProductItemData.BP_SBProductItemData_C.SetTrying
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bTrying                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SBProductItemData_C::SetTrying(bool bTrying)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductItemData_C", "SetTrying");

	Params::BP_SBProductItemData_C_SetTrying Parms{};

	Parms.bTrying = bTrying;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBProductItemData.BP_SBProductItemData_C.SetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility                        Visibility                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SBProductItemData_C::SetVisibility(ESlateVisibility Visibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductItemData_C", "SetVisibility");

	Params::BP_SBProductItemData_C_SetVisibility Parms{};

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBProductItemData.BP_SBProductItemData_C.GetVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        Visibility                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SBProductItemData_C::GetVisibility(ESlateVisibility* Visibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductItemData_C", "GetVisibility");

	Params::BP_SBProductItemData_C_GetVisibility Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Visibility != nullptr)
		*Visibility = Parms.Visibility;
}


// Function BP_SBProductItemData.BP_SBProductItemData_C.IsSetItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_SBProductItemData_C::IsSetItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductItemData_C", "IsSetItem");

	Params::BP_SBProductItemData_C_IsSetItem Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromGashaReward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBGashaReward                   GashaReward                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UBP_SBProductItemData_C::InitFromGashaReward(const struct FSBGashaReward& GashaReward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductItemData_C", "InitFromGashaReward");

	Params::BP_SBProductItemData_C_InitFromGashaReward Parms{};

	Parms.GashaReward = std::move(GashaReward);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBProductItemData.BP_SBProductItemData_C.HasWight
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_SBProductItemData_C::HasWight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductItemData_C", "HasWight");

	Params::BP_SBProductItemData_C_HasWight Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_SBProductItemData.BP_SBProductItemData_C.ToItemType(IntegerFromMasterData)
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EItemType                               Param_ItemType                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SBProductItemData_C::ToItemType_IntegerFromMasterData_(int32 Param_Index, EItemType* Param_ItemType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductItemData_C", "ToItemType(IntegerFromMasterData)");

	Params::BP_SBProductItemData_C_ToItemType_IntegerFromMasterData_ Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_ItemType != nullptr)
		*Param_ItemType = Parms.Param_ItemType;
}


// Function BP_SBProductItemData.BP_SBProductItemData_C.IsCostumeData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bFlag                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SBProductItemData_C::IsCostumeData(bool* bFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductItemData_C", "IsCostumeData");

	Params::BP_SBProductItemData_C_IsCostumeData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bFlag != nullptr)
		*bFlag = Parms.bFlag;
}


// Function BP_SBProductItemData.BP_SBProductItemData_C.GetItemIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ItemIndex                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SBProductItemData_C::GetItemIndex(int32* ItemIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductItemData_C", "GetItemIndex");

	Params::BP_SBProductItemData_C_GetItemIndex Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ItemIndex != nullptr)
		*ItemIndex = Parms.ItemIndex;
}


// Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromEventShopProductData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBEventShopProduct              ProductData                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_SBProductItemData_C::InitFromEventShopProductData(const struct FSBEventShopProduct& ProductData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductItemData_C", "InitFromEventShopProductData");

	Params::BP_SBProductItemData_C_InitFromEventShopProductData Parms{};

	Parms.ProductData = std::move(ProductData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBProductItemData.BP_SBProductItemData_C.InitFromMailData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMailData                      MailData                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_SBProductItemData_C::InitFromMailData(const struct FSBMailData& MailData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductItemData_C", "InitFromMailData");

	Params::BP_SBProductItemData_C_InitFromMailData Parms{};

	Parms.MailData = std::move(MailData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBProductItemData.BP_SBProductItemData_C.IsShowRate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bValue                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SBProductItemData_C::IsShowRate(bool* bValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductItemData_C", "IsShowRate");

	Params::BP_SBProductItemData_C_IsShowRate Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bValue != nullptr)
		*bValue = Parms.bValue;
}


// Function BP_SBProductItemData.BP_SBProductItemData_C.InitSeasonPassRewardExtraData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBSeasonPassMenuRewardItemData*  InSeasonPassMenuRewardItemData                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SBProductItemData_C::InitSeasonPassRewardExtraData(class USBSeasonPassMenuRewardItemData* InSeasonPassMenuRewardItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductItemData_C", "InitSeasonPassRewardExtraData");

	Params::BP_SBProductItemData_C_InitSeasonPassRewardExtraData Parms{};

	Parms.InSeasonPassMenuRewardItemData = InSeasonPassMenuRewardItemData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBProductItemData.BP_SBProductItemData_C.GetRewardType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBRewardItemType                       Param_RewardType                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SBProductItemData_C::GetRewardType(ESBRewardItemType* Param_RewardType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductItemData_C", "GetRewardType");

	Params::BP_SBProductItemData_C_GetRewardType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_RewardType != nullptr)
		*Param_RewardType = Parms.Param_RewardType;
}


// Function BP_SBProductItemData.BP_SBProductItemData_C.SetBonus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bBonus                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SBProductItemData_C::SetBonus(bool Param_bBonus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductItemData_C", "SetBonus");

	Params::BP_SBProductItemData_C_SetBonus Parms{};

	Parms.Param_bBonus = Param_bBonus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBProductItemData.BP_SBProductItemData_C.SetLotteryAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SBProductItemData_C::SetLotteryAbility(bool bValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductItemData_C", "SetLotteryAbility");

	Params::BP_SBProductItemData_C_SetLotteryAbility Parms{};

	Parms.bValue = bValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBProductItemData.BP_SBProductItemData_C.SetAmount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Amount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SBProductItemData_C::SetAmount(int32 Param_Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductItemData_C", "SetAmount");

	Params::BP_SBProductItemData_C_SetAmount Parms{};

	Parms.Param_Amount = Param_Amount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SBProductItemData.BP_SBProductItemData_C.GetSelectedData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SBProductItemData_C*          Data                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SBProductItemData_C::GetSelectedData(class UBP_SBProductItemData_C** Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductItemData_C", "GetSelectedData");

	Params::BP_SBProductItemData_C_GetSelectedData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = Parms.Data;
}


// Function BP_SBProductItemData.BP_SBProductItemData_C.GetDetailType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_SBProductDetailType                   DetailType                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SBProductItemData_C::GetDetailType(E_SBProductDetailType* DetailType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductItemData_C", "GetDetailType");

	Params::BP_SBProductItemData_C_GetDetailType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (DetailType != nullptr)
		*DetailType = Parms.DetailType;
}


// Function BP_SBProductItemData.BP_SBProductItemData_C.IsCostumeSet
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bReturnValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SBProductItemData_C::IsCostumeSet(bool* bReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductItemData_C", "IsCostumeSet");

	Params::BP_SBProductItemData_C_IsCostumeSet Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bReturnValue != nullptr)
		*bReturnValue = Parms.bReturnValue;
}


// Function BP_SBProductItemData.BP_SBProductItemData_C.GetIconItemData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SBProductItemData_C*          ItemData                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SBProductItemData_C::GetIconItemData(class UBP_SBProductItemData_C** ItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductItemData_C", "GetIconItemData");

	Params::BP_SBProductItemData_C_GetIconItemData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ItemData != nullptr)
		*ItemData = Parms.ItemData;
}


// Function BP_SBProductItemData.BP_SBProductItemData_C.IsItemBox
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bReturnValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SBProductItemData_C::IsItemBox(bool* bReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductItemData_C", "IsItemBox");

	Params::BP_SBProductItemData_C_IsItemBox Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bReturnValue != nullptr)
		*bReturnValue = Parms.bReturnValue;
}


// Function BP_SBProductItemData.BP_SBProductItemData_C.GetItemBoxDepthIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SBProductItemData_C::GetItemBoxDepthIndex(int32* Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductItemData_C", "GetItemBoxDepthIndex");

	Params::BP_SBProductItemData_C_GetItemBoxDepthIndex Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Index != nullptr)
		*Param_Index = Parms.Param_Index;
}


// Function BP_SBProductItemData.BP_SBProductItemData_C.GetParentData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                                    bIsValid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_SBProductData_C>Param_ParentData                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SBProductItemData_C::GetParentData(bool* bIsValid, TScriptInterface<class IBPI_SBProductData_C>* Param_ParentData) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductItemData_C", "GetParentData");

	Params::BP_SBProductItemData_C_GetParentData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bIsValid != nullptr)
		*bIsValid = Parms.bIsValid;

	if (Param_ParentData != nullptr)
		*Param_ParentData = Parms.Param_ParentData;
}


// Function BP_SBProductItemData.BP_SBProductItemData_C.GetScrollOffset
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UBP_SBProductItemData_C::GetScrollOffset() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductItemData_C", "GetScrollOffset");

	Params::BP_SBProductItemData_C_GetScrollOffset Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_SBProductItemData.BP_SBProductItemData_C.GetItemDataList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class UBP_SBProductItemData_C*>  ReturnValue                                            (Parm, OutParm, ReturnParm)

TArray<class UBP_SBProductItemData_C*> UBP_SBProductItemData_C::GetItemDataList() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SBProductItemData_C", "GetItemDataList");

	Params::BP_SBProductItemData_C_GetItemDataList Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

