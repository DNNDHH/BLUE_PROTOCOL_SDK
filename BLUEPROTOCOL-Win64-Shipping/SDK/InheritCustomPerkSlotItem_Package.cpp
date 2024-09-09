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
	 * 		Name   -> Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.ActivateCraftResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bActive                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInheritCustomPerkSlotItem_C::ActivateCraftResult(bool bActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.ActivateCraftResult");
		
		UInheritCustomPerkSlotItem_C_ActivateCraftResult_Params params {};
		params.bActive = bActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.SetChangeData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bChangeData                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInheritCustomPerkSlotItem_C::SetChangeData(bool bChangeData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.SetChangeData");
		
		UInheritCustomPerkSlotItem_C_SetChangeData_Params params {};
		params.bChangeData = bChangeData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.SetNewPerkVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInheritCustomPerkSlotItem_C::SetNewPerkVisible(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.SetNewPerkVisible");
		
		UInheritCustomPerkSlotItem_C_SetNewPerkVisible_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.UpdateProtectBtn
	 * 		Flags  -> ()
	 */
	void UInheritCustomPerkSlotItem_C::UpdateProtectBtn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.UpdateProtectBtn");
		
		UInheritCustomPerkSlotItem_C_UpdateProtectBtn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.UpdateSlotHeight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInheritCustomPerkSlotItem_C::UpdateSlotHeight(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.UpdateSlotHeight");
		
		UInheritCustomPerkSlotItem_C_UpdateSlotHeight_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.IsEmpty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsEmpty                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInheritCustomPerkSlotItem_C::IsEmpty(bool* bIsEmpty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.IsEmpty");
		
		UInheritCustomPerkSlotItem_C_IsEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsEmpty != nullptr)
			*bIsEmpty = params.bIsEmpty;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.SetEmpty
	 * 		Flags  -> ()
	 */
	void UInheritCustomPerkSlotItem_C::SetEmpty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.SetEmpty");
		
		UInheritCustomPerkSlotItem_C_SetEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.SetItemData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInheritCustomPerkSlotItem_C::SetItemData(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.SetItemData");
		
		UInheritCustomPerkSlotItem_C_SetItemData_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.GetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBCharacterWeaponPerkData                  Data                                                       (Parm, OutParm, NoDestructor)
	 */
	void UInheritCustomPerkSlotItem_C::GetData(struct FSBCharacterWeaponPerkData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.GetData");
		
		UInheritCustomPerkSlotItem_C_GetData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.IsProtected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsProtected                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInheritCustomPerkSlotItem_C::IsProtected(bool* IsProtected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.IsProtected");
		
		UInheritCustomPerkSlotItem_C_IsProtected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsProtected != nullptr)
			*IsProtected = params.IsProtected;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.SetProtectButtonVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInheritCustomPerkSlotItem_C::SetProtectButtonVisible(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.SetProtectButtonVisible");
		
		UInheritCustomPerkSlotItem_C_SetProtectButtonVisible_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.SetWeaponData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBCharacterWeaponPerkData                  SBCharacterWeaponPerkData                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UInheritCustomPerkSlotItem_C::SetWeaponData(const struct FSBCharacterWeaponPerkData& SBCharacterWeaponPerkData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.SetWeaponData");
		
		UInheritCustomPerkSlotItem_C_SetWeaponData_Params params {};
		params.SBCharacterWeaponPerkData = SBCharacterWeaponPerkData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.ApplyData
	 * 		Flags  -> ()
	 */
	void UInheritCustomPerkSlotItem_C::ApplyData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.ApplyData");
		
		UInheritCustomPerkSlotItem_C_ApplyData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.BndEvt__WeaponCustomPerkSlotItem_Btn_Protect_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UInheritCustomPerkSlotItem_C::BndEvt__WeaponCustomPerkSlotItem_Btn_Protect_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.BndEvt__WeaponCustomPerkSlotItem_Btn_Protect_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UInheritCustomPerkSlotItem_C_BndEvt__WeaponCustomPerkSlotItem_Btn_Protect_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.ExecuteUbergraph_InheritCustomPerkSlotItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInheritCustomPerkSlotItem_C::ExecuteUbergraph_InheritCustomPerkSlotItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.ExecuteUbergraph_InheritCustomPerkSlotItem");
		
		UInheritCustomPerkSlotItem_C_ExecuteUbergraph_InheritCustomPerkSlotItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.OnProtectClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UInheritCustomPerkSlotItem_C::OnProtectClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C.OnProtectClicked__DelegateSignature");
		
		UInheritCustomPerkSlotItem_C_OnProtectClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInheritCustomPerkSlotItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInheritCustomPerkSlotItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InheritCustomPerkSlotItem.InheritCustomPerkSlotItem_C");
		return ptr;
	}

}


