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
	 * Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.SetBattleSetPlayerAvatarVisibility
	 */
	struct UWBP_StoragePresetEquip_C_SetBattleSetPlayerAvatarVisibility_Params
	{
	public:
		bool                                                       bInIsVisible;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.SetUIBlockerForBattleSetVisibility
	 */
	struct UWBP_StoragePresetEquip_C_SetUIBlockerForBattleSetVisibility_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.SetPlayerAvatarStudioHidden
	 */
	struct UWBP_StoragePresetEquip_C_SetPlayerAvatarStudioHidden_Params
	{
	public:
		bool                                                       InIsHidden;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.SetPlayerAvatarRotateActive
	 */
	struct UWBP_StoragePresetEquip_C_SetPlayerAvatarRotateActive_Params
	{
	public:
		bool                                                       InIsRotateActive;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.SetPlayerAvatarCurrentModeMotion
	 */
	struct UWBP_StoragePresetEquip_C_SetPlayerAvatarCurrentModeMotion_Params
	{	};

	/**
	 * Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.FindCurrMapPlayerAvatarTransform
	 */
	struct UWBP_StoragePresetEquip_C_FindCurrMapPlayerAvatarTransform_Params
	{
	public:
		class FString                                              InCurrMapName;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FTransform                                          OutTransform;                                            // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.SetCmnBackBtnVIsibility
	 */
	struct UWBP_StoragePresetEquip_C_SetCmnBackBtnVIsibility_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.SetPresetType
	 */
	struct UWBP_StoragePresetEquip_C_SetPresetType_Params
	{
	public:
		ESBPlayerPresetType                                        InPresetType;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.RandomPlayAnimation2
	 */
	struct UWBP_StoragePresetEquip_C_RandomPlayAnimation2_Params
	{	};

	/**
	 * Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.RandomPlayAnimation
	 */
	struct UWBP_StoragePresetEquip_C_RandomPlayAnimation_Params
	{	};

	/**
	 * Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.OnPress_Cancel
	 */
	struct UWBP_StoragePresetEquip_C_OnPress_Cancel_Params
	{	};

	/**
	 * Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.BndEvt__TabBtn1_K2Node_ComponentBoundEvent_3_BtnClick__DelegateSignature
	 */
	struct UWBP_StoragePresetEquip_C_BndEvt__TabBtn1_K2Node_ComponentBoundEvent_3_BtnClick__DelegateSignature_Params
	{
	public:
		class UShopCmnBtn1_C*                                      ClickBtn;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TabId;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature
	 */
	struct UWBP_StoragePresetEquip_C_BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature_Params
	{
	public:
		class UShopCmnBtn1_C*                                      ClickBtn;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TabId;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.BndEvt__CmnBack_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature
	 */
	struct UWBP_StoragePresetEquip_C_BndEvt__CmnBack_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_2
	 */
	struct UWBP_StoragePresetEquip_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_2_Params
	{	};

	/**
	 * Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_1_OnIsCmnBackBtnVisible__DelegateSignature
	 */
	struct UWBP_StoragePresetEquip_C_BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_1_OnIsCmnBackBtnVisible__DelegateSignature_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_2_OnIsChildWidgetOpened__DelegateSignature
	 */
	struct UWBP_StoragePresetEquip_C_BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_2_OnIsChildWidgetOpened__DelegateSignature_Params
	{
	public:
		bool                                                       InIsChildWidgetOpened;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_1_OnSetPlayerAvatarRotateActive__DelegateSignature
	 */
	struct UWBP_StoragePresetEquip_C_BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_1_OnSetPlayerAvatarRotateActive__DelegateSignature_Params
	{
	public:
		bool                                                       InIsRotateActive;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_5_OnResetPlayerAvatarRotate__DelegateSignature
	 */
	struct UWBP_StoragePresetEquip_C_BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_5_OnResetPlayerAvatarRotate__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_6_OnPlayerCharacterEquippedCostumeChanged__DelegateSignature
	 */
	struct UWBP_StoragePresetEquip_C_BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_6_OnPlayerCharacterEquippedCostumeChanged__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_7_OnEquippedWeaponSpawned__DelegateSignature
	 */
	struct UWBP_StoragePresetEquip_C_BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_7_OnEquippedWeaponSpawned__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.OnClicked_BattleSet_DetailedStatus
	 */
	struct UWBP_StoragePresetEquip_C_OnClicked_BattleSet_DetailedStatus_Params
	{	};

	/**
	 * Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.BndEvt__MyCharacterMenu_StatusSwitcher_ButtonFullScreen_BattleSet_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_StoragePresetEquip_C_BndEvt__MyCharacterMenu_StatusSwitcher_ButtonFullScreen_BattleSet_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.EscDetailedStatus
	 */
	struct UWBP_StoragePresetEquip_C_EscDetailedStatus_Params
	{	};

	/**
	 * Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.OnClickedDetailedStatus
	 */
	struct UWBP_StoragePresetEquip_C_OnClickedDetailedStatus_Params
	{	};

	/**
	 * Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_0_OnSetPlayerCaptureStudioHidden__DelegateSignature
	 */
	struct UWBP_StoragePresetEquip_C_BndEvt__WBP_StoragePresetEquip_BattleSet_K2Node_ComponentBoundEvent_0_OnSetPlayerCaptureStudioHidden__DelegateSignature_Params
	{
	public:
		bool                                                       InIsHidden;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.Construct
	 */
	struct UWBP_StoragePresetEquip_C_Construct_Params
	{	};

	/**
	 * Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.Destruct
	 */
	struct UWBP_StoragePresetEquip_C_Destruct_Params
	{	};

	/**
	 * Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.onAnimTimer
	 */
	struct UWBP_StoragePresetEquip_C_onAnimTimer_Params
	{	};

	/**
	 * Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1
	 */
	struct UWBP_StoragePresetEquip_C_WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.OnCalcEquipStatusDiff
	 */
	struct UWBP_StoragePresetEquip_C_OnCalcEquipStatusDiff_Params
	{	};

	/**
	 * Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.OnPlayerAvatarLoaded
	 */
	struct UWBP_StoragePresetEquip_C_OnPlayerAvatarLoaded_Params
	{	};

	/**
	 * Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.OnChangeState
	 */
	struct UWBP_StoragePresetEquip_C_OnChangeState_Params
	{
	public:
		class FString                                              InPrevStateName;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              InNextStateName;                                         // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.StartOpenMenuAnimation
	 */
	struct UWBP_StoragePresetEquip_C_StartOpenMenuAnimation_Params
	{	};

	/**
	 * Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.OnCostumeChangeOccured
	 */
	struct UWBP_StoragePresetEquip_C_OnCostumeChangeOccured_Params
	{	};

	/**
	 * Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.SetUIBlockerFrontRowVisibility
	 */
	struct UWBP_StoragePresetEquip_C_SetUIBlockerFrontRowVisibility_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.OnCharaPartsLoadedDelegate_ByChangeCostume_イベント
	 */
	struct UWBP_StoragePresetEquip_C_OnCharaPartsLoadedDelegate_ByChangeCostume__Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.OnChangeStateByCostumeChange
	 */
	struct UWBP_StoragePresetEquip_C_OnChangeStateByCostumeChange_Params
	{
	public:
		class FString                                              InPrevStateName;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              InNextStateName;                                         // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.InitBattleSet
	 */
	struct UWBP_StoragePresetEquip_C_InitBattleSet_Params
	{	};

	/**
	 * Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.FreeBattleSet
	 */
	struct UWBP_StoragePresetEquip_C_FreeBattleSet_Params
	{	};

	/**
	 * Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.PreConstruct
	 */
	struct UWBP_StoragePresetEquip_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.ExecuteUbergraph_WBP_StoragePresetEquip
	 */
	struct UWBP_StoragePresetEquip_C_ExecuteUbergraph_WBP_StoragePresetEquip_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SIRE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_StoragePresetEquip.WBP_StoragePresetEquip_C.OnClose__DelegateSignature
	 */
	struct UWBP_StoragePresetEquip_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
