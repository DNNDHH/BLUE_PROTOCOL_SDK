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
	 * 		Name   -> Function LeftSideParametersForBattleSetSecondLevel.LeftSideParametersForBattleSetSecondLevel_C.GetLeftSideParameters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMyCharaMenu_LeftSideParameters_C*           OutLeftSideParameters                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULeftSideParametersForBattleSetSecondLevel_C::GetLeftSideParameters(class UMyCharaMenu_LeftSideParameters_C** OutLeftSideParameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LeftSideParametersForBattleSetSecondLevel.LeftSideParametersForBattleSetSecondLevel_C.GetLeftSideParameters");
		
		ULeftSideParametersForBattleSetSecondLevel_C_GetLeftSideParameters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLeftSideParameters != nullptr)
			*OutLeftSideParameters = params.OutLeftSideParameters;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LeftSideParametersForBattleSetSecondLevel.LeftSideParametersForBattleSetSecondLevel_C.SetBattleSetInfoType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_BattleSetInfoType                                InBattleSetInfoType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULeftSideParametersForBattleSetSecondLevel_C::SetBattleSetInfoType(E_BattleSetInfoType InBattleSetInfoType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LeftSideParametersForBattleSetSecondLevel.LeftSideParametersForBattleSetSecondLevel_C.SetBattleSetInfoType");
		
		ULeftSideParametersForBattleSetSecondLevel_C_SetBattleSetInfoType_Params params {};
		params.InBattleSetInfoType = InBattleSetInfoType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LeftSideParametersForBattleSetSecondLevel.LeftSideParametersForBattleSetSecondLevel_C.BndEvt__LeftSideParametersForBattleSetSecondLevel_LeftSideParametersBody_K2Node_ComponentBoundEvent_0_OnDetailedStatusClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULeftSideParametersForBattleSetSecondLevel_C::BndEvt__LeftSideParametersForBattleSetSecondLevel_LeftSideParametersBody_K2Node_ComponentBoundEvent_0_OnDetailedStatusClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LeftSideParametersForBattleSetSecondLevel.LeftSideParametersForBattleSetSecondLevel_C.BndEvt__LeftSideParametersForBattleSetSecondLevel_LeftSideParametersBody_K2Node_ComponentBoundEvent_0_OnDetailedStatusClicked__DelegateSignature");
		
		ULeftSideParametersForBattleSetSecondLevel_C_BndEvt__LeftSideParametersForBattleSetSecondLevel_LeftSideParametersBody_K2Node_ComponentBoundEvent_0_OnDetailedStatusClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LeftSideParametersForBattleSetSecondLevel.LeftSideParametersForBattleSetSecondLevel_C.ExecuteUbergraph_LeftSideParametersForBattleSetSecondLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULeftSideParametersForBattleSetSecondLevel_C::ExecuteUbergraph_LeftSideParametersForBattleSetSecondLevel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LeftSideParametersForBattleSetSecondLevel.LeftSideParametersForBattleSetSecondLevel_C.ExecuteUbergraph_LeftSideParametersForBattleSetSecondLevel");
		
		ULeftSideParametersForBattleSetSecondLevel_C_ExecuteUbergraph_LeftSideParametersForBattleSetSecondLevel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LeftSideParametersForBattleSetSecondLevel.LeftSideParametersForBattleSetSecondLevel_C.OnDetailStatusBtnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULeftSideParametersForBattleSetSecondLevel_C::OnDetailStatusBtnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LeftSideParametersForBattleSetSecondLevel.LeftSideParametersForBattleSetSecondLevel_C.OnDetailStatusBtnClicked__DelegateSignature");
		
		ULeftSideParametersForBattleSetSecondLevel_C_OnDetailStatusBtnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULeftSideParametersForBattleSetSecondLevel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULeftSideParametersForBattleSetSecondLevel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LeftSideParametersForBattleSetSecondLevel.LeftSideParametersForBattleSetSecondLevel_C");
		return ptr;
	}

}


