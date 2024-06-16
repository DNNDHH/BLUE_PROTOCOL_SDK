#pragma once

 

// Package: CaptureImageScreenShotQuest

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CaptureImageScreenShotQuest.CaptureImageScreenShotQuest_C
// 0x0018 (0x0290 - 0x0278)
class UCaptureImageScreenShotQuest_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 CaptueImage;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CaputureImageMat;                                  // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CaptureImageScreenShotQuest(int32 EntryPoint);
	void Construct();
	void SetCaptureImage(class UTexture2D* CaptureImage);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CaptureImageScreenShotQuest_C">();
	}
	static class UCaptureImageScreenShotQuest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCaptureImageScreenShotQuest_C>();
	}
};
static_assert(alignof(UCaptureImageScreenShotQuest_C) == 0x000008, "Wrong alignment on UCaptureImageScreenShotQuest_C");
static_assert(sizeof(UCaptureImageScreenShotQuest_C) == 0x000290, "Wrong size on UCaptureImageScreenShotQuest_C");
static_assert(offsetof(UCaptureImageScreenShotQuest_C, UberGraphFrame) == 0x000278, "Member 'UCaptureImageScreenShotQuest_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCaptureImageScreenShotQuest_C, CaptueImage) == 0x000280, "Member 'UCaptureImageScreenShotQuest_C::CaptueImage' has a wrong offset!");
static_assert(offsetof(UCaptureImageScreenShotQuest_C, CaputureImageMat) == 0x000288, "Member 'UCaptureImageScreenShotQuest_C::CaputureImageMat' has a wrong offset!");

}

