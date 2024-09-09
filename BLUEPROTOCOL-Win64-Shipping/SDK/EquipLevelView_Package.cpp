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
	 * 		Name   -> Function EquipLevelView.EquipLevelView_C.SetOwnItemData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UEquipLevelView_C::SetOwnItemData(const struct FOwnItemInfo& ItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipLevelView.EquipLevelView_C.SetOwnItemData");
		
		UEquipLevelView_C_SetOwnItemData_Params params {};
		params.ItemData = ItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EquipLevelView.EquipLevelView_C.ExecuteUbergraph_EquipLevelView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEquipLevelView_C::ExecuteUbergraph_EquipLevelView(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipLevelView.EquipLevelView_C.ExecuteUbergraph_EquipLevelView");
		
		UEquipLevelView_C_ExecuteUbergraph_EquipLevelView_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEquipLevelView_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEquipLevelView_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EquipLevelView.EquipLevelView_C");
		return ptr;
	}

}


