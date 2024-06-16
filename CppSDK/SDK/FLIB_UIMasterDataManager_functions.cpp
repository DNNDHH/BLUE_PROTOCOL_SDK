#pragma once

 

// Package: FLIB_UIMasterDataManager

#include "Basic.hpp"

#include "FLIB_UIMasterDataManager_classes.hpp"
#include "FLIB_UIMasterDataManager_parameters.hpp"


namespace SDK
{

// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindItemBoxMaster
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsValid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBMasterItemBox                 ItemBoxMaster                                          (Parm, OutParm)

void UFLIB_UIMasterDataManager_C::FindItemBoxMaster(int32 ItemIndex, class UObject* __WorldContext, bool* bIsValid, struct FSBMasterItemBox* ItemBoxMaster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UIMasterDataManager_C", "FindItemBoxMaster");

	Params::FLIB_UIMasterDataManager_C_FindItemBoxMaster Parms{};

	Parms.ItemIndex = ItemIndex;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bIsValid != nullptr)
		*bIsValid = Parms.bIsValid;

	if (ItemBoxMaster != nullptr)
		*ItemBoxMaster = std::move(Parms.ItemBoxMaster);
}


// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindItemMaster
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsValid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemMasterData                  ItemMaster                                             (Parm, OutParm)

void UFLIB_UIMasterDataManager_C::FindItemMaster(int32 ItemIndex, class UObject* __WorldContext, bool* bIsValid, struct FItemMasterData* ItemMaster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UIMasterDataManager_C", "FindItemMaster");

	Params::FLIB_UIMasterDataManager_C_FindItemMaster Parms{};

	Parms.ItemIndex = ItemIndex;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bIsValid != nullptr)
		*bIsValid = Parms.bIsValid;

	if (ItemMaster != nullptr)
		*ItemMaster = std::move(Parms.ItemMaster);
}


// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindCostumeMaster
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsValid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBMasterCostume                 CostumeMaster                                          (Parm, OutParm)

void UFLIB_UIMasterDataManager_C::FindCostumeMaster(int32 ItemIndex, class UObject* __WorldContext, bool* bIsValid, struct FSBMasterCostume* CostumeMaster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UIMasterDataManager_C", "FindCostumeMaster");

	Params::FLIB_UIMasterDataManager_C_FindCostumeMaster Parms{};

	Parms.ItemIndex = ItemIndex;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bIsValid != nullptr)
		*bIsValid = Parms.bIsValid;

	if (CostumeMaster != nullptr)
		*CostumeMaster = std::move(Parms.CostumeMaster);
}


// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindWeaponMaster
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsValid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBWeaponMasterData              WeaponMaster                                           (Parm, OutParm)

void UFLIB_UIMasterDataManager_C::FindWeaponMaster(int32 ItemIndex, class UObject* __WorldContext, bool* bIsValid, struct FSBWeaponMasterData* WeaponMaster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UIMasterDataManager_C", "FindWeaponMaster");

	Params::FLIB_UIMasterDataManager_C_FindWeaponMaster Parms{};

	Parms.ItemIndex = ItemIndex;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bIsValid != nullptr)
		*bIsValid = Parms.bIsValid;

	if (WeaponMaster != nullptr)
		*WeaponMaster = std::move(Parms.WeaponMaster);
}


// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindImagineMaster
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsValid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBMasterImagine                 ImagineMaster                                          (Parm, OutParm)

void UFLIB_UIMasterDataManager_C::FindImagineMaster(int32 ItemIndex, class UObject* __WorldContext, bool* bIsValid, struct FSBMasterImagine* ImagineMaster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UIMasterDataManager_C", "FindImagineMaster");

	Params::FLIB_UIMasterDataManager_C_FindImagineMaster Parms{};

	Parms.ItemIndex = ItemIndex;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bIsValid != nullptr)
		*bIsValid = Parms.bIsValid;

	if (ImagineMaster != nullptr)
		*ImagineMaster = std::move(Parms.ImagineMaster);
}


// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindImagineMasterByRewardData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRewardItemType                       RewardType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ItemIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsValid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBMasterImagine                 ImagineMaster                                          (Parm, OutParm)

void UFLIB_UIMasterDataManager_C::FindImagineMasterByRewardData(ESBRewardItemType RewardType, int32 ItemIndex, class UObject* __WorldContext, bool* bIsValid, struct FSBMasterImagine* ImagineMaster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UIMasterDataManager_C", "FindImagineMasterByRewardData");

	Params::FLIB_UIMasterDataManager_C_FindImagineMasterByRewardData Parms{};

	Parms.RewardType = RewardType;
	Parms.ItemIndex = ItemIndex;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bIsValid != nullptr)
		*bIsValid = Parms.bIsValid;

	if (ImagineMaster != nullptr)
		*ImagineMaster = std::move(Parms.ImagineMaster);
}


// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindMountImagineMaster
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsValid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBMasterMountImagine            MountImagineMaster                                     (Parm, OutParm)

void UFLIB_UIMasterDataManager_C::FindMountImagineMaster(int32 ItemIndex, class UObject* __WorldContext, bool* bIsValid, struct FSBMasterMountImagine* MountImagineMaster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UIMasterDataManager_C", "FindMountImagineMaster");

	Params::FLIB_UIMasterDataManager_C_FindMountImagineMaster Parms{};

	Parms.ItemIndex = ItemIndex;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bIsValid != nullptr)
		*bIsValid = Parms.bIsValid;

	if (MountImagineMaster != nullptr)
		*MountImagineMaster = std::move(Parms.MountImagineMaster);
}


// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindCraftMaster
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RecepiId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsValid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCraftMasterData                 CraftMaster                                            (ConstParm, Parm, OutParm)

void UFLIB_UIMasterDataManager_C::FindCraftMaster(int32 RecepiId, class UObject* __WorldContext, bool* bIsValid, const struct FCraftMasterData* CraftMaster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UIMasterDataManager_C", "FindCraftMaster");

	Params::FLIB_UIMasterDataManager_C_FindCraftMaster Parms{};

	Parms.RecepiId = RecepiId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bIsValid != nullptr)
		*bIsValid = Parms.bIsValid;

	if (CraftMaster != nullptr)
		*CraftMaster = std::move(Parms.CraftMaster);
}


// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindTokenMaster
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InTokenId                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsValid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMasterToken                     TokenMaster                                            (ConstParm, Parm, OutParm)

void UFLIB_UIMasterDataManager_C::FindTokenMaster(const int32 InTokenId, class UObject* __WorldContext, bool* bIsValid, const struct FMasterToken* TokenMaster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UIMasterDataManager_C", "FindTokenMaster");

	Params::FLIB_UIMasterDataManager_C_FindTokenMaster Parms{};

	Parms.InTokenId = InTokenId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bIsValid != nullptr)
		*bIsValid = Parms.bIsValid;

	if (TokenMaster != nullptr)
		*TokenMaster = std::move(Parms.TokenMaster);
}


// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindAchievementMaster
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsValid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAchievementMasterData           AchievementMaster                                      (ConstParm, Parm, OutParm)

void UFLIB_UIMasterDataManager_C::FindAchievementMaster(const int32 Param_Index, class UObject* __WorldContext, bool* bIsValid, const struct FAchievementMasterData* AchievementMaster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UIMasterDataManager_C", "FindAchievementMaster");

	Params::FLIB_UIMasterDataManager_C_FindAchievementMaster Parms{};

	Parms.Param_Index = Param_Index;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bIsValid != nullptr)
		*bIsValid = Parms.bIsValid;

	if (AchievementMaster != nullptr)
		*AchievementMaster = std::move(Parms.AchievementMaster);
}


// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindOrnamentMaster
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Valid                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBMasterOrnament                ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FSBMasterOrnament UFLIB_UIMasterDataManager_C::FindOrnamentMaster(int32 ID, class UObject* __WorldContext, bool* Valid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UIMasterDataManager_C", "FindOrnamentMaster");

	Params::FLIB_UIMasterDataManager_C_FindOrnamentMaster Parms{};

	Parms.ID = ID;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Valid != nullptr)
		*Valid = Parms.Valid;

	return Parms.ReturnValue;
}


// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindEmoteMaster
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   EmoteId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsValid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBEmoteMasterData               EmoteMaster                                            (ConstParm, Parm, OutParm)

void UFLIB_UIMasterDataManager_C::FindEmoteMaster(int32 EmoteId, class UObject* __WorldContext, bool* bIsValid, const struct FSBEmoteMasterData* EmoteMaster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UIMasterDataManager_C", "FindEmoteMaster");

	Params::FLIB_UIMasterDataManager_C_FindEmoteMaster Parms{};

	Parms.EmoteId = EmoteId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bIsValid != nullptr)
		*bIsValid = Parms.bIsValid;

	if (EmoteMaster != nullptr)
		*EmoteMaster = std::move(Parms.EmoteMaster);
}


// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindStampCategoryMaster
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CategoryId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsValid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBStampCategoryMasterData       StampCategoryMaster                                    (ConstParm, Parm, OutParm)

void UFLIB_UIMasterDataManager_C::FindStampCategoryMaster(int32 CategoryId, class UObject* __WorldContext, bool* bIsValid, const struct FSBStampCategoryMasterData* StampCategoryMaster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UIMasterDataManager_C", "FindStampCategoryMaster");

	Params::FLIB_UIMasterDataManager_C_FindStampCategoryMaster Parms{};

	Parms.CategoryId = CategoryId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bIsValid != nullptr)
		*bIsValid = Parms.bIsValid;

	if (StampCategoryMaster != nullptr)
		*StampCategoryMaster = std::move(Parms.StampCategoryMaster);
}


// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindStampCategoryMasterByStampId
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   StampId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsValid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBStampCategoryMasterData       StampCategoryMaster                                    (ConstParm, Parm, OutParm)

void UFLIB_UIMasterDataManager_C::FindStampCategoryMasterByStampId(int32 StampId, class UObject* __WorldContext, bool* bIsValid, const struct FSBStampCategoryMasterData* StampCategoryMaster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UIMasterDataManager_C", "FindStampCategoryMasterByStampId");

	Params::FLIB_UIMasterDataManager_C_FindStampCategoryMasterByStampId Parms{};

	Parms.StampId = StampId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bIsValid != nullptr)
		*bIsValid = Parms.bIsValid;

	if (StampCategoryMaster != nullptr)
		*StampCategoryMaster = std::move(Parms.StampCategoryMaster);
}


// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindImagineRecipeMaster
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ImagineId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsValid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMasterImagineRecepi             ImagineRecipeMaster                                    (ConstParm, Parm, OutParm)

void UFLIB_UIMasterDataManager_C::FindImagineRecipeMaster(int32 ImagineId, class UObject* __WorldContext, bool* bIsValid, const struct FMasterImagineRecepi* ImagineRecipeMaster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UIMasterDataManager_C", "FindImagineRecipeMaster");

	Params::FLIB_UIMasterDataManager_C_FindImagineRecipeMaster Parms{};

	Parms.ImagineId = ImagineId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bIsValid != nullptr)
		*bIsValid = Parms.bIsValid;

	if (ImagineRecipeMaster != nullptr)
		*ImagineRecipeMaster = std::move(Parms.ImagineRecipeMaster);
}


// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindImagineRecipeByMaterialItem
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsValid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMasterImagineRecepi             ImagineRecipeMaster                                    (Parm, OutParm)

void UFLIB_UIMasterDataManager_C::FindImagineRecipeByMaterialItem(int32 ItemId, class UObject* __WorldContext, bool* bIsValid, struct FMasterImagineRecepi* ImagineRecipeMaster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UIMasterDataManager_C", "FindImagineRecipeByMaterialItem");

	Params::FLIB_UIMasterDataManager_C_FindImagineRecipeByMaterialItem Parms{};

	Parms.ItemId = ItemId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bIsValid != nullptr)
		*bIsValid = Parms.bIsValid;

	if (ImagineRecipeMaster != nullptr)
		*ImagineRecipeMaster = std::move(Parms.ImagineRecipeMaster);
}


// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindProductImagineByMaterialItem
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsValid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBMasterImagine                 ImagineMaster                                          (Parm, OutParm)

void UFLIB_UIMasterDataManager_C::FindProductImagineByMaterialItem(int32 ItemId, class UObject* __WorldContext, bool* bIsValid, struct FSBMasterImagine* ImagineMaster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UIMasterDataManager_C", "FindProductImagineByMaterialItem");

	Params::FLIB_UIMasterDataManager_C_FindProductImagineByMaterialItem Parms{};

	Parms.ItemId = ItemId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bIsValid != nullptr)
		*bIsValid = Parms.bIsValid;

	if (ImagineMaster != nullptr)
		*ImagineMaster = std::move(Parms.ImagineMaster);
}


// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindWarehouseAbilityRecipeMaster
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ID                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsValid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBWarehouseAbilityRecipeMasterDataWarehouseAbilityRecipeMaster                           (ConstParm, Parm, OutParm, NoDestructor)

void UFLIB_UIMasterDataManager_C::FindWarehouseAbilityRecipeMaster(const int32 ID, class UObject* __WorldContext, bool* bIsValid, const struct FSBWarehouseAbilityRecipeMasterData* WarehouseAbilityRecipeMaster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UIMasterDataManager_C", "FindWarehouseAbilityRecipeMaster");

	Params::FLIB_UIMasterDataManager_C_FindWarehouseAbilityRecipeMaster Parms{};

	Parms.ID = ID;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bIsValid != nullptr)
		*bIsValid = Parms.bIsValid;

	if (WarehouseAbilityRecipeMaster != nullptr)
		*WarehouseAbilityRecipeMaster = std::move(Parms.WarehouseAbilityRecipeMaster);
}


// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindSkillDataMaster
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SkillId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsValid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBSkillDataMasterData           SkillDataMaster                                        (Parm, OutParm)

void UFLIB_UIMasterDataManager_C::FindSkillDataMaster(int32 SkillId, class UObject* __WorldContext, bool* bIsValid, struct FSBSkillDataMasterData* SkillDataMaster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UIMasterDataManager_C", "FindSkillDataMaster");

	Params::FLIB_UIMasterDataManager_C_FindSkillDataMaster Parms{};

	Parms.SkillId = SkillId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bIsValid != nullptr)
		*bIsValid = Parms.bIsValid;

	if (SkillDataMaster != nullptr)
		*SkillDataMaster = std::move(Parms.SkillDataMaster);
}


// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindSkillMasteryParam
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSkillId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsValid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBSkillMasteryParam             OutSkillMasteryParam                                   (Parm, OutParm, NoDestructor)

void UFLIB_UIMasterDataManager_C::FindSkillMasteryParam(int32 InSkillId, int32 InLevel, class UObject* __WorldContext, bool* bIsValid, struct FSBSkillMasteryParam* OutSkillMasteryParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UIMasterDataManager_C", "FindSkillMasteryParam");

	Params::FLIB_UIMasterDataManager_C_FindSkillMasteryParam Parms{};

	Parms.InSkillId = InSkillId;
	Parms.InLevel = InLevel;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bIsValid != nullptr)
		*bIsValid = Parms.bIsValid;

	if (OutSkillMasteryParam != nullptr)
		*OutSkillMasteryParam = std::move(Parms.OutSkillMasteryParam);
}


// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.GetSkillLevelMax
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSkillId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsValid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   OutSkillLevelMax                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFLIB_UIMasterDataManager_C::GetSkillLevelMax(int32 InSkillId, class UObject* __WorldContext, bool* bIsValid, int32* OutSkillLevelMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UIMasterDataManager_C", "GetSkillLevelMax");

	Params::FLIB_UIMasterDataManager_C_GetSkillLevelMax Parms{};

	Parms.InSkillId = InSkillId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bIsValid != nullptr)
		*bIsValid = Parms.bIsValid;

	if (OutSkillLevelMax != nullptr)
		*OutSkillLevelMax = Parms.OutSkillLevelMax;
}


// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.GetSkillLevelFromClassLevel
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSkillId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InClassLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsValid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   OutSkillLevel                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFLIB_UIMasterDataManager_C::GetSkillLevelFromClassLevel(int32 InSkillId, int32 InClassLevel, class UObject* __WorldContext, bool* bIsValid, int32* OutSkillLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UIMasterDataManager_C", "GetSkillLevelFromClassLevel");

	Params::FLIB_UIMasterDataManager_C_GetSkillLevelFromClassLevel Parms{};

	Parms.InSkillId = InSkillId;
	Parms.InClassLevel = InClassLevel;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bIsValid != nullptr)
		*bIsValid = Parms.bIsValid;

	if (OutSkillLevel != nullptr)
		*OutSkillLevel = Parms.OutSkillLevel;
}


// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindRewardLotteryGroupsMaster
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ID                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsValid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBMasterRewardLotteryGroups     RewardLotteryGroupsMaster                              (ConstParm, Parm, OutParm)

void UFLIB_UIMasterDataManager_C::FindRewardLotteryGroupsMaster(const int32 ID, class UObject* __WorldContext, bool* bIsValid, const struct FSBMasterRewardLotteryGroups* RewardLotteryGroupsMaster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UIMasterDataManager_C", "FindRewardLotteryGroupsMaster");

	Params::FLIB_UIMasterDataManager_C_FindRewardLotteryGroupsMaster Parms{};

	Parms.ID = ID;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bIsValid != nullptr)
		*bIsValid = Parms.bIsValid;

	if (RewardLotteryGroupsMaster != nullptr)
		*RewardLotteryGroupsMaster = std::move(Parms.RewardLotteryGroupsMaster);
}


// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.Find Lottery Reward
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   LotteryGroupsId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ItemIndex                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsValid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBMasterRewardLotteryGroupsRewardsLotteryReward                                          (Parm, OutParm, NoDestructor)

void UFLIB_UIMasterDataManager_C::Find_Lottery_Reward(int32 LotteryGroupsId, const int32 ItemIndex, class UObject* __WorldContext, bool* bIsValid, struct FSBMasterRewardLotteryGroupsRewards* LotteryReward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UIMasterDataManager_C", "Find Lottery Reward");

	Params::FLIB_UIMasterDataManager_C_Find_Lottery_Reward Parms{};

	Parms.LotteryGroupsId = LotteryGroupsId;
	Parms.ItemIndex = ItemIndex;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bIsValid != nullptr)
		*bIsValid = Parms.bIsValid;

	if (LotteryReward != nullptr)
		*LotteryReward = std::move(Parms.LotteryReward);
}


// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindAbilityMaster
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsValid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBAbilityMasterData             AbilityMaster                                          (Parm, OutParm)

void UFLIB_UIMasterDataManager_C::FindAbilityMaster(int32 InId, class UObject* __WorldContext, bool* bIsValid, struct FSBAbilityMasterData* AbilityMaster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UIMasterDataManager_C", "FindAbilityMaster");

	Params::FLIB_UIMasterDataManager_C_FindAbilityMaster Parms{};

	Parms.InId = InId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bIsValid != nullptr)
		*bIsValid = Parms.bIsValid;

	if (AbilityMaster != nullptr)
		*AbilityMaster = std::move(Parms.AbilityMaster);
}


// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindAbilityEffectMaster
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsValid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBAbilityEffectMasterData       AbilityEffectMaster                                    (Parm, OutParm, NoDestructor)

void UFLIB_UIMasterDataManager_C::FindAbilityEffectMaster(int32 InId, class UObject* __WorldContext, bool* bIsValid, struct FSBAbilityEffectMasterData* AbilityEffectMaster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UIMasterDataManager_C", "FindAbilityEffectMaster");

	Params::FLIB_UIMasterDataManager_C_FindAbilityEffectMaster Parms{};

	Parms.InId = InId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bIsValid != nullptr)
		*bIsValid = Parms.bIsValid;

	if (AbilityEffectMaster != nullptr)
		*AbilityEffectMaster = std::move(Parms.AbilityEffectMaster);
}


// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindFusionItemMaster
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBMasterFusionItem              OutFusionItemMaster                                    (Parm, OutParm, NoDestructor)

void UFLIB_UIMasterDataManager_C::FindFusionItemMaster(int32 InId, class UObject* __WorldContext, bool* IsValid, struct FSBMasterFusionItem* OutFusionItemMaster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UIMasterDataManager_C", "FindFusionItemMaster");

	Params::FLIB_UIMasterDataManager_C_FindFusionItemMaster Parms{};

	Parms.InId = InId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	if (OutFusionItemMaster != nullptr)
		*OutFusionItemMaster = std::move(Parms.OutFusionItemMaster);
}


// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindRewardMaster
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             RewardId                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBMasterReward                  RewardMaster                                           (Parm, OutParm, NoDestructor)

void UFLIB_UIMasterDataManager_C::FindRewardMaster(const class FName& RewardId, class UObject* __WorldContext, bool* IsValid, struct FSBMasterReward* RewardMaster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UIMasterDataManager_C", "FindRewardMaster");

	Params::FLIB_UIMasterDataManager_C_FindRewardMaster Parms{};

	Parms.RewardId = RewardId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	if (RewardMaster != nullptr)
		*RewardMaster = std::move(Parms.RewardMaster);
}


// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.GetDateChangeTime
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                        Date_Change_Time                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UFLIB_UIMasterDataManager_C::GetDateChangeTime(class UObject* __WorldContext, struct FDateTime* Date_Change_Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UIMasterDataManager_C", "GetDateChangeTime");

	Params::FLIB_UIMasterDataManager_C_GetDateChangeTime Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Date_Change_Time != nullptr)
		*Date_Change_Time = std::move(Parms.Date_Change_Time);
}


// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindAestheShopCharaParamRestrictionMaster
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsValid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBAestheShopCharaParamRestrictionMasterDataOutData                                                (Parm, OutParm)

void UFLIB_UIMasterDataManager_C::FindAestheShopCharaParamRestrictionMaster(const class FString& InId, class UObject* __WorldContext, bool* bIsValid, struct FSBAestheShopCharaParamRestrictionMasterData* OutData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UIMasterDataManager_C", "FindAestheShopCharaParamRestrictionMaster");

	Params::FLIB_UIMasterDataManager_C_FindAestheShopCharaParamRestrictionMaster Parms{};

	Parms.InId = std::move(InId);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bIsValid != nullptr)
		*bIsValid = Parms.bIsValid;

	if (OutData != nullptr)
		*OutData = std::move(Parms.OutData);
}


// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindAestheCharaPartsMasterByIconId
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InIconId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsValid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBAestheShopPartsMasterData     OutData                                                (Parm, OutParm)

void UFLIB_UIMasterDataManager_C::FindAestheCharaPartsMasterByIconId(const class FString& InIconId, class UObject* __WorldContext, bool* bIsValid, struct FSBAestheShopPartsMasterData* OutData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UIMasterDataManager_C", "FindAestheCharaPartsMasterByIconId");

	Params::FLIB_UIMasterDataManager_C_FindAestheCharaPartsMasterByIconId Parms{};

	Parms.InIconId = std::move(InIconId);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bIsValid != nullptr)
		*bIsValid = Parms.bIsValid;

	if (OutData != nullptr)
		*OutData = std::move(Parms.OutData);
}


// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindAestheCharaPartsMasterByAssetId
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InAssetId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsValid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBAestheShopPartsMasterData     OutData                                                (Parm, OutParm)

void UFLIB_UIMasterDataManager_C::FindAestheCharaPartsMasterByAssetId(const class FString& InAssetId, class UObject* __WorldContext, bool* bIsValid, struct FSBAestheShopPartsMasterData* OutData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UIMasterDataManager_C", "FindAestheCharaPartsMasterByAssetId");

	Params::FLIB_UIMasterDataManager_C_FindAestheCharaPartsMasterByAssetId Parms{};

	Parms.InAssetId = std::move(InAssetId);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bIsValid != nullptr)
		*bIsValid = Parms.bIsValid;

	if (OutData != nullptr)
		*OutData = std::move(Parms.OutData);
}


// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindRealGoodsMaster
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsValid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBEventShopRealGoodsMasterData  RealGoodsMaster                                        (Parm, OutParm, NoDestructor)

void UFLIB_UIMasterDataManager_C::FindRealGoodsMaster(int32 Param_Index, class UObject* __WorldContext, bool* bIsValid, struct FSBEventShopRealGoodsMasterData* RealGoodsMaster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UIMasterDataManager_C", "FindRealGoodsMaster");

	Params::FLIB_UIMasterDataManager_C_FindRealGoodsMaster Parms{};

	Parms.Param_Index = Param_Index;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bIsValid != nullptr)
		*bIsValid = Parms.bIsValid;

	if (RealGoodsMaster != nullptr)
		*RealGoodsMaster = std::move(Parms.RealGoodsMaster);
}


// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindRecipeSetMaster
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsValid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRecipeSetMasterData             RecipeSetMaster                                        (ConstParm, Parm, OutParm)

void UFLIB_UIMasterDataManager_C::FindRecipeSetMaster(int32 Param_Index, class UObject* __WorldContext, bool* bIsValid, const struct FRecipeSetMasterData* RecipeSetMaster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UIMasterDataManager_C", "FindRecipeSetMaster");

	Params::FLIB_UIMasterDataManager_C_FindRecipeSetMaster Parms{};

	Parms.Param_Index = Param_Index;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bIsValid != nullptr)
		*bIsValid = Parms.bIsValid;

	if (RecipeSetMaster != nullptr)
		*RecipeSetMaster = std::move(Parms.RecipeSetMaster);
}


// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindAdventureBoardMaster
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsValid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBAdventureBoardParamMasterData AdventureBoardMaster                                   (ConstParm, Parm, OutParm)

void UFLIB_UIMasterDataManager_C::FindAdventureBoardMaster(int32 ID, class UObject* __WorldContext, bool* bIsValid, const struct FSBAdventureBoardParamMasterData* AdventureBoardMaster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UIMasterDataManager_C", "FindAdventureBoardMaster");

	Params::FLIB_UIMasterDataManager_C_FindAdventureBoardMaster Parms{};

	Parms.ID = ID;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bIsValid != nullptr)
		*bIsValid = Parms.bIsValid;

	if (AdventureBoardMaster != nullptr)
		*AdventureBoardMaster = std::move(Parms.AdventureBoardMaster);
}


// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.GetItemMasterItemIdListFromEfficacyType
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemEfficacyType                       InEfficacyType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<int32>                           OutItemIdList                                          (Parm, OutParm)

void UFLIB_UIMasterDataManager_C::GetItemMasterItemIdListFromEfficacyType(EItemEfficacyType InEfficacyType, class UObject* __WorldContext, bool* IsValid, TArray<int32>* OutItemIdList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UIMasterDataManager_C", "GetItemMasterItemIdListFromEfficacyType");

	Params::FLIB_UIMasterDataManager_C_GetItemMasterItemIdListFromEfficacyType Parms{};

	Parms.InEfficacyType = InEfficacyType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	if (OutItemIdList != nullptr)
		*OutItemIdList = std::move(Parms.OutItemIdList);
}


// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindShopItemSetMaster
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsValid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBFlatShopItemSetMasterData     ShopItemSetMaster                                      (Parm, OutParm, NoDestructor)

void UFLIB_UIMasterDataManager_C::FindShopItemSetMaster(int32 Param_Index, class UObject* __WorldContext, bool* bIsValid, struct FSBFlatShopItemSetMasterData* ShopItemSetMaster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UIMasterDataManager_C", "FindShopItemSetMaster");

	Params::FLIB_UIMasterDataManager_C_FindShopItemSetMaster Parms{};

	Parms.Param_Index = Param_Index;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bIsValid != nullptr)
		*bIsValid = Parms.bIsValid;

	if (ShopItemSetMaster != nullptr)
		*ShopItemSetMaster = std::move(Parms.ShopItemSetMaster);
}


// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindAdventureCardDecorationMaster
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsValid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// const struct FSBMasterAdventureCardDecorationReturnValue                                            (ConstParm, Parm, OutParm, ReturnParm, NoDestructor)

const struct FSBMasterAdventureCardDecoration UFLIB_UIMasterDataManager_C::FindAdventureCardDecorationMaster(int32 Param_Index, class UObject* __WorldContext, bool* bIsValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UIMasterDataManager_C", "FindAdventureCardDecorationMaster");

	Params::FLIB_UIMasterDataManager_C_FindAdventureCardDecorationMaster Parms{};

	Parms.Param_Index = Param_Index;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bIsValid != nullptr)
		*bIsValid = Parms.bIsValid;

	return Parms.ReturnValue;
}


// Function FLIB_UIMasterDataManager.FLIB_UIMasterDataManager_C.FindAwardsMaster
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsValid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBMasterAwardsData              ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor)

struct FSBMasterAwardsData UFLIB_UIMasterDataManager_C::FindAwardsMaster(int32 Param_Index, class UObject* __WorldContext, bool* bIsValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UIMasterDataManager_C", "FindAwardsMaster");

	Params::FLIB_UIMasterDataManager_C_FindAwardsMaster Parms{};

	Parms.Param_Index = Param_Index;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bIsValid != nullptr)
		*bIsValid = Parms.bIsValid;

	return Parms.ReturnValue;
}

}

