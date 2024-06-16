#pragma once

 

// Package: BP_P020HUDComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_P020HUDComponent.BP_P020HUDComponent_C
// 0x0008 (0x00D0 - 0x00C8)
class UBP_P020HUDComponent_C final : public USBClassHUDComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_P020HUDComponent(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void UnbindUIVisibleSettingChange();
	void UnbindOnChangeShowAlwaysHUD();
	void BindOnChangeShowAlwaysHUD();
	void BindUIVisibleSettingChange();
	void OnChangeShowAlwaysHUD_event(const bool bIsShow);
	void CustomEvent(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
	void OnBind();
	void OnUnbind();
	void OnCreateUI();
	void OnRemoveUI();
	void OnUpdateLayoutView();

	ESBUIType GetUIType() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_P020HUDComponent_C">();
	}
	static class UBP_P020HUDComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_P020HUDComponent_C>();
	}
};
static_assert(alignof(UBP_P020HUDComponent_C) == 0x000008, "Wrong alignment on UBP_P020HUDComponent_C");
static_assert(sizeof(UBP_P020HUDComponent_C) == 0x0000D0, "Wrong size on UBP_P020HUDComponent_C");
static_assert(offsetof(UBP_P020HUDComponent_C, UberGraphFrame) == 0x0000C8, "Member 'UBP_P020HUDComponent_C::UberGraphFrame' has a wrong offset!");

}

