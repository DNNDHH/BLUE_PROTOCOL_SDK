#pragma once

 

// Package: P020_MarkIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass P020_MarkIcon.P020_MarkIcon_C
// 0x0030 (0x02B0 - 0x0280)
class UP020_MarkIcon_C final : public USBP020_MarkIcon
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                BorderAnim;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchIcon;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         IconType;                                          // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IconVisibilityBP;                                  // 0x02AC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_P020_MarkIcon(int32 EntryPoint);
	void OnIconVisibilityEnd();
	void OnIconVisibilityStart();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void Show_Icon_BP(bool bVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"P020_MarkIcon_C">();
	}
	static class UP020_MarkIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UP020_MarkIcon_C>();
	}
};
static_assert(alignof(UP020_MarkIcon_C) == 0x000008, "Wrong alignment on UP020_MarkIcon_C");
static_assert(sizeof(UP020_MarkIcon_C) == 0x0002B0, "Wrong size on UP020_MarkIcon_C");
static_assert(offsetof(UP020_MarkIcon_C, UberGraphFrame) == 0x000280, "Member 'UP020_MarkIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UP020_MarkIcon_C, AnimOut) == 0x000288, "Member 'UP020_MarkIcon_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UP020_MarkIcon_C, AnimIn) == 0x000290, "Member 'UP020_MarkIcon_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UP020_MarkIcon_C, BorderAnim) == 0x000298, "Member 'UP020_MarkIcon_C::BorderAnim' has a wrong offset!");
static_assert(offsetof(UP020_MarkIcon_C, SwitchIcon) == 0x0002A0, "Member 'UP020_MarkIcon_C::SwitchIcon' has a wrong offset!");
static_assert(offsetof(UP020_MarkIcon_C, IconType) == 0x0002A8, "Member 'UP020_MarkIcon_C::IconType' has a wrong offset!");
static_assert(offsetof(UP020_MarkIcon_C, IconVisibilityBP) == 0x0002AC, "Member 'UP020_MarkIcon_C::IconVisibilityBP' has a wrong offset!");

}

