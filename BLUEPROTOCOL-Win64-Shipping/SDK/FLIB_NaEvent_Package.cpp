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
	 * 		Name   -> Function FLIB_NaEvent.FLIB_NaEvent_C.GetNaEventButtonText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InTextId                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      KeyboardKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESBKeyConfigGamepadKey                             GamepadKey                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FText UFLIB_NaEvent_C::GetNaEventButtonText(const class FName& InTextId, const class FString& KeyboardKey, ESBKeyConfigGamepadKey GamepadKey, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_NaEvent.FLIB_NaEvent_C.GetNaEventButtonText");
		
		UFLIB_NaEvent_C_GetNaEventButtonText_Params params {};
		params.InTextId = InTextId;
		params.KeyboardKey = KeyboardKey;
		params.GamepadKey = GamepadKey;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FLIB_NaEvent.FLIB_NaEvent_C.GetShortcutKeyText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyboardKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESBKeyConfigGamepadKey                             GamepadKey                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FString UFLIB_NaEvent_C::GetShortcutKeyText(const class FString& KeyboardKey, ESBKeyConfigGamepadKey GamepadKey, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FLIB_NaEvent.FLIB_NaEvent_C.GetShortcutKeyText");
		
		UFLIB_NaEvent_C_GetShortcutKeyText_Params params {};
		params.KeyboardKey = KeyboardKey;
		params.GamepadKey = GamepadKey;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFLIB_NaEvent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFLIB_NaEvent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FLIB_NaEvent.FLIB_NaEvent_C");
		return ptr;
	}

}


