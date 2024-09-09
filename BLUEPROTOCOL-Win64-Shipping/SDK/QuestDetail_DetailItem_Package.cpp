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
	 * 		Name   -> Function QuestDetail_DetailItem.QuestDetail_DetailItem_C.SetTextContent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UQuestDetail_DetailItem_C::SetTextContent(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail_DetailItem.QuestDetail_DetailItem_C.SetTextContent");
		
		UQuestDetail_DetailItem_C_SetTextContent_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail_DetailItem.QuestDetail_DetailItem_C.SetTitle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InTitleText                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestDetail_DetailItem_C::SetTitle(int32_t InTitleText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail_DetailItem.QuestDetail_DetailItem_C.SetTitle");
		
		UQuestDetail_DetailItem_C_SetTitle_Params params {};
		params.InTitleText = InTitleText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail_DetailItem.QuestDetail_DetailItem_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestDetail_DetailItem_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail_DetailItem.QuestDetail_DetailItem_C.PreConstruct");
		
		UQuestDetail_DetailItem_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestDetail_DetailItem.QuestDetail_DetailItem_C.ExecuteUbergraph_QuestDetail_DetailItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestDetail_DetailItem_C::ExecuteUbergraph_QuestDetail_DetailItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestDetail_DetailItem.QuestDetail_DetailItem_C.ExecuteUbergraph_QuestDetail_DetailItem");
		
		UQuestDetail_DetailItem_C_ExecuteUbergraph_QuestDetail_DetailItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuestDetail_DetailItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuestDetail_DetailItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuestDetail_DetailItem.QuestDetail_DetailItem_C");
		return ptr;
	}

}


