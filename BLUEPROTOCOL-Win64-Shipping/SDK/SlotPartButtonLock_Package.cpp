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
	 * 		Name   -> Function SlotPartButtonLock.SlotPartButtonLock_C.IsLock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsLock                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USlotPartButtonLock_C::IsLock(bool* IsLock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SlotPartButtonLock.SlotPartButtonLock_C.IsLock");
		
		USlotPartButtonLock_C_IsLock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsLock != nullptr)
			*IsLock = params.IsLock;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SlotPartButtonLock.SlotPartButtonLock_C.SetLocking
	 * 		Flags  -> ()
	 */
	void USlotPartButtonLock_C::SetLocking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SlotPartButtonLock.SlotPartButtonLock_C.SetLocking");
		
		USlotPartButtonLock_C_SetLocking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SlotPartButtonLock.SlotPartButtonLock_C.SetLock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsLock                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USlotPartButtonLock_C::SetLock(bool IsLock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SlotPartButtonLock.SlotPartButtonLock_C.SetLock");
		
		USlotPartButtonLock_C_SetLock_Params params {};
		params.IsLock = IsLock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SlotPartButtonLock.SlotPartButtonLock_C.BndEvt__WeaponSynthePart_ButtonLock_BtnUnLock_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USlotPartButtonLock_C::BndEvt__WeaponSynthePart_ButtonLock_BtnUnLock_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SlotPartButtonLock.SlotPartButtonLock_C.BndEvt__WeaponSynthePart_ButtonLock_BtnUnLock_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		USlotPartButtonLock_C_BndEvt__WeaponSynthePart_ButtonLock_BtnUnLock_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SlotPartButtonLock.SlotPartButtonLock_C.BndEvt__WeaponSynthePart_ButtonLock_BtnLock_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USlotPartButtonLock_C::BndEvt__WeaponSynthePart_ButtonLock_BtnLock_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SlotPartButtonLock.SlotPartButtonLock_C.BndEvt__WeaponSynthePart_ButtonLock_BtnLock_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		USlotPartButtonLock_C_BndEvt__WeaponSynthePart_ButtonLock_BtnLock_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SlotPartButtonLock.SlotPartButtonLock_C.BndEvt__WeaponSynthePart_ButtonLock_BtnUnLock_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USlotPartButtonLock_C::BndEvt__WeaponSynthePart_ButtonLock_BtnUnLock_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SlotPartButtonLock.SlotPartButtonLock_C.BndEvt__WeaponSynthePart_ButtonLock_BtnUnLock_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		USlotPartButtonLock_C_BndEvt__WeaponSynthePart_ButtonLock_BtnUnLock_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SlotPartButtonLock.SlotPartButtonLock_C.BndEvt__WeaponSynthePart_ButtonLock_BtnUnLock_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USlotPartButtonLock_C::BndEvt__WeaponSynthePart_ButtonLock_BtnUnLock_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SlotPartButtonLock.SlotPartButtonLock_C.BndEvt__WeaponSynthePart_ButtonLock_BtnUnLock_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		USlotPartButtonLock_C_BndEvt__WeaponSynthePart_ButtonLock_BtnUnLock_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SlotPartButtonLock.SlotPartButtonLock_C.BndEvt__WeaponSynthePart_ButtonLock_BtnLock_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USlotPartButtonLock_C::BndEvt__WeaponSynthePart_ButtonLock_BtnLock_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SlotPartButtonLock.SlotPartButtonLock_C.BndEvt__WeaponSynthePart_ButtonLock_BtnLock_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");
		
		USlotPartButtonLock_C_BndEvt__WeaponSynthePart_ButtonLock_BtnLock_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SlotPartButtonLock.SlotPartButtonLock_C.BndEvt__WeaponSynthePart_ButtonLock_BtnLock_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USlotPartButtonLock_C::BndEvt__WeaponSynthePart_ButtonLock_BtnLock_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SlotPartButtonLock.SlotPartButtonLock_C.BndEvt__WeaponSynthePart_ButtonLock_BtnLock_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");
		
		USlotPartButtonLock_C_BndEvt__WeaponSynthePart_ButtonLock_BtnLock_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SlotPartButtonLock.SlotPartButtonLock_C.ExecuteUbergraph_SlotPartButtonLock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USlotPartButtonLock_C::ExecuteUbergraph_SlotPartButtonLock(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SlotPartButtonLock.SlotPartButtonLock_C.ExecuteUbergraph_SlotPartButtonLock");
		
		USlotPartButtonLock_C_ExecuteUbergraph_SlotPartButtonLock_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SlotPartButtonLock.SlotPartButtonLock_C.OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsLock                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USlotPartButtonLock_C::OnClicked__DelegateSignature(bool IsLock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SlotPartButtonLock.SlotPartButtonLock_C.OnClicked__DelegateSignature");
		
		USlotPartButtonLock_C_OnClicked__DelegateSignature_Params params {};
		params.IsLock = IsLock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USlotPartButtonLock_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USlotPartButtonLock_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SlotPartButtonLock.SlotPartButtonLock_C");
		return ptr;
	}

}


