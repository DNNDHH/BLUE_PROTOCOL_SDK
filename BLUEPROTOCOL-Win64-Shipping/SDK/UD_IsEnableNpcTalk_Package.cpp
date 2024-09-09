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
	 * 		Name   -> Function UD_IsEnableNpcTalk.UD_IsEnableNpcTalk_C.ReceiveFetchValue
	 * 		Flags  -> ()
	 */
	float UUD_IsEnableNpcTalk_C::ReceiveFetchValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UD_IsEnableNpcTalk.UD_IsEnableNpcTalk_C.ReceiveFetchValue");
		
		UUD_IsEnableNpcTalk_C_ReceiveFetchValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UD_IsEnableNpcTalk.UD_IsEnableNpcTalk_C.ReceiveInitialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBUtilityBrainComponent*                    OwnerComponent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUD_IsEnableNpcTalk_C::ReceiveInitialize(class USBUtilityBrainComponent* OwnerComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UD_IsEnableNpcTalk.UD_IsEnableNpcTalk_C.ReceiveInitialize");
		
		UUD_IsEnableNpcTalk_C_ReceiveInitialize_Params params {};
		params.OwnerComponent = OwnerComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UD_IsEnableNpcTalk.UD_IsEnableNpcTalk_C.ExecuteUbergraph_UD_IsEnableNpcTalk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUD_IsEnableNpcTalk_C::ExecuteUbergraph_UD_IsEnableNpcTalk(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UD_IsEnableNpcTalk.UD_IsEnableNpcTalk_C.ExecuteUbergraph_UD_IsEnableNpcTalk");
		
		UUD_IsEnableNpcTalk_C_ExecuteUbergraph_UD_IsEnableNpcTalk_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUD_IsEnableNpcTalk_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUD_IsEnableNpcTalk_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass UD_IsEnableNpcTalk.UD_IsEnableNpcTalk_C");
		return ptr;
	}

}


