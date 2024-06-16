#pragma once

 

// Package: PlaceGuide

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PlaceGuide.PlaceGuide_C
// 0x0030 (0x02A8 - 0x0278)
class UPlaceGuide_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPlaceGuideContent_C*                   Content;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               DemoGroup;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   CurLocationId;                                     // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurPriority;                                       // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bRequest;                                          // 0x029C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E71[0x3];                                     // 0x029D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlaceGuideContent_C*                   Content_Demo;                                      // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PlaceGuide(int32 EntryPoint);
	void OnPlayEnd_Event_0();
	void ShowRequestDemo(class FName InLocationID);
	void BndEvt__ContentWidget_K2Node_ComponentBoundEvent_0_OnPlayEnd__DelegateSignature();
	void ShowRequest(class FName LocationId, int32 Param_Priority);
	void HideRequest();
	void CheckRequest();
	void HideRequestDemo();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlaceGuide_C">();
	}
	static class UPlaceGuide_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlaceGuide_C>();
	}
};
static_assert(alignof(UPlaceGuide_C) == 0x000008, "Wrong alignment on UPlaceGuide_C");
static_assert(sizeof(UPlaceGuide_C) == 0x0002A8, "Wrong size on UPlaceGuide_C");
static_assert(offsetof(UPlaceGuide_C, UberGraphFrame) == 0x000278, "Member 'UPlaceGuide_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlaceGuide_C, Content) == 0x000280, "Member 'UPlaceGuide_C::Content' has a wrong offset!");
static_assert(offsetof(UPlaceGuide_C, DemoGroup) == 0x000288, "Member 'UPlaceGuide_C::DemoGroup' has a wrong offset!");
static_assert(offsetof(UPlaceGuide_C, CurLocationId) == 0x000290, "Member 'UPlaceGuide_C::CurLocationId' has a wrong offset!");
static_assert(offsetof(UPlaceGuide_C, CurPriority) == 0x000298, "Member 'UPlaceGuide_C::CurPriority' has a wrong offset!");
static_assert(offsetof(UPlaceGuide_C, bRequest) == 0x00029C, "Member 'UPlaceGuide_C::bRequest' has a wrong offset!");
static_assert(offsetof(UPlaceGuide_C, Content_Demo) == 0x0002A0, "Member 'UPlaceGuide_C::Content_Demo' has a wrong offset!");

}

