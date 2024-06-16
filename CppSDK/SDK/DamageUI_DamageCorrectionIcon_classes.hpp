#pragma once

 

// Package: DamageUI_DamageCorrectionIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DamageUI_DamageCorrectionIcon.DamageUI_DamageCorrectionIcon_C
// 0x0018 (0x0290 - 0x0278)
class UDamageUI_DamageCorrectionIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_Icon;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture2D*                             Texture;                                           // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_DamageUI_DamageCorrectionIcon(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DamageUI_DamageCorrectionIcon_C">();
	}
	static class UDamageUI_DamageCorrectionIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDamageUI_DamageCorrectionIcon_C>();
	}
};
static_assert(alignof(UDamageUI_DamageCorrectionIcon_C) == 0x000008, "Wrong alignment on UDamageUI_DamageCorrectionIcon_C");
static_assert(sizeof(UDamageUI_DamageCorrectionIcon_C) == 0x000290, "Wrong size on UDamageUI_DamageCorrectionIcon_C");
static_assert(offsetof(UDamageUI_DamageCorrectionIcon_C, UberGraphFrame) == 0x000278, "Member 'UDamageUI_DamageCorrectionIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDamageUI_DamageCorrectionIcon_C, Image_Icon) == 0x000280, "Member 'UDamageUI_DamageCorrectionIcon_C::Image_Icon' has a wrong offset!");
static_assert(offsetof(UDamageUI_DamageCorrectionIcon_C, Texture) == 0x000288, "Member 'UDamageUI_DamageCorrectionIcon_C::Texture' has a wrong offset!");

}

