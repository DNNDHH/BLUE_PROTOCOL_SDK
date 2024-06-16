#pragma once

 

// Package: CmnAlertIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CmnAlertIcon.CmnAlertIcon_C
// 0x0028 (0x02A0 - 0x0278)
class UCmnAlertIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 AlertIcon01;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 AlertIcon02;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsYellow;                                          // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_CmnAlertIcon(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void ResetIconToDefault();
	void SetAlertType(bool Param_IsYellow);
	void SetAlertTypeYellow();
	void SetAlertTypeRed();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CmnAlertIcon_C">();
	}
	static class UCmnAlertIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCmnAlertIcon_C>();
	}
};
static_assert(alignof(UCmnAlertIcon_C) == 0x000008, "Wrong alignment on UCmnAlertIcon_C");
static_assert(sizeof(UCmnAlertIcon_C) == 0x0002A0, "Wrong size on UCmnAlertIcon_C");
static_assert(offsetof(UCmnAlertIcon_C, UberGraphFrame) == 0x000278, "Member 'UCmnAlertIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCmnAlertIcon_C, AlertIcon01) == 0x000280, "Member 'UCmnAlertIcon_C::AlertIcon01' has a wrong offset!");
static_assert(offsetof(UCmnAlertIcon_C, AlertIcon02) == 0x000288, "Member 'UCmnAlertIcon_C::AlertIcon02' has a wrong offset!");
static_assert(offsetof(UCmnAlertIcon_C, Switcher) == 0x000290, "Member 'UCmnAlertIcon_C::Switcher' has a wrong offset!");
static_assert(offsetof(UCmnAlertIcon_C, IsYellow) == 0x000298, "Member 'UCmnAlertIcon_C::IsYellow' has a wrong offset!");

}

