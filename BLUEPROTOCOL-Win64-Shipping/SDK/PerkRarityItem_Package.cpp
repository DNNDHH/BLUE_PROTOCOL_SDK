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
	 * 		Name   -> Function PerkRarityItem.PerkRarityItem_C.IsShowFilled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPerkRarityItem_C::IsShowFilled(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerkRarityItem.PerkRarityItem_C.IsShowFilled");
		
		UPerkRarityItem_C_IsShowFilled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PerkRarityItem.PerkRarityItem_C.IsShowEmpty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPerkRarityItem_C::IsShowEmpty(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerkRarityItem.PerkRarityItem_C.IsShowEmpty");
		
		UPerkRarityItem_C_IsShowEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PerkRarityItem.PerkRarityItem_C.Show Question
	 * 		Flags  -> ()
	 */
	void UPerkRarityItem_C::ShowQuestion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerkRarityItem.PerkRarityItem_C.Show Question");
		
		UPerkRarityItem_C_ShowQuestion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PerkRarityItem.PerkRarityItem_C.Show Filled
	 * 		Flags  -> ()
	 */
	void UPerkRarityItem_C::ShowFilled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerkRarityItem.PerkRarityItem_C.Show Filled");
		
		UPerkRarityItem_C_ShowFilled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PerkRarityItem.PerkRarityItem_C.Show Empty
	 * 		Flags  -> ()
	 */
	void UPerkRarityItem_C::ShowEmpty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PerkRarityItem.PerkRarityItem_C.Show Empty");
		
		UPerkRarityItem_C_ShowEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPerkRarityItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPerkRarityItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PerkRarityItem.PerkRarityItem_C");
		return ptr;
	}

}


