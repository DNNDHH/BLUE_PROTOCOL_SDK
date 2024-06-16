#pragma once

 

// Package: FLIB_UiCostume

#include "Basic.hpp"

#include "FLIB_UiCostume_classes.hpp"
#include "FLIB_UiCostume_parameters.hpp"


namespace SDK
{

// Function FLIB_UiCostume.FLIB_UiCostume_C.CheckCostumePartsIsCompositeWear
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           InCostumePartsName                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// EProtectorCategory                      InCostumePartsCategory                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBCharacterGender                      InCharacterGender                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutIsCompositeWear                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<ECharaPartsLocation>             OutOccupiedPartsLocations                              (Parm, OutParm)

void UFLIB_UiCostume_C::CheckCostumePartsIsCompositeWear(const class FString& InCostumePartsName, EProtectorCategory InCostumePartsCategory, ESBCharacterGender InCharacterGender, class UObject* __WorldContext, bool* OutIsCompositeWear, TArray<ECharaPartsLocation>* OutOccupiedPartsLocations)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UiCostume_C", "CheckCostumePartsIsCompositeWear");

	Params::FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear Parms{};

	Parms.InCostumePartsName = std::move(InCostumePartsName);
	Parms.InCostumePartsCategory = InCostumePartsCategory;
	Parms.InCharacterGender = InCharacterGender;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutIsCompositeWear != nullptr)
		*OutIsCompositeWear = Parms.OutIsCompositeWear;

	if (OutOccupiedPartsLocations != nullptr)
		*OutOccupiedPartsLocations = std::move(Parms.OutOccupiedPartsLocations);
}


// Function FLIB_UiCostume.FLIB_UiCostume_C.IsCompositeWearByMasterCostume
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterCostume                 MasterCostume                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ESBCharacterGender                      InCharacterGender                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bUseCostumeGender                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutIsCompositeWear                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<ECharaPartsLocation>             OutOccupiedPartsLocations                              (Parm, OutParm)

void UFLIB_UiCostume_C::IsCompositeWearByMasterCostume(const struct FSBMasterCostume& MasterCostume, ESBCharacterGender InCharacterGender, bool bUseCostumeGender, class UObject* __WorldContext, bool* OutIsCompositeWear, TArray<ECharaPartsLocation>* OutOccupiedPartsLocations)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UiCostume_C", "IsCompositeWearByMasterCostume");

	Params::FLIB_UiCostume_C_IsCompositeWearByMasterCostume Parms{};

	Parms.MasterCostume = std::move(MasterCostume);
	Parms.InCharacterGender = InCharacterGender;
	Parms.bUseCostumeGender = bUseCostumeGender;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutIsCompositeWear != nullptr)
		*OutIsCompositeWear = Parms.OutIsCompositeWear;

	if (OutOccupiedPartsLocations != nullptr)
		*OutOccupiedPartsLocations = std::move(Parms.OutOccupiedPartsLocations);
}


// Function FLIB_UiCostume.FLIB_UiCostume_C.IsCompositeWearByCostumeId
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CostumeId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBCharacterGender                      InCharacterGender                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bUseCostumeGender                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsValid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsCompositeWear                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<ECharaPartsLocation>             OccupiedPartsLocations                                 (Parm, OutParm)
// struct FSBMasterCostume                 MasterCostume                                          (Parm, OutParm)

void UFLIB_UiCostume_C::IsCompositeWearByCostumeId(int32 CostumeId, ESBCharacterGender InCharacterGender, bool bUseCostumeGender, class UObject* __WorldContext, bool* bIsValid, bool* IsCompositeWear, TArray<ECharaPartsLocation>* OccupiedPartsLocations, struct FSBMasterCostume* MasterCostume)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UiCostume_C", "IsCompositeWearByCostumeId");

	Params::FLIB_UiCostume_C_IsCompositeWearByCostumeId Parms{};

	Parms.CostumeId = CostumeId;
	Parms.InCharacterGender = InCharacterGender;
	Parms.bUseCostumeGender = bUseCostumeGender;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bIsValid != nullptr)
		*bIsValid = Parms.bIsValid;

	if (IsCompositeWear != nullptr)
		*IsCompositeWear = Parms.IsCompositeWear;

	if (OccupiedPartsLocations != nullptr)
		*OccupiedPartsLocations = std::move(Parms.OccupiedPartsLocations);

	if (MasterCostume != nullptr)
		*MasterCostume = std::move(Parms.MasterCostume);
}


// Function FLIB_UiCostume.FLIB_UiCostume_C.GetOccupiedLocation
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterCostume                 MasterCostume                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ESBCharacterGender                      InCharacterGender                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bUseCostumeGender                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<EProtectorCategory>              Result                                                 (Parm, OutParm)

void UFLIB_UiCostume_C::GetOccupiedLocation(const struct FSBMasterCostume& MasterCostume, ESBCharacterGender InCharacterGender, bool bUseCostumeGender, class UObject* __WorldContext, TArray<EProtectorCategory>* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UiCostume_C", "GetOccupiedLocation");

	Params::FLIB_UiCostume_C_GetOccupiedLocation Parms{};

	Parms.MasterCostume = std::move(MasterCostume);
	Parms.InCharacterGender = InCharacterGender;
	Parms.bUseCostumeGender = bUseCostumeGender;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);
}


// Function FLIB_UiCostume.FLIB_UiCostume_C.GetOccupiedLocationByCostumeId
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CostumeId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBCharacterGender                      InCharacterGender                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bUseCostumeGender                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsValid                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<EProtectorCategory>              Result                                                 (Parm, OutParm)
// struct FSBMasterCostume                 MasterCostume                                          (Parm, OutParm)

void UFLIB_UiCostume_C::GetOccupiedLocationByCostumeId(int32 CostumeId, ESBCharacterGender InCharacterGender, bool bUseCostumeGender, class UObject* __WorldContext, bool* bIsValid, TArray<EProtectorCategory>* Result, struct FSBMasterCostume* MasterCostume)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UiCostume_C", "GetOccupiedLocationByCostumeId");

	Params::FLIB_UiCostume_C_GetOccupiedLocationByCostumeId Parms{};

	Parms.CostumeId = CostumeId;
	Parms.InCharacterGender = InCharacterGender;
	Parms.bUseCostumeGender = bUseCostumeGender;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bIsValid != nullptr)
		*bIsValid = Parms.bIsValid;

	if (Result != nullptr)
		*Result = std::move(Parms.Result);

	if (MasterCostume != nullptr)
		*MasterCostume = std::move(Parms.MasterCostume);
}


// Function FLIB_UiCostume.FLIB_UiCostume_C.GetCostumeWearingPartsText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSBMasterCostume                 MasterCostume                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UFLIB_UiCostume_C::GetCostumeWearingPartsText(const struct FSBMasterCostume& MasterCostume, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UiCostume_C", "GetCostumeWearingPartsText");

	Params::FLIB_UiCostume_C_GetCostumeWearingPartsText Parms{};

	Parms.MasterCostume = std::move(MasterCostume);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FLIB_UiCostume.FLIB_UiCostume_C.GetCostumeWearingPartsTextIdFromProtectorCategory
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// uint8                                   InProtectorCategory                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OutTextId                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFLIB_UiCostume_C::GetCostumeWearingPartsTextIdFromProtectorCategory(uint8 InProtectorCategory, class UObject* __WorldContext, int32* OutTextId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UiCostume_C", "GetCostumeWearingPartsTextIdFromProtectorCategory");

	Params::FLIB_UiCostume_C_GetCostumeWearingPartsTextIdFromProtectorCategory Parms{};

	Parms.InProtectorCategory = InProtectorCategory;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutTextId != nullptr)
		*OutTextId = Parms.OutTextId;
}


// Function FLIB_UiCostume.FLIB_UiCostume_C.GetCostumeWearingPartsTextIdForCompositeWear
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OutTextId                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFLIB_UiCostume_C::GetCostumeWearingPartsTextIdForCompositeWear(class UObject* __WorldContext, int32* OutTextId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UiCostume_C", "GetCostumeWearingPartsTextIdForCompositeWear");

	Params::FLIB_UiCostume_C_GetCostumeWearingPartsTextIdForCompositeWear Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutTextId != nullptr)
		*OutTextId = Parms.OutTextId;
}


// Function FLIB_UiCostume.FLIB_UiCostume_C.GetCharaPartsLocationFromProtectorCategory
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EProtectorCategory                      InProtectorCategory                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutIsValid                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ECharaPartsLocation                     OutCharaPartsLocation                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFLIB_UiCostume_C::GetCharaPartsLocationFromProtectorCategory(EProtectorCategory InProtectorCategory, class UObject* __WorldContext, bool* OutIsValid, ECharaPartsLocation* OutCharaPartsLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UiCostume_C", "GetCharaPartsLocationFromProtectorCategory");

	Params::FLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory Parms{};

	Parms.InProtectorCategory = InProtectorCategory;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutIsValid != nullptr)
		*OutIsValid = Parms.OutIsValid;

	if (OutCharaPartsLocation != nullptr)
		*OutCharaPartsLocation = Parms.OutCharaPartsLocation;
}


// Function FLIB_UiCostume.FLIB_UiCostume_C.ProtectorCategoryToCharaPartsLocation
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EProtectorCategory                      InProtectorCategory                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutIsValid                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ECharaPartsLocation                     OutCharaPartsLocation                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFLIB_UiCostume_C::ProtectorCategoryToCharaPartsLocation(EProtectorCategory InProtectorCategory, class UObject* __WorldContext, bool* OutIsValid, ECharaPartsLocation* OutCharaPartsLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UiCostume_C", "ProtectorCategoryToCharaPartsLocation");

	Params::FLIB_UiCostume_C_ProtectorCategoryToCharaPartsLocation Parms{};

	Parms.InProtectorCategory = InProtectorCategory;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutIsValid != nullptr)
		*OutIsValid = Parms.OutIsValid;

	if (OutCharaPartsLocation != nullptr)
		*OutCharaPartsLocation = Parms.OutCharaPartsLocation;
}


// Function FLIB_UiCostume.FLIB_UiCostume_C.CharaPartsLocationToProtectorCategory
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ECharaPartsLocation                     CharaPartsLocation                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EProtectorCategory                      ProtectorCategory                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFLIB_UiCostume_C::CharaPartsLocationToProtectorCategory(ECharaPartsLocation CharaPartsLocation, class UObject* __WorldContext, EProtectorCategory* ProtectorCategory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UiCostume_C", "CharaPartsLocationToProtectorCategory");

	Params::FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory Parms{};

	Parms.CharaPartsLocation = CharaPartsLocation;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (ProtectorCategory != nullptr)
		*ProtectorCategory = Parms.ProtectorCategory;
}


// Function FLIB_UiCostume.FLIB_UiCostume_C.FindCostumeConflictingCompositeWear
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<int32>                           InCostumeItemIds                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ESBCharaEquipType                       InCostumeEquipType                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBCharacterGender                      InCharacterGender                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutIsConflictingCompositeWear                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ESBCharaEquipType                       OutConflictingCostumeEquipType                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFLIB_UiCostume_C::FindCostumeConflictingCompositeWear(TArray<int32>& InCostumeItemIds, ESBCharaEquipType InCostumeEquipType, ESBCharacterGender InCharacterGender, class UObject* __WorldContext, bool* OutIsConflictingCompositeWear, ESBCharaEquipType* OutConflictingCostumeEquipType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UiCostume_C", "FindCostumeConflictingCompositeWear");

	Params::FLIB_UiCostume_C_FindCostumeConflictingCompositeWear Parms{};

	Parms.InCostumeItemIds = std::move(InCostumeItemIds);
	Parms.InCostumeEquipType = InCostumeEquipType;
	Parms.InCharacterGender = InCharacterGender;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	InCostumeItemIds = std::move(Parms.InCostumeItemIds);

	if (OutIsConflictingCompositeWear != nullptr)
		*OutIsConflictingCompositeWear = Parms.OutIsConflictingCompositeWear;

	if (OutConflictingCostumeEquipType != nullptr)
		*OutConflictingCostumeEquipType = Parms.OutConflictingCostumeEquipType;
}


// Function FLIB_UiCostume.FLIB_UiCostume_C.FindCostumeConflictingCompositeWearByEquipInfo
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FCharaEquipInfo                  InCostumeEquipInfo                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// ESBCharaEquipType                       InCostumeEquipType                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBCharacterGender                      InCharacterGender                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutIsConflictingCompositeWear                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ESBCharaEquipType                       OutConflictingCostumeEquipType                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFLIB_UiCostume_C::FindCostumeConflictingCompositeWearByEquipInfo(const struct FCharaEquipInfo& InCostumeEquipInfo, ESBCharaEquipType InCostumeEquipType, ESBCharacterGender InCharacterGender, class UObject* __WorldContext, bool* OutIsConflictingCompositeWear, ESBCharaEquipType* OutConflictingCostumeEquipType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UiCostume_C", "FindCostumeConflictingCompositeWearByEquipInfo");

	Params::FLIB_UiCostume_C_FindCostumeConflictingCompositeWearByEquipInfo Parms{};

	Parms.InCostumeEquipInfo = std::move(InCostumeEquipInfo);
	Parms.InCostumeEquipType = InCostumeEquipType;
	Parms.InCharacterGender = InCharacterGender;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutIsConflictingCompositeWear != nullptr)
		*OutIsConflictingCompositeWear = Parms.OutIsConflictingCompositeWear;

	if (OutConflictingCostumeEquipType != nullptr)
		*OutConflictingCostumeEquipType = Parms.OutConflictingCostumeEquipType;
}


// Function FLIB_UiCostume.FLIB_UiCostume_C.GetCostumeEquipTypeFromPartsLocation
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ECharaPartsLocation                     InPartsLocation                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBCharaEquipType                       OutEquipType                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFLIB_UiCostume_C::GetCostumeEquipTypeFromPartsLocation(ECharaPartsLocation InPartsLocation, class UObject* __WorldContext, ESBCharaEquipType* OutEquipType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FLIB_UiCostume_C", "GetCostumeEquipTypeFromPartsLocation");

	Params::FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation Parms{};

	Parms.InPartsLocation = InPartsLocation;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutEquipType != nullptr)
		*OutEquipType = Parms.OutEquipType;
}

}

