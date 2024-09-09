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
	 * 		Name   -> Function ProbabilityDisplay_DropKillerPerkListItem.ProbabilityDisplay_DropKillerPerkListItem_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRare                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      InMainDesc                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      InSubDesc                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            InMainMinValue                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InMainMaxValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSubMinValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSubMaxValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InRate                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InIsDispPercentage                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UProbabilityDisplay_DropKillerPerkListItem_C::Setup(int32_t InRare, const class FString& InName, const class FString& InMainDesc, const class FString& InSubDesc, int32_t InMainMinValue, int32_t InMainMaxValue, int32_t InSubMinValue, int32_t InSubMaxValue, float InRate, int32_t InIndex, bool InIsDispPercentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProbabilityDisplay_DropKillerPerkListItem.ProbabilityDisplay_DropKillerPerkListItem_C.Setup");
		
		UProbabilityDisplay_DropKillerPerkListItem_C_Setup_Params params {};
		params.InRare = InRare;
		params.InName = InName;
		params.InMainDesc = InMainDesc;
		params.InSubDesc = InSubDesc;
		params.InMainMinValue = InMainMinValue;
		params.InMainMaxValue = InMainMaxValue;
		params.InSubMinValue = InSubMinValue;
		params.InSubMaxValue = InSubMaxValue;
		params.InRate = InRate;
		params.InIndex = InIndex;
		params.InIsDispPercentage = InIsDispPercentage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProbabilityDisplay_DropKillerPerkListItem.ProbabilityDisplay_DropKillerPerkListItem_C.SetupNewFormat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InPerkId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InRare                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      InMainDesc                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      InSubDesc                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            InMainMinValue                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InMainMaxValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSubMinValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSubMaxValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InRate                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProbabilityDisplay_DropKillerPerkListItem_C::SetupNewFormat(int32_t InPerkId, int32_t InRare, const class FString& InName, const class FString& InMainDesc, const class FString& InSubDesc, int32_t InMainMinValue, int32_t InMainMaxValue, int32_t InSubMinValue, int32_t InSubMaxValue, float InRate, int32_t InIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProbabilityDisplay_DropKillerPerkListItem.ProbabilityDisplay_DropKillerPerkListItem_C.SetupNewFormat");
		
		UProbabilityDisplay_DropKillerPerkListItem_C_SetupNewFormat_Params params {};
		params.InPerkId = InPerkId;
		params.InRare = InRare;
		params.InName = InName;
		params.InMainDesc = InMainDesc;
		params.InSubDesc = InSubDesc;
		params.InMainMinValue = InMainMinValue;
		params.InMainMaxValue = InMainMaxValue;
		params.InSubMinValue = InSubMinValue;
		params.InSubMaxValue = InSubMaxValue;
		params.InRate = InRate;
		params.InIndex = InIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProbabilityDisplay_DropKillerPerkListItem.ProbabilityDisplay_DropKillerPerkListItem_C.ExecuteUbergraph_ProbabilityDisplay_DropKillerPerkListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProbabilityDisplay_DropKillerPerkListItem_C::ExecuteUbergraph_ProbabilityDisplay_DropKillerPerkListItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProbabilityDisplay_DropKillerPerkListItem.ProbabilityDisplay_DropKillerPerkListItem_C.ExecuteUbergraph_ProbabilityDisplay_DropKillerPerkListItem");
		
		UProbabilityDisplay_DropKillerPerkListItem_C_ExecuteUbergraph_ProbabilityDisplay_DropKillerPerkListItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProbabilityDisplay_DropKillerPerkListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProbabilityDisplay_DropKillerPerkListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ProbabilityDisplay_DropKillerPerkListItem.ProbabilityDisplay_DropKillerPerkListItem_C");
		return ptr;
	}

}


