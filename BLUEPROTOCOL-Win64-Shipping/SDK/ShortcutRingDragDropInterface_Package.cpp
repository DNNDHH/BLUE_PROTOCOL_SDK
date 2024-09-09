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
	 * 		Name   -> Function ShortcutRingDragDropInterface.ShortcutRingDragDropInterface_C.GetShortcutItemInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FShortcutItemInfo                           OutShortcutItemInfo                                        (Parm, OutParm)
	 */
	void UShortcutRingDragDropInterface_C::GetShortcutItemInfo(struct FShortcutItemInfo* OutShortcutItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShortcutRingDragDropInterface.ShortcutRingDragDropInterface_C.GetShortcutItemInfo");
		
		UShortcutRingDragDropInterface_C_GetShortcutItemInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutShortcutItemInfo != nullptr)
			*OutShortcutItemInfo = params.OutShortcutItemInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShortcutRingDragDropInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShortcutRingDragDropInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ShortcutRingDragDropInterface.ShortcutRingDragDropInterface_C");
		return ptr;
	}

}


