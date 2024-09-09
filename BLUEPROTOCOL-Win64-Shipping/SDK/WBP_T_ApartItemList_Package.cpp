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
	 * 		Name   -> Function WBP_T_ApartItemList.WBP_T_ApartItemList_C.IsOverWarning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Over                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_T_ApartItemList_C::IsOverWarning(bool* Over)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartItemList.WBP_T_ApartItemList_C.IsOverWarning");
		
		UWBP_T_ApartItemList_C_IsOverWarning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Over != nullptr)
			*Over = params.Over;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartItemList.WBP_T_ApartItemList_C.Reset
	 * 		Flags  -> ()
	 */
	void UWBP_T_ApartItemList_C::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartItemList.WBP_T_ApartItemList_C.Reset");
		
		UWBP_T_ApartItemList_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartItemList.WBP_T_ApartItemList_C.GetItemCase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_T_ApartItem_C*                          Output_Get                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_T_ApartItemList_C::GetItemCase(class UWBP_T_ApartItem_C** Output_Get)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartItemList.WBP_T_ApartItemList_C.GetItemCase");
		
		UWBP_T_ApartItemList_C_GetItemCase_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output_Get != nullptr)
			*Output_Get = params.Output_Get;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartItemList.WBP_T_ApartItemList_C.Is Item Warning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Warning                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      WarningString                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_T_ApartItemList_C::IsItemWarning(bool* Warning, class FString* WarningString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartItemList.WBP_T_ApartItemList_C.Is Item Warning");
		
		UWBP_T_ApartItemList_C_IsItemWarning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Warning != nullptr)
			*Warning = params.Warning;
		if (WarningString != nullptr)
			*WarningString = params.WarningString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartItemList.WBP_T_ApartItemList_C.UpdateWarning
	 * 		Flags  -> ()
	 */
	void UWBP_T_ApartItemList_C::UpdateWarning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartItemList.WBP_T_ApartItemList_C.UpdateWarning");
		
		UWBP_T_ApartItemList_C_UpdateWarning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartItemList.WBP_T_ApartItemList_C.GetToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* UWBP_T_ApartItemList_C::GetToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartItemList.WBP_T_ApartItemList_C.GetToolTipWidget_1");
		
		UWBP_T_ApartItemList_C_GetToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartItemList.WBP_T_ApartItemList_C.BndEvt__WBP_T_ApartItemList_BtnMove_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_T_ApartItemList_C::BndEvt__WBP_T_ApartItemList_BtnMove_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartItemList.WBP_T_ApartItemList_C.BndEvt__WBP_T_ApartItemList_BtnMove_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");
		
		UWBP_T_ApartItemList_C_BndEvt__WBP_T_ApartItemList_BtnMove_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartItemList.WBP_T_ApartItemList_C.SetMaxData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Max                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_T_ApartItemList_C::SetMaxData(int32_t Max)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartItemList.WBP_T_ApartItemList_C.SetMaxData");
		
		UWBP_T_ApartItemList_C_SetMaxData_Params params {};
		params.Max = Max;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartItemList.WBP_T_ApartItemList_C.SetSelectItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FInventoryItemData>                  SelectItemList                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_T_ApartItemList_C::SetSelectItem(TArray<struct FInventoryItemData> SelectItemList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartItemList.WBP_T_ApartItemList_C.SetSelectItem");
		
		UWBP_T_ApartItemList_C_SetSelectItem_Params params {};
		params.SelectItemList = SelectItemList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartItemList.WBP_T_ApartItemList_C.SetActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_T_ApartItemList_C::SetActive(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartItemList.WBP_T_ApartItemList_C.SetActive");
		
		UWBP_T_ApartItemList_C_SetActive_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartItemList.WBP_T_ApartItemList_C.ExecuteUbergraph_WBP_T_ApartItemList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_T_ApartItemList_C::ExecuteUbergraph_WBP_T_ApartItemList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartItemList.WBP_T_ApartItemList_C.ExecuteUbergraph_WBP_T_ApartItemList");
		
		UWBP_T_ApartItemList_C_ExecuteUbergraph_WBP_T_ApartItemList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_T_ApartItemList.WBP_T_ApartItemList_C.OnApart__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_T_ApartItemList_C::OnApart__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_T_ApartItemList.WBP_T_ApartItemList_C.OnApart__DelegateSignature");
		
		UWBP_T_ApartItemList_C_OnApart__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_T_ApartItemList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_T_ApartItemList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_T_ApartItemList.WBP_T_ApartItemList_C");
		return ptr;
	}

}


