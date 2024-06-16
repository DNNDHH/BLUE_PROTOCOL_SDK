#pragma once

 

// Package: WBP_StatusAlimentNotifyWidgetOwner

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_StatusAlimentNotifyWidgetOwner.WBP_StatusAlimentNotifyWidgetOwner_C
// 0x0020 (0x02B0 - 0x0290)
class UWBP_StatusAlimentNotifyWidgetOwner_C final : public USBStatusAlimentNotifyWidgetOwner
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class USBStatusAlimentNotifyWidget*>   SwapWidget;                                        // 0x0298(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          bCachedVisibility;                                 // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_WBP_StatusAlimentNotifyWidgetOwner(int32 EntryPoint);
	void Destruct();
	void OnUIVisibleSettingChange(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
	void Construct();
	void AddProcessing(const struct FSBStatusAilmentIconConfig& InStatusAilmentIconType, class AActor* InOwnerActor);
	void SetSystemVisibility(bool bVisibility);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_StatusAlimentNotifyWidgetOwner_C">();
	}
	static class UWBP_StatusAlimentNotifyWidgetOwner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_StatusAlimentNotifyWidgetOwner_C>();
	}
};
static_assert(alignof(UWBP_StatusAlimentNotifyWidgetOwner_C) == 0x000008, "Wrong alignment on UWBP_StatusAlimentNotifyWidgetOwner_C");
static_assert(sizeof(UWBP_StatusAlimentNotifyWidgetOwner_C) == 0x0002B0, "Wrong size on UWBP_StatusAlimentNotifyWidgetOwner_C");
static_assert(offsetof(UWBP_StatusAlimentNotifyWidgetOwner_C, UberGraphFrame) == 0x000290, "Member 'UWBP_StatusAlimentNotifyWidgetOwner_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_StatusAlimentNotifyWidgetOwner_C, SwapWidget) == 0x000298, "Member 'UWBP_StatusAlimentNotifyWidgetOwner_C::SwapWidget' has a wrong offset!");
static_assert(offsetof(UWBP_StatusAlimentNotifyWidgetOwner_C, bCachedVisibility) == 0x0002A8, "Member 'UWBP_StatusAlimentNotifyWidgetOwner_C::bCachedVisibility' has a wrong offset!");

}

