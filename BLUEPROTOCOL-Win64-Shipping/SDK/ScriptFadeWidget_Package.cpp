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
	 * 		Name   -> Function ScriptFadeWidget.ScriptFadeWidget_C.Update_Internal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScriptFadeWidget_C::Update_Internal(float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptFadeWidget.ScriptFadeWidget_C.Update_Internal");
		
		UScriptFadeWidget_C_Update_Internal_Params params {};
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScriptFadeWidget.ScriptFadeWidget_C.FadeOut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InFadeTime                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                InFadeColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InMaxAlpha                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScriptFadeWidget_C::FadeOut(float InFadeTime, const struct FLinearColor& InFadeColor, float InMaxAlpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptFadeWidget.ScriptFadeWidget_C.FadeOut");
		
		UScriptFadeWidget_C_FadeOut_Params params {};
		params.InFadeTime = InFadeTime;
		params.InFadeColor = InFadeColor;
		params.InMaxAlpha = InMaxAlpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScriptFadeWidget.ScriptFadeWidget_C.FadeIn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InFadeTime                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UScriptFadeWidget_C::FadeIn(float InFadeTime, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptFadeWidget.ScriptFadeWidget_C.FadeIn");
		
		UScriptFadeWidget_C_FadeIn_Params params {};
		params.InFadeTime = InFadeTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScriptFadeWidget.ScriptFadeWidget_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScriptFadeWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptFadeWidget.ScriptFadeWidget_C.Tick");
		
		UScriptFadeWidget_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScriptFadeWidget.ScriptFadeWidget_C.ExecuteUbergraph_ScriptFadeWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScriptFadeWidget_C::ExecuteUbergraph_ScriptFadeWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptFadeWidget.ScriptFadeWidget_C.ExecuteUbergraph_ScriptFadeWidget");
		
		UScriptFadeWidget_C_ExecuteUbergraph_ScriptFadeWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ScriptFadeWidget.ScriptFadeWidget_C.OnFadeEnd__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UScriptFadeWidget_C::OnFadeEnd__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScriptFadeWidget.ScriptFadeWidget_C.OnFadeEnd__DelegateSignature");
		
		UScriptFadeWidget_C_OnFadeEnd__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScriptFadeWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScriptFadeWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ScriptFadeWidget.ScriptFadeWidget_C");
		return ptr;
	}

}


