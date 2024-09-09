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
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.CalculateBattleScoreForCorde
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBPlayerPresetEquipItem>            InPresetEquipItemList                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            OutBattleScore                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleCordeEditForBattleSet_C::CalculateBattleScoreForCorde(TArray<struct FSBPlayerPresetEquipItem>* InPresetEquipItemList, int32_t* OutBattleScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.CalculateBattleScoreForCorde");
		
		UBattleCordeEditForBattleSet_C_CalculateBattleScoreForCorde_Params params {};
		
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
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.Update Active Click Input Action
	 * 		Flags  -> ()
	 */
	void UBattleCordeEditForBattleSet_C::UpdateActiveClickInputAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.Update Active Click Input Action");
		
		UBattleCordeEditForBattleSet_C_UpdateActiveClickInputAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.Stop Active Click Input Action
	 * 		Flags  -> ()
	 */
	void UBattleCordeEditForBattleSet_C::StopActiveClickInputAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.Stop Active Click Input Action");
		
		UBattleCordeEditForBattleSet_C_StopActiveClickInputAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.Update Register Corde Btn Text
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsOverwriteMode                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleCordeEditForBattleSet_C::UpdateRegisterCordeBtnText(bool bInIsOverwriteMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.Update Register Corde Btn Text");
		
		UBattleCordeEditForBattleSet_C_UpdateRegisterCordeBtnText_Params params {};
		params.bInIsOverwriteMode = bInIsOverwriteMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ExtractCordeEquipItemsInEquipmentBag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBPlayerPresetEquipItem>            InCordeEquipItemList                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FSBPlayerPresetEquipItem>            OutExtractedCordeEquipItems                                (Parm, OutParm)
	 */
	void UBattleCordeEditForBattleSet_C::ExtractCordeEquipItemsInEquipmentBag(TArray<struct FSBPlayerPresetEquipItem>* InCordeEquipItemList, TArray<struct FSBPlayerPresetEquipItem>* OutExtractedCordeEquipItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ExtractCordeEquipItemsInEquipmentBag");
		
		UBattleCordeEditForBattleSet_C_ExtractCordeEquipItemsInEquipmentBag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InCordeEquipItemList != nullptr)
			*InCordeEquipItemList = params.InCordeEquipItemList;
		if (OutExtractedCordeEquipItems != nullptr)
			*OutExtractedCordeEquipItems = params.OutExtractedCordeEquipItems;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.CheckIfTacticalSkillIsActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutIsActive                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleCordeEditForBattleSet_C::CheckIfTacticalSkillIsActive(bool* OutIsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.CheckIfTacticalSkillIsActive");
		
		UBattleCordeEditForBattleSet_C_CheckIfTacticalSkillIsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsActive != nullptr)
			*OutIsActive = params.OutIsActive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.GetCordeEquipmentStorageItemDatas
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InCordeId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FSBStorageItemData>                  OutEquipmentStorageItemDatas                               (Parm, OutParm)
	 */
	void UBattleCordeEditForBattleSet_C::GetCordeEquipmentStorageItemDatas(int32_t InCordeId, TArray<struct FSBStorageItemData>* OutEquipmentStorageItemDatas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.GetCordeEquipmentStorageItemDatas");
		
		UBattleCordeEditForBattleSet_C_GetCordeEquipmentStorageItemDatas_Params params {};
		params.InCordeId = InCordeId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutEquipmentStorageItemDatas != nullptr)
			*OutEquipmentStorageItemDatas = params.OutEquipmentStorageItemDatas;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.UpdateBattleCordeGuide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsStorageMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleCordeEditForBattleSet_C::UpdateBattleCordeGuide(bool InIsStorageMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.UpdateBattleCordeGuide");
		
		UBattleCordeEditForBattleSet_C_UpdateBattleCordeGuide_Params params {};
		params.InIsStorageMode = InIsStorageMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.RequestCordeDataReload
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutRequestSuccessed                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleCordeEditForBattleSet_C::RequestCordeDataReload(bool* OutRequestSuccessed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.RequestCordeDataReload");
		
		UBattleCordeEditForBattleSet_C_RequestCordeDataReload_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutRequestSuccessed != nullptr)
			*OutRequestSuccessed = params.OutRequestSuccessed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.SetLeftSideParameterExpGaugeUpdateStop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsUpdateStop                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleCordeEditForBattleSet_C::SetLeftSideParameterExpGaugeUpdateStop(bool InIsUpdateStop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.SetLeftSideParameterExpGaugeUpdateStop");
		
		UBattleCordeEditForBattleSet_C_SetLeftSideParameterExpGaugeUpdateStop_Params params {};
		params.InIsUpdateStop = InIsUpdateStop;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.SetClassChangeLoadingVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleCordeEditForBattleSet_C::SetClassChangeLoadingVisibility(bool InIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.SetClassChangeLoadingVisibility");
		
		UBattleCordeEditForBattleSet_C_SetClassChangeLoadingVisibility_Params params {};
		params.InIsVisible = InIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.SetClassChangedJingleVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleCordeEditForBattleSet_C::SetClassChangedJingleVisibility(bool InIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.SetClassChangedJingleVisibility");
		
		UBattleCordeEditForBattleSet_C_SetClassChangedJingleVisibility_Params params {};
		params.InIsVisible = InIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.HideCharaCapture2D
	 * 		Flags  -> ()
	 */
	void UBattleCordeEditForBattleSet_C::HideCharaCapture2D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.HideCharaCapture2D");
		
		UBattleCordeEditForBattleSet_C_HideCharaCapture2D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowCharaCapture2D
	 * 		Flags  -> ()
	 */
	void UBattleCordeEditForBattleSet_C::ShowCharaCapture2D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowCharaCapture2D");
		
		UBattleCordeEditForBattleSet_C_ShowCharaCapture2D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.CheckCordeEquipmentsAreUnused
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InCordeId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsStorageMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               OutIsUnused                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleCordeEditForBattleSet_C::CheckCordeEquipmentsAreUnused(int32_t InCordeId, bool InIsStorageMode, bool* OutIsUnused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.CheckCordeEquipmentsAreUnused");
		
		UBattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreUnused_Params params {};
		params.InCordeId = InCordeId;
		params.InIsStorageMode = InIsStorageMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsUnused != nullptr)
			*OutIsUnused = params.OutIsUnused;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.CheckCordeEquipmentsAreAllValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InCordeId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutIsAllEquipmentValid                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               OutIsEquipmentInStorage                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleCordeEditForBattleSet_C::CheckCordeEquipmentsAreAllValid(int32_t InCordeId, bool* OutIsAllEquipmentValid, bool* OutIsEquipmentInStorage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.CheckCordeEquipmentsAreAllValid");
		
		UBattleCordeEditForBattleSet_C_CheckCordeEquipmentsAreAllValid_Params params {};
		params.InCordeId = InCordeId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsAllEquipmentValid != nullptr)
			*OutIsAllEquipmentValid = params.OutIsAllEquipmentValid;
		if (OutIsEquipmentInStorage != nullptr)
			*OutIsEquipmentInStorage = params.OutIsEquipmentInStorage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.CheckCordeWeaponIsValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InCordeId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsStorageMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               OutIsValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleCordeEditForBattleSet_C::CheckCordeWeaponIsValid(int32_t InCordeId, bool InIsStorageMode, bool* OutIsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.CheckCordeWeaponIsValid");
		
		UBattleCordeEditForBattleSet_C_CheckCordeWeaponIsValid_Params params {};
		params.InCordeId = InCordeId;
		params.InIsStorageMode = InIsStorageMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsValid != nullptr)
			*OutIsValid = params.OutIsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.SetIsSelectedCordeEquippable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsEquippable                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleCordeEditForBattleSet_C::SetIsSelectedCordeEquippable(bool InIsEquippable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.SetIsSelectedCordeEquippable");
		
		UBattleCordeEditForBattleSet_C_SetIsSelectedCordeEquippable_Params params {};
		params.InIsEquippable = InIsEquippable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.SetEquipCordeBtnEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsEnabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleCordeEditForBattleSet_C::SetEquipCordeBtnEnable(bool InIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.SetEquipCordeBtnEnable");
		
		UBattleCordeEditForBattleSet_C_SetEquipCordeBtnEnable_Params params {};
		params.InIsEnabled = InIsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.RegisterCorde
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InCordeListId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InCordeName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBattleCordeEditForBattleSet_C::RegisterCorde(int32_t InCordeListId, const class FString& InCordeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.RegisterCorde");
		
		UBattleCordeEditForBattleSet_C_RegisterCorde_Params params {};
		params.InCordeListId = InCordeListId;
		params.InCordeName = InCordeName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.GetCordeListEmptySlotId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutListIndex                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleCordeEditForBattleSet_C::GetCordeListEmptySlotId(int32_t* OutListIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.GetCordeListEmptySlotId");
		
		UBattleCordeEditForBattleSet_C_GetCordeListEmptySlotId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutListIndex != nullptr)
			*OutListIndex = params.OutListIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.CreateCordeList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InResetSelectedCordeListItem                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleCordeEditForBattleSet_C::CreateCordeList(bool InResetSelectedCordeListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.CreateCordeList");
		
		UBattleCordeEditForBattleSet_C_CreateCordeList_Params params {};
		params.InResetSelectedCordeListItem = InResetSelectedCordeListItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.IsCharaDetailedStatusOpen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutIsOpen                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleCordeEditForBattleSet_C::IsCharaDetailedStatusOpen(bool* OutIsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.IsCharaDetailedStatusOpen");
		
		UBattleCordeEditForBattleSet_C_IsCharaDetailedStatusOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsOpen != nullptr)
			*OutIsOpen = params.OutIsOpen;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.RequestPlayerCharacterCalcEquipStatusDiff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InCordeId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleCordeEditForBattleSet_C::RequestPlayerCharacterCalcEquipStatusDiff(int32_t InCordeId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.RequestPlayerCharacterCalcEquipStatusDiff");
		
		UBattleCordeEditForBattleSet_C_RequestPlayerCharacterCalcEquipStatusDiff_Params params {};
		params.InCordeId = InCordeId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.UpdateLeftSideParameterStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIncludesClassInfoUpdate                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleCordeEditForBattleSet_C::UpdateLeftSideParameterStatus(bool InIncludesClassInfoUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.UpdateLeftSideParameterStatus");
		
		UBattleCordeEditForBattleSet_C_UpdateLeftSideParameterStatus_Params params {};
		params.InIncludesClassInfoUpdate = InIncludesClassInfoUpdate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.GetIsCostumePartsLoading
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutIsCostumePartsLoading                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleCordeEditForBattleSet_C::GetIsCostumePartsLoading(bool* OutIsCostumePartsLoading)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.GetIsCostumePartsLoading");
		
		UBattleCordeEditForBattleSet_C_GetIsCostumePartsLoading_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsCostumePartsLoading != nullptr)
			*OutIsCostumePartsLoading = params.OutIsCostumePartsLoading;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.SetIsCostumePartsLoading
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsCostumePartsLoading                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleCordeEditForBattleSet_C::SetIsCostumePartsLoading(bool InIsCostumePartsLoading)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.SetIsCostumePartsLoading");
		
		UBattleCordeEditForBattleSet_C_SetIsCostumePartsLoading_Params params {};
		params.InIsCostumePartsLoading = InIsCostumePartsLoading;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.IsHideWindowAnimePlaying
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutIsPlaying                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleCordeEditForBattleSet_C::IsHideWindowAnimePlaying(bool* OutIsPlaying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.IsHideWindowAnimePlaying");
		
		UBattleCordeEditForBattleSet_C_IsHideWindowAnimePlaying_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsPlaying != nullptr)
			*OutIsPlaying = params.OutIsPlaying;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.HideWindow
	 * 		Flags  -> ()
	 */
	void UBattleCordeEditForBattleSet_C::HideWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.HideWindow");
		
		UBattleCordeEditForBattleSet_C_HideWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBClassType                                       InEquipClassType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsStorageMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleCordeEditForBattleSet_C::ShowWindow(ESBClassType InEquipClassType, bool InIsStorageMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowWindow");
		
		UBattleCordeEditForBattleSet_C_ShowWindow_Params params {};
		params.InEquipClassType = InEquipClassType;
		params.InIsStorageMode = InIsStorageMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnSaveItemStorage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRetCode                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FOwnItemInfo>                        InDirtyItems                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBattleCordeEditForBattleSet_C::OnSaveItemStorage(int32_t InRetCode, TArray<struct FOwnItemInfo> InDirtyItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnSaveItemStorage");
		
		UBattleCordeEditForBattleSet_C_OnSaveItemStorage_Params params {};
		params.InRetCode = InRetCode;
		params.InDirtyItems = InDirtyItems;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.StartCordeNameInputProc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsForRename                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleCordeEditForBattleSet_C::StartCordeNameInputProc(bool InIsForRename)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.StartCordeNameInputProc");
		
		UBattleCordeEditForBattleSet_C_StartCordeNameInputProc_Params params {};
		params.InIsForRename = InIsForRename;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.SetupNameInputDialogEventBind
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InUnbindEvent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleCordeEditForBattleSet_C::SetupNameInputDialogEventBind(bool InUnbindEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.SetupNameInputDialogEventBind");
		
		UBattleCordeEditForBattleSet_C_SetupNameInputDialogEventBind_Params params {};
		params.InUnbindEvent = InUnbindEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnNameInputDialogNameDecided
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PlayerName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBattleCordeEditForBattleSet_C::OnNameInputDialogNameDecided(const class FString& PlayerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnNameInputDialogNameDecided");
		
		UBattleCordeEditForBattleSet_C_OnNameInputDialogNameDecided_Params params {};
		params.PlayerName = PlayerName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnNameInputDilaogClosed
	 * 		Flags  -> ()
	 */
	void UBattleCordeEditForBattleSet_C::OnNameInputDilaogClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnNameInputDilaogClosed");
		
		UBattleCordeEditForBattleSet_C_OnNameInputDilaogClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnNameInputDialogButtonFullScreenClicked
	 * 		Flags  -> ()
	 */
	void UBattleCordeEditForBattleSet_C::OnNameInputDialogButtonFullScreenClicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnNameInputDialogButtonFullScreenClicked");
		
		UBattleCordeEditForBattleSet_C_OnNameInputDialogButtonFullScreenClicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowCordeUnequippableMessageDialog
	 * 		Flags  -> ()
	 */
	void UBattleCordeEditForBattleSet_C::ShowCordeUnequippableMessageDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowCordeUnequippableMessageDialog");
		
		UBattleCordeEditForBattleSet_C_ShowCordeUnequippableMessageDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowUsingUnusedEquipConfirmDialog
	 * 		Flags  -> ()
	 */
	void UBattleCordeEditForBattleSet_C::ShowUsingUnusedEquipConfirmDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowUsingUnusedEquipConfirmDialog");
		
		UBattleCordeEditForBattleSet_C_ShowUsingUnusedEquipConfirmDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.EndUsingUnusedEquipConfirmDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EYesNoDialogResult                                 InYesNoResult                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleCordeEditForBattleSet_C::EndUsingUnusedEquipConfirmDialog(EYesNoDialogResult InYesNoResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.EndUsingUnusedEquipConfirmDialog");
		
		UBattleCordeEditForBattleSet_C_EndUsingUnusedEquipConfirmDialog_Params params {};
		params.InYesNoResult = InYesNoResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowCordeSlotIsFullMessageDialog
	 * 		Flags  -> ()
	 */
	void UBattleCordeEditForBattleSet_C::ShowCordeSlotIsFullMessageDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowCordeSlotIsFullMessageDialog");
		
		UBattleCordeEditForBattleSet_C_ShowCordeSlotIsFullMessageDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowNewCordeRegisterSuccessedMessageDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InNewCordeName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               bInIsCordeOverwrite                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleCordeEditForBattleSet_C::ShowNewCordeRegisterSuccessedMessageDialog(const class FString& InNewCordeName, bool bInIsCordeOverwrite)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowNewCordeRegisterSuccessedMessageDialog");
		
		UBattleCordeEditForBattleSet_C_ShowNewCordeRegisterSuccessedMessageDialog_Params params {};
		params.InNewCordeName = InNewCordeName;
		params.bInIsCordeOverwrite = bInIsCordeOverwrite;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowRenameCordeNameSuccessedMessageDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InRenamedCordeName                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBattleCordeEditForBattleSet_C::ShowRenameCordeNameSuccessedMessageDialog(const class FString& InRenamedCordeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowRenameCordeNameSuccessedMessageDialog");
		
		UBattleCordeEditForBattleSet_C_ShowRenameCordeNameSuccessedMessageDialog_Params params {};
		params.InRenamedCordeName = InRenamedCordeName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowCordeDeleteConfirmDialog
	 * 		Flags  -> ()
	 */
	void UBattleCordeEditForBattleSet_C::ShowCordeDeleteConfirmDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowCordeDeleteConfirmDialog");
		
		UBattleCordeEditForBattleSet_C_ShowCordeDeleteConfirmDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.EndCordeDeleteConfirmDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EYesNoDialogResult                                 InYesNoResult                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleCordeEditForBattleSet_C::EndCordeDeleteConfirmDialog(EYesNoDialogResult InYesNoResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.EndCordeDeleteConfirmDialog");
		
		UBattleCordeEditForBattleSet_C_EndCordeDeleteConfirmDialog_Params params {};
		params.InYesNoResult = InYesNoResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowCordeDeleteSuccessedMessageDialog
	 * 		Flags  -> ()
	 */
	void UBattleCordeEditForBattleSet_C::ShowCordeDeleteSuccessedMessageDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowCordeDeleteSuccessedMessageDialog");
		
		UBattleCordeEditForBattleSet_C_ShowCordeDeleteSuccessedMessageDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowEquipCordeConfirmMessageDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InCordeName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBattleCordeEditForBattleSet_C::ShowEquipCordeConfirmMessageDialog(const class FString& InCordeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowEquipCordeConfirmMessageDialog");
		
		UBattleCordeEditForBattleSet_C_ShowEquipCordeConfirmMessageDialog_Params params {};
		params.InCordeName = InCordeName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.EquipCordeConfirmEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EYesNoDialogResult                                 Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleCordeEditForBattleSet_C::EquipCordeConfirmEnd(EYesNoDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.EquipCordeConfirmEnd");
		
		UBattleCordeEditForBattleSet_C_EquipCordeConfirmEnd_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowCordeEquipSuccessedMessageDialog
	 * 		Flags  -> ()
	 */
	void UBattleCordeEditForBattleSet_C::ShowCordeEquipSuccessedMessageDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowCordeEquipSuccessedMessageDialog");
		
		UBattleCordeEditForBattleSet_C_ShowCordeEquipSuccessedMessageDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowEquipCordeNotAllValidConfirmDialog
	 * 		Flags  -> ()
	 */
	void UBattleCordeEditForBattleSet_C::ShowEquipCordeNotAllValidConfirmDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowEquipCordeNotAllValidConfirmDialog");
		
		UBattleCordeEditForBattleSet_C_ShowEquipCordeNotAllValidConfirmDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowMoveCordeEquipmentFromStorageConfirmDialog
	 * 		Flags  -> ()
	 */
	void UBattleCordeEditForBattleSet_C::ShowMoveCordeEquipmentFromStorageConfirmDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowMoveCordeEquipmentFromStorageConfirmDialog");
		
		UBattleCordeEditForBattleSet_C_ShowMoveCordeEquipmentFromStorageConfirmDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.MoveCordeEquipmentFromStorageComfirmEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EYesNoDialogResult                                 Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleCordeEditForBattleSet_C::MoveCordeEquipmentFromStorageComfirmEnd(EYesNoDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.MoveCordeEquipmentFromStorageComfirmEnd");
		
		UBattleCordeEditForBattleSet_C_MoveCordeEquipmentFromStorageComfirmEnd_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.EquipCordeNotAllValidConfirmEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EYesNoDialogResult                                 Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleCordeEditForBattleSet_C::EquipCordeNotAllValidConfirmEnd(EYesNoDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.EquipCordeNotAllValidConfirmEnd");
		
		UBattleCordeEditForBattleSet_C_EquipCordeNotAllValidConfirmEnd_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowEquipmentBagIsFullMessageDialog
	 * 		Flags  -> ()
	 */
	void UBattleCordeEditForBattleSet_C::ShowEquipmentBagIsFullMessageDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowEquipmentBagIsFullMessageDialog");
		
		UBattleCordeEditForBattleSet_C_ShowEquipmentBagIsFullMessageDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ContinueCordeEquipmentProc
	 * 		Flags  -> ()
	 */
	void UBattleCordeEditForBattleSet_C::ContinueCordeEquipmentProc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ContinueCordeEquipmentProc");
		
		UBattleCordeEditForBattleSet_C_ContinueCordeEquipmentProc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowQuestProgressUnableByClassChangeConfirmDialog
	 * 		Flags  -> ()
	 */
	void UBattleCordeEditForBattleSet_C::ShowQuestProgressUnableByClassChangeConfirmDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowQuestProgressUnableByClassChangeConfirmDialog");
		
		UBattleCordeEditForBattleSet_C_ShowQuestProgressUnableByClassChangeConfirmDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowEquippedTacticalSkillIsActiveMessageDialog
	 * 		Flags  -> ()
	 */
	void UBattleCordeEditForBattleSet_C::ShowEquippedTacticalSkillIsActiveMessageDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ShowEquippedTacticalSkillIsActiveMessageDialog");
		
		UBattleCordeEditForBattleSet_C_ShowEquippedTacticalSkillIsActiveMessageDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.Construct
	 * 		Flags  -> ()
	 */
	void UBattleCordeEditForBattleSet_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.Construct");
		
		UBattleCordeEditForBattleSet_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleCordeEditForBattleSet_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnAnimationFinished");
		
		UBattleCordeEditForBattleSet_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.UiInputBlock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsBlock                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleCordeEditForBattleSet_C::UiInputBlock(bool InIsBlock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.UiInputBlock");
		
		UBattleCordeEditForBattleSet_C_UiInputBlock_Params params {};
		params.InIsBlock = InIsBlock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__BtnScreen_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBattleCordeEditForBattleSet_C::BndEvt__BtnScreen_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__BtnScreen_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature");
		
		UBattleCordeEditForBattleSet_C_BndEvt__BtnScreen_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.Destruct
	 * 		Flags  -> ()
	 */
	void UBattleCordeEditForBattleSet_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.Destruct");
		
		UBattleCordeEditForBattleSet_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleCordeEditForBattleSet_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.PreConstruct");
		
		UBattleCordeEditForBattleSet_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnCalcEquipStatusDiff
	 * 		Flags  -> ()
	 */
	void UBattleCordeEditForBattleSet_C::OnCalcEquipStatusDiff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnCalcEquipStatusDiff");
		
		UBattleCordeEditForBattleSet_C_OnCalcEquipStatusDiff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_BackToBattleSetTopLevelBtn_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBattleCordeEditForBattleSet_C::BndEvt__EquipmentStatusDescAndListForBattleSet_BackToBattleSetTopLevelBtn_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_BackToBattleSetTopLevelBtn_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature");
		
		UBattleCordeEditForBattleSet_C_BndEvt__EquipmentStatusDescAndListForBattleSet_BackToBattleSetTopLevelBtn_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_LeftSideParametersForSecondLevel_K2Node_ComponentBoundEvent_6_OnDetailStatusBtnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBattleCordeEditForBattleSet_C::BndEvt__EquipmentStatusDescAndListForBattleSet_LeftSideParametersForSecondLevel_K2Node_ComponentBoundEvent_6_OnDetailStatusBtnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_LeftSideParametersForSecondLevel_K2Node_ComponentBoundEvent_6_OnDetailStatusBtnClicked__DelegateSignature");
		
		UBattleCordeEditForBattleSet_C_BndEvt__EquipmentStatusDescAndListForBattleSet_LeftSideParametersForSecondLevel_K2Node_ComponentBoundEvent_6_OnDetailStatusBtnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_BtnFullScreenForDetailedStatus_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBattleCordeEditForBattleSet_C::BndEvt__EquipmentStatusDescAndListForBattleSet_BtnFullScreenForDetailedStatus_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_BtnFullScreenForDetailedStatus_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UBattleCordeEditForBattleSet_C_BndEvt__EquipmentStatusDescAndListForBattleSet_BtnFullScreenForDetailedStatus_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnPress_Cancel
	 * 		Flags  -> ()
	 */
	void UBattleCordeEditForBattleSet_C::OnPress_Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnPress_Cancel");
		
		UBattleCordeEditForBattleSet_C_OnPress_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.UIInputBlockFrontRow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsBlock                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleCordeEditForBattleSet_C::UIInputBlockFrontRow(bool InIsBlock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.UIInputBlockFrontRow");
		
		UBattleCordeEditForBattleSet_C_UIInputBlockFrontRow_Params params {};
		params.InIsBlock = InIsBlock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnSavePlayerPresetEquipment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleCordeEditForBattleSet_C::OnSavePlayerPresetEquipment(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnSavePlayerPresetEquipment");
		
		UBattleCordeEditForBattleSet_C_OnSavePlayerPresetEquipment_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__BattleCordeEditForBattleSet_CharaDetailedStatus_K2Node_ComponentBoundEvent_4_CloseEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBattleCordeEditForBattleSet_C::BndEvt__BattleCordeEditForBattleSet_CharaDetailedStatus_K2Node_ComponentBoundEvent_4_CloseEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__BattleCordeEditForBattleSet_CharaDetailedStatus_K2Node_ComponentBoundEvent_4_CloseEvent__DelegateSignature");
		
		UBattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_CharaDetailedStatus_K2Node_ComponentBoundEvent_4_CloseEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.CloseCharaDetailedStatus
	 * 		Flags  -> ()
	 */
	void UBattleCordeEditForBattleSet_C::CloseCharaDetailedStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.CloseCharaDetailedStatus");
		
		UBattleCordeEditForBattleSet_C_CloseCharaDetailedStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_5_OnCordeListItemPresssed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBattleCordeListItem_C*                      InListItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleCordeEditForBattleSet_C::BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_5_OnCordeListItemPresssed__DelegateSignature(class UBattleCordeListItem_C* InListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_5_OnCordeListItemPresssed__DelegateSignature");
		
		UBattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_5_OnCordeListItemPresssed__DelegateSignature_Params params {};
		params.InListItem = InListItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_8_OnCordeDeleteBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBattleCordeListItem_C*                      InSelectedCordeListItem                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleCordeEditForBattleSet_C::BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_8_OnCordeDeleteBtnPressed__DelegateSignature(class UBattleCordeListItem_C* InSelectedCordeListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_8_OnCordeDeleteBtnPressed__DelegateSignature");
		
		UBattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_8_OnCordeDeleteBtnPressed__DelegateSignature_Params params {};
		params.InSelectedCordeListItem = InSelectedCordeListItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_9_OnCordeRenameBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBattleCordeListItem_C*                      InSelectedCordeListItem                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleCordeEditForBattleSet_C::BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_9_OnCordeRenameBtnPressed__DelegateSignature(class UBattleCordeListItem_C* InSelectedCordeListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_9_OnCordeRenameBtnPressed__DelegateSignature");
		
		UBattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_9_OnCordeRenameBtnPressed__DelegateSignature_Params params {};
		params.InSelectedCordeListItem = InSelectedCordeListItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BattleCordeEquipProc
	 * 		Flags  -> ()
	 */
	void UBattleCordeEditForBattleSet_C::BattleCordeEquipProc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BattleCordeEquipProc");
		
		UBattleCordeEditForBattleSet_C_BattleCordeEquipProc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnSaveCharaBattlePresetEquipment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleCordeEditForBattleSet_C::OnSaveCharaBattlePresetEquipment(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnSaveCharaBattlePresetEquipment");
		
		UBattleCordeEditForBattleSet_C_OnSaveCharaBattlePresetEquipment_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnSpawnWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InventoryIndex                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBWeaponEquipType                                 InWeaponEquipType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleCordeEditForBattleSet_C::OnSpawnWeapon(int32_t InventoryIndex, ESBWeaponEquipType InWeaponEquipType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnSpawnWeapon");
		
		UBattleCordeEditForBattleSet_C_OnSpawnWeapon_Params params {};
		params.InventoryIndex = InventoryIndex;
		params.InWeaponEquipType = InWeaponEquipType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_10_OnCordeReplaceBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBattleCordeListItem_C*                      InSrcCordeListItem                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBattleCordeListItem_C*                      InDstCordListItem                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleCordeEditForBattleSet_C::BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_10_OnCordeReplaceBtnPressed__DelegateSignature(class UBattleCordeListItem_C* InSrcCordeListItem, class UBattleCordeListItem_C* InDstCordListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_10_OnCordeReplaceBtnPressed__DelegateSignature");
		
		UBattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_10_OnCordeReplaceBtnPressed__DelegateSignature_Params params {};
		params.InSrcCordeListItem = InSrcCordeListItem;
		params.InDstCordListItem = InDstCordListItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnSwapPresetEquipmentList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DstListIndex                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleCordeEditForBattleSet_C::OnSwapPresetEquipmentList(int32_t RetCode, int32_t DstListIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnSwapPresetEquipmentList");
		
		UBattleCordeEditForBattleSet_C_OnSwapPresetEquipmentList_Params params {};
		params.RetCode = RetCode;
		params.DstListIndex = DstListIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnClassChangeNotify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRetCode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInIsExpiredStickerWeapons                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class FString>                              InExpiredStickerWeaponUniqueIds                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FSBExpiredEquipmentData                     InDirtyExpiredEquipmentData                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBattleCordeEditForBattleSet_C::OnClassChangeNotify(int32_t InRetCode, bool bInIsExpiredStickerWeapons, TArray<class FString> InExpiredStickerWeaponUniqueIds, const struct FSBExpiredEquipmentData& InDirtyExpiredEquipmentData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnClassChangeNotify");
		
		UBattleCordeEditForBattleSet_C_OnClassChangeNotify_Params params {};
		params.InRetCode = InRetCode;
		params.bInIsExpiredStickerWeapons = bInIsExpiredStickerWeapons;
		params.InExpiredStickerWeaponUniqueIds = InExpiredStickerWeaponUniqueIds;
		params.InDirtyExpiredEquipmentData = InDirtyExpiredEquipmentData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnClientRestart
	 * 		Flags  -> ()
	 */
	void UBattleCordeEditForBattleSet_C::OnClientRestart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnClientRestart");
		
		UBattleCordeEditForBattleSet_C_OnClientRestart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ExpiredItemNoticeSystemMessageTimerEnd
	 * 		Flags  -> ()
	 */
	void UBattleCordeEditForBattleSet_C::ExpiredItemNoticeSystemMessageTimerEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ExpiredItemNoticeSystemMessageTimerEnd");
		
		UBattleCordeEditForBattleSet_C_ExpiredItemNoticeSystemMessageTimerEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ClassChangeResultProc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              InExpiredWeaponStickerUniqueIds                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FSBExpiredEquipmentData                     InExpiredEquipmentData                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               InIsClassChange                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InIsDisarm                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleCordeEditForBattleSet_C::ClassChangeResultProc(TArray<class FString> InExpiredWeaponStickerUniqueIds, const struct FSBExpiredEquipmentData& InExpiredEquipmentData, bool InIsClassChange, bool InIsDisarm)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ClassChangeResultProc");
		
		UBattleCordeEditForBattleSet_C_ClassChangeResultProc_Params params {};
		params.InExpiredWeaponStickerUniqueIds = InExpiredWeaponStickerUniqueIds;
		params.InExpiredEquipmentData = InExpiredEquipmentData;
		params.InIsClassChange = InIsClassChange;
		params.InIsDisarm = InIsDisarm;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_ClassChangedJingle_K2Node_ComponentBoundEvent_1_OnPlayedAnim__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBattleCordeEditForBattleSet_C::BndEvt__EquipmentStatusDescAndListForBattleSet_ClassChangedJingle_K2Node_ComponentBoundEvent_1_OnPlayedAnim__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_ClassChangedJingle_K2Node_ComponentBoundEvent_1_OnPlayedAnim__DelegateSignature");
		
		UBattleCordeEditForBattleSet_C_BndEvt__EquipmentStatusDescAndListForBattleSet_ClassChangedJingle_K2Node_ComponentBoundEvent_1_OnPlayedAnim__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_11_OnCordeDataLoaded__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsDataLoadSuccessed                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleCordeEditForBattleSet_C::BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_11_OnCordeDataLoaded__DelegateSignature(bool InIsDataLoadSuccessed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_11_OnCordeDataLoaded__DelegateSignature");
		
		UBattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_11_OnCordeDataLoaded__DelegateSignature_Params params {};
		params.InIsDataLoadSuccessed = InIsDataLoadSuccessed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__BattleCordeEditForBattleSet_RegisterCordeBtn_K2Node_ComponentBoundEvent_12_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBattleCordeEditForBattleSet_C::BndEvt__BattleCordeEditForBattleSet_RegisterCordeBtn_K2Node_ComponentBoundEvent_12_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__BattleCordeEditForBattleSet_RegisterCordeBtn_K2Node_ComponentBoundEvent_12_EventOnClicked__DelegateSignature");
		
		UBattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_RegisterCordeBtn_K2Node_ComponentBoundEvent_12_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__BattleCordeEditForBattleSet_EquipCordeBtn_K2Node_ComponentBoundEvent_13_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBattleCordeEditForBattleSet_C::BndEvt__BattleCordeEditForBattleSet_EquipCordeBtn_K2Node_ComponentBoundEvent_13_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.BndEvt__BattleCordeEditForBattleSet_EquipCordeBtn_K2Node_ComponentBoundEvent_13_EventOnClicked__DelegateSignature");
		
		UBattleCordeEditForBattleSet_C_BndEvt__BattleCordeEditForBattleSet_EquipCordeBtn_K2Node_ComponentBoundEvent_13_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ReturnFromClassChangeProgressContinueConfirmDialog
	 * 		Flags  -> ()
	 */
	void UBattleCordeEditForBattleSet_C::ReturnFromClassChangeProgressContinueConfirmDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ReturnFromClassChangeProgressContinueConfirmDialog");
		
		UBattleCordeEditForBattleSet_C_ReturnFromClassChangeProgressContinueConfirmDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnCharaEquipPassiveImagineChange
	 * 		Flags  -> ()
	 */
	void UBattleCordeEditForBattleSet_C::OnCharaEquipPassiveImagineChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnCharaEquipPassiveImagineChange");
		
		UBattleCordeEditForBattleSet_C_OnCharaEquipPassiveImagineChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnClassChangeFailure
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRetCode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleCordeEditForBattleSet_C::OnClassChangeFailure(int32_t InRetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnClassChangeFailure");
		
		UBattleCordeEditForBattleSet_C_OnClassChangeFailure_Params params {};
		params.InRetCode = InRetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ExecuteUbergraph_BattleCordeEditForBattleSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleCordeEditForBattleSet_C::ExecuteUbergraph_BattleCordeEditForBattleSet(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.ExecuteUbergraph_BattleCordeEditForBattleSet");
		
		UBattleCordeEditForBattleSet_C_ExecuteUbergraph_BattleCordeEditForBattleSet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnBattleCordeSaveRequestCompleted__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBattleCordeEditForBattleSet_C::OnBattleCordeSaveRequestCompleted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnBattleCordeSaveRequestCompleted__DelegateSignature");
		
		UBattleCordeEditForBattleSet_C_OnBattleCordeSaveRequestCompleted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnTermEnd__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBattleCordeEditForBattleSet_C::OnTermEnd__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnTermEnd__DelegateSignature");
		
		UBattleCordeEditForBattleSet_C_OnTermEnd__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnBattleCordeDataReloadRequestedAtInit__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBattleCordeEditForBattleSet_C::OnBattleCordeDataReloadRequestedAtInit__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnBattleCordeDataReloadRequestedAtInit__DelegateSignature");
		
		UBattleCordeEditForBattleSet_C_OnBattleCordeDataReloadRequestedAtInit__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnBattleCordeDataReloaded__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBattleCordeEditForBattleSet_C::OnBattleCordeDataReloaded__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnBattleCordeDataReloaded__DelegateSignature");
		
		UBattleCordeEditForBattleSet_C_OnBattleCordeDataReloaded__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnSetLeftSideParameterExpGaugeUpdateStop__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsUpdateStop                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleCordeEditForBattleSet_C::OnSetLeftSideParameterExpGaugeUpdateStop__DelegateSignature(bool InIsUpdateStop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnSetLeftSideParameterExpGaugeUpdateStop__DelegateSignature");
		
		UBattleCordeEditForBattleSet_C_OnSetLeftSideParameterExpGaugeUpdateStop__DelegateSignature_Params params {};
		params.InIsUpdateStop = InIsUpdateStop;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnSetPlayerAvatarRotateActive__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InRotateActive                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleCordeEditForBattleSet_C::OnSetPlayerAvatarRotateActive__DelegateSignature(bool InRotateActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnSetPlayerAvatarRotateActive__DelegateSignature");
		
		UBattleCordeEditForBattleSet_C_OnSetPlayerAvatarRotateActive__DelegateSignature_Params params {};
		params.InRotateActive = InRotateActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnClassChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBattleCordeEditForBattleSet_C::OnClassChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnClassChanged__DelegateSignature");
		
		UBattleCordeEditForBattleSet_C_OnClassChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnEquippedWeaponSpawned__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBattleCordeEditForBattleSet_C::OnEquippedWeaponSpawned__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnEquippedWeaponSpawned__DelegateSignature");
		
		UBattleCordeEditForBattleSet_C_OnEquippedWeaponSpawned__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnResetLeftSideParameterDiffMark__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBattleCordeEditForBattleSet_C::OnResetLeftSideParameterDiffMark__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnResetLeftSideParameterDiffMark__DelegateSignature");
		
		UBattleCordeEditForBattleSet_C_OnResetLeftSideParameterDiffMark__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnLeftSideParameterStatusUpdated__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_BattleSetInfoType                                InBattleSetInfoType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIncludesClassInfoUpdate                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBattleCordeEditForBattleSet_C::OnLeftSideParameterStatusUpdated__DelegateSignature(E_BattleSetInfoType InBattleSetInfoType, bool InIncludesClassInfoUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnLeftSideParameterStatusUpdated__DelegateSignature");
		
		UBattleCordeEditForBattleSet_C_OnLeftSideParameterStatusUpdated__DelegateSignature_Params params {};
		params.InBattleSetInfoType = InBattleSetInfoType;
		params.InIncludesClassInfoUpdate = InIncludesClassInfoUpdate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnPlayerCharacterEquippedCostumeChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBattleCordeEditForBattleSet_C::OnPlayerCharacterEquippedCostumeChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnPlayerCharacterEquippedCostumeChanged__DelegateSignature");
		
		UBattleCordeEditForBattleSet_C_OnPlayerCharacterEquippedCostumeChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnHideWindowFinished__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBattleCordeEditForBattleSet_C::OnHideWindowFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C.OnHideWindowFinished__DelegateSignature");
		
		UBattleCordeEditForBattleSet_C_OnHideWindowFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBattleCordeEditForBattleSet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBattleCordeEditForBattleSet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C");
		return ptr;
	}

}


