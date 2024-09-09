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
	 * 		Name   -> Function WBP_StackB_L.WBP_StackB_L_C.UpdateStackBView
	 * 		Flags  -> ()
	 */
	void UWBP_StackB_L_C::UpdateStackBView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StackB_L.WBP_StackB_L_C.UpdateStackBView");
		
		UWBP_StackB_L_C_UpdateStackBView_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StackB_L.WBP_StackB_L_C.SetVisibleStackBMax
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               VisibleStackBMax                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_StackB_L_C::SetVisibleStackBMax(bool VisibleStackBMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StackB_L.WBP_StackB_L_C.SetVisibleStackBMax");
		
		UWBP_StackB_L_C_SetVisibleStackBMax_Params params {};
		params.VisibleStackBMax = VisibleStackBMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StackB_L.WBP_StackB_L_C.SetStackBMax
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            StackBMax                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StackB_L_C::SetStackBMax(int32_t StackBMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StackB_L.WBP_StackB_L_C.SetStackBMax");
		
		UWBP_StackB_L_C_SetStackBMax_Params params {};
		params.StackBMax = StackBMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StackB_L.WBP_StackB_L_C.UpdateStackBMax
	 * 		Flags  -> ()
	 */
	void UWBP_StackB_L_C::UpdateStackBMax()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StackB_L.WBP_StackB_L_C.UpdateStackBMax");
		
		UWBP_StackB_L_C_UpdateStackBMax_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StackB_L.WBP_StackB_L_C.SetStackBNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            StackBNum                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StackB_L_C::SetStackBNum(int32_t StackBNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StackB_L.WBP_StackB_L_C.SetStackBNum");
		
		UWBP_StackB_L_C_SetStackBNum_Params params {};
		params.StackBNum = StackBNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StackB_L.WBP_StackB_L_C.SetStackBNumByItemInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                ItemInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_StackB_L_C::SetStackBNumByItemInfo(const struct FOwnItemInfo& ItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StackB_L.WBP_StackB_L_C.SetStackBNumByItemInfo");
		
		UWBP_StackB_L_C_SetStackBNumByItemInfo_Params params {};
		params.ItemInfo = ItemInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StackB_L.WBP_StackB_L_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_StackB_L_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StackB_L.WBP_StackB_L_C.Construct");
		
		UWBP_StackB_L_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_StackB_L.WBP_StackB_L_C.ExecuteUbergraph_WBP_StackB_L
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_StackB_L_C::ExecuteUbergraph_WBP_StackB_L(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_StackB_L.WBP_StackB_L_C.ExecuteUbergraph_WBP_StackB_L");
		
		UWBP_StackB_L_C_ExecuteUbergraph_WBP_StackB_L_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_StackB_L_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_StackB_L_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_StackB_L.WBP_StackB_L_C");
		return ptr;
	}

}


