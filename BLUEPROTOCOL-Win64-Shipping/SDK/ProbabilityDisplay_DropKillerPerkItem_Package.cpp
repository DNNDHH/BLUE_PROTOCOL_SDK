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
	 * 		Name   -> Function ProbabilityDisplay_DropKillerPerkItem.ProbabilityDisplay_DropKillerPerkItem_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InIconType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InDesc                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            InMinValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InMaxValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsDispPercentage                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UProbabilityDisplay_DropKillerPerkItem_C::Setup(int32_t InIconType, const class FString& InDesc, int32_t InMinValue, int32_t InMaxValue, int32_t InIndex, bool InIsDispPercentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProbabilityDisplay_DropKillerPerkItem.ProbabilityDisplay_DropKillerPerkItem_C.Setup");
		
		UProbabilityDisplay_DropKillerPerkItem_C_Setup_Params params {};
		params.InIconType = InIconType;
		params.InDesc = InDesc;
		params.InMinValue = InMinValue;
		params.InMaxValue = InMaxValue;
		params.InIndex = InIndex;
		params.InIsDispPercentage = InIsDispPercentage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProbabilityDisplay_DropKillerPerkItem.ProbabilityDisplay_DropKillerPerkItem_C.SetupNewFormat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InIconType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InDesc                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      InMinValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      InMaxValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            InIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProbabilityDisplay_DropKillerPerkItem_C::SetupNewFormat(int32_t InIconType, const class FString& InDesc, const class FString& InMinValue, const class FString& InMaxValue, int32_t InIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProbabilityDisplay_DropKillerPerkItem.ProbabilityDisplay_DropKillerPerkItem_C.SetupNewFormat");
		
		UProbabilityDisplay_DropKillerPerkItem_C_SetupNewFormat_Params params {};
		params.InIconType = InIconType;
		params.InDesc = InDesc;
		params.InMinValue = InMinValue;
		params.InMaxValue = InMaxValue;
		params.InIndex = InIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProbabilityDisplay_DropKillerPerkItem.ProbabilityDisplay_DropKillerPerkItem_C.ExecuteUbergraph_ProbabilityDisplay_DropKillerPerkItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProbabilityDisplay_DropKillerPerkItem_C::ExecuteUbergraph_ProbabilityDisplay_DropKillerPerkItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProbabilityDisplay_DropKillerPerkItem.ProbabilityDisplay_DropKillerPerkItem_C.ExecuteUbergraph_ProbabilityDisplay_DropKillerPerkItem");
		
		UProbabilityDisplay_DropKillerPerkItem_C_ExecuteUbergraph_ProbabilityDisplay_DropKillerPerkItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProbabilityDisplay_DropKillerPerkItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProbabilityDisplay_DropKillerPerkItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ProbabilityDisplay_DropKillerPerkItem.ProbabilityDisplay_DropKillerPerkItem_C");
		return ptr;
	}

}


