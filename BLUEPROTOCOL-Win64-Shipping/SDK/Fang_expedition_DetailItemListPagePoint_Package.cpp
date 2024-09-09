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
	 * 		Name   -> Function Fang_expedition_DetailItemListPagePoint.Fang_expedition_DetailItemListPagePoint_C.SetActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFang_expedition_DetailItemListPagePoint_C::SetActive(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailItemListPagePoint.Fang_expedition_DetailItemListPagePoint_C.SetActive");
		
		UFang_expedition_DetailItemListPagePoint_C_SetActive_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailItemListPagePoint.Fang_expedition_DetailItemListPagePoint_C.BndEvt__Fang_expedition_DetailItemListPagePoint_SBButton_C_88_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFang_expedition_DetailItemListPagePoint_C::BndEvt__Fang_expedition_DetailItemListPagePoint_SBButton_C_88_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailItemListPagePoint.Fang_expedition_DetailItemListPagePoint_C.BndEvt__Fang_expedition_DetailItemListPagePoint_SBButton_C_88_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UFang_expedition_DetailItemListPagePoint_C_BndEvt__Fang_expedition_DetailItemListPagePoint_SBButton_C_88_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailItemListPagePoint.Fang_expedition_DetailItemListPagePoint_C.ExecuteUbergraph_Fang_expedition_DetailItemListPagePoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DetailItemListPagePoint_C::ExecuteUbergraph_Fang_expedition_DetailItemListPagePoint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailItemListPagePoint.Fang_expedition_DetailItemListPagePoint_C.ExecuteUbergraph_Fang_expedition_DetailItemListPagePoint");
		
		UFang_expedition_DetailItemListPagePoint_C_ExecuteUbergraph_Fang_expedition_DetailItemListPagePoint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_DetailItemListPagePoint.Fang_expedition_DetailItemListPagePoint_C.OnButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_DetailItemListPagePoint_C::OnButtonClicked__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_DetailItemListPagePoint.Fang_expedition_DetailItemListPagePoint_C.OnButtonClicked__DelegateSignature");
		
		UFang_expedition_DetailItemListPagePoint_C_OnButtonClicked__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFang_expedition_DetailItemListPagePoint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFang_expedition_DetailItemListPagePoint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Fang_expedition_DetailItemListPagePoint.Fang_expedition_DetailItemListPagePoint_C");
		return ptr;
	}

}


