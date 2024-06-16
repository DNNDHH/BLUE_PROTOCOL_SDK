#pragma once

 

// Package: BP_UIBluePrintFunctionLibrary

#include "Basic.hpp"

#include "BP_UIBluePrintFunctionLibrary_classes.hpp"
#include "BP_UIBluePrintFunctionLibrary_parameters.hpp"


namespace SDK
{

// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetPlayerMaxHp
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UBP_UIBluePrintFunctionLibrary_C::GetPlayerMaxHp(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "GetPlayerMaxHp");

	Params::BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxHp Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetPlayerCurrentHp
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UBP_UIBluePrintFunctionLibrary_C::GetPlayerCurrentHp(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "GetPlayerCurrentHp");

	Params::BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentHp Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetPlayerMaxMp
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UBP_UIBluePrintFunctionLibrary_C::GetPlayerMaxMp(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "GetPlayerMaxMp");

	Params::BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxMp Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetPlayerCurrentMp
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UBP_UIBluePrintFunctionLibrary_C::GetPlayerCurrentMp(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "GetPlayerCurrentMp");

	Params::BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentMp Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetPlayerMaxStamina
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UBP_UIBluePrintFunctionLibrary_C::GetPlayerMaxStamina(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "GetPlayerMaxStamina");

	Params::BP_UIBluePrintFunctionLibrary_C_GetPlayerMaxStamina Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetPlayerCurrentStamina
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UBP_UIBluePrintFunctionLibrary_C::GetPlayerCurrentStamina(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "GetPlayerCurrentStamina");

	Params::BP_UIBluePrintFunctionLibrary_C_GetPlayerCurrentStamina Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.Create Quest Reward Icon
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRewardInfo                      InRewardInfo                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                                    bInSelectRewardSelectable                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bEnableHiddenReward                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      OutWidget                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UIBluePrintFunctionLibrary_C::Create_Quest_Reward_Icon(const struct FRewardInfo& InRewardInfo, bool bInSelectRewardSelectable, bool bEnableHiddenReward, class UObject* __WorldContext, class UUserWidget** OutWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "Create Quest Reward Icon");

	Params::BP_UIBluePrintFunctionLibrary_C_Create_Quest_Reward_Icon Parms{};

	Parms.InRewardInfo = std::move(InRewardInfo);
	Parms.bInSelectRewardSelectable = bInSelectRewardSelectable;
	Parms.bEnableHiddenReward = bEnableHiddenReward;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutWidget != nullptr)
		*OutWidget = Parms.OutWidget;
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetTeamColor
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TeamNumber                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     Color                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UIBluePrintFunctionLibrary_C::GetTeamColor(int32 TeamNumber, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "GetTeamColor");

	Params::BP_UIBluePrintFunctionLibrary_C_GetTeamColor Parms{};

	Parms.TeamNumber = TeamNumber;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetHostilityColor
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBHostility                            Hostility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     Color                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UIBluePrintFunctionLibrary_C::GetHostilityColor(ESBHostility Hostility, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "GetHostilityColor");

	Params::BP_UIBluePrintFunctionLibrary_C_GetHostilityColor Parms{};

	Parms.Hostility = Hostility;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetItemIconTexture
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EItemType                               InItemType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBCharacterGender                      InGender                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    LargeIcon                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bUnidentified                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// EItemCategory                           ItemCategory                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             UnidentifiedIconName                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>        OutIconTexture                                         (Parm, OutParm, HasGetValueTypeHash)

void UBP_UIBluePrintFunctionLibrary_C::GetItemIconTexture(int32 InItemID, EItemType InItemType, ESBCharacterGender InGender, bool LargeIcon, bool bUnidentified, EItemCategory ItemCategory, class FName UnidentifiedIconName, class UObject* __WorldContext, TSoftObjectPtr<class UTexture2D>* OutIconTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "GetItemIconTexture");

	Params::BP_UIBluePrintFunctionLibrary_C_GetItemIconTexture Parms{};

	Parms.InItemID = InItemID;
	Parms.InItemType = InItemType;
	Parms.InGender = InGender;
	Parms.LargeIcon = LargeIcon;
	Parms.bUnidentified = bUnidentified;
	Parms.ItemCategory = ItemCategory;
	Parms.UnidentifiedIconName = UnidentifiedIconName;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutIconTexture != nullptr)
		*OutIconTexture = Parms.OutIconTexture;
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetRewardItemIconTexture
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBRewardItemType                       InItemType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBCharacterGender                      InGender                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    LargeIcon                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bUnidentified                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// EItemCategory                           ItemCategory                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             UnidentifiedIconName                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>        OutIconTexture                                         (Parm, OutParm, HasGetValueTypeHash)

void UBP_UIBluePrintFunctionLibrary_C::GetRewardItemIconTexture(int32 InItemID, ESBRewardItemType InItemType, ESBCharacterGender InGender, bool LargeIcon, bool bUnidentified, EItemCategory ItemCategory, class FName UnidentifiedIconName, class UObject* __WorldContext, TSoftObjectPtr<class UTexture2D>* OutIconTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "GetRewardItemIconTexture");

	Params::BP_UIBluePrintFunctionLibrary_C_GetRewardItemIconTexture Parms{};

	Parms.InItemID = InItemID;
	Parms.InItemType = InItemType;
	Parms.InGender = InGender;
	Parms.LargeIcon = LargeIcon;
	Parms.bUnidentified = bUnidentified;
	Parms.ItemCategory = ItemCategory;
	Parms.UnidentifiedIconName = UnidentifiedIconName;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutIconTexture != nullptr)
		*OutIconTexture = Parms.OutIconTexture;
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetEmotionIcon
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             IconName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       IconTexture                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UIBluePrintFunctionLibrary_C::GetEmotionIcon(class FName IconName, class UObject* __WorldContext, class UTexture2D** IconTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "GetEmotionIcon");

	Params::BP_UIBluePrintFunctionLibrary_C_GetEmotionIcon Parms{};

	Parms.IconName = IconName;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (IconTexture != nullptr)
		*IconTexture = Parms.IconTexture;
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetClassTypeIcon
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBClassType                            InClassType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       OutIconImage                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UIBluePrintFunctionLibrary_C::GetClassTypeIcon(ESBClassType InClassType, class UObject* __WorldContext, class UTexture2D** OutIconImage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "GetClassTypeIcon");

	Params::BP_UIBluePrintFunctionLibrary_C_GetClassTypeIcon Parms{};

	Parms.InClassType = InClassType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutIconImage != nullptr)
		*OutIconImage = Parms.OutIconImage;
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetActivityCategoryIcon
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBActivityCategory                     InActivityCategory                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       Texture                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UIBluePrintFunctionLibrary_C::GetActivityCategoryIcon(ESBActivityCategory InActivityCategory, class UObject* __WorldContext, class UTexture2D** Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "GetActivityCategoryIcon");

	Params::BP_UIBluePrintFunctionLibrary_C_GetActivityCategoryIcon Parms{};

	Parms.InActivityCategory = InActivityCategory;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Texture != nullptr)
		*Texture = Parms.Texture;
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.Find Map Spawn Location for Item Detail Capture
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InMapName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       OutTransform                                           (Parm, OutParm, IsPlainOldData, NoDestructor)

void UBP_UIBluePrintFunctionLibrary_C::Find_Map_Spawn_Location_for_Item_Detail_Capture(const class FString& InMapName, class UObject* __WorldContext, struct FTransform* OutTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "Find Map Spawn Location for Item Detail Capture");

	Params::BP_UIBluePrintFunctionLibrary_C_Find_Map_Spawn_Location_for_Item_Detail_Capture Parms{};

	Parms.InMapName = std::move(InMapName);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutTransform != nullptr)
		*OutTransform = std::move(Parms.OutTransform);
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetAttackParamUIColor
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     OutColor                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UIBluePrintFunctionLibrary_C::GetAttackParamUIColor(class UObject* __WorldContext, struct FLinearColor* OutColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "GetAttackParamUIColor");

	Params::BP_UIBluePrintFunctionLibrary_C_GetAttackParamUIColor Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutColor != nullptr)
		*OutColor = std::move(Parms.OutColor);
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.ShowPlaceGuide
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             LocationId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Priority                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bResult                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_UIBluePrintFunctionLibrary_C::ShowPlaceGuide(class FName LocationId, int32 Priority, class UObject* __WorldContext, bool* bResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "ShowPlaceGuide");

	Params::BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuide Parms{};

	Parms.LocationId = LocationId;
	Parms.Priority = Priority;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (bResult != nullptr)
		*bResult = Parms.bResult;
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.HidePlaceGuide
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UIBluePrintFunctionLibrary_C::HidePlaceGuide(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "HidePlaceGuide");

	Params::BP_UIBluePrintFunctionLibrary_C_HidePlaceGuide Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.CloseTextWindowDemo
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UIBluePrintFunctionLibrary_C::CloseTextWindowDemo(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "CloseTextWindowDemo");

	Params::BP_UIBluePrintFunctionLibrary_C_CloseTextWindowDemo Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetTextWindowDemo
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USBTextWindowBase*                TextWindowDemo                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UIBluePrintFunctionLibrary_C::GetTextWindowDemo(class UObject* __WorldContext, class USBTextWindowBase** TextWindowDemo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "GetTextWindowDemo");

	Params::BP_UIBluePrintFunctionLibrary_C_GetTextWindowDemo Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (TextWindowDemo != nullptr)
		*TextWindowDemo = Parms.TextWindowDemo;
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.ShowPlaceGuideDemo
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InLocationName                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UIBluePrintFunctionLibrary_C::ShowPlaceGuideDemo(class FName InLocationName, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "ShowPlaceGuideDemo");

	Params::BP_UIBluePrintFunctionLibrary_C_ShowPlaceGuideDemo Parms{};

	Parms.InLocationName = InLocationName;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.HidePlaceGuideDemo
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UIBluePrintFunctionLibrary_C::HidePlaceGuideDemo(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "HidePlaceGuideDemo");

	Params::BP_UIBluePrintFunctionLibrary_C_HidePlaceGuideDemo Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetPlayerPotisionName
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Inactive                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           LocationName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           ZoneId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           ContentId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsActiveMap                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             PositionName                                           (Parm, OutParm)

void UBP_UIBluePrintFunctionLibrary_C::GetPlayerPotisionName(bool Inactive, const class FString& LocationName, const class FString& ZoneId, const class FString& ContentId, class UObject* __WorldContext, bool* IsActiveMap, class FText* PositionName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "GetPlayerPotisionName");

	Params::BP_UIBluePrintFunctionLibrary_C_GetPlayerPotisionName Parms{};

	Parms.Inactive = Inactive;
	Parms.LocationName = std::move(LocationName);
	Parms.ZoneId = std::move(ZoneId);
	Parms.ContentId = std::move(ContentId);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (IsActiveMap != nullptr)
		*IsActiveMap = Parms.IsActiveMap;

	if (PositionName != nullptr)
		*PositionName = std::move(Parms.PositionName);
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.CreateDetailwithSummary
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerProfileMenuDetailData     InDeteailData                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayerProfileSummaryData        RetSummary                                             (Parm, OutParm)

void UBP_UIBluePrintFunctionLibrary_C::CreateDetailwithSummary(const struct FPlayerProfileMenuDetailData& InDeteailData, class UObject* __WorldContext, struct FPlayerProfileSummaryData* RetSummary)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "CreateDetailwithSummary");

	Params::BP_UIBluePrintFunctionLibrary_C_CreateDetailwithSummary Parms{};

	Parms.InDeteailData = std::move(InDeteailData);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (RetSummary != nullptr)
		*RetSummary = std::move(Parms.RetSummary);
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetImagineArtsTypeName
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InImagineArtsTypeNameID                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OutTypeName                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UBP_UIBluePrintFunctionLibrary_C::GetImagineArtsTypeName(const class FName InImagineArtsTypeNameID, class UObject* __WorldContext, class FString* OutTypeName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "GetImagineArtsTypeName");

	Params::BP_UIBluePrintFunctionLibrary_C_GetImagineArtsTypeName Parms{};

	Parms.InImagineArtsTypeNameID = InImagineArtsTypeNameID;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutTypeName != nullptr)
		*OutTypeName = std::move(Parms.OutTypeName);
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetPlayerGender
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBCharacterGender                      OutGender                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UIBluePrintFunctionLibrary_C::GetPlayerGender(class UObject* __WorldContext, ESBCharacterGender* OutGender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "GetPlayerGender");

	Params::BP_UIBluePrintFunctionLibrary_C_GetPlayerGender Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutGender != nullptr)
		*OutGender = Parms.OutGender;
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetAdventurerComponent
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USBPlayerAdventurerComponent*     PlayerAdventurerComponent                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UIBluePrintFunctionLibrary_C::GetAdventurerComponent(class UObject* __WorldContext, class USBPlayerAdventurerComponent** PlayerAdventurerComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "GetAdventurerComponent");

	Params::BP_UIBluePrintFunctionLibrary_C_GetAdventurerComponent Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (PlayerAdventurerComponent != nullptr)
		*PlayerAdventurerComponent = Parms.PlayerAdventurerComponent;
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetImagineIconTexture
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsLarge                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>        ReturnValue                                            (Parm, OutParm, ReturnParm, HasGetValueTypeHash)

TSoftObjectPtr<class UTexture2D> UBP_UIBluePrintFunctionLibrary_C::GetImagineIconTexture(int32 ID, bool IsLarge, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "GetImagineIconTexture");

	Params::BP_UIBluePrintFunctionLibrary_C_GetImagineIconTexture Parms{};

	Parms.ID = ID;
	Parms.IsLarge = IsLarge;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetTokenIconTexture
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TokenID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>        Texture                                                (Parm, OutParm, HasGetValueTypeHash)

void UBP_UIBluePrintFunctionLibrary_C::GetTokenIconTexture(int32 TokenID, class UObject* __WorldContext, TSoftObjectPtr<class UTexture2D>* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "GetTokenIconTexture");

	Params::BP_UIBluePrintFunctionLibrary_C_GetTokenIconTexture Parms{};

	Parms.TokenID = TokenID;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Texture != nullptr)
		*Texture = Parms.Texture;
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetTokenIconTextureL
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TokenID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>        Texture                                                (Parm, OutParm, HasGetValueTypeHash)

void UBP_UIBluePrintFunctionLibrary_C::GetTokenIconTextureL(int32 TokenID, class UObject* __WorldContext, TSoftObjectPtr<class UTexture2D>* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "GetTokenIconTextureL");

	Params::BP_UIBluePrintFunctionLibrary_C_GetTokenIconTextureL Parms{};

	Parms.TokenID = TokenID;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Texture != nullptr)
		*Texture = Parms.Texture;
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.CalculateDiscountValue
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InDiscountRate                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OutDiscountValue                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UIBluePrintFunctionLibrary_C::CalculateDiscountValue(int32 InValue, float InDiscountRate, class UObject* __WorldContext, int32* OutDiscountValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "CalculateDiscountValue");

	Params::BP_UIBluePrintFunctionLibrary_C_CalculateDiscountValue Parms{};

	Parms.InValue = InValue;
	Parms.InDiscountRate = InDiscountRate;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutDiscountValue != nullptr)
		*OutDiscountValue = Parms.OutDiscountValue;
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetLiquidMemoryFillingColor
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   InLiquidMemoryId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     OutFillingColor                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UIBluePrintFunctionLibrary_C::GetLiquidMemoryFillingColor(int32 InLiquidMemoryId, class UObject* __WorldContext, struct FLinearColor* OutFillingColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "GetLiquidMemoryFillingColor");

	Params::BP_UIBluePrintFunctionLibrary_C_GetLiquidMemoryFillingColor Parms{};

	Parms.InLiquidMemoryId = InLiquidMemoryId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutFillingColor != nullptr)
		*OutFillingColor = std::move(Parms.OutFillingColor);
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.ChangeFontSize
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*                       InTextBlock                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Infontsize                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UIBluePrintFunctionLibrary_C::ChangeFontSize(class UTextBlock* InTextBlock, int32 Infontsize, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "ChangeFontSize");

	Params::BP_UIBluePrintFunctionLibrary_C_ChangeFontSize Parms{};

	Parms.InTextBlock = InTextBlock;
	Parms.Infontsize = Infontsize;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetViewPortCalcOffset
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        Position                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UIBluePrintFunctionLibrary_C::GetViewPortCalcOffset(class UObject* __WorldContext, struct FVector2D* Position)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "GetViewPortCalcOffset");

	Params::BP_UIBluePrintFunctionLibrary_C_GetViewPortCalcOffset Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Position != nullptr)
		*Position = std::move(Parms.Position);
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetProtectorCategoryTextId
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EProtectorCategory                      InProtectorCategory                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OutTextId                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UIBluePrintFunctionLibrary_C::GetProtectorCategoryTextId(EProtectorCategory InProtectorCategory, class UObject* __WorldContext, int32* OutTextId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "GetProtectorCategoryTextId");

	Params::BP_UIBluePrintFunctionLibrary_C_GetProtectorCategoryTextId Parms{};

	Parms.InProtectorCategory = InProtectorCategory;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutTextId != nullptr)
		*OutTextId = Parms.OutTextId;
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetImagineFullTexture
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InId                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>        ReturnValue                                            (Parm, OutParm, ReturnParm, HasGetValueTypeHash)

TSoftObjectPtr<class UTexture2D> UBP_UIBluePrintFunctionLibrary_C::GetImagineFullTexture(const int32 InId, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "GetImagineFullTexture");

	Params::BP_UIBluePrintFunctionLibrary_C_GetImagineFullTexture Parms{};

	Parms.InId = InId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetWeaponItemDataByUniqueId
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           InUniqueId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class USBOwnItemListContainer*          InOwnItemListContainer                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutIsValid                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBWeaponItemData                OutWeaponItemData                                      (Parm, OutParm)

void UBP_UIBluePrintFunctionLibrary_C::GetWeaponItemDataByUniqueId(const class FString& InUniqueId, class USBOwnItemListContainer* InOwnItemListContainer, class UObject* __WorldContext, bool* OutIsValid, struct FSBWeaponItemData* OutWeaponItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "GetWeaponItemDataByUniqueId");

	Params::BP_UIBluePrintFunctionLibrary_C_GetWeaponItemDataByUniqueId Parms{};

	Parms.InUniqueId = std::move(InUniqueId);
	Parms.InOwnItemListContainer = InOwnItemListContainer;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutIsValid != nullptr)
		*OutIsValid = Parms.OutIsValid;

	if (OutWeaponItemData != nullptr)
		*OutWeaponItemData = std::move(Parms.OutWeaponItemData);
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetWeaponStickerInfoByItemId
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   InItemID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutIsWeaponSticker                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAppearanceWeaponSticker         OutWeaponStickerInfo                                   (Parm, OutParm, NoDestructor)

void UBP_UIBluePrintFunctionLibrary_C::GetWeaponStickerInfoByItemId(int32 InItemID, class UObject* __WorldContext, bool* OutIsWeaponSticker, struct FAppearanceWeaponSticker* OutWeaponStickerInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "GetWeaponStickerInfoByItemId");

	Params::BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerInfoByItemId Parms{};

	Parms.InItemID = InItemID;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutIsWeaponSticker != nullptr)
		*OutIsWeaponSticker = Parms.OutIsWeaponSticker;

	if (OutWeaponStickerInfo != nullptr)
		*OutWeaponStickerInfo = std::move(Parms.OutWeaponStickerInfo);
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetWeaponStickerRemoveItemInfoByItemId
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   InItemID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutIsWeaponStickerRemoveItem                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAppearanceWeaponSticker         OutWeaponStickerRemoveItemInfo                         (Parm, OutParm, NoDestructor)

void UBP_UIBluePrintFunctionLibrary_C::GetWeaponStickerRemoveItemInfoByItemId(int32 InItemID, class UObject* __WorldContext, bool* OutIsWeaponStickerRemoveItem, struct FAppearanceWeaponSticker* OutWeaponStickerRemoveItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "GetWeaponStickerRemoveItemInfoByItemId");

	Params::BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfoByItemId Parms{};

	Parms.InItemID = InItemID;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutIsWeaponStickerRemoveItem != nullptr)
		*OutIsWeaponStickerRemoveItem = Parms.OutIsWeaponStickerRemoveItem;

	if (OutWeaponStickerRemoveItemInfo != nullptr)
		*OutWeaponStickerRemoveItemInfo = std::move(Parms.OutWeaponStickerRemoveItemInfo);
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetWeaponStickerRemoveItemAmount
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USBOwnItemListContainer*          InOwnItemListContainer                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutHaveWeaponStickerRemoveItem                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   OutItemAmount                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UIBluePrintFunctionLibrary_C::GetWeaponStickerRemoveItemAmount(class USBOwnItemListContainer* InOwnItemListContainer, class UObject* __WorldContext, bool* OutHaveWeaponStickerRemoveItem, int32* OutItemAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "GetWeaponStickerRemoveItemAmount");

	Params::BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemAmount Parms{};

	Parms.InOwnItemListContainer = InOwnItemListContainer;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutHaveWeaponStickerRemoveItem != nullptr)
		*OutHaveWeaponStickerRemoveItem = Parms.OutHaveWeaponStickerRemoveItem;

	if (OutItemAmount != nullptr)
		*OutItemAmount = Parms.OutItemAmount;
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetWeaponStickerRemoveItemInfo
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USBOwnItemListContainer*          InOwnItemListContainer                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutHaveWeaponStickerRemoveItem                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FOwnItemInfo                     OutOwnItemInfo                                         (Parm, OutParm)

void UBP_UIBluePrintFunctionLibrary_C::GetWeaponStickerRemoveItemInfo(class USBOwnItemListContainer* InOwnItemListContainer, class UObject* __WorldContext, bool* OutHaveWeaponStickerRemoveItem, struct FOwnItemInfo* OutOwnItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "GetWeaponStickerRemoveItemInfo");

	Params::BP_UIBluePrintFunctionLibrary_C_GetWeaponStickerRemoveItemInfo Parms{};

	Parms.InOwnItemListContainer = InOwnItemListContainer;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutHaveWeaponStickerRemoveItem != nullptr)
		*OutHaveWeaponStickerRemoveItem = Parms.OutHaveWeaponStickerRemoveItem;

	if (OutOwnItemInfo != nullptr)
		*OutOwnItemInfo = std::move(Parms.OutOwnItemInfo);
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetCharaPartsLocationFromProtectorCategory
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EProtectorCategory                      InProtectorCategory                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutIsValid                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ECharaPartsLocation                     OutCharaPartsLocation                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UIBluePrintFunctionLibrary_C::GetCharaPartsLocationFromProtectorCategory(EProtectorCategory InProtectorCategory, class UObject* __WorldContext, bool* OutIsValid, ECharaPartsLocation* OutCharaPartsLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "GetCharaPartsLocationFromProtectorCategory");

	Params::BP_UIBluePrintFunctionLibrary_C_GetCharaPartsLocationFromProtectorCategory Parms{};

	Parms.InProtectorCategory = InProtectorCategory;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutIsValid != nullptr)
		*OutIsValid = Parms.OutIsValid;

	if (OutCharaPartsLocation != nullptr)
		*OutCharaPartsLocation = Parms.OutCharaPartsLocation;
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetCharaPartsDBFromProtectorCategory
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EProtectorCategory                      InProtectorCategory                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutIsValid                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDataTable*                       OutCharaPartsDB                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UIBluePrintFunctionLibrary_C::GetCharaPartsDBFromProtectorCategory(EProtectorCategory InProtectorCategory, class UObject* __WorldContext, bool* OutIsValid, class UDataTable** OutCharaPartsDB)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "GetCharaPartsDBFromProtectorCategory");

	Params::BP_UIBluePrintFunctionLibrary_C_GetCharaPartsDBFromProtectorCategory Parms{};

	Parms.InProtectorCategory = InProtectorCategory;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutIsValid != nullptr)
		*OutIsValid = Parms.OutIsValid;

	if (OutCharaPartsDB != nullptr)
		*OutCharaPartsDB = Parms.OutCharaPartsDB;
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.ShowExpiredItemNoticeSystemMessage
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsExpiredWeaponStickerUsedOnEquippedWeapon           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   InExpiredWeaponStickerUsedWeaponId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsExpiredEquipmentIncluded                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBExpiredEquipmentData          InExpiredEquipmentData                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutIsMessageShowed                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_UIBluePrintFunctionLibrary_C::ShowExpiredItemNoticeSystemMessage(bool InIsExpiredWeaponStickerUsedOnEquippedWeapon, int32 InExpiredWeaponStickerUsedWeaponId, bool InIsExpiredEquipmentIncluded, const struct FSBExpiredEquipmentData& InExpiredEquipmentData, class UObject* __WorldContext, bool* OutIsMessageShowed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "ShowExpiredItemNoticeSystemMessage");

	Params::BP_UIBluePrintFunctionLibrary_C_ShowExpiredItemNoticeSystemMessage Parms{};

	Parms.InIsExpiredWeaponStickerUsedOnEquippedWeapon = InIsExpiredWeaponStickerUsedOnEquippedWeapon;
	Parms.InExpiredWeaponStickerUsedWeaponId = InExpiredWeaponStickerUsedWeaponId;
	Parms.InIsExpiredEquipmentIncluded = InIsExpiredEquipmentIncluded;
	Parms.InExpiredEquipmentData = std::move(InExpiredEquipmentData);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutIsMessageShowed != nullptr)
		*OutIsMessageShowed = Parms.OutIsMessageShowed;
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.SetCharaCostumePartsToNakedByDeletedCostumeData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBCharaCreateComponent*          InCharaCreateComponent                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSBDeletedCostumeData>    InDeletedCostumeDatas                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutIsCharaPartsSettedToNaked                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_UIBluePrintFunctionLibrary_C::SetCharaCostumePartsToNakedByDeletedCostumeData(class USBCharaCreateComponent* InCharaCreateComponent, TArray<struct FSBDeletedCostumeData>& InDeletedCostumeDatas, class UObject* __WorldContext, bool* OutIsCharaPartsSettedToNaked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "SetCharaCostumePartsToNakedByDeletedCostumeData");

	Params::BP_UIBluePrintFunctionLibrary_C_SetCharaCostumePartsToNakedByDeletedCostumeData Parms{};

	Parms.InCharaCreateComponent = InCharaCreateComponent;
	Parms.InDeletedCostumeDatas = std::move(InDeletedCostumeDatas);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	InDeletedCostumeDatas = std::move(Parms.InDeletedCostumeDatas);

	if (OutIsCharaPartsSettedToNaked != nullptr)
		*OutIsCharaPartsSettedToNaked = Parms.OutIsCharaPartsSettedToNaked;
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetPassiveImagineEmptyIconTexture
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBPlayerPassiveImagineSlotType         InSlotType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>        OutIconTexture                                         (Parm, OutParm, HasGetValueTypeHash)

void UBP_UIBluePrintFunctionLibrary_C::GetPassiveImagineEmptyIconTexture(ESBPlayerPassiveImagineSlotType InSlotType, class UObject* __WorldContext, TSoftObjectPtr<class UTexture2D>* OutIconTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "GetPassiveImagineEmptyIconTexture");

	Params::BP_UIBluePrintFunctionLibrary_C_GetPassiveImagineEmptyIconTexture Parms{};

	Parms.InSlotType = InSlotType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutIconTexture != nullptr)
		*OutIconTexture = Parms.OutIconTexture;
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetElementNameFromAttribute
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBAttribute                            InAttribute                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OutElementName                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UBP_UIBluePrintFunctionLibrary_C::GetElementNameFromAttribute(ESBAttribute InAttribute, class UObject* __WorldContext, class FString* OutElementName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "GetElementNameFromAttribute");

	Params::BP_UIBluePrintFunctionLibrary_C_GetElementNameFromAttribute Parms{};

	Parms.InAttribute = InAttribute;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutElementName != nullptr)
		*OutElementName = std::move(Parms.OutElementName);
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetImagineArtsName
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             InImagineArtsNameId                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OutArtsName                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UBP_UIBluePrintFunctionLibrary_C::GetImagineArtsName(const class FName InImagineArtsNameId, class UObject* __WorldContext, class FString* OutArtsName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "GetImagineArtsName");

	Params::BP_UIBluePrintFunctionLibrary_C_GetImagineArtsName Parms{};

	Parms.InImagineArtsNameId = InImagineArtsNameId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutArtsName != nullptr)
		*OutArtsName = std::move(Parms.OutArtsName);
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.CheckWeaponDecay
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           InWeaponUniqueId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FSBDecayedWeaponData>     InDecayedWeaponDatas                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutIsWeaponDecayed                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_UIBluePrintFunctionLibrary_C::CheckWeaponDecay(const class FString& InWeaponUniqueId, TArray<struct FSBDecayedWeaponData>& InDecayedWeaponDatas, class UObject* __WorldContext, bool* OutIsWeaponDecayed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "CheckWeaponDecay");

	Params::BP_UIBluePrintFunctionLibrary_C_CheckWeaponDecay Parms{};

	Parms.InWeaponUniqueId = std::move(InWeaponUniqueId);
	Parms.InDecayedWeaponDatas = std::move(InDecayedWeaponDatas);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	InDecayedWeaponDatas = std::move(Parms.InDecayedWeaponDatas);

	if (OutIsWeaponDecayed != nullptr)
		*OutIsWeaponDecayed = Parms.OutIsWeaponDecayed;
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetEquipmentStatusDiffRequestRetCode
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           InCurrEquipmentUniqueId                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           InNewEquipmentUniqueId                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OutRetCode                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UIBluePrintFunctionLibrary_C::GetEquipmentStatusDiffRequestRetCode(const class FString& InCurrEquipmentUniqueId, const class FString& InNewEquipmentUniqueId, class UObject* __WorldContext, int32* OutRetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "GetEquipmentStatusDiffRequestRetCode");

	Params::BP_UIBluePrintFunctionLibrary_C_GetEquipmentStatusDiffRequestRetCode Parms{};

	Parms.InCurrEquipmentUniqueId = std::move(InCurrEquipmentUniqueId);
	Parms.InNewEquipmentUniqueId = std::move(InNewEquipmentUniqueId);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutRetCode != nullptr)
		*OutRetCode = Parms.OutRetCode;
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetWeaponClassTypeByUniqueId
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           InWeaponUniqueId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class USBOwnItemListContainer*          InEquipmentBag                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USBOwnItemListContainer*          InCharacterStorage                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutIsValid                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ESBClassType                            OutClassType                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UIBluePrintFunctionLibrary_C::GetWeaponClassTypeByUniqueId(const class FString& InWeaponUniqueId, class USBOwnItemListContainer* InEquipmentBag, class USBOwnItemListContainer* InCharacterStorage, class UObject* __WorldContext, bool* OutIsValid, ESBClassType* OutClassType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "GetWeaponClassTypeByUniqueId");

	Params::BP_UIBluePrintFunctionLibrary_C_GetWeaponClassTypeByUniqueId Parms{};

	Parms.InWeaponUniqueId = std::move(InWeaponUniqueId);
	Parms.InEquipmentBag = InEquipmentBag;
	Parms.InCharacterStorage = InCharacterStorage;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutIsValid != nullptr)
		*OutIsValid = Parms.OutIsValid;

	if (OutClassType != nullptr)
		*OutClassType = Parms.OutClassType;
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.SetImageColorMulti
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UImage*>                   Images                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UIBluePrintFunctionLibrary_C::SetImageColorMulti(const struct FLinearColor& Color, TArray<class UImage*>& Images, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "SetImageColorMulti");

	Params::BP_UIBluePrintFunctionLibrary_C_SetImageColorMulti Parms{};

	Parms.Color = std::move(Color);
	Parms.Images = std::move(Images);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Images = std::move(Parms.Images);
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.SetTextColorMulti
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UTextBlock*>               TextList                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UIBluePrintFunctionLibrary_C::SetTextColorMulti(const struct FLinearColor& Color, TArray<class UTextBlock*>& TextList, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "SetTextColorMulti");

	Params::BP_UIBluePrintFunctionLibrary_C_SetTextColorMulti Parms{};

	Parms.Color = std::move(Color);
	Parms.TextList = std::move(TextList);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	TextList = std::move(Parms.TextList);
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetTokenUseText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             TextId                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   TokenID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   UseNum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UBP_UIBluePrintFunctionLibrary_C::GetTokenUseText(const class FName TextId, int32 TokenID, int32 UseNum, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "GetTokenUseText");

	Params::BP_UIBluePrintFunctionLibrary_C_GetTokenUseText Parms{};

	Parms.TextId = TextId;
	Parms.TokenID = TokenID;
	Parms.UseNum = UseNum;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetTokenUseText2
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             TextId                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Token1ID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Token1Cost                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Token2ID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Token2Cost                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UBP_UIBluePrintFunctionLibrary_C::GetTokenUseText2(const class FName TextId, int32 Token1ID, int32 Token1Cost, int32 Token2ID, int32 Token2Cost, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "GetTokenUseText2");

	Params::BP_UIBluePrintFunctionLibrary_C_GetTokenUseText2 Parms{};

	Parms.TextId = TextId;
	Parms.Token1ID = Token1ID;
	Parms.Token1Cost = Token1Cost;
	Parms.Token2ID = Token2ID;
	Parms.Token2Cost = Token2Cost;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetTokenUseText_Base
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             TextId                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   TokenID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   HaveNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   UseNum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UBP_UIBluePrintFunctionLibrary_C::GetTokenUseText_Base(const class FName TextId, int32 TokenID, int32 HaveNum, int32 UseNum, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "GetTokenUseText_Base");

	Params::BP_UIBluePrintFunctionLibrary_C_GetTokenUseText_Base Parms{};

	Parms.TextId = TextId;
	Parms.TokenID = TokenID;
	Parms.HaveNum = HaveNum;
	Parms.UseNum = UseNum;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.BlancToSpace
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Text                                                   (Parm, OutParm)

void UBP_UIBluePrintFunctionLibrary_C::BlancToSpace(const class FText& InText, class UObject* __WorldContext, class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "BlancToSpace");

	Params::BP_UIBluePrintFunctionLibrary_C_BlancToSpace Parms{};

	Parms.InText = std::move(InText);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = std::move(Parms.Text);
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetRealGoodsIcon
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>        Texture                                                (Parm, OutParm, HasGetValueTypeHash)

void UBP_UIBluePrintFunctionLibrary_C::GetRealGoodsIcon(class FName ID, class UObject* __WorldContext, TSoftObjectPtr<class UTexture2D>* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "GetRealGoodsIcon");

	Params::BP_UIBluePrintFunctionLibrary_C_GetRealGoodsIcon Parms{};

	Parms.ID = ID;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Texture != nullptr)
		*Texture = Parms.Texture;
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetRealGoodsThumbnail
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>        Texture                                                (Parm, OutParm, HasGetValueTypeHash)

void UBP_UIBluePrintFunctionLibrary_C::GetRealGoodsThumbnail(class FName ID, class UObject* __WorldContext, TSoftObjectPtr<class UTexture2D>* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "GetRealGoodsThumbnail");

	Params::BP_UIBluePrintFunctionLibrary_C_GetRealGoodsThumbnail Parms{};

	Parms.ID = ID;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Texture != nullptr)
		*Texture = Parms.Texture;
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.GetPlayerClassType
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBClassType                            ClassType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UIBluePrintFunctionLibrary_C::GetPlayerClassType(class UObject* __WorldContext, ESBClassType* ClassType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "GetPlayerClassType");

	Params::BP_UIBluePrintFunctionLibrary_C_GetPlayerClassType Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (ClassType != nullptr)
		*ClassType = Parms.ClassType;
}


// Function BP_UIBluePrintFunctionLibrary.BP_UIBluePrintFunctionLibrary_C.Get Gasha Demo Spawn Transform
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       OutTransform                                           (Parm, OutParm, IsPlainOldData, NoDestructor)

void UBP_UIBluePrintFunctionLibrary_C::Get_Gasha_Demo_Spawn_Transform(class UObject* __WorldContext, struct FTransform* OutTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UIBluePrintFunctionLibrary_C", "Get Gasha Demo Spawn Transform");

	Params::BP_UIBluePrintFunctionLibrary_C_Get_Gasha_Demo_Spawn_Transform Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutTransform != nullptr)
		*OutTransform = std::move(Parms.OutTransform);
}

}

