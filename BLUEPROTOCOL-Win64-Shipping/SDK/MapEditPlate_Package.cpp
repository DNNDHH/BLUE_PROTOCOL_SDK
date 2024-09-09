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
	 * 		Name   -> Function MapEditPlate.MapEditPlate_C.SetText
	 * 		Flags  -> ()
	 */
	void UMapEditPlate_C::SetText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditPlate.MapEditPlate_C.SetText");
		
		UMapEditPlate_C_SetText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditPlate.MapEditPlate_C.BndEvt__MapEditPlate_TextKey_K2Node_ComponentBoundEvent_0_OnUpdateOperationMode__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMapEditPlate_C::BndEvt__MapEditPlate_TextKey_K2Node_ComponentBoundEvent_0_OnUpdateOperationMode__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditPlate.MapEditPlate_C.BndEvt__MapEditPlate_TextKey_K2Node_ComponentBoundEvent_0_OnUpdateOperationMode__DelegateSignature");
		
		UMapEditPlate_C_BndEvt__MapEditPlate_TextKey_K2Node_ComponentBoundEvent_0_OnUpdateOperationMode__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditPlate.MapEditPlate_C.BndEvt__MapEditPlate_TextKey_K2Node_ComponentBoundEvent_1_OnChangePadSkinType__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMapEditPlate_C::BndEvt__MapEditPlate_TextKey_K2Node_ComponentBoundEvent_1_OnChangePadSkinType__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditPlate.MapEditPlate_C.BndEvt__MapEditPlate_TextKey_K2Node_ComponentBoundEvent_1_OnChangePadSkinType__DelegateSignature");
		
		UMapEditPlate_C_BndEvt__MapEditPlate_TextKey_K2Node_ComponentBoundEvent_1_OnChangePadSkinType__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditPlate.MapEditPlate_C.BndEvt__MapEditPlate_TextKey_K2Node_ComponentBoundEvent_2_OnUpdateKeyConfig__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMapEditPlate_C::BndEvt__MapEditPlate_TextKey_K2Node_ComponentBoundEvent_2_OnUpdateKeyConfig__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditPlate.MapEditPlate_C.BndEvt__MapEditPlate_TextKey_K2Node_ComponentBoundEvent_2_OnUpdateKeyConfig__DelegateSignature");
		
		UMapEditPlate_C_BndEvt__MapEditPlate_TextKey_K2Node_ComponentBoundEvent_2_OnUpdateKeyConfig__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditPlate.MapEditPlate_C.Construct
	 * 		Flags  -> ()
	 */
	void UMapEditPlate_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditPlate.MapEditPlate_C.Construct");
		
		UMapEditPlate_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditPlate.MapEditPlate_C.Destruct
	 * 		Flags  -> ()
	 */
	void UMapEditPlate_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditPlate.MapEditPlate_C.Destruct");
		
		UMapEditPlate_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditPlate.MapEditPlate_C.ExecuteUbergraph_MapEditPlate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapEditPlate_C::ExecuteUbergraph_MapEditPlate(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditPlate.MapEditPlate_C.ExecuteUbergraph_MapEditPlate");
		
		UMapEditPlate_C_ExecuteUbergraph_MapEditPlate_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapEditPlate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapEditPlate_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MapEditPlate.MapEditPlate_C");
		return ptr;
	}

}


