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
	 * 		Name   -> Function StepListItem_Quest.StepListItem_Quest_C.OnSetNFTTitle
	 * 		Flags  -> ()
	 */
	void UStepListItem_Quest_C::OnSetNFTTitle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StepListItem_Quest.StepListItem_Quest_C.OnSetNFTTitle");
		
		UStepListItem_Quest_C_OnSetNFTTitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StepListItem_Quest.StepListItem_Quest_C.OnSetInterruptQuestTitle
	 * 		Flags  -> ()
	 */
	void UStepListItem_Quest_C::OnSetInterruptQuestTitle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StepListItem_Quest.StepListItem_Quest_C.OnSetInterruptQuestTitle");
		
		UStepListItem_Quest_C_OnSetInterruptQuestTitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StepListItem_Quest.StepListItem_Quest_C.OnSetQuestTitle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FQuestMasterData                            QuestMasterData                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UStepListItem_Quest_C::OnSetQuestTitle(const struct FQuestMasterData& QuestMasterData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StepListItem_Quest.StepListItem_Quest_C.OnSetQuestTitle");
		
		UStepListItem_Quest_C_OnSetQuestTitle_Params params {};
		params.QuestMasterData = QuestMasterData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StepListItem_Quest.StepListItem_Quest_C.GetTitle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStepListItem_Title_C*                       AsStepListItemTitle                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStepListItem_Quest_C::GetTitle(class UStepListItem_Title_C** AsStepListItemTitle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StepListItem_Quest.StepListItem_Quest_C.GetTitle");
		
		UStepListItem_Quest_C_GetTitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsStepListItemTitle != nullptr)
			*AsStepListItemTitle = params.AsStepListItemTitle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStepListItem_Quest_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStepListItem_Quest_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StepListItem_Quest.StepListItem_Quest_C");
		return ptr;
	}

}


