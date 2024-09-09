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
	 * 		Name   -> Function QuestDetail_DetaiDescriptionlItem.QuestDetail_DetaiDescriptionlItem_C.SetTextContent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UQuestDetail_DetaiDescriptionlItem_C::SetTextContent(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail_DetaiDescriptionlItem.QuestDetail_DetaiDescriptionlItem_C.SetTextContent");
		
		UQuestDetail_DetaiDescriptionlItem_C_SetTextContent_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail_DetaiDescriptionlItem.QuestDetail_DetaiDescriptionlItem_C.SetTitle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InTitleText                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestDetail_DetaiDescriptionlItem_C::SetTitle(int32_t InTitleText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail_DetaiDescriptionlItem.QuestDetail_DetaiDescriptionlItem_C.SetTitle");
		
		UQuestDetail_DetaiDescriptionlItem_C_SetTitle_Params params {};
		params.InTitleText = InTitleText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail_DetaiDescriptionlItem.QuestDetail_DetaiDescriptionlItem_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestDetail_DetaiDescriptionlItem_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail_DetaiDescriptionlItem.QuestDetail_DetaiDescriptionlItem_C.PreConstruct");
		
		UQuestDetail_DetaiDescriptionlItem_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail_DetaiDescriptionlItem.QuestDetail_DetaiDescriptionlItem_C.ExecuteUbergraph_QuestDetail_DetaiDescriptionlItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestDetail_DetaiDescriptionlItem_C::ExecuteUbergraph_QuestDetail_DetaiDescriptionlItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail_DetaiDescriptionlItem.QuestDetail_DetaiDescriptionlItem_C.ExecuteUbergraph_QuestDetail_DetaiDescriptionlItem");
		
		UQuestDetail_DetaiDescriptionlItem_C_ExecuteUbergraph_QuestDetail_DetaiDescriptionlItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuestDetail_DetaiDescriptionlItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuestDetail_DetaiDescriptionlItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuestDetail_DetaiDescriptionlItem.QuestDetail_DetaiDescriptionlItem_C");
		return ptr;
	}

}


