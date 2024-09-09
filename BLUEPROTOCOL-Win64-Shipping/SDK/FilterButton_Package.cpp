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
	 * 		Name   -> Function FilterButton.FilterButton_C.DeleteWindow
	 * 		Flags  -> ()
	 */
	void UFilterButton_C::DeleteWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FilterButton.FilterButton_C.DeleteWindow");
		
		UFilterButton_C_DeleteWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FilterButton.FilterButton_C.CreateWindow
	 * 		Flags  -> ()
	 */
	void UFilterButton_C::CreateWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FilterButton.FilterButton_C.CreateWindow");
		
		UFilterButton_C_CreateWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FilterButton.FilterButton_C.ChangeFilterType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFilter_Type                                       FilterType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFilterButton_C::ChangeFilterType(EFilter_Type FilterType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FilterButton.FilterButton_C.ChangeFilterType");
		
		UFilterButton_C_ChangeFilterType_Params params {};
		params.FilterType = FilterType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FilterButton.FilterButton_C.SetAttachTargetCanvas
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCanvasPanel*                                AttachTargetCanvas                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFilterButton_C::SetAttachTargetCanvas(class UCanvasPanel* AttachTargetCanvas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FilterButton.FilterButton_C.SetAttachTargetCanvas");
		
		UFilterButton_C_SetAttachTargetCanvas_Params params {};
		params.AttachTargetCanvas = AttachTargetCanvas;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FilterButton.FilterButton_C.BndEvt__SB_FilterOpen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFilterButton_C::BndEvt__SB_FilterOpen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FilterButton.FilterButton_C.BndEvt__SB_FilterOpen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UFilterButton_C_BndEvt__SB_FilterOpen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FilterButton.FilterButton_C.ApplyFilters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FFilterGroup>                        Filters                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UFilterButton_C::ApplyFilters(TArray<struct FFilterGroup>* Filters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FilterButton.FilterButton_C.ApplyFilters");
		
		UFilterButton_C_ApplyFilters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filters != nullptr)
			*Filters = params.Filters;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FilterButton.FilterButton_C.CloseWindow
	 * 		Flags  -> ()
	 */
	void UFilterButton_C::CloseWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FilterButton.FilterButton_C.CloseWindow");
		
		UFilterButton_C_CloseWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FilterButton.FilterButton_C.Destruct
	 * 		Flags  -> ()
	 */
	void UFilterButton_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FilterButton.FilterButton_C.Destruct");
		
		UFilterButton_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FilterButton.FilterButton_C.Release
	 * 		Flags  -> ()
	 */
	void UFilterButton_C::Release()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FilterButton.FilterButton_C.Release");
		
		UFilterButton_C_Release_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FilterButton.FilterButton_C.OpenWindow
	 * 		Flags  -> ()
	 */
	void UFilterButton_C::OpenWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FilterButton.FilterButton_C.OpenWindow");
		
		UFilterButton_C_OpenWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FilterButton.FilterButton_C.BindWindow
	 * 		Flags  -> ()
	 */
	void UFilterButton_C::BindWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FilterButton.FilterButton_C.BindWindow");
		
		UFilterButton_C_BindWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FilterButton.FilterButton_C.UnbindWindow
	 * 		Flags  -> ()
	 */
	void UFilterButton_C::UnbindWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FilterButton.FilterButton_C.UnbindWindow");
		
		UFilterButton_C_UnbindWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FilterButton.FilterButton_C.ExecuteUbergraph_FilterButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFilterButton_C::ExecuteUbergraph_FilterButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FilterButton.FilterButton_C.ExecuteUbergraph_FilterButton");
		
		UFilterButton_C_ExecuteUbergraph_FilterButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FilterButton.FilterButton_C.OnApplyFilter__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FFilterGroup>                        Filters                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UFilterButton_C::OnApplyFilter__DelegateSignature(TArray<struct FFilterGroup>* Filters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FilterButton.FilterButton_C.OnApplyFilter__DelegateSignature");
		
		UFilterButton_C_OnApplyFilter__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filters != nullptr)
			*Filters = params.Filters;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFilterButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFilterButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FilterButton.FilterButton_C");
		return ptr;
	}

}


