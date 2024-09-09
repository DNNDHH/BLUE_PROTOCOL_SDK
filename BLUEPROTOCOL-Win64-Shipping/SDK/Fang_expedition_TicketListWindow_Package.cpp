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
	 * 		Name   -> Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.CheckTicketNum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InId                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OutIsEnable                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFang_expedition_TicketListWindow_C::CheckTicketNum(int32_t InId, bool* OutIsEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.CheckTicketNum");
		
		UFang_expedition_TicketListWindow_C_CheckTicketNum_Params params {};
		params.InId = InId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsEnable != nullptr)
			*OutIsEnable = params.OutIsEnable;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.SetTokenSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    SelectTokenId                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FSBFang_expeditionAreaData                  AreaData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UFang_expedition_TicketListWindow_C::SetTokenSelect(TArray<int32_t>* SelectTokenId, const struct FSBFang_expeditionAreaData& AreaData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.SetTokenSelect");
		
		UFang_expedition_TicketListWindow_C_SetTokenSelect_Params params {};
		params.AreaData = AreaData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SelectTokenId != nullptr)
			*SelectTokenId = params.SelectTokenId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.CloseWork
	 * 		Flags  -> ()
	 */
	void UFang_expedition_TicketListWindow_C::CloseWork()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.CloseWork");
		
		UFang_expedition_TicketListWindow_C_CloseWork_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.CB_EnableButtonWork
	 * 		Flags  -> ()
	 */
	void UFang_expedition_TicketListWindow_C::CB_EnableButtonWork()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.CB_EnableButtonWork");
		
		UFang_expedition_TicketListWindow_C_CB_EnableButtonWork_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.Initialize
	 * 		Flags  -> ()
	 */
	void UFang_expedition_TicketListWindow_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.Initialize");
		
		UFang_expedition_TicketListWindow_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.CB_OnCheckStateChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_TicketListWindow_C::CB_OnCheckStateChange(bool State, int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.CB_OnCheckStateChange");
		
		UFang_expedition_TicketListWindow_C_CB_OnCheckStateChange_Params params {};
		params.State = State;
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.Construct
	 * 		Flags  -> ()
	 */
	void UFang_expedition_TicketListWindow_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.Construct");
		
		UFang_expedition_TicketListWindow_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.Destruct
	 * 		Flags  -> ()
	 */
	void UFang_expedition_TicketListWindow_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.Destruct");
		
		UFang_expedition_TicketListWindow_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.BndEvt__Fang_expedition_TicketListWindow_Btn_OK_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_TicketListWindow_C::BndEvt__Fang_expedition_TicketListWindow_Btn_OK_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.BndEvt__Fang_expedition_TicketListWindow_Btn_OK_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");
		
		UFang_expedition_TicketListWindow_C_BndEvt__Fang_expedition_TicketListWindow_Btn_OK_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.BndEvt__Fang_expedition_TicketListWindow_CmnClose01_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_TicketListWindow_C::BndEvt__Fang_expedition_TicketListWindow_CmnClose01_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.BndEvt__Fang_expedition_TicketListWindow_CmnClose01_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature");
		
		UFang_expedition_TicketListWindow_C_BndEvt__Fang_expedition_TicketListWindow_CmnClose01_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.ExecuteUbergraph_Fang_expedition_TicketListWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_TicketListWindow_C::ExecuteUbergraph_Fang_expedition_TicketListWindow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.ExecuteUbergraph_Fang_expedition_TicketListWindow");
		
		UFang_expedition_TicketListWindow_C_ExecuteUbergraph_Fang_expedition_TicketListWindow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    SelectTokenIds                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UFang_expedition_TicketListWindow_C::OnClose__DelegateSignature(TArray<int32_t>* SelectTokenIds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C.OnClose__DelegateSignature");
		
		UFang_expedition_TicketListWindow_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SelectTokenIds != nullptr)
			*SelectTokenIds = params.SelectTokenIds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFang_expedition_TicketListWindow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFang_expedition_TicketListWindow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C");
		return ptr;
	}

}


