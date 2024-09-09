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
	 * 		Name   -> Function CommunicateSettingMenu_FaceBg.CommunicateSettingMenu_FaceBg_C.Construct
	 * 		Flags  -> ()
	 */
	void UCommunicateSettingMenu_FaceBg_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_FaceBg.CommunicateSettingMenu_FaceBg_C.Construct");
		
		UCommunicateSettingMenu_FaceBg_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunicateSettingMenu_FaceBg.CommunicateSettingMenu_FaceBg_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InScale                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   InPosition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      URL                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCommunicateSettingMenu_FaceBg_C::SetData(float InScale, const struct FVector2D& InPosition, const class FString& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_FaceBg.CommunicateSettingMenu_FaceBg_C.SetData");
		
		UCommunicateSettingMenu_FaceBg_C_SetData_Params params {};
		params.InScale = InScale;
		params.InPosition = InPosition;
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunicateSettingMenu_FaceBg.CommunicateSettingMenu_FaceBg_C.ResetData
	 * 		Flags  -> ()
	 */
	void UCommunicateSettingMenu_FaceBg_C::ResetData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_FaceBg.CommunicateSettingMenu_FaceBg_C.ResetData");
		
		UCommunicateSettingMenu_FaceBg_C_ResetData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommunicateSettingMenu_FaceBg.CommunicateSettingMenu_FaceBg_C.ExecuteUbergraph_CommunicateSettingMenu_FaceBg
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommunicateSettingMenu_FaceBg_C::ExecuteUbergraph_CommunicateSettingMenu_FaceBg(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommunicateSettingMenu_FaceBg.CommunicateSettingMenu_FaceBg_C.ExecuteUbergraph_CommunicateSettingMenu_FaceBg");
		
		UCommunicateSettingMenu_FaceBg_C_ExecuteUbergraph_CommunicateSettingMenu_FaceBg_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommunicateSettingMenu_FaceBg_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommunicateSettingMenu_FaceBg_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommunicateSettingMenu_FaceBg.CommunicateSettingMenu_FaceBg_C");
		return ptr;
	}

}


