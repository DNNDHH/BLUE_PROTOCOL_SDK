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
	 * 		Name   -> Function WBP_NaEventTotalPointView.WBP_NaEventTotalPointView_C.UpdatePoint
	 * 		Flags  -> ()
	 */
	void UWBP_NaEventTotalPointView_C::UpdatePoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventTotalPointView.WBP_NaEventTotalPointView_C.UpdatePoint");
		
		UWBP_NaEventTotalPointView_C_UpdatePoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventTotalPointView.WBP_NaEventTotalPointView_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBNaEventData*                              Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_NaEventTotalPointView_C::SetData(class USBNaEventData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventTotalPointView.WBP_NaEventTotalPointView_C.SetData");
		
		UWBP_NaEventTotalPointView_C_SetData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventTotalPointView.WBP_NaEventTotalPointView_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_NaEventTotalPointView_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventTotalPointView.WBP_NaEventTotalPointView_C.PreConstruct");
		
		UWBP_NaEventTotalPointView_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventTotalPointView.WBP_NaEventTotalPointView_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_NaEventTotalPointView_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventTotalPointView.WBP_NaEventTotalPointView_C.Construct");
		
		UWBP_NaEventTotalPointView_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventTotalPointView.WBP_NaEventTotalPointView_C.Destruct
	 * 		Flags  -> ()
	 */
	void UWBP_NaEventTotalPointView_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventTotalPointView.WBP_NaEventTotalPointView_C.Destruct");
		
		UWBP_NaEventTotalPointView_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventTotalPointView.WBP_NaEventTotalPointView_C.OnUpdateEventInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_NaEventTotalPointView_C::OnUpdateEventInfo(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventTotalPointView.WBP_NaEventTotalPointView_C.OnUpdateEventInfo");
		
		UWBP_NaEventTotalPointView_C_OnUpdateEventInfo_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_NaEventTotalPointView.WBP_NaEventTotalPointView_C.ExecuteUbergraph_WBP_NaEventTotalPointView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_NaEventTotalPointView_C::ExecuteUbergraph_WBP_NaEventTotalPointView(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_NaEventTotalPointView.WBP_NaEventTotalPointView_C.ExecuteUbergraph_WBP_NaEventTotalPointView");
		
		UWBP_NaEventTotalPointView_C_ExecuteUbergraph_WBP_NaEventTotalPointView_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_NaEventTotalPointView_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_NaEventTotalPointView_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_NaEventTotalPointView.WBP_NaEventTotalPointView_C");
		return ptr;
	}

}


