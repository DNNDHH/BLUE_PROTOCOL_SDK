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
	 * Function SkillInfo.SkillInfo_C.UpdateChangeText
	 */
	struct USkillInfo_C_UpdateChangeText_Params
	{	};

	/**
	 * Function SkillInfo.SkillInfo_C.IsPlayAnimation
	 */
	struct USkillInfo_C_IsPlayAnimation_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfo.SkillInfo_C.GetVisibility_1
	 */
	struct USkillInfo_C_GetVisibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfo.SkillInfo_C.SetEditMode
	 */
	struct USkillInfo_C_SetEditMode_Params
	{
	public:
		bool                                                       bIsEdit;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfo.SkillInfo_C.OnChangeShowAlwaysHUD_event
	 */
	struct USkillInfo_C_OnChangeShowAlwaysHUD_event_Params
	{
	public:
		bool                                                       bIsShow;                                                 // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfo.SkillInfo_C.Destruct
	 */
	struct USkillInfo_C_Destruct_Params
	{	};

	/**
	 * Function SkillInfo.SkillInfo_C.OnInAnimation
	 */
	struct USkillInfo_C_OnInAnimation_Params
	{
	public:
		bool                                                       bForward;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfo.SkillInfo_C.Construct
	 */
	struct USkillInfo_C_Construct_Params
	{	};

	/**
	 * Function SkillInfo.SkillInfo_C.AnimationInOut
	 */
	struct USkillInfo_C_AnimationInOut_Params
	{
	public:
		bool                                                       In;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfo.SkillInfo_C.WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_1
	 */
	struct USkillInfo_C_WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function SkillInfo.SkillInfo_C.CustomEvent_1
	 */
	struct USkillInfo_C_CustomEvent_1_Params
	{
	public:
		bool                                                       bIsShow;                                                 // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfo.SkillInfo_C.OnChangePalette
	 */
	struct USkillInfo_C_OnChangePalette_Params
	{
	public:
		ESBPlayerSkillPaletteSide                                  PaletteSide;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfo.SkillInfo_C.OnChangeBackPaletteVisible
	 */
	struct USkillInfo_C_OnChangeBackPaletteVisible_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfo.SkillInfo_C.PreConstruct
	 */
	struct USkillInfo_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SkillInfo.SkillInfo_C.CustomEvent_4
	 */
	struct USkillInfo_C_CustomEvent_4_Params
	{	};

	/**
	 * Function SkillInfo.SkillInfo_C.OnPadSkinChange
	 */
	struct USkillInfo_C_OnPadSkinChange_Params
	{
	public:
		ESBPadKeySkinType                                          SkinType;                                                // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SkillInfo.SkillInfo_C.ExecuteUbergraph_SkillInfo
	 */
	struct USkillInfo_C_ExecuteUbergraph_SkillInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
