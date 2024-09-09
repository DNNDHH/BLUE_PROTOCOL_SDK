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
	 * 		Name   -> Function StackBEnhanceImagineTypeIcon.StackBEnhanceImagineTypeIcon_C.SetIconColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStackBEnhanceImagineTypeIcon_C::SetIconColor(const struct FLinearColor& NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackBEnhanceImagineTypeIcon.StackBEnhanceImagineTypeIcon_C.SetIconColor");
		
		UStackBEnhanceImagineTypeIcon_C_SetIconColor_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackBEnhanceImagineTypeIcon.StackBEnhanceImagineTypeIcon_C.SetMasterData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterImagine                            SBMasterImagine                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UStackBEnhanceImagineTypeIcon_C::SetMasterData(const struct FSBMasterImagine& SBMasterImagine)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackBEnhanceImagineTypeIcon.StackBEnhanceImagineTypeIcon_C.SetMasterData");
		
		UStackBEnhanceImagineTypeIcon_C_SetMasterData_Params params {};
		params.SBMasterImagine = SBMasterImagine;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStackBEnhanceImagineTypeIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStackBEnhanceImagineTypeIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StackBEnhanceImagineTypeIcon.StackBEnhanceImagineTypeIcon_C");
		return ptr;
	}

}


