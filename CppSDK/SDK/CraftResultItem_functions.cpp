#pragma once

 

// Package: CraftResultItem

#include "Basic.hpp"

#include "CraftResultItem_classes.hpp"
#include "CraftResultItem_parameters.hpp"


namespace SDK
{

// Function CraftResultItem.CraftResultItem_C.ExecuteUbergraph_CraftResultItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCraftResultItem_C::ExecuteUbergraph_CraftResultItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftResultItem_C", "ExecuteUbergraph_CraftResultItem");

	Params::CraftResultItem_C_ExecuteUbergraph_CraftResultItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftResultItem.CraftResultItem_C.SetFailVisible
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Flag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCraftResultItem_C::SetFailVisible(bool Flag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftResultItem_C", "SetFailVisible");

	Params::CraftResultItem_C_SetFailVisible Parms{};

	Parms.Flag = Flag;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftResultItem.CraftResultItem_C.SetCriticalCraftData
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>                   Uids                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   Param_CriticalNum                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   TotalNum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CraftCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   StorageNum                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SaleNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_SaleProfits                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCraftResultItem_C::SetCriticalCraftData(const TArray<class FString>& Uids, int32 Param_CriticalNum, int32 TotalNum, int32 CraftCount, int32 StorageNum, int32 SaleNum, int32 Param_SaleProfits)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftResultItem_C", "SetCriticalCraftData");

	Params::CraftResultItem_C_SetCriticalCraftData Parms{};

	Parms.Uids = std::move(Uids);
	Parms.Param_CriticalNum = Param_CriticalNum;
	Parms.TotalNum = TotalNum;
	Parms.CraftCount = CraftCount;
	Parms.StorageNum = StorageNum;
	Parms.SaleNum = SaleNum;
	Parms.Param_SaleProfits = Param_SaleProfits;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftResultItem.CraftResultItem_C.SetCraftedItemData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsCritical                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   TotalCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   StorageType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SaleNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_SaleProfits                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCraftResultItem_C::SetCraftedItemData(bool IsCritical, int32 TotalCount, int32 StorageType, int32 SaleNum, int32 Param_SaleProfits)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftResultItem_C", "SetCraftedItemData");

	Params::CraftResultItem_C_SetCraftedItemData Parms{};

	Parms.IsCritical = IsCritical;
	Parms.TotalCount = TotalCount;
	Parms.StorageType = StorageType;
	Parms.SaleNum = SaleNum;
	Parms.Param_SaleProfits = Param_SaleProfits;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftResultItem.CraftResultItem_C.SetRecepi
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterCraftRecepi            Param_Recepi                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UCraftResultItem_C::SetRecepi(const struct FCharacterCraftRecepi& Param_Recepi)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftResultItem_C", "SetRecepi");

	Params::CraftResultItem_C_SetRecepi Parms{};

	Parms.Param_Recepi = std::move(Param_Recepi);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftResultItem.CraftResultItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCraftResultItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftResultItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftResultItem.CraftResultItem_C.UpdateCriticalColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCraftResultItem_C::UpdateCriticalColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftResultItem_C", "UpdateCriticalColor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftResultItem.CraftResultItem_C.UpdateBonusCraftNum
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CraftCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCraftResultItem_C::UpdateBonusCraftNum(int32 CraftCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftResultItem_C", "UpdateBonusCraftNum");

	Params::CraftResultItem_C_UpdateBonusCraftNum Parms{};

	Parms.CraftCount = CraftCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftResultItem.CraftResultItem_C.Update Storage Slack Num
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCraftResultItem_C::Update_Storage_Slack_Num()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftResultItem_C", "Update Storage Slack Num");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CraftResultItem.CraftResultItem_C.Update SlackView
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   StorageNo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCraftResultItem_C::Update_SlackView(int32 StorageNo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftResultItem_C", "Update SlackView");

	Params::CraftResultItem_C_Update_SlackView Parms{};

	Parms.StorageNo = StorageNo;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftResultItem.CraftResultItem_C.PlayAnimIn
// (Public, BlueprintCallable, BlueprintEvent)

void UCraftResultItem_C::PlayAnimIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftResultItem_C", "PlayAnimIn");

	UObject::ProcessEvent(Func, nullptr);
}

}

