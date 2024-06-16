#pragma once

 

// Package: WBP_RmShopMaintenanceShop

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_RmShopMaintenanceShop.WBP_RmShopMaintenanceShop_C
// 0x0028 (0x02A0 - 0x0278)
class UWBP_RmShopMaintenanceShop_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            SBButton_C_94;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnClose__DelegateSignature();
	void ExecuteUbergraph_WBP_RmShopMaintenanceShop(int32 EntryPoint);
	void Destruct();
	void CloseEvent();
	void Construct();
	void BndEvt__WBP_RmShopMaintenanceAll_SBButton_C_94_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_RmShopMaintenanceShop_C">();
	}
	static class UWBP_RmShopMaintenanceShop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_RmShopMaintenanceShop_C>();
	}
};
static_assert(alignof(UWBP_RmShopMaintenanceShop_C) == 0x000008, "Wrong alignment on UWBP_RmShopMaintenanceShop_C");
static_assert(sizeof(UWBP_RmShopMaintenanceShop_C) == 0x0002A0, "Wrong size on UWBP_RmShopMaintenanceShop_C");
static_assert(offsetof(UWBP_RmShopMaintenanceShop_C, UberGraphFrame) == 0x000278, "Member 'UWBP_RmShopMaintenanceShop_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_RmShopMaintenanceShop_C, SBButton_C_94) == 0x000280, "Member 'UWBP_RmShopMaintenanceShop_C::SBButton_C_94' has a wrong offset!");
static_assert(offsetof(UWBP_RmShopMaintenanceShop_C, UIBlocker) == 0x000288, "Member 'UWBP_RmShopMaintenanceShop_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UWBP_RmShopMaintenanceShop_C, OnClose) == 0x000290, "Member 'UWBP_RmShopMaintenanceShop_C::OnClose' has a wrong offset!");

}

