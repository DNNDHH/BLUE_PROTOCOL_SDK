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
	 * 		Name   -> Function Filter_AdventureBoard.Filter_AdventureBoard_C.IsFilterActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsActive                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFilter_AdventureBoard_C::IsFilterActive(int32_t InIndex, bool* IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Filter_AdventureBoard.Filter_AdventureBoard_C.IsFilterActive");
		
		UFilter_AdventureBoard_C_IsFilterActive_Params params {};
		params.InIndex = InIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsActive != nullptr)
			*IsActive = params.IsActive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Filter_AdventureBoard.Filter_AdventureBoard_C.CreateFilterList
	 * 		Flags  -> ()
	 */
	void UFilter_AdventureBoard_C::CreateFilterList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Filter_AdventureBoard.Filter_AdventureBoard_C.CreateFilterList");
		
		UFilter_AdventureBoard_C_CreateFilterList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Filter_AdventureBoard.Filter_AdventureBoard_C.Construct
	 * 		Flags  -> ()
	 */
	void UFilter_AdventureBoard_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Filter_AdventureBoard.Filter_AdventureBoard_C.Construct");
		
		UFilter_AdventureBoard_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Filter_AdventureBoard.Filter_AdventureBoard_C.BndEvt__Filter_AdventureBoard_FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UFilterRadioButton_C*                        RadioButton                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFilter_AdventureBoard_C::BndEvt__Filter_AdventureBoard_FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature(bool IsChecked, class UFilterRadioButton_C* RadioButton, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Filter_AdventureBoard.Filter_AdventureBoard_C.BndEvt__Filter_AdventureBoard_FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature");
		
		UFilter_AdventureBoard_C_BndEvt__Filter_AdventureBoard_FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		params.RadioButton = RadioButton;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Filter_AdventureBoard.Filter_AdventureBoard_C.ResetAll
	 * 		Flags  -> ()
	 */
	void UFilter_AdventureBoard_C::ResetAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Filter_AdventureBoard.Filter_AdventureBoard_C.ResetAll");
		
		UFilter_AdventureBoard_C_ResetAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Filter_AdventureBoard.Filter_AdventureBoard_C.ExecuteUbergraph_Filter_AdventureBoard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFilter_AdventureBoard_C::ExecuteUbergraph_Filter_AdventureBoard(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Filter_AdventureBoard.Filter_AdventureBoard_C.ExecuteUbergraph_Filter_AdventureBoard");
		
		UFilter_AdventureBoard_C_ExecuteUbergraph_Filter_AdventureBoard_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFilter_AdventureBoard_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFilter_AdventureBoard_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Filter_AdventureBoard.Filter_AdventureBoard_C");
		return ptr;
	}

}


