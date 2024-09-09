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
	 * 		Name   -> Function BP_LayoutBlueprintFunctionLibrary.BP_LayoutBlueprintFunctionLibrary_C.RemoveLayoutFromHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsRegisted                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_LayoutBlueprintFunctionLibrary_C::RemoveLayoutFromHUD(const class FString& Name, class UObject* __WorldContext, bool* IsRegisted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LayoutBlueprintFunctionLibrary.BP_LayoutBlueprintFunctionLibrary_C.RemoveLayoutFromHUD");
		
		UBP_LayoutBlueprintFunctionLibrary_C_RemoveLayoutFromHUD_Params params {};
		params.Name = Name;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsRegisted != nullptr)
			*IsRegisted = params.IsRegisted;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LayoutBlueprintFunctionLibrary.BP_LayoutBlueprintFunctionLibrary_C.ApplyClassHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_LayoutBlueprintFunctionLibrary_C::ApplyClassHUD(class UUserWidget* Widget, const class FString& Name, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LayoutBlueprintFunctionLibrary.BP_LayoutBlueprintFunctionLibrary_C.ApplyClassHUD");
		
		UBP_LayoutBlueprintFunctionLibrary_C_ApplyClassHUD_Params params {};
		params.Widget = Widget;
		params.Name = Name;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_LayoutBlueprintFunctionLibrary.BP_LayoutBlueprintFunctionLibrary_C.ApplyLayout
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UUserWidget*                                 Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_LayoutBlueprintFunctionLibrary_C::ApplyLayout(const class FString& Key, class UUserWidget** Widget, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_LayoutBlueprintFunctionLibrary.BP_LayoutBlueprintFunctionLibrary_C.ApplyLayout");
		
		UBP_LayoutBlueprintFunctionLibrary_C_ApplyLayout_Params params {};
		params.Key = Key;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_LayoutBlueprintFunctionLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_LayoutBlueprintFunctionLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_LayoutBlueprintFunctionLibrary.BP_LayoutBlueprintFunctionLibrary_C");
		return ptr;
	}

}


