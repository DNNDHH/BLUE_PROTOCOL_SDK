#pragma once

 

// Package: CommunicateSettingMenu_FaceBg

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommunicateSettingMenu_FaceBg.CommunicateSettingMenu_FaceBg_C
// 0x00C0 (0x0338 - 0x0278)
class UCommunicateSettingMenu_FaceBg_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel_100;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnImageThrobber_C*                    CmnImageThrobber;                                  // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FaceBg;                                            // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_145;                                // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                            DefaultFaceBrush;                                  // 0x02B0(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_CommunicateSettingMenu_FaceBg(int32 EntryPoint);
	void ResetData();
	void SetData(float InScale, const struct FVector2D& InPosition, const class FString& URL);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommunicateSettingMenu_FaceBg_C">();
	}
	static class UCommunicateSettingMenu_FaceBg_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommunicateSettingMenu_FaceBg_C>();
	}
};
static_assert(alignof(UCommunicateSettingMenu_FaceBg_C) == 0x000008, "Wrong alignment on UCommunicateSettingMenu_FaceBg_C");
static_assert(sizeof(UCommunicateSettingMenu_FaceBg_C) == 0x000338, "Wrong size on UCommunicateSettingMenu_FaceBg_C");
static_assert(offsetof(UCommunicateSettingMenu_FaceBg_C, UberGraphFrame) == 0x000278, "Member 'UCommunicateSettingMenu_FaceBg_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_FaceBg_C, CanvasPanel_100) == 0x000280, "Member 'UCommunicateSettingMenu_FaceBg_C::CanvasPanel_100' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_FaceBg_C, CmnImageThrobber) == 0x000288, "Member 'UCommunicateSettingMenu_FaceBg_C::CmnImageThrobber' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_FaceBg_C, FaceBg) == 0x000290, "Member 'UCommunicateSettingMenu_FaceBg_C::FaceBg' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_FaceBg_C, Image) == 0x000298, "Member 'UCommunicateSettingMenu_FaceBg_C::Image' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_FaceBg_C, Image_2) == 0x0002A0, "Member 'UCommunicateSettingMenu_FaceBg_C::Image_2' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_FaceBg_C, WidgetSwitcher_145) == 0x0002A8, "Member 'UCommunicateSettingMenu_FaceBg_C::WidgetSwitcher_145' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_FaceBg_C, DefaultFaceBrush) == 0x0002B0, "Member 'UCommunicateSettingMenu_FaceBg_C::DefaultFaceBrush' has a wrong offset!");

}

