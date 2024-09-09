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
	 * 		Name   -> Function UMG_AdminWindowTemplate.UMG_AdminWindowTemplate_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_AdminWindowTemplate_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_AdminWindowTemplate.UMG_AdminWindowTemplate_C.PreConstruct");
		
		UUMG_AdminWindowTemplate_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_AdminWindowTemplate.UMG_AdminWindowTemplate_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 OwnerWidget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_AdminWindowTemplate_C::Init(class UUserWidget* OwnerWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_AdminWindowTemplate.UMG_AdminWindowTemplate_C.Init");
		
		UUMG_AdminWindowTemplate_C_Init_Params params {};
		params.OwnerWidget = OwnerWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_AdminWindowTemplate.UMG_AdminWindowTemplate_C.BndEvt__UMG_AdminWindowTemplate_CmnClose02_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_AdminWindowTemplate_C::BndEvt__UMG_AdminWindowTemplate_CmnClose02_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_AdminWindowTemplate.UMG_AdminWindowTemplate_C.BndEvt__UMG_AdminWindowTemplate_CmnClose02_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature");
		
		UUMG_AdminWindowTemplate_C_BndEvt__UMG_AdminWindowTemplate_CmnClose02_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_AdminWindowTemplate.UMG_AdminWindowTemplate_C.ExecuteUbergraph_UMG_AdminWindowTemplate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_AdminWindowTemplate_C::ExecuteUbergraph_UMG_AdminWindowTemplate(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_AdminWindowTemplate.UMG_AdminWindowTemplate_C.ExecuteUbergraph_UMG_AdminWindowTemplate");
		
		UUMG_AdminWindowTemplate_C_ExecuteUbergraph_UMG_AdminWindowTemplate_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_AdminWindowTemplate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_AdminWindowTemplate_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_AdminWindowTemplate.UMG_AdminWindowTemplate_C");
		return ptr;
	}

}


