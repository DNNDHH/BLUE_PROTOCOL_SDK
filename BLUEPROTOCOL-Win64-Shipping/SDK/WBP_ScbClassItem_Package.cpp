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
	 * 		Name   -> Function WBP_ScbClassItem.WBP_ScbClassItem_C.SetClassName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBClassType                                       InClassType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ScbClassItem_C::SetClassName(ESBClassType InClassType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScbClassItem.WBP_ScbClassItem_C.SetClassName");
		
		UWBP_ScbClassItem_C_SetClassName_Params params {};
		params.InClassType = InClassType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ScbClassItem.WBP_ScbClassItem_C.SetClassType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBClassType                                       InClassType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ScbClassItem_C::SetClassType(ESBClassType InClassType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScbClassItem.WBP_ScbClassItem_C.SetClassType");
		
		UWBP_ScbClassItem_C_SetClassType_Params params {};
		params.InClassType = InClassType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ScbClassItem.WBP_ScbClassItem_C.ShowRankStar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MaxRank                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Rank                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ScbClassItem_C::ShowRankStar(int32_t MaxRank, int32_t Rank)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScbClassItem.WBP_ScbClassItem_C.ShowRankStar");
		
		UWBP_ScbClassItem_C_ShowRankStar_Params params {};
		params.MaxRank = MaxRank;
		params.Rank = Rank;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ScbClassItem.WBP_ScbClassItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_ScbClassItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScbClassItem.WBP_ScbClassItem_C.Construct");
		
		UWBP_ScbClassItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ScbClassItem.WBP_ScbClassItem_C.SetRankData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBScbClassData                             Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWBP_ScbClassItem_C::SetRankData(const struct FSBScbClassData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScbClassItem.WBP_ScbClassItem_C.SetRankData");
		
		UWBP_ScbClassItem_C_SetRankData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ScbClassItem.WBP_ScbClassItem_C.SetConditionData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBScbClassConditionsData                   Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ScbClassItem_C::SetConditionData(const struct FSBScbClassConditionsData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScbClassItem.WBP_ScbClassItem_C.SetConditionData");
		
		UWBP_ScbClassItem_C_SetConditionData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ScbClassItem.WBP_ScbClassItem_C.ExecuteUbergraph_WBP_ScbClassItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ScbClassItem_C::ExecuteUbergraph_WBP_ScbClassItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ScbClassItem.WBP_ScbClassItem_C.ExecuteUbergraph_WBP_ScbClassItem");
		
		UWBP_ScbClassItem_C_ExecuteUbergraph_WBP_ScbClassItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ScbClassItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ScbClassItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ScbClassItem.WBP_ScbClassItem_C");
		return ptr;
	}

}


