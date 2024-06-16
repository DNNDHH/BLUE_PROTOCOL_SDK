#pragma once

 

// Package: BP_UI_ImageAsset

#include "Basic.hpp"

#include "BP_UI_ImageAsset_classes.hpp"
#include "BP_UI_ImageAsset_parameters.hpp"


namespace SDK
{

// Function BP_UI_ImageAsset.BP_UI_ImageAsset_C.GetUIImageAsset
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*                       DataTable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ImageName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>        ImageAsset                                             (Parm, OutParm, HasGetValueTypeHash)
// bool                                    Exist                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_UI_ImageAsset_C::GetUIImageAsset(class UDataTable* DataTable, class FName ImageName, class UObject* __WorldContext, TSoftObjectPtr<class UTexture2D>* ImageAsset, bool* Exist)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UI_ImageAsset_C", "GetUIImageAsset");

	Params::BP_UI_ImageAsset_C_GetUIImageAsset Parms{};

	Parms.DataTable = DataTable;
	Parms.ImageName = ImageName;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (ImageAsset != nullptr)
		*ImageAsset = Parms.ImageAsset;

	if (Exist != nullptr)
		*Exist = Parms.Exist;
}


// Function BP_UI_ImageAsset.BP_UI_ImageAsset_C.GetUIImageAsset_Dungeon
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             ImageName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>        ImageAsset                                             (Parm, OutParm, HasGetValueTypeHash)

void UBP_UI_ImageAsset_C::GetUIImageAsset_Dungeon(class FName ImageName, class UObject* __WorldContext, TSoftObjectPtr<class UTexture2D>* ImageAsset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UI_ImageAsset_C", "GetUIImageAsset_Dungeon");

	Params::BP_UI_ImageAsset_C_GetUIImageAsset_Dungeon Parms{};

	Parms.ImageName = ImageName;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (ImageAsset != nullptr)
		*ImageAsset = Parms.ImageAsset;
}


// Function BP_UI_ImageAsset.BP_UI_ImageAsset_C.GetUIImageAsset_Dungeon_ById
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             DungeonId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>        ImageAsset                                             (Parm, OutParm, HasGetValueTypeHash)

void UBP_UI_ImageAsset_C::GetUIImageAsset_Dungeon_ById(class FName DungeonId, class UObject* __WorldContext, TSoftObjectPtr<class UTexture2D>* ImageAsset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UI_ImageAsset_C", "GetUIImageAsset_Dungeon_ById");

	Params::BP_UI_ImageAsset_C_GetUIImageAsset_Dungeon_ById Parms{};

	Parms.DungeonId = DungeonId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (ImageAsset != nullptr)
		*ImageAsset = Parms.ImageAsset;
}

}

