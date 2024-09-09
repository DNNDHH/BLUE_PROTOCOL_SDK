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
	 * 		Name   -> Function WBP_ItemBoxScrollText_Bag.WBP_ItemBoxScrollText_Bag_C.SetItemRandomRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NowNum                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MaxNum                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MaxAdd                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemBoxScrollText_Bag_C::SetItemRandomRange(int32_t NowNum, int32_t MaxNum, int32_t MaxAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxScrollText_Bag.WBP_ItemBoxScrollText_Bag_C.SetItemRandomRange");
		
		UWBP_ItemBoxScrollText_Bag_C_SetItemRandomRange_Params params {};
		params.NowNum = NowNum;
		params.MaxNum = MaxNum;
		params.MaxAdd = MaxAdd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxScrollText_Bag.WBP_ItemBoxScrollText_Bag_C.GetNumColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Num                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Max                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateColor                                 SlateColor                                                 (Parm, OutParm)
	 */
	void UWBP_ItemBoxScrollText_Bag_C::GetNumColor(int32_t Num, int32_t Max, struct FSlateColor* SlateColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxScrollText_Bag.WBP_ItemBoxScrollText_Bag_C.GetNumColor");
		
		UWBP_ItemBoxScrollText_Bag_C_GetNumColor_Params params {};
		params.Num = Num;
		params.Max = Max;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SlateColor != nullptr)
			*SlateColor = params.SlateColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxScrollText_Bag.WBP_ItemBoxScrollText_Bag_C.SetItemRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NowNum                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MaxNum                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ExpectationNamMax                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ExpectationNamMin                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemBoxScrollText_Bag_C::SetItemRange(int32_t NowNum, int32_t MaxNum, int32_t ExpectationNamMax, int32_t ExpectationNamMin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxScrollText_Bag.WBP_ItemBoxScrollText_Bag_C.SetItemRange");
		
		UWBP_ItemBoxScrollText_Bag_C_SetItemRange_Params params {};
		params.NowNum = NowNum;
		params.MaxNum = MaxNum;
		params.ExpectationNamMax = ExpectationNamMax;
		params.ExpectationNamMin = ExpectationNamMin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxScrollText_Bag.WBP_ItemBoxScrollText_Bag_C.SetItemSingle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NowNum                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MaxNum                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Expectation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemBoxScrollText_Bag_C::SetItemSingle(int32_t NowNum, int32_t MaxNum, int32_t Expectation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxScrollText_Bag.WBP_ItemBoxScrollText_Bag_C.SetItemSingle");
		
		UWBP_ItemBoxScrollText_Bag_C_SetItemSingle_Params params {};
		params.NowNum = NowNum;
		params.MaxNum = MaxNum;
		params.Expectation = Expectation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ItemBoxScrollText_Bag_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ItemBoxScrollText_Bag_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ItemBoxScrollText_Bag.WBP_ItemBoxScrollText_Bag_C");
		return ptr;
	}

}


