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
	 * 		Name   -> Function ChatSortItem.ChatSortItem_C.IsLoadComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatSortItem_C::IsLoadComplete(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatSortItem.ChatSortItem_C.IsLoadComplete");
		
		UChatSortItem_C_IsLoadComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatSortItem.ChatSortItem_C.GetSortType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutSortType                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatSortItem_C::GetSortType(int32_t* OutSortType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatSortItem.ChatSortItem_C.GetSortType");
		
		UChatSortItem_C_GetSortType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSortType != nullptr)
			*OutSortType = params.OutSortType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatSortItem.ChatSortItem_C.UpdateText
	 * 		Flags  -> ()
	 */
	void UChatSortItem_C::UpdateText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatSortItem.ChatSortItem_C.UpdateText");
		
		UChatSortItem_C_UpdateText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatSortItem.ChatSortItem_C.SaveSortData
	 * 		Flags  -> ()
	 */
	void UChatSortItem_C::SaveSortData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatSortItem.ChatSortItem_C.SaveSortData");
		
		UChatSortItem_C_SaveSortData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatSortItem.ChatSortItem_C.LoadSortData
	 * 		Flags  -> ()
	 */
	void UChatSortItem_C::LoadSortData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatSortItem.ChatSortItem_C.LoadSortData");
		
		UChatSortItem_C_LoadSortData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatSortItem.ChatSortItem_C.BndEvt__ChatSortItem_SBButton_C_90_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChatSortItem_C::BndEvt__ChatSortItem_SBButton_C_90_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatSortItem.ChatSortItem_C.BndEvt__ChatSortItem_SBButton_C_90_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UChatSortItem_C_BndEvt__ChatSortItem_SBButton_C_90_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatSortItem.ChatSortItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UChatSortItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatSortItem.ChatSortItem_C.Construct");
		
		UChatSortItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatSortItem.ChatSortItem_C.ExecuteUbergraph_ChatSortItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatSortItem_C::ExecuteUbergraph_ChatSortItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatSortItem.ChatSortItem_C.ExecuteUbergraph_ChatSortItem");
		
		UChatSortItem_C_ExecuteUbergraph_ChatSortItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatSortItem.ChatSortItem_C.OnSortChage__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SortType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatSortItem_C::OnSortChage__DelegateSignature(int32_t SortType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatSortItem.ChatSortItem_C.OnSortChage__DelegateSignature");
		
		UChatSortItem_C_OnSortChage__DelegateSignature_Params params {};
		params.SortType = SortType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChatSortItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChatSortItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ChatSortItem.ChatSortItem_C");
		return ptr;
	}

}


