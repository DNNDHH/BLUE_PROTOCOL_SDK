#pragma once

 

// Package: BP_UI_CharaCreateFunctionLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "E_AestheShop_TicketType_structs.hpp"
#include "E_CharaCreateTopMenuItems_CharaDetail_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "E_CharaCreate_Mode_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBP_UI_CharaCreateFunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void GetCharaCreateModeFromGameModeOption(const class FString& InOptionsString, class UObject* __WorldContext, E_CharaCreate_Mode* OutMode);
	static void GetAestheTicketTokenIdFromGameModeOption(const class FString& InOptionsString, class UObject* __WorldContext, int32* OutTIcketTokenId);
	static void GetAestheTicketUseNumFromGameModeOption(const class FString& InOptionsString, class UObject* __WorldContext, int32* OutUseTicketNum);
	static void GetIfPlayerHasAestheTicketFromGameModeOption(const class FString& InOptionsString, class UObject* __WorldContext, bool* HasTicket);
	static void GetAestheStartGenderFromGameModeOption(const class FString& InOptionsString, class UObject* __WorldContext, ESBCharacterGender* OutGender);
	static void GetAestheShopTopMenuItems(E_AestheShop_TicketType InTicketType, class UObject* __WorldContext, TArray<E_CharaCreateTopMenuItems_CharaDetail>* OutTopMenuItems);
	static void GetAestheCourseIconTexture(int32 InCourseId, class UObject* __WorldContext, TSoftObjectPtr<class UTexture2D>* OutIconTexture);
	static void CheckIfPlayerHasAestheTicket(int32 InTicketTokenId, class UObject* __WorldContext, bool* OutHasTicket);
	static void GetClassSkillMoviePath(class UObject* __WorldContext, class FString* OutPath);
	static void GetSkinColor(int32 InHue, int32 InHueMax, int32 InValue, class UObject* __WorldContext, bool* OutIsValid, struct FSBCharaCreateColor* OutSkinColor);
	static void GetSkinColorHueMax(class UObject* __WorldContext, int32* OutHueMax);
	static void GetFacialMarksColor(int32 InHue, int32 InHueMax, int32 InValue, class UObject* __WorldContext, bool* OutIsValid, struct FSBCharaCreateColor* OutColor);
	static void GetFacialMarksColorHueMax(class UObject* __WorldContext, int32* OutHueMax);
	static void RoundSliderValueToNearPitch(float InSliderValue, float InSliderRange, class UObject* __WorldContext, float* OutSliderValue);
	static void AdjustSceneCaptureTransform(class ASBCreationCharacter* PlayerIndex, const struct FVector& OffsetLocation, const struct FRotator& OffsetRotator, class ASceneCapture2D* SceneCapture, bool IsFollowRotator, class UObject* __WorldContext);
	static void GetHairGradationRangeMinMax(class UObject* __WorldContext, int32* OutMin, int32* OutMax);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_UI_CharaCreateFunctionLibrary_C">();
	}
	static class UBP_UI_CharaCreateFunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_UI_CharaCreateFunctionLibrary_C>();
	}
};
static_assert(alignof(UBP_UI_CharaCreateFunctionLibrary_C) == 0x000008, "Wrong alignment on UBP_UI_CharaCreateFunctionLibrary_C");
static_assert(sizeof(UBP_UI_CharaCreateFunctionLibrary_C) == 0x000028, "Wrong size on UBP_UI_CharaCreateFunctionLibrary_C");

}

