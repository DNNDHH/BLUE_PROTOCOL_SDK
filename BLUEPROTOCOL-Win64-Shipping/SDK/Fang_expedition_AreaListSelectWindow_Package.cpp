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
	 * 		Name   -> Function Fang_expedition_AreaListSelectWindow.Fang_expedition_AreaListSelectWindow_C.SetStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBFang_expeditionStatus                           Status                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               New                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFang_expedition_AreaListSelectWindow_C::SetStatus(ESBFang_expeditionStatus Status, bool Time, bool New)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaListSelectWindow.Fang_expedition_AreaListSelectWindow_C.SetStatus");
		
		UFang_expedition_AreaListSelectWindow_C_SetStatus_Params params {};
		params.Status = Status;
		params.Time = Time;
		params.New = New;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaListSelectWindow.Fang_expedition_AreaListSelectWindow_C.GetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBFang_expeditionAreaData                  AreaData                                                   (Parm, OutParm)
	 */
	void UFang_expedition_AreaListSelectWindow_C::GetData(int32_t Index, struct FSBFang_expeditionAreaData* AreaData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaListSelectWindow.Fang_expedition_AreaListSelectWindow_C.GetData");
		
		UFang_expedition_AreaListSelectWindow_C_GetData_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AreaData != nullptr)
			*AreaData = params.AreaData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaListSelectWindow.Fang_expedition_AreaListSelectWindow_C.CB_OnClick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_AreaListSelectWindow_C::CB_OnClick(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaListSelectWindow.Fang_expedition_AreaListSelectWindow_C.CB_OnClick");
		
		UFang_expedition_AreaListSelectWindow_C_CB_OnClick_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaListSelectWindow.Fang_expedition_AreaListSelectWindow_C.AddData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBFang_expeditionAreaData                  AreaData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UFang_expedition_AreaListSelectWindow_C::AddData(const struct FSBFang_expeditionAreaData& AreaData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaListSelectWindow.Fang_expedition_AreaListSelectWindow_C.AddData");
		
		UFang_expedition_AreaListSelectWindow_C_AddData_Params params {};
		params.AreaData = AreaData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaListSelectWindow.Fang_expedition_AreaListSelectWindow_C.Clear
	 * 		Flags  -> ()
	 */
	void UFang_expedition_AreaListSelectWindow_C::Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaListSelectWindow.Fang_expedition_AreaListSelectWindow_C.Clear");
		
		UFang_expedition_AreaListSelectWindow_C_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaListSelectWindow.Fang_expedition_AreaListSelectWindow_C.BndEvt__Fang_expedition_AreaListSelectWindow_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_AreaListSelectWindow_C::BndEvt__Fang_expedition_AreaListSelectWindow_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaListSelectWindow.Fang_expedition_AreaListSelectWindow_C.BndEvt__Fang_expedition_AreaListSelectWindow_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature");
		
		UFang_expedition_AreaListSelectWindow_C_BndEvt__Fang_expedition_AreaListSelectWindow_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaListSelectWindow.Fang_expedition_AreaListSelectWindow_C.ExecuteUbergraph_Fang_expedition_AreaListSelectWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_AreaListSelectWindow_C::ExecuteUbergraph_Fang_expedition_AreaListSelectWindow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaListSelectWindow.Fang_expedition_AreaListSelectWindow_C.ExecuteUbergraph_Fang_expedition_AreaListSelectWindow");
		
		UFang_expedition_AreaListSelectWindow_C_ExecuteUbergraph_Fang_expedition_AreaListSelectWindow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaListSelectWindow.Fang_expedition_AreaListSelectWindow_C.OnCloseButtonClick__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_AreaListSelectWindow_C::OnCloseButtonClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaListSelectWindow.Fang_expedition_AreaListSelectWindow_C.OnCloseButtonClick__DelegateSignature");
		
		UFang_expedition_AreaListSelectWindow_C_OnCloseButtonClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_AreaListSelectWindow.Fang_expedition_AreaListSelectWindow_C.OnListItemClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_AreaListSelectWindow_C::OnListItemClick__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_AreaListSelectWindow.Fang_expedition_AreaListSelectWindow_C.OnListItemClick__DelegateSignature");
		
		UFang_expedition_AreaListSelectWindow_C_OnListItemClick__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFang_expedition_AreaListSelectWindow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFang_expedition_AreaListSelectWindow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Fang_expedition_AreaListSelectWindow.Fang_expedition_AreaListSelectWindow_C");
		return ptr;
	}

}


