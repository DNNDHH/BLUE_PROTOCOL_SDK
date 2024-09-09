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
	 * 		Name   -> Function ImagineCraftRecepiPerkItem.ImagineCraftRecepiPerkItem_C.SetPerkValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UImagineCraftRecepiPerkItem_C::SetPerkValue(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraftRecepiPerkItem.ImagineCraftRecepiPerkItem_C.SetPerkValue");
		
		UImagineCraftRecepiPerkItem_C_SetPerkValue_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraftRecepiPerkItem.ImagineCraftRecepiPerkItem_C.GetAbilityDescToolTipWidget
	 * 		Flags  -> ()
	 */
	class UWidget* UImagineCraftRecepiPerkItem_C::GetAbilityDescToolTipWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraftRecepiPerkItem.ImagineCraftRecepiPerkItem_C.GetAbilityDescToolTipWidget");
		
		UImagineCraftRecepiPerkItem_C_GetAbilityDescToolTipWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraftRecepiPerkItem.ImagineCraftRecepiPerkItem_C.SetPerkID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PerkId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UImagineCraftRecepiPerkItem_C::SetPerkID(int32_t PerkId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraftRecepiPerkItem.ImagineCraftRecepiPerkItem_C.SetPerkID");
		
		UImagineCraftRecepiPerkItem_C_SetPerkID_Params params {};
		params.PerkId = PerkId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraftRecepiPerkItem.ImagineCraftRecepiPerkItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UImagineCraftRecepiPerkItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraftRecepiPerkItem.ImagineCraftRecepiPerkItem_C.Construct");
		
		UImagineCraftRecepiPerkItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraftRecepiPerkItem.ImagineCraftRecepiPerkItem_C.Set Text
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UImagineCraftRecepiPerkItem_C::SetText(const class FString& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraftRecepiPerkItem.ImagineCraftRecepiPerkItem_C.Set Text");
		
		UImagineCraftRecepiPerkItem_C_SetText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraftRecepiPerkItem.ImagineCraftRecepiPerkItem_C.Set Rare
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isRare                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UImagineCraftRecepiPerkItem_C::SetRare(bool isRare)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraftRecepiPerkItem.ImagineCraftRecepiPerkItem_C.Set Rare");
		
		UImagineCraftRecepiPerkItem_C_SetRare_Params params {};
		params.isRare = isRare;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineCraftRecepiPerkItem.ImagineCraftRecepiPerkItem_C.ExecuteUbergraph_ImagineCraftRecepiPerkItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UImagineCraftRecepiPerkItem_C::ExecuteUbergraph_ImagineCraftRecepiPerkItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineCraftRecepiPerkItem.ImagineCraftRecepiPerkItem_C.ExecuteUbergraph_ImagineCraftRecepiPerkItem");
		
		UImagineCraftRecepiPerkItem_C_ExecuteUbergraph_ImagineCraftRecepiPerkItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UImagineCraftRecepiPerkItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImagineCraftRecepiPerkItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ImagineCraftRecepiPerkItem.ImagineCraftRecepiPerkItem_C");
		return ptr;
	}

}


