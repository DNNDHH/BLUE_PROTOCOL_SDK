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
	 * 		Name   -> Function Fang_expedition_DungeonList.Fang_expedition_DungeonList_C.ShowEmptyText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InParam                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFang_expedition_DungeonList_C::ShowEmptyText(bool InParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DungeonList.Fang_expedition_DungeonList_C.ShowEmptyText");
		
		UFang_expedition_DungeonList_C_ShowEmptyText_Params params {};
		params.InParam = InParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DungeonList.Fang_expedition_DungeonList_C.CB_ItemSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DungeonList_C::CB_ItemSelect(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DungeonList.Fang_expedition_DungeonList_C.CB_ItemSelect");
		
		UFang_expedition_DungeonList_C_CB_ItemSelect_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DungeonList.Fang_expedition_DungeonList_C.Clear
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DungeonList_C::Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DungeonList.Fang_expedition_DungeonList_C.Clear");
		
		UFang_expedition_DungeonList_C_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DungeonList.Fang_expedition_DungeonList_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBFang_expeditionAreaData                  AreaData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UFang_expedition_DungeonList_C::SetData(const struct FSBFang_expeditionAreaData& AreaData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DungeonList.Fang_expedition_DungeonList_C.SetData");
		
		UFang_expedition_DungeonList_C_SetData_Params params {};
		params.AreaData = AreaData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DungeonList.Fang_expedition_DungeonList_C.BndEvt__Fang_expedition_DungeonList_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DungeonList_C::BndEvt__Fang_expedition_DungeonList_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DungeonList.Fang_expedition_DungeonList_C.BndEvt__Fang_expedition_DungeonList_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature");
		
		UFang_expedition_DungeonList_C_BndEvt__Fang_expedition_DungeonList_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DungeonList.Fang_expedition_DungeonList_C.ExecuteUbergraph_Fang_expedition_DungeonList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DungeonList_C::ExecuteUbergraph_Fang_expedition_DungeonList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DungeonList.Fang_expedition_DungeonList_C.ExecuteUbergraph_Fang_expedition_DungeonList");
		
		UFang_expedition_DungeonList_C_ExecuteUbergraph_Fang_expedition_DungeonList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DungeonList.Fang_expedition_DungeonList_C.OnCloseButtonPress__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DungeonList_C::OnCloseButtonPress__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DungeonList.Fang_expedition_DungeonList_C.OnCloseButtonPress__DelegateSignature");
		
		UFang_expedition_DungeonList_C_OnCloseButtonPress__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DungeonList.Fang_expedition_DungeonList_C.OnDungeonAreaSelect__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBFang_expeditionAreaData                  AreaData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UFang_expedition_DungeonList_C::OnDungeonAreaSelect__DelegateSignature(int32_t Index, const struct FSBFang_expeditionAreaData& AreaData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DungeonList.Fang_expedition_DungeonList_C.OnDungeonAreaSelect__DelegateSignature");
		
		UFang_expedition_DungeonList_C_OnDungeonAreaSelect__DelegateSignature_Params params {};
		params.Index = Index;
		params.AreaData = AreaData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFang_expedition_DungeonList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFang_expedition_DungeonList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Fang_expedition_DungeonList.Fang_expedition_DungeonList_C");
		return ptr;
	}

}


