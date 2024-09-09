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
	 * 		Name   -> Function USBDebugBlueprintFunctionLibrary.USBDebugBlueprintFunctionLibrary_C.OnChangedEffectDebugValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBDebugMenuType                                   MenuType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        RowName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUSBDebugBlueprintFunctionLibrary_C::OnChangedEffectDebugValue(ESBDebugMenuType MenuType, const class FName& RowName, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function USBDebugBlueprintFunctionLibrary.USBDebugBlueprintFunctionLibrary_C.OnChangedEffectDebugValue");
		
		UUSBDebugBlueprintFunctionLibrary_C_OnChangedEffectDebugValue_Params params {};
		params.MenuType = MenuType;
		params.RowName = RowName;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function USBDebugBlueprintFunctionLibrary.USBDebugBlueprintFunctionLibrary_C.OnChangedCameraDebugValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBDebugMenuType                                   MenuType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        RowName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUSBDebugBlueprintFunctionLibrary_C::OnChangedCameraDebugValue(ESBDebugMenuType MenuType, const class FName& RowName, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function USBDebugBlueprintFunctionLibrary.USBDebugBlueprintFunctionLibrary_C.OnChangedCameraDebugValue");
		
		UUSBDebugBlueprintFunctionLibrary_C_OnChangedCameraDebugValue_Params params {};
		params.MenuType = MenuType;
		params.RowName = RowName;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function USBDebugBlueprintFunctionLibrary.USBDebugBlueprintFunctionLibrary_C.OnChangedUIDebugValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBDebugMenuType                                   MenuType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        RowName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUSBDebugBlueprintFunctionLibrary_C::OnChangedUIDebugValue(ESBDebugMenuType MenuType, const class FName& RowName, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function USBDebugBlueprintFunctionLibrary.USBDebugBlueprintFunctionLibrary_C.OnChangedUIDebugValue");
		
		UUSBDebugBlueprintFunctionLibrary_C_OnChangedUIDebugValue_Params params {};
		params.MenuType = MenuType;
		params.RowName = RowName;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function USBDebugBlueprintFunctionLibrary.USBDebugBlueprintFunctionLibrary_C.OnChangedDebugValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBDebugMenuType                                   MenuType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        RowName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUSBDebugBlueprintFunctionLibrary_C::OnChangedDebugValue(ESBDebugMenuType MenuType, const class FName& RowName, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function USBDebugBlueprintFunctionLibrary.USBDebugBlueprintFunctionLibrary_C.OnChangedDebugValue");
		
		UUSBDebugBlueprintFunctionLibrary_C_OnChangedDebugValue_Params params {};
		params.MenuType = MenuType;
		params.RowName = RowName;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function USBDebugBlueprintFunctionLibrary.USBDebugBlueprintFunctionLibrary_C.Debug_SetUIVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBUIType                                          InUIType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bVisibility                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUSBDebugBlueprintFunctionLibrary_C::Debug_SetUIVisibility(ESBUIType InUIType, bool bVisibility, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function USBDebugBlueprintFunctionLibrary.USBDebugBlueprintFunctionLibrary_C.Debug_SetUIVisibility");
		
		UUSBDebugBlueprintFunctionLibrary_C_Debug_SetUIVisibility_Params params {};
		params.InUIType = InUIType;
		params.bVisibility = bVisibility;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function USBDebugBlueprintFunctionLibrary.USBDebugBlueprintFunctionLibrary_C.Debug_SetBattleHUDVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVisibility                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUSBDebugBlueprintFunctionLibrary_C::Debug_SetBattleHUDVisibility(bool bVisibility, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function USBDebugBlueprintFunctionLibrary.USBDebugBlueprintFunctionLibrary_C.Debug_SetBattleHUDVisibility");
		
		UUSBDebugBlueprintFunctionLibrary_C_Debug_SetBattleHUDVisibility_Params params {};
		params.bVisibility = bVisibility;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function USBDebugBlueprintFunctionLibrary.USBDebugBlueprintFunctionLibrary_C.ApplyDebugUIVisibilitySetting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUSBDebugBlueprintFunctionLibrary_C::ApplyDebugUIVisibilitySetting(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function USBDebugBlueprintFunctionLibrary.USBDebugBlueprintFunctionLibrary_C.ApplyDebugUIVisibilitySetting");
		
		UUSBDebugBlueprintFunctionLibrary_C_ApplyDebugUIVisibilitySetting_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUSBDebugBlueprintFunctionLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUSBDebugBlueprintFunctionLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass USBDebugBlueprintFunctionLibrary.USBDebugBlueprintFunctionLibrary_C");
		return ptr;
	}

}


