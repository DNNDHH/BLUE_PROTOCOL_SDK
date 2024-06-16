#pragma once

 

// Package: BP_UI_CharaCreateFunctionLibrary

#include "Basic.hpp"

#include "BP_UI_CharaCreateFunctionLibrary_classes.hpp"
#include "BP_UI_CharaCreateFunctionLibrary_parameters.hpp"


namespace SDK
{

// Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetCharaCreateModeFromGameModeOption
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           InOptionsString                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_CharaCreate_Mode                      OutMode                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_CharaCreateFunctionLibrary_C::GetCharaCreateModeFromGameModeOption(const class FString& InOptionsString, class UObject* __WorldContext, E_CharaCreate_Mode* OutMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UI_CharaCreateFunctionLibrary_C", "GetCharaCreateModeFromGameModeOption");

	Params::BP_UI_CharaCreateFunctionLibrary_C_GetCharaCreateModeFromGameModeOption Parms{};

	Parms.InOptionsString = std::move(InOptionsString);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutMode != nullptr)
		*OutMode = Parms.OutMode;
}


// Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetAestheTicketTokenIdFromGameModeOption
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           InOptionsString                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OutTIcketTokenId                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_CharaCreateFunctionLibrary_C::GetAestheTicketTokenIdFromGameModeOption(const class FString& InOptionsString, class UObject* __WorldContext, int32* OutTIcketTokenId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UI_CharaCreateFunctionLibrary_C", "GetAestheTicketTokenIdFromGameModeOption");

	Params::BP_UI_CharaCreateFunctionLibrary_C_GetAestheTicketTokenIdFromGameModeOption Parms{};

	Parms.InOptionsString = std::move(InOptionsString);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutTIcketTokenId != nullptr)
		*OutTIcketTokenId = Parms.OutTIcketTokenId;
}


// Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetAestheTicketUseNumFromGameModeOption
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           InOptionsString                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OutUseTicketNum                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_CharaCreateFunctionLibrary_C::GetAestheTicketUseNumFromGameModeOption(const class FString& InOptionsString, class UObject* __WorldContext, int32* OutUseTicketNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UI_CharaCreateFunctionLibrary_C", "GetAestheTicketUseNumFromGameModeOption");

	Params::BP_UI_CharaCreateFunctionLibrary_C_GetAestheTicketUseNumFromGameModeOption Parms{};

	Parms.InOptionsString = std::move(InOptionsString);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutUseTicketNum != nullptr)
		*OutUseTicketNum = Parms.OutUseTicketNum;
}


// Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetIfPlayerHasAestheTicketFromGameModeOption
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           InOptionsString                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    HasTicket                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_UI_CharaCreateFunctionLibrary_C::GetIfPlayerHasAestheTicketFromGameModeOption(const class FString& InOptionsString, class UObject* __WorldContext, bool* HasTicket)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UI_CharaCreateFunctionLibrary_C", "GetIfPlayerHasAestheTicketFromGameModeOption");

	Params::BP_UI_CharaCreateFunctionLibrary_C_GetIfPlayerHasAestheTicketFromGameModeOption Parms{};

	Parms.InOptionsString = std::move(InOptionsString);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (HasTicket != nullptr)
		*HasTicket = Parms.HasTicket;
}


// Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetAestheStartGenderFromGameModeOption
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           InOptionsString                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBCharacterGender                      OutGender                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_CharaCreateFunctionLibrary_C::GetAestheStartGenderFromGameModeOption(const class FString& InOptionsString, class UObject* __WorldContext, ESBCharacterGender* OutGender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UI_CharaCreateFunctionLibrary_C", "GetAestheStartGenderFromGameModeOption");

	Params::BP_UI_CharaCreateFunctionLibrary_C_GetAestheStartGenderFromGameModeOption Parms{};

	Parms.InOptionsString = std::move(InOptionsString);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutGender != nullptr)
		*OutGender = Parms.OutGender;
}


// Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetAestheShopTopMenuItems
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_AestheShop_TicketType                 InTicketType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<E_CharaCreateTopMenuItems_CharaDetail>OutTopMenuItems                                        (Parm, OutParm)

void UBP_UI_CharaCreateFunctionLibrary_C::GetAestheShopTopMenuItems(E_AestheShop_TicketType InTicketType, class UObject* __WorldContext, TArray<E_CharaCreateTopMenuItems_CharaDetail>* OutTopMenuItems)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UI_CharaCreateFunctionLibrary_C", "GetAestheShopTopMenuItems");

	Params::BP_UI_CharaCreateFunctionLibrary_C_GetAestheShopTopMenuItems Parms{};

	Parms.InTicketType = InTicketType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutTopMenuItems != nullptr)
		*OutTopMenuItems = std::move(Parms.OutTopMenuItems);
}


// Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetAestheCourseIconTexture
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   InCourseId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>        OutIconTexture                                         (Parm, OutParm, HasGetValueTypeHash)

void UBP_UI_CharaCreateFunctionLibrary_C::GetAestheCourseIconTexture(int32 InCourseId, class UObject* __WorldContext, TSoftObjectPtr<class UTexture2D>* OutIconTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UI_CharaCreateFunctionLibrary_C", "GetAestheCourseIconTexture");

	Params::BP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIconTexture Parms{};

	Parms.InCourseId = InCourseId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutIconTexture != nullptr)
		*OutIconTexture = Parms.OutIconTexture;
}


// Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.CheckIfPlayerHasAestheTicket
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   InTicketTokenId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutHasTicket                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_UI_CharaCreateFunctionLibrary_C::CheckIfPlayerHasAestheTicket(int32 InTicketTokenId, class UObject* __WorldContext, bool* OutHasTicket)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UI_CharaCreateFunctionLibrary_C", "CheckIfPlayerHasAestheTicket");

	Params::BP_UI_CharaCreateFunctionLibrary_C_CheckIfPlayerHasAestheTicket Parms{};

	Parms.InTicketTokenId = InTicketTokenId;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutHasTicket != nullptr)
		*OutHasTicket = Parms.OutHasTicket;
}


// Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetClassSkillMoviePath
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OutPath                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UBP_UI_CharaCreateFunctionLibrary_C::GetClassSkillMoviePath(class UObject* __WorldContext, class FString* OutPath)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UI_CharaCreateFunctionLibrary_C", "GetClassSkillMoviePath");

	Params::BP_UI_CharaCreateFunctionLibrary_C_GetClassSkillMoviePath Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutPath != nullptr)
		*OutPath = std::move(Parms.OutPath);
}


// Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetSkinColor
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   InHue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InHueMax                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutIsValid                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBCharaCreateColor              OutSkinColor                                           (Parm, OutParm, NoDestructor)

void UBP_UI_CharaCreateFunctionLibrary_C::GetSkinColor(int32 InHue, int32 InHueMax, int32 InValue, class UObject* __WorldContext, bool* OutIsValid, struct FSBCharaCreateColor* OutSkinColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UI_CharaCreateFunctionLibrary_C", "GetSkinColor");

	Params::BP_UI_CharaCreateFunctionLibrary_C_GetSkinColor Parms{};

	Parms.InHue = InHue;
	Parms.InHueMax = InHueMax;
	Parms.InValue = InValue;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutIsValid != nullptr)
		*OutIsValid = Parms.OutIsValid;

	if (OutSkinColor != nullptr)
		*OutSkinColor = std::move(Parms.OutSkinColor);
}


// Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetSkinColorHueMax
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OutHueMax                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_CharaCreateFunctionLibrary_C::GetSkinColorHueMax(class UObject* __WorldContext, int32* OutHueMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UI_CharaCreateFunctionLibrary_C", "GetSkinColorHueMax");

	Params::BP_UI_CharaCreateFunctionLibrary_C_GetSkinColorHueMax Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutHueMax != nullptr)
		*OutHueMax = Parms.OutHueMax;
}


// Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetFacialMarksColor
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   InHue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InHueMax                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutIsValid                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBCharaCreateColor              OutColor                                               (Parm, OutParm, NoDestructor)

void UBP_UI_CharaCreateFunctionLibrary_C::GetFacialMarksColor(int32 InHue, int32 InHueMax, int32 InValue, class UObject* __WorldContext, bool* OutIsValid, struct FSBCharaCreateColor* OutColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UI_CharaCreateFunctionLibrary_C", "GetFacialMarksColor");

	Params::BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColor Parms{};

	Parms.InHue = InHue;
	Parms.InHueMax = InHueMax;
	Parms.InValue = InValue;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutIsValid != nullptr)
		*OutIsValid = Parms.OutIsValid;

	if (OutColor != nullptr)
		*OutColor = std::move(Parms.OutColor);
}


// Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetFacialMarksColorHueMax
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OutHueMax                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_CharaCreateFunctionLibrary_C::GetFacialMarksColorHueMax(class UObject* __WorldContext, int32* OutHueMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UI_CharaCreateFunctionLibrary_C", "GetFacialMarksColorHueMax");

	Params::BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColorHueMax Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutHueMax != nullptr)
		*OutHueMax = Parms.OutHueMax;
}


// Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.RoundSliderValueToNearPitch
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   InSliderValue                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InSliderRange                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   OutSliderValue                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_CharaCreateFunctionLibrary_C::RoundSliderValueToNearPitch(float InSliderValue, float InSliderRange, class UObject* __WorldContext, float* OutSliderValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UI_CharaCreateFunctionLibrary_C", "RoundSliderValueToNearPitch");

	Params::BP_UI_CharaCreateFunctionLibrary_C_RoundSliderValueToNearPitch Parms{};

	Parms.InSliderValue = InSliderValue;
	Parms.InSliderRange = InSliderRange;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutSliderValue != nullptr)
		*OutSliderValue = Parms.OutSliderValue;
}


// Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.AdjustSceneCaptureTransform
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBCreationCharacter*             PlayerIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          OffsetLocation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         OffsetRotator                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASceneCapture2D*                  SceneCapture                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsFollowRotator                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_CharaCreateFunctionLibrary_C::AdjustSceneCaptureTransform(class ASBCreationCharacter* PlayerIndex, const struct FVector& OffsetLocation, const struct FRotator& OffsetRotator, class ASceneCapture2D* SceneCapture, bool IsFollowRotator, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UI_CharaCreateFunctionLibrary_C", "AdjustSceneCaptureTransform");

	Params::BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform Parms{};

	Parms.PlayerIndex = PlayerIndex;
	Parms.OffsetLocation = std::move(OffsetLocation);
	Parms.OffsetRotator = std::move(OffsetRotator);
	Parms.SceneCapture = SceneCapture;
	Parms.IsFollowRotator = IsFollowRotator;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetHairGradationRangeMinMax
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OutMin                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OutMax                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UI_CharaCreateFunctionLibrary_C::GetHairGradationRangeMinMax(class UObject* __WorldContext, int32* OutMin, int32* OutMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_UI_CharaCreateFunctionLibrary_C", "GetHairGradationRangeMinMax");

	Params::BP_UI_CharaCreateFunctionLibrary_C_GetHairGradationRangeMinMax Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (OutMin != nullptr)
		*OutMin = Parms.OutMin;

	if (OutMax != nullptr)
		*OutMax = Parms.OutMax;
}

}

