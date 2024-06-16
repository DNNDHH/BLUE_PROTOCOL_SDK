#pragma once

 

// Package: CommonPagerWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommonPagerWidget.CommonPagerWidget_C
// 0x0048 (0x02C0 - 0x0278)
class UCommonPagerWidget_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Back;                                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Fowerd;                                            // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PageMaxNumText;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PageNumText;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         PageCurrent;                                       // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PageMin;                                           // 0x02A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PageMax;                                           // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_791F[0x4];                                     // 0x02AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnPageChange;                                      // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnPageChange__DelegateSignature(int32 Param_PageCurrent);
	void ExecuteUbergraph_CommonPagerWidget(int32 EntryPoint);
	void UpdetaPage();
	void InitializePage(int32 Param_PageCurrent, int32 Param_PageMin, int32 Param_PageMax);
	void BndEvt__Fowerd_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Back_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void SetBtnEnable(bool Param_Fowerd);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonPagerWidget_C">();
	}
	static class UCommonPagerWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonPagerWidget_C>();
	}
};
static_assert(alignof(UCommonPagerWidget_C) == 0x000008, "Wrong alignment on UCommonPagerWidget_C");
static_assert(sizeof(UCommonPagerWidget_C) == 0x0002C0, "Wrong size on UCommonPagerWidget_C");
static_assert(offsetof(UCommonPagerWidget_C, UberGraphFrame) == 0x000278, "Member 'UCommonPagerWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommonPagerWidget_C, Back) == 0x000280, "Member 'UCommonPagerWidget_C::Back' has a wrong offset!");
static_assert(offsetof(UCommonPagerWidget_C, Fowerd) == 0x000288, "Member 'UCommonPagerWidget_C::Fowerd' has a wrong offset!");
static_assert(offsetof(UCommonPagerWidget_C, PageMaxNumText) == 0x000290, "Member 'UCommonPagerWidget_C::PageMaxNumText' has a wrong offset!");
static_assert(offsetof(UCommonPagerWidget_C, PageNumText) == 0x000298, "Member 'UCommonPagerWidget_C::PageNumText' has a wrong offset!");
static_assert(offsetof(UCommonPagerWidget_C, PageCurrent) == 0x0002A0, "Member 'UCommonPagerWidget_C::PageCurrent' has a wrong offset!");
static_assert(offsetof(UCommonPagerWidget_C, PageMin) == 0x0002A4, "Member 'UCommonPagerWidget_C::PageMin' has a wrong offset!");
static_assert(offsetof(UCommonPagerWidget_C, PageMax) == 0x0002A8, "Member 'UCommonPagerWidget_C::PageMax' has a wrong offset!");
static_assert(offsetof(UCommonPagerWidget_C, OnPageChange) == 0x0002B0, "Member 'UCommonPagerWidget_C::OnPageChange' has a wrong offset!");

}

