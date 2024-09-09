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
	 * 		Name   -> Function WBP_DelayCreateItemIconBtn.WBP_DelayCreateItemIconBtn_C.TryCreateWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemIconBtn_C*                              Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DelayCreateItemIconBtn_C::TryCreateWidget(class UItemIconBtn_C** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DelayCreateItemIconBtn.WBP_DelayCreateItemIconBtn_C.TryCreateWidget");
		
		UWBP_DelayCreateItemIconBtn_C_TryCreateWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_DelayCreateItemIconBtn.WBP_DelayCreateItemIconBtn_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_DelayCreateItemIconBtn_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DelayCreateItemIconBtn.WBP_DelayCreateItemIconBtn_C.Construct");
		
		UWBP_DelayCreateItemIconBtn_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_DelayCreateItemIconBtn.WBP_DelayCreateItemIconBtn_C.ExecuteUbergraph_WBP_DelayCreateItemIconBtn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DelayCreateItemIconBtn_C::ExecuteUbergraph_WBP_DelayCreateItemIconBtn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_DelayCreateItemIconBtn.WBP_DelayCreateItemIconBtn_C.ExecuteUbergraph_WBP_DelayCreateItemIconBtn");
		
		UWBP_DelayCreateItemIconBtn_C_ExecuteUbergraph_WBP_DelayCreateItemIconBtn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_DelayCreateItemIconBtn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_DelayCreateItemIconBtn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_DelayCreateItemIconBtn.WBP_DelayCreateItemIconBtn_C");
		return ptr;
	}

}


