#pragma once

 

// Package: TickerMessage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "TickerMessageStatus_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TickerMessage.TickerMessage_C
// 0x0038 (0x02B0 - 0x0278)
class UTickerMessage_C final : public USBTickerMessageBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_BG;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       Text;                                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               VisibleRoot;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         MessageIndex;                                      // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETickerMessageStatus                          Status;                                            // 0x029C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45F7[0x3];                                     // 0x029D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ScrollSpeed;                                       // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         IntervalElapsed;                                   // 0x02A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CheckTimerHandle;                                  // 0x02A8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_TickerMessage(int32 EntryPoint);
	void DumpDebugInfo();
	void Destruct();
	void OnUIVisibleSettingChange(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
	void OnTickerMessageChanged();
	void Construct();
	void Proc_Interval(float DeltaTime);
	void Proc_Scroll(float DeltaTime);
	void Proc_Idle();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnMessageChange();
	void CheckNextMessage();
	void OnCheckTime();
	void DumpDebugInfo_Internal(const class FString& InTrigger);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TickerMessage_C">();
	}
	static class UTickerMessage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTickerMessage_C>();
	}
};
static_assert(alignof(UTickerMessage_C) == 0x000008, "Wrong alignment on UTickerMessage_C");
static_assert(sizeof(UTickerMessage_C) == 0x0002B0, "Wrong size on UTickerMessage_C");
static_assert(offsetof(UTickerMessage_C, UberGraphFrame) == 0x000278, "Member 'UTickerMessage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTickerMessage_C, Image_BG) == 0x000280, "Member 'UTickerMessage_C::Image_BG' has a wrong offset!");
static_assert(offsetof(UTickerMessage_C, Text) == 0x000288, "Member 'UTickerMessage_C::Text' has a wrong offset!");
static_assert(offsetof(UTickerMessage_C, VisibleRoot) == 0x000290, "Member 'UTickerMessage_C::VisibleRoot' has a wrong offset!");
static_assert(offsetof(UTickerMessage_C, MessageIndex) == 0x000298, "Member 'UTickerMessage_C::MessageIndex' has a wrong offset!");
static_assert(offsetof(UTickerMessage_C, Status) == 0x00029C, "Member 'UTickerMessage_C::Status' has a wrong offset!");
static_assert(offsetof(UTickerMessage_C, ScrollSpeed) == 0x0002A0, "Member 'UTickerMessage_C::ScrollSpeed' has a wrong offset!");
static_assert(offsetof(UTickerMessage_C, IntervalElapsed) == 0x0002A4, "Member 'UTickerMessage_C::IntervalElapsed' has a wrong offset!");
static_assert(offsetof(UTickerMessage_C, CheckTimerHandle) == 0x0002A8, "Member 'UTickerMessage_C::CheckTimerHandle' has a wrong offset!");

}

