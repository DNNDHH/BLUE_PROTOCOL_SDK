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
	 * Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.SetKeyVisibilityPermanent
	 */
	struct USkillInfoGaugeImagine_C_SetKeyVisibilityPermanent_Params
	{
	public:
		bool                                                       InIsVisibilityPermanent;                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.SetLimitIconVisibility
	 */
	struct USkillInfoGaugeImagine_C_SetLimitIconVisibility_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.SetEmptyColor
	 */
	struct USkillInfoGaugeImagine_C_SetEmptyColor_Params
	{
	public:
		struct FLinearColor                                        InColor;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.SetIsEmpty
	 */
	struct USkillInfoGaugeImagine_C_SetIsEmpty_Params
	{
	public:
		bool                                                       InIsEmpty;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DFLY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.SetIconOpacity
	 */
	struct USkillInfoGaugeImagine_C_SetIconOpacity_Params
	{
	public:
		bool                                                       IsEquipped;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.SetKeyGuideVisible
	 */
	struct USkillInfoGaugeImagine_C_SetKeyGuideVisible_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GQA3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.UpdateIconTexture
	 */
	struct USkillInfoGaugeImagine_C_UpdateIconTexture_Params
	{
	public:
		class FString                                              inImagineUniqueId;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FName                                                InImagineName;                                           // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InUseImagineArtsName;                                    // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YBR8[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InImagineArtsName;                                       // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.PlayAnimChargStart
	 */
	struct USkillInfoGaugeImagine_C_PlayAnimChargStart_Params
	{	};

	/**
	 * Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.SetEnabled
	 */
	struct USkillInfoGaugeImagine_C_SetEnabled_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.PlayAnimChargeEnd
	 */
	struct USkillInfoGaugeImagine_C_PlayAnimChargeEnd_Params
	{	};

	/**
	 * Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.PlayAnimUse
	 */
	struct USkillInfoGaugeImagine_C_PlayAnimUse_Params
	{
	public:
		bool                                                       bInit;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6ZIL[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.SetText
	 */
	struct USkillInfoGaugeImagine_C_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.SetGaugeValue
	 */
	struct USkillInfoGaugeImagine_C_SetGaugeValue_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InRecastTime;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.PreConstruct
	 */
	struct USkillInfoGaugeImagine_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.Construct
	 */
	struct USkillInfoGaugeImagine_C_Construct_Params
	{	};

	/**
	 * Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.OnUpdateIconTexture
	 */
	struct USkillInfoGaugeImagine_C_OnUpdateIconTexture_Params
	{
	public:
		class FString                                              inImagineUniqueId;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FName                                                InImagineName;                                           // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.OnStartHyouiAnimation
	 */
	struct USkillInfoGaugeImagine_C_OnStartHyouiAnimation_Params
	{	};

	/**
	 * Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.OnStopHyouiAnimation
	 */
	struct USkillInfoGaugeImagine_C_OnStopHyouiAnimation_Params
	{	};

	/**
	 * Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.SetSlotNum
	 */
	struct USkillInfoGaugeImagine_C_SetSlotNum_Params
	{
	public:
		int32_t                                                    Num;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.OnIconDisableChange
	 */
	struct USkillInfoGaugeImagine_C_OnIconDisableChange_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfoGaugeImagine.SkillInfoGaugeImagine_C.ExecuteUbergraph_SkillInfoGaugeImagine
	 */
	struct USkillInfoGaugeImagine_C_ExecuteUbergraph_SkillInfoGaugeImagine_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
