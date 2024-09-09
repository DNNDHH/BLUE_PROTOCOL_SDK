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
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.GetEquipBattleScore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBPlayerPresetEquipItem>            InPresetEquipItemList                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            OutBattleScore                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_LeftSideParameters_C::GetEquipBattleScore(TArray<struct FSBPlayerPresetEquipItem>* InPresetEquipItemList, int32_t* OutBattleScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.GetEquipBattleScore");
		
		UMyCharaMenu_LeftSideParameters_C_GetEquipBattleScore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InPresetEquipItemList != nullptr)
			*InPresetEquipItemList = params.InPresetEquipItemList;
		if (OutBattleScore != nullptr)
			*OutBattleScore = params.OutBattleScore;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetClassTypeForTutorialHelp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsUsingClassTypeForTutorialHelp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ESBClassType                                       InClassType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_LeftSideParameters_C::SetClassTypeForTutorialHelp(bool bInIsUsingClassTypeForTutorialHelp, ESBClassType InClassType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetClassTypeForTutorialHelp");
		
		UMyCharaMenu_LeftSideParameters_C_SetClassTypeForTutorialHelp_Params params {};
		params.bInIsUsingClassTypeForTutorialHelp = bInIsUsingClassTypeForTutorialHelp;
		params.InClassType = InClassType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetIsExpOverflowInvalid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsInvalid                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_LeftSideParameters_C::SetIsExpOverflowInvalid(bool bInIsInvalid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetIsExpOverflowInvalid");
		
		UMyCharaMenu_LeftSideParameters_C_SetIsExpOverflowInvalid_Params params {};
		params.bInIsInvalid = bInIsInvalid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetupExpOverflowGrp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsClassLevelCounterStop                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInIsClassLevelLimit                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInIsClassLevelLimitSmallerThanCounterStop                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_LeftSideParameters_C::SetupExpOverflowGrp(bool bInIsClassLevelCounterStop, bool bInIsClassLevelLimit, bool bInIsClassLevelLimitSmallerThanCounterStop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetupExpOverflowGrp");
		
		UMyCharaMenu_LeftSideParameters_C_SetupExpOverflowGrp_Params params {};
		params.bInIsClassLevelCounterStop = bInIsClassLevelCounterStop;
		params.bInIsClassLevelLimit = bInIsClassLevelLimit;
		params.bInIsClassLevelLimitSmallerThanCounterStop = bInIsClassLevelLimitSmallerThanCounterStop;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.AdjustClassInfoLayout
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_LeftSideParameters_C::AdjustClassInfoLayout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.AdjustClassInfoLayout");
		
		UMyCharaMenu_LeftSideParameters_C_AdjustClassInfoLayout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.UpdateAllParamByDhcBattleScoreInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBDhcBattleHighScoreInfo                   InScoreInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMyCharaMenu_LeftSideParameters_C::UpdateAllParamByDhcBattleScoreInfo(const struct FSBDhcBattleHighScoreInfo& InScoreInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.UpdateAllParamByDhcBattleScoreInfo");
		
		UMyCharaMenu_LeftSideParameters_C_UpdateAllParamByDhcBattleScoreInfo_Params params {};
		params.InScoreInfo = InScoreInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetDhcBattleTopMenuMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsDhcBattleTopMenuMode                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_LeftSideParameters_C::SetDhcBattleTopMenuMode(bool InIsDhcBattleTopMenuMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetDhcBattleTopMenuMode");
		
		UMyCharaMenu_LeftSideParameters_C_SetDhcBattleTopMenuMode_Params params {};
		params.InIsDhcBattleTopMenuMode = InIsDhcBattleTopMenuMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.GetItemTypeByUniqueId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InUniqueId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EItemType                                          OutItemType                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBImagineCategoryType                             OutImagineCategoryType                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_LeftSideParameters_C::GetItemTypeByUniqueId(const class FString& InUniqueId, bool* IsValid, EItemType* OutItemType, ESBImagineCategoryType* OutImagineCategoryType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.GetItemTypeByUniqueId");
		
		UMyCharaMenu_LeftSideParameters_C_GetItemTypeByUniqueId_Params params {};
		params.InUniqueId = InUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		if (OutItemType != nullptr)
			*OutItemType = params.OutItemType;
		if (OutImagineCategoryType != nullptr)
			*OutImagineCategoryType = params.OutImagineCategoryType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.GetLevelSyncTargetByUniqueId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InUniqueId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutLevelSyncTarget                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBClassType                                       OutClassType                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_LeftSideParameters_C::GetLevelSyncTargetByUniqueId(const class FString& InUniqueId, int32_t* OutLevelSyncTarget, ESBClassType* OutClassType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.GetLevelSyncTargetByUniqueId");
		
		UMyCharaMenu_LeftSideParameters_C_GetLevelSyncTargetByUniqueId_Params params {};
		params.InUniqueId = InUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLevelSyncTarget != nullptr)
			*OutLevelSyncTarget = params.OutLevelSyncTarget;
		if (OutClassType != nullptr)
			*OutClassType = params.OutClassType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.GetCurrLevelSyncTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutLevelSyncTarget                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_LeftSideParameters_C::GetCurrLevelSyncTarget(int32_t* OutLevelSyncTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.GetCurrLevelSyncTarget");
		
		UMyCharaMenu_LeftSideParameters_C_GetCurrLevelSyncTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLevelSyncTarget != nullptr)
			*OutLevelSyncTarget = params.OutLevelSyncTarget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetExpGaugeUpdateStop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsUpdateStop                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_LeftSideParameters_C::SetExpGaugeUpdateStop(bool InIsUpdateStop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetExpGaugeUpdateStop");
		
		UMyCharaMenu_LeftSideParameters_C_SetExpGaugeUpdateStop_Params params {};
		params.InIsUpdateStop = InIsUpdateStop;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.UpdateAllParam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIncludeClassInfo                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_LeftSideParameters_C::UpdateAllParam(bool InIncludeClassInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.UpdateAllParam");
		
		UMyCharaMenu_LeftSideParameters_C_UpdateAllParam_Params params {};
		params.InIncludeClassInfo = InIncludeClassInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.UpdateClassInfoDiff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InEquippedWeaponUniqueId                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      InNewWeaponUniqueId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_LeftSideParameters_C::UpdateClassInfoDiff(const class FString& InEquippedWeaponUniqueId, const class FString& InNewWeaponUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.UpdateClassInfoDiff");
		
		UMyCharaMenu_LeftSideParameters_C_UpdateClassInfoDiff_Params params {};
		params.InEquippedWeaponUniqueId = InEquippedWeaponUniqueId;
		params.InNewWeaponUniqueId = InNewWeaponUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetClassInfoDiff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBClassType                                       InClassType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InClassLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_LeftSideParameters_C::SetClassInfoDiff(ESBClassType InClassType, int32_t InClassLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetClassInfoDiff");
		
		UMyCharaMenu_LeftSideParameters_C_SetClassInfoDiff_Params params {};
		params.InClassType = InClassType;
		params.InClassLevel = InClassLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetClassInfoDiffVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_LeftSideParameters_C::SetClassInfoDiffVisibility(bool InIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetClassInfoDiffVisibility");
		
		UMyCharaMenu_LeftSideParameters_C_SetClassInfoDiffVisibility_Params params {};
		params.InIsVisible = InIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.UpdateLevelSync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsLevelSync                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_LeftSideParameters_C::UpdateLevelSync(bool InIsLevelSync)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.UpdateLevelSync");
		
		UMyCharaMenu_LeftSideParameters_C_UpdateLevelSync_Params params {};
		params.InIsLevelSync = InIsLevelSync;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.Switch All Status Value for Level Sync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsLevelSync                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InIsParamSync                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_LeftSideParameters_C::SwitchAllStatusValueforLevelSync(bool InIsLevelSync, bool InIsParamSync)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.Switch All Status Value for Level Sync");
		
		UMyCharaMenu_LeftSideParameters_C_SwitchAllStatusValueforLevelSync_Params params {};
		params.InIsLevelSync = InIsLevelSync;
		params.InIsParamSync = InIsParamSync;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.InitLevelSyncValueColor
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_LeftSideParameters_C::InitLevelSyncValueColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.InitLevelSyncValueColor");
		
		UMyCharaMenu_LeftSideParameters_C_InitLevelSyncValueColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetAchievementAndCharaNameVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_LeftSideParameters_C::SetAchievementAndCharaNameVisibility(bool InIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetAchievementAndCharaNameVisibility");
		
		UMyCharaMenu_LeftSideParameters_C_SetAchievementAndCharaNameVisibility_Params params {};
		params.InIsVisible = InIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.UpdateStatusDiffMarkBattleSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FSBPlayerPresetEquipItem>            InPresetEquipItemList                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMyCharaMenu_LeftSideParameters_C::UpdateStatusDiffMarkBattleSet(bool InIsVisible, TArray<struct FSBPlayerPresetEquipItem>* InPresetEquipItemList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.UpdateStatusDiffMarkBattleSet");
		
		UMyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMarkBattleSet_Params params {};
		params.InIsVisible = InIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InPresetEquipItemList != nullptr)
			*InPresetEquipItemList = params.InPresetEquipItemList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.DestroyAchievementList
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_LeftSideParameters_C::DestroyAchievementList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.DestroyAchievementList");
		
		UMyCharaMenu_LeftSideParameters_C_DestroyAchievementList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.GetEquipStatusDiff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InCurrEquipmentUniqueId                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      InNewEquipmentUniqueId                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               OutIsVallid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBCharacterStatus                          OutNewEquipmentStatus                                      (Parm, OutParm, NoDestructor)
	 */
	void UMyCharaMenu_LeftSideParameters_C::GetEquipStatusDiff(const class FString& InCurrEquipmentUniqueId, const class FString& InNewEquipmentUniqueId, bool* OutIsVallid, struct FSBCharacterStatus* OutNewEquipmentStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.GetEquipStatusDiff");
		
		UMyCharaMenu_LeftSideParameters_C_GetEquipStatusDiff_Params params {};
		params.InCurrEquipmentUniqueId = InCurrEquipmentUniqueId;
		params.InNewEquipmentUniqueId = InNewEquipmentUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsVallid != nullptr)
			*OutIsVallid = params.OutIsVallid;
		if (OutNewEquipmentStatus != nullptr)
			*OutNewEquipmentStatus = params.OutNewEquipmentStatus;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetStatusDiffMarkInBulk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InDiff                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_LeftSideParameters_C::SetStatusDiffMarkInBulk(int32_t InDiff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetStatusDiffMarkInBulk");
		
		UMyCharaMenu_LeftSideParameters_C_SetStatusDiffMarkInBulk_Params params {};
		params.InDiff = InDiff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.UpdateStatusDiffMark
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      InCurrEquipmentUniqueId                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      InNewEquipmentUniqueId                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESBCharaEquipType                                  InEquipType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_LeftSideParameters_C::UpdateStatusDiffMark(bool InIsVisible, const class FString& InCurrEquipmentUniqueId, const class FString& InNewEquipmentUniqueId, ESBCharaEquipType InEquipType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.UpdateStatusDiffMark");
		
		UMyCharaMenu_LeftSideParameters_C_UpdateStatusDiffMark_Params params {};
		params.InIsVisible = InIsVisible;
		params.InCurrEquipmentUniqueId = InCurrEquipmentUniqueId;
		params.InNewEquipmentUniqueId = InNewEquipmentUniqueId;
		params.InEquipType = InEquipType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetupStatusGrp
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_LeftSideParameters_C::SetupStatusGrp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetupStatusGrp");
		
		UMyCharaMenu_LeftSideParameters_C_SetupStatusGrp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetTotalPower
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InTotalPower                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_LeftSideParameters_C::SetTotalPower(int32_t InTotalPower)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetTotalPower");
		
		UMyCharaMenu_LeftSideParameters_C_SetTotalPower_Params params {};
		params.InTotalPower = InTotalPower;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetPlayerLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InLevel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_LeftSideParameters_C::SetPlayerLevel(int32_t InLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetPlayerLevel");
		
		UMyCharaMenu_LeftSideParameters_C_SetPlayerLevel_Params params {};
		params.InLevel = InLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetupClassGrp
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_LeftSideParameters_C::SetupClassGrp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetupClassGrp");
		
		UMyCharaMenu_LeftSideParameters_C_SetupClassGrp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetupNameGrp
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_LeftSideParameters_C::SetupNameGrp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetupNameGrp");
		
		UMyCharaMenu_LeftSideParameters_C_SetupNameGrp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetAchievementName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InAchievementId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_LeftSideParameters_C::SetAchievementName(int32_t InAchievementId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.SetAchievementName");
		
		UMyCharaMenu_LeftSideParameters_C_SetAchievementName_Params params {};
		params.InAchievementId = InAchievementId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnCloseAchievementList_イベント
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_LeftSideParameters_C::OnCloseAchievementList_()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnCloseAchievementList_イベント");
		
		UMyCharaMenu_LeftSideParameters_C_OnCloseAchievementList__Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnLoadAchievement_イベント
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_LeftSideParameters_C::OnLoadAchievement_(bool InResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnLoadAchievement_イベント");
		
		UMyCharaMenu_LeftSideParameters_C_OnLoadAchievement__Params params {};
		params.InResult = InResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnSelectAchievement_イベント
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InAchievementId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_LeftSideParameters_C::OnSelectAchievement_(int32_t InAchievementId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnSelectAchievement_イベント");
		
		UMyCharaMenu_LeftSideParameters_C_OnSelectAchievement__Params params {};
		params.InAchievementId = InAchievementId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnSaveAchievementSelectedDelegate_イベント
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_LeftSideParameters_C::OnSaveAchievementSelectedDelegate_(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnSaveAchievementSelectedDelegate_イベント");
		
		UMyCharaMenu_LeftSideParameters_C_OnSaveAchievementSelectedDelegate__Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.Const_Achievement
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_LeftSideParameters_C::Const_Achievement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.Const_Achievement");
		
		UMyCharaMenu_LeftSideParameters_C_Const_Achievement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.Dest_Achievement
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_LeftSideParameters_C::Dest_Achievement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.Dest_Achievement");
		
		UMyCharaMenu_LeftSideParameters_C_Dest_Achievement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.BndEvt__AchievementChangeBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_LeftSideParameters_C::BndEvt__AchievementChangeBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.BndEvt__AchievementChangeBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UMyCharaMenu_LeftSideParameters_C_BndEvt__AchievementChangeBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnRenamed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_LeftSideParameters_C::OnRenamed(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnRenamed");
		
		UMyCharaMenu_LeftSideParameters_C_OnRenamed_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.カスタムイベント_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PlayerName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_LeftSideParameters_C::_1(const class FString& PlayerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.カスタムイベント_1");
		
		UMyCharaMenu_LeftSideParameters_C__1_Params params {};
		params.PlayerName = PlayerName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.Close
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_LeftSideParameters_C::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.Close");
		
		UMyCharaMenu_LeftSideParameters_C_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.BndEvt__BtnDetailedStatus_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_LeftSideParameters_C::BndEvt__BtnDetailedStatus_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.BndEvt__BtnDetailedStatus_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UMyCharaMenu_LeftSideParameters_C_BndEvt__BtnDetailedStatus_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.Construct
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_LeftSideParameters_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.Construct");
		
		UMyCharaMenu_LeftSideParameters_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.Destruct
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_LeftSideParameters_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.Destruct");
		
		UMyCharaMenu_LeftSideParameters_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_LeftSideParameters_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.PreConstruct");
		
		UMyCharaMenu_LeftSideParameters_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnStatusDiffAtRecalc2ndStatus
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_LeftSideParameters_C::OnStatusDiffAtRecalc2ndStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnStatusDiffAtRecalc2ndStatus");
		
		UMyCharaMenu_LeftSideParameters_C_OnStatusDiffAtRecalc2ndStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.BndEvt__MyCharaMenu_LeftSideParameters_WBP_ScbPopupButton_K2Node_ComponentBoundEvent_1_OnClickedScbPopup__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_LeftSideParameters_C::BndEvt__MyCharaMenu_LeftSideParameters_WBP_ScbPopupButton_K2Node_ComponentBoundEvent_1_OnClickedScbPopup__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.BndEvt__MyCharaMenu_LeftSideParameters_WBP_ScbPopupButton_K2Node_ComponentBoundEvent_1_OnClickedScbPopup__DelegateSignature");
		
		UMyCharaMenu_LeftSideParameters_C_BndEvt__MyCharaMenu_LeftSideParameters_WBP_ScbPopupButton_K2Node_ComponentBoundEvent_1_OnClickedScbPopup__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnLevelUpDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InPrevLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InCurLevel                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBExtraExpParse                            InExtraExpParse                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UMyCharaMenu_LeftSideParameters_C::OnLevelUpDelegate(int32_t InPrevLevel, int32_t InCurLevel, const struct FSBExtraExpParse& InExtraExpParse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnLevelUpDelegate");
		
		UMyCharaMenu_LeftSideParameters_C_OnLevelUpDelegate_Params params {};
		params.InPrevLevel = InPrevLevel;
		params.InCurLevel = InCurLevel;
		params.InExtraExpParse = InExtraExpParse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.ExecuteUbergraph_MyCharaMenu_LeftSideParameters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_LeftSideParameters_C::ExecuteUbergraph_MyCharaMenu_LeftSideParameters(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.ExecuteUbergraph_MyCharaMenu_LeftSideParameters");
		
		UMyCharaMenu_LeftSideParameters_C_ExecuteUbergraph_MyCharaMenu_LeftSideParameters_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnDetailedStatusClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_LeftSideParameters_C::OnDetailedStatusClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnDetailedStatusClicked__DelegateSignature");
		
		UMyCharaMenu_LeftSideParameters_C_OnDetailedStatusClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnSaveAchievement__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_LeftSideParameters_C::OnSaveAchievement__DelegateSignature(bool InResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnSaveAchievement__DelegateSignature");
		
		UMyCharaMenu_LeftSideParameters_C_OnSaveAchievement__DelegateSignature_Params params {};
		params.InResult = InResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnLoadAchievement__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_LeftSideParameters_C::OnLoadAchievement__DelegateSignature(bool InResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnLoadAchievement__DelegateSignature");
		
		UMyCharaMenu_LeftSideParameters_C_OnLoadAchievement__DelegateSignature_Params params {};
		params.InResult = InResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnClicked_AchievementChangeButton__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMyCharaMenu_AchievementList_C*              InAchievementListRef                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_LeftSideParameters_C::OnClicked_AchievementChangeButton__DelegateSignature(class UMyCharaMenu_AchievementList_C* InAchievementListRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C.OnClicked_AchievementChangeButton__DelegateSignature");
		
		UMyCharaMenu_LeftSideParameters_C_OnClicked_AchievementChangeButton__DelegateSignature_Params params {};
		params.InAchievementListRef = InAchievementListRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMyCharaMenu_LeftSideParameters_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMyCharaMenu_LeftSideParameters_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MyCharaMenu_LeftSideParameters.MyCharaMenu_LeftSideParameters_C");
		return ptr;
	}

}


