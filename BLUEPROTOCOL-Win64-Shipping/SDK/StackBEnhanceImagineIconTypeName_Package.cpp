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
	 * 		Name   -> Function StackBEnhanceImagineIconTypeName.StackBEnhanceImagineIconTypeName_C.SetFontColorSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                ImgColor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateColor                                 TxtColor                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FLinearColor                                IconColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FontSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStackBEnhanceImagineIconTypeName_C::SetFontColorSize(const struct FLinearColor& ImgColor, const struct FSlateColor& TxtColor, const struct FLinearColor& IconColor, float FontSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackBEnhanceImagineIconTypeName.StackBEnhanceImagineIconTypeName_C.SetFontColorSize");
		
		UStackBEnhanceImagineIconTypeName_C_SetFontColorSize_Params params {};
		params.ImgColor = ImgColor;
		params.TxtColor = TxtColor;
		params.IconColor = IconColor;
		params.FontSize = FontSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackBEnhanceImagineIconTypeName.StackBEnhanceImagineIconTypeName_C.SetMasterData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterImagine                            SBMasterImagine                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UStackBEnhanceImagineIconTypeName_C::SetMasterData(const struct FSBMasterImagine& SBMasterImagine)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackBEnhanceImagineIconTypeName.StackBEnhanceImagineIconTypeName_C.SetMasterData");
		
		UStackBEnhanceImagineIconTypeName_C_SetMasterData_Params params {};
		params.SBMasterImagine = SBMasterImagine;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackBEnhanceImagineIconTypeName.StackBEnhanceImagineIconTypeName_C.Construct
	 * 		Flags  -> ()
	 */
	void UStackBEnhanceImagineIconTypeName_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackBEnhanceImagineIconTypeName.StackBEnhanceImagineIconTypeName_C.Construct");
		
		UStackBEnhanceImagineIconTypeName_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackBEnhanceImagineIconTypeName.StackBEnhanceImagineIconTypeName_C.ExecuteUbergraph_StackBEnhanceImagineIconTypeName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStackBEnhanceImagineIconTypeName_C::ExecuteUbergraph_StackBEnhanceImagineIconTypeName(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackBEnhanceImagineIconTypeName.StackBEnhanceImagineIconTypeName_C.ExecuteUbergraph_StackBEnhanceImagineIconTypeName");
		
		UStackBEnhanceImagineIconTypeName_C_ExecuteUbergraph_StackBEnhanceImagineIconTypeName_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStackBEnhanceImagineIconTypeName_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStackBEnhanceImagineIconTypeName_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StackBEnhanceImagineIconTypeName.StackBEnhanceImagineIconTypeName_C");
		return ptr;
	}

}


