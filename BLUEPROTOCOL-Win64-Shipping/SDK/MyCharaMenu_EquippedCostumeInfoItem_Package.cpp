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
	 * 		Name   -> Function MyCharaMenu_EquippedCostumeInfoItem.MyCharaMenu_EquippedCostumeInfoItem_C.SetIsGrayOut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsGrayOut                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_EquippedCostumeInfoItem_C::SetIsGrayOut(bool InIsGrayOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EquippedCostumeInfoItem.MyCharaMenu_EquippedCostumeInfoItem_C.SetIsGrayOut");
		
		UMyCharaMenu_EquippedCostumeInfoItem_C_SetIsGrayOut_Params params {};
		params.InIsGrayOut = InIsGrayOut;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_EquippedCostumeInfoItem.MyCharaMenu_EquippedCostumeInfoItem_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMyCharaMenu_EquippedCostumeInfoItem_C::SetText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EquippedCostumeInfoItem.MyCharaMenu_EquippedCostumeInfoItem_C.SetText");
		
		UMyCharaMenu_EquippedCostumeInfoItem_C_SetText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMyCharaMenu_EquippedCostumeInfoItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMyCharaMenu_EquippedCostumeInfoItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MyCharaMenu_EquippedCostumeInfoItem.MyCharaMenu_EquippedCostumeInfoItem_C");
		return ptr;
	}

}


