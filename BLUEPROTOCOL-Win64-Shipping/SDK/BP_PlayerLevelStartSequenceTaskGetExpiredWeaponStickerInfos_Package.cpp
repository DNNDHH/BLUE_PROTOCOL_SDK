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
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos.BP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C.Start
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPlayerLevelStartSequenceComponent*        Owner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C::Start(class USBPlayerLevelStartSequenceComponent* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos.BP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C.Start");
		
		UBP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C_Start_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos.BP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C.EndTask
	 * 		Flags  -> ()
	 */
	void UBP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C::EndTask()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos.BP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C.EndTask");
		
		UBP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C_EndTask_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos.BP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C.EndSystemMessage
	 * 		Flags  -> ()
	 */
	void UBP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C::EndSystemMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos.BP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C.EndSystemMessage");
		
		UBP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C_EndSystemMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos.BP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C::ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos.BP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos");
		
		UBP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos.BP_PlayerLevelStartSequenceTaskGetExpiredWeaponStickerInfos_C");
		return ptr;
	}

}


