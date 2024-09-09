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
	 * 		Name   -> Function PlugSetMenuPartSlotButton.PlugSetMenuPartSlotButton_C.SetSlotDeficiency
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bDeficiency                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlugSetMenuPartSlotButton_C::SetSlotDeficiency(bool bDeficiency)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlugSetMenuPartSlotButton.PlugSetMenuPartSlotButton_C.SetSlotDeficiency");
		
		UPlugSetMenuPartSlotButton_C_SetSlotDeficiency_Params params {};
		params.bDeficiency = bDeficiency;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlugSetMenuPartSlotButton.PlugSetMenuPartSlotButton_C.GetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBCharacterWeaponPerkData                  Data                                                       (Parm, OutParm, NoDestructor)
	 */
	void UPlugSetMenuPartSlotButton_C::GetData(struct FSBCharacterWeaponPerkData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlugSetMenuPartSlotButton.PlugSetMenuPartSlotButton_C.GetData");
		
		UPlugSetMenuPartSlotButton_C_GetData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlugSetMenuPartSlotButton.PlugSetMenuPartSlotButton_C.SetSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSelected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlugSetMenuPartSlotButton_C::SetSelected(bool bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlugSetMenuPartSlotButton.PlugSetMenuPartSlotButton_C.SetSelected");
		
		UPlugSetMenuPartSlotButton_C_SetSelected_Params params {};
		params.bSelected = bSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlugSetMenuPartSlotButton.PlugSetMenuPartSlotButton_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBCharacterWeaponPerkData                  SBCharacterWeaponPerkData                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UPlugSetMenuPartSlotButton_C::SetData(const struct FSBCharacterWeaponPerkData& SBCharacterWeaponPerkData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlugSetMenuPartSlotButton.PlugSetMenuPartSlotButton_C.SetData");
		
		UPlugSetMenuPartSlotButton_C_SetData_Params params {};
		params.SBCharacterWeaponPerkData = SBCharacterWeaponPerkData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlugSetMenuPartSlotButton.PlugSetMenuPartSlotButton_C.BndEvt__PerkSlotButton_Btn_Select_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPlugSetMenuPartSlotButton_C::BndEvt__PerkSlotButton_Btn_Select_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlugSetMenuPartSlotButton.PlugSetMenuPartSlotButton_C.BndEvt__PerkSlotButton_Btn_Select_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UPlugSetMenuPartSlotButton_C_BndEvt__PerkSlotButton_Btn_Select_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlugSetMenuPartSlotButton.PlugSetMenuPartSlotButton_C.BndEvt__PerkSlotButton_Btn_Select_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPlugSetMenuPartSlotButton_C::BndEvt__PerkSlotButton_Btn_Select_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlugSetMenuPartSlotButton.PlugSetMenuPartSlotButton_C.BndEvt__PerkSlotButton_Btn_Select_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UPlugSetMenuPartSlotButton_C_BndEvt__PerkSlotButton_Btn_Select_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlugSetMenuPartSlotButton.PlugSetMenuPartSlotButton_C.BndEvt__PerkSlotButton_Btn_Select_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPlugSetMenuPartSlotButton_C::BndEvt__PerkSlotButton_Btn_Select_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlugSetMenuPartSlotButton.PlugSetMenuPartSlotButton_C.BndEvt__PerkSlotButton_Btn_Select_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UPlugSetMenuPartSlotButton_C_BndEvt__PerkSlotButton_Btn_Select_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlugSetMenuPartSlotButton.PlugSetMenuPartSlotButton_C.ExecuteUbergraph_PlugSetMenuPartSlotButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlugSetMenuPartSlotButton_C::ExecuteUbergraph_PlugSetMenuPartSlotButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlugSetMenuPartSlotButton.PlugSetMenuPartSlotButton_C.ExecuteUbergraph_PlugSetMenuPartSlotButton");
		
		UPlugSetMenuPartSlotButton_C_ExecuteUbergraph_PlugSetMenuPartSlotButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlugSetMenuPartSlotButton.PlugSetMenuPartSlotButton_C.OnSelectedItem__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlugSetMenuPartSlotButton_C*                SelectedButton                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlugSetMenuPartSlotButton_C::OnSelectedItem__DelegateSignature(class UPlugSetMenuPartSlotButton_C* SelectedButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlugSetMenuPartSlotButton.PlugSetMenuPartSlotButton_C.OnSelectedItem__DelegateSignature");
		
		UPlugSetMenuPartSlotButton_C_OnSelectedItem__DelegateSignature_Params params {};
		params.SelectedButton = SelectedButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlugSetMenuPartSlotButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlugSetMenuPartSlotButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlugSetMenuPartSlotButton.PlugSetMenuPartSlotButton_C");
		return ptr;
	}

}


