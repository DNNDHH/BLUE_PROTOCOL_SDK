#pragma once

 

// Package: BasicPager

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BasicPager.BasicPager_C
// 0x0040 (0x02B8 - 0x0278)
class UBasicPager_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn_Before;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_Next;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_MaxPage;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_NowPage;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         NowPage;                                           // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxPage;                                           // 0x02A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnPageChange;                                      // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnPageChange__DelegateSignature(int32 Page);
	void ExecuteUbergraph_BasicPager(int32 EntryPoint);
	void SetNowPage(int32 Param_NowPage);
	void ButtonUpdate();
	void SetMaxPage(int32 Param_MaxPage);
	void BndEvt__Btn_Next_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Btn_Before_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BasicPager_C">();
	}
	static class UBasicPager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBasicPager_C>();
	}
};
static_assert(alignof(UBasicPager_C) == 0x000008, "Wrong alignment on UBasicPager_C");
static_assert(sizeof(UBasicPager_C) == 0x0002B8, "Wrong size on UBasicPager_C");
static_assert(offsetof(UBasicPager_C, UberGraphFrame) == 0x000278, "Member 'UBasicPager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBasicPager_C, Btn_Before) == 0x000280, "Member 'UBasicPager_C::Btn_Before' has a wrong offset!");
static_assert(offsetof(UBasicPager_C, Btn_Next) == 0x000288, "Member 'UBasicPager_C::Btn_Next' has a wrong offset!");
static_assert(offsetof(UBasicPager_C, Txt_MaxPage) == 0x000290, "Member 'UBasicPager_C::Txt_MaxPage' has a wrong offset!");
static_assert(offsetof(UBasicPager_C, Txt_NowPage) == 0x000298, "Member 'UBasicPager_C::Txt_NowPage' has a wrong offset!");
static_assert(offsetof(UBasicPager_C, NowPage) == 0x0002A0, "Member 'UBasicPager_C::NowPage' has a wrong offset!");
static_assert(offsetof(UBasicPager_C, MaxPage) == 0x0002A4, "Member 'UBasicPager_C::MaxPage' has a wrong offset!");
static_assert(offsetof(UBasicPager_C, OnPageChange) == 0x0002A8, "Member 'UBasicPager_C::OnPageChange' has a wrong offset!");

}

