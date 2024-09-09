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
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos.BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C.NotifyDeletedMountsToLogAndMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBDeletedMountData>                 InDeletedMountDatas                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               OutIsMessageShowed                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C::NotifyDeletedMountsToLogAndMessage(TArray<struct FSBDeletedMountData>* InDeletedMountDatas, bool* OutIsMessageShowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos.BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C.NotifyDeletedMountsToLogAndMessage");
		
		UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C_NotifyDeletedMountsToLogAndMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InDeletedMountDatas != nullptr)
			*InDeletedMountDatas = params.InDeletedMountDatas;
		if (OutIsMessageShowed != nullptr)
			*OutIsMessageShowed = params.OutIsMessageShowed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos.BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C.NotifyDeletedImaginesToLogAndMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBDeletedImagineData>               InDeletedImagineDatas                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               OutIsMessageShowed                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C::NotifyDeletedImaginesToLogAndMessage(TArray<struct FSBDeletedImagineData>* InDeletedImagineDatas, bool* OutIsMessageShowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos.BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C.NotifyDeletedImaginesToLogAndMessage");
		
		UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C_NotifyDeletedImaginesToLogAndMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InDeletedImagineDatas != nullptr)
			*InDeletedImagineDatas = params.InDeletedImagineDatas;
		if (OutIsMessageShowed != nullptr)
			*OutIsMessageShowed = params.OutIsMessageShowed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos.BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C.NotifyDeletedCostumesToLogAndMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBDeletedCostumeData>               InDeletedCostumeDatas                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               OutIsMessageShowed                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C::NotifyDeletedCostumesToLogAndMessage(TArray<struct FSBDeletedCostumeData>* InDeletedCostumeDatas, bool* OutIsMessageShowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos.BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C.NotifyDeletedCostumesToLogAndMessage");
		
		UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C_NotifyDeletedCostumesToLogAndMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InDeletedCostumeDatas != nullptr)
			*InDeletedCostumeDatas = params.InDeletedCostumeDatas;
		if (OutIsMessageShowed != nullptr)
			*OutIsMessageShowed = params.OutIsMessageShowed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos.BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C.NotifyDecayedWeaponsToLogAndMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBDecayedWeaponData>                InDecayedWeaponDatas                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               OutIsMessageShowed                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C::NotifyDecayedWeaponsToLogAndMessage(TArray<struct FSBDecayedWeaponData>* InDecayedWeaponDatas, bool* OutIsMessageShowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos.BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C.NotifyDecayedWeaponsToLogAndMessage");
		
		UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C_NotifyDecayedWeaponsToLogAndMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InDecayedWeaponDatas != nullptr)
			*InDecayedWeaponDatas = params.InDecayedWeaponDatas;
		if (OutIsMessageShowed != nullptr)
			*OutIsMessageShowed = params.OutIsMessageShowed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos.BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C.Start
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPlayerLevelStartSequenceComponent*        Owner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C::Start(class USBPlayerLevelStartSequenceComponent* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos.BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C.Start");
		
		UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C_Start_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos.BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C.EndTask
	 * 		Flags  -> ()
	 */
	void UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C::EndTask()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos.BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C.EndTask");
		
		UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C_EndTask_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos.BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C.OnGetExpiredEquipmentDataEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBExpiredEquipmentData                     InExpiredEquipmentData                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C::OnGetExpiredEquipmentDataEvent(const struct FSBExpiredEquipmentData& InExpiredEquipmentData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos.BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C.OnGetExpiredEquipmentDataEvent");
		
		UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C_OnGetExpiredEquipmentDataEvent_Params params {};
		params.InExpiredEquipmentData = InExpiredEquipmentData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos.BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C.OnTimeOut
	 * 		Flags  -> ()
	 */
	void UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C::OnTimeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos.BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C.OnTimeOut");
		
		UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C_OnTimeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos.BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C.SetTimeOut
	 * 		Flags  -> ()
	 */
	void UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C::SetTimeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos.BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C.SetTimeOut");
		
		UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C_SetTimeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos.BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C.PreStart
	 * 		Flags  -> ()
	 */
	void UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C::PreStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos.BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C.PreStart");
		
		UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C_PreStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos.BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C::ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos.BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos");
		
		UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos.BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C");
		return ptr;
	}

}


