#pragma once

 

// Package: NiagaraUIRenderer

#include "Basic.hpp"


namespace SDK::Params
{

// Function NiagaraUIRenderer.NiagaraSystemWidget.ActivateSystem
// 0x0001 (0x0001 - 0x0000)
struct NiagaraSystemWidget_ActivateSystem final
{
public:
	bool                                          Reset;                                             // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(NiagaraSystemWidget_ActivateSystem) == 0x000001, "Wrong alignment on NiagaraSystemWidget_ActivateSystem");
static_assert(sizeof(NiagaraSystemWidget_ActivateSystem) == 0x000001, "Wrong size on NiagaraSystemWidget_ActivateSystem");
static_assert(offsetof(NiagaraSystemWidget_ActivateSystem, Reset) == 0x000000, "Member 'NiagaraSystemWidget_ActivateSystem::Reset' has a wrong offset!");

// Function NiagaraUIRenderer.NiagaraSystemWidget.GetNiagaraComponent
// 0x0008 (0x0008 - 0x0000)
struct NiagaraSystemWidget_GetNiagaraComponent final
{
public:
	class UNiagaraUIComponent*                    ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(NiagaraSystemWidget_GetNiagaraComponent) == 0x000008, "Wrong alignment on NiagaraSystemWidget_GetNiagaraComponent");
static_assert(sizeof(NiagaraSystemWidget_GetNiagaraComponent) == 0x000008, "Wrong size on NiagaraSystemWidget_GetNiagaraComponent");
static_assert(offsetof(NiagaraSystemWidget_GetNiagaraComponent, ReturnValue) == 0x000000, "Member 'NiagaraSystemWidget_GetNiagaraComponent::ReturnValue' has a wrong offset!");

}

