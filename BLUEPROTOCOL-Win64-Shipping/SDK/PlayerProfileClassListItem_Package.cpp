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
	 * 		Name   -> Function PlayerProfileClassListItem.PlayerProfileClassListItem_C.SetLv
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Lv                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerProfileClassListItem_C::SetLv(int32_t Lv)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfileClassListItem.PlayerProfileClassListItem_C.SetLv");
		
		UPlayerProfileClassListItem_C_SetLv_Params params {};
		params.Lv = Lv;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfileClassListItem.PlayerProfileClassListItem_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerProfileClassListItem_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfileClassListItem.PlayerProfileClassListItem_C.PreConstruct");
		
		UPlayerProfileClassListItem_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerProfileClassListItem.PlayerProfileClassListItem_C.ExecuteUbergraph_PlayerProfileClassListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerProfileClassListItem_C::ExecuteUbergraph_PlayerProfileClassListItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProfileClassListItem.PlayerProfileClassListItem_C.ExecuteUbergraph_PlayerProfileClassListItem");
		
		UPlayerProfileClassListItem_C_ExecuteUbergraph_PlayerProfileClassListItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerProfileClassListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerProfileClassListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerProfileClassListItem.PlayerProfileClassListItem_C");
		return ptr;
	}

}


