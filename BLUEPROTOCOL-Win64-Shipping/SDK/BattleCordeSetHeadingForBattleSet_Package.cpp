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
	 * 		Name   -> Function BattleCordeSetHeadingForBattleSet.BattleCordeSetHeadingForBattleSet_C.Construct
	 * 		Flags  -> ()
	 */
	void UBattleCordeSetHeadingForBattleSet_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeSetHeadingForBattleSet.BattleCordeSetHeadingForBattleSet_C.Construct");
		
		UBattleCordeSetHeadingForBattleSet_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeSetHeadingForBattleSet.BattleCordeSetHeadingForBattleSet_C.BndEvt__BattleCordeSetHeadingForBattleSet_AdminOrEditBtn_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBattleCordeSetHeadingForBattleSet_C::BndEvt__BattleCordeSetHeadingForBattleSet_AdminOrEditBtn_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeSetHeadingForBattleSet.BattleCordeSetHeadingForBattleSet_C.BndEvt__BattleCordeSetHeadingForBattleSet_AdminOrEditBtn_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");
		
		UBattleCordeSetHeadingForBattleSet_C_BndEvt__BattleCordeSetHeadingForBattleSet_AdminOrEditBtn_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeSetHeadingForBattleSet.BattleCordeSetHeadingForBattleSet_C.ExecuteUbergraph_BattleCordeSetHeadingForBattleSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBattleCordeSetHeadingForBattleSet_C::ExecuteUbergraph_BattleCordeSetHeadingForBattleSet(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeSetHeadingForBattleSet.BattleCordeSetHeadingForBattleSet_C.ExecuteUbergraph_BattleCordeSetHeadingForBattleSet");
		
		UBattleCordeSetHeadingForBattleSet_C_ExecuteUbergraph_BattleCordeSetHeadingForBattleSet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BattleCordeSetHeadingForBattleSet.BattleCordeSetHeadingForBattleSet_C.OnAdminOrEditBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBattleCordeSetHeadingForBattleSet_C::OnAdminOrEditBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BattleCordeSetHeadingForBattleSet.BattleCordeSetHeadingForBattleSet_C.OnAdminOrEditBtnPressed__DelegateSignature");
		
		UBattleCordeSetHeadingForBattleSet_C_OnAdminOrEditBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBattleCordeSetHeadingForBattleSet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBattleCordeSetHeadingForBattleSet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BattleCordeSetHeadingForBattleSet.BattleCordeSetHeadingForBattleSet_C");
		return ptr;
	}

}


