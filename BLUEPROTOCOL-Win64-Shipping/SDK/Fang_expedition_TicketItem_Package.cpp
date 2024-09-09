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
	 * 		Name   -> Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.UpdateTicketNum
	 * 		Flags  -> ()
	 */
	void UFang_expedition_TicketItem_C::UpdateTicketNum()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.UpdateTicketNum");
		
		UFang_expedition_TicketItem_C_UpdateTicketNum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.SetCheckState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFang_expedition_TicketItem_C::SetCheckState(bool State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.SetCheckState");
		
		UFang_expedition_TicketItem_C_SetCheckState_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.Initialize
	 * 		Flags  -> ()
	 */
	void UFang_expedition_TicketItem_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.Initialize");
		
		UFang_expedition_TicketItem_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.GetSelectState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSelected                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            TokenID                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_TicketItem_C::GetSelectState(bool* IsSelected, int32_t* TokenID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.GetSelectState");
		
		UFang_expedition_TicketItem_C_GetSelectState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsSelected != nullptr)
			*IsSelected = params.IsSelected;
		if (TokenID != nullptr)
			*TokenID = params.TokenID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.SetDisableTextVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Disable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFang_expedition_TicketItem_C::SetDisableTextVisibility(bool Disable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.SetDisableTextVisibility");
		
		UFang_expedition_TicketItem_C_SetDisableTextVisibility_Params params {};
		params.Disable = Disable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Select                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Disable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFang_expedition_TicketItem_C::SetData(int32_t ID, bool Select, bool Disable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.SetData");
		
		UFang_expedition_TicketItem_C_SetData_Params params {};
		params.ID = ID;
		params.Select = Select;
		params.Disable = Disable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UFang_expedition_TicketItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.Construct");
		
		UFang_expedition_TicketItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.BndEvt__Fang_expedition_TicketItem_CheckBox_37_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFang_expedition_TicketItem_C::BndEvt__Fang_expedition_TicketItem_CheckBox_37_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.BndEvt__Fang_expedition_TicketItem_CheckBox_37_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UFang_expedition_TicketItem_C_BndEvt__Fang_expedition_TicketItem_CheckBox_37_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.Destruct
	 * 		Flags  -> ()
	 */
	void UFang_expedition_TicketItem_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.Destruct");
		
		UFang_expedition_TicketItem_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.ExecuteUbergraph_Fang_expedition_TicketItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_TicketItem_C::ExecuteUbergraph_Fang_expedition_TicketItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.ExecuteUbergraph_Fang_expedition_TicketItem");
		
		UFang_expedition_TicketItem_C_ExecuteUbergraph_Fang_expedition_TicketItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.OnCheckStateChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CheckState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_TicketItem_C::OnCheckStateChange__DelegateSignature(bool CheckState, int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_TicketItem.Fang_expedition_TicketItem_C.OnCheckStateChange__DelegateSignature");
		
		UFang_expedition_TicketItem_C_OnCheckStateChange__DelegateSignature_Params params {};
		params.CheckState = CheckState;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFang_expedition_TicketItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFang_expedition_TicketItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Fang_expedition_TicketItem.Fang_expedition_TicketItem_C");
		return ptr;
	}

}


