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
	 * 		Name   -> Function QuestIcon.QuestIcon_C.SetIconByQuestIndex_ForInteractableEventPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            QuestIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bQuestionMark                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuestIcon_C::SetIconByQuestIndex_ForInteractableEventPoint(int32_t QuestIndex, bool bQuestionMark)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestIcon.QuestIcon_C.SetIconByQuestIndex_ForInteractableEventPoint");
		
		UQuestIcon_C_SetIconByQuestIndex_ForInteractableEventPoint_Params params {};
		params.QuestIndex = QuestIndex;
		params.bQuestionMark = bQuestionMark;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestIcon.QuestIcon_C.SetQuestIconQuestion
	 * 		Flags  -> ()
	 */
	void UQuestIcon_C::SetQuestIconQuestion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestIcon.QuestIcon_C.SetQuestIconQuestion");
		
		UQuestIcon_C_SetQuestIconQuestion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestIcon.QuestIcon_C.SetQuestIconClosed
	 * 		Flags  -> ()
	 */
	void UQuestIcon_C::SetQuestIconClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestIcon.QuestIcon_C.SetQuestIconClosed");
		
		UQuestIcon_C_SetQuestIconClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestIcon.QuestIcon_C.SetQuestIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            QuestID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestIcon_C::SetQuestIcon(int32_t QuestID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestIcon.QuestIcon_C.SetQuestIcon");
		
		UQuestIcon_C_SetQuestIcon_Params params {};
		params.QuestID = QuestID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestIcon.QuestIcon_C.SetIconTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<EQuestStatus, class UTexture2D*>              TextureList                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		EQuestStatus                                       Status                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestIcon_C::SetIconTexture(TMap<EQuestStatus, class UTexture2D*> TextureList, EQuestStatus Status)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestIcon.QuestIcon_C.SetIconTexture");
		
		UQuestIcon_C_SetIconTexture_Params params {};
		params.TextureList = TextureList;
		params.Status = Status;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestIcon.QuestIcon_C.SetIconZOrder
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<EQuestStatus, ESBMiniMapIconType>             IconTypeList                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		EQuestStatus                                       Status                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuestIcon_C::SetIconZOrder(TMap<EQuestStatus, ESBMiniMapIconType> IconTypeList, EQuestStatus Status)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestIcon.QuestIcon_C.SetIconZOrder");
		
		UQuestIcon_C_SetIconZOrder_Params params {};
		params.IconTypeList = IconTypeList;
		params.Status = Status;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuestIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuestIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuestIcon.QuestIcon_C");
		return ptr;
	}

}


