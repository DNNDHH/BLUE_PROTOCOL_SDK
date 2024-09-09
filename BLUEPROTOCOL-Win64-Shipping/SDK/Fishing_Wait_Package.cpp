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
	 * 		Name   -> Function Fishing_Wait.Fishing_Wait_C.CheckFirstOpen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFishing_Wait_C::CheckFirstOpen(bool* Ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fishing_Wait.Fishing_Wait_C.CheckFirstOpen");
		
		UFishing_Wait_C_CheckFirstOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ret != nullptr)
			*Ret = params.Ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fishing_Wait.Fishing_Wait_C.Init
	 * 		Flags  -> ()
	 */
	void UFishing_Wait_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fishing_Wait.Fishing_Wait_C.Init");
		
		UFishing_Wait_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fishing_Wait.Fishing_Wait_C.CheckBackPack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFishing_Wait_C::CheckBackPack(bool* Ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fishing_Wait.Fishing_Wait_C.CheckBackPack");
		
		UFishing_Wait_C_CheckBackPack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ret != nullptr)
			*Ret = params.Ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fishing_Wait.Fishing_Wait_C.Construct
	 * 		Flags  -> ()
	 */
	void UFishing_Wait_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fishing_Wait.Fishing_Wait_C.Construct");
		
		UFishing_Wait_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fishing_Wait.Fishing_Wait_C.DialogAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFishing_Wait_C::DialogAction(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fishing_Wait.Fishing_Wait_C.DialogAction");
		
		UFishing_Wait_C_DialogAction_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fishing_Wait.Fishing_Wait_C.Warning_BackPackIsFull
	 * 		Flags  -> ()
	 */
	void UFishing_Wait_C::Warning_BackPackIsFull()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fishing_Wait.Fishing_Wait_C.Warning_BackPackIsFull");
		
		UFishing_Wait_C_Warning_BackPackIsFull_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fishing_Wait.Fishing_Wait_C.BndEvt__Fishing_Wait_BtnShowHint_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFishing_Wait_C::BndEvt__Fishing_Wait_BtnShowHint_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fishing_Wait.Fishing_Wait_C.BndEvt__Fishing_Wait_BtnShowHint_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");
		
		UFishing_Wait_C_BndEvt__Fishing_Wait_BtnShowHint_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fishing_Wait.Fishing_Wait_C.ExecuteUbergraph_Fishing_Wait
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFishing_Wait_C::ExecuteUbergraph_Fishing_Wait(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fishing_Wait.Fishing_Wait_C.ExecuteUbergraph_Fishing_Wait");
		
		UFishing_Wait_C_ExecuteUbergraph_Fishing_Wait_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fishing_Wait.Fishing_Wait_C.ExitFinshing__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFishing_Wait_C::ExitFinshing__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fishing_Wait.Fishing_Wait_C.ExitFinshing__DelegateSignature");
		
		UFishing_Wait_C_ExitFinshing__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFishing_Wait_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFishing_Wait_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Fishing_Wait.Fishing_Wait_C");
		return ptr;
	}

}


