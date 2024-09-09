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
	 * 		Name   -> Function Filter_ProtectorEquipPosition.Filter_ProtectorEquipPosition_C.Generate
	 * 		Flags  -> ()
	 */
	void UFilter_ProtectorEquipPosition_C::Generate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Filter_ProtectorEquipPosition.Filter_ProtectorEquipPosition_C.Generate");
		
		UFilter_ProtectorEquipPosition_C_Generate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Filter_ProtectorEquipPosition.Filter_ProtectorEquipPosition_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFilter_ProtectorEquipPosition_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Filter_ProtectorEquipPosition.Filter_ProtectorEquipPosition_C.PreConstruct");
		
		UFilter_ProtectorEquipPosition_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Filter_ProtectorEquipPosition.Filter_ProtectorEquipPosition_C.Construct
	 * 		Flags  -> ()
	 */
	void UFilter_ProtectorEquipPosition_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Filter_ProtectorEquipPosition.Filter_ProtectorEquipPosition_C.Construct");
		
		UFilter_ProtectorEquipPosition_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Filter_ProtectorEquipPosition.Filter_ProtectorEquipPosition_C.ResetAll
	 * 		Flags  -> ()
	 */
	void UFilter_ProtectorEquipPosition_C::ResetAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Filter_ProtectorEquipPosition.Filter_ProtectorEquipPosition_C.ResetAll");
		
		UFilter_ProtectorEquipPosition_C_ResetAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Filter_ProtectorEquipPosition.Filter_ProtectorEquipPosition_C.BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UFilterRadioButton_C*                        RadioButton                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFilter_ProtectorEquipPosition_C::BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature(bool IsChecked, class UFilterRadioButton_C* RadioButton, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Filter_ProtectorEquipPosition.Filter_ProtectorEquipPosition_C.BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature");
		
		UFilter_ProtectorEquipPosition_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature_Params params {};
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
	 * 		Name   -> Function Filter_ProtectorEquipPosition.Filter_ProtectorEquipPosition_C.ExecuteUbergraph_Filter_ProtectorEquipPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFilter_ProtectorEquipPosition_C::ExecuteUbergraph_Filter_ProtectorEquipPosition(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Filter_ProtectorEquipPosition.Filter_ProtectorEquipPosition_C.ExecuteUbergraph_Filter_ProtectorEquipPosition");
		
		UFilter_ProtectorEquipPosition_C_ExecuteUbergraph_Filter_ProtectorEquipPosition_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFilter_ProtectorEquipPosition_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFilter_ProtectorEquipPosition_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Filter_ProtectorEquipPosition.Filter_ProtectorEquipPosition_C");
		return ptr;
	}

}


