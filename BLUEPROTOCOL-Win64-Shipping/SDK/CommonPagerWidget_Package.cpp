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
	 * 		Name   -> Function CommonPagerWidget.CommonPagerWidget_C.SetBtnEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Fowerd                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonPagerWidget_C::SetBtnEnable(bool Fowerd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPagerWidget.CommonPagerWidget_C.SetBtnEnable");
		
		UCommonPagerWidget_C_SetBtnEnable_Params params {};
		params.Fowerd = Fowerd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPagerWidget.CommonPagerWidget_C.BndEvt__Back_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommonPagerWidget_C::BndEvt__Back_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPagerWidget.CommonPagerWidget_C.BndEvt__Back_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UCommonPagerWidget_C_BndEvt__Back_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPagerWidget.CommonPagerWidget_C.BndEvt__Fowerd_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCommonPagerWidget_C::BndEvt__Fowerd_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPagerWidget.CommonPagerWidget_C.BndEvt__Fowerd_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature");
		
		UCommonPagerWidget_C_BndEvt__Fowerd_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPagerWidget.CommonPagerWidget_C.InitializePage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PageCurrent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PageMin                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PageMax                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonPagerWidget_C::InitializePage(int32_t PageCurrent, int32_t PageMin, int32_t PageMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPagerWidget.CommonPagerWidget_C.InitializePage");
		
		UCommonPagerWidget_C_InitializePage_Params params {};
		params.PageCurrent = PageCurrent;
		params.PageMin = PageMin;
		params.PageMax = PageMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPagerWidget.CommonPagerWidget_C.UpdetaPage
	 * 		Flags  -> ()
	 */
	void UCommonPagerWidget_C::UpdetaPage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPagerWidget.CommonPagerWidget_C.UpdetaPage");
		
		UCommonPagerWidget_C_UpdetaPage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPagerWidget.CommonPagerWidget_C.ExecuteUbergraph_CommonPagerWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonPagerWidget_C::ExecuteUbergraph_CommonPagerWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPagerWidget.CommonPagerWidget_C.ExecuteUbergraph_CommonPagerWidget");
		
		UCommonPagerWidget_C_ExecuteUbergraph_CommonPagerWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonPagerWidget.CommonPagerWidget_C.OnPageChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PageCurrent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonPagerWidget_C::OnPageChange__DelegateSignature(int32_t PageCurrent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonPagerWidget.CommonPagerWidget_C.OnPageChange__DelegateSignature");
		
		UCommonPagerWidget_C_OnPageChange__DelegateSignature_Params params {};
		params.PageCurrent = PageCurrent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonPagerWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonPagerWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommonPagerWidget.CommonPagerWidget_C");
		return ptr;
	}

}


