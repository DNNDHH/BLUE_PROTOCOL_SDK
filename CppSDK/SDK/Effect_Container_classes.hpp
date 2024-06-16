#pragma once

 

// Package: Effect_Container

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Effect_Container.Effect_Container_C
// 0x0018 (0x0290 - 0x0278)
class UEffect_Container_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USwitchingTitle_C*                      Effect_ContainerTab;                               // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_Ability;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Effect_Container(int32 EntryPoint);
	void BndEvt__Effect_Container_Effect_ContainerTab_K2Node_ComponentBoundEvent_0_OnEventSwitchingTitle__DelegateSignature(bool IsOpen);
	void SetEffectList(class FName MapId, const struct FPioneerAbilityList& PioneerAbilityList, class USBWarehouseAbilityComponent* WarehouseAbilityComponent, bool IsShowTooltip, bool IsShowValue);
	void CreateEffectActiveWidget(const struct FSBWarehouseAbilityListUIInfo& SBWarehouseAbilityListUIInfo, class USBWarehouseAbilityComponent* WarehouseAbilityComponent, bool IsShowTooltip, bool IsShowValue);
	void SetTitle(class FName InTextID);

	int32 GetValue(const int32 RecepiId) const;
	class FString GetTooltipText(class USBWarehouseAbilityComponent* WarehouseAbilityComponent, const int32 ID) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Effect_Container_C">();
	}
	static class UEffect_Container_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEffect_Container_C>();
	}
};
static_assert(alignof(UEffect_Container_C) == 0x000008, "Wrong alignment on UEffect_Container_C");
static_assert(sizeof(UEffect_Container_C) == 0x000290, "Wrong size on UEffect_Container_C");
static_assert(offsetof(UEffect_Container_C, UberGraphFrame) == 0x000278, "Member 'UEffect_Container_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEffect_Container_C, Effect_ContainerTab) == 0x000280, "Member 'UEffect_Container_C::Effect_ContainerTab' has a wrong offset!");
static_assert(offsetof(UEffect_Container_C, VB_Ability) == 0x000288, "Member 'UEffect_Container_C::VB_Ability' has a wrong offset!");

}

