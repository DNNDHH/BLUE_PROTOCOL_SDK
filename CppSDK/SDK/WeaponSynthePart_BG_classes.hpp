#pragma once

 

// Package: WeaponSynthePart_BG

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WeaponSynthePart_BG.WeaponSynthePart_BG_C
// 0x0018 (0x0290 - 0x0278)
class UWeaponSynthePart_BG_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Header;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture2D*                             Texture;                                           // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WeaponSynthePart_BG(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeaponSynthePart_BG_C">();
	}
	static class UWeaponSynthePart_BG_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponSynthePart_BG_C>();
	}
};
static_assert(alignof(UWeaponSynthePart_BG_C) == 0x000008, "Wrong alignment on UWeaponSynthePart_BG_C");
static_assert(sizeof(UWeaponSynthePart_BG_C) == 0x000290, "Wrong size on UWeaponSynthePart_BG_C");
static_assert(offsetof(UWeaponSynthePart_BG_C, UberGraphFrame) == 0x000278, "Member 'UWeaponSynthePart_BG_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_BG_C, Header) == 0x000280, "Member 'UWeaponSynthePart_BG_C::Header' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_BG_C, Texture) == 0x000288, "Member 'UWeaponSynthePart_BG_C::Texture' has a wrong offset!");

}

