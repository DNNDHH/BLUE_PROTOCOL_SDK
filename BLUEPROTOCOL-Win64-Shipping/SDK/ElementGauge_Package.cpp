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
	 * 		Name   -> Function ElementGauge.ElementGauge_C.OnBind
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBCharacter*                                InCharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UElementGauge_C::OnBind(class ASBCharacter* InCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElementGauge.ElementGauge_C.OnBind");
		
		UElementGauge_C_OnBind_Params params {};
		params.InCharacter = InCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElementGauge.ElementGauge_C.OnUnbind
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBCharacter*                                InCharacter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UElementGauge_C::OnUnbind(class ASBCharacter* InCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElementGauge.ElementGauge_C.OnUnbind");
		
		UElementGauge_C_OnUnbind_Params params {};
		params.InCharacter = InCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElementGauge.ElementGauge_C.CustomEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBAttribute                                       ElementType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UElementGauge_C::CustomEvent_1(ESBAttribute ElementType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElementGauge.ElementGauge_C.CustomEvent_1");
		
		UElementGauge_C_CustomEvent_1_Params params {};
		params.ElementType = ElementType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElementGauge.ElementGauge_C.CustomEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBAttribute                                       ElementType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UElementGauge_C::CustomEvent_2(ESBAttribute ElementType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElementGauge.ElementGauge_C.CustomEvent_2");
		
		UElementGauge_C_CustomEvent_2_Params params {};
		params.ElementType = ElementType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ElementGauge.ElementGauge_C.ExecuteUbergraph_ElementGauge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UElementGauge_C::ExecuteUbergraph_ElementGauge(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElementGauge.ElementGauge_C.ExecuteUbergraph_ElementGauge");
		
		UElementGauge_C_ExecuteUbergraph_ElementGauge_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UElementGauge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UElementGauge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ElementGauge.ElementGauge_C");
		return ptr;
	}

}


