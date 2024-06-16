#pragma once

 

// Package: BP_P012HUDComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_P012HUDComponent.BP_P012HUDComponent_C
// 0x0020 (0x00E8 - 0x00C8)
class UBP_P012HUDComponent_C final : public USBClassHUDComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UP012HUDGlitter_C*                      HUDGlitter;                                        // 0x00D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          GlitterModeUIVisibility;                           // 0x00D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F60[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPCRebellionComponent*                As_SBPCRebellion_Component;                        // 0x00E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_P012HUDComponent(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void UnbindUIVisibleSettingChange();
	void UnbindOnChangeShowAlwaysHUD();
	void BindOnChangeShowAlwaysHUD();
	void BindUIVisibleSettingChange();
	void CustomEvent_1(const bool bIsShow);
	void CustomEvent(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
	void UpdateGlitterModeUI();
	void SetGlitterModeUIVisibility(bool Visible);
	void OnBind();
	void OnUnbind();
	void OnUpdate();
	void OnCreateUI();
	void OnRemoveUI();
	void OnUpdateLayoutView();
	void UpdateDependent();

	ESBUIType GetUIType() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_P012HUDComponent_C">();
	}
	static class UBP_P012HUDComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_P012HUDComponent_C>();
	}
};
static_assert(alignof(UBP_P012HUDComponent_C) == 0x000008, "Wrong alignment on UBP_P012HUDComponent_C");
static_assert(sizeof(UBP_P012HUDComponent_C) == 0x0000E8, "Wrong size on UBP_P012HUDComponent_C");
static_assert(offsetof(UBP_P012HUDComponent_C, UberGraphFrame) == 0x0000C8, "Member 'UBP_P012HUDComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_P012HUDComponent_C, HUDGlitter) == 0x0000D0, "Member 'UBP_P012HUDComponent_C::HUDGlitter' has a wrong offset!");
static_assert(offsetof(UBP_P012HUDComponent_C, GlitterModeUIVisibility) == 0x0000D8, "Member 'UBP_P012HUDComponent_C::GlitterModeUIVisibility' has a wrong offset!");
static_assert(offsetof(UBP_P012HUDComponent_C, As_SBPCRebellion_Component) == 0x0000E0, "Member 'UBP_P012HUDComponent_C::As_SBPCRebellion_Component' has a wrong offset!");

}

