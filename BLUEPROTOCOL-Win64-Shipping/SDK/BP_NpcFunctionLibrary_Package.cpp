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
	 * 		Name   -> Function BP_NpcFunctionLibrary.BP_NpcFunctionLibrary_C.FinalizeNamePlate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBMobCharacter*                             Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_NpcFunctionLibrary_C::FinalizeNamePlate(class ASBMobCharacter* Character, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NpcFunctionLibrary.BP_NpcFunctionLibrary_C.FinalizeNamePlate");
		
		UBP_NpcFunctionLibrary_C_FinalizeNamePlate_Params params {};
		params.Character = Character;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_NpcFunctionLibrary.BP_NpcFunctionLibrary_C.InitializeNamePlate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBMobCharacter*                             Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_NpcFunctionLibrary_C::InitializeNamePlate(class ASBMobCharacter* Character, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_NpcFunctionLibrary.BP_NpcFunctionLibrary_C.InitializeNamePlate");
		
		UBP_NpcFunctionLibrary_C_InitializeNamePlate_Params params {};
		params.Character = Character;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_NpcFunctionLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_NpcFunctionLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_NpcFunctionLibrary.BP_NpcFunctionLibrary_C");
		return ptr;
	}

}


