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
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.SetIsEquipmentListEquipChangeInProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInIsEquipChangeProceeeding                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::SetIsEquipmentListEquipChangeInProgress(bool bInIsEquipChangeProceeeding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.SetIsEquipmentListEquipChangeInProgress");
		
		UEquipmentStatusDescAndListForBattleSet_C_SetIsEquipmentListEquipChangeInProgress_Params params {};
		params.bInIsEquipChangeProceeeding = bInIsEquipChangeProceeeding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.InitSelectedEquipmentStatusDesc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_BattleSetInfoType                                InBattleSetInfoType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBCharaEquipType                                  InEquipType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsStorageMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::InitSelectedEquipmentStatusDesc(E_BattleSetInfoType InBattleSetInfoType, ESBCharaEquipType InEquipType, bool InIsStorageMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.InitSelectedEquipmentStatusDesc");
		
		UEquipmentStatusDescAndListForBattleSet_C_InitSelectedEquipmentStatusDesc_Params params {};
		params.InBattleSetInfoType = InBattleSetInfoType;
		params.InEquipType = InEquipType;
		params.InIsStorageMode = InIsStorageMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.InitEquippedEquipmentStatusDesc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InEquippedEquipmentUniqueId                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		E_BattleSetInfoType                                InBattleSetInfoType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBCharaEquipType                                  InEquipType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::InitEquippedEquipmentStatusDesc(const class FString& InEquippedEquipmentUniqueId, E_BattleSetInfoType InBattleSetInfoType, ESBCharaEquipType InEquipType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.InitEquippedEquipmentStatusDesc");
		
		UEquipmentStatusDescAndListForBattleSet_C_InitEquippedEquipmentStatusDesc_Params params {};
		params.InEquippedEquipmentUniqueId = InEquippedEquipmentUniqueId;
		params.InBattleSetInfoType = InBattleSetInfoType;
		params.InEquipType = InEquipType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.SetLeftSideParameterExpGaugeUpdateStop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsUpdateStop                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::SetLeftSideParameterExpGaugeUpdateStop(bool InIsUpdateStop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.SetLeftSideParameterExpGaugeUpdateStop");
		
		UEquipmentStatusDescAndListForBattleSet_C_SetLeftSideParameterExpGaugeUpdateStop_Params params {};
		params.InIsUpdateStop = InIsUpdateStop;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.CheckIfBattleImagineWithPossessionSkillIsMultiple
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InImagineId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBCharaEquipType                                  InBattleImagineEquipType                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutIsEquipped                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::CheckIfBattleImagineWithPossessionSkillIsMultiple(int32_t InImagineId, ESBCharaEquipType InBattleImagineEquipType, bool* OutIsEquipped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.CheckIfBattleImagineWithPossessionSkillIsMultiple");
		
		UEquipmentStatusDescAndListForBattleSet_C_CheckIfBattleImagineWithPossessionSkillIsMultiple_Params params {};
		params.InImagineId = InImagineId;
		params.InBattleImagineEquipType = InBattleImagineEquipType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsEquipped != nullptr)
			*OutIsEquipped = params.OutIsEquipped;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.CheckIfBattleImagineIdDuplicate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InImagineId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBCharaEquipType                                  InBattleImagineEquipType                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutDuplicate                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::CheckIfBattleImagineIdDuplicate(int32_t InImagineId, ESBCharaEquipType InBattleImagineEquipType, bool* OutDuplicate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.CheckIfBattleImagineIdDuplicate");
		
		UEquipmentStatusDescAndListForBattleSet_C_CheckIfBattleImagineIdDuplicate_Params params {};
		params.InImagineId = InImagineId;
		params.InBattleImagineEquipType = InBattleImagineEquipType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDuplicate != nullptr)
			*OutDuplicate = params.OutDuplicate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.IsHideWindowAnimePlaying
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutIsPlaying                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::IsHideWindowAnimePlaying(bool* OutIsPlaying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.IsHideWindowAnimePlaying");
		
		UEquipmentStatusDescAndListForBattleSet_C_IsHideWindowAnimePlaying_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsPlaying != nullptr)
			*OutIsPlaying = params.OutIsPlaying;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.SetClassChangeLoadingVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::SetClassChangeLoadingVisibility(bool InIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.SetClassChangeLoadingVisibility");
		
		UEquipmentStatusDescAndListForBattleSet_C_SetClassChangeLoadingVisibility_Params params {};
		params.InIsVisible = InIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.SetClassChangedJingleVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::SetClassChangedJingleVisibility(bool InIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.SetClassChangedJingleVisibility");
		
		UEquipmentStatusDescAndListForBattleSet_C_SetClassChangedJingleVisibility_Params params {};
		params.InIsVisible = InIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.IsCharaDetailedStatusOpen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutIsOpen                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::IsCharaDetailedStatusOpen(bool* OutIsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.IsCharaDetailedStatusOpen");
		
		UEquipmentStatusDescAndListForBattleSet_C_IsCharaDetailedStatusOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsOpen != nullptr)
			*OutIsOpen = params.OutIsOpen;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.GetBattleSetInfoType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_BattleSetInfoType                                OutBattleSetInfoType                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::GetBattleSetInfoType(E_BattleSetInfoType* OutBattleSetInfoType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.GetBattleSetInfoType");
		
		UEquipmentStatusDescAndListForBattleSet_C_GetBattleSetInfoType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutBattleSetInfoType != nullptr)
			*OutBattleSetInfoType = params.OutBattleSetInfoType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.RequestPlayerCharacterCalcEquipStatusDiff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InCurrEquipmentUniqueId                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      InNewEquipmentUniqueId                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::RequestPlayerCharacterCalcEquipStatusDiff(const class FString& InCurrEquipmentUniqueId, const class FString& InNewEquipmentUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.RequestPlayerCharacterCalcEquipStatusDiff");
		
		UEquipmentStatusDescAndListForBattleSet_C_RequestPlayerCharacterCalcEquipStatusDiff_Params params {};
		params.InCurrEquipmentUniqueId = InCurrEquipmentUniqueId;
		params.InNewEquipmentUniqueId = InNewEquipmentUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.UpdateLeftSideParameterStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIncludesClassInfoUpdate                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::UpdateLeftSideParameterStatus(bool InIncludesClassInfoUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.UpdateLeftSideParameterStatus");
		
		UEquipmentStatusDescAndListForBattleSet_C_UpdateLeftSideParameterStatus_Params params {};
		params.InIncludesClassInfoUpdate = InIncludesClassInfoUpdate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.GetIsCostumePartsLoading
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutIsCostumePartsLoading                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::GetIsCostumePartsLoading(bool* OutIsCostumePartsLoading)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.GetIsCostumePartsLoading");
		
		UEquipmentStatusDescAndListForBattleSet_C_GetIsCostumePartsLoading_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsCostumePartsLoading != nullptr)
			*OutIsCostumePartsLoading = params.OutIsCostumePartsLoading;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.SetIsCostumePartsLoading
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsCostumePartsLoading                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::SetIsCostumePartsLoading(bool InIsCostumePartsLoading)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.SetIsCostumePartsLoading");
		
		UEquipmentStatusDescAndListForBattleSet_C_SetIsCostumePartsLoading_Params params {};
		params.InIsCostumePartsLoading = InIsCostumePartsLoading;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.SetEquipmentModelCaptureStudioEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsEnabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::SetEquipmentModelCaptureStudioEnable(bool InIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.SetEquipmentModelCaptureStudioEnable");
		
		UEquipmentStatusDescAndListForBattleSet_C_SetEquipmentModelCaptureStudioEnable_Params params {};
		params.InIsEnabled = InIsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.CreateEquipmentModelCaptureStudio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_BattleSetInfoType                                InInfoType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::CreateEquipmentModelCaptureStudio(E_BattleSetInfoType InInfoType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.CreateEquipmentModelCaptureStudio");
		
		UEquipmentStatusDescAndListForBattleSet_C_CreateEquipmentModelCaptureStudio_Params params {};
		params.InInfoType = InInfoType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.SwitchStatusType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InStatusTypeId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::SwitchStatusType(int32_t InStatusTypeId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.SwitchStatusType");
		
		UEquipmentStatusDescAndListForBattleSet_C_SwitchStatusType_Params params {};
		params.InStatusTypeId = InStatusTypeId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.UpdateSelectedEquipmentDesc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InEquipmentUniqueId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               InForceUpdate                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::UpdateSelectedEquipmentDesc(const class FString& InEquipmentUniqueId, bool InForceUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.UpdateSelectedEquipmentDesc");
		
		UEquipmentStatusDescAndListForBattleSet_C_UpdateSelectedEquipmentDesc_Params params {};
		params.InEquipmentUniqueId = InEquipmentUniqueId;
		params.InForceUpdate = InForceUpdate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.UpdateEquippedEquipmentDesc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InEquipmentUniqueId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               InForceUpdate                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::UpdateEquippedEquipmentDesc(const class FString& InEquipmentUniqueId, bool InForceUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.UpdateEquippedEquipmentDesc");
		
		UEquipmentStatusDescAndListForBattleSet_C_UpdateEquippedEquipmentDesc_Params params {};
		params.InEquipmentUniqueId = InEquipmentUniqueId;
		params.InForceUpdate = InForceUpdate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.HideWindow
	 * 		Flags  -> ()
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::HideWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.HideWindow");
		
		UEquipmentStatusDescAndListForBattleSet_C_HideWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ShowWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_BattleSetInfoType                                InInfoType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBClassType                                       InEquipClassType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBCharaEquipType                                  InEquipType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsStorageMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::ShowWindow(E_BattleSetInfoType InInfoType, ESBClassType InEquipClassType, ESBCharaEquipType InEquipType, bool InIsStorageMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ShowWindow");
		
		UEquipmentStatusDescAndListForBattleSet_C_ShowWindow_Params params {};
		params.InInfoType = InInfoType;
		params.InEquipClassType = InEquipClassType;
		params.InEquipType = InEquipType;
		params.InIsStorageMode = InIsStorageMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.MoveEquipmentToBagRequestProc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemType                                          InEquipmentItemType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::MoveEquipmentToBagRequestProc(EItemType InEquipmentItemType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.MoveEquipmentToBagRequestProc");
		
		UEquipmentStatusDescAndListForBattleSet_C_MoveEquipmentToBagRequestProc_Params params {};
		params.InEquipmentItemType = InEquipmentItemType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnSaveItemStorage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRetCode                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FOwnItemInfo>                        InDirtyItems                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::OnSaveItemStorage(int32_t InRetCode, TArray<struct FOwnItemInfo> InDirtyItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnSaveItemStorage");
		
		UEquipmentStatusDescAndListForBattleSet_C_OnSaveItemStorage_Params params {};
		params.InRetCode = InRetCode;
		params.InDirtyItems = InDirtyItems;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.InnerImagineChangeProc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InInnerImagineUniqueId                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               InDisarm                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::InnerImagineChangeProc(const class FString& InInnerImagineUniqueId, bool InDisarm)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.InnerImagineChangeProc");
		
		UEquipmentStatusDescAndListForBattleSet_C_InnerImagineChangeProc_Params params {};
		params.InInnerImagineUniqueId = InInnerImagineUniqueId;
		params.InDisarm = InDisarm;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ContinueInnerImagineChangeProcFromUseUnusedEquipConfirmDialog
	 * 		Flags  -> ()
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::ContinueInnerImagineChangeProcFromUseUnusedEquipConfirmDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ContinueInnerImagineChangeProcFromUseUnusedEquipConfirmDialog");
		
		UEquipmentStatusDescAndListForBattleSet_C_ContinueInnerImagineChangeProcFromUseUnusedEquipConfirmDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnInnerImagineEquipChangeCompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBCharaEquipType                                  EquipType                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      UniqueId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               IsEquip                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInIsExpiredStickerWeapons                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class FString>                              InExpiredStickerWeaponUniqueIds                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FSBExpiredEquipmentData                     InExpiredEquipmentData                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::OnInnerImagineEquipChangeCompleted(int32_t RetCode, ESBCharaEquipType EquipType, const class FString& UniqueId, bool IsEquip, bool bInIsExpiredStickerWeapons, TArray<class FString> InExpiredStickerWeaponUniqueIds, const struct FSBExpiredEquipmentData& InExpiredEquipmentData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnInnerImagineEquipChangeCompleted");
		
		UEquipmentStatusDescAndListForBattleSet_C_OnInnerImagineEquipChangeCompleted_Params params {};
		params.RetCode = RetCode;
		params.EquipType = EquipType;
		params.UniqueId = UniqueId;
		params.IsEquip = IsEquip;
		params.bInIsExpiredStickerWeapons = bInIsExpiredStickerWeapons;
		params.InExpiredStickerWeaponUniqueIds = InExpiredStickerWeaponUniqueIds;
		params.InExpiredEquipmentData = InExpiredEquipmentData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ContinueInnerImagineChangeProcFromMoveEquipmentToBagRequest
	 * 		Flags  -> ()
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::ContinueInnerImagineChangeProcFromMoveEquipmentToBagRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ContinueInnerImagineChangeProcFromMoveEquipmentToBagRequest");
		
		UEquipmentStatusDescAndListForBattleSet_C_ContinueInnerImagineChangeProcFromMoveEquipmentToBagRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnCharaEquipPassiveImagineChanged
	 * 		Flags  -> ()
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::OnCharaEquipPassiveImagineChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnCharaEquipPassiveImagineChanged");
		
		UEquipmentStatusDescAndListForBattleSet_C_OnCharaEquipPassiveImagineChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_SelectedEquipmentStatusDesc_K2Node_ComponentBoundEvent_0_OnRequestBattleImagineModelLoad__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryItemData                          InBattleImagineInventoryItemData                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::BndEvt__EquipmentStatusDescAndListForBattleSet_SelectedEquipmentStatusDesc_K2Node_ComponentBoundEvent_0_OnRequestBattleImagineModelLoad__DelegateSignature(const struct FInventoryItemData& InBattleImagineInventoryItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_SelectedEquipmentStatusDesc_K2Node_ComponentBoundEvent_0_OnRequestBattleImagineModelLoad__DelegateSignature");
		
		UEquipmentStatusDescAndListForBattleSet_C_BndEvt__EquipmentStatusDescAndListForBattleSet_SelectedEquipmentStatusDesc_K2Node_ComponentBoundEvent_0_OnRequestBattleImagineModelLoad__DelegateSignature_Params params {};
		params.InBattleImagineInventoryItemData = InBattleImagineInventoryItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BattleImagineModelLoadCompleted
	 * 		Flags  -> ()
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::BattleImagineModelLoadCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BattleImagineModelLoadCompleted");
		
		UEquipmentStatusDescAndListForBattleSet_C_BattleImagineModelLoadCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BattleImagineChangeProc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InBattleImagineUniqueId                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               InDisarm                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::BattleImagineChangeProc(const class FString& InBattleImagineUniqueId, bool InDisarm)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BattleImagineChangeProc");
		
		UEquipmentStatusDescAndListForBattleSet_C_BattleImagineChangeProc_Params params {};
		params.InBattleImagineUniqueId = InBattleImagineUniqueId;
		params.InDisarm = InDisarm;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ContinueBattleImagineChangeProcFromUseUnusedEquipConfirmDialog
	 * 		Flags  -> ()
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::ContinueBattleImagineChangeProcFromUseUnusedEquipConfirmDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ContinueBattleImagineChangeProcFromUseUnusedEquipConfirmDialog");
		
		UEquipmentStatusDescAndListForBattleSet_C_ContinueBattleImagineChangeProcFromUseUnusedEquipConfirmDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnBattleImagineEquipChangeCompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBCharaEquipType                                  EquipType                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      UniqueId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               IsEquip                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInIsExpiredStickerWeapons                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class FString>                              InExpiredStickerWeaponUniqueIds                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FSBExpiredEquipmentData                     InExpiredEquipmentData                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::OnBattleImagineEquipChangeCompleted(int32_t RetCode, ESBCharaEquipType EquipType, const class FString& UniqueId, bool IsEquip, bool bInIsExpiredStickerWeapons, TArray<class FString> InExpiredStickerWeaponUniqueIds, const struct FSBExpiredEquipmentData& InExpiredEquipmentData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnBattleImagineEquipChangeCompleted");
		
		UEquipmentStatusDescAndListForBattleSet_C_OnBattleImagineEquipChangeCompleted_Params params {};
		params.RetCode = RetCode;
		params.EquipType = EquipType;
		params.UniqueId = UniqueId;
		params.IsEquip = IsEquip;
		params.bInIsExpiredStickerWeapons = bInIsExpiredStickerWeapons;
		params.InExpiredStickerWeaponUniqueIds = InExpiredStickerWeaponUniqueIds;
		params.InExpiredEquipmentData = InExpiredEquipmentData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ContinueBattleImagineChangeProcFromMoveEquipmentToBagRequest
	 * 		Flags  -> ()
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::ContinueBattleImagineChangeProcFromMoveEquipmentToBagRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ContinueBattleImagineChangeProcFromMoveEquipmentToBagRequest");
		
		UEquipmentStatusDescAndListForBattleSet_C_ContinueBattleImagineChangeProcFromMoveEquipmentToBagRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnImagineArtsChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESkillActionPosition                               ChangedSAP                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      UniqueId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::OnImagineArtsChanged(ESkillActionPosition ChangedSAP, const class FString& UniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnImagineArtsChanged");
		
		UEquipmentStatusDescAndListForBattleSet_C_OnImagineArtsChanged_Params params {};
		params.ChangedSAP = ChangedSAP;
		params.UniqueId = UniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.WeaponChangeProc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InWeaponUniqueId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::WeaponChangeProc(const class FString& InWeaponUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.WeaponChangeProc");
		
		UEquipmentStatusDescAndListForBattleSet_C_WeaponChangeProc_Params params {};
		params.InWeaponUniqueId = InWeaponUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnWeaponEquipDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInIsExpiredStickerWeapons                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class FString>                              InExpiredStickerWeaponUniqueIds                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FSBExpiredEquipmentData                     InExpiredEquipmentData                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::OnWeaponEquipDelegate(int32_t RetCode, bool bInIsExpiredStickerWeapons, TArray<class FString> InExpiredStickerWeaponUniqueIds, const struct FSBExpiredEquipmentData& InExpiredEquipmentData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnWeaponEquipDelegate");
		
		UEquipmentStatusDescAndListForBattleSet_C_OnWeaponEquipDelegate_Params params {};
		params.RetCode = RetCode;
		params.bInIsExpiredStickerWeapons = bInIsExpiredStickerWeapons;
		params.InExpiredStickerWeaponUniqueIds = InExpiredStickerWeaponUniqueIds;
		params.InExpiredEquipmentData = InExpiredEquipmentData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.WeaponModelLoadCompleted
	 * 		Flags  -> ()
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::WeaponModelLoadCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.WeaponModelLoadCompleted");
		
		UEquipmentStatusDescAndListForBattleSet_C_WeaponModelLoadCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_SelectedEquipmentStatusDesc_K2Node_ComponentBoundEvent_0_OnRequestWeaponModelLoad__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryItemData                          InWeaponInventoryItemData                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::BndEvt__EquipmentStatusDescAndListForBattleSet_SelectedEquipmentStatusDesc_K2Node_ComponentBoundEvent_0_OnRequestWeaponModelLoad__DelegateSignature(const struct FInventoryItemData& InWeaponInventoryItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_SelectedEquipmentStatusDesc_K2Node_ComponentBoundEvent_0_OnRequestWeaponModelLoad__DelegateSignature");
		
		UEquipmentStatusDescAndListForBattleSet_C_BndEvt__EquipmentStatusDescAndListForBattleSet_SelectedEquipmentStatusDesc_K2Node_ComponentBoundEvent_0_OnRequestWeaponModelLoad__DelegateSignature_Params params {};
		params.InWeaponInventoryItemData = InWeaponInventoryItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnClassChangeNotify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRetCode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInIsExpiredStickerWeapons                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class FString>                              InExpiredStickerWeaponUniqueIds                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FSBExpiredEquipmentData                     InDirtyExpiredEquipmentData                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::OnClassChangeNotify(int32_t InRetCode, bool bInIsExpiredStickerWeapons, TArray<class FString> InExpiredStickerWeaponUniqueIds, const struct FSBExpiredEquipmentData& InDirtyExpiredEquipmentData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnClassChangeNotify");
		
		UEquipmentStatusDescAndListForBattleSet_C_OnClassChangeNotify_Params params {};
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
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnClientRestart
	 * 		Flags  -> ()
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::OnClientRestart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnClientRestart");
		
		UEquipmentStatusDescAndListForBattleSet_C_OnClientRestart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnSpawnWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InInventoryIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBWeaponEquipType                                 InWeaponEquipType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::OnSpawnWeapon(int32_t InInventoryIndex, ESBWeaponEquipType InWeaponEquipType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnSpawnWeapon");
		
		UEquipmentStatusDescAndListForBattleSet_C_OnSpawnWeapon_Params params {};
		params.InInventoryIndex = InInventoryIndex;
		params.InWeaponEquipType = InWeaponEquipType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_ClassChangedJingle_K2Node_ComponentBoundEvent_1_OnPlayedAnim__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::BndEvt__EquipmentStatusDescAndListForBattleSet_ClassChangedJingle_K2Node_ComponentBoundEvent_1_OnPlayedAnim__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_ClassChangedJingle_K2Node_ComponentBoundEvent_1_OnPlayedAnim__DelegateSignature");
		
		UEquipmentStatusDescAndListForBattleSet_C_BndEvt__EquipmentStatusDescAndListForBattleSet_ClassChangedJingle_K2Node_ComponentBoundEvent_1_OnPlayedAnim__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ContinueWeaponChangeProcFromUseUnusedEquipConfirmDialog
	 * 		Flags  -> ()
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::ContinueWeaponChangeProcFromUseUnusedEquipConfirmDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ContinueWeaponChangeProcFromUseUnusedEquipConfirmDialog");
		
		UEquipmentStatusDescAndListForBattleSet_C_ContinueWeaponChangeProcFromUseUnusedEquipConfirmDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ContinueWeaponChangeProcFromMoveEquipmentToBagRequest
	 * 		Flags  -> ()
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::ContinueWeaponChangeProcFromMoveEquipmentToBagRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ContinueWeaponChangeProcFromMoveEquipmentToBagRequest");
		
		UEquipmentStatusDescAndListForBattleSet_C_ContinueWeaponChangeProcFromMoveEquipmentToBagRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ReturnFromClassChangeProgressContinueConfirmDialog
	 * 		Flags  -> ()
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::ReturnFromClassChangeProgressContinueConfirmDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ReturnFromClassChangeProgressContinueConfirmDialog");
		
		UEquipmentStatusDescAndListForBattleSet_C_ReturnFromClassChangeProgressContinueConfirmDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnClassChangeFailure
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRetCode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::OnClassChangeFailure(int32_t InRetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnClassChangeFailure");
		
		UEquipmentStatusDescAndListForBattleSet_C_OnClassChangeFailure_Params params {};
		params.InRetCode = InRetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.SetWeaponModelRotateActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsRotateActive                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::SetWeaponModelRotateActive(bool InIsRotateActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.SetWeaponModelRotateActive");
		
		UEquipmentStatusDescAndListForBattleSet_C_SetWeaponModelRotateActive_Params params {};
		params.InIsRotateActive = InIsRotateActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ShowUnchangeableMessageDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues InUnchangeableRetValue                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_BattleSetInfoType                                InBattleSetInfoType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::ShowUnchangeableMessageDialog(ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues InUnchangeableRetValue, E_BattleSetInfoType InBattleSetInfoType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ShowUnchangeableMessageDialog");
		
		UEquipmentStatusDescAndListForBattleSet_C_ShowUnchangeableMessageDialog_Params params {};
		params.InUnchangeableRetValue = InUnchangeableRetValue;
		params.InBattleSetInfoType = InBattleSetInfoType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ShowUsingUnusedEquipConfirmDialog
	 * 		Flags  -> ()
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::ShowUsingUnusedEquipConfirmDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ShowUsingUnusedEquipConfirmDialog");
		
		UEquipmentStatusDescAndListForBattleSet_C_ShowUsingUnusedEquipConfirmDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.EndUsingUnusedEquipConfirmDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EYesNoDialogResult                                 InYesNoResult                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::EndUsingUnusedEquipConfirmDialog(EYesNoDialogResult InYesNoResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.EndUsingUnusedEquipConfirmDialog");
		
		UEquipmentStatusDescAndListForBattleSet_C_EndUsingUnusedEquipConfirmDialog_Params params {};
		params.InYesNoResult = InYesNoResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ShowBattleImagineDuplicateMessageDialog
	 * 		Flags  -> ()
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::ShowBattleImagineDuplicateMessageDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ShowBattleImagineDuplicateMessageDialog");
		
		UEquipmentStatusDescAndListForBattleSet_C_ShowBattleImagineDuplicateMessageDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ShowBattleImagineWithPossessionSkillIsEquippedMessageDialog
	 * 		Flags  -> ()
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::ShowBattleImagineWithPossessionSkillIsEquippedMessageDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ShowBattleImagineWithPossessionSkillIsEquippedMessageDialog");
		
		UEquipmentStatusDescAndListForBattleSet_C_ShowBattleImagineWithPossessionSkillIsEquippedMessageDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ShowClassChangeUnableMessageDialog
	 * 		Flags  -> ()
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::ShowClassChangeUnableMessageDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ShowClassChangeUnableMessageDialog");
		
		UEquipmentStatusDescAndListForBattleSet_C_ShowClassChangeUnableMessageDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ShowQuestProgressUnableByClassChangeConfirmDialog
	 * 		Flags  -> ()
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::ShowQuestProgressUnableByClassChangeConfirmDialog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ShowQuestProgressUnableByClassChangeConfirmDialog");
		
		UEquipmentStatusDescAndListForBattleSet_C_ShowQuestProgressUnableByClassChangeConfirmDialog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.Construct
	 * 		Flags  -> ()
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.Construct");
		
		UEquipmentStatusDescAndListForBattleSet_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnAnimationFinished");
		
		UEquipmentStatusDescAndListForBattleSet_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnPress_Cancel
	 * 		Flags  -> ()
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::OnPress_Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnPress_Cancel");
		
		UEquipmentStatusDescAndListForBattleSet_C_OnPress_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.UiInputBlock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsBlock                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::UiInputBlock(bool InIsBlock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.UiInputBlock");
		
		UEquipmentStatusDescAndListForBattleSet_C_UiInputBlock_Params params {};
		params.InIsBlock = InIsBlock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__BtnScreen_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::BndEvt__BtnScreen_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__BtnScreen_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature");
		
		UEquipmentStatusDescAndListForBattleSet_C_BndEvt__BtnScreen_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.UIInputBlockFrontRow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsBlock                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::UIInputBlockFrontRow(bool InIsBlock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.UIInputBlockFrontRow");
		
		UEquipmentStatusDescAndListForBattleSet_C_UIInputBlockFrontRow_Params params {};
		params.InIsBlock = InIsBlock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.Destruct
	 * 		Flags  -> ()
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.Destruct");
		
		UEquipmentStatusDescAndListForBattleSet_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__MyCharaMenu_WeaponDescAndListlForBattleSet_StatusTypeSwitchBtn_K2Node_ComponentBoundEvent_7_OnSwitchBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InPressedSwitchBtnId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::BndEvt__MyCharaMenu_WeaponDescAndListlForBattleSet_StatusTypeSwitchBtn_K2Node_ComponentBoundEvent_7_OnSwitchBtnPressed__DelegateSignature(int32_t InPressedSwitchBtnId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__MyCharaMenu_WeaponDescAndListlForBattleSet_StatusTypeSwitchBtn_K2Node_ComponentBoundEvent_7_OnSwitchBtnPressed__DelegateSignature");
		
		UEquipmentStatusDescAndListForBattleSet_C_BndEvt__MyCharaMenu_WeaponDescAndListlForBattleSet_StatusTypeSwitchBtn_K2Node_ComponentBoundEvent_7_OnSwitchBtnPressed__DelegateSignature_Params params {};
		params.InPressedSwitchBtnId = InPressedSwitchBtnId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_List_K2Node_ComponentBoundEvent_8_OnListItemSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemIconBtn_C*                              InSelectedListItem                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::BndEvt__EquipmentStatusDescAndListForBattleSet_List_K2Node_ComponentBoundEvent_8_OnListItemSelected__DelegateSignature(class UItemIconBtn_C* InSelectedListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_List_K2Node_ComponentBoundEvent_8_OnListItemSelected__DelegateSignature");
		
		UEquipmentStatusDescAndListForBattleSet_C_BndEvt__EquipmentStatusDescAndListForBattleSet_List_K2Node_ComponentBoundEvent_8_OnListItemSelected__DelegateSignature_Params params {};
		params.InSelectedListItem = InSelectedListItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_List_K2Node_ComponentBoundEvent_11_OnEquipChangeBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_BattleSetInfoType                                InInfoType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InEquipmentUniqueId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::BndEvt__EquipmentStatusDescAndListForBattleSet_List_K2Node_ComponentBoundEvent_11_OnEquipChangeBtnPressed__DelegateSignature(E_BattleSetInfoType InInfoType, const class FString& InEquipmentUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_List_K2Node_ComponentBoundEvent_11_OnEquipChangeBtnPressed__DelegateSignature");
		
		UEquipmentStatusDescAndListForBattleSet_C_BndEvt__EquipmentStatusDescAndListForBattleSet_List_K2Node_ComponentBoundEvent_11_OnEquipChangeBtnPressed__DelegateSignature_Params params {};
		params.InInfoType = InInfoType;
		params.InEquipmentUniqueId = InEquipmentUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_List_K2Node_ComponentBoundEvent_13_OnFilterApply__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::BndEvt__EquipmentStatusDescAndListForBattleSet_List_K2Node_ComponentBoundEvent_13_OnFilterApply__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_List_K2Node_ComponentBoundEvent_13_OnFilterApply__DelegateSignature");
		
		UEquipmentStatusDescAndListForBattleSet_C_BndEvt__EquipmentStatusDescAndListForBattleSet_List_K2Node_ComponentBoundEvent_13_OnFilterApply__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_List_K2Node_ComponentBoundEvent_14_OnSortTypeSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBItemSortType                                    InSelectedSortType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::BndEvt__EquipmentStatusDescAndListForBattleSet_List_K2Node_ComponentBoundEvent_14_OnSortTypeSelected__DelegateSignature(ESBItemSortType InSelectedSortType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_List_K2Node_ComponentBoundEvent_14_OnSortTypeSelected__DelegateSignature");
		
		UEquipmentStatusDescAndListForBattleSet_C_BndEvt__EquipmentStatusDescAndListForBattleSet_List_K2Node_ComponentBoundEvent_14_OnSortTypeSelected__DelegateSignature_Params params {};
		params.InSelectedSortType = InSelectedSortType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.PreConstruct");
		
		UEquipmentStatusDescAndListForBattleSet_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_EquipmentList_K2Node_ComponentBoundEvent_0_OnFilterBtnBagOrStoragePressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsFilterBtnStoragePressed                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::BndEvt__EquipmentStatusDescAndListForBattleSet_EquipmentList_K2Node_ComponentBoundEvent_0_OnFilterBtnBagOrStoragePressed__DelegateSignature(bool InIsFilterBtnStoragePressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_EquipmentList_K2Node_ComponentBoundEvent_0_OnFilterBtnBagOrStoragePressed__DelegateSignature");
		
		UEquipmentStatusDescAndListForBattleSet_C_BndEvt__EquipmentStatusDescAndListForBattleSet_EquipmentList_K2Node_ComponentBoundEvent_0_OnFilterBtnBagOrStoragePressed__DelegateSignature_Params params {};
		params.InIsFilterBtnStoragePressed = InIsFilterBtnStoragePressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_EquippedEquipmentStatusDesc_K2Node_ComponentBoundEvent_1_OnImagineRemoveBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::BndEvt__EquipmentStatusDescAndListForBattleSet_EquippedEquipmentStatusDesc_K2Node_ComponentBoundEvent_1_OnImagineRemoveBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_EquippedEquipmentStatusDesc_K2Node_ComponentBoundEvent_1_OnImagineRemoveBtnPressed__DelegateSignature");
		
		UEquipmentStatusDescAndListForBattleSet_C_BndEvt__EquipmentStatusDescAndListForBattleSet_EquippedEquipmentStatusDesc_K2Node_ComponentBoundEvent_1_OnImagineRemoveBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnCalcEquipStatusDiff
	 * 		Flags  -> ()
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::OnCalcEquipStatusDiff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnCalcEquipStatusDiff");
		
		UEquipmentStatusDescAndListForBattleSet_C_OnCalcEquipStatusDiff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_BackToBattleSetTopLevelBtn_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::BndEvt__EquipmentStatusDescAndListForBattleSet_BackToBattleSetTopLevelBtn_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_BackToBattleSetTopLevelBtn_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature");
		
		UEquipmentStatusDescAndListForBattleSet_C_BndEvt__EquipmentStatusDescAndListForBattleSet_BackToBattleSetTopLevelBtn_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.CloseDetailedStatus
	 * 		Flags  -> ()
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::CloseDetailedStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.CloseDetailedStatus");
		
		UEquipmentStatusDescAndListForBattleSet_C_CloseDetailedStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_LeftSideParametersForSecondLevel_K2Node_ComponentBoundEvent_6_OnDetailStatusBtnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::BndEvt__EquipmentStatusDescAndListForBattleSet_LeftSideParametersForSecondLevel_K2Node_ComponentBoundEvent_6_OnDetailStatusBtnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_LeftSideParametersForSecondLevel_K2Node_ComponentBoundEvent_6_OnDetailStatusBtnClicked__DelegateSignature");
		
		UEquipmentStatusDescAndListForBattleSet_C_BndEvt__EquipmentStatusDescAndListForBattleSet_LeftSideParametersForSecondLevel_K2Node_ComponentBoundEvent_6_OnDetailStatusBtnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_BtnFullScreenForDetailedStatus_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::BndEvt__EquipmentStatusDescAndListForBattleSet_BtnFullScreenForDetailedStatus_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_BtnFullScreenForDetailedStatus_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UEquipmentStatusDescAndListForBattleSet_C_BndEvt__EquipmentStatusDescAndListForBattleSet_BtnFullScreenForDetailedStatus_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ExpiredItemNoticeSystemMessageTimerEnd
	 * 		Flags  -> ()
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::ExpiredItemNoticeSystemMessageTimerEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ExpiredItemNoticeSystemMessageTimerEnd");
		
		UEquipmentStatusDescAndListForBattleSet_C_ExpiredItemNoticeSystemMessageTimerEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ChangeEquipmentResultProc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              InExpiredWeaponStickerUniqueIds                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FSBExpiredEquipmentData                     InExpiredEquipmentData                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               InIsClassChange                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InIsDisarm                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::ChangeEquipmentResultProc(TArray<class FString> InExpiredWeaponStickerUniqueIds, const struct FSBExpiredEquipmentData& InExpiredEquipmentData, bool InIsClassChange, bool InIsDisarm)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ChangeEquipmentResultProc");
		
		UEquipmentStatusDescAndListForBattleSet_C_ChangeEquipmentResultProc_Params params {};
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
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnImagineEquipChangeCompleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBCharaEquipType                                  EquipType                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      UniqueId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               IsEquip                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInIsExpiredStickerWeapons                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class FString>                              InExpiredStickerWeaponUniqueIds                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FSBExpiredEquipmentData                     InExpiredEquipmentData                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::OnImagineEquipChangeCompleted(int32_t RetCode, ESBCharaEquipType EquipType, const class FString& UniqueId, bool IsEquip, bool bInIsExpiredStickerWeapons, TArray<class FString> InExpiredStickerWeaponUniqueIds, const struct FSBExpiredEquipmentData& InExpiredEquipmentData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnImagineEquipChangeCompleted");
		
		UEquipmentStatusDescAndListForBattleSet_C_OnImagineEquipChangeCompleted_Params params {};
		params.RetCode = RetCode;
		params.EquipType = EquipType;
		params.UniqueId = UniqueId;
		params.IsEquip = IsEquip;
		params.bInIsExpiredStickerWeapons = bInIsExpiredStickerWeapons;
		params.InExpiredStickerWeaponUniqueIds = InExpiredStickerWeaponUniqueIds;
		params.InExpiredEquipmentData = InExpiredEquipmentData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_EquipmentList_K2Node_ComponentBoundEvent_1_OnCancelBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::BndEvt__EquipmentStatusDescAndListForBattleSet_EquipmentList_K2Node_ComponentBoundEvent_1_OnCancelBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_EquipmentList_K2Node_ComponentBoundEvent_1_OnCancelBtnPressed__DelegateSignature");
		
		UEquipmentStatusDescAndListForBattleSet_C_BndEvt__EquipmentStatusDescAndListForBattleSet_EquipmentList_K2Node_ComponentBoundEvent_1_OnCancelBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnWaitEquippedWeaponSpawnTimerEnd
	 * 		Flags  -> ()
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::OnWaitEquippedWeaponSpawnTimerEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnWaitEquippedWeaponSpawnTimerEnd");
		
		UEquipmentStatusDescAndListForBattleSet_C_OnWaitEquippedWeaponSpawnTimerEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnWaitPlayerStatusRecalcEndAtImagineEquipChange
	 * 		Flags  -> ()
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::OnWaitPlayerStatusRecalcEndAtImagineEquipChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnWaitPlayerStatusRecalcEndAtImagineEquipChange");
		
		UEquipmentStatusDescAndListForBattleSet_C_OnWaitPlayerStatusRecalcEndAtImagineEquipChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_EquipmentList_K2Node_ComponentBoundEvent_5_OnIsChangingEquip__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::BndEvt__EquipmentStatusDescAndListForBattleSet_EquipmentList_K2Node_ComponentBoundEvent_5_OnIsChangingEquip__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.BndEvt__EquipmentStatusDescAndListForBattleSet_EquipmentList_K2Node_ComponentBoundEvent_5_OnIsChangingEquip__DelegateSignature");
		
		UEquipmentStatusDescAndListForBattleSet_C_BndEvt__EquipmentStatusDescAndListForBattleSet_EquipmentList_K2Node_ComponentBoundEvent_5_OnIsChangingEquip__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ExecuteUbergraph_EquipmentStatusDescAndListForBattleSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::ExecuteUbergraph_EquipmentStatusDescAndListForBattleSet(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.ExecuteUbergraph_EquipmentStatusDescAndListForBattleSet");
		
		UEquipmentStatusDescAndListForBattleSet_C_ExecuteUbergraph_EquipmentStatusDescAndListForBattleSet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnTermEnd__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::OnTermEnd__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnTermEnd__DelegateSignature");
		
		UEquipmentStatusDescAndListForBattleSet_C_OnTermEnd__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnCharaDetailedStatus__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::OnCharaDetailedStatus__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnCharaDetailedStatus__DelegateSignature");
		
		UEquipmentStatusDescAndListForBattleSet_C_OnCharaDetailedStatus__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnEquippedWeaponChangeRequestCompleted__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::OnEquippedWeaponChangeRequestCompleted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnEquippedWeaponChangeRequestCompleted__DelegateSignature");
		
		UEquipmentStatusDescAndListForBattleSet_C_OnEquippedWeaponChangeRequestCompleted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnSetLeftSideParameterExpGaugeUpdateStop__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsUpdateStop                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::OnSetLeftSideParameterExpGaugeUpdateStop__DelegateSignature(bool InIsUpdateStop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnSetLeftSideParameterExpGaugeUpdateStop__DelegateSignature");
		
		UEquipmentStatusDescAndListForBattleSet_C_OnSetLeftSideParameterExpGaugeUpdateStop__DelegateSignature_Params params {};
		params.InIsUpdateStop = InIsUpdateStop;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnEquippedInnerImagineChangeRequestCompleted__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::OnEquippedInnerImagineChangeRequestCompleted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnEquippedInnerImagineChangeRequestCompleted__DelegateSignature");
		
		UEquipmentStatusDescAndListForBattleSet_C_OnEquippedInnerImagineChangeRequestCompleted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnEquippedBattleImagineChangeRequestCompleted__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::OnEquippedBattleImagineChangeRequestCompleted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnEquippedBattleImagineChangeRequestCompleted__DelegateSignature");
		
		UEquipmentStatusDescAndListForBattleSet_C_OnEquippedBattleImagineChangeRequestCompleted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnClassChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::OnClassChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnClassChanged__DelegateSignature");
		
		UEquipmentStatusDescAndListForBattleSet_C_OnClassChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnEquippedWeaponSpawned__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_BattleSetInfoType                                InBattleSetInfoType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::OnEquippedWeaponSpawned__DelegateSignature(E_BattleSetInfoType InBattleSetInfoType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnEquippedWeaponSpawned__DelegateSignature");
		
		UEquipmentStatusDescAndListForBattleSet_C_OnEquippedWeaponSpawned__DelegateSignature_Params params {};
		params.InBattleSetInfoType = InBattleSetInfoType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnResetLeftSideParameterDiffMark__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::OnResetLeftSideParameterDiffMark__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnResetLeftSideParameterDiffMark__DelegateSignature");
		
		UEquipmentStatusDescAndListForBattleSet_C_OnResetLeftSideParameterDiffMark__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnLeftSideParameterStatusUpdated__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_BattleSetInfoType                                InBattleSetInfoType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIncludesClassInfoUpdate                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::OnLeftSideParameterStatusUpdated__DelegateSignature(E_BattleSetInfoType InBattleSetInfoType, bool InIncludesClassInfoUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnLeftSideParameterStatusUpdated__DelegateSignature");
		
		UEquipmentStatusDescAndListForBattleSet_C_OnLeftSideParameterStatusUpdated__DelegateSignature_Params params {};
		params.InBattleSetInfoType = InBattleSetInfoType;
		params.InIncludesClassInfoUpdate = InIncludesClassInfoUpdate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnPlayerCharacterEquippedCostumeChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::OnPlayerCharacterEquippedCostumeChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnPlayerCharacterEquippedCostumeChanged__DelegateSignature");
		
		UEquipmentStatusDescAndListForBattleSet_C_OnPlayerCharacterEquippedCostumeChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnEquipmentChangeBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::OnEquipmentChangeBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnEquipmentChangeBtnPressed__DelegateSignature");
		
		UEquipmentStatusDescAndListForBattleSet_C_OnEquipmentChangeBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnEquipmentListItemSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InEquippedEquipmentUniqueId                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      InSelectedEquipmentUniqueId                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::OnEquipmentListItemSelected__DelegateSignature(const class FString& InEquippedEquipmentUniqueId, const class FString& InSelectedEquipmentUniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnEquipmentListItemSelected__DelegateSignature");
		
		UEquipmentStatusDescAndListForBattleSet_C_OnEquipmentListItemSelected__DelegateSignature_Params params {};
		params.InEquippedEquipmentUniqueId = InEquippedEquipmentUniqueId;
		params.InSelectedEquipmentUniqueId = InSelectedEquipmentUniqueId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnHideWindowFinished__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEquipmentStatusDescAndListForBattleSet_C::OnHideWindowFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C.OnHideWindowFinished__DelegateSignature");
		
		UEquipmentStatusDescAndListForBattleSet_C_OnHideWindowFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEquipmentStatusDescAndListForBattleSet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEquipmentStatusDescAndListForBattleSet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C");
		return ptr;
	}

}


