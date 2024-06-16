#pragma once

 

// Package: PlatformIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PlatformIcon.PlatformIcon_C
// 0x0010 (0x0288 - 0x0278)
class UPlatformIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Pf_img;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PlatformIcon(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void InitByType(ESBPlatformType Type, bool bIsActive);
	void InitbyId(int32 ID, bool bIsActive);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlatformIcon_C">();
	}
	static class UPlatformIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlatformIcon_C>();
	}
};
static_assert(alignof(UPlatformIcon_C) == 0x000008, "Wrong alignment on UPlatformIcon_C");
static_assert(sizeof(UPlatformIcon_C) == 0x000288, "Wrong size on UPlatformIcon_C");
static_assert(offsetof(UPlatformIcon_C, UberGraphFrame) == 0x000278, "Member 'UPlatformIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlatformIcon_C, Pf_img) == 0x000280, "Member 'UPlatformIcon_C::Pf_img' has a wrong offset!");

}

