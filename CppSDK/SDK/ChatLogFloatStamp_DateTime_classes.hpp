#pragma once

 

// Package: ChatLogFloatStamp_DateTime

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ChatLogFloatStamp_DateTime.ChatLogFloatStamp_DateTime_C
// 0x0010 (0x0288 - 0x0278)
class UChatLogFloatStamp_DateTime_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBDateTimeTextBlock*                   SBDateTimeTextBlock_Limit;                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ChatLogFloatStamp_DateTime(int32 EntryPoint);
	void SetExpiryDateTime(const struct FDateTime& ExpiryDateTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChatLogFloatStamp_DateTime_C">();
	}
	static class UChatLogFloatStamp_DateTime_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChatLogFloatStamp_DateTime_C>();
	}
};
static_assert(alignof(UChatLogFloatStamp_DateTime_C) == 0x000008, "Wrong alignment on UChatLogFloatStamp_DateTime_C");
static_assert(sizeof(UChatLogFloatStamp_DateTime_C) == 0x000288, "Wrong size on UChatLogFloatStamp_DateTime_C");
static_assert(offsetof(UChatLogFloatStamp_DateTime_C, UberGraphFrame) == 0x000278, "Member 'UChatLogFloatStamp_DateTime_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UChatLogFloatStamp_DateTime_C, SBDateTimeTextBlock_Limit) == 0x000280, "Member 'UChatLogFloatStamp_DateTime_C::SBDateTimeTextBlock_Limit' has a wrong offset!");

}

