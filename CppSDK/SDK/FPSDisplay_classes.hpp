#pragma once

 

// Package: FPSDisplay

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FPSDisplay.FPSDisplay_C
// 0x0020 (0x0298 - 0x0278)
class UFPSDisplay_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetSwitcher*                        SwitchMode;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_0;                                       // 0x0288(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         DeltaTime;                                         // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bShow;                                             // 0x0294(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bEditMode;                                         // 0x0295(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_FPSDisplay(int32 EntryPoint);
	void Destruct();
	void Construct();
	void ChangeFPSShow();
	void SetEditMode(bool EditMode);
	void Set_Show(bool Param_bShow);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	class FText GetText_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FPSDisplay_C">();
	}
	static class UFPSDisplay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFPSDisplay_C>();
	}
};
static_assert(alignof(UFPSDisplay_C) == 0x000008, "Wrong alignment on UFPSDisplay_C");
static_assert(sizeof(UFPSDisplay_C) == 0x000298, "Wrong size on UFPSDisplay_C");
static_assert(offsetof(UFPSDisplay_C, UberGraphFrame) == 0x000278, "Member 'UFPSDisplay_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFPSDisplay_C, SwitchMode) == 0x000280, "Member 'UFPSDisplay_C::SwitchMode' has a wrong offset!");
static_assert(offsetof(UFPSDisplay_C, TextBlock_0) == 0x000288, "Member 'UFPSDisplay_C::TextBlock_0' has a wrong offset!");
static_assert(offsetof(UFPSDisplay_C, DeltaTime) == 0x000290, "Member 'UFPSDisplay_C::DeltaTime' has a wrong offset!");
static_assert(offsetof(UFPSDisplay_C, bShow) == 0x000294, "Member 'UFPSDisplay_C::bShow' has a wrong offset!");
static_assert(offsetof(UFPSDisplay_C, bEditMode) == 0x000295, "Member 'UFPSDisplay_C::bEditMode' has a wrong offset!");

}

