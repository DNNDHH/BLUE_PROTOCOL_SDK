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
	 * 		Name   -> Function InheritButtonViewPerkListItem.InheritButtonViewPerkListItem_C.SetDiffView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInheritButtonViewPerkListItem_C::SetDiffView(bool bShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InheritButtonViewPerkListItem.InheritButtonViewPerkListItem_C.SetDiffView");
		
		UInheritButtonViewPerkListItem_C_SetDiffView_Params params {};
		params.bShow = bShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InheritButtonViewPerkListItem.InheritButtonViewPerkListItem_C.SetEmpty
	 * 		Flags  -> ()
	 */
	void UInheritButtonViewPerkListItem_C::SetEmpty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InheritButtonViewPerkListItem.InheritButtonViewPerkListItem_C.SetEmpty");
		
		UInheritButtonViewPerkListItem_C_SetEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InheritButtonViewPerkListItem.InheritButtonViewPerkListItem_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBStackBPerk                               SlotData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UInheritButtonViewPerkListItem_C::SetData(const struct FSBStackBPerk& SlotData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InheritButtonViewPerkListItem.InheritButtonViewPerkListItem_C.SetData");
		
		UInheritButtonViewPerkListItem_C_SetData_Params params {};
		params.SlotData = SlotData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InheritButtonViewPerkListItem.InheritButtonViewPerkListItem_C.Initialize
	 * 		Flags  -> ()
	 */
	void UInheritButtonViewPerkListItem_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InheritButtonViewPerkListItem.InheritButtonViewPerkListItem_C.Initialize");
		
		UInheritButtonViewPerkListItem_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InheritButtonViewPerkListItem.InheritButtonViewPerkListItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UInheritButtonViewPerkListItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InheritButtonViewPerkListItem.InheritButtonViewPerkListItem_C.Construct");
		
		UInheritButtonViewPerkListItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InheritButtonViewPerkListItem.InheritButtonViewPerkListItem_C.ExecuteUbergraph_InheritButtonViewPerkListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInheritButtonViewPerkListItem_C::ExecuteUbergraph_InheritButtonViewPerkListItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InheritButtonViewPerkListItem.InheritButtonViewPerkListItem_C.ExecuteUbergraph_InheritButtonViewPerkListItem");
		
		UInheritButtonViewPerkListItem_C_ExecuteUbergraph_InheritButtonViewPerkListItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInheritButtonViewPerkListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInheritButtonViewPerkListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InheritButtonViewPerkListItem.InheritButtonViewPerkListItem_C");
		return ptr;
	}

}


