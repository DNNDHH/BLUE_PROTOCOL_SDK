#pragma once

 

// Package: NiagaraUIRenderer

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "Engine_classes.hpp"
#include "Niagara_classes.hpp"


namespace SDK
{

// Class NiagaraUIRenderer.NiagaraSystemWidget
// 0x0088 (0x01A8 - 0x0120)
class UNiagaraSystemWidget final : public UWidget
{
public:
	class UNiagaraSystem*                         NiagaraSystemReference;                            // 0x0120(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class UMaterialInterface*, class UMaterialInterface*> MaterialRemapList;                                 // 0x0128(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                          AutoActivate;                                      // 0x0178(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          TickWhenPaused;                                    // 0x0179(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          FakeDepthScale;                                    // 0x017A(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19AA[0x1];                                     // 0x017B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FakeDepthScaleDistance;                            // 0x017C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ShowDebugSystemInWorld;                            // 0x0180(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19AB[0x17];                                    // 0x0181(0x0017)(Fixing Size After Last Property [ Dumper-7 ])
	class ANiagaraUIActor*                        NiagaraActor;                                      // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UNiagaraUIComponent*                    NiagaraComponent;                                  // 0x01A0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void ActivateSystem(bool Reset);
	void DeactivateSystem();
	class UNiagaraUIComponent* GetNiagaraComponent();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraSystemWidget">();
	}
	static class UNiagaraSystemWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraSystemWidget>();
	}
};
static_assert(alignof(UNiagaraSystemWidget) == 0x000008, "Wrong alignment on UNiagaraSystemWidget");
static_assert(sizeof(UNiagaraSystemWidget) == 0x0001A8, "Wrong size on UNiagaraSystemWidget");
static_assert(offsetof(UNiagaraSystemWidget, NiagaraSystemReference) == 0x000120, "Member 'UNiagaraSystemWidget::NiagaraSystemReference' has a wrong offset!");
static_assert(offsetof(UNiagaraSystemWidget, MaterialRemapList) == 0x000128, "Member 'UNiagaraSystemWidget::MaterialRemapList' has a wrong offset!");
static_assert(offsetof(UNiagaraSystemWidget, AutoActivate) == 0x000178, "Member 'UNiagaraSystemWidget::AutoActivate' has a wrong offset!");
static_assert(offsetof(UNiagaraSystemWidget, TickWhenPaused) == 0x000179, "Member 'UNiagaraSystemWidget::TickWhenPaused' has a wrong offset!");
static_assert(offsetof(UNiagaraSystemWidget, FakeDepthScale) == 0x00017A, "Member 'UNiagaraSystemWidget::FakeDepthScale' has a wrong offset!");
static_assert(offsetof(UNiagaraSystemWidget, FakeDepthScaleDistance) == 0x00017C, "Member 'UNiagaraSystemWidget::FakeDepthScaleDistance' has a wrong offset!");
static_assert(offsetof(UNiagaraSystemWidget, ShowDebugSystemInWorld) == 0x000180, "Member 'UNiagaraSystemWidget::ShowDebugSystemInWorld' has a wrong offset!");
static_assert(offsetof(UNiagaraSystemWidget, NiagaraActor) == 0x000198, "Member 'UNiagaraSystemWidget::NiagaraActor' has a wrong offset!");
static_assert(offsetof(UNiagaraSystemWidget, NiagaraComponent) == 0x0001A0, "Member 'UNiagaraSystemWidget::NiagaraComponent' has a wrong offset!");

// Class NiagaraUIRenderer.NiagaraUIActor
// 0x0000 (0x0228 - 0x0228)
class ANiagaraUIActor final : public AActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraUIActor">();
	}
	static class ANiagaraUIActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANiagaraUIActor>();
	}
};
static_assert(alignof(ANiagaraUIActor) == 0x000008, "Wrong alignment on ANiagaraUIActor");
static_assert(sizeof(ANiagaraUIActor) == 0x000228, "Wrong size on ANiagaraUIActor");

// Class NiagaraUIRenderer.NiagaraUIComponent
// 0x0010 (0x0640 - 0x0630)
class UNiagaraUIComponent final : public UNiagaraComponent
{
public:
	uint8                                         Pad_19AC[0x10];                                    // 0x0630(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraUIComponent">();
	}
	static class UNiagaraUIComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraUIComponent>();
	}
};
static_assert(alignof(UNiagaraUIComponent) == 0x000010, "Wrong alignment on UNiagaraUIComponent");
static_assert(sizeof(UNiagaraUIComponent) == 0x000640, "Wrong size on UNiagaraUIComponent");

}

