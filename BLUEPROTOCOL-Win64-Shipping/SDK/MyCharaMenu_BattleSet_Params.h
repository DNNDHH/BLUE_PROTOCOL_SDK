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
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.UnbindEventsOfBattleCordeEditUI
	 */
	struct UMyCharaMenu_BattleSet_C_UnbindEventsOfBattleCordeEditUI_Params
	{
	public:
		bool                                                       InUnbindTermEnd;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9G3Y[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.BindEventsOfBattleCordeEditUI
	 */
	struct UMyCharaMenu_BattleSet_C_BindEventsOfBattleCordeEditUI_Params
	{	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.UnbindEventsOfSkillOrAbilityChangeUI
	 */
	struct UMyCharaMenu_BattleSet_C_UnbindEventsOfSkillOrAbilityChangeUI_Params
	{
	public:
		bool                                                       InUnbindTermEnd;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SNMB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.BindEventsOfSkillOrAbilityChangeUI
	 */
	struct UMyCharaMenu_BattleSet_C_BindEventsOfSkillOrAbilityChangeUI_Params
	{	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.UnbindEventsOfEquipmentChangeUI
	 */
	struct UMyCharaMenu_BattleSet_C_UnbindEventsOfEquipmentChangeUI_Params
	{
	public:
		bool                                                       InUnbindTermEnd;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_75WL[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.BindEventsOfEquipmentChangeUI
	 */
	struct UMyCharaMenu_BattleSet_C_BindEventsOfEquipmentChangeUI_Params
	{	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.SetUIBlockerFrontRowVisibility
	 */
	struct UMyCharaMenu_BattleSet_C_SetUIBlockerFrontRowVisibility_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.SetLeftSideParameterExpGaugeUpdateStop
	 */
	struct UMyCharaMenu_BattleSet_C_SetLeftSideParameterExpGaugeUpdateStop_Params
	{
	public:
		bool                                                       InIsUpdateStop;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.UpdateLeftSideParameters
	 */
	struct UMyCharaMenu_BattleSet_C_UpdateLeftSideParameters_Params
	{
	public:
		bool                                                       InIncludeClassInfo;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.SetStorageMode
	 */
	struct UMyCharaMenu_BattleSet_C_SetStorageMode_Params
	{
	public:
		bool                                                       InIsStorageMode;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XGVG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.GetPlayerCharacterEquipStatusDiffRequestRetCode
	 */
	struct UMyCharaMenu_BattleSet_C_GetPlayerCharacterEquipStatusDiffRequestRetCode_Params
	{
	public:
		class FString                                              InCurrEquipmentUniqueId;                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              InNewEquipmentUniqueId;                                  // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    OutRetCode;                                              // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BXGV[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.SetTopInfoVisibility
	 */
	struct UMyCharaMenu_BattleSet_C_SetTopInfoVisibility_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InIgnorePlayerCaptureStudio;                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.ImmediateCloseDetailedStatus
	 */
	struct UMyCharaMenu_BattleSet_C_ImmediateCloseDetailedStatus_Params
	{	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.SetBtnFullScreenForDetailedStatusVisibility
	 */
	struct UMyCharaMenu_BattleSet_C_SetBtnFullScreenForDetailedStatusVisibility_Params
	{
	public:
		ESlateVisibility                                           InVisibility;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.In Animation
	 */
	struct UMyCharaMenu_BattleSet_C_InAnimation_Params
	{	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.SetPlayerAvatarImageVisibility
	 */
	struct UMyCharaMenu_BattleSet_C_SetPlayerAvatarImageVisibility_Params
	{
	public:
		bool                                                       bVisibility;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.UpdatePlayerAvatarVisibility_Internal
	 */
	struct UMyCharaMenu_BattleSet_C_UpdatePlayerAvatarVisibility_Internal_Params
	{	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.ConstructPlayerAvatarImageGraph
	 */
	struct UMyCharaMenu_BattleSet_C_ConstructPlayerAvatarImageGraph_Params
	{	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.DestructPlayerAvatarImageGraph
	 */
	struct UMyCharaMenu_BattleSet_C_DestructPlayerAvatarImageGraph_Params
	{	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnExistHigherPriorityCapture
	 */
	struct UMyCharaMenu_BattleSet_C_OnExistHigherPriorityCapture_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnUnexistHigherPriorityCapture
	 */
	struct UMyCharaMenu_BattleSet_C_OnUnexistHigherPriorityCapture_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnSkillOrAbilityChangeUIHideFinished
	 */
	struct UMyCharaMenu_BattleSet_C_OnSkillOrAbilityChangeUIHideFinished_Params
	{	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnSkillOrAbilityChangeUIListItemSelected
	 */
	struct UMyCharaMenu_BattleSet_C_OnSkillOrAbilityChangeUIListItemSelected_Params
	{
	public:
		int32_t                                                    InEquippedSkillId;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InSelectedSkillId;                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnLeftSideParamStatUpdatedAtSkillOrAbilityChangeUI
	 */
	struct UMyCharaMenu_BattleSet_C_OnLeftSideParamStatUpdatedAtSkillOrAbilityChangeUI_Params
	{
	public:
		E_BattleSetInfoType                                        InInfoType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIncludesClassInfo;                                     // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnEquippedTacticalSkillChanged
	 */
	struct UMyCharaMenu_BattleSet_C_OnEquippedTacticalSkillChanged_Params
	{	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnEquippedClassAbilityChanged
	 */
	struct UMyCharaMenu_BattleSet_C_OnEquippedClassAbilityChanged_Params
	{	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnSkillOrAbilityChangeUITermEnd
	 */
	struct UMyCharaMenu_BattleSet_C_OnSkillOrAbilityChangeUITermEnd_Params
	{	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnEquipmentChangeUIHideFinished
	 */
	struct UMyCharaMenu_BattleSet_C_OnEquipmentChangeUIHideFinished_Params
	{	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnEquipmentChangeUIListItemSelected
	 */
	struct UMyCharaMenu_BattleSet_C_OnEquipmentChangeUIListItemSelected_Params
	{
	public:
		class FString                                              InEquippedEquipmentUniqueId;                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              InSelectedEquipmentUniqueId;                             // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnLeftSideParamStatUpdatedAtEquipmentChangeUI
	 */
	struct UMyCharaMenu_BattleSet_C_OnLeftSideParamStatUpdatedAtEquipmentChangeUI_Params
	{
	public:
		E_BattleSetInfoType                                        InBattleSetInfoType;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIncludesClassInfoUpdate;                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnEquippedWeaponSpawnedAtEquipmentChangeUI
	 */
	struct UMyCharaMenu_BattleSet_C_OnEquippedWeaponSpawnedAtEquipmentChangeUI_Params
	{
	public:
		E_BattleSetInfoType                                        InBattleSetInfoType;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnClassChangedAtEquipmentChangeUI
	 */
	struct UMyCharaMenu_BattleSet_C_OnClassChangedAtEquipmentChangeUI_Params
	{	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnSetLeftSideParamExpGaugeUpdateStopAtEquipmentChangeUI
	 */
	struct UMyCharaMenu_BattleSet_C_OnSetLeftSideParamExpGaugeUpdateStopAtEquipmentChangeUI_Params
	{
	public:
		bool                                                       InIsUpdateStop;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnEquippedWeaponChangeRequestCompleted
	 */
	struct UMyCharaMenu_BattleSet_C_OnEquippedWeaponChangeRequestCompleted_Params
	{	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnEquippedBattleImagineChangeRequestCompleted
	 */
	struct UMyCharaMenu_BattleSet_C_OnEquippedBattleImagineChangeRequestCompleted_Params
	{	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnEquippedInnerImagineChangeRequestCompleted
	 */
	struct UMyCharaMenu_BattleSet_C_OnEquippedInnerImagineChangeRequestCompleted_Params
	{	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnEquipmentChangeUITermEnd
	 */
	struct UMyCharaMenu_BattleSet_C_OnEquipmentChangeUITermEnd_Params
	{	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnEquippedCostumeChanged
	 */
	struct UMyCharaMenu_BattleSet_C_OnEquippedCostumeChanged_Params
	{	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnBattleCordeDataReloadRequestedAtInit
	 */
	struct UMyCharaMenu_BattleSet_C_OnBattleCordeDataReloadRequestedAtInit_Params
	{	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnBattleCordeDataReloaded
	 */
	struct UMyCharaMenu_BattleSet_C_OnBattleCordeDataReloaded_Params
	{	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnBattleCordeEditUITermEnd
	 */
	struct UMyCharaMenu_BattleSet_C_OnBattleCordeEditUITermEnd_Params
	{	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnBattleCordeEditUIHideFinished
	 */
	struct UMyCharaMenu_BattleSet_C_OnBattleCordeEditUIHideFinished_Params
	{	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnEquippedWeaponSpawnedAtBattleCordeEditUI
	 */
	struct UMyCharaMenu_BattleSet_C_OnEquippedWeaponSpawnedAtBattleCordeEditUI_Params
	{	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnClassChangedAtBattleCordeEditUI
	 */
	struct UMyCharaMenu_BattleSet_C_OnClassChangedAtBattleCordeEditUI_Params
	{	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnLeftSideParamStatUpdatedAtBattleCordeEditUI
	 */
	struct UMyCharaMenu_BattleSet_C_OnLeftSideParamStatUpdatedAtBattleCordeEditUI_Params
	{
	public:
		E_BattleSetInfoType                                        InInfoType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIcludesClassInfo;                                      // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnSetPlayerAvatarRotateActiveAtBattleCordeEditUI
	 */
	struct UMyCharaMenu_BattleSet_C_OnSetPlayerAvatarRotateActiveAtBattleCordeEditUI_Params
	{
	public:
		bool                                                       InIsRotateActive;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnEquippedCostumeChangedAtBattleCordeEditUI
	 */
	struct UMyCharaMenu_BattleSet_C_OnEquippedCostumeChangedAtBattleCordeEditUI_Params
	{	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnSetLeftSideParamExpGaugeUpdateStopAtBattleCordeEditUI
	 */
	struct UMyCharaMenu_BattleSet_C_OnSetLeftSideParamExpGaugeUpdateStopAtBattleCordeEditUI_Params
	{
	public:
		bool                                                       InIsUpdateStop;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnBattleCordeSaveRequestCompleted
	 */
	struct UMyCharaMenu_BattleSet_C_OnBattleCordeSaveRequestCompleted_Params
	{	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.PreConstruct
	 */
	struct UMyCharaMenu_BattleSet_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.Construct
	 */
	struct UMyCharaMenu_BattleSet_C_Construct_Params
	{	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.Destruct
	 */
	struct UMyCharaMenu_BattleSet_C_Destruct_Params
	{	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.BndEvt__MyCharaMenu_BattleSet_SBButtonFullScreen_DetailedStatus_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMyCharaMenu_BattleSet_C_BndEvt__MyCharaMenu_BattleSet_SBButtonFullScreen_DetailedStatus_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.CloseDetailedStatus
	 */
	struct UMyCharaMenu_BattleSet_C_CloseDetailedStatus_Params
	{	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnPlayerCharaCaptureCompleted
	 */
	struct UMyCharaMenu_BattleSet_C_OnPlayerCharaCaptureCompleted_Params
	{	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.BndEvt__MyCharaMenu_BattleSet_LeftSideParameters_K2Node_ComponentBoundEvent_1_OnDetailedStatusClicked__DelegateSignature
	 */
	struct UMyCharaMenu_BattleSet_C_BndEvt__MyCharaMenu_BattleSet_LeftSideParameters_K2Node_ComponentBoundEvent_1_OnDetailedStatusClicked__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.EscDetailedStatus
	 */
	struct UMyCharaMenu_BattleSet_C_EscDetailedStatus_Params
	{	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.StopListenInput
	 */
	struct UMyCharaMenu_BattleSet_C_StopListenInput_Params
	{	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_9_OnTopInfoTacticalSkillIconPressed__DelegateSignature
	 */
	struct UMyCharaMenu_BattleSet_C_BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_9_OnTopInfoTacticalSkillIconPressed__DelegateSignature_Params
	{
	public:
		ESkillActionPosition                                       InTacticalSkillSAP;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KVQ8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InSkillId;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InSkillLevel;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_10_OnTopInfoBattleImagineIconPressed__DelegateSignature
	 */
	struct UMyCharaMenu_BattleSet_C_BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_10_OnTopInfoBattleImagineIconPressed__DelegateSignature_Params
	{
	public:
		ESkillActionPosition                                       InBattleImagineSAP;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U1W1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InBattleImagineUniqueId;                                 // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_11_OnTopInfoClassAbilityIconPressed__DelegateSignature
	 */
	struct UMyCharaMenu_BattleSet_C_BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_11_OnTopInfoClassAbilityIconPressed__DelegateSignature_Params
	{
	public:
		int32_t                                                    InSkillSlotId;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InSkillId;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_12_OnTopInfoInnerImagineIconPressed__DelegateSignature
	 */
	struct UMyCharaMenu_BattleSet_C_BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_12_OnTopInfoInnerImagineIconPressed__DelegateSignature_Params
	{
	public:
		ESBPlayerPassiveImagineSlotType                            InInnerImagineSlotType;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C5C9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InImagineId;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.BndEvt__MyCharaMenu_BattleSet_BattleCordeSetHeadingForBattleSet_K2Node_ComponentBoundEvent_1_OnAdminOrEditBtnPressed__DelegateSignature
	 */
	struct UMyCharaMenu_BattleSet_C_BndEvt__MyCharaMenu_BattleSet_BattleCordeSetHeadingForBattleSet_K2Node_ComponentBoundEvent_1_OnAdminOrEditBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnOpenMenu
	 */
	struct UMyCharaMenu_BattleSet_C_OnOpenMenu_Params
	{	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_0_OnTopInfoWeaponIconPressed__DelegateSignature
	 */
	struct UMyCharaMenu_BattleSet_C_BndEvt__MyCharaMenu_BattleSet_TopInfoBase_K2Node_ComponentBoundEvent_0_OnTopInfoWeaponIconPressed__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.ExecuteUbergraph_MyCharaMenu_BattleSet
	 */
	struct UMyCharaMenu_BattleSet_C_ExecuteUbergraph_MyCharaMenu_BattleSet_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnIsChildWidgetOpened__DelegateSignature
	 */
	struct UMyCharaMenu_BattleSet_C_OnIsChildWidgetOpened__DelegateSignature_Params
	{
	public:
		bool                                                       InIsChildWidgetOpened;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnResetPlayerAvatarRotate__DelegateSignature
	 */
	struct UMyCharaMenu_BattleSet_C_OnResetPlayerAvatarRotate__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnEquippedWeaponSpawned__DelegateSignature
	 */
	struct UMyCharaMenu_BattleSet_C_OnEquippedWeaponSpawned__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnIsCmnBackBtnVisible__DelegateSignature
	 */
	struct UMyCharaMenu_BattleSet_C_OnIsCmnBackBtnVisible__DelegateSignature_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnPlayerCharacterEquippedCostumeChanged__DelegateSignature
	 */
	struct UMyCharaMenu_BattleSet_C_OnPlayerCharacterEquippedCostumeChanged__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnSetPlayerAvatarRotateActive__DelegateSignature
	 */
	struct UMyCharaMenu_BattleSet_C_OnSetPlayerAvatarRotateActive__DelegateSignature_Params
	{
	public:
		bool                                                       InIsRotateActive;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.OnSetPlayerCaptureStudioHidden__DelegateSignature
	 */
	struct UMyCharaMenu_BattleSet_C_OnSetPlayerCaptureStudioHidden__DelegateSignature_Params
	{
	public:
		bool                                                       InIsHidden;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_BattleSet.MyCharaMenu_BattleSet_C.Close_Detail__DelegateSignature
	 */
	struct UMyCharaMenu_BattleSet_C_Close_Detail__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
