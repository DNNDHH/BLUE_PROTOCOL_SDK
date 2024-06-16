#pragma once

 

// Package: NiagaraUIRenderer

#include "Basic.hpp"

#include "NiagaraUIRenderer_classes.hpp"
#include "NiagaraUIRenderer_parameters.hpp"


namespace SDK
{

// Function NiagaraUIRenderer.NiagaraSystemWidget.ActivateSystem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    Reset                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraSystemWidget::ActivateSystem(bool Reset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraSystemWidget", "ActivateSystem");

	Params::NiagaraSystemWidget_ActivateSystem Parms{};

	Parms.Reset = Reset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NiagaraUIRenderer.NiagaraSystemWidget.DeactivateSystem
// (Final, Native, Public, BlueprintCallable)

void UNiagaraSystemWidget::DeactivateSystem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraSystemWidget", "DeactivateSystem");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function NiagaraUIRenderer.NiagaraSystemWidget.GetNiagaraComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UNiagaraUIComponent*              ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNiagaraUIComponent* UNiagaraSystemWidget::GetNiagaraComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NiagaraSystemWidget", "GetNiagaraComponent");

	Params::NiagaraSystemWidget_GetNiagaraComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

