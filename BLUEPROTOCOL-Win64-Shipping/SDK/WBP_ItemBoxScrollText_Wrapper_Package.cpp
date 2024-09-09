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
	 * 		Name   -> Function WBP_ItemBoxScrollText_Wrapper.WBP_ItemBoxScrollText_Wrapper_C.SetTypeOtherMultiple
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InNameText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        InNumText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               bOverlapping                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ItemBoxScrollText_Wrapper_C::SetTypeOtherMultiple(const class FText& InNameText, const class FText& InNumText, bool bOverlapping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxScrollText_Wrapper.WBP_ItemBoxScrollText_Wrapper_C.SetTypeOtherMultiple");
		
		UWBP_ItemBoxScrollText_Wrapper_C_SetTypeOtherMultiple_Params params {};
		params.InNameText = InNameText;
		params.InNumText = InNumText;
		params.bOverlapping = bOverlapping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxScrollText_Wrapper.WBP_ItemBoxScrollText_Wrapper_C.SetTypeOtherOne
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InNameText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               bOverlapping                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ItemBoxScrollText_Wrapper_C::SetTypeOtherOne(const class FText& InNameText, bool bOverlapping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxScrollText_Wrapper.WBP_ItemBoxScrollText_Wrapper_C.SetTypeOtherOne");
		
		UWBP_ItemBoxScrollText_Wrapper_C_SetTypeOtherOne_Params params {};
		params.InNameText = InNameText;
		params.bOverlapping = bOverlapping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxScrollText_Wrapper.WBP_ItemBoxScrollText_Wrapper_C.SetBagRange_Random
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NowNum                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MaxNum                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MaxAdd                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemBoxScrollText_Wrapper_C::SetBagRange_Random(int32_t NowNum, int32_t MaxNum, int32_t MaxAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxScrollText_Wrapper.WBP_ItemBoxScrollText_Wrapper_C.SetBagRange_Random");
		
		UWBP_ItemBoxScrollText_Wrapper_C_SetBagRange_Random_Params params {};
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
	 * 		Name   -> Function WBP_ItemBoxScrollText_Wrapper.WBP_ItemBoxScrollText_Wrapper_C.SetBagRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NowNum                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MaxNum                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ExpectationNamMax                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ExpectationNamMin                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemBoxScrollText_Wrapper_C::SetBagRange(int32_t NowNum, int32_t MaxNum, int32_t ExpectationNamMax, int32_t ExpectationNamMin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxScrollText_Wrapper.WBP_ItemBoxScrollText_Wrapper_C.SetBagRange");
		
		UWBP_ItemBoxScrollText_Wrapper_C_SetBagRange_Params params {};
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
	 * 		Name   -> Function WBP_ItemBoxScrollText_Wrapper.WBP_ItemBoxScrollText_Wrapper_C.SetBagSingle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NowNum                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MaxNum                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ExpectationNam                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemBoxScrollText_Wrapper_C::SetBagSingle(int32_t NowNum, int32_t MaxNum, int32_t ExpectationNam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxScrollText_Wrapper.WBP_ItemBoxScrollText_Wrapper_C.SetBagSingle");
		
		UWBP_ItemBoxScrollText_Wrapper_C_SetBagSingle_Params params {};
		params.NowNum = NowNum;
		params.MaxNum = MaxNum;
		params.ExpectationNam = ExpectationNam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxScrollText_Wrapper.WBP_ItemBoxScrollText_Wrapper_C.SetItemStorageRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ItemName                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            NowNum                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MaxNum                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ExpectationNamMin                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ExpectationNamMax                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bCanNotLost                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ItemBoxScrollText_Wrapper_C::SetItemStorageRange(const class FText& ItemName, int32_t NowNum, int32_t MaxNum, int32_t ExpectationNamMin, int32_t ExpectationNamMax, bool bCanNotLost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxScrollText_Wrapper.WBP_ItemBoxScrollText_Wrapper_C.SetItemStorageRange");
		
		UWBP_ItemBoxScrollText_Wrapper_C_SetItemStorageRange_Params params {};
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
	 * 		Name   -> Function WBP_ItemBoxScrollText_Wrapper.WBP_ItemBoxScrollText_Wrapper_C.SetItemStorageSingle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ItemName                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            NowNum                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MaxNum                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ExpectationNam                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bCanNotLost                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ItemBoxScrollText_Wrapper_C::SetItemStorageSingle(const class FText& ItemName, int32_t NowNum, int32_t MaxNum, int32_t ExpectationNam, bool bCanNotLost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxScrollText_Wrapper.WBP_ItemBoxScrollText_Wrapper_C.SetItemStorageSingle");
		
		UWBP_ItemBoxScrollText_Wrapper_C_SetItemStorageSingle_Params params {};
		params.ItemName = ItemName;
		params.NowNum = NowNum;
		params.MaxNum = MaxNum;
		params.ExpectationNam = ExpectationNam;
		params.bCanNotLost = bCanNotLost;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxScrollText_Wrapper.WBP_ItemBoxScrollText_Wrapper_C.SetDestination
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Over                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        OverText                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_ItemBoxScrollText_Wrapper_C::SetDestination(const class FText& InText, int32_t Index, bool Over, const class FText& OverText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxScrollText_Wrapper.WBP_ItemBoxScrollText_Wrapper_C.SetDestination");
		
		UWBP_ItemBoxScrollText_Wrapper_C_SetDestination_Params params {};
		params.InText = InText;
		params.Index = Index;
		params.Over = Over;
		params.OverText = OverText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxScrollText_Wrapper.WBP_ItemBoxScrollText_Wrapper_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ItemBoxScrollText_Wrapper_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxScrollText_Wrapper.WBP_ItemBoxScrollText_Wrapper_C.PreConstruct");
		
		UWBP_ItemBoxScrollText_Wrapper_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ItemBoxScrollText_Wrapper.WBP_ItemBoxScrollText_Wrapper_C.ExecuteUbergraph_WBP_ItemBoxScrollText_Wrapper
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ItemBoxScrollText_Wrapper_C::ExecuteUbergraph_WBP_ItemBoxScrollText_Wrapper(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ItemBoxScrollText_Wrapper.WBP_ItemBoxScrollText_Wrapper_C.ExecuteUbergraph_WBP_ItemBoxScrollText_Wrapper");
		
		UWBP_ItemBoxScrollText_Wrapper_C_ExecuteUbergraph_WBP_ItemBoxScrollText_Wrapper_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ItemBoxScrollText_Wrapper_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ItemBoxScrollText_Wrapper_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ItemBoxScrollText_Wrapper.WBP_ItemBoxScrollText_Wrapper_C");
		return ptr;
	}

}


