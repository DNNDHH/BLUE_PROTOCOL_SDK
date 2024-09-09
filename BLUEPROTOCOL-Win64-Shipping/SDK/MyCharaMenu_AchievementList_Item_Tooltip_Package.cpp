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
	 * 		Name   -> Function MyCharaMenu_AchievementList_Item_Tooltip.MyCharaMenu_AchievementList_Item_Tooltip_C.GetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        OutText                                                    (Parm, OutParm)
	 */
	void UMyCharaMenu_AchievementList_Item_Tooltip_C::GetText(class FText* OutText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_AchievementList_Item_Tooltip.MyCharaMenu_AchievementList_Item_Tooltip_C.GetText");
		
		UMyCharaMenu_AchievementList_Item_Tooltip_C_GetText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutText != nullptr)
			*OutText = params.OutText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_AchievementList_Item_Tooltip.MyCharaMenu_AchievementList_Item_Tooltip_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMyCharaMenu_AchievementList_Item_Tooltip_C::SetText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_AchievementList_Item_Tooltip.MyCharaMenu_AchievementList_Item_Tooltip_C.SetText");
		
		UMyCharaMenu_AchievementList_Item_Tooltip_C_SetText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMyCharaMenu_AchievementList_Item_Tooltip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMyCharaMenu_AchievementList_Item_Tooltip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MyCharaMenu_AchievementList_Item_Tooltip.MyCharaMenu_AchievementList_Item_Tooltip_C");
		return ptr;
	}

}


