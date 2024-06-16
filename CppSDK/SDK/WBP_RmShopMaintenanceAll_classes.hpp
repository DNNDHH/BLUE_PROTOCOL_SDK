#pragma once

 

// Package: WBP_RmShopMaintenanceAll

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_RmShopMaintenanceAll.WBP_RmShopMaintenanceAll_C
// 0x0040 (0x02B8 - 0x0278)
class UWBP_RmShopMaintenanceAll_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCmnBack01_C*                           CmnBack01;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_C_94;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnClose__DelegateSignature();
	void ExecuteUbergraph_WBP_RmShopMaintenanceAll(int32 EntryPoint);
	void Destruct();
	void Close();
	void CustomEvent_0();
	void Construct();
	void BndEvt__WBP_RmShopMaintenanceAll_SBButton_C_94_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_RmShopMaintenanceAll_CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_RmShopMaintenanceAll_C">();
	}
	static class UWBP_RmShopMaintenanceAll_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_RmShopMaintenanceAll_C>();
	}
};
static_assert(alignof(UWBP_RmShopMaintenanceAll_C) == 0x000008, "Wrong alignment on UWBP_RmShopMaintenanceAll_C");
static_assert(sizeof(UWBP_RmShopMaintenanceAll_C) == 0x0002B8, "Wrong size on UWBP_RmShopMaintenanceAll_C");
static_assert(offsetof(UWBP_RmShopMaintenanceAll_C, UberGraphFrame) == 0x000278, "Member 'UWBP_RmShopMaintenanceAll_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_RmShopMaintenanceAll_C, AnimOut) == 0x000280, "Member 'UWBP_RmShopMaintenanceAll_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UWBP_RmShopMaintenanceAll_C, AnimIn) == 0x000288, "Member 'UWBP_RmShopMaintenanceAll_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UWBP_RmShopMaintenanceAll_C, CmnBack01) == 0x000290, "Member 'UWBP_RmShopMaintenanceAll_C::CmnBack01' has a wrong offset!");
static_assert(offsetof(UWBP_RmShopMaintenanceAll_C, SBButton_C_94) == 0x000298, "Member 'UWBP_RmShopMaintenanceAll_C::SBButton_C_94' has a wrong offset!");
static_assert(offsetof(UWBP_RmShopMaintenanceAll_C, UIBlocker) == 0x0002A0, "Member 'UWBP_RmShopMaintenanceAll_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UWBP_RmShopMaintenanceAll_C, OnClose) == 0x0002A8, "Member 'UWBP_RmShopMaintenanceAll_C::OnClose' has a wrong offset!");

}

