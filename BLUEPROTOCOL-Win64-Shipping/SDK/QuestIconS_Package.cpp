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
	 * 		Name   -> Function QuestIconS.QuestIconS_C.SetWishListIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EQuestStatus                                       InQuestStatus                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestIconS_C::SetWishListIcon(EQuestStatus InQuestStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestIconS.QuestIconS_C.SetWishListIcon");
		
		UQuestIconS_C_SetWishListIcon_Params params {};
		params.InQuestStatus = InQuestStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestIconS.QuestIconS_C.GetNextMainQuestIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CurrentQuestIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NextMainQuest                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestIconS_C::GetNextMainQuestIndex(int32_t CurrentQuestIndex, int32_t* NextMainQuest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestIconS.QuestIconS_C.GetNextMainQuestIndex");
		
		UQuestIconS_C_GetNextMainQuestIndex_Params params {};
		params.CurrentQuestIndex = CurrentQuestIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NextMainQuest != nullptr)
			*NextMainQuest = params.NextMainQuest;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestIconS.QuestIconS_C.GetQuestStatusForSetIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InQuestIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EQuestStatus                                       OutQuestStatus                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EQuestCategory2                                    OutCategory2                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutIsAllowProceed                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestIconS_C::GetQuestStatusForSetIcon(int32_t InQuestIndex, EQuestStatus* OutQuestStatus, EQuestCategory2* OutCategory2, bool* OutIsAllowProceed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestIconS.QuestIconS_C.GetQuestStatusForSetIcon");
		
		UQuestIconS_C_GetQuestStatusForSetIcon_Params params {};
		params.InQuestIndex = InQuestIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutQuestStatus != nullptr)
			*OutQuestStatus = params.OutQuestStatus;
		if (OutCategory2 != nullptr)
			*OutCategory2 = params.OutCategory2;
		if (OutIsAllowProceed != nullptr)
			*OutIsAllowProceed = params.OutIsAllowProceed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestIconS.QuestIconS_C.SetIconForQuestHistory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InQuestIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestIconS_C::SetIconForQuestHistory(int32_t InQuestIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestIconS.QuestIconS_C.SetIconForQuestHistory");
		
		UQuestIconS_C_SetIconForQuestHistory_Params params {};
		params.InQuestIndex = InQuestIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestIconS.QuestIconS_C.SetIconForStepList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InQuestIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestIconS_C::SetIconForStepList(int32_t InQuestIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestIconS.QuestIconS_C.SetIconForStepList");
		
		UQuestIconS_C_SetIconForStepList_Params params {};
		params.InQuestIndex = InQuestIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestIconS.QuestIconS_C.Set Icon by Quest Index
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InQuestIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestIconS_C::SetIconbyQuestIndex(int32_t InQuestIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestIconS.QuestIconS_C.Set Icon by Quest Index");
		
		UQuestIconS_C_SetIconbyQuestIndex_Params params {};
		params.InQuestIndex = InQuestIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestIconS.QuestIconS_C.SetIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EQuestStatus                                       InQuestStatus                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EQuestCategory2                                    InQuestCategory2                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInAllowProceed                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestIconS_C::SetIcon(EQuestStatus InQuestStatus, EQuestCategory2 InQuestCategory2, bool bInAllowProceed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestIconS.QuestIconS_C.SetIcon");
		
		UQuestIconS_C_SetIcon_Params params {};
		params.InQuestStatus = InQuestStatus;
		params.InQuestCategory2 = InQuestCategory2;
		params.bInAllowProceed = bInAllowProceed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuestIconS_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuestIconS_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuestIconS.QuestIconS_C");
		return ptr;
	}

}


