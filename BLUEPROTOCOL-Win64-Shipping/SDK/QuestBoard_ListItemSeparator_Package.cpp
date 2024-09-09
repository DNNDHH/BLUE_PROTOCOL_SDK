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
	 * 		Name   -> Function QuestBoard_ListItemSeparator.QuestBoard_ListItemSeparator_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestBoard_ListItemSeparator_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestBoard_ListItemSeparator.QuestBoard_ListItemSeparator_C.PreConstruct");
		
		UQuestBoard_ListItemSeparator_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestBoard_ListItemSeparator.QuestBoard_ListItemSeparator_C.ExecuteUbergraph_QuestBoard_ListItemSeparator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestBoard_ListItemSeparator_C::ExecuteUbergraph_QuestBoard_ListItemSeparator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestBoard_ListItemSeparator.QuestBoard_ListItemSeparator_C.ExecuteUbergraph_QuestBoard_ListItemSeparator");
		
		UQuestBoard_ListItemSeparator_C_ExecuteUbergraph_QuestBoard_ListItemSeparator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuestBoard_ListItemSeparator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuestBoard_ListItemSeparator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuestBoard_ListItemSeparator.QuestBoard_ListItemSeparator_C");
		return ptr;
	}

}


