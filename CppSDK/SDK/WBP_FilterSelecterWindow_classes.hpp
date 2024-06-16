#pragma once

 

// Package: WBP_FilterSelecterWindow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "Filter_Type_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_FilterSelecterWindow.WBP_FilterSelecterWindow_C
// 0x0048 (0x02F8 - 0x02B0)
class UWBP_FilterSelecterWindow_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFilterSelector_C*                      FilterSelector;                                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  SBButtonTransparent;                               // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnFilterApply;                                     // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	EFilter_Type                                  FilterType;                                        // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bShowing;                                          // 0x02F1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ESBUIBlockerType                              UIBlockerType;                                     // 0x02F2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void OnClose__DelegateSignature();
	void OnFilterApply__DelegateSignature(TArray<struct FFilterGroup>& Filters);
	void ExecuteUbergraph_WBP_FilterSelecterWindow(int32 EntryPoint);
	void OnPress_Cancel();
	void BndEvt__SBButtonTransparent_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__FilterSelector_K2Node_ComponentBoundEvent_1_OnClose__DelegateSignature();
	void BndEvt__FilterSelector_K2Node_ComponentBoundEvent_0_OnFilterApply__DelegateSignature(TArray<struct FFilterGroup>& Filters);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ChangeFilterType(EFilter_Type Param_FilterType);
	void SetWindowPosition(const struct FVector2D& InPosition);
	void PlayAnimIn();
	void PlayAnimOut();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_FilterSelecterWindow_C">();
	}
	static class UWBP_FilterSelecterWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_FilterSelecterWindow_C>();
	}
};
static_assert(alignof(UWBP_FilterSelecterWindow_C) == 0x000008, "Wrong alignment on UWBP_FilterSelecterWindow_C");
static_assert(sizeof(UWBP_FilterSelecterWindow_C) == 0x0002F8, "Wrong size on UWBP_FilterSelecterWindow_C");
static_assert(offsetof(UWBP_FilterSelecterWindow_C, UberGraphFrame) == 0x0002B0, "Member 'UWBP_FilterSelecterWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_FilterSelecterWindow_C, FilterSelector) == 0x0002B8, "Member 'UWBP_FilterSelecterWindow_C::FilterSelector' has a wrong offset!");
static_assert(offsetof(UWBP_FilterSelecterWindow_C, SBButtonTransparent) == 0x0002C0, "Member 'UWBP_FilterSelecterWindow_C::SBButtonTransparent' has a wrong offset!");
static_assert(offsetof(UWBP_FilterSelecterWindow_C, UIBlocker) == 0x0002C8, "Member 'UWBP_FilterSelecterWindow_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UWBP_FilterSelecterWindow_C, OnClose) == 0x0002D0, "Member 'UWBP_FilterSelecterWindow_C::OnClose' has a wrong offset!");
static_assert(offsetof(UWBP_FilterSelecterWindow_C, OnFilterApply) == 0x0002E0, "Member 'UWBP_FilterSelecterWindow_C::OnFilterApply' has a wrong offset!");
static_assert(offsetof(UWBP_FilterSelecterWindow_C, FilterType) == 0x0002F0, "Member 'UWBP_FilterSelecterWindow_C::FilterType' has a wrong offset!");
static_assert(offsetof(UWBP_FilterSelecterWindow_C, bShowing) == 0x0002F1, "Member 'UWBP_FilterSelecterWindow_C::bShowing' has a wrong offset!");
static_assert(offsetof(UWBP_FilterSelecterWindow_C, UIBlockerType) == 0x0002F2, "Member 'UWBP_FilterSelecterWindow_C::UIBlockerType' has a wrong offset!");

}

