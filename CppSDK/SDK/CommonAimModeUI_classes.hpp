#pragma once

 

// Package: CommonAimModeUI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommonAimModeUI.CommonAimModeUI_C
// 0x0020 (0x0298 - 0x0278)
class UCommonAimModeUI_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           Reticle_NeutralGrp;                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Reticle_RayHitGrp;                                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          ShooterType;                                       // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ESBClassType                                  ClassType;                                         // 0x0291(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CommonAimModeUI(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Set_Ray_Hit(bool bReyHit);
	void SetClassType(ESBClassType Param_ClassType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonAimModeUI_C">();
	}
	static class UCommonAimModeUI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonAimModeUI_C>();
	}
};
static_assert(alignof(UCommonAimModeUI_C) == 0x000008, "Wrong alignment on UCommonAimModeUI_C");
static_assert(sizeof(UCommonAimModeUI_C) == 0x000298, "Wrong size on UCommonAimModeUI_C");
static_assert(offsetof(UCommonAimModeUI_C, UberGraphFrame) == 0x000278, "Member 'UCommonAimModeUI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommonAimModeUI_C, Reticle_NeutralGrp) == 0x000280, "Member 'UCommonAimModeUI_C::Reticle_NeutralGrp' has a wrong offset!");
static_assert(offsetof(UCommonAimModeUI_C, Reticle_RayHitGrp) == 0x000288, "Member 'UCommonAimModeUI_C::Reticle_RayHitGrp' has a wrong offset!");
static_assert(offsetof(UCommonAimModeUI_C, ShooterType) == 0x000290, "Member 'UCommonAimModeUI_C::ShooterType' has a wrong offset!");
static_assert(offsetof(UCommonAimModeUI_C, ClassType) == 0x000291, "Member 'UCommonAimModeUI_C::ClassType' has a wrong offset!");

}

