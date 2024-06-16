#pragma once

 

// Package: History_TimerIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass History_TimerIcon.History_TimerIcon_C
// 0x0020 (0x0298 - 0x0278)
class UHistory_TimerIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           Target;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonIconToolTipContent_DateTime_C*   ToolTip;                                           // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              Time;                                              // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_History_TimerIcon(int32 EntryPoint);
	void Destruct();
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void SetDateTime(const struct FDateTime& Param_Time);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"History_TimerIcon_C">();
	}
	static class UHistory_TimerIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHistory_TimerIcon_C>();
	}
};
static_assert(alignof(UHistory_TimerIcon_C) == 0x000008, "Wrong alignment on UHistory_TimerIcon_C");
static_assert(sizeof(UHistory_TimerIcon_C) == 0x000298, "Wrong size on UHistory_TimerIcon_C");
static_assert(offsetof(UHistory_TimerIcon_C, UberGraphFrame) == 0x000278, "Member 'UHistory_TimerIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHistory_TimerIcon_C, Target) == 0x000280, "Member 'UHistory_TimerIcon_C::Target' has a wrong offset!");
static_assert(offsetof(UHistory_TimerIcon_C, ToolTip) == 0x000288, "Member 'UHistory_TimerIcon_C::ToolTip' has a wrong offset!");
static_assert(offsetof(UHistory_TimerIcon_C, Time) == 0x000290, "Member 'UHistory_TimerIcon_C::Time' has a wrong offset!");

}

