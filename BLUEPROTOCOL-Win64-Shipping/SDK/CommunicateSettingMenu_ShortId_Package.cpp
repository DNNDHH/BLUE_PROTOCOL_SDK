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
	 * 		Name   -> Function CommunicateSettingMenu_ShortId.CommunicateSettingMenu_ShortId_C.SetShortId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InShortId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCommunicateSettingMenu_ShortId_C::SetShortId(const class FString& InShortId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_ShortId.CommunicateSettingMenu_ShortId_C.SetShortId");
		
		UCommunicateSettingMenu_ShortId_C_SetShortId_Params params {};
		params.InShortId = InShortId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunicateSettingMenu_ShortId.CommunicateSettingMenu_ShortId_C.ErrorDataSet
	 * 		Flags  -> ()
	 */
	void UCommunicateSettingMenu_ShortId_C::ErrorDataSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_ShortId.CommunicateSettingMenu_ShortId_C.ErrorDataSet");
		
		UCommunicateSettingMenu_ShortId_C_ErrorDataSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunicateSettingMenu_ShortId.CommunicateSettingMenu_ShortId_C.ExecuteUbergraph_CommunicateSettingMenu_ShortId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommunicateSettingMenu_ShortId_C::ExecuteUbergraph_CommunicateSettingMenu_ShortId(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_ShortId.CommunicateSettingMenu_ShortId_C.ExecuteUbergraph_CommunicateSettingMenu_ShortId");
		
		UCommunicateSettingMenu_ShortId_C_ExecuteUbergraph_CommunicateSettingMenu_ShortId_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommunicateSettingMenu_ShortId_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommunicateSettingMenu_ShortId_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommunicateSettingMenu_ShortId.CommunicateSettingMenu_ShortId_C");
		return ptr;
	}

}


