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
	 * Function CharacterCardHUD.CharacterCardHUD_C.ResetMenuMode
	 */
	struct UCharacterCardHUD_C_ResetMenuMode_Params
	{	};

	/**
	 * Function CharacterCardHUD.CharacterCardHUD_C.SetMenuMode
	 */
	struct UCharacterCardHUD_C_SetMenuMode_Params
	{	};

	/**
	 * Function CharacterCardHUD.CharacterCardHUD_C.GetIsAdventurerCardOpened
	 */
	struct UCharacterCardHUD_C_GetIsAdventurerCardOpened_Params
	{
	public:
		bool                                                       bOutIsOpened;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CharacterCardHUD.CharacterCardHUD_C.ExecShowOrHideHUD
	 */
	struct UCharacterCardHUD_C_ExecShowOrHideHUD_Params
	{	};

	/**
	 * Function CharacterCardHUD.CharacterCardHUD_C.HideHUD
	 */
	struct UCharacterCardHUD_C_HideHUD_Params
	{	};

	/**
	 * Function CharacterCardHUD.CharacterCardHUD_C.ShowHUD
	 */
	struct UCharacterCardHUD_C_ShowHUD_Params
	{	};

	/**
	 * Function CharacterCardHUD.CharacterCardHUD_C.PreConstruct
	 */
	struct UCharacterCardHUD_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CharacterCardHUD.CharacterCardHUD_C.Destruct
	 */
	struct UCharacterCardHUD_C_Destruct_Params
	{	};

	/**
	 * Function CharacterCardHUD.CharacterCardHUD_C.BndEvt__CharacterCardHUD_CharacterCardList_K2Node_ComponentBoundEvent_0_OnGetCharacterCardInfos__DelegateSignature
	 */
	struct UCharacterCardHUD_C_BndEvt__CharacterCardHUD_CharacterCardList_K2Node_ComponentBoundEvent_0_OnGetCharacterCardInfos__DelegateSignature_Params
	{	};

	/**
	 * Function CharacterCardHUD.CharacterCardHUD_C.WidgetAnimationEvt_InAnim_K2Node_WidgetAnimationEvent_1
	 */
	struct UCharacterCardHUD_C_WidgetAnimationEvt_InAnim_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function CharacterCardHUD.CharacterCardHUD_C.WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_2
	 */
	struct UCharacterCardHUD_C_WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_2_Params
	{	};

	/**
	 * Function CharacterCardHUD.CharacterCardHUD_C.OnInitialize
	 */
	struct UCharacterCardHUD_C_OnInitialize_Params
	{
	public:
		TArray<class FString>                                      InPartyMemberCharacterIds;                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CharacterCardHUD.CharacterCardHUD_C.ForceAdventurerCardClose
	 */
	struct UCharacterCardHUD_C_ForceAdventurerCardClose_Params
	{	};

	/**
	 * Function CharacterCardHUD.CharacterCardHUD_C.OnCloseHUD
	 */
	struct UCharacterCardHUD_C_OnCloseHUD_Params
	{	};

	/**
	 * Function CharacterCardHUD.CharacterCardHUD_C.OnCloseCharacterCard
	 */
	struct UCharacterCardHUD_C_OnCloseCharacterCard_Params
	{
	public:
		bool                                                       InResetMenuModeOnly;                                     // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CharacterCardHUD.CharacterCardHUD_C.InitializeForDebug
	 */
	struct UCharacterCardHUD_C_InitializeForDebug_Params
	{	};

	/**
	 * Function CharacterCardHUD.CharacterCardHUD_C.OnCloseCharacterCardForDebug
	 */
	struct UCharacterCardHUD_C_OnCloseCharacterCardForDebug_Params
	{	};

	/**
	 * Function CharacterCardHUD.CharacterCardHUD_C.OnIsNewMemberFoundInParty
	 */
	struct UCharacterCardHUD_C_OnIsNewMemberFoundInParty_Params
	{	};

	/**
	 * Function CharacterCardHUD.CharacterCardHUD_C.OnCharacterCardShowHideKeyPressed
	 */
	struct UCharacterCardHUD_C_OnCharacterCardShowHideKeyPressed_Params
	{	};

	/**
	 * Function CharacterCardHUD.CharacterCardHUD_C.ExecuteUbergraph_CharacterCardHUD
	 */
	struct UCharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterCardHUD.CharacterCardHUD_C.OnClosed__DelegateSignature
	 */
	struct UCharacterCardHUD_C_OnClosed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
