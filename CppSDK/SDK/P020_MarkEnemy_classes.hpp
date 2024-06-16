#pragma once

 

// Package: P020_MarkEnemy

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass P020_MarkEnemy.P020_MarkEnemy_C
// 0x0008 (0x02A0 - 0x0298)
class UP020_MarkEnemy_C final : public USBP020_MarkEnemy
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_P020_MarkEnemy(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"P020_MarkEnemy_C">();
	}
	static class UP020_MarkEnemy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UP020_MarkEnemy_C>();
	}
};
static_assert(alignof(UP020_MarkEnemy_C) == 0x000008, "Wrong alignment on UP020_MarkEnemy_C");
static_assert(sizeof(UP020_MarkEnemy_C) == 0x0002A0, "Wrong size on UP020_MarkEnemy_C");
static_assert(offsetof(UP020_MarkEnemy_C, UberGraphFrame) == 0x000298, "Member 'UP020_MarkEnemy_C::UberGraphFrame' has a wrong offset!");

}

