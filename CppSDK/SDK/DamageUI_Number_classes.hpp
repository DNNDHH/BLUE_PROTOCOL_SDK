#pragma once

 

// Package: DamageUI_Number

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DamageUI_Number.DamageUI_Number_C
// 0x0018 (0x0290 - 0x0278)
class UDamageUI_Number_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_Number;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture2D*                             Texture;                                           // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_DamageUI_Number(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DamageUI_Number_C">();
	}
	static class UDamageUI_Number_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDamageUI_Number_C>();
	}
};
static_assert(alignof(UDamageUI_Number_C) == 0x000008, "Wrong alignment on UDamageUI_Number_C");
static_assert(sizeof(UDamageUI_Number_C) == 0x000290, "Wrong size on UDamageUI_Number_C");
static_assert(offsetof(UDamageUI_Number_C, UberGraphFrame) == 0x000278, "Member 'UDamageUI_Number_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDamageUI_Number_C, Image_Number) == 0x000280, "Member 'UDamageUI_Number_C::Image_Number' has a wrong offset!");
static_assert(offsetof(UDamageUI_Number_C, Texture) == 0x000288, "Member 'UDamageUI_Number_C::Texture' has a wrong offset!");

}

