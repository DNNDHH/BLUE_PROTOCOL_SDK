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
	 * 		Name   -> Function BP_KeyConfigFunctionLibrary.BP_KeyConfigFunctionLibrary_C.IsWarningKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        InKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		EConfig_KeyconfigItems                             KeyItemType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsWarning                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        WarningText                                                (Parm, OutParm)
	 */
	void UBP_KeyConfigFunctionLibrary_C::IsWarningKey(const struct FKey& InKey, EConfig_KeyconfigItems KeyItemType, class UObject* __WorldContext, bool* bIsWarning, class FText* WarningText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_KeyConfigFunctionLibrary.BP_KeyConfigFunctionLibrary_C.IsWarningKey");
		
		UBP_KeyConfigFunctionLibrary_C_IsWarningKey_Params params {};
		params.InKey = InKey;
		params.KeyItemType = KeyItemType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsWarning != nullptr)
			*bIsWarning = params.bIsWarning;
		if (WarningText != nullptr)
			*WarningText = params.WarningText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_KeyConfigFunctionLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_KeyConfigFunctionLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_KeyConfigFunctionLibrary.BP_KeyConfigFunctionLibrary_C");
		return ptr;
	}

}


