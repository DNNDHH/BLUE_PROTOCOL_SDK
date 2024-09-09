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
	 * 		Name   -> Function BP_SBPhotoModeComponent.BP_SBPhotoModeComponent_C.GetTextId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBPhotoModeStartState                             State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FName UBP_SBPhotoModeComponent_C::GetTextId(ESBPhotoModeStartState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModeComponent.BP_SBPhotoModeComponent_C.GetTextId");
		
		UBP_SBPhotoModeComponent_C_GetTextId_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModeComponent.BP_SBPhotoModeComponent_C.BP_OnCantStartPhotoMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBPhotoModeStartState                             State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SBPhotoModeComponent_C::BP_OnCantStartPhotoMode(ESBPhotoModeStartState State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModeComponent.BP_SBPhotoModeComponent_C.BP_OnCantStartPhotoMode");
		
		UBP_SBPhotoModeComponent_C_BP_OnCantStartPhotoMode_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SBPhotoModeComponent.BP_SBPhotoModeComponent_C.ExecuteUbergraph_BP_SBPhotoModeComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SBPhotoModeComponent_C::ExecuteUbergraph_BP_SBPhotoModeComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SBPhotoModeComponent.BP_SBPhotoModeComponent_C.ExecuteUbergraph_BP_SBPhotoModeComponent");
		
		UBP_SBPhotoModeComponent_C_ExecuteUbergraph_BP_SBPhotoModeComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_SBPhotoModeComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_SBPhotoModeComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SBPhotoModeComponent.BP_SBPhotoModeComponent_C");
		return ptr;
	}

}


