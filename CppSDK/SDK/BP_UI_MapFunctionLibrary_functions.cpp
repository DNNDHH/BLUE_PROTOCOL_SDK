#pragma once

 

// Package: BP_UI_MapFunctionLibrary

#include "Basic.hpp"

#include "BP_UI_MapFunctionLibrary_classes.hpp"
#include "BP_UI_MapFunctionLibrary_parameters.hpp"


namespace SDK
{

// Function BP_UI_MapFunctionLibrary.BP_UI_MapFunctionLibrary_C.CheckIfIconPositionCoincide
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector2D>                InRegisteredPositionList                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector2D                        InNewPosition                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    DoesCoincide                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   OutCoincideIconRegId                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_MapFunctionLibrary_C::CheckIfIconPositionCoincide(TArray<struct FVector2D>& InRegisteredPositionList, const struct FVector2D& InNewPosition, class UObject* __WorldContext, bool* DoesCoincide, int32* OutCoincideIconRegId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UI_MapFunctionLibrary_C", "CheckIfIconPositionCoincide");

	Params::BP_UI_MapFunctionLibrary_C_CheckIfIconPositionCoincide Parms{};

	Parms.InRegisteredPositionList = std::move(InRegisteredPositionList);
	Parms.InNewPosition = std::move(InNewPosition);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	InRegisteredPositionList = std::move(Parms.InRegisteredPositionList);

	if (DoesCoincide != nullptr)
		*DoesCoincide = Parms.DoesCoincide;

	if (OutCoincideIconRegId != nullptr)
		*OutCoincideIconRegId = Parms.OutCoincideIconRegId;
}


// Function BP_UI_MapFunctionLibrary.BP_UI_MapFunctionLibrary_C.GetMapUIErrorMessageText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   InTextID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             OutText                                                (Parm, OutParm)

void UBP_UI_MapFunctionLibrary_C::GetMapUIErrorMessageText(int32 InTextID, class UObject* __WorldContext, class FText* OutText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UI_MapFunctionLibrary_C", "GetMapUIErrorMessageText");

	Params::BP_UI_MapFunctionLibrary_C_GetMapUIErrorMessageText Parms{};

	Parms.InTextID = InTextID;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutText != nullptr)
		*OutText = std::move(Parms.OutText);
}


// Function BP_UI_MapFunctionLibrary.BP_UI_MapFunctionLibrary_C.GetMapSymbolIconTexture
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EMapSymbolIconType                      InSymbolIconType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       OutSymbolIconTexture                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_MapFunctionLibrary_C::GetMapSymbolIconTexture(EMapSymbolIconType InSymbolIconType, class UObject* __WorldContext, class UTexture2D** OutSymbolIconTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UI_MapFunctionLibrary_C", "GetMapSymbolIconTexture");

	Params::BP_UI_MapFunctionLibrary_C_GetMapSymbolIconTexture Parms{};

	Parms.InSymbolIconType = InSymbolIconType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutSymbolIconTexture != nullptr)
		*OutSymbolIconTexture = Parms.OutSymbolIconTexture;
}


// Function BP_UI_MapFunctionLibrary.BP_UI_MapFunctionLibrary_C.Get Map Icon Info by Location Info
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBLocationInfo                  InLocationInfo                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                          In                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsMapIconValid                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// EMapSymbolIconType                      OutIconType                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OutIconPriority                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        OutIconWorldPosition                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OutIconTooltipText                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           OutTermId                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UBP_UI_MapFunctionLibrary_C::Get_Map_Icon_Info_by_Location_Info(const struct FSBLocationInfo& InLocationInfo, class UObject* In, class UObject* NewParam, class UObject* __WorldContext, bool* IsMapIconValid, EMapSymbolIconType* OutIconType, int32* OutIconPriority, struct FVector2D* OutIconWorldPosition, class FString* OutIconTooltipText, class FString* OutTermId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UI_MapFunctionLibrary_C", "Get Map Icon Info by Location Info");

	Params::BP_UI_MapFunctionLibrary_C_Get_Map_Icon_Info_by_Location_Info Parms{};

	Parms.InLocationInfo = std::move(InLocationInfo);
	Parms.In = In;
	Parms.NewParam = NewParam;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (IsMapIconValid != nullptr)
		*IsMapIconValid = Parms.IsMapIconValid;

	if (OutIconType != nullptr)
		*OutIconType = Parms.OutIconType;

	if (OutIconPriority != nullptr)
		*OutIconPriority = Parms.OutIconPriority;

	if (OutIconWorldPosition != nullptr)
		*OutIconWorldPosition = std::move(Parms.OutIconWorldPosition);

	if (OutIconTooltipText != nullptr)
		*OutIconTooltipText = std::move(Parms.OutIconTooltipText);

	if (OutTermId != nullptr)
		*OutTermId = std::move(Parms.OutTermId);
}


// Function BP_UI_MapFunctionLibrary.BP_UI_MapFunctionLibrary_C.GetMapIconInfo_ByCharacterProfileData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBFacilityType                         InCharaProfileDataFacilityType                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             InCharaProfileDataRowName                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBCharacterProfileLocationData  InCharacterProfileLocationData                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsMapIconValid                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                       OutIconTexture                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OutIconPriority                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        OutIconWorldPosition                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OutIconTooltipText                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UBP_UI_MapFunctionLibrary_C::GetMapIconInfo_ByCharacterProfileData(ESBFacilityType InCharaProfileDataFacilityType, class FName InCharaProfileDataRowName, const struct FSBCharacterProfileLocationData& InCharacterProfileLocationData, class UObject* __WorldContext, bool* IsMapIconValid, class UTexture2D** OutIconTexture, int32* OutIconPriority, struct FVector2D* OutIconWorldPosition, class FString* OutIconTooltipText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UI_MapFunctionLibrary_C", "GetMapIconInfo_ByCharacterProfileData");

	Params::BP_UI_MapFunctionLibrary_C_GetMapIconInfo_ByCharacterProfileData Parms{};

	Parms.InCharaProfileDataFacilityType = InCharaProfileDataFacilityType;
	Parms.InCharaProfileDataRowName = InCharaProfileDataRowName;
	Parms.InCharacterProfileLocationData = std::move(InCharacterProfileLocationData);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (IsMapIconValid != nullptr)
		*IsMapIconValid = Parms.IsMapIconValid;

	if (OutIconTexture != nullptr)
		*OutIconTexture = Parms.OutIconTexture;

	if (OutIconPriority != nullptr)
		*OutIconPriority = Parms.OutIconPriority;

	if (OutIconWorldPosition != nullptr)
		*OutIconWorldPosition = std::move(Parms.OutIconWorldPosition);

	if (OutIconTooltipText != nullptr)
		*OutIconTooltipText = std::move(Parms.OutIconTooltipText);
}


// Function BP_UI_MapFunctionLibrary.BP_UI_MapFunctionLibrary_C.SetNpcFacilityIconTexture
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBFacilityType                         FacilityType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                           Image                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsFound                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsEnable                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_UI_MapFunctionLibrary_C::SetNpcFacilityIconTexture(ESBFacilityType FacilityType, class UImage*& Image, class UObject* __WorldContext, bool* IsFound, bool* IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UI_MapFunctionLibrary_C", "SetNpcFacilityIconTexture");

	Params::BP_UI_MapFunctionLibrary_C_SetNpcFacilityIconTexture Parms{};

	Parms.FacilityType = FacilityType;
	Parms.Image = Image;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Image = Parms.Image;

	if (IsFound != nullptr)
		*IsFound = Parms.IsFound;

	if (IsEnable != nullptr)
		*IsEnable = Parms.IsEnable;
}


// Function BP_UI_MapFunctionLibrary.BP_UI_MapFunctionLibrary_C.IsPublicDungeon
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           SearchIn                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_UI_MapFunctionLibrary_C::IsPublicDungeon(const class FString& SearchIn, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UI_MapFunctionLibrary_C", "IsPublicDungeon");

	Params::BP_UI_MapFunctionLibrary_C_IsPublicDungeon Parms{};

	Parms.SearchIn = std::move(SearchIn);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_UI_MapFunctionLibrary.BP_UI_MapFunctionLibrary_C.GetMapSymbolIconTextureByMapId
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           InMapId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>        OutIconTexture                                         (Parm, OutParm, HasGetValueTypeHash)

void UBP_UI_MapFunctionLibrary_C::GetMapSymbolIconTextureByMapId(const class FString& InMapId, class UObject* __WorldContext, TSoftObjectPtr<class UTexture2D>* OutIconTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UI_MapFunctionLibrary_C", "GetMapSymbolIconTextureByMapId");

	Params::BP_UI_MapFunctionLibrary_C_GetMapSymbolIconTextureByMapId Parms{};

	Parms.InMapId = std::move(InMapId);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutIconTexture != nullptr)
		*OutIconTexture = Parms.OutIconTexture;
}

}

