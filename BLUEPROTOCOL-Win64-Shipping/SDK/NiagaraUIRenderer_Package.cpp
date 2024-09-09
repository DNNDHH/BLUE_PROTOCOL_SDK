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
	 * 		Name   -> Function NiagaraUIRenderer.NiagaraSystemWidget.GetNiagaraComponent
	 * 		Flags  -> ()
	 */
	class UNiagaraUIComponent* UNiagaraSystemWidget::GetNiagaraComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NiagaraUIRenderer.NiagaraSystemWidget.GetNiagaraComponent");
		
		UNiagaraSystemWidget_GetNiagaraComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NiagaraUIRenderer.NiagaraSystemWidget.DeactivateSystem
	 * 		Flags  -> ()
	 */
	void UNiagaraSystemWidget::DeactivateSystem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NiagaraUIRenderer.NiagaraSystemWidget.DeactivateSystem");
		
		UNiagaraSystemWidget_DeactivateSystem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NiagaraUIRenderer.NiagaraSystemWidget.ActivateSystem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Reset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNiagaraSystemWidget::ActivateSystem(bool Reset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NiagaraUIRenderer.NiagaraSystemWidget.ActivateSystem");
		
		UNiagaraSystemWidget_ActivateSystem_Params params {};
		params.Reset = Reset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraSystemWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraSystemWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NiagaraUIRenderer.NiagaraSystemWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANiagaraUIActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANiagaraUIActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NiagaraUIRenderer.NiagaraUIActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNiagaraUIComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNiagaraUIComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NiagaraUIRenderer.NiagaraUIComponent");
		return ptr;
	}

}


