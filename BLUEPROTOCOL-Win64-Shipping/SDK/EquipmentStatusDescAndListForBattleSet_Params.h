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
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.SetIsEquipmentListEquipChangeInProgress
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_SetIsEquipmentListEquipChangeInProgress_Params
	{
	public:
		bool                                                       bInIsEquipChangeProceeeding;                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.InitSelectedEquipmentStatusDesc
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_InitSelectedEquipmentStatusDesc_Params
	{
	public:
		E_BattleSetInfoType                                        InBattleSetInfoType;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBCharaEquipType                                          InEquipType;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsStorageMode;                                         // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.InitEquippedEquipmentStatusDesc
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_InitEquippedEquipmentStatusDesc_Params
	{
	public:
		class FString                                              InEquippedEquipmentUniqueId;                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		E_BattleSetInfoType                                        InBattleSetInfoType;                                     // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBCharaEquipType                                          InEquipType;                                             // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.SetLeftSideParameterExpGaugeUpdateStop
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_SetLeftSideParameterExpGaugeUpdateStop_Params
	{
	public:
		bool                                                       InIsUpdateStop;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.CheckIfBattleImagineWithPossessionSkillIsMultiple
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_CheckIfBattleImagineWithPossessionSkillIsMultiple_Params
	{
	public:
		int32_t                                                    InImagineId;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBCharaEquipType                                          InBattleImagineEquipType;                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OutIsEquipped;                                           // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YPBS[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.CheckIfBattleImagineIdDuplicate
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_CheckIfBattleImagineIdDuplicate_Params
	{
	public:
		int32_t                                                    InImagineId;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBCharaEquipType                                          InBattleImagineEquipType;                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OutDuplicate;                                            // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.IsHideWindowAnimePlaying
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_IsHideWindowAnimePlaying_Params
	{
	public:
		bool                                                       OutIsPlaying;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.SetClassChangeLoadingVisibility
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_SetClassChangeLoadingVisibility_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.SetClassChangedJingleVisibility
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_SetClassChangedJingleVisibility_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.IsCharaDetailedStatusOpen
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_IsCharaDetailedStatusOpen_Params
	{
	public:
		bool                                                       OutIsOpen;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.GetBattleSetInfoType
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_GetBattleSetInfoType_Params
	{
	public:
		E_BattleSetInfoType                                        OutBattleSetInfoType;                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.RequestPlayerCharacterCalcEquipStatusDiff
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_RequestPlayerCharacterCalcEquipStatusDiff_Params
	{
	public:
		class FString                                              InCurrEquipmentUniqueId;                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              InNewEquipmentUniqueId;                                  // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.UpdateLeftSideParameterStatus
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_UpdateLeftSideParameterStatus_Params
	{
	public:
		bool                                                       InIncludesClassInfoUpdate;                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.GetIsCostumePartsLoading
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_GetIsCostumePartsLoading_Params
	{
	public:
		bool                                                       OutIsCostumePartsLoading;                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.SetIsCostumePartsLoading
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_SetIsCostumePartsLoading_Params
	{
	public:
		bool                                                       InIsCostumePartsLoading;                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.SetEquipmentModelCaptureStudioEnable
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_SetEquipmentModelCaptureStudioEnable_Params
	{
	public:
		bool                                                       InIsEnabled;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.CreateEquipmentModelCaptureStudio
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_CreateEquipmentModelCaptureStudio_Params
	{
	public:
		E_BattleSetInfoType                                        InInfoType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.SwitchStatusType
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_SwitchStatusType_Params
	{
	public:
		int32_t                                                    InStatusTypeId;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0XA7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.UpdateSelectedEquipmentDesc
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_UpdateSelectedEquipmentDesc_Params
	{
	public:
		class FString                                              InEquipmentUniqueId;                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       InForceUpdate;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.UpdateEquippedEquipmentDesc
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_UpdateEquippedEquipmentDesc_Params
	{
	public:
		class FString                                              InEquipmentUniqueId;                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       InForceUpdate;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.HideWindow
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_HideWindow_Params
	{	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ShowWindow
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_ShowWindow_Params
	{
	public:
		E_BattleSetInfoType                                        InInfoType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBClassType                                               InEquipClassType;                                        // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBCharaEquipType                                          InEquipType;                                             // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsStorageMode;                                         // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.MoveEquipmentToBagRequestProc
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_MoveEquipmentToBagRequestProc_Params
	{
	public:
		EItemType                                                  InEquipmentItemType;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnSaveItemStorage
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_OnSaveItemStorage_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PJML[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FOwnItemInfo>                                InDirtyItems;                                            // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.InnerImagineChangeProc
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_InnerImagineChangeProc_Params
	{
	public:
		class FString                                              InInnerImagineUniqueId;                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       InDisarm;                                                // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ContinueInnerImagineChangeProcFromUseUnusedEquipConfirmDialog
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_ContinueInnerImagineChangeProcFromUseUnusedEquipConfirmDialog_Params
	{	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnInnerImagineEquipChangeCompleted
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_OnInnerImagineEquipChangeCompleted_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBCharaEquipType                                          EquipType;                                               // 0x0004(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8DLE[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              UniqueId;                                                // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       IsEquip;                                                 // 0x0018(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInIsExpiredStickerWeapons;                              // 0x0019(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6K4X[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      InExpiredStickerWeaponUniqueIds;                         // 0x0020(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FSBExpiredEquipmentData                             InExpiredEquipmentData;                                  // 0x0030(0x0130)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ContinueInnerImagineChangeProcFromMoveEquipmentToBagRequest
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_ContinueInnerImagineChangeProcFromMoveEquipmentToBagRequest_Params
	{	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnCharaEquipPassiveImagineChanged
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_OnCharaEquipPassiveImagineChanged_Params
	{	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_SelectedEquipmentStatusDesc_K2Node_ComponentBoundEvent_0_OnRequestBattleImagineModelLoad__DelegateSignature
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_BndEvt__EquipmentStatusDescAndListForBattleSet_SelectedEquipmentStatusDesc_K2Node_ComponentBoundEvent_0_OnRequestBattleImagineModelLoad__DelegateSignature_Params
	{
	public:
		struct FInventoryItemData                                  InBattleImagineInventoryItemData;                        // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BattleImagineModelLoadCompleted
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_BattleImagineModelLoadCompleted_Params
	{	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BattleImagineChangeProc
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_BattleImagineChangeProc_Params
	{
	public:
		class FString                                              InBattleImagineUniqueId;                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       InDisarm;                                                // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ContinueBattleImagineChangeProcFromUseUnusedEquipConfirmDialog
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_ContinueBattleImagineChangeProcFromUseUnusedEquipConfirmDialog_Params
	{	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnBattleImagineEquipChangeCompleted
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_OnBattleImagineEquipChangeCompleted_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBCharaEquipType                                          EquipType;                                               // 0x0004(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OH81[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              UniqueId;                                                // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       IsEquip;                                                 // 0x0018(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInIsExpiredStickerWeapons;                              // 0x0019(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FMGT[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      InExpiredStickerWeaponUniqueIds;                         // 0x0020(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FSBExpiredEquipmentData                             InExpiredEquipmentData;                                  // 0x0030(0x0130)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ContinueBattleImagineChangeProcFromMoveEquipmentToBagRequest
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_ContinueBattleImagineChangeProcFromMoveEquipmentToBagRequest_Params
	{	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnImagineArtsChanged
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_OnImagineArtsChanged_Params
	{
	public:
		ESkillActionPosition                                       ChangedSAP;                                              // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YDCD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              UniqueId;                                                // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.WeaponChangeProc
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_WeaponChangeProc_Params
	{
	public:
		class FString                                              InWeaponUniqueId;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnWeaponEquipDelegate
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_OnWeaponEquipDelegate_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInIsExpiredStickerWeapons;                              // 0x0004(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HC4M[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      InExpiredStickerWeaponUniqueIds;                         // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FSBExpiredEquipmentData                             InExpiredEquipmentData;                                  // 0x0018(0x0130)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.WeaponModelLoadCompleted
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_WeaponModelLoadCompleted_Params
	{	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_SelectedEquipmentStatusDesc_K2Node_ComponentBoundEvent_0_OnRequestWeaponModelLoad__DelegateSignature
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_BndEvt__EquipmentStatusDescAndListForBattleSet_SelectedEquipmentStatusDesc_K2Node_ComponentBoundEvent_0_OnRequestWeaponModelLoad__DelegateSignature_Params
	{
	public:
		struct FInventoryItemData                                  InWeaponInventoryItemData;                               // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnClassChangeNotify
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_OnClassChangeNotify_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInIsExpiredStickerWeapons;                              // 0x0004(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XE66[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      InExpiredStickerWeaponUniqueIds;                         // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FSBExpiredEquipmentData                             InDirtyExpiredEquipmentData;                             // 0x0018(0x0130)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnClientRestart
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_OnClientRestart_Params
	{	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnSpawnWeapon
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_OnSpawnWeapon_Params
	{
	public:
		int32_t                                                    InInventoryIndex;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBWeaponEquipType                                         InWeaponEquipType;                                       // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_ClassChangedJingle_K2Node_ComponentBoundEvent_1_OnPlayedAnim__DelegateSignature
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_BndEvt__EquipmentStatusDescAndListForBattleSet_ClassChangedJingle_K2Node_ComponentBoundEvent_1_OnPlayedAnim__DelegateSignature_Params
	{	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ContinueWeaponChangeProcFromUseUnusedEquipConfirmDialog
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_ContinueWeaponChangeProcFromUseUnusedEquipConfirmDialog_Params
	{	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ContinueWeaponChangeProcFromMoveEquipmentToBagRequest
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_ContinueWeaponChangeProcFromMoveEquipmentToBagRequest_Params
	{	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ReturnFromClassChangeProgressContinueConfirmDialog
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_ReturnFromClassChangeProgressContinueConfirmDialog_Params
	{	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnClassChangeFailure
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_OnClassChangeFailure_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.SetWeaponModelRotateActive
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_SetWeaponModelRotateActive_Params
	{
	public:
		bool                                                       InIsRotateActive;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ShowUnchangeableMessageDialog
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_ShowUnchangeableMessageDialog_Params
	{
	public:
		ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues    InUnchangeableRetValue;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_BattleSetInfoType                                        InBattleSetInfoType;                                     // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ShowUsingUnusedEquipConfirmDialog
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_ShowUsingUnusedEquipConfirmDialog_Params
	{	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.EndUsingUnusedEquipConfirmDialog
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_EndUsingUnusedEquipConfirmDialog_Params
	{
	public:
		EYesNoDialogResult                                         InYesNoResult;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ShowBattleImagineDuplicateMessageDialog
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_ShowBattleImagineDuplicateMessageDialog_Params
	{	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ShowBattleImagineWithPossessionSkillIsEquippedMessageDialog
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_ShowBattleImagineWithPossessionSkillIsEquippedMessageDialog_Params
	{	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ShowClassChangeUnableMessageDialog
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_ShowClassChangeUnableMessageDialog_Params
	{	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ShowQuestProgressUnableByClassChangeConfirmDialog
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_ShowQuestProgressUnableByClassChangeConfirmDialog_Params
	{	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.Construct
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_Construct_Params
	{	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnAnimationFinished
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnPress_Cancel
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_OnPress_Cancel_Params
	{	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.UiInputBlock
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_UiInputBlock_Params
	{
	public:
		bool                                                       InIsBlock;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__BtnScreen_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_BndEvt__BtnScreen_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.UIInputBlockFrontRow
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_UIInputBlockFrontRow_Params
	{
	public:
		bool                                                       InIsBlock;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.Destruct
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_Destruct_Params
	{	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__MyCharaMenu_WeaponDescAndListlForBattleSet_StatusTypeSwitchBtn_K2Node_ComponentBoundEvent_7_OnSwitchBtnPressed__DelegateSignature
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_BndEvt__MyCharaMenu_WeaponDescAndListlForBattleSet_StatusTypeSwitchBtn_K2Node_ComponentBoundEvent_7_OnSwitchBtnPressed__DelegateSignature_Params
	{
	public:
		int32_t                                                    InPressedSwitchBtnId;                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_List_K2Node_ComponentBoundEvent_8_OnListItemSelected__DelegateSignature
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_BndEvt__EquipmentStatusDescAndListForBattleSet_List_K2Node_ComponentBoundEvent_8_OnListItemSelected__DelegateSignature_Params
	{
	public:
		class UItemIconBtn_C*                                      InSelectedListItem;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_List_K2Node_ComponentBoundEvent_11_OnEquipChangeBtnPressed__DelegateSignature
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_BndEvt__EquipmentStatusDescAndListForBattleSet_List_K2Node_ComponentBoundEvent_11_OnEquipChangeBtnPressed__DelegateSignature_Params
	{
	public:
		E_BattleSetInfoType                                        InInfoType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IJQX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InEquipmentUniqueId;                                     // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_List_K2Node_ComponentBoundEvent_13_OnFilterApply__DelegateSignature
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_BndEvt__EquipmentStatusDescAndListForBattleSet_List_K2Node_ComponentBoundEvent_13_OnFilterApply__DelegateSignature_Params
	{	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_List_K2Node_ComponentBoundEvent_14_OnSortTypeSelected__DelegateSignature
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_BndEvt__EquipmentStatusDescAndListForBattleSet_List_K2Node_ComponentBoundEvent_14_OnSortTypeSelected__DelegateSignature_Params
	{
	public:
		ESBItemSortType                                            InSelectedSortType;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.PreConstruct
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_EquipmentList_K2Node_ComponentBoundEvent_0_OnFilterBtnBagOrStoragePressed__DelegateSignature
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_BndEvt__EquipmentStatusDescAndListForBattleSet_EquipmentList_K2Node_ComponentBoundEvent_0_OnFilterBtnBagOrStoragePressed__DelegateSignature_Params
	{
	public:
		bool                                                       InIsFilterBtnStoragePressed;                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_EquippedEquipmentStatusDesc_K2Node_ComponentBoundEvent_1_OnImagineRemoveBtnPressed__DelegateSignature
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_BndEvt__EquipmentStatusDescAndListForBattleSet_EquippedEquipmentStatusDesc_K2Node_ComponentBoundEvent_1_OnImagineRemoveBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnCalcEquipStatusDiff
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_OnCalcEquipStatusDiff_Params
	{	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_BackToBattleSetTopLevelBtn_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_BndEvt__EquipmentStatusDescAndListForBattleSet_BackToBattleSetTopLevelBtn_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature_Params
	{	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.CloseDetailedStatus
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_CloseDetailedStatus_Params
	{	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_LeftSideParametersForSecondLevel_K2Node_ComponentBoundEvent_6_OnDetailStatusBtnClicked__DelegateSignature
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_BndEvt__EquipmentStatusDescAndListForBattleSet_LeftSideParametersForSecondLevel_K2Node_ComponentBoundEvent_6_OnDetailStatusBtnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_BtnFullScreenForDetailedStatus_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_BndEvt__EquipmentStatusDescAndListForBattleSet_BtnFullScreenForDetailedStatus_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ExpiredItemNoticeSystemMessageTimerEnd
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_ExpiredItemNoticeSystemMessageTimerEnd_Params
	{	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ChangeEquipmentResultProc
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_ChangeEquipmentResultProc_Params
	{
	public:
		TArray<class FString>                                      InExpiredWeaponStickerUniqueIds;                         // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FSBExpiredEquipmentData                             InExpiredEquipmentData;                                  // 0x0010(0x0130)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       InIsClassChange;                                         // 0x0140(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InIsDisarm;                                              // 0x0141(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnImagineEquipChangeCompleted
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_OnImagineEquipChangeCompleted_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBCharaEquipType                                          EquipType;                                               // 0x0004(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3OEW[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              UniqueId;                                                // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       IsEquip;                                                 // 0x0018(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInIsExpiredStickerWeapons;                              // 0x0019(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1MV5[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      InExpiredStickerWeaponUniqueIds;                         // 0x0020(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FSBExpiredEquipmentData                             InExpiredEquipmentData;                                  // 0x0030(0x0130)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_EquipmentList_K2Node_ComponentBoundEvent_1_OnCancelBtnPressed__DelegateSignature
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_BndEvt__EquipmentStatusDescAndListForBattleSet_EquipmentList_K2Node_ComponentBoundEvent_1_OnCancelBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnWaitEquippedWeaponSpawnTimerEnd
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_OnWaitEquippedWeaponSpawnTimerEnd_Params
	{	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnWaitPlayerStatusRecalcEndAtImagineEquipChange
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_OnWaitPlayerStatusRecalcEndAtImagineEquipChange_Params
	{	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_EquipmentList_K2Node_ComponentBoundEvent_5_OnIsChangingEquip__DelegateSignature
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_BndEvt__EquipmentStatusDescAndListForBattleSet_EquipmentList_K2Node_ComponentBoundEvent_5_OnIsChangingEquip__DelegateSignature_Params
	{	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ExecuteUbergraph_EquipmentStatusDescAndListForBattleSet
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_ExecuteUbergraph_EquipmentStatusDescAndListForBattleSet_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnTermEnd__DelegateSignature
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_OnTermEnd__DelegateSignature_Params
	{	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnCharaDetailedStatus__DelegateSignature
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_OnCharaDetailedStatus__DelegateSignature_Params
	{	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnEquippedWeaponChangeRequestCompleted__DelegateSignature
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_OnEquippedWeaponChangeRequestCompleted__DelegateSignature_Params
	{	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnSetLeftSideParameterExpGaugeUpdateStop__DelegateSignature
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_OnSetLeftSideParameterExpGaugeUpdateStop__DelegateSignature_Params
	{
	public:
		bool                                                       InIsUpdateStop;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnEquippedInnerImagineChangeRequestCompleted__DelegateSignature
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_OnEquippedInnerImagineChangeRequestCompleted__DelegateSignature_Params
	{	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnEquippedBattleImagineChangeRequestCompleted__DelegateSignature
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_OnEquippedBattleImagineChangeRequestCompleted__DelegateSignature_Params
	{	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnClassChanged__DelegateSignature
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_OnClassChanged__DelegateSignature_Params
	{	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnEquippedWeaponSpawned__DelegateSignature
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_OnEquippedWeaponSpawned__DelegateSignature_Params
	{
	public:
		E_BattleSetInfoType                                        InBattleSetInfoType;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnResetLeftSideParameterDiffMark__DelegateSignature
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_OnResetLeftSideParameterDiffMark__DelegateSignature_Params
	{	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnLeftSideParameterStatusUpdated__DelegateSignature
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_OnLeftSideParameterStatusUpdated__DelegateSignature_Params
	{
	public:
		E_BattleSetInfoType                                        InBattleSetInfoType;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIncludesClassInfoUpdate;                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnPlayerCharacterEquippedCostumeChanged__DelegateSignature
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_OnPlayerCharacterEquippedCostumeChanged__DelegateSignature_Params
	{	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnEquipmentChangeBtnPressed__DelegateSignature
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_OnEquipmentChangeBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnEquipmentListItemSelected__DelegateSignature
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_OnEquipmentListItemSelected__DelegateSignature_Params
	{
	public:
		class FString                                              InEquippedEquipmentUniqueId;                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              InSelectedEquipmentUniqueId;                             // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnHideWindowFinished__DelegateSignature
	 */
	struct UEquipmentStatusDescAndListForBattleSet_C_OnHideWindowFinished__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
