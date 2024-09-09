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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetHairGradationRangeMinMax
	 */
	struct UBP_UI_CharaCreateFunctionLibrary_C_GetHairGradationRangeMinMax_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OutMin;                                                  // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OutMax;                                                  // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.AdjustSceneCaptureTransform
	 */
	struct UBP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform_Params
	{
	public:
		class ASBCreationCharacter*                                PlayerIndex;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             OffsetLocation;                                          // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            OffsetRotator;                                           // 0x0014(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class ASceneCapture2D*                                     SceneCapture;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsFollowRotator;                                         // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OMMW[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.RoundSliderValueToNearPitch
	 */
	struct UBP_UI_CharaCreateFunctionLibrary_C_RoundSliderValueToNearPitch_Params
	{
	public:
		float                                                      InSliderValue;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InSliderRange;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      OutSliderValue;                                          // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetFacialMarksColorHueMax
	 */
	struct UBP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColorHueMax_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OutHueMax;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetFacialMarksColor
	 */
	struct UBP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColor_Params
	{
	public:
		int32_t                                                    InHue;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InHueMax;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InValue;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MJFP[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OutIsValid;                                              // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8MDT[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBCharaCreateColor                                 OutColor;                                                // 0x001C(0x003C)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetSkinColorHueMax
	 */
	struct UBP_UI_CharaCreateFunctionLibrary_C_GetSkinColorHueMax_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OutHueMax;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetSkinColor
	 */
	struct UBP_UI_CharaCreateFunctionLibrary_C_GetSkinColor_Params
	{
	public:
		int32_t                                                    InHue;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InHueMax;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InValue;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SRJX[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OutIsValid;                                              // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8ZT3[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBCharaCreateColor                                 OutSkinColor;                                            // 0x001C(0x003C)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetClassSkillMoviePath
	 */
	struct UBP_UI_CharaCreateFunctionLibrary_C_GetClassSkillMoviePath_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              OutPath;                                                 // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.CheckIfPlayerHasAestheTicket
	 */
	struct UBP_UI_CharaCreateFunctionLibrary_C_CheckIfPlayerHasAestheTicket_Params
	{
	public:
		int32_t                                                    InTicketTokenId;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BA0E[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OutHasTicket;                                            // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CT7G[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetAestheCourseIconTexture
	 */
	struct UBP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIconTexture_Params
	{
	public:
		int32_t                                                    InCourseId;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BMIH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_K45F[0x28];                                  // 0x0010(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetAestheShopTopMenuItems
	 */
	struct UBP_UI_CharaCreateFunctionLibrary_C_GetAestheShopTopMenuItems_Params
	{
	public:
		E_AestheShop_TicketType                                    InTicketType;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_02S7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<E_CharaCreateTopMenuItems_CharaDetail>              OutTopMenuItems;                                         // 0x0010(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetAesthePaidPlanSubscribedFromGameModeOption_1
	 */
	struct UBP_UI_CharaCreateFunctionLibrary_C_GetAesthePaidPlanSubscribedFromGameModeOption_1_Params
	{
	public:
		class FString                                              InOptionsString;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bOutIsPaidPlanSubscribed;                                // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetAestheStartGenderFromGameModeOption
	 */
	struct UBP_UI_CharaCreateFunctionLibrary_C_GetAestheStartGenderFromGameModeOption_Params
	{
	public:
		class FString                                              InOptionsString;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBCharacterGender                                         OutGender;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetIfPlayerHasAestheTicketFromGameModeOption
	 */
	struct UBP_UI_CharaCreateFunctionLibrary_C_GetIfPlayerHasAestheTicketFromGameModeOption_Params
	{
	public:
		class FString                                              InOptionsString;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HasTicket;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QDAP[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetAestheTicketUseNumFromGameModeOption
	 */
	struct UBP_UI_CharaCreateFunctionLibrary_C_GetAestheTicketUseNumFromGameModeOption_Params
	{
	public:
		class FString                                              InOptionsString;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OutUseTicketNum;                                         // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetAestheTicketTokenIdFromGameModeOption
	 */
	struct UBP_UI_CharaCreateFunctionLibrary_C_GetAestheTicketTokenIdFromGameModeOption_Params
	{
	public:
		class FString                                              InOptionsString;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OutTIcketTokenId;                                        // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetAestheCourseIdFromGameModeOption
	 */
	struct UBP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIdFromGameModeOption_Params
	{
	public:
		class FString                                              InOptionsString;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OutTIcketTokenId;                                        // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetCharaCreateModeFromGameModeOption
	 */
	struct UBP_UI_CharaCreateFunctionLibrary_C_GetCharaCreateModeFromGameModeOption_Params
	{
	public:
		class FString                                              InOptionsString;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_CharaCreate_Mode                                         OutMode;                                                 // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WEOX[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
