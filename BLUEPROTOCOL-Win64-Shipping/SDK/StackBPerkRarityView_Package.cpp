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
	 * 		Name   -> Function StackBPerkRarityView.StackBPerkRarityView_C.SetRarity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRarity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStackBPerkRarityView_C::SetRarity(int32_t InRarity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackBPerkRarityView.StackBPerkRarityView_C.SetRarity");
		
		UStackBPerkRarityView_C_SetRarity_Params params {};
		params.InRarity = InRarity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackBPerkRarityView.StackBPerkRarityView_C.ExecuteUbergraph_StackBPerkRarityView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStackBPerkRarityView_C::ExecuteUbergraph_StackBPerkRarityView(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackBPerkRarityView.StackBPerkRarityView_C.ExecuteUbergraph_StackBPerkRarityView");
		
		UStackBPerkRarityView_C_ExecuteUbergraph_StackBPerkRarityView_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStackBPerkRarityView_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStackBPerkRarityView_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StackBPerkRarityView.StackBPerkRarityView_C");
		return ptr;
	}

}


