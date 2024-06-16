#pragma once

 

// Package: ObjectSelectCursorComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass ObjectSelectCursorComponent.ObjectSelectCursorComponent_C
// 0x0010 (0x0410 - 0x0400)
class UObjectSelectCursorComponent_C final : public USBWidgetComponent2D
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0400(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UObject*                                CurrentTarget;                                     // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ObjectSelectCursorComponent(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void GetDisplayLocation(const struct FSBInteractionInfo& InteractionInfo, struct FVector* DisplayLocation);
	void UpdateDisplayLocation();
	void InitializeAtFirstLoadingComplete();

	void IsLocallyControlled(bool* bIsLocallyControlled) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ObjectSelectCursorComponent_C">();
	}
	static class UObjectSelectCursorComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UObjectSelectCursorComponent_C>();
	}
};
static_assert(alignof(UObjectSelectCursorComponent_C) == 0x000010, "Wrong alignment on UObjectSelectCursorComponent_C");
static_assert(sizeof(UObjectSelectCursorComponent_C) == 0x000410, "Wrong size on UObjectSelectCursorComponent_C");
static_assert(offsetof(UObjectSelectCursorComponent_C, UberGraphFrame) == 0x000400, "Member 'UObjectSelectCursorComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UObjectSelectCursorComponent_C, CurrentTarget) == 0x000408, "Member 'UObjectSelectCursorComponent_C::CurrentTarget' has a wrong offset!");

}

