#pragma once

 

// Package: LibraryMenu_Monster_ExplainTabMenu

#include "Basic.hpp"

#include "LibraryMenu_Monster_ExplainTabMenu_classes.hpp"
#include "LibraryMenu_Monster_ExplainTabMenu_parameters.hpp"


namespace SDK
{

// Function LibraryMenu_Monster_ExplainTabMenu.LibraryMenu_Monster_ExplainTabMenu_C.SetEnemyData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBLibraryEnemyData              EnemyData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void ULibraryMenu_Monster_ExplainTabMenu_C::SetEnemyData(const struct FSBLibraryEnemyData& EnemyData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_ExplainTabMenu_C", "SetEnemyData");

	Params::LibraryMenu_Monster_ExplainTabMenu_C_SetEnemyData Parms{};

	Parms.EnemyData = std::move(EnemyData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Monster_ExplainTabMenu.LibraryMenu_Monster_ExplainTabMenu_C.ChangeEnemyData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Monster_ExplainTabMenu_C::ChangeEnemyData(int32 Param_Index, int32 Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_ExplainTabMenu_C", "ChangeEnemyData");

	Params::LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData Parms{};

	Parms.Param_Index = Param_Index;
	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Monster_ExplainTabMenu.LibraryMenu_Monster_ExplainTabMenu_C.UpdateDetailOpenSetting
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             CheckType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Monster_ExplainTabMenu_C::UpdateDetailOpenSetting(class FName CheckType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_ExplainTabMenu_C", "UpdateDetailOpenSetting");

	Params::LibraryMenu_Monster_ExplainTabMenu_C_UpdateDetailOpenSetting Parms{};

	Parms.CheckType = CheckType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Monster_ExplainTabMenu.LibraryMenu_Monster_ExplainTabMenu_C.Set Info Tooltip
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                           TargetIcon                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_CommonToolTipDetail_Variable_C*TipWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   TotalCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NowCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Monster_ExplainTabMenu_C::Set_Info_Tooltip(class UImage* TargetIcon, class UWBP_CommonToolTipDetail_Variable_C*& TipWidget, int32 TotalCount, int32 NowCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_ExplainTabMenu_C", "Set Info Tooltip");

	Params::LibraryMenu_Monster_ExplainTabMenu_C_Set_Info_Tooltip Parms{};

	Parms.TargetIcon = TargetIcon;
	Parms.TipWidget = TipWidget;
	Parms.TotalCount = TotalCount;
	Parms.NowCount = NowCount;

	UObject::ProcessEvent(Func, &Parms);

	TipWidget = Parms.TipWidget;
}


// Function LibraryMenu_Monster_ExplainTabMenu.LibraryMenu_Monster_ExplainTabMenu_C.ChangeEnemyDataFromId
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             EnemyId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_Monster_ExplainTabMenu_C::ChangeEnemyDataFromId(class FName EnemyId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Monster_ExplainTabMenu_C", "ChangeEnemyDataFromId");

	Params::LibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId Parms{};

	Parms.EnemyId = EnemyId;

	UObject::ProcessEvent(Func, &Parms);
}

}

