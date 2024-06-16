#pragma once

 

// Package: FilterButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "Filter_Type_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FilterButton.FilterButton_C
// 0x0048 (0x02C0 - 0x0278)
class UFilterButton_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           Cvs_Filter;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SB_FilterOpen;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EFilter_Type                                  FilterType;                                        // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_9BDC[0x7];                                     // 0x0291(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_FilterSelecterWindow_C*            Window;                                            // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnApplyFilter;                                     // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	ESBUIBlockerType                              UIBlockerType;                                     // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9BDD[0x7];                                     // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanel*                           AttachTargetCanvas;                                // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnApplyFilter__DelegateSignature(TArray<struct FFilterGroup>& Filters);
	void ExecuteUbergraph_FilterButton(int32 EntryPoint);
	void UnbindWindow();
	void BindWindow();
	void OpenWindow();
	void Release();
	void Destruct();
	void CloseWindow();
	void ApplyFilters(TArray<struct FFilterGroup>& Filters);
	void BndEvt__SB_FilterOpen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SetAttachTargetCanvas(class UCanvasPanel* Param_AttachTargetCanvas);
	void ChangeFilterType(EFilter_Type Param_FilterType);
	void CreateWindow();
	void DeleteWindow();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FilterButton_C">();
	}
	static class UFilterButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFilterButton_C>();
	}
};
static_assert(alignof(UFilterButton_C) == 0x000008, "Wrong alignment on UFilterButton_C");
static_assert(sizeof(UFilterButton_C) == 0x0002C0, "Wrong size on UFilterButton_C");
static_assert(offsetof(UFilterButton_C, UberGraphFrame) == 0x000278, "Member 'UFilterButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFilterButton_C, Cvs_Filter) == 0x000280, "Member 'UFilterButton_C::Cvs_Filter' has a wrong offset!");
static_assert(offsetof(UFilterButton_C, SB_FilterOpen) == 0x000288, "Member 'UFilterButton_C::SB_FilterOpen' has a wrong offset!");
static_assert(offsetof(UFilterButton_C, FilterType) == 0x000290, "Member 'UFilterButton_C::FilterType' has a wrong offset!");
static_assert(offsetof(UFilterButton_C, Window) == 0x000298, "Member 'UFilterButton_C::Window' has a wrong offset!");
static_assert(offsetof(UFilterButton_C, OnApplyFilter) == 0x0002A0, "Member 'UFilterButton_C::OnApplyFilter' has a wrong offset!");
static_assert(offsetof(UFilterButton_C, UIBlockerType) == 0x0002B0, "Member 'UFilterButton_C::UIBlockerType' has a wrong offset!");
static_assert(offsetof(UFilterButton_C, AttachTargetCanvas) == 0x0002B8, "Member 'UFilterButton_C::AttachTargetCanvas' has a wrong offset!");

}

