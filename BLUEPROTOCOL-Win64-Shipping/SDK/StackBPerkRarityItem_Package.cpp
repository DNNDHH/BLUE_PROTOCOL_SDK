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
	 * 		Name   -> Function StackBPerkRarityItem.StackBPerkRarityItem_C.Show Empty
	 * 		Flags  -> ()
	 */
	void UStackBPerkRarityItem_C::ShowEmpty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackBPerkRarityItem.StackBPerkRarityItem_C.Show Empty");
		
		UStackBPerkRarityItem_C_ShowEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackBPerkRarityItem.StackBPerkRarityItem_C.Show Filled
	 * 		Flags  -> ()
	 */
	void UStackBPerkRarityItem_C::ShowFilled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackBPerkRarityItem.StackBPerkRarityItem_C.Show Filled");
		
		UStackBPerkRarityItem_C_ShowFilled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackBPerkRarityItem.StackBPerkRarityItem_C.ExecuteUbergraph_StackBPerkRarityItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStackBPerkRarityItem_C::ExecuteUbergraph_StackBPerkRarityItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackBPerkRarityItem.StackBPerkRarityItem_C.ExecuteUbergraph_StackBPerkRarityItem");
		
		UStackBPerkRarityItem_C_ExecuteUbergraph_StackBPerkRarityItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStackBPerkRarityItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStackBPerkRarityItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StackBPerkRarityItem.StackBPerkRarityItem_C");
		return ptr;
	}

}


