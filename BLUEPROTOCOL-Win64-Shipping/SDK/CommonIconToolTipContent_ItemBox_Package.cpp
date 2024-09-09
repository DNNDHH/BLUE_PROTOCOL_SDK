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
	 * 		Name   -> Function CommonIconToolTipContent_ItemBox.CommonIconToolTipContent_ItemBox_C.SetItemBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FST_ToolTipInfo                             ST_ToolTipInfo                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UCommonIconToolTipContent_ItemBox_C::SetItemBox(const struct FST_ToolTipInfo& ST_ToolTipInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContent_ItemBox.CommonIconToolTipContent_ItemBox_C.SetItemBox");
		
		UCommonIconToolTipContent_ItemBox_C_SetItemBox_Params params {};
		params.ST_ToolTipInfo = ST_ToolTipInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonIconToolTipContent_ItemBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonIconToolTipContent_ItemBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommonIconToolTipContent_ItemBox.CommonIconToolTipContent_ItemBox_C");
		return ptr;
	}

}


