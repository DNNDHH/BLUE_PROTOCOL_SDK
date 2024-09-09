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
	 * Function KeyGuideHUD.KeyGuideHUD_C.IsPlayAnimation
	 */
	struct UKeyGuideHUD_C_IsPlayAnimation_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function KeyGuideHUD.KeyGuideHUD_C.SetKeyGuideNaviVisibility
	 */
	struct UKeyGuideHUD_C_SetKeyGuideNaviVisibility_Params
	{
	public:
		ESlateVisibility                                           InVisibility;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function KeyGuideHUD.KeyGuideHUD_C.UpdateKeyGuide
	 */
	struct UKeyGuideHUD_C_UpdateKeyGuide_Params
	{	};

	/**
	 * Function KeyGuideHUD.KeyGuideHUD_C.GetClassKeyConfig
	 */
	struct UKeyGuideHUD_C_GetClassKeyConfig_Params
	{
	public:
		struct FSBPlayerClassKeyConfigData                         ReturnValue;                                             // 0x0008(0x01D0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function KeyGuideHUD.KeyGuideHUD_C.GetGamepadPressed
	 */
	struct UKeyGuideHUD_C_GetGamepadPressed_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4CYR[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function KeyGuideHUD.KeyGuideHUD_C.GetKBPressed
	 */
	struct UKeyGuideHUD_C_GetKBPressed_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_63GW[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function KeyGuideHUD.KeyGuideHUD_C.GetPlayerCharacter
	 */
	struct UKeyGuideHUD_C_GetPlayerCharacter_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9BGN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ASBPlayerCharacter*                                  AsSBPlayerCharacter;                                     // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function KeyGuideHUD.KeyGuideHUD_C.Is Key Input BP
	 */
	struct UKeyGuideHUD_C_IsKeyInputBP_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function KeyGuideHUD.KeyGuideHUD_C.SetKeyGuideTextVisible
	 */
	struct UKeyGuideHUD_C_SetKeyGuideTextVisible_Params
	{
	public:
		ESkillActionPosition                                       SkillActionPosition;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsVisible;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function KeyGuideHUD.KeyGuideHUD_C.Reset
	 */
	struct UKeyGuideHUD_C_Reset_Params
	{	};

	/**
	 * Function KeyGuideHUD.KeyGuideHUD_C.Is Key Guide Animation
	 */
	struct UKeyGuideHUD_C_IsKeyGuideAnimation_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function KeyGuideHUD.KeyGuideHUD_C.ChangeKeyGuide2
	 */
	struct UKeyGuideHUD_C_ChangeKeyGuide2_Params
	{
	public:
		EKeyGuideType                                              InKeyGuideType;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function KeyGuideHUD.KeyGuideHUD_C.ChangeKeyGuide
	 */
	struct UKeyGuideHUD_C_ChangeKeyGuide_Params
	{
	public:
		EKeyGuideType                                              InKeyGuideType;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function KeyGuideHUD.KeyGuideHUD_C.GetKeyGuide2Size
	 */
	struct UKeyGuideHUD_C_GetKeyGuide2Size_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function KeyGuideHUD.KeyGuideHUD_C.GetKeyGuideSize
	 */
	struct UKeyGuideHUD_C_GetKeyGuideSize_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function KeyGuideHUD.KeyGuideHUD_C.ChangeKeyGuide2Visibility
	 */
	struct UKeyGuideHUD_C_ChangeKeyGuide2Visibility_Params
	{	};

	/**
	 * Function KeyGuideHUD.KeyGuideHUD_C.ChangeKeyGuideVisibility
	 */
	struct UKeyGuideHUD_C_ChangeKeyGuideVisibility_Params
	{	};

	/**
	 * Function KeyGuideHUD.KeyGuideHUD_C.Initialize
	 */
	struct UKeyGuideHUD_C_Initialize_Params
	{	};

	/**
	 * Function KeyGuideHUD.KeyGuideHUD_C.PreConstruct
	 */
	struct UKeyGuideHUD_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function KeyGuideHUD.KeyGuideHUD_C.SetEditMode
	 */
	struct UKeyGuideHUD_C_SetEditMode_Params
	{
	public:
		bool                                                       IsEdit;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function KeyGuideHUD.KeyGuideHUD_C.BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_2_OnChangeMountEvent__DelegateSignature
	 */
	struct UKeyGuideHUD_C_BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_2_OnChangeMountEvent__DelegateSignature_Params
	{
	public:
		bool                                                       IsMount;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function KeyGuideHUD.KeyGuideHUD_C.CustomEvent_1
	 */
	struct UKeyGuideHUD_C_CustomEvent_1_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function KeyGuideHUD.KeyGuideHUD_C.OnPlayAnim
	 */
	struct UKeyGuideHUD_C_OnPlayAnim_Params
	{
	public:
		bool                                                       bOpen;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function KeyGuideHUD.KeyGuideHUD_C.OnReset
	 */
	struct UKeyGuideHUD_C_OnReset_Params
	{	};

	/**
	 * Function KeyGuideHUD.KeyGuideHUD_C.BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_3_OnCheerfulItemEvent__DelegateSignature
	 */
	struct UKeyGuideHUD_C_BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_3_OnCheerfulItemEvent__DelegateSignature_Params
	{
	public:
		bool                                                       IsCheerfulItem;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function KeyGuideHUD.KeyGuideHUD_C.OnAnimationFinished
	 */
	struct UKeyGuideHUD_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function KeyGuideHUD.KeyGuideHUD_C.BndEvt__KeyGuideHUD_KeyGuide_95_K2Node_ComponentBoundEvent_4_OnChangeKeyGuideVisibilityEvent__DelegateSignature
	 */
	struct UKeyGuideHUD_C_BndEvt__KeyGuideHUD_KeyGuide_95_K2Node_ComponentBoundEvent_4_OnChangeKeyGuideVisibilityEvent__DelegateSignature_Params
	{	};

	/**
	 * Function KeyGuideHUD.KeyGuideHUD_C.BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_0_OnChangeKeyGuideVisibilityEvent__DelegateSignature
	 */
	struct UKeyGuideHUD_C_BndEvt__KeyGuideHUD_KeyGuide2_53_K2Node_ComponentBoundEvent_0_OnChangeKeyGuideVisibilityEvent__DelegateSignature_Params
	{	};

	/**
	 * Function KeyGuideHUD.KeyGuideHUD_C.RetryKeyGuide2VisibilityEvent
	 */
	struct UKeyGuideHUD_C_RetryKeyGuide2VisibilityEvent_Params
	{	};

	/**
	 * Function KeyGuideHUD.KeyGuideHUD_C.RetryKeyGuideVisibilityEvent
	 */
	struct UKeyGuideHUD_C_RetryKeyGuideVisibilityEvent_Params
	{	};

	/**
	 * Function KeyGuideHUD.KeyGuideHUD_C.Construct
	 */
	struct UKeyGuideHUD_C_Construct_Params
	{	};

	/**
	 * Function KeyGuideHUD.KeyGuideHUD_C.UIVisibleSettingChangeEnvet
	 */
	struct UKeyGuideHUD_C_UIVisibleSettingChangeEnvet_Params
	{
	public:
		ESBUIType                                                  InUIType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInVisibility;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInInstantly;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function KeyGuideHUD.KeyGuideHUD_C.ExecuteUbergraph_KeyGuideHUD
	 */
	struct UKeyGuideHUD_C_ExecuteUbergraph_KeyGuideHUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
