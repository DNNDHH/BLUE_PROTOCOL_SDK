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
	 * 		Name   -> Function CmnOrnamentTypeParts.CmnOrnamentTypeParts_C.SetBodyText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCmnOrnamentTypeParts_C::SetBodyText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnOrnamentTypeParts.CmnOrnamentTypeParts_C.SetBodyText");
		
		UCmnOrnamentTypeParts_C_SetBodyText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnOrnamentTypeParts.CmnOrnamentTypeParts_C.SetTitleTextWidth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InWidth                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCmnOrnamentTypeParts_C::SetTitleTextWidth(float InWidth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnOrnamentTypeParts.CmnOrnamentTypeParts_C.SetTitleTextWidth");
		
		UCmnOrnamentTypeParts_C_SetTitleTextWidth_Params params {};
		params.InWidth = InWidth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnOrnamentTypeParts.CmnOrnamentTypeParts_C.SetPaddingLeft
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InPaddingLeft                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCmnOrnamentTypeParts_C::SetPaddingLeft(float InPaddingLeft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnOrnamentTypeParts.CmnOrnamentTypeParts_C.SetPaddingLeft");
		
		UCmnOrnamentTypeParts_C_SetPaddingLeft_Params params {};
		params.InPaddingLeft = InPaddingLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnOrnamentTypeParts.CmnOrnamentTypeParts_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCmnOrnamentTypeParts_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnOrnamentTypeParts.CmnOrnamentTypeParts_C.PreConstruct");
		
		UCmnOrnamentTypeParts_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CmnOrnamentTypeParts.CmnOrnamentTypeParts_C.ExecuteUbergraph_CmnOrnamentTypeParts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCmnOrnamentTypeParts_C::ExecuteUbergraph_CmnOrnamentTypeParts(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CmnOrnamentTypeParts.CmnOrnamentTypeParts_C.ExecuteUbergraph_CmnOrnamentTypeParts");
		
		UCmnOrnamentTypeParts_C_ExecuteUbergraph_CmnOrnamentTypeParts_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCmnOrnamentTypeParts_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCmnOrnamentTypeParts_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CmnOrnamentTypeParts.CmnOrnamentTypeParts_C");
		return ptr;
	}

}


