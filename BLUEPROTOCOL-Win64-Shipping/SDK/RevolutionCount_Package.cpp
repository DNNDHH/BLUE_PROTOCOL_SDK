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
	 * 		Name   -> Function RevolutionCount.RevolutionCount_C.SetTextCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URevolutionCount_C::SetTextCount(int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RevolutionCount.RevolutionCount_C.SetTextCount");
		
		URevolutionCount_C_SetTextCount_Params params {};
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RevolutionCount.RevolutionCount_C.SetIconVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NoHitSelforCollapse                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URevolutionCount_C::SetIconVisibility(bool NoHitSelforCollapse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RevolutionCount.RevolutionCount_C.SetIconVisibility");
		
		URevolutionCount_C_SetIconVisibility_Params params {};
		params.NoHitSelforCollapse = NoHitSelforCollapse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RevolutionCount.RevolutionCount_C.Construct
	 * 		Flags  -> ()
	 */
	void URevolutionCount_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RevolutionCount.RevolutionCount_C.Construct");
		
		URevolutionCount_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RevolutionCount.RevolutionCount_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URevolutionCount_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RevolutionCount.RevolutionCount_C.Tick");
		
		URevolutionCount_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RevolutionCount.RevolutionCount_C.On_StartIntervalRevolution
	 * 		Flags  -> ()
	 */
	void URevolutionCount_C::On_StartIntervalRevolution()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RevolutionCount.RevolutionCount_C.On_StartIntervalRevolution");
		
		URevolutionCount_C_On_StartIntervalRevolution_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RevolutionCount.RevolutionCount_C.On_EndIntervalRevolution
	 * 		Flags  -> ()
	 */
	void URevolutionCount_C::On_EndIntervalRevolution()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RevolutionCount.RevolutionCount_C.On_EndIntervalRevolution");
		
		URevolutionCount_C_On_EndIntervalRevolution_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RevolutionCount.RevolutionCount_C.Destruct
	 * 		Flags  -> ()
	 */
	void URevolutionCount_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RevolutionCount.RevolutionCount_C.Destruct");
		
		URevolutionCount_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RevolutionCount.RevolutionCount_C.ExecuteUbergraph_RevolutionCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URevolutionCount_C::ExecuteUbergraph_RevolutionCount(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RevolutionCount.RevolutionCount_C.ExecuteUbergraph_RevolutionCount");
		
		URevolutionCount_C_ExecuteUbergraph_RevolutionCount_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URevolutionCount_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URevolutionCount_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RevolutionCount.RevolutionCount_C");
		return ptr;
	}

}


