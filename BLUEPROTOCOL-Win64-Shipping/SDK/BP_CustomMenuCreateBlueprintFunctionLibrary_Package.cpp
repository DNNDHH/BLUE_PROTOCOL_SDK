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
	 * 		Name   -> Function BP_CustomMenuCreateBlueprintFunctionLibrary.BP_CustomMenuCreateBlueprintFunctionLibrary_C.CreateCustomMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USBCustomMenuBase*                           WeaponCustomMenu                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_CustomMenuCreateBlueprintFunctionLibrary_C::CreateCustomMenu(class UClass* Class, class UObject* __WorldContext, class USBCustomMenuBase** WeaponCustomMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomMenuCreateBlueprintFunctionLibrary.BP_CustomMenuCreateBlueprintFunctionLibrary_C.CreateCustomMenu");
		
		UBP_CustomMenuCreateBlueprintFunctionLibrary_C_CreateCustomMenu_Params params {};
		params.Class = Class;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WeaponCustomMenu != nullptr)
			*WeaponCustomMenu = params.WeaponCustomMenu;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_CustomMenuCreateBlueprintFunctionLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_CustomMenuCreateBlueprintFunctionLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CustomMenuCreateBlueprintFunctionLibrary.BP_CustomMenuCreateBlueprintFunctionLibrary_C");
		return ptr;
	}

}


