#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBP_UI_CharaCreateFunctionLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void GetHairGradationRangeMinMax(class UObject* __WorldContext, int32_t* OutMin, int32_t* OutMax);
		void AdjustSceneCaptureTransform(class ASBCreationCharacter* PlayerIndex, const struct FVector& OffsetLocation, const struct FRotator& OffsetRotator, class ASceneCapture2D* SceneCapture, bool IsFollowRotator, class UObject* __WorldContext);
		void RoundSliderValueToNearPitch(float InSliderValue, float InSliderRange, class UObject* __WorldContext, float* OutSliderValue);
		void GetFacialMarksColorHueMax(class UObject* __WorldContext, int32_t* OutHueMax);
		void GetFacialMarksColor(int32_t InHue, int32_t InHueMax, int32_t InValue, class UObject* __WorldContext, bool* OutIsValid, struct FSBCharaCreateColor* OutColor);
		void GetSkinColorHueMax(class UObject* __WorldContext, int32_t* OutHueMax);
		void GetSkinColor(int32_t InHue, int32_t InHueMax, int32_t InValue, class UObject* __WorldContext, bool* OutIsValid, struct FSBCharaCreateColor* OutSkinColor);
		void GetClassSkillMoviePath(class UObject* __WorldContext, class FString* OutPath);
		void CheckIfPlayerHasAestheTicket(int32_t InTicketTokenId, class UObject* __WorldContext, bool* OutHasTicket);
		void GetAestheCourseIconTexture(int32_t InCourseId, class UObject* __WorldContext);
		void GetAestheShopTopMenuItems(E_AestheShop_TicketType InTicketType, class UObject* __WorldContext, TArray<E_CharaCreateTopMenuItems_CharaDetail>* OutTopMenuItems);
		void GetAesthePaidPlanSubscribedFromGameModeOption_1(const class FString& InOptionsString, class UObject* __WorldContext, bool* bOutIsPaidPlanSubscribed);
		void GetAestheStartGenderFromGameModeOption(const class FString& InOptionsString, class UObject* __WorldContext, ESBCharacterGender* OutGender);
		void GetIfPlayerHasAestheTicketFromGameModeOption(const class FString& InOptionsString, class UObject* __WorldContext, bool* HasTicket);
		void GetAestheTicketUseNumFromGameModeOption(const class FString& InOptionsString, class UObject* __WorldContext, int32_t* OutUseTicketNum);
		void GetAestheTicketTokenIdFromGameModeOption(const class FString& InOptionsString, class UObject* __WorldContext, int32_t* OutTIcketTokenId);
		void GetAestheCourseIdFromGameModeOption(const class FString& InOptionsString, class UObject* __WorldContext, int32_t* OutTIcketTokenId);
		void GetCharaCreateModeFromGameModeOption(const class FString& InOptionsString, class UObject* __WorldContext, E_CharaCreate_Mode* OutMode);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
