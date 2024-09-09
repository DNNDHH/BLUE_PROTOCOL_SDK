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
	 * 		Name   -> Function StepTextItem_Gasha.StepTextItem_Gasha_C.SetStep
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Now                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Max                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStepTextItem_Gasha_C::SetStep(int32_t Now, int32_t Max)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StepTextItem_Gasha.StepTextItem_Gasha_C.SetStep");
		
		UStepTextItem_Gasha_C_SetStep_Params params {};
		params.Now = Now;
		params.Max = Max;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StepTextItem_Gasha.StepTextItem_Gasha_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStepTextItem_Gasha_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StepTextItem_Gasha.StepTextItem_Gasha_C.PreConstruct");
		
		UStepTextItem_Gasha_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StepTextItem_Gasha.StepTextItem_Gasha_C.ExecuteUbergraph_StepTextItem_Gasha
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStepTextItem_Gasha_C::ExecuteUbergraph_StepTextItem_Gasha(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StepTextItem_Gasha.StepTextItem_Gasha_C.ExecuteUbergraph_StepTextItem_Gasha");
		
		UStepTextItem_Gasha_C_ExecuteUbergraph_StepTextItem_Gasha_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStepTextItem_Gasha_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStepTextItem_Gasha_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StepTextItem_Gasha.StepTextItem_Gasha_C");
		return ptr;
	}

}


