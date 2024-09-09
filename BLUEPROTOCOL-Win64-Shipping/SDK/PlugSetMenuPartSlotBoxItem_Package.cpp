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
	 * 		Name   -> Function PlugSetMenuPartSlotBoxItem.PlugSetMenuPartSlotBoxItem_C.ActivateCraftResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bActive                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlugSetMenuPartSlotBoxItem_C::ActivateCraftResult(bool bActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlugSetMenuPartSlotBoxItem.PlugSetMenuPartSlotBoxItem_C.ActivateCraftResult");
		
		UPlugSetMenuPartSlotBoxItem_C_ActivateCraftResult_Params params {};
		params.bActive = bActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlugSetMenuPartSlotBoxItem.PlugSetMenuPartSlotBoxItem_C.SetChangeData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bChangeData                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlugSetMenuPartSlotBoxItem_C::SetChangeData(bool bChangeData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlugSetMenuPartSlotBoxItem.PlugSetMenuPartSlotBoxItem_C.SetChangeData");
		
		UPlugSetMenuPartSlotBoxItem_C_SetChangeData_Params params {};
		params.bChangeData = bChangeData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlugSetMenuPartSlotBoxItem.PlugSetMenuPartSlotBoxItem_C.SetNewPerkVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlugSetMenuPartSlotBoxItem_C::SetNewPerkVisible(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlugSetMenuPartSlotBoxItem.PlugSetMenuPartSlotBoxItem_C.SetNewPerkVisible");
		
		UPlugSetMenuPartSlotBoxItem_C_SetNewPerkVisible_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlugSetMenuPartSlotBoxItem.PlugSetMenuPartSlotBoxItem_C.UpdateProtectBtn
	 * 		Flags  -> ()
	 */
	void UPlugSetMenuPartSlotBoxItem_C::UpdateProtectBtn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlugSetMenuPartSlotBoxItem.PlugSetMenuPartSlotBoxItem_C.UpdateProtectBtn");
		
		UPlugSetMenuPartSlotBoxItem_C_UpdateProtectBtn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlugSetMenuPartSlotBoxItem.PlugSetMenuPartSlotBoxItem_C.UpdateSlotHeight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlugSetMenuPartSlotBoxItem_C::UpdateSlotHeight(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlugSetMenuPartSlotBoxItem.PlugSetMenuPartSlotBoxItem_C.UpdateSlotHeight");
		
		UPlugSetMenuPartSlotBoxItem_C_UpdateSlotHeight_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlugSetMenuPartSlotBoxItem.PlugSetMenuPartSlotBoxItem_C.IsEmpty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsEmpty                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlugSetMenuPartSlotBoxItem_C::IsEmpty(bool* bIsEmpty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlugSetMenuPartSlotBoxItem.PlugSetMenuPartSlotBoxItem_C.IsEmpty");
		
		UPlugSetMenuPartSlotBoxItem_C_IsEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsEmpty != nullptr)
			*bIsEmpty = params.bIsEmpty;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlugSetMenuPartSlotBoxItem.PlugSetMenuPartSlotBoxItem_C.SetEmpty
	 * 		Flags  -> ()
	 */
	void UPlugSetMenuPartSlotBoxItem_C::SetEmpty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlugSetMenuPartSlotBoxItem.PlugSetMenuPartSlotBoxItem_C.SetEmpty");
		
		UPlugSetMenuPartSlotBoxItem_C_SetEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlugSetMenuPartSlotBoxItem.PlugSetMenuPartSlotBoxItem_C.SetItemData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlugSetMenuPartSlotBoxItem_C::SetItemData(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlugSetMenuPartSlotBoxItem.PlugSetMenuPartSlotBoxItem_C.SetItemData");
		
		UPlugSetMenuPartSlotBoxItem_C_SetItemData_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlugSetMenuPartSlotBoxItem.PlugSetMenuPartSlotBoxItem_C.GetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBCharacterWeaponPerkData                  Data                                                       (Parm, OutParm, NoDestructor)
	 */
	void UPlugSetMenuPartSlotBoxItem_C::GetData(struct FSBCharacterWeaponPerkData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlugSetMenuPartSlotBoxItem.PlugSetMenuPartSlotBoxItem_C.GetData");
		
		UPlugSetMenuPartSlotBoxItem_C_GetData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlugSetMenuPartSlotBoxItem.PlugSetMenuPartSlotBoxItem_C.IsProtected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsProtected                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlugSetMenuPartSlotBoxItem_C::IsProtected(bool* IsProtected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlugSetMenuPartSlotBoxItem.PlugSetMenuPartSlotBoxItem_C.IsProtected");
		
		UPlugSetMenuPartSlotBoxItem_C_IsProtected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsProtected != nullptr)
			*IsProtected = params.IsProtected;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlugSetMenuPartSlotBoxItem.PlugSetMenuPartSlotBoxItem_C.SetProtectButtonVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlugSetMenuPartSlotBoxItem_C::SetProtectButtonVisible(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlugSetMenuPartSlotBoxItem.PlugSetMenuPartSlotBoxItem_C.SetProtectButtonVisible");
		
		UPlugSetMenuPartSlotBoxItem_C_SetProtectButtonVisible_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlugSetMenuPartSlotBoxItem.PlugSetMenuPartSlotBoxItem_C.SetWeaponData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBCharacterWeaponPerkData                  SBCharacterWeaponPerkData                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UPlugSetMenuPartSlotBoxItem_C::SetWeaponData(const struct FSBCharacterWeaponPerkData& SBCharacterWeaponPerkData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlugSetMenuPartSlotBoxItem.PlugSetMenuPartSlotBoxItem_C.SetWeaponData");
		
		UPlugSetMenuPartSlotBoxItem_C_SetWeaponData_Params params {};
		params.SBCharacterWeaponPerkData = SBCharacterWeaponPerkData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlugSetMenuPartSlotBoxItem.PlugSetMenuPartSlotBoxItem_C.ApplyData
	 * 		Flags  -> ()
	 */
	void UPlugSetMenuPartSlotBoxItem_C::ApplyData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlugSetMenuPartSlotBoxItem.PlugSetMenuPartSlotBoxItem_C.ApplyData");
		
		UPlugSetMenuPartSlotBoxItem_C_ApplyData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlugSetMenuPartSlotBoxItem.PlugSetMenuPartSlotBoxItem_C.BndEvt__WeaponCustomPerkSlotItem_Btn_Protect_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPlugSetMenuPartSlotBoxItem_C::BndEvt__WeaponCustomPerkSlotItem_Btn_Protect_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlugSetMenuPartSlotBoxItem.PlugSetMenuPartSlotBoxItem_C.BndEvt__WeaponCustomPerkSlotItem_Btn_Protect_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UPlugSetMenuPartSlotBoxItem_C_BndEvt__WeaponCustomPerkSlotItem_Btn_Protect_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlugSetMenuPartSlotBoxItem.PlugSetMenuPartSlotBoxItem_C.ExecuteUbergraph_PlugSetMenuPartSlotBoxItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlugSetMenuPartSlotBoxItem_C::ExecuteUbergraph_PlugSetMenuPartSlotBoxItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlugSetMenuPartSlotBoxItem.PlugSetMenuPartSlotBoxItem_C.ExecuteUbergraph_PlugSetMenuPartSlotBoxItem");
		
		UPlugSetMenuPartSlotBoxItem_C_ExecuteUbergraph_PlugSetMenuPartSlotBoxItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlugSetMenuPartSlotBoxItem.PlugSetMenuPartSlotBoxItem_C.OnProtectClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPlugSetMenuPartSlotBoxItem_C::OnProtectClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlugSetMenuPartSlotBoxItem.PlugSetMenuPartSlotBoxItem_C.OnProtectClicked__DelegateSignature");
		
		UPlugSetMenuPartSlotBoxItem_C_OnProtectClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlugSetMenuPartSlotBoxItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlugSetMenuPartSlotBoxItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlugSetMenuPartSlotBoxItem.PlugSetMenuPartSlotBoxItem_C");
		return ptr;
	}

}


