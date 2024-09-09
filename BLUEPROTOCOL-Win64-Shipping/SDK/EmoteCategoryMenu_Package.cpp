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
	 * 		Name   -> Function EmoteCategoryMenu.EmoteCategoryMenu_C.AddHistoryEmoteIds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AddEmotionId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEmoteCategoryMenu_C::AddHistoryEmoteIds(int32_t AddEmotionId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmoteCategoryMenu.EmoteCategoryMenu_C.AddHistoryEmoteIds");
		
		UEmoteCategoryMenu_C_AddHistoryEmoteIds_Params params {};
		params.AddEmotionId = AddEmotionId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EmoteCategoryMenu.EmoteCategoryMenu_C.SaveEmoteHisoryIdsData
	 * 		Flags  -> ()
	 */
	void UEmoteCategoryMenu_C::SaveEmoteHisoryIdsData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmoteCategoryMenu.EmoteCategoryMenu_C.SaveEmoteHisoryIdsData");
		
		UEmoteCategoryMenu_C_SaveEmoteHisoryIdsData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EmoteCategoryMenu.EmoteCategoryMenu_C.GetEmotionList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSortType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FString>                              OutEmotionList                                             (Parm, OutParm)
	 */
	void UEmoteCategoryMenu_C::GetEmotionList(int32_t InSortType, TArray<class FString>* OutEmotionList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmoteCategoryMenu.EmoteCategoryMenu_C.GetEmotionList");
		
		UEmoteCategoryMenu_C_GetEmotionList_Params params {};
		params.InSortType = InSortType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutEmotionList != nullptr)
			*OutEmotionList = params.OutEmotionList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EmoteCategoryMenu.EmoteCategoryMenu_C.UpdateCategory
	 * 		Flags  -> ()
	 */
	void UEmoteCategoryMenu_C::UpdateCategory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmoteCategoryMenu.EmoteCategoryMenu_C.UpdateCategory");
		
		UEmoteCategoryMenu_C_UpdateCategory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EmoteCategoryMenu.EmoteCategoryMenu_C.UpdateHistoryList
	 * 		Flags  -> ()
	 */
	void UEmoteCategoryMenu_C::UpdateHistoryList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmoteCategoryMenu.EmoteCategoryMenu_C.UpdateHistoryList");
		
		UEmoteCategoryMenu_C_UpdateHistoryList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EmoteCategoryMenu.EmoteCategoryMenu_C.LoadEmoteHistoryIdsData
	 * 		Flags  -> ()
	 */
	void UEmoteCategoryMenu_C::LoadEmoteHistoryIdsData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmoteCategoryMenu.EmoteCategoryMenu_C.LoadEmoteHistoryIdsData");
		
		UEmoteCategoryMenu_C_LoadEmoteHistoryIdsData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EmoteCategoryMenu.EmoteCategoryMenu_C.CreateCategory
	 * 		Flags  -> ()
	 */
	void UEmoteCategoryMenu_C::CreateCategory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmoteCategoryMenu.EmoteCategoryMenu_C.CreateCategory");
		
		UEmoteCategoryMenu_C_CreateCategory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EmoteCategoryMenu.EmoteCategoryMenu_C.OnClickedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEmoteCategoryMenu_C::OnClickedEvent(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmoteCategoryMenu.EmoteCategoryMenu_C.OnClickedEvent");
		
		UEmoteCategoryMenu_C_OnClickedEvent_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EmoteCategoryMenu.EmoteCategoryMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UEmoteCategoryMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmoteCategoryMenu.EmoteCategoryMenu_C.Construct");
		
		UEmoteCategoryMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EmoteCategoryMenu.EmoteCategoryMenu_C.Destruct
	 * 		Flags  -> ()
	 */
	void UEmoteCategoryMenu_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmoteCategoryMenu.EmoteCategoryMenu_C.Destruct");
		
		UEmoteCategoryMenu_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EmoteCategoryMenu.EmoteCategoryMenu_C.ExecuteUbergraph_EmoteCategoryMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEmoteCategoryMenu_C::ExecuteUbergraph_EmoteCategoryMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmoteCategoryMenu.EmoteCategoryMenu_C.ExecuteUbergraph_EmoteCategoryMenu");
		
		UEmoteCategoryMenu_C_ExecuteUbergraph_EmoteCategoryMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EmoteCategoryMenu.EmoteCategoryMenu_C.OnEmoteListUpdate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEmoteCategoryMenu_C::OnEmoteListUpdate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmoteCategoryMenu.EmoteCategoryMenu_C.OnEmoteListUpdate__DelegateSignature");
		
		UEmoteCategoryMenu_C_OnEmoteListUpdate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEmoteCategoryMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEmoteCategoryMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EmoteCategoryMenu.EmoteCategoryMenu_C");
		return ptr;
	}

}


