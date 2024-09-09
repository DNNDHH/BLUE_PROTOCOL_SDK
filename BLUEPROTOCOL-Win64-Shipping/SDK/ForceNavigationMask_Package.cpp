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
	 * 		Name   -> Function ForceNavigationMask.ForceNavigationMask_C.SetBlackMaskAlpha
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InAlpha                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UForceNavigationMask_C::SetBlackMaskAlpha(float InAlpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForceNavigationMask.ForceNavigationMask_C.SetBlackMaskAlpha");
		
		UForceNavigationMask_C_SetBlackMaskAlpha_Params params {};
		params.InAlpha = InAlpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ForceNavigationMask.ForceNavigationMask_C.Activate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InDataTableKey                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UForceNavigationMask_C::Activate(const class FName& InDataTableKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForceNavigationMask.ForceNavigationMask_C.Activate");
		
		UForceNavigationMask_C_Activate_Params params {};
		params.InDataTableKey = InDataTableKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ForceNavigationMask.ForceNavigationMask_C.Standby
	 * 		Flags  -> ()
	 */
	void UForceNavigationMask_C::Standby()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForceNavigationMask.ForceNavigationMask_C.Standby");
		
		UForceNavigationMask_C_Standby_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ForceNavigationMask.ForceNavigationMask_C.SetEffect
	 * 		Flags  -> ()
	 */
	void UForceNavigationMask_C::SetEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForceNavigationMask.ForceNavigationMask_C.SetEffect");
		
		UForceNavigationMask_C_SetEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ForceNavigationMask.ForceNavigationMask_C.SetMask
	 * 		Flags  -> ()
	 */
	void UForceNavigationMask_C::SetMask()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForceNavigationMask.ForceNavigationMask_C.SetMask");
		
		UForceNavigationMask_C_SetMask_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ForceNavigationMask.ForceNavigationMask_C.Construct
	 * 		Flags  -> ()
	 */
	void UForceNavigationMask_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForceNavigationMask.ForceNavigationMask_C.Construct");
		
		UForceNavigationMask_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ForceNavigationMask.ForceNavigationMask_C.Destruct
	 * 		Flags  -> ()
	 */
	void UForceNavigationMask_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForceNavigationMask.ForceNavigationMask_C.Destruct");
		
		UForceNavigationMask_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ForceNavigationMask.ForceNavigationMask_C.OnSBButtonClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UForceNavigationMask_C::OnSBButtonClicked(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForceNavigationMask.ForceNavigationMask_C.OnSBButtonClicked");
		
		UForceNavigationMask_C_OnSBButtonClicked_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ForceNavigationMask.ForceNavigationMask_C.DebugExit
	 * 		Flags  -> ()
	 */
	void UForceNavigationMask_C::DebugExit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForceNavigationMask.ForceNavigationMask_C.DebugExit");
		
		UForceNavigationMask_C_DebugExit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ForceNavigationMask.ForceNavigationMask_C.ExecuteUbergraph_ForceNavigationMask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UForceNavigationMask_C::ExecuteUbergraph_ForceNavigationMask(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForceNavigationMask.ForceNavigationMask_C.ExecuteUbergraph_ForceNavigationMask");
		
		UForceNavigationMask_C_ExecuteUbergraph_ForceNavigationMask_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ForceNavigationMask.ForceNavigationMask_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UForceNavigationMask_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForceNavigationMask.ForceNavigationMask_C.OnClose__DelegateSignature");
		
		UForceNavigationMask_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UForceNavigationMask_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UForceNavigationMask_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ForceNavigationMask.ForceNavigationMask_C");
		return ptr;
	}

}


