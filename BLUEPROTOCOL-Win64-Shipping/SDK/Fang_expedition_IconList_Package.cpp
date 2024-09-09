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
	 * 		Name   -> Function Fang_expedition_IconList.Fang_expedition_IconList_C.IsActiveSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Select                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Active                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFang_expedition_IconList_C::IsActiveSelect(bool Select, bool* Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_IconList.Fang_expedition_IconList_C.IsActiveSelect");
		
		UFang_expedition_IconList_C_IsActiveSelect_Params params {};
		params.Select = Select;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Active != nullptr)
			*Active = params.Active;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_IconList.Fang_expedition_IconList_C.SetIconSelectLog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFang_expedition_IconList_C::SetIconSelectLog(bool On)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_IconList.Fang_expedition_IconList_C.SetIconSelectLog");
		
		UFang_expedition_IconList_C_SetIconSelectLog_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_IconList.Fang_expedition_IconList_C.InitFangList_UniqueId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MaxFangCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FString>                              UniqueId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UFang_expedition_IconList_C::InitFangList_UniqueId(int32_t MaxFangCount, TArray<class FString>* UniqueId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_IconList.Fang_expedition_IconList_C.InitFangList_UniqueId");
		
		UFang_expedition_IconList_C_InitFangList_UniqueId_Params params {};
		params.MaxFangCount = MaxFangCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UniqueId != nullptr)
			*UniqueId = params.UniqueId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_IconList.Fang_expedition_IconList_C.CB_SortChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBItemSortType                                    SortType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_IconList_C::CB_SortChange(ESBItemSortType SortType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_IconList.Fang_expedition_IconList_C.CB_SortChange");
		
		UFang_expedition_IconList_C_CB_SortChange_Params params {};
		params.SortType = SortType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_IconList.Fang_expedition_IconList_C.CB_FilterChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FFilterGroup>                        Filter                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UFang_expedition_IconList_C::CB_FilterChange(TArray<struct FFilterGroup>* Filter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_IconList.Fang_expedition_IconList_C.CB_FilterChange");
		
		UFang_expedition_IconList_C_CB_FilterChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filter != nullptr)
			*Filter = params.Filter;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_IconList.Fang_expedition_IconList_C.CallFangSelectChange
	 * 		Flags  -> ()
	 */
	void UFang_expedition_IconList_C::CallFangSelectChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_IconList.Fang_expedition_IconList_C.CallFangSelectChange");
		
		UFang_expedition_IconList_C_CallFangSelectChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_IconList.Fang_expedition_IconList_C.UpdateIconVisibleStatus
	 * 		Flags  -> ()
	 */
	void UFang_expedition_IconList_C::UpdateIconVisibleStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_IconList.Fang_expedition_IconList_C.UpdateIconVisibleStatus");
		
		UFang_expedition_IconList_C_UpdateIconVisibleStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_IconList.Fang_expedition_IconList_C.ClearIconData
	 * 		Flags  -> ()
	 */
	void UFang_expedition_IconList_C::ClearIconData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_IconList.Fang_expedition_IconList_C.ClearIconData");
		
		UFang_expedition_IconList_C_ClearIconData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_IconList.Fang_expedition_IconList_C.CB_OnIconSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItemIconBtn_C*                              SelectIconBtn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_IconList_C::CB_OnIconSelect(class UItemIconBtn_C* SelectIconBtn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_IconList.Fang_expedition_IconList_C.CB_OnIconSelect");
		
		UFang_expedition_IconList_C_CB_OnIconSelect_Params params {};
		params.SelectIconBtn = SelectIconBtn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_IconList.Fang_expedition_IconList_C.InitFangList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MaxFangCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Reset                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFang_expedition_IconList_C::InitFangList(int32_t MaxFangCount, bool Reset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_IconList.Fang_expedition_IconList_C.InitFangList");
		
		UFang_expedition_IconList_C_InitFangList_Params params {};
		params.MaxFangCount = MaxFangCount;
		params.Reset = Reset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_IconList.Fang_expedition_IconList_C.Construct
	 * 		Flags  -> ()
	 */
	void UFang_expedition_IconList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_IconList.Fang_expedition_IconList_C.Construct");
		
		UFang_expedition_IconList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_IconList.Fang_expedition_IconList_C.BindEvent
	 * 		Flags  -> ()
	 */
	void UFang_expedition_IconList_C::BindEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_IconList.Fang_expedition_IconList_C.BindEvent");
		
		UFang_expedition_IconList_C_BindEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_IconList.Fang_expedition_IconList_C.UnBindEvent
	 * 		Flags  -> ()
	 */
	void UFang_expedition_IconList_C::UnBindEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_IconList.Fang_expedition_IconList_C.UnBindEvent");
		
		UFang_expedition_IconList_C_UnBindEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_IconList.Fang_expedition_IconList_C.Destruct
	 * 		Flags  -> ()
	 */
	void UFang_expedition_IconList_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_IconList.Fang_expedition_IconList_C.Destruct");
		
		UFang_expedition_IconList_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_IconList.Fang_expedition_IconList_C.BndEvt__Fang_expedition_IconList_ResetButton1_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_IconList_C::BndEvt__Fang_expedition_IconList_ResetButton1_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_IconList.Fang_expedition_IconList_C.BndEvt__Fang_expedition_IconList_ResetButton1_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");
		
		UFang_expedition_IconList_C_BndEvt__Fang_expedition_IconList_ResetButton1_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_IconList.Fang_expedition_IconList_C.ExecuteUbergraph_Fang_expedition_IconList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_IconList_C::ExecuteUbergraph_Fang_expedition_IconList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_IconList.Fang_expedition_IconList_C.ExecuteUbergraph_Fang_expedition_IconList");
		
		UFang_expedition_IconList_C_ExecuteUbergraph_Fang_expedition_IconList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_IconList.Fang_expedition_IconList_C.OnFangSelectChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              UniqueIds                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UFang_expedition_IconList_C::OnFangSelectChange__DelegateSignature(TArray<class FString>* UniqueIds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_IconList.Fang_expedition_IconList_C.OnFangSelectChange__DelegateSignature");
		
		UFang_expedition_IconList_C_OnFangSelectChange__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UniqueIds != nullptr)
			*UniqueIds = params.UniqueIds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFang_expedition_IconList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFang_expedition_IconList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Fang_expedition_IconList.Fang_expedition_IconList_C");
		return ptr;
	}

}


