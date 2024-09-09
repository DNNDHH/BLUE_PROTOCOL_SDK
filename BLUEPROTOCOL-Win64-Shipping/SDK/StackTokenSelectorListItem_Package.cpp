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
	 * 		Name   -> Function StackTokenSelectorListItem.StackTokenSelectorListItem_C.SetUIScreen 
	 * 		Flags  -> ()
	 */
	void UStackTokenSelectorListItem_C::SetUIScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackTokenSelectorListItem.StackTokenSelectorListItem_C.SetUIScreen ");
		
		UStackTokenSelectorListItem_C_SetUIScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackTokenSelectorListItem.StackTokenSelectorListItem_C.UpdateNeedNum
	 * 		Flags  -> ()
	 */
	void UStackTokenSelectorListItem_C::UpdateNeedNum()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackTokenSelectorListItem.StackTokenSelectorListItem_C.UpdateNeedNum");
		
		UStackTokenSelectorListItem_C_UpdateNeedNum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackTokenSelectorListItem.StackTokenSelectorListItem_C.Set Select
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSelect                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStackTokenSelectorListItem_C::SetSelect(bool bSelect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackTokenSelectorListItem.StackTokenSelectorListItem_C.Set Select");
		
		UStackTokenSelectorListItem_C_SetSelect_Params params {};
		params.bSelect = bSelect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackTokenSelectorListItem.StackTokenSelectorListItem_C.GetTokenId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TokenID                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStackTokenSelectorListItem_C::GetTokenId(int32_t* TokenID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackTokenSelectorListItem.StackTokenSelectorListItem_C.GetTokenId");
		
		UStackTokenSelectorListItem_C_GetTokenId_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TokenID != nullptr)
			*TokenID = params.TokenID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackTokenSelectorListItem.StackTokenSelectorListItem_C.SetTokenData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBStackBTicketData                         TokenID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UStackTokenSelectorListItem_C::SetTokenData(const struct FSBStackBTicketData& TokenID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackTokenSelectorListItem.StackTokenSelectorListItem_C.SetTokenData");
		
		UStackTokenSelectorListItem_C_SetTokenData_Params params {};
		params.TokenID = TokenID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackTokenSelectorListItem.StackTokenSelectorListItem_C.BndEvt__TokenSelectorListItem_SBRadioBtnCmn01_C_198_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStackTokenSelectorListItem_C::BndEvt__TokenSelectorListItem_SBRadioBtnCmn01_C_198_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackTokenSelectorListItem.StackTokenSelectorListItem_C.BndEvt__TokenSelectorListItem_SBRadioBtnCmn01_C_198_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UStackTokenSelectorListItem_C_BndEvt__TokenSelectorListItem_SBRadioBtnCmn01_C_198_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackTokenSelectorListItem.StackTokenSelectorListItem_C.ExecuteUbergraph_StackTokenSelectorListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStackTokenSelectorListItem_C::ExecuteUbergraph_StackTokenSelectorListItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackTokenSelectorListItem.StackTokenSelectorListItem_C.ExecuteUbergraph_StackTokenSelectorListItem");
		
		UStackTokenSelectorListItem_C_ExecuteUbergraph_StackTokenSelectorListItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function StackTokenSelectorListItem.StackTokenSelectorListItem_C.OnSelect__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStackTokenSelectorListItem_C*               Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStackTokenSelectorListItem_C::OnSelect__DelegateSignature(class UStackTokenSelectorListItem_C* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StackTokenSelectorListItem.StackTokenSelectorListItem_C.OnSelect__DelegateSignature");
		
		UStackTokenSelectorListItem_C_OnSelect__DelegateSignature_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStackTokenSelectorListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStackTokenSelectorListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StackTokenSelectorListItem.StackTokenSelectorListItem_C");
		return ptr;
	}

}


