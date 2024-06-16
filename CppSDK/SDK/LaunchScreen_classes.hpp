#pragma once

 

// Package: LaunchScreen

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LaunchScreen.LaunchScreen_C
// 0x0030 (0x02A8 - 0x0278)
class ULaunchScreen_C final : public UUserWidget
{
public:
	class UImage*                                 BaseImage;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_2;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULoading_C*                             Loading;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector2D                              CachedViewportSize;                                // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UpdateAspectRate();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LaunchScreen_C">();
	}
	static class ULaunchScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULaunchScreen_C>();
	}
};
static_assert(alignof(ULaunchScreen_C) == 0x000008, "Wrong alignment on ULaunchScreen_C");
static_assert(sizeof(ULaunchScreen_C) == 0x0002A8, "Wrong size on ULaunchScreen_C");
static_assert(offsetof(ULaunchScreen_C, BaseImage) == 0x000278, "Member 'ULaunchScreen_C::BaseImage' has a wrong offset!");
static_assert(offsetof(ULaunchScreen_C, CanvasPanel) == 0x000280, "Member 'ULaunchScreen_C::CanvasPanel' has a wrong offset!");
static_assert(offsetof(ULaunchScreen_C, CanvasPanel_2) == 0x000288, "Member 'ULaunchScreen_C::CanvasPanel_2' has a wrong offset!");
static_assert(offsetof(ULaunchScreen_C, Loading) == 0x000290, "Member 'ULaunchScreen_C::Loading' has a wrong offset!");
static_assert(offsetof(ULaunchScreen_C, UIBlocker) == 0x000298, "Member 'ULaunchScreen_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(ULaunchScreen_C, CachedViewportSize) == 0x0002A0, "Member 'ULaunchScreen_C::CachedViewportSize' has a wrong offset!");

}

