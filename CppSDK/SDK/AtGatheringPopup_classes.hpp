#pragma once

 

// Package: AtGatheringPopup

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AtGatheringPopup.AtGatheringPopup_C
// 0x0018 (0x0290 - 0x0278)
class UAtGatheringPopup_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_Balloon;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text;                                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AtGatheringPopup(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AtGatheringPopup_C">();
	}
	static class UAtGatheringPopup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAtGatheringPopup_C>();
	}
};
static_assert(alignof(UAtGatheringPopup_C) == 0x000008, "Wrong alignment on UAtGatheringPopup_C");
static_assert(sizeof(UAtGatheringPopup_C) == 0x000290, "Wrong size on UAtGatheringPopup_C");
static_assert(offsetof(UAtGatheringPopup_C, UberGraphFrame) == 0x000278, "Member 'UAtGatheringPopup_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAtGatheringPopup_C, Image_Balloon) == 0x000280, "Member 'UAtGatheringPopup_C::Image_Balloon' has a wrong offset!");
static_assert(offsetof(UAtGatheringPopup_C, Text) == 0x000288, "Member 'UAtGatheringPopup_C::Text' has a wrong offset!");

}

