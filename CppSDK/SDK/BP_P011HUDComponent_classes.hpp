#pragma once

 

// Package: BP_P011HUDComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_P011HUDComponent.BP_P011HUDComponent_C
// 0x0010 (0x00D8 - 0x00C8)
class UBP_P011HUDComponent_C final : public USBClassHUDComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         CurrMp;                                            // 0x00D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrMpRate;                                        // 0x00D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_P011HUDComponent(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void UnbindUIVisibleSettingChange();
	void BindUIVisibleSettingChange();
	void UIVisibleSettingChangeDelegate_Event_0(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
	void OnChangeShowAlwaysHUD_event(const bool bIsShow);
	void UnbindOnChangeShowAlwaysHUD();
	void BindOnChangeShowAlwaysHUD();
	void OnBind();
	void OnUnbind();
	void OnUpdate();
	void OnCreateUI();
	void OnRemoveUI();
	void OnUpdateMpGaugeUI();
	void OnUpdateLayoutView();

	ESBUIType GetUIType() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_P011HUDComponent_C">();
	}
	static class UBP_P011HUDComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_P011HUDComponent_C>();
	}
};
static_assert(alignof(UBP_P011HUDComponent_C) == 0x000008, "Wrong alignment on UBP_P011HUDComponent_C");
static_assert(sizeof(UBP_P011HUDComponent_C) == 0x0000D8, "Wrong size on UBP_P011HUDComponent_C");
static_assert(offsetof(UBP_P011HUDComponent_C, UberGraphFrame) == 0x0000C8, "Member 'UBP_P011HUDComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_P011HUDComponent_C, CurrMp) == 0x0000D0, "Member 'UBP_P011HUDComponent_C::CurrMp' has a wrong offset!");
static_assert(offsetof(UBP_P011HUDComponent_C, CurrMpRate) == 0x0000D4, "Member 'UBP_P011HUDComponent_C::CurrMpRate' has a wrong offset!");

}

