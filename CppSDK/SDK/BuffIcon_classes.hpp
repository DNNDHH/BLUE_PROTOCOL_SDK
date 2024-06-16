#pragma once

 

// Package: BuffIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BuffIcon.BuffIcon_C
// 0x0018 (0x02E0 - 0x02C8)
class UBuffIcon_C final : public USBBuffIcon
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       NearLimit;                                         // 0x02D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BuffIcon(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	bool OnSetup(ESBStatusAilmentIconType InType);
	void PlayAnim();
	void StopAnim();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BuffIcon_C">();
	}
	static class UBuffIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBuffIcon_C>();
	}
};
static_assert(alignof(UBuffIcon_C) == 0x000008, "Wrong alignment on UBuffIcon_C");
static_assert(sizeof(UBuffIcon_C) == 0x0002E0, "Wrong size on UBuffIcon_C");
static_assert(offsetof(UBuffIcon_C, UberGraphFrame) == 0x0002C8, "Member 'UBuffIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBuffIcon_C, NearLimit) == 0x0002D0, "Member 'UBuffIcon_C::NearLimit' has a wrong offset!");
static_assert(offsetof(UBuffIcon_C, Icon) == 0x0002D8, "Member 'UBuffIcon_C::Icon' has a wrong offset!");

}

