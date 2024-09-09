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
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest.BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C.Make Quest Name Array
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    QuestList                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class FText>                                QuestNames                                                 (Parm, OutParm)
	 */
	void UBP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C::MakeQuestNameArray(TArray<int32_t>* QuestList, TArray<class FText>* QuestNames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest.BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C.Make Quest Name Array");
		
		UBP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_MakeQuestNameArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (QuestList != nullptr)
			*QuestList = params.QuestList;
		if (QuestNames != nullptr)
			*QuestNames = params.QuestNames;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest.BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C.Start
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPlayerLevelStartSequenceComponent*        Owner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C::Start(class USBPlayerLevelStartSequenceComponent* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest.BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C.Start");
		
		UBP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Start_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest.BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C::ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest.BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest");
		
		UBP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest.BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C");
		return ptr;
	}

}


