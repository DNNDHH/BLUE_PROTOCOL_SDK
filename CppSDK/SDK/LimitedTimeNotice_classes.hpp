#pragma once

 

// Package: LimitedTimeNotice

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LimitedTimeNotice.LimitedTimeNotice_C
// 0x0028 (0x02A0 - 0x0278)
class ULimitedTimeNotice_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_LimitedMerk;                                 // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBDateTimeTextBlock*                   SBDateTimeTextBlock_Term;                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bStamp;                                            // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_9C7F[0x7];                                     // 0x0291(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              EndTime;                                           // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_LimitedTimeNotice(int32 EntryPoint);
	void Update();
	void Set_Limited_Time(const struct FDateTime& InEndTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LimitedTimeNotice_C">();
	}
	static class ULimitedTimeNotice_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULimitedTimeNotice_C>();
	}
};
static_assert(alignof(ULimitedTimeNotice_C) == 0x000008, "Wrong alignment on ULimitedTimeNotice_C");
static_assert(sizeof(ULimitedTimeNotice_C) == 0x0002A0, "Wrong size on ULimitedTimeNotice_C");
static_assert(offsetof(ULimitedTimeNotice_C, UberGraphFrame) == 0x000278, "Member 'ULimitedTimeNotice_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULimitedTimeNotice_C, Image_LimitedMerk) == 0x000280, "Member 'ULimitedTimeNotice_C::Image_LimitedMerk' has a wrong offset!");
static_assert(offsetof(ULimitedTimeNotice_C, SBDateTimeTextBlock_Term) == 0x000288, "Member 'ULimitedTimeNotice_C::SBDateTimeTextBlock_Term' has a wrong offset!");
static_assert(offsetof(ULimitedTimeNotice_C, bStamp) == 0x000290, "Member 'ULimitedTimeNotice_C::bStamp' has a wrong offset!");
static_assert(offsetof(ULimitedTimeNotice_C, EndTime) == 0x000298, "Member 'ULimitedTimeNotice_C::EndTime' has a wrong offset!");

}

