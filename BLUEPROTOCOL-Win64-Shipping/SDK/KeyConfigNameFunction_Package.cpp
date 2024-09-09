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
	 * 		Name   -> Function KeyConfigNameFunction.KeyConfigNameFunction_C.IsUnassignableMouseKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EConfig_KeyconfigItems                             ConfigType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBKeyConfigMouseKey                               MouseKey                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsUnassighnableKey                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeyConfigNameFunction_C::IsUnassignableMouseKey(EConfig_KeyconfigItems ConfigType, ESBKeyConfigMouseKey MouseKey, class UObject* __WorldContext, bool* IsUnassighnableKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfigNameFunction.KeyConfigNameFunction_C.IsUnassignableMouseKey");
		
		UKeyConfigNameFunction_C_IsUnassignableMouseKey_Params params {};
		params.ConfigType = ConfigType;
		params.MouseKey = MouseKey;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsUnassighnableKey != nullptr)
			*IsUnassighnableKey = params.IsUnassighnableKey;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfigNameFunction.KeyConfigNameFunction_C.IsUnassignablePadKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EConfig_KeyconfigItems                             ConfigType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBKeyConfigGamepadKey                             PadKey                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsUnassighnableKey                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeyConfigNameFunction_C::IsUnassignablePadKey(EConfig_KeyconfigItems ConfigType, ESBKeyConfigGamepadKey PadKey, class UObject* __WorldContext, bool* IsUnassighnableKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfigNameFunction.KeyConfigNameFunction_C.IsUnassignablePadKey");
		
		UKeyConfigNameFunction_C_IsUnassignablePadKey_Params params {};
		params.ConfigType = ConfigType;
		params.PadKey = PadKey;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsUnassighnableKey != nullptr)
			*IsUnassighnableKey = params.IsUnassighnableKey;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfigNameFunction.KeyConfigNameFunction_C.IsUnassignableKeyboardKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EConfig_KeyconfigItems                             ConfigType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBKeyConfigKeyboardKey                            KeyboardKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsUnassighnableKey                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeyConfigNameFunction_C::IsUnassignableKeyboardKey(EConfig_KeyconfigItems ConfigType, ESBKeyConfigKeyboardKey KeyboardKey, class UObject* __WorldContext, bool* IsUnassighnableKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfigNameFunction.KeyConfigNameFunction_C.IsUnassignableKeyboardKey");
		
		UKeyConfigNameFunction_C_IsUnassignableKeyboardKey_Params params {};
		params.ConfigType = ConfigType;
		params.KeyboardKey = KeyboardKey;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsUnassighnableKey != nullptr)
			*IsUnassighnableKey = params.IsUnassighnableKey;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfigNameFunction.KeyConfigNameFunction_C.GetKeyNameText_Pad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBKeyConfigGamepadKey                             KeyType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      DisplayText                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UKeyConfigNameFunction_C::GetKeyNameText_Pad(ESBKeyConfigGamepadKey KeyType, class UObject* __WorldContext, class FString* DisplayText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfigNameFunction.KeyConfigNameFunction_C.GetKeyNameText_Pad");
		
		UKeyConfigNameFunction_C_GetKeyNameText_Pad_Params params {};
		params.KeyType = KeyType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DisplayText != nullptr)
			*DisplayText = params.DisplayText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfigNameFunction.KeyConfigNameFunction_C.GetKeyNameText_Mouse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBKeyConfigMouseKey                               KeyType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      DisplayText                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UKeyConfigNameFunction_C::GetKeyNameText_Mouse(ESBKeyConfigMouseKey KeyType, class UObject* __WorldContext, class FString* DisplayText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfigNameFunction.KeyConfigNameFunction_C.GetKeyNameText_Mouse");
		
		UKeyConfigNameFunction_C_GetKeyNameText_Mouse_Params params {};
		params.KeyType = KeyType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DisplayText != nullptr)
			*DisplayText = params.DisplayText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfigNameFunction.KeyConfigNameFunction_C.GetKeyNameText_KB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBKeyConfigKeyboardKey                            KeyType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      DisplayText                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UKeyConfigNameFunction_C::GetKeyNameText_KB(ESBKeyConfigKeyboardKey KeyType, class UObject* __WorldContext, class FString* DisplayText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfigNameFunction.KeyConfigNameFunction_C.GetKeyNameText_KB");
		
		UKeyConfigNameFunction_C_GetKeyNameText_KB_Params params {};
		params.KeyType = KeyType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DisplayText != nullptr)
			*DisplayText = params.DisplayText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfigNameFunction.KeyConfigNameFunction_C.IsAssignedKeyType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBPlayerClassKeyConfigData                 KeyConfig                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		EConfig_KeyconfigItems                             ItemType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsAssign                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeyConfigNameFunction_C::IsAssignedKeyType(const struct FSBPlayerClassKeyConfigData& KeyConfig, EConfig_KeyconfigItems ItemType, class UObject* __WorldContext, bool* IsAssign)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfigNameFunction.KeyConfigNameFunction_C.IsAssignedKeyType");
		
		UKeyConfigNameFunction_C_IsAssignedKeyType_Params params {};
		params.KeyConfig = KeyConfig;
		params.ItemType = ItemType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsAssign != nullptr)
			*IsAssign = params.IsAssign;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfigNameFunction.KeyConfigNameFunction_C.GetKeyNameAsOperationMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBKeyConfigKeyboardKey                            KeyBoard                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBKeyConfigGamepadKey                             Gamepad                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               UseSuffix                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FString UKeyConfigNameFunction_C::GetKeyNameAsOperationMode(ESBKeyConfigKeyboardKey KeyBoard, ESBKeyConfigGamepadKey Gamepad, bool UseSuffix, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfigNameFunction.KeyConfigNameFunction_C.GetKeyNameAsOperationMode");
		
		UKeyConfigNameFunction_C_GetKeyNameAsOperationMode_Params params {};
		params.KeyBoard = KeyBoard;
		params.Gamepad = Gamepad;
		params.UseSuffix = UseSuffix;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKeyConfigNameFunction_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKeyConfigNameFunction_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass KeyConfigNameFunction.KeyConfigNameFunction_C");
		return ptr;
	}

}


