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
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.CalculateBattleScoreForCorde
	 */
	struct UBattleCordeEditForBattleSet_C_CalculateBattleScoreForCorde_Params
	{
	public:
		TArray<struct FSBPlayerPresetEquipItem>                    InPresetEquipItemList;                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    OutBattleScore;                                          // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U1Z2[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.Update Active Click Input Action
	 */
	struct UBattleCordeEditForBattleSet_C_UpdateActiveClickInputAction_Params
	{	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.Stop Active Click Input Action
	 */
	struct UBattleCordeEditForBattleSet_C_StopActiveClickInputAction_Params
	{	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.Update Register Corde Btn Text
	 */
	struct UBattleCordeEditForBattleSet_C_UpdateRegisterCordeBtnText_Params
	{
	public:
		bool                                                       bInIsOverwriteMode;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CH9C[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ExtractCordeEquipItemsInEquipmentBag
	 */
	struct UBattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag_Params
	{
	public:
		TArray<struct FSBPlayerPresetEquipItem>                    InCordeEquipItemList;                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FSBPlayerPresetEquipItem>                    OutExtractedCordeEquipItems;                             // 0x0010(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.CheckIfTacticalSkillIsActive
	 */
	struct UBattleCordeEditForBattleSet_C_CheckIfTacticalSkillIsActive_Params
	{
	public:
		bool                                                       OutIsActive;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3HYO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.GetCordeEquipmentStorageItemDatas
	 */
	struct UBattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas_Params
	{
	public:
		int32_t                                                    InCordeId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M3GD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FSBStorageItemData>                          OutEquipmentStorageItemDatas;                            // 0x0008(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.UpdateBattleCordeGuide
	 */
	struct UBattleCordeEditForBattleSet_C_UpdateBattleCordeGuide_Params
	{
	public:
		bool                                                       InIsStorageMode;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.RequestCordeDataReload
	 */
	struct UBattleCordeEditForBattleSet_C_RequestCordeDataReload_Params
	{
	public:
		bool                                                       OutRequestSuccessed;                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.SetLeftSideParameterExpGaugeUpdateStop
	 */
	struct UBattleCordeEditForBattleSet_C_SetLeftSideParameterExpGaugeUpdateStop_Params
	{
	public:
		bool                                                       InIsUpdateStop;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.SetClassChangeLoadingVisibility
	 */
	struct UBattleCordeEditForBattleSet_C_SetClassChangeLoadingVisibility_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.SetClassChangedJingleVisibility
	 */
	struct UBattleCordeEditForBattleSet_C_SetClassChangedJingleVisibility_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.HideCharaCapture2D
	 */
	struct UBattleCordeEditForBattleSet_C_HideCharaCapture2D_Params
	{	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowCharaCapture2D
	 */
	struct UBattleCordeEditForBattleSet_C_ShowCharaCapture2D_Params
	{	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.CheckCordeEquipmentsAreUnused
	 */
	struct UBattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused_Params
	{
	public:
		int32_t                                                    InCordeId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsStorageMode;                                         // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       OutIsUnused;                                             // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QPV5[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.CheckCordeEquipmentsAreAllValid
	 */
	struct UBattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid_Params
	{
	public:
		int32_t                                                    InCordeId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OutIsAllEquipmentValid;                                  // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       OutIsEquipmentInStorage;                                 // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EHN5[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.CheckCordeWeaponIsValid
	 */
	struct UBattleCordeEditForBattleSet_C_CheckCordeWeaponIsValid_Params
	{
	public:
		int32_t                                                    InCordeId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsStorageMode;                                         // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       OutIsValid;                                              // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.SetIsSelectedCordeEquippable
	 */
	struct UBattleCordeEditForBattleSet_C_SetIsSelectedCordeEquippable_Params
	{
	public:
		bool                                                       InIsEquippable;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.SetEquipCordeBtnEnable
	 */
	struct UBattleCordeEditForBattleSet_C_SetEquipCordeBtnEnable_Params
	{
	public:
		bool                                                       InIsEnabled;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.RegisterCorde
	 */
	struct UBattleCordeEditForBattleSet_C_RegisterCorde_Params
	{
	public:
		int32_t                                                    InCordeListId;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LOK4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InCordeName;                                             // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.GetCordeListEmptySlotId
	 */
	struct UBattleCordeEditForBattleSet_C_GetCordeListEmptySlotId_Params
	{
	public:
		int32_t                                                    OutListIndex;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VE0V[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.CreateCordeList
	 */
	struct UBattleCordeEditForBattleSet_C_CreateCordeList_Params
	{
	public:
		bool                                                       InResetSelectedCordeListItem;                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.IsCharaDetailedStatusOpen
	 */
	struct UBattleCordeEditForBattleSet_C_IsCharaDetailedStatusOpen_Params
	{
	public:
		bool                                                       OutIsOpen;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.RequestPlayerCharacterCalcEquipStatusDiff
	 */
	struct UBattleCordeEditForBattleSet_C_RequestPlayerCharacterCalcEquipStatusDiff_Params
	{
	public:
		int32_t                                                    InCordeId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8GMP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.UpdateLeftSideParameterStatus
	 */
	struct UBattleCordeEditForBattleSet_C_UpdateLeftSideParameterStatus_Params
	{
	public:
		bool                                                       InIncludesClassInfoUpdate;                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.GetIsCostumePartsLoading
	 */
	struct UBattleCordeEditForBattleSet_C_GetIsCostumePartsLoading_Params
	{
	public:
		bool                                                       OutIsCostumePartsLoading;                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.SetIsCostumePartsLoading
	 */
	struct UBattleCordeEditForBattleSet_C_SetIsCostumePartsLoading_Params
	{
	public:
		bool                                                       InIsCostumePartsLoading;                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.IsHideWindowAnimePlaying
	 */
	struct UBattleCordeEditForBattleSet_C_IsHideWindowAnimePlaying_Params
	{
	public:
		bool                                                       OutIsPlaying;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.HideWindow
	 */
	struct UBattleCordeEditForBattleSet_C_HideWindow_Params
	{	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowWindow
	 */
	struct UBattleCordeEditForBattleSet_C_ShowWindow_Params
	{
	public:
		ESBClassType                                               InEquipClassType;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsStorageMode;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O6HH[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnSaveItemStorage
	 */
	struct UBattleCordeEditForBattleSet_C_OnSaveItemStorage_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W303[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FOwnItemInfo>                                InDirtyItems;                                            // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.StartCordeNameInputProc
	 */
	struct UBattleCordeEditForBattleSet_C_StartCordeNameInputProc_Params
	{
	public:
		bool                                                       InIsForRename;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.SetupNameInputDialogEventBind
	 */
	struct UBattleCordeEditForBattleSet_C_SetupNameInputDialogEventBind_Params
	{
	public:
		bool                                                       InUnbindEvent;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnNameInputDialogNameDecided
	 */
	struct UBattleCordeEditForBattleSet_C_OnNameInputDialogNameDecided_Params
	{
	public:
		class FString                                              PlayerName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnNameInputDilaogClosed
	 */
	struct UBattleCordeEditForBattleSet_C_OnNameInputDilaogClosed_Params
	{	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnNameInputDialogButtonFullScreenClicked
	 */
	struct UBattleCordeEditForBattleSet_C_OnNameInputDialogButtonFullScreenClicked_Params
	{	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowCordeUnequippableMessageDialog
	 */
	struct UBattleCordeEditForBattleSet_C_ShowCordeUnequippableMessageDialog_Params
	{	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowUsingUnusedEquipConfirmDialog
	 */
	struct UBattleCordeEditForBattleSet_C_ShowUsingUnusedEquipConfirmDialog_Params
	{	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.EndUsingUnusedEquipConfirmDialog
	 */
	struct UBattleCordeEditForBattleSet_C_EndUsingUnusedEquipConfirmDialog_Params
	{
	public:
		EYesNoDialogResult                                         InYesNoResult;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowCordeSlotIsFullMessageDialog
	 */
	struct UBattleCordeEditForBattleSet_C_ShowCordeSlotIsFullMessageDialog_Params
	{	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowNewCordeRegisterSuccessedMessageDialog
	 */
	struct UBattleCordeEditForBattleSet_C_ShowNewCordeRegisterSuccessedMessageDialog_Params
	{
	public:
		class FString                                              InNewCordeName;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bInIsCordeOverwrite;                                     // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowRenameCordeNameSuccessedMessageDialog
	 */
	struct UBattleCordeEditForBattleSet_C_ShowRenameCordeNameSuccessedMessageDialog_Params
	{
	public:
		class FString                                              InRenamedCordeName;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowCordeDeleteConfirmDialog
	 */
	struct UBattleCordeEditForBattleSet_C_ShowCordeDeleteConfirmDialog_Params
	{	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.EndCordeDeleteConfirmDialog
	 */
	struct UBattleCordeEditForBattleSet_C_EndCordeDeleteConfirmDialog_Params
	{
	public:
		EYesNoDialogResult                                         InYesNoResult;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowCordeDeleteSuccessedMessageDialog
	 */
	struct UBattleCordeEditForBattleSet_C_ShowCordeDeleteSuccessedMessageDialog_Params
	{	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowEquipCordeConfirmMessageDialog
	 */
	struct UBattleCordeEditForBattleSet_C_ShowEquipCordeConfirmMessageDialog_Params
	{
	public:
		class FString                                              InCordeName;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.EquipCordeConfirmEnd
	 */
	struct UBattleCordeEditForBattleSet_C_EquipCordeConfirmEnd_Params
	{
	public:
		EYesNoDialogResult                                         Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowCordeEquipSuccessedMessageDialog
	 */
	struct UBattleCordeEditForBattleSet_C_ShowCordeEquipSuccessedMessageDialog_Params
	{	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowEquipCordeNotAllValidConfirmDialog
	 */
	struct UBattleCordeEditForBattleSet_C_ShowEquipCordeNotAllValidConfirmDialog_Params
	{	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowMoveCordeEquipmentFromStorageConfirmDialog
	 */
	struct UBattleCordeEditForBattleSet_C_ShowMoveCordeEquipmentFromStorageConfirmDialog_Params
	{	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.MoveCordeEquipmentFromStorageComfirmEnd
	 */
	struct UBattleCordeEditForBattleSet_C_MoveCordeEquipmentFromStorageComfirmEnd_Params
	{
	public:
		EYesNoDialogResult                                         Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.EquipCordeNotAllValidConfirmEnd
	 */
	struct UBattleCordeEditForBattleSet_C_EquipCordeNotAllValidConfirmEnd_Params
	{
	public:
		EYesNoDialogResult                                         Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowEquipmentBagIsFullMessageDialog
	 */
	struct UBattleCordeEditForBattleSet_C_ShowEquipmentBagIsFullMessageDialog_Params
	{	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ContinueCordeEquipmentProc
	 */
	struct UBattleCordeEditForBattleSet_C_ContinueCordeEquipmentProc_Params
	{	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowQuestProgressUnableByClassChangeConfirmDialog
	 */
	struct UBattleCordeEditForBattleSet_C_ShowQuestProgressUnableByClassChangeConfirmDialog_Params
	{	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowEquippedTacticalSkillIsActiveMessageDialog
	 */
	struct UBattleCordeEditForBattleSet_C_ShowEquippedTacticalSkillIsActiveMessageDialog_Params
	{	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.Construct
	 */
	struct UBattleCordeEditForBattleSet_C_Construct_Params
	{	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnAnimationFinished
	 */
	struct UBattleCordeEditForBattleSet_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.UiInputBlock
	 */
	struct UBattleCordeEditForBattleSet_C_UiInputBlock_Params
	{
	public:
		bool                                                       InIsBlock;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__BtnScreen_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBattleCordeEditForBattleSet_C_BndEvt__BtnScreen_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.Destruct
	 */
	struct UBattleCordeEditForBattleSet_C_Destruct_Params
	{	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.PreConstruct
	 */
	struct UBattleCordeEditForBattleSet_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnCalcEquipStatusDiff
	 */
	struct UBattleCordeEditForBattleSet_C_OnCalcEquipStatusDiff_Params
	{	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_BackToBattleSetTopLevelBtn_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature
	 */
	struct UBattleCordeEditForBattleSet_C_BndEvt__EquipmentStatusDescAndListForBattleSet_BackToBattleSetTopLevelBtn_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_LeftSideParametersForSecondLevel_K2Node_ComponentBoundEvent_6_OnDetailStatusBtnClicked__DelegateSignature
	 */
	struct UBattleCordeEditForBattleSet_C_BndEvt__EquipmentStatusDescAndListForBattleSet_LeftSideParametersForSecondLevel_K2Node_ComponentBoundEvent_6_OnDetailStatusBtnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_BtnFullScreenForDetailedStatus_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBattleCordeEditForBattleSet_C_BndEvt__EquipmentStatusDescAndListForBattleSet_BtnFullScreenForDetailedStatus_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnPress_Cancel
	 */
	struct UBattleCordeEditForBattleSet_C_OnPress_Cancel_Params
	{	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.UIInputBlockFrontRow
	 */
	struct UBattleCordeEditForBattleSet_C_UIInputBlockFrontRow_Params
	{
	public:
		bool                                                       InIsBlock;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnSavePlayerPresetEquipment
	 */
	struct UBattleCordeEditForBattleSet_C_OnSavePlayerPresetEquipment_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__BattleCordeEditForBattleSet_CharaDetailedStatus_K2Node_ComponentBoundEvent_4_CloseEvent__DelegateSignature
	 */
	struct UBattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_CharaDetailedStatus_K2Node_ComponentBoundEvent_4_CloseEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.CloseCharaDetailedStatus
	 */
	struct UBattleCordeEditForBattleSet_C_CloseCharaDetailedStatus_Params
	{	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_5_OnCordeListItemPresssed__DelegateSignature
	 */
	struct UBattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_5_OnCordeListItemPresssed__DelegateSignature_Params
	{
	public:
		class UBattleCordeListItem_C*                              InListItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_8_OnCordeDeleteBtnPressed__DelegateSignature
	 */
	struct UBattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_8_OnCordeDeleteBtnPressed__DelegateSignature_Params
	{
	public:
		class UBattleCordeListItem_C*                              InSelectedCordeListItem;                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_9_OnCordeRenameBtnPressed__DelegateSignature
	 */
	struct UBattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_9_OnCordeRenameBtnPressed__DelegateSignature_Params
	{
	public:
		class UBattleCordeListItem_C*                              InSelectedCordeListItem;                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BattleCordeEquipProc
	 */
	struct UBattleCordeEditForBattleSet_C_BattleCordeEquipProc_Params
	{	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnSaveCharaBattlePresetEquipment
	 */
	struct UBattleCordeEditForBattleSet_C_OnSaveCharaBattlePresetEquipment_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnSpawnWeapon
	 */
	struct UBattleCordeEditForBattleSet_C_OnSpawnWeapon_Params
	{
	public:
		int32_t                                                    InventoryIndex;                                          // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBWeaponEquipType                                         InWeaponEquipType;                                       // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_10_OnCordeReplaceBtnPressed__DelegateSignature
	 */
	struct UBattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_10_OnCordeReplaceBtnPressed__DelegateSignature_Params
	{
	public:
		class UBattleCordeListItem_C*                              InSrcCordeListItem;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBattleCordeListItem_C*                              InDstCordListItem;                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnSwapPresetEquipmentList
	 */
	struct UBattleCordeEditForBattleSet_C_OnSwapPresetEquipmentList_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DstListIndex;                                            // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnClassChangeNotify
	 */
	struct UBattleCordeEditForBattleSet_C_OnClassChangeNotify_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInIsExpiredStickerWeapons;                              // 0x0004(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EEPK[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      InExpiredStickerWeaponUniqueIds;                         // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FSBExpiredEquipmentData                             InDirtyExpiredEquipmentData;                             // 0x0018(0x0130)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnClientRestart
	 */
	struct UBattleCordeEditForBattleSet_C_OnClientRestart_Params
	{	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ExpiredItemNoticeSystemMessageTimerEnd
	 */
	struct UBattleCordeEditForBattleSet_C_ExpiredItemNoticeSystemMessageTimerEnd_Params
	{	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ClassChangeResultProc
	 */
	struct UBattleCordeEditForBattleSet_C_ClassChangeResultProc_Params
	{
	public:
		TArray<class FString>                                      InExpiredWeaponStickerUniqueIds;                         // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FSBExpiredEquipmentData                             InExpiredEquipmentData;                                  // 0x0010(0x0130)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       InIsClassChange;                                         // 0x0140(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InIsDisarm;                                              // 0x0141(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_ClassChangedJingle_K2Node_ComponentBoundEvent_1_OnPlayedAnim__DelegateSignature
	 */
	struct UBattleCordeEditForBattleSet_C_BndEvt__EquipmentStatusDescAndListForBattleSet_ClassChangedJingle_K2Node_ComponentBoundEvent_1_OnPlayedAnim__DelegateSignature_Params
	{	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_11_OnCordeDataLoaded__DelegateSignature
	 */
	struct UBattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_11_OnCordeDataLoaded__DelegateSignature_Params
	{
	public:
		bool                                                       InIsDataLoadSuccessed;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__BattleCordeEditForBattleSet_RegisterCordeBtn_K2Node_ComponentBoundEvent_12_EventOnClicked__DelegateSignature
	 */
	struct UBattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_RegisterCordeBtn_K2Node_ComponentBoundEvent_12_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__BattleCordeEditForBattleSet_EquipCordeBtn_K2Node_ComponentBoundEvent_13_EventOnClicked__DelegateSignature
	 */
	struct UBattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_EquipCordeBtn_K2Node_ComponentBoundEvent_13_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ReturnFromClassChangeProgressContinueConfirmDialog
	 */
	struct UBattleCordeEditForBattleSet_C_ReturnFromClassChangeProgressContinueConfirmDialog_Params
	{	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnCharaEquipPassiveImagineChange
	 */
	struct UBattleCordeEditForBattleSet_C_OnCharaEquipPassiveImagineChange_Params
	{	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnClassChangeFailure
	 */
	struct UBattleCordeEditForBattleSet_C_OnClassChangeFailure_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ExecuteUbergraph_BattleCordeEditForBattleSet
	 */
	struct UBattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CXT4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnBattleCordeSaveRequestCompleted__DelegateSignature
	 */
	struct UBattleCordeEditForBattleSet_C_OnBattleCordeSaveRequestCompleted__DelegateSignature_Params
	{	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnTermEnd__DelegateSignature
	 */
	struct UBattleCordeEditForBattleSet_C_OnTermEnd__DelegateSignature_Params
	{	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnBattleCordeDataReloadRequestedAtInit__DelegateSignature
	 */
	struct UBattleCordeEditForBattleSet_C_OnBattleCordeDataReloadRequestedAtInit__DelegateSignature_Params
	{	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnBattleCordeDataReloaded__DelegateSignature
	 */
	struct UBattleCordeEditForBattleSet_C_OnBattleCordeDataReloaded__DelegateSignature_Params
	{	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnSetLeftSideParameterExpGaugeUpdateStop__DelegateSignature
	 */
	struct UBattleCordeEditForBattleSet_C_OnSetLeftSideParameterExpGaugeUpdateStop__DelegateSignature_Params
	{
	public:
		bool                                                       InIsUpdateStop;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnSetPlayerAvatarRotateActive__DelegateSignature
	 */
	struct UBattleCordeEditForBattleSet_C_OnSetPlayerAvatarRotateActive__DelegateSignature_Params
	{
	public:
		bool                                                       InRotateActive;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnClassChanged__DelegateSignature
	 */
	struct UBattleCordeEditForBattleSet_C_OnClassChanged__DelegateSignature_Params
	{	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnEquippedWeaponSpawned__DelegateSignature
	 */
	struct UBattleCordeEditForBattleSet_C_OnEquippedWeaponSpawned__DelegateSignature_Params
	{	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnResetLeftSideParameterDiffMark__DelegateSignature
	 */
	struct UBattleCordeEditForBattleSet_C_OnResetLeftSideParameterDiffMark__DelegateSignature_Params
	{	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnLeftSideParameterStatusUpdated__DelegateSignature
	 */
	struct UBattleCordeEditForBattleSet_C_OnLeftSideParameterStatusUpdated__DelegateSignature_Params
	{
	public:
		E_BattleSetInfoType                                        InBattleSetInfoType;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIncludesClassInfoUpdate;                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnPlayerCharacterEquippedCostumeChanged__DelegateSignature
	 */
	struct UBattleCordeEditForBattleSet_C_OnPlayerCharacterEquippedCostumeChanged__DelegateSignature_Params
	{	};

	/**
	 * Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnHideWindowFinished__DelegateSignature
	 */
	struct UBattleCordeEditForBattleSet_C_OnHideWindowFinished__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
