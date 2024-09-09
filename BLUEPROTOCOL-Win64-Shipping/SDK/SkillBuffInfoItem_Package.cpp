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
	 * 		Name   -> Function SkillBuffInfoItem.SkillBuffInfoItem_C.SetOverlineVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillBuffInfoItem_C::SetOverlineVisibility(bool InIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillBuffInfoItem.SkillBuffInfoItem_C.SetOverlineVisibility");
		
		USkillBuffInfoItem_C_SetOverlineVisibility_Params params {};
		params.InIsVisible = InIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillBuffInfoItem.SkillBuffInfoItem_C.SetSkillBuff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBuffIconAssetData                          InSkillBuffData                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillBuffInfoItem_C::SetSkillBuff(const struct FBuffIconAssetData& InSkillBuffData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillBuffInfoItem.SkillBuffInfoItem_C.SetSkillBuff");
		
		USkillBuffInfoItem_C_SetSkillBuff_Params params {};
		params.InSkillBuffData = InSkillBuffData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkillBuffInfoItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkillBuffInfoItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillBuffInfoItem.SkillBuffInfoItem_C");
		return ptr;
	}

}


