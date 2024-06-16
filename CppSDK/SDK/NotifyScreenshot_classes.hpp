#pragma once

 

// Package: NotifyScreenshot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass NotifyScreenshot.NotifyScreenshot_C
// 0x0010 (0x0288 - 0x0278)
class UNotifyScreenshot_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           MessageList;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_NotifyScreenshot(int32 EntryPoint);
	void FinishScreenshot(class UObject* Sender, class UObject* Param);
	void PrepareScreens(class UObject* Sender, class UObject* Param);
	void OnScreenshotCaptured(class UObject* Sender, class UObject* Param);
	void AddScreenshotCaptured(const class FString& Filename);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void AddNotifyMessageItem(class UUserWidget* Widget, class UAkAudioEvent* Sound);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NotifyScreenshot_C">();
	}
	static class UNotifyScreenshot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNotifyScreenshot_C>();
	}
};
static_assert(alignof(UNotifyScreenshot_C) == 0x000008, "Wrong alignment on UNotifyScreenshot_C");
static_assert(sizeof(UNotifyScreenshot_C) == 0x000288, "Wrong size on UNotifyScreenshot_C");
static_assert(offsetof(UNotifyScreenshot_C, UberGraphFrame) == 0x000278, "Member 'UNotifyScreenshot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNotifyScreenshot_C, MessageList) == 0x000280, "Member 'UNotifyScreenshot_C::MessageList' has a wrong offset!");

}

