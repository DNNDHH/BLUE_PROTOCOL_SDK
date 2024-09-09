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
	 * 		Name   -> Function CommonIconToolTipContent_SkillUnleashed.CommonIconToolTipContent_SkillUnleashed_C.SetInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ClassLevel                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Conditions01                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Conditions02                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCommonIconToolTipContent_SkillUnleashed_C::SetInfo(const class FText& ClassLevel, const class FText& Conditions01, const class FText& Conditions02)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonIconToolTipContent_SkillUnleashed.CommonIconToolTipContent_SkillUnleashed_C.SetInfo");
		
		UCommonIconToolTipContent_SkillUnleashed_C_SetInfo_Params params {};
		params.ClassLevel = ClassLevel;
		params.Conditions01 = Conditions01;
		params.Conditions02 = Conditions02;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonIconToolTipContent_SkillUnleashed_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonIconToolTipContent_SkillUnleashed_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommonIconToolTipContent_SkillUnleashed.CommonIconToolTipContent_SkillUnleashed_C");
		return ptr;
	}

}


