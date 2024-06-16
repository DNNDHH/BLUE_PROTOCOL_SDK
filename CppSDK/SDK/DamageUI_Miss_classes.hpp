#pragma once

 

// Package: DamageUI_Miss

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DamageUI_Miss.DamageUI_Miss_C
// 0x0010 (0x0288 - 0x0278)
class UDamageUI_Miss_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 MissImage;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_DamageUI_Miss(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DamageUI_Miss_C">();
	}
	static class UDamageUI_Miss_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDamageUI_Miss_C>();
	}
};
static_assert(alignof(UDamageUI_Miss_C) == 0x000008, "Wrong alignment on UDamageUI_Miss_C");
static_assert(sizeof(UDamageUI_Miss_C) == 0x000288, "Wrong size on UDamageUI_Miss_C");
static_assert(offsetof(UDamageUI_Miss_C, UberGraphFrame) == 0x000278, "Member 'UDamageUI_Miss_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDamageUI_Miss_C, MissImage) == 0x000280, "Member 'UDamageUI_Miss_C::MissImage' has a wrong offset!");

}

