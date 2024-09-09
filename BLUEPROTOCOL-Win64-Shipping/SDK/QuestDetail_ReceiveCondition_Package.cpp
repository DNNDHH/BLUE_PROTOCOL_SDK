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
	 * 		Name   -> Function QuestDetail_ReceiveCondition.QuestDetail_ReceiveCondition_C.SetConditionForNextMainQuest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBQuestPreconditionUIInfo                  InInfo                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UQuestDetail_ReceiveCondition_C::SetConditionForNextMainQuest(const struct FSBQuestPreconditionUIInfo& InInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail_ReceiveCondition.QuestDetail_ReceiveCondition_C.SetConditionForNextMainQuest");
		
		UQuestDetail_ReceiveCondition_C_SetConditionForNextMainQuest_Params params {};
		params.InInfo = InInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail_ReceiveCondition.QuestDetail_ReceiveCondition_C.SelectCautionText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsProceeding                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestDetail_ReceiveCondition_C::SelectCautionText(bool IsProceeding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail_ReceiveCondition.QuestDetail_ReceiveCondition_C.SelectCautionText");
		
		UQuestDetail_ReceiveCondition_C_SelectCautionText_Params params {};
		params.IsProceeding = IsProceeding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail_ReceiveCondition.QuestDetail_ReceiveCondition_C.SetCondition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSBQuestPreconditionUIInfo>          InConditions                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UQuestDetail_ReceiveCondition_C::SetCondition(TArray<struct FSBQuestPreconditionUIInfo>* InConditions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail_ReceiveCondition.QuestDetail_ReceiveCondition_C.SetCondition");
		
		UQuestDetail_ReceiveCondition_C_SetCondition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InConditions != nullptr)
			*InConditions = params.InConditions;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail_ReceiveCondition.QuestDetail_ReceiveCondition_C.Construct
	 * 		Flags  -> ()
	 */
	void UQuestDetail_ReceiveCondition_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail_ReceiveCondition.QuestDetail_ReceiveCondition_C.Construct");
		
		UQuestDetail_ReceiveCondition_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail_ReceiveCondition.QuestDetail_ReceiveCondition_C.ExecuteUbergraph_QuestDetail_ReceiveCondition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestDetail_ReceiveCondition_C::ExecuteUbergraph_QuestDetail_ReceiveCondition(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail_ReceiveCondition.QuestDetail_ReceiveCondition_C.ExecuteUbergraph_QuestDetail_ReceiveCondition");
		
		UQuestDetail_ReceiveCondition_C_ExecuteUbergraph_QuestDetail_ReceiveCondition_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuestDetail_ReceiveCondition_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuestDetail_ReceiveCondition_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuestDetail_ReceiveCondition.QuestDetail_ReceiveCondition_C");
		return ptr;
	}

}


