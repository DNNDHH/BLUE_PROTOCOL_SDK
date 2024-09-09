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
	 * 		Name   -> Function KeyGuide_Gamepad.KeyGuide_Gamepad_C.InitializeVisibility
	 * 		Flags  -> ()
	 */
	void UKeyGuide_Gamepad_C::InitializeVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide_Gamepad.KeyGuide_Gamepad_C.InitializeVisibility");
		
		UKeyGuide_Gamepad_C_InitializeVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuide_Gamepad.KeyGuide_Gamepad_C.SetTextVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESkillActionPosition                               SkillActionPosition                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeyGuide_Gamepad_C::SetTextVisible(ESkillActionPosition SkillActionPosition, bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide_Gamepad.KeyGuide_Gamepad_C.SetTextVisible");
		
		UKeyGuide_Gamepad_C_SetTextVisible_Params params {};
		params.SkillActionPosition = SkillActionPosition;
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuide_Gamepad.KeyGuide_Gamepad_C.MakePare
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<class USBRuntimeTextBlock*, ESBKeyConfigAction> Pair1                                                      (Parm, OutParm, ContainsInstancedReference)
	 */
	void UKeyGuide_Gamepad_C::MakePare(TMap<class USBRuntimeTextBlock*, ESBKeyConfigAction>* Pair1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide_Gamepad.KeyGuide_Gamepad_C.MakePare");
		
		UKeyGuide_Gamepad_C_MakePare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Pair1 != nullptr)
			*Pair1 = params.Pair1;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuide_Gamepad.KeyGuide_Gamepad_C.ApplyKeyConfigData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBPlayerClassKeyConfigData                 KeyConfigData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UKeyGuide_Gamepad_C::ApplyKeyConfigData(const struct FSBPlayerClassKeyConfigData& KeyConfigData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide_Gamepad.KeyGuide_Gamepad_C.ApplyKeyConfigData");
		
		UKeyGuide_Gamepad_C_ApplyKeyConfigData_Params params {};
		params.KeyConfigData = KeyConfigData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyGuide_Gamepad.KeyGuide_Gamepad_C.ExecuteUbergraph_KeyGuide_Gamepad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyGuide_Gamepad_C::ExecuteUbergraph_KeyGuide_Gamepad(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyGuide_Gamepad.KeyGuide_Gamepad_C.ExecuteUbergraph_KeyGuide_Gamepad");
		
		UKeyGuide_Gamepad_C_ExecuteUbergraph_KeyGuide_Gamepad_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKeyGuide_Gamepad_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKeyGuide_Gamepad_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass KeyGuide_Gamepad.KeyGuide_Gamepad_C");
		return ptr;
	}

}


