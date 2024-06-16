#pragma once

 

// Package: BP_UI_AestheShopFunctionLibrary

#include "Basic.hpp"

#include "BP_UI_AestheShopFunctionLibrary_classes.hpp"
#include "BP_UI_AestheShopFunctionLibrary_parameters.hpp"


namespace SDK
{

// Function BP_UI_AestheShopFunctionLibrary.BP_UI_AestheShopFunctionLibrary_C.GetAestheCourseMasterFromTicketTokenId
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   InTicketTokenId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutIsValid                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBAestheShopCourseMasterData    OutMaster                                              (Parm, OutParm)

void UBP_UI_AestheShopFunctionLibrary_C::GetAestheCourseMasterFromTicketTokenId(int32 InTicketTokenId, class UObject* __WorldContext, bool* OutIsValid, struct FSBAestheShopCourseMasterData* OutMaster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UI_AestheShopFunctionLibrary_C", "GetAestheCourseMasterFromTicketTokenId");

	Params::BP_UI_AestheShopFunctionLibrary_C_GetAestheCourseMasterFromTicketTokenId Parms{};

	Parms.InTicketTokenId = InTicketTokenId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutIsValid != nullptr)
		*OutIsValid = Parms.OutIsValid;

	if (OutMaster != nullptr)
		*OutMaster = std::move(Parms.OutMaster);
}


// Function BP_UI_AestheShopFunctionLibrary.BP_UI_AestheShopFunctionLibrary_C.GetAestheCategoryIconTexture
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_AestheShop_TopMenuItems_DetailSettingsInAestheDetailSettingType                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>        OutIconTexture                                         (Parm, OutParm, HasGetValueTypeHash)

void UBP_UI_AestheShopFunctionLibrary_C::GetAestheCategoryIconTexture(E_AestheShop_TopMenuItems_DetailSettings InAestheDetailSettingType, class UObject* __WorldContext, TSoftObjectPtr<class UTexture2D>* OutIconTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UI_AestheShopFunctionLibrary_C", "GetAestheCategoryIconTexture");

	Params::BP_UI_AestheShopFunctionLibrary_C_GetAestheCategoryIconTexture Parms{};

	Parms.InAestheDetailSettingType = InAestheDetailSettingType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutIconTexture != nullptr)
		*OutIconTexture = Parms.OutIconTexture;
}


// Function BP_UI_AestheShopFunctionLibrary.BP_UI_AestheShopFunctionLibrary_C.IsAesthePartsIconActive
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           InPartsIconId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FDateTime                        InNowTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutIsIconActive                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_UI_AestheShopFunctionLibrary_C::IsAesthePartsIconActive(const class FString& InPartsIconId, const struct FDateTime& InNowTime, class UObject* __WorldContext, bool* OutIsIconActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UI_AestheShopFunctionLibrary_C", "IsAesthePartsIconActive");

	Params::BP_UI_AestheShopFunctionLibrary_C_IsAesthePartsIconActive Parms{};

	Parms.InPartsIconId = std::move(InPartsIconId);
	Parms.InNowTime = std::move(InNowTime);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutIsIconActive != nullptr)
		*OutIsIconActive = Parms.OutIsIconActive;
}


// Function BP_UI_AestheShopFunctionLibrary.BP_UI_AestheShopFunctionLibrary_C.GetAesthePartsSortId
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           InIconId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OutSortId                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_AestheShopFunctionLibrary_C::GetAesthePartsSortId(const class FString& InIconId, class UObject* __WorldContext, int32* OutSortId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UI_AestheShopFunctionLibrary_C", "GetAesthePartsSortId");

	Params::BP_UI_AestheShopFunctionLibrary_C_GetAesthePartsSortId Parms{};

	Parms.InIconId = std::move(InIconId);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutSortId != nullptr)
		*OutSortId = Parms.OutSortId;
}


// Function BP_UI_AestheShopFunctionLibrary.BP_UI_AestheShopFunctionLibrary_C.SortAesthePartsIconInfo
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FST_AestheShopPartsIconComplexInfo>InInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FST_AestheShopPartsIconComplexInfo>OutSortedInfo                                          (Parm, OutParm)

void UBP_UI_AestheShopFunctionLibrary_C::SortAesthePartsIconInfo(TArray<struct FST_AestheShopPartsIconComplexInfo>& InInfo, class UObject* __WorldContext, TArray<struct FST_AestheShopPartsIconComplexInfo>* OutSortedInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UI_AestheShopFunctionLibrary_C", "SortAesthePartsIconInfo");

	Params::BP_UI_AestheShopFunctionLibrary_C_SortAesthePartsIconInfo Parms{};

	Parms.InInfo = std::move(InInfo);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	InInfo = std::move(Parms.InInfo);

	if (OutSortedInfo != nullptr)
		*OutSortedInfo = std::move(Parms.OutSortedInfo);
}

}

