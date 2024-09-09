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
	 * 		Name   -> Function WBP_ItemBoxScrollText_ItemStorage.WBP_ItemBoxScrollText_ItemStorage_C.GetNumColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Num                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Max                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateColor                                 SlateColor                                                 (Parm, OutParm)
	 */
	void UWBP_ItemBoxScrollText_ItemStorage_C::GetNumColor(int32_t Num, int32_t Max, struct FSlateColor* SlateColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxScrollText_ItemStorage.WBP_ItemBoxScrollText_ItemStorage_C.GetNumColor");
		
		UWBP_ItemBoxScrollText_ItemStorage_C_GetNumColor_Params params {};
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
	 * 		Name   -> Function WBP_ItemBoxScrollText_ItemStorage.WBP_ItemBoxScrollText_ItemStorage_C.SetItemRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ItemName                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            NowNum                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MaxNum                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ExpectationNamMin                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ExpectationNamMax                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bCanNotLost                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ItemBoxScrollText_ItemStorage_C::SetItemRange(const class FText& ItemName, int32_t NowNum, int32_t MaxNum, int32_t ExpectationNamMin, int32_t ExpectationNamMax, bool bCanNotLost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxScrollText_ItemStorage.WBP_ItemBoxScrollText_ItemStorage_C.SetItemRange");
		
		UWBP_ItemBoxScrollText_ItemStorage_C_SetItemRange_Params params {};
		params.ItemName = ItemName;
		params.NowNum = NowNum;
		params.MaxNum = MaxNum;
		params.ExpectationNamMin = ExpectationNamMin;
		params.ExpectationNamMax = ExpectationNamMax;
		params.bCanNotLost = bCanNotLost;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxScrollText_ItemStorage.WBP_ItemBoxScrollText_ItemStorage_C.SetItemSingle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ItemName                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            NowNum                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MaxNum                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Expectation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bCanNotLost                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ItemBoxScrollText_ItemStorage_C::SetItemSingle(const class FText& ItemName, int32_t NowNum, int32_t MaxNum, int32_t Expectation, bool bCanNotLost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxScrollText_ItemStorage.WBP_ItemBoxScrollText_ItemStorage_C.SetItemSingle");
		
		UWBP_ItemBoxScrollText_ItemStorage_C_SetItemSingle_Params params {};
		params.ItemName = ItemName;
		params.NowNum = NowNum;
		params.MaxNum = MaxNum;
		params.Expectation = Expectation;
		params.bCanNotLost = bCanNotLost;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ItemBoxScrollText_ItemStorage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ItemBoxScrollText_ItemStorage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ItemBoxScrollText_ItemStorage.WBP_ItemBoxScrollText_ItemStorage_C");
		return ptr;
	}

}


