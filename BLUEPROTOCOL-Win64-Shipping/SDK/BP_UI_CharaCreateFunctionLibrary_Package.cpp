/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetHairGradationRangeMinMax
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutMin                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutMax                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UI_CharaCreateFunctionLibrary_C::GetHairGradationRangeMinMax(class UObject* __WorldContext, int32_t* OutMin, int32_t* OutMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetHairGradationRangeMinMax");
		
		UBP_UI_CharaCreateFunctionLibrary_C_GetHairGradationRangeMinMax_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMin != nullptr)
			*OutMin = params.OutMin;
		if (OutMax != nullptr)
			*OutMax = params.OutMax;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.AdjustSceneCaptureTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBCreationCharacter*                        PlayerIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     OffsetLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    OffsetRotator                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ASceneCapture2D*                             SceneCapture                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsFollowRotator                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UI_CharaCreateFunctionLibrary_C::AdjustSceneCaptureTransform(class ASBCreationCharacter* PlayerIndex, const struct FVector& OffsetLocation, const struct FRotator& OffsetRotator, class ASceneCapture2D* SceneCapture, bool IsFollowRotator, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.AdjustSceneCaptureTransform");
		
		UBP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform_Params params {};
		params.PlayerIndex = PlayerIndex;
		params.OffsetLocation = OffsetLocation;
		params.OffsetRotator = OffsetRotator;
		params.SceneCapture = SceneCapture;
		params.IsFollowRotator = IsFollowRotator;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.RoundSliderValueToNearPitch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InSliderValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InSliderRange                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OutSliderValue                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UI_CharaCreateFunctionLibrary_C::RoundSliderValueToNearPitch(float InSliderValue, float InSliderRange, class UObject* __WorldContext, float* OutSliderValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.RoundSliderValueToNearPitch");
		
		UBP_UI_CharaCreateFunctionLibrary_C_RoundSliderValueToNearPitch_Params params {};
		params.InSliderValue = InSliderValue;
		params.InSliderRange = InSliderRange;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSliderValue != nullptr)
			*OutSliderValue = params.OutSliderValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetFacialMarksColorHueMax
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutHueMax                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UI_CharaCreateFunctionLibrary_C::GetFacialMarksColorHueMax(class UObject* __WorldContext, int32_t* OutHueMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetFacialMarksColorHueMax");
		
		UBP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColorHueMax_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHueMax != nullptr)
			*OutHueMax = params.OutHueMax;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetFacialMarksColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InHue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InHueMax                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutIsValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBCharaCreateColor                         OutColor                                                   (Parm, OutParm, NoDestructor)
	 */
	void UBP_UI_CharaCreateFunctionLibrary_C::GetFacialMarksColor(int32_t InHue, int32_t InHueMax, int32_t InValue, class UObject* __WorldContext, bool* OutIsValid, struct FSBCharaCreateColor* OutColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetFacialMarksColor");
		
		UBP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColor_Params params {};
		params.InHue = InHue;
		params.InHueMax = InHueMax;
		params.InValue = InValue;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsValid != nullptr)
			*OutIsValid = params.OutIsValid;
		if (OutColor != nullptr)
			*OutColor = params.OutColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetSkinColorHueMax
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutHueMax                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UI_CharaCreateFunctionLibrary_C::GetSkinColorHueMax(class UObject* __WorldContext, int32_t* OutHueMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetSkinColorHueMax");
		
		UBP_UI_CharaCreateFunctionLibrary_C_GetSkinColorHueMax_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHueMax != nullptr)
			*OutHueMax = params.OutHueMax;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetSkinColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InHue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InHueMax                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutIsValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBCharaCreateColor                         OutSkinColor                                               (Parm, OutParm, NoDestructor)
	 */
	void UBP_UI_CharaCreateFunctionLibrary_C::GetSkinColor(int32_t InHue, int32_t InHueMax, int32_t InValue, class UObject* __WorldContext, bool* OutIsValid, struct FSBCharaCreateColor* OutSkinColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetSkinColor");
		
		UBP_UI_CharaCreateFunctionLibrary_C_GetSkinColor_Params params {};
		params.InHue = InHue;
		params.InHueMax = InHueMax;
		params.InValue = InValue;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsValid != nullptr)
			*OutIsValid = params.OutIsValid;
		if (OutSkinColor != nullptr)
			*OutSkinColor = params.OutSkinColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetClassSkillMoviePath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      OutPath                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_UI_CharaCreateFunctionLibrary_C::GetClassSkillMoviePath(class UObject* __WorldContext, class FString* OutPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetClassSkillMoviePath");
		
		UBP_UI_CharaCreateFunctionLibrary_C_GetClassSkillMoviePath_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPath != nullptr)
			*OutPath = params.OutPath;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.CheckIfPlayerHasAestheTicket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InTicketTokenId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutHasTicket                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_UI_CharaCreateFunctionLibrary_C::CheckIfPlayerHasAestheTicket(int32_t InTicketTokenId, class UObject* __WorldContext, bool* OutHasTicket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.CheckIfPlayerHasAestheTicket");
		
		UBP_UI_CharaCreateFunctionLibrary_C_CheckIfPlayerHasAestheTicket_Params params {};
		params.InTicketTokenId = InTicketTokenId;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHasTicket != nullptr)
			*OutHasTicket = params.OutHasTicket;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetAestheCourseIconTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InCourseId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UI_CharaCreateFunctionLibrary_C::GetAestheCourseIconTexture(int32_t InCourseId, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetAestheCourseIconTexture");
		
		UBP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIconTexture_Params params {};
		params.InCourseId = InCourseId;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetAestheShopTopMenuItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_AestheShop_TicketType                            InTicketType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<E_CharaCreateTopMenuItems_CharaDetail>      OutTopMenuItems                                            (Parm, OutParm)
	 */
	void UBP_UI_CharaCreateFunctionLibrary_C::GetAestheShopTopMenuItems(E_AestheShop_TicketType InTicketType, class UObject* __WorldContext, TArray<E_CharaCreateTopMenuItems_CharaDetail>* OutTopMenuItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetAestheShopTopMenuItems");
		
		UBP_UI_CharaCreateFunctionLibrary_C_GetAestheShopTopMenuItems_Params params {};
		params.InTicketType = InTicketType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTopMenuItems != nullptr)
			*OutTopMenuItems = params.OutTopMenuItems;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetAesthePaidPlanSubscribedFromGameModeOption_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InOptionsString                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bOutIsPaidPlanSubscribed                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_UI_CharaCreateFunctionLibrary_C::GetAesthePaidPlanSubscribedFromGameModeOption_1(const class FString& InOptionsString, class UObject* __WorldContext, bool* bOutIsPaidPlanSubscribed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetAesthePaidPlanSubscribedFromGameModeOption_1");
		
		UBP_UI_CharaCreateFunctionLibrary_C_GetAesthePaidPlanSubscribedFromGameModeOption_1_Params params {};
		params.InOptionsString = InOptionsString;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOutIsPaidPlanSubscribed != nullptr)
			*bOutIsPaidPlanSubscribed = params.bOutIsPaidPlanSubscribed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetAestheStartGenderFromGameModeOption
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InOptionsString                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBCharacterGender                                 OutGender                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UI_CharaCreateFunctionLibrary_C::GetAestheStartGenderFromGameModeOption(const class FString& InOptionsString, class UObject* __WorldContext, ESBCharacterGender* OutGender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetAestheStartGenderFromGameModeOption");
		
		UBP_UI_CharaCreateFunctionLibrary_C_GetAestheStartGenderFromGameModeOption_Params params {};
		params.InOptionsString = InOptionsString;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutGender != nullptr)
			*OutGender = params.OutGender;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetIfPlayerHasAestheTicketFromGameModeOption
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InOptionsString                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HasTicket                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_UI_CharaCreateFunctionLibrary_C::GetIfPlayerHasAestheTicketFromGameModeOption(const class FString& InOptionsString, class UObject* __WorldContext, bool* HasTicket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetIfPlayerHasAestheTicketFromGameModeOption");
		
		UBP_UI_CharaCreateFunctionLibrary_C_GetIfPlayerHasAestheTicketFromGameModeOption_Params params {};
		params.InOptionsString = InOptionsString;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasTicket != nullptr)
			*HasTicket = params.HasTicket;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetAestheTicketUseNumFromGameModeOption
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InOptionsString                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutUseTicketNum                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UI_CharaCreateFunctionLibrary_C::GetAestheTicketUseNumFromGameModeOption(const class FString& InOptionsString, class UObject* __WorldContext, int32_t* OutUseTicketNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetAestheTicketUseNumFromGameModeOption");
		
		UBP_UI_CharaCreateFunctionLibrary_C_GetAestheTicketUseNumFromGameModeOption_Params params {};
		params.InOptionsString = InOptionsString;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutUseTicketNum != nullptr)
			*OutUseTicketNum = params.OutUseTicketNum;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetAestheTicketTokenIdFromGameModeOption
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InOptionsString                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutTIcketTokenId                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UI_CharaCreateFunctionLibrary_C::GetAestheTicketTokenIdFromGameModeOption(const class FString& InOptionsString, class UObject* __WorldContext, int32_t* OutTIcketTokenId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetAestheTicketTokenIdFromGameModeOption");
		
		UBP_UI_CharaCreateFunctionLibrary_C_GetAestheTicketTokenIdFromGameModeOption_Params params {};
		params.InOptionsString = InOptionsString;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTIcketTokenId != nullptr)
			*OutTIcketTokenId = params.OutTIcketTokenId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetAestheCourseIdFromGameModeOption
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InOptionsString                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutTIcketTokenId                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UI_CharaCreateFunctionLibrary_C::GetAestheCourseIdFromGameModeOption(const class FString& InOptionsString, class UObject* __WorldContext, int32_t* OutTIcketTokenId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetAestheCourseIdFromGameModeOption");
		
		UBP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIdFromGameModeOption_Params params {};
		params.InOptionsString = InOptionsString;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTIcketTokenId != nullptr)
			*OutTIcketTokenId = params.OutTIcketTokenId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetCharaCreateModeFromGameModeOption
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InOptionsString                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_CharaCreate_Mode                                 OutMode                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_UI_CharaCreateFunctionLibrary_C::GetCharaCreateModeFromGameModeOption(const class FString& InOptionsString, class UObject* __WorldContext, E_CharaCreate_Mode* OutMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetCharaCreateModeFromGameModeOption");
		
		UBP_UI_CharaCreateFunctionLibrary_C_GetCharaCreateModeFromGameModeOption_Params params {};
		params.InOptionsString = InOptionsString;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMode != nullptr)
			*OutMode = params.OutMode;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_UI_CharaCreateFunctionLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_UI_CharaCreateFunctionLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C");
		return ptr;
	}

}


