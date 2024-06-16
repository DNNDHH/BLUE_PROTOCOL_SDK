#pragma once

 

// Package: WBP_RmShopMaintenanceUpdeta

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_RmShopMaintenanceUpdeta.WBP_RmShopMaintenanceUpdeta_C
// 0x0030 (0x02A8 - 0x0278)
class UWBP_RmShopMaintenanceUpdeta_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCmnBtn27_C*                            CmnBtn27;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_587;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnClose__DelegateSignature();
	void ExecuteUbergraph_WBP_RmShopMaintenanceUpdeta(int32 EntryPoint);
	void BndEvt__WBP_RmShopMaintenanceUpdeta_CmnBtn27_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_RmShopMaintenanceUpdeta_C">();
	}
	static class UWBP_RmShopMaintenanceUpdeta_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_RmShopMaintenanceUpdeta_C>();
	}
};
static_assert(alignof(UWBP_RmShopMaintenanceUpdeta_C) == 0x000008, "Wrong alignment on UWBP_RmShopMaintenanceUpdeta_C");
static_assert(sizeof(UWBP_RmShopMaintenanceUpdeta_C) == 0x0002A8, "Wrong size on UWBP_RmShopMaintenanceUpdeta_C");
static_assert(offsetof(UWBP_RmShopMaintenanceUpdeta_C, UberGraphFrame) == 0x000278, "Member 'UWBP_RmShopMaintenanceUpdeta_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_RmShopMaintenanceUpdeta_C, CmnBtn27) == 0x000280, "Member 'UWBP_RmShopMaintenanceUpdeta_C::CmnBtn27' has a wrong offset!");
static_assert(offsetof(UWBP_RmShopMaintenanceUpdeta_C, Image_587) == 0x000288, "Member 'UWBP_RmShopMaintenanceUpdeta_C::Image_587' has a wrong offset!");
static_assert(offsetof(UWBP_RmShopMaintenanceUpdeta_C, UIBlocker) == 0x000290, "Member 'UWBP_RmShopMaintenanceUpdeta_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UWBP_RmShopMaintenanceUpdeta_C, OnClose) == 0x000298, "Member 'UWBP_RmShopMaintenanceUpdeta_C::OnClose' has a wrong offset!");

}

