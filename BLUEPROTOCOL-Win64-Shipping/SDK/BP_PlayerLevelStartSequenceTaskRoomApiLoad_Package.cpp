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
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskRoomApiLoad.BP_PlayerLevelStartSequenceTaskRoomApiLoad_C.Start
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPlayerLevelStartSequenceComponent*        Owner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequenceTaskRoomApiLoad_C::Start(class USBPlayerLevelStartSequenceComponent* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskRoomApiLoad.BP_PlayerLevelStartSequenceTaskRoomApiLoad_C.Start");
		
		UBP_PlayerLevelStartSequenceTaskRoomApiLoad_C_Start_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskRoomApiLoad.BP_PlayerLevelStartSequenceTaskRoomApiLoad_C.OnCompleteRoomList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequenceTaskRoomApiLoad_C::OnCompleteRoomList(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskRoomApiLoad.BP_PlayerLevelStartSequenceTaskRoomApiLoad_C.OnCompleteRoomList");
		
		UBP_PlayerLevelStartSequenceTaskRoomApiLoad_C_OnCompleteRoomList_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskRoomApiLoad.BP_PlayerLevelStartSequenceTaskRoomApiLoad_C.OnCompleteRoomInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequenceTaskRoomApiLoad_C::OnCompleteRoomInfo(int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskRoomApiLoad.BP_PlayerLevelStartSequenceTaskRoomApiLoad_C.OnCompleteRoomInfo");
		
		UBP_PlayerLevelStartSequenceTaskRoomApiLoad_C_OnCompleteRoomInfo_Params params {};
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskRoomApiLoad.BP_PlayerLevelStartSequenceTaskRoomApiLoad_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRoomApiLoad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequenceTaskRoomApiLoad_C::ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRoomApiLoad(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskRoomApiLoad.BP_PlayerLevelStartSequenceTaskRoomApiLoad_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRoomApiLoad");
		
		UBP_PlayerLevelStartSequenceTaskRoomApiLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRoomApiLoad_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PlayerLevelStartSequenceTaskRoomApiLoad_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PlayerLevelStartSequenceTaskRoomApiLoad_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerLevelStartSequenceTaskRoomApiLoad.BP_PlayerLevelStartSequenceTaskRoomApiLoad_C");
		return ptr;
	}

}


